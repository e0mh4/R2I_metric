#include "decompile_radare2_obfuscated.h"
/* r2dec pseudo code output */
/* nostrip @ 0x402300 */
#include <stdint.h>
 
void dl_relocate_static_pie (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x4023c0 */
#include <stdint.h>
 
uint64_t dbg_usage (int64_t arg1, char const * lc_messages, infomap const * map_prog, char const * node) {
    int64_t var_8h;
    int32_t status;
    char * s2;
    uint32_t var_20h;
    char * s1;
    int64_t var_30h;
    rdi = arg1;
    rax = lc_messages;
    rbx = map_prog;
    r13 = node;
    /* void usage(int status); */
    *((rsp + 0x14)) = edi;
    eax = 0xc90aaef3;
    if (edi != 0) {
    }
    eax = 0x80db16ab;
    r14d = 0x4d785f96;
    r12d = 0xa02f9c70;
    goto label_5;
label_2:
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
    rax = *((rsp + 0x30));
    ecx = "whoami";
    ecx = 0x40e096;
    eax = 0x40e1b0;
    if (rax == rcx) {
        rcx = rax;
    }
    rdx = *((rsp + 0x30));
    edi = 1;
    eax = 0;
    printf_chk ();
    eax = 0xc260b3b7;
label_5:
    ecx = 0xc260b3b7;
    if (ecx <= 0xc90aaef2) {
        goto label_6;
    }
    if (ecx == 0xc90aaef3) {
        goto label_7;
    }
    if (ecx != 0x1a4cf7cf) {
        goto label_8;
    }
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
    eax = 0x5cecfd5d;
    ebx = emit_ancillary_info.infomap;
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
    goto label_3;
    do {
        edx = 5;
        rax = dcgettext (0, "Report any translation bugs to <https://translationproject.org/team/>\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        eax = 0xca98ea43;
label_0:
        if (eax <= 0xf53ca04b) {
            goto label_3;
        }
label_1:
        if (eax <= 0x4d785f95) {
            goto label_9;
        }
    } while (eax == 0x4d785f96);
    if (eax == 0x70c1ef37) {
        goto label_10;
    }
    if (eax != 0x5cecfd5d) {
        goto label_0;
    }
    *((rsp + 8)) = rbx;
    rax = *((rsp + 8));
    rax = *(rax);
    *((rsp + 0x18)) = rax;
    eax = 0xf53ca04c;
    if (*((rsp + 0x18)) != 0) {
        eax = r12d;
    }
    r15d = 0;
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
    goto label_3;
label_9:
    if (eax == 0xf53ca04c) {
        goto label_11;
    }
    if (eax != 0x2b649e26) {
        goto label_0;
    }
    rbx = *((rsp + 8));
    rbx += 0x10;
    eax = 0x5cecfd5d;
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
    goto label_3;
label_10:
    eax = strncmp (*((rsp + 0x28)), 0x40e232, 3);
    eax = 0xca98ea43;
    if (eax != 0) {
        eax = r14d;
    }
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
    goto label_3;
label_11:
    eax = 0xae1d18d4;
    ecx = 0x2b649e26;
    if ((r15b & 1) != 0) {
label_4:
        eax = ecx;
    }
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
label_3:
    if (eax <= 0xae1d18d3) {
        goto label_12;
    }
    if (eax == 0xae1d18d4) {
        goto label_13;
    }
    if (eax == 0xd0a41091) {
        goto label_14;
    }
    if (eax != 0xca98ea43) {
        goto label_0;
    }
    goto label_2;
label_12:
    if (eax == 0xa02f9c70) {
        goto label_15;
    }
    if (eax != 0xa850a8b2) {
        goto label_0;
    }
    r13 = *((rsp + 0x20));
    eax = 0xd0a41091;
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
    goto label_3;
label_13:
    rax = *((rsp + 8));
    rax = *((rax + 8));
    *((rsp + 0x20)) = rax;
    eax = 0xd0a41091;
    ecx = 0xa850a8b2;
    if (*((rsp + 0x20)) != 0) {
        eax = ecx;
    }
    r13d = "whoami";
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
    goto label_3;
label_14:
    *((rsp + 0x30)) = r13;
    edx = 5;
    rax = dcgettext (0, "\n%s online help: <%s>\n");
    rsi = rax;
    edi = 1;
    edx = "GNU coreutils";
    ecx = "https://www.gnu.org/software/coreutils/";
    eax = 0;
    printf_chk ();
    rax = setlocale (5, 0);
    *((rsp + 0x28)) = rax;
    eax = 0xca98ea43;
    ecx = 0x70c1ef37;
    goto label_4;
label_15:
    eax = strcmp ("whoami", *((rsp + 0x18)));
    r15b = (eax != 0) ? 1 : 0;
    eax = 0xf53ca04c;
    if (eax > 0xf53ca04b) {
        goto label_1;
    }
    goto label_3;
label_6:
    eax = ebp;
    if (ecx == 0x80db16ab) {
        goto label_5;
    }
    goto label_16;
label_7:
    rbx = stderr;
    edx = 5;
    rax = dcgettext (0, "Try '%s --help' for more information.\n");
    rdx = rax;
    rcx = program_name;
    esi = 1;
    eax = 0;
    rdi = rbx;
    fprintf_chk ();
    eax = 0xc260b3b7;
    goto label_5;
label_16:
    if (ecx != 0xc260b3b7) {
INVALID_JUMP;
    }
    return exit (*((rsp + 0x14)));
}
/* r2dec pseudo code output */
/* nostrip @ 0x4027c0 */
#include <stdint.h>
 
int64_t dbg_main (int32_t argc, char ** argv, uid_t uid) {
    passwd * pw;
    uid_t var_ch;
    int64_t var_10h;
    int64_t var_1ch;
    char ** s;
    rdi = argc;
    rsi = argv;
    rax = uid;
    /* int main(int argc,char ** argv); */
    rbx = rsi;
    r14d = edi;
    set_program_name (*(rbx));
    setlocale (6, 0x40e096);
    bindtextdomain (0x40e147, "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
    textdomain (0x40e147, rsi);
    edi = close_stdout;
    atexit ();
    eax = 0;
    parse_gnu_standard_options_only (r14d, rbx, "whoami", "GNU coreutils", *(obj.Version), 1);
    eax = optind;
    *((rsp + 0x1c)) = eax;
    eax = 0x508fb20f;
    r12d = 0x2869e4be;
    r13d = 0x9ac5822c;
    r15d = 0xb793642c;
    if (eax <= 0x2457ceda) {
        goto label_0;
    }
    goto label_2;
label_1:
    *((rsp + 0x20)) = rbp;
    eax = 0xa6e82e3d;
    if (*((rsp + 0x20)) != 0) {
        eax = r13d;
    }
    if (eax > 0x2457ceda) {
        goto label_2;
    }
    do {
label_0:
        if (eax <= 0xe1c61795) {
            goto label_3;
        }
        if (eax == 0xe1c61796) {
            goto label_4;
        }
        if (eax != 0xf12614a9) {
            goto label_5;
        }
        rax = *((rsp + 0x10));
        eax = 0x2457cedb;
        if (*(rax) != 0) {
            eax = r12d;
        }
        ebp = 0;
    } while (eax <= 0x2457ceda);
    goto label_2;
label_4:
    rax = errno_location ();
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x10));
    *(rax) = 0;
    eax = geteuid ();
    *((rsp + 0xc)) = eax;
    eax = *((rsp + 0xc));
    eax = 0x2457cedb;
    ecx = 0xf12614a9;
    if (eax == 0xffffffff) {
        eax = ecx;
    }
    if (eax <= 0x2457ceda) {
        goto label_0;
    }
label_2:
    if (eax == 0x2457cedb) {
        goto label_6;
    }
    if (eax == 0x2869e4be) {
        goto label_1;
    }
    if (eax != 0x508fb20f) {
        goto label_5;
    }
    eax = *((rsp + 0x1c));
    eax = 0xe1c61796;
    if (eax != r14d) {
        eax = r15d;
    }
    if (eax <= 0x2457ceda) {
        goto label_0;
    }
    goto label_2;
label_6:
    edi = *((rsp + 0xc));
    rax = getpwuid ();
    eax = 0x2869e4be;
    if (eax <= 0x2457ceda) {
        goto label_0;
    }
    goto label_2;
label_3:
    if (eax == 0x9ac5822c) {
        rax = *((rsp + 0x20));
        eax = puts (*(rax));
        eax = 0;
        return rax;
    }
    if (eax != 0xa6e82e3d) {
        if (eax == 0xb793642c) {
            goto label_7;
        }
INVALID_JUMP;
    }
    rax = *((rsp + 0x10));
    ebx = *(rax);
    edx = 5;
    rax = dcgettext (0, "cannot find name for user ID %lu");
    ecx = *((rsp + 0xc));
    eax = 0;
    error (1, ebx, rax);
label_7:
    edx = 5;
    rax = dcgettext (0, "extra operand %s");
    rax = *(obj.optind);
    rax = quote (*((rbx + rax*8)), rsi, rdx, rcx);
    rcx = rax;
    eax = 0;
    error (0, 0, rbp);
    dbg_usage (1);
}
/* r2dec pseudo code output */
/* nostrip @ 0x402a30 */
#include <stdint.h>
 
void dbg_close_stdout_set_file_name (char const * file) {
    rdi = file;
    /* void close_stdout_set_file_name(char const * file); */
    *(obj.file_name) = rdi;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402a40 */
#include <stdint.h>
 
void dbg_close_stdout_set_ignore_EPIPE (_Bool ignore) {
    rdi = ignore;
    /* void close_stdout_set_ignore_EPIPE(_Bool ignore); */
    *(obj.ignore_EPIPE) = dil;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402a50 */
#include <stdint.h>
 
uint64_t dbg_close_stdout (char const * write_error) {
    uint32_t var_4h;
    int64_t var_8h;
    uint32_t var_10h;
    rax = write_error;
    /* void close_stdout(); */
    eax = close_stream (*(obj.stdout));
    *((rsp + 4)) = eax;
    r14d = 0x46fabf96;
    r15d = 0x57a5f57e;
    r12d = 0x27b3246;
    r13d = 0x2b828cfd;
    ebx = 0xde062b96;
    if (ebp > 0xaa3a998) {
        goto label_4;
    }
    goto label_1;
label_2:
    eax = close_stream (*(obj.stderr));
    if (eax != 0) {
    }
    do {
label_0:
        if (ebp > 0xaa3a998) {
            goto label_4;
        }
label_1:
        if (ebp <= 0xde062b95) {
            goto label_5;
        }
        if (ebp == 0xde062b96) {
            goto label_6;
        }
        if (ebp == 0x932deea) {
            goto label_7;
        }
    } while (ebp != 0x27b3246);
    goto label_8;
label_5:
    if (ebp == 0x92e8da90) {
        goto label_9;
    }
    if (ebp != 0xc860c58b) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "write error");
    *((rsp + 8)) = rax;
    rax = file_name;
    *((rsp + 0x10)) = rax;
    if (*((rsp + 0x10)) != 0) {
    }
    rax = errno_location ();
    eax = *(rax);
    *(rsp) = eax;
    if (ebp <= 0xaa3a998) {
        goto label_1;
    }
    goto label_4;
label_6:
    if (*(obj.ignore_EPIPE) != 0) {
    }
    if (ebp <= 0xaa3a998) {
        goto label_1;
    }
    goto label_4;
label_9:
    rcx = *((rsp + 8));
    eax = 0;
    error (0, *(rsp), 0x40e355);
label_3:
    if (ebp <= 0xaa3a998) {
        goto label_1;
    }
label_4:
    if (ebp > 0x57a5f57d) {
        goto label_10;
    }
    if (ebp == 0x2b828cfd) {
        goto label_2;
    }
    if (ebp != 0x46fabf96) {
        goto label_11;
    }
    rax = quotearg_colon (*((rsp + 0x10)));
    rcx = rax;
    r8 = *((rsp + 8));
    eax = 0;
    error (0, *(rsp), "%s: %s");
    goto label_3;
label_10:
    if (ebp == 0x57a5f57e) {
        goto label_12;
    }
    if (ebp != 0x7be25abb) {
        goto label_0;
    }
    if (*((rsp + 4)) != 0) {
    }
    if (ebp <= 0xaa3a998) {
        goto label_1;
    }
    goto label_4;
label_12:
    rax = errno_location ();
    if (*(rax) == 0x20) {
    }
    if (ebp <= 0xaa3a998) {
        goto label_1;
    }
    goto label_4;
label_11:
    if (ebp != 0xaa3a999) {
        goto label_0;
    }
    exit (*(obj.exit_failure));
label_7:
    return rax;
label_8:
    return exit (*(obj.exit_failure));
}
/* r2dec pseudo code output */
/* nostrip @ 0x402c70 */
#include <stdint.h>
 
uint64_t dbg_parse_long_options (int64_t arg_130h, int64_t arg1, int64_t arg10, int64_t arg11, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, char ** argv, int32_t c, void (*usage_func)()) {
    int32_t argc;
    int64_t var_4h;
    char const * command_name;
    char const * package;
    char const * version;
    va_list authors;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
    int64_t var_e0h;
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
    rbx = argv;
    rax = c;
    r13 = usage_func;
    /* void parse_long_options(int argc,char ** argv,char const * command_name,char const * package,char const * version,void (*usage_func)(),va_args ..); */
    r13 = r9;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rcx;
    *((rsp + 8)) = rdx;
    rbx = rsi;
    if (al != 0) {
        *((rsp + 0x70)) = xmm0;
        *((rsp + 0x80)) = xmm1;
        *((rsp + 0x90)) = xmm2;
        *((rsp + 0xa0)) = xmm3;
        *((rsp + 0xb0)) = xmm4;
        *((rsp + 0xc0)) = xmm5;
        *((rsp + 0xd0)) = xmm6;
        *((rsp + 0xe0)) = xmm7;
    }
    eax = opterr;
    *((rsp + 4)) = eax;
    *(obj.opterr) = 0;
    r14d = 0x11cd842a;
    eax = 0x4cea61a9;
    if (ebp != 2) {
        r14d = eax;
    }
    eax = 0x2e4d36f;
    r15d = 0x68ed79f2;
    r12d = 0x56dccd01;
    goto label_0;
label_1:
    eax = 0x4cea61a9;
    do {
label_0:
        ecx = eax;
        if (ecx > 0x4cea61a8) {
            goto label_2;
        }
        if (ecx <= 0x2e4d36e) {
            goto label_3;
        }
        eax = r14d;
    } while (ecx == 0x2e4d36f);
    if (ecx == 0x11cd842a) {
        goto label_4;
    }
    eax = ecx;
    if (ecx != 0x48cccc1d) {
        goto label_0;
    }
    eax = *(rsp);
    eax = 0x9305d9ec;
    if (eax == 0x68) {
        eax = r15d;
    }
    goto label_0;
label_2:
    if (ecx <= 0x56dccd00) {
        goto label_5;
    }
    if (ecx == 0x68ed79f2) {
        goto label_6;
    }
    if (ecx != 0x757c25ab) {
        goto label_7;
    }
    eax = *(rsp);
    eax = 0x9305d9ec;
    if (eax == 0x76) {
        eax = r12d;
    }
    goto label_0;
label_3:
    if (ecx == 0x9305d9ec) {
        goto label_1;
    }
    eax = ecx;
    if (ecx != 0x9794223a) {
        goto label_0;
    }
    eax = *(rsp);
    eax = 0x757c25ab;
    ecx = 0x48cccc1d;
    if (eax < 0x76) {
        eax = ecx;
    }
    goto label_0;
label_5:
    if (ecx == 0x4cea61a9) {
        goto label_8;
    }
    eax = ecx;
    if (ecx != 0x4d197d2a) {
        goto label_0;
    }
    eax = 0x9794223a;
    goto label_0;
label_4:
    edx = 0x40e358;
    ecx = long_options;
    r8d = 0;
    edi = ebp;
    rsi = rbx;
    eax = getopt_long ();
    *(rsp) = eax;
    eax = *(rsp);
    eax = 0x4cea61a9;
    ecx = 0x4d197d2a;
    if (eax != 0xffffffff) {
        eax = ecx;
    }
    goto label_0;
label_6:
    edi = 0;
invalid_funccall(); //    void (*r13)() ();
    goto label_1;
label_7:
    eax = ecx;
    if (ecx != 0x56dccd01) {
        goto label_0;
    }
    rax = rsp + 0x40;
    *((rsp + 0x30)) = rax;
    rax = rsp + 0x130;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x24)) = 0x30;
    *((rsp + 0x20)) = 0x30;
    rdi = stdout;
    r8 = rsp + 0x20;
    rsi = *((rsp + 8));
    rdx = *((rsp + 0x10));
    rcx = *((rsp + 0x18));
    version_etc_va ();
    exit (0);
label_8:
    eax = *((rsp + 4));
    *(obj.opterr) = eax;
    *(obj.optind) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x402ee0 */
#include <stdint.h>
 
uint64_t dbg_parse_gnu_standard_options_only (int64_t arg_130h, int64_t arg_138h, int64_t arg10, int64_t arg11, int64_t arg4, int64_t arg5, int64_t arg7, int64_t arg8, int64_t arg9, int32_t argc, char ** argv, int32_t c, char const * command_name, char const * optstring, _Bool scan_all, void (*usage_func)()) {
    int64_t var_8h;
    int64_t var_ch;
    char const * package;
    char const * version;
    va_list authors;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
    int64_t var_e0h;
    xmm3 = arg10;
    xmm4 = arg11;
    rcx = arg4;
    r8 = arg5;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    rdi = argc;
    rsi = argv;
    rax = c;
    r12 = command_name;
    rdx = optstring;
    r9 = scan_all;
    rbx = usage_func;
    /* void parse_gnu_standard_options_only(int argc,char ** argv,char const * command_name,char const * package,char const * version,_Bool scan_all,void (*usage_func)(),va_args ..); */
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rcx;
    r12 = rdx;
    if (al != 0) {
        *((rsp + 0x70)) = xmm0;
        *((rsp + 0x80)) = xmm1;
        *((rsp + 0x90)) = xmm2;
        *((rsp + 0xa0)) = xmm3;
        *((rsp + 0xb0)) = xmm4;
        *((rsp + 0xc0)) = xmm5;
        *((rsp + 0xd0)) = xmm6;
        *((rsp + 0xe0)) = xmm7;
    }
    rbx = *((rsp + 0x130));
    eax = opterr;
    *((rsp + 0xc)) = eax;
    *(obj.opterr) = 1;
    eax = 0x40e096;
    edx = 0x40e358;
    if (r9b != 0) {
        rdx = rax;
    }
    ecx = long_options;
    r8d = 0;
    eax = getopt_long ();
    *((rsp + 8)) = eax;
    eax = 0x2b39bd1e;
    r13d = 0xf95efb52;
    r14d = 0x4cd8e95e;
    r15d = 0x94a8d460;
    if (eax <= 0x2b39bd1d) {
        goto label_0;
    }
    goto label_3;
label_2:
invalid_funccall(); //    void (*rbx)() ();
    eax = 0x7e261eed;
    do {
label_1:
        if (eax > 0x2b39bd1d) {
            goto label_3;
        }
label_0:
        if (eax <= 0xaa1a71f8) {
            goto label_4;
        }
        if (eax == 0xaa1a71f9) {
            goto label_5;
        }
        if (eax == 0xf95efb52) {
            goto label_6;
        }
    } while (eax != 0x16076fda);
    eax = *((rsp + 8));
    eax = 0x373d4050;
    if (eax == 0x76) {
        eax = r14d;
    }
    if (eax <= 0x2b39bd1d) {
        goto label_0;
    }
    goto label_3;
label_4:
    if (eax == 0x821ab5c1) {
        goto label_7;
    }
    if (eax != 0x94a8d460) {
        goto label_1;
    }
    eax = 0xaa1a71f9;
    if (eax <= 0x2b39bd1d) {
        goto label_0;
    }
    goto label_3;
label_5:
    eax = *((rsp + 8));
    eax = 0x16076fda;
    if (eax < 0x76) {
        eax = ebp;
    }
    if (eax <= 0x2b39bd1d) {
        goto label_0;
    }
    goto label_3;
label_6:
    edi = 0;
    goto label_2;
label_7:
    eax = *((rsp + 8));
    eax = 0x373d4050;
    if (eax == 0x68) {
        eax = r13d;
    }
    if (eax <= 0x2b39bd1d) {
        goto label_0;
    }
label_3:
    if (eax <= 0x4cd8e95d) {
        goto label_8;
    }
    if (eax == 0x5fc9bae9) {
        goto label_9;
    }
    if (eax == 0x7e261eed) {
        goto label_10;
    }
    if (eax != 0x4cd8e95e) {
        goto label_1;
    }
    goto label_11;
label_8:
    if (eax == 0x2b39bd1e) {
        goto label_12;
    }
    if (eax != 0x373d4050) {
        goto label_1;
    }
    eax = 0x5fc9bae9;
    if (eax <= 0x2b39bd1d) {
        goto label_0;
    }
    goto label_3;
label_9:
    edi = *(obj.exit_failure);
    goto label_2;
label_12:
    eax = *((rsp + 8));
    eax = 0x7e261eed;
    if (eax != 0xffffffff) {
        eax = r15d;
    }
    if (eax <= 0x2b39bd1d) {
        goto label_0;
    }
    goto label_3;
label_10:
    eax = *((rsp + 0xc));
    *(obj.opterr) = eax;
    return eax;
label_11:
    rax = rsp + 0x40;
    *((rsp + 0x30)) = rax;
    rax = rsp + 0x138;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x24)) = 0x30;
    *((rsp + 0x20)) = 0x30;
    rdi = stdout;
    r8 = rsp + 0x20;
    rsi = r12;
    rdx = *((rsp + 0x10));
    rcx = *((rsp + 0x18));
    version_etc_va ();
    return exit (0);
}
/* r2dec pseudo code output */
/* nostrip @ 0x403140 */
#include <stdint.h>
 
uint64_t dbg_set_program_name (char ** arg1, char const * argv0, char const * base) {
    char * s1;
    rdi = arg1;
    rbx = argv0;
    rax = base;
    /* void set_program_name(char const * argv0); */
    rbx = rdi;
    eax = 0x1d387c05;
    if (rbx == 0) {
    }
    eax = 0xf6b42ee1;
    r14d = 0x6651bced;
    r15d = 0x5f163202;
    r12d = 0x809b366b;
    if (eax <= 0x5d5f4a90) {
        goto label_1;
    }
    goto label_2;
label_0:
    rax = strrchr (rbx, 0x2f);
    rax = rax + 1;
    if (rax == 0) {
        rax = rbx;
    }
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    rax -= rbx;
    eax = 0x5d5f4a91;
    if (rax > 6) {
        eax = r15d;
    }
    rcx = rbx;
    do {
        if (eax > 0x5d5f4a90) {
            goto label_2;
        }
label_1:
        if (eax > 0x1d387c04) {
            goto label_3;
        }
        if (eax == 0x809b366b) {
            goto label_4;
        }
        eax = ebp;
    } while (eax == 0xf6b42ee1);
    goto label_5;
label_3:
    if (eax == 0x506dc000) {
        goto label_0;
    }
    goto label_6;
label_4:
    eax = strncmp (*((rsp + 8)), 0x40e410, 3);
    eax = 0x5d5f4a91;
    if (eax == 0) {
        eax = r14d;
    }
    rcx = *((rsp + 8));
    if (eax <= 0x5d5f4a90) {
        goto label_1;
    }
label_2:
    if (eax == 0x5d5f4a91) {
        goto label_7;
    }
    if (eax == 0x5f163202) {
        goto label_8;
    }
    if (eax != 0x6651bced) {
        goto label_5;
    }
    rcx = *((rsp + 8));
    rcx += 3;
    *(obj.__progname) = rcx;
    eax = 0x5d5f4a91;
    if (eax <= 0x5d5f4a90) {
        goto label_1;
    }
    goto label_2;
label_8:
    rdi += 0xfffffffffffffff9;
    eax = strncmp (*((rsp + 8)), "/.libs/", 7);
    eax = 0x5d5f4a91;
    if (eax == 0) {
        eax = r12d;
    }
    rcx = rbx;
    if (eax <= 0x5d5f4a90) {
        goto label_1;
    }
    goto label_2;
label_7:
    *(obj.program_name) = rcx;
    *(obj.program_invocation_name) = rcx;
    return rax;
label_6:
    if (eax != 0x1d387c05) {
INVALID_JUMP;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 0x37, 1, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4032e0 */
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
/* nostrip @ 0x403320 */
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
/* nostrip @ 0x403330 */
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
/* nostrip @ 0x403340 */
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
/* nostrip @ 0x403380 */
#include <stdint.h>
 
int32_t dbg_set_quoting_flags (int64_t arg4, int32_t i, quoting_options * o, int32_t r) {
    rcx = arg4;
    rsi = i;
    rdi = o;
    rax = r;
    /* int set_quoting_flags(quoting_options * o,int i); */
    eax = 0x2dbe58cd;
    r8d = 0x46681744;
    if (rdi != 0) {
        r8d = eax;
    }
    eax = 0xcbc4c522;
    goto label_1;
label_0:
    eax = 0x2dbe58cd;
    ecx = default_quoting_options;
    do {
label_1:
        edx = eax;
        r9 = rcx;
        rcx = rdi;
        eax = r8d;
    } while (edx == 0xcbc4c522);
    if (edx == 0x46681744) {
        goto label_0;
    }
    if (edx == 0x2dbe58cd) {
        eax = *((r9 + 4));
        *((r9 + 4)) = esi;
        return eax;
    }
}
/* r2dec pseudo code output */
/* nostrip @ 0x4033f0 */
#include <stdint.h>
 
void set_custom_quoting (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    eax = 0xf93fd158;
    r10d = 0xa5a09921;
    if (rdi != 0) {
        r10d = eax;
    }
    r9d = 0x7a9369fa;
    eax = 0x52e6450;
    if (rdx == 0) {
        r9d = eax;
    }
    if (rsi == 0) {
        r9d = eax;
    }
    eax = 0x9f90a2e0;
    goto label_2;
label_0:
    eax = 0xf93fd158;
    r11d = default_quoting_options;
    do {
label_2:
        ecx = eax;
        r8 = r11;
        r11 = rdi;
        eax = r10d;
    } while (ecx == 0x9f90a2e0);
    goto label_3;
label_1:
    *(rsp) = r8;
    rax = *(rsp);
    *(rax) = 0xa;
    ecx = r9d;
label_3:
    if (ecx > 0x52e644f) {
        goto label_4;
    }
    if (ecx == 0xa5a09921) {
        goto label_0;
    }
    if (ecx == 0xf93fd158) {
        goto label_1;
    }
    goto label_5;
label_4:
    if (ecx == 0x7a9369fa) {
        rax = *(rsp);
        *((rax + 0x28)) = rsi;
        rax = *(rsp);
        *((rax + 0x30)) = rdx;
        return;
    }
    if (ecx != 0x52e6450) {
INVALID_JUMP;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4034b0 */
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
/* nostrip @ 0x403530 */
#include <stdint.h>
 
int64_t dbg_quotearg_buffer_restyled (int64_t arg_708h, uint32_t arg_6f0h, int64_t arg_6f8h, int64_t arg_700h, int64_t arg_90h, int64_t arg_228h, void * arg1, size_t arg2, char ** arg3, int64_t arg4, int64_t arg5, int64_t arg6, char * buffer, size_t bytes) {
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    func var_8h;
    int64_t var_9h;
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    uint32_t var_10h;
    int64_t var_17h;
    func var_18h;
    int64_t var_27h;
    int64_t var_28h;
    int64_t var_29h;
    int64_t var_2ah;
    int64_t var_2bh;
    int64_t var_2ch;
    int64_t var_2dh;
    int64_t var_2eh;
    int64_t var_2fh;
    void * var_30h;
    func init;
    int64_t var_44h;
    int64_t var_45h;
    int64_t var_46h;
    int64_t var_47h;
    int64_t var_48h;
    int64_t var_49h;
    int64_t var_4ah;
    int64_t var_4bh;
    int64_t var_4ch;
    int64_t var_4dh;
    int64_t var_4eh;
    int64_t var_4fh;
    int64_t var_50h;
    int64_t var_51h;
    int64_t var_52h;
    int64_t var_53h;
    int64_t var_54h;
    int64_t var_55h;
    int64_t var_56h;
    int64_t var_57h;
    func var_58h;
    uint32_t var_60h;
    uint32_t var_6ch;
    int64_t var_70h;
    int64_t var_76h;
    int64_t var_77h;
    int64_t var_78h;
    int64_t var_79h;
    int64_t var_7ah;
    _Bool elide_outer_quotes;
    int64_t var_7ch;
    int64_t var_7dh;
    int64_t var_7eh;
    int64_t var_7fh;
    int64_t var_80h;
    int64_t var_81h;
    int64_t var_82h;
    int64_t var_83h;
    int64_t var_84h;
    int64_t var_85h;
    int64_t var_86h;
    int64_t var_87h;
    int64_t var_88h;
    int64_t var_89h;
    int64_t var_8ah;
    int64_t var_8bh;
    int64_t var_8ch;
    func var_8dh;
    int64_t var_8eh;
    int64_t var_8fh;
    int64_t var_90h;
    int64_t var_94h;
    int64_t var_9ah;
    int64_t var_9bh;
    int64_t var_9ch;
    uint32_t var_9dh;
    int64_t var_9eh;
    int64_t var_9fh;
    int64_t var_a0h;
    int64_t var_a1h;
    int64_t var_a2h;
    int64_t var_a3h;
    uint32_t var_a4h;
    int64_t var_a5h;
    int64_t var_a6h;
    int64_t var_a7h;
    int64_t var_a8h;
    int64_t var_a9h;
    int64_t var_aah;
    func var_abh;
    int64_t var_ach;
    int64_t var_adh;
    int64_t var_aeh;
    int64_t var_afh;
    char const * arg;
    func var_b8h;
    void * var_c0h;
    int64_t var_cch;
    char ** ubp_av;
    int64_t var_dch;
    int64_t var_e1h;
    int64_t var_e2h;
    int64_t var_e3h;
    int64_t var_e4h;
    int64_t var_e5h;
    int64_t var_e6h;
    int64_t var_e7h;
    int64_t var_e8h;
    int64_t var_e9h;
    int64_t var_eah;
    int64_t var_ebh;
    int64_t var_ech;
    int64_t var_edh;
    int64_t var_eeh;
    int64_t var_efh;
    int64_t var_f0h;
    int64_t var_f1h;
    int64_t var_f2h;
    int64_t var_f3h;
    int64_t var_f4h;
    int64_t var_f5h;
    int64_t var_f6h;
    int64_t var_f7h;
    uint32_t var_f8h;
    uint32_t var_100h;
    func var_108h;
    func var_110h;
    void * var_118h;
    int64_t var_120h;
    int64_t var_124h;
    int64_t var_128h;
    int64_t var_12ch;
    uint32_t var_130h;
    int64_t var_134h;
    func var_138h;
    int64_t var_144h;
    int64_t var_148h;
    int64_t var_14ch;
    int64_t var_150h;
    int64_t var_154h;
    int64_t var_158h;
    int64_t var_15ch;
    func fini;
    uint32_t var_164h;
    uint32_t var_168h;
    uint32_t var_16ch;
    int64_t var_170h;
    int64_t var_178h;
    uint32_t var_180h;
    int64_t var_184h;
    int64_t var_188h;
    int64_t var_18ch;
    int64_t var_190h;
    uint32_t var_194h;
    int64_t var_198h;
    int64_t var_19ch;
    int64_t var_1a0h;
    char * var_1a8h;
    size_t var_1b0h;
    int64_t var_1b8h;
    func var_1c0h;
    func var_1c8h;
    char * var_1d0h;
    int64_t var_1d8h;
    int64_t var_1e0h;
    func var_1e8h;
    func var_1f0h;
    uint32_t var_1f8h;
    int64_t var_200h;
    int64_t var_208h;
    func var_210h;
    uint32_t var_218h;
    int64_t var_220h;
    int64_t var_228h;
    int64_t var_230h;
    uint32_t var_238h;
    int64_t var_240h;
    int64_t var_248h;
    size_t n;
    uint32_t var_258h;
    func var_260h;
    int64_t var_268h;
    int64_t var_26ch;
    int64_t var_270h;
    func var_278h;
    size_t var_280h;
    uint32_t var_288h;
    func var_290h;
    int64_t var_298h;
    func var_2a0h;
    int64_t var_2a8h;
    func var_2b0h;
    func var_2b8h;
    void * var_2c0h;
    int64_t var_2c8h;
    func var_2d0h;
    uint32_t var_2d8h;
    func var_2e0h;
    int64_t var_2e8h;
    func var_2f0h;
    size_t var_2f8h;
    uint32_t var_300h;
    char * s2;
    int64_t var_310h;
    func var_318h;
    uint32_t var_320h;
    func var_328h;
    int64_t var_330h;
    int64_t var_338h;
    int64_t var_340h;
    int64_t var_348h;
    int64_t var_350h;
    int64_t var_358h;
    int64_t var_360h;
    func var_368h;
    int64_t var_370h;
    int64_t var_378h;
    int64_t var_380h;
    int64_t var_388h;
    int64_t var_390h;
    int64_t var_398h;
    int64_t var_3a0h;
    int64_t var_3a8h;
    uint32_t var_3b0h;
    size_t var_3b8h;
    func var_3c0h;
    void * var_3c8h;
    int64_t var_3d0h;
    func var_3d8h;
    func var_3e0h;
    func var_3e8h;
    char * var_3f0h;
    int64_t var_3f8h;
    func var_400h;
    int64_t var_408h;
    int64_t var_410h;
    int64_t var_418h;
    int64_t var_420h;
    int64_t var_428h;
    int64_t var_430h;
    int64_t var_438h;
    int64_t var_440h;
    int64_t var_448h;
    int64_t var_450h;
    int64_t var_458h;
    int64_t var_460h;
    int64_t var_468h;
    int64_t var_470h;
    int64_t var_478h;
    uint32_t var_480h;
    int64_t var_488h;
    int64_t var_490h;
    int64_t var_498h;
    int64_t var_4a0h;
    char * s;
    char * var_4c8h_2;
    int64_t var_4b8h_2;
    func var_4c0h;
    int64_t var_4c8h;
    uint32_t var_4d0h;
    func var_4d8h;
    func var_4e0h;
    int64_t var_4e8h;
    func var_4f0h;
    void * var_4f8h;
    int64_t var_500h;
    int64_t var_508h;
    func var_510h;
    int64_t var_518h;
    void * var_520h;
    uint32_t var_528h;
    uint32_t var_530h;
    int32_t flags;
    wchar_t w;
    func rtld_fini;
    int64_t var_548h;
    int64_t var_54ch;
    int64_t var_550h;
    char ** var_554h;
    wint_t wc;
    uint32_t var_55ch;
    int64_t var_560h;
    char const * quote_string;
    int64_t var_570h;
    size_t argsize;
    char const * left_quote;
    char const * right_quote;
    mbstate_t mbstate;
    int64_t var_598h;
    int64_t var_5a0h;
    int64_t var_5a8h;
    mbstate_t * ps;
    int64_t var_5b8h;
    int64_t var_5c0h;
    int64_t var_5c8h;
    int64_t var_5d0h;
    int64_t var_5d8h;
    int64_t var_5e0h;
    int64_t var_5e8h;
    int64_t var_5f0h;
    int64_t var_5f8h;
    int64_t var_600h;
    int64_t var_608h;
    void * var_610h;
    int64_t var_618h;
    int64_t var_620h;
    int64_t var_628h;
    int64_t var_630h;
    int64_t var_638h;
    int64_t var_640h;
    int64_t var_648h;
    int64_t var_650h;
    int64_t var_658h;
    int64_t var_660h;
    int64_t var_668h;
    func var_670h;
    int64_t var_678h;
    func var_680h;
    uint32_t var_688h;
    int64_t var_690h;
    int64_t var_698h;
    int64_t var_6a0h;
    func argc;
    func var_6b0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rbx = buffer;
    rax = bytes;
    /* size_t quotearg_buffer_restyled(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_style quoting_style,int flags,unsigned int const * quote_these_too,char const * left_quote,char const * right_quote); */
label_4:
    *((rsp + 0x268)) = r8d;
    *((rsp + 0x598)) = rcx;
    *((rsp + 0xd0)) = rdx;
    *((rsp + 0x590)) = rsi;
    rbx = rdi;
    rax = *((rsp + 0x700));
    *((rsp + 0x5a8)) = rax;
    rax = *((rsp + 0x6f8));
    *((rsp + 0x5a0)) = rax;
    rax = ctype_get_mb_cur_max ();
    *(rsp + 0x9c) = (rax == 1) ? 1 : 0;
    al = *((rsp + 0x9c));
    eax = ebp;
    al >>= 1;
    al &= 1;
    *((rsp + 0x9b)) = al;
    eax = 0x7d729940;
    ecx = 0x7d349bf0;
    if ((bpl & 1) == 0) {
        eax = ecx;
    }
    *((rsp + 0x550)) = eax;
    eax = 0x41b46991;
    if ((bpl & 4) == 0) {
        eax = ecx;
    }
    *((rsp + 0x54c)) = eax;
    eax = 0xaef5717b;
    ecx = 0xc7797312;
    if (*((rsp + 0x6f0)) != 0) {
        ecx = eax;
    }
    *((rsp + 0x548)) = ecx;
    *((rsp + 0x554)) = ebp;
    ebp &= 0xfffffffd;
    *((rsp + 0x544)) = ebp;
    *((rsp + 0x9a)) = 1;
    *((rsp + 0xd)) = al;
    *((rsp + 0xe)) = al;
    *((rsp + 0xf)) = al;
    *((rsp + 0x2b)) = al;
    *((rsp + 0x29)) = al;
    *((rsp + 0x2a)) = al;
    *((rsp + 0x52)) = al;
    *((rsp + 0x4f)) = al;
    *((rsp + 0x50)) = al;
    *((rsp + 0x51)) = al;
    *((rsp + 9)) = al;
    *((rsp + 0xa)) = al;
    *((rsp + 8)) = al;
    *((rsp + 0x4c)) = al;
    *((rsp + 0x4e)) = al;
    *((rsp + 0x4d)) = al;
    esi = 0x456ba924;
    ecx = 0;
    *((rsp + 0x588)) = rcx;
    *((rsp + 0x230)) = rcx;
    *((rsp + 0x160)) = ecx;
    *((rsp + 0x3e8)) = rcx;
    *((rsp + 0x3f8)) = rcx;
    *((rsp + 0x2f0)) = rcx;
    *((rsp + 0x3f0)) = rcx;
    *((rsp + 0x400)) = rcx;
    *((rsp + 0xf8)) = rax;
    *((rsp + 0x90)) = eax;
    *((rsp + 0x100)) = rax;
    *((rsp + 0x108)) = rcx;
    *((rsp + 0x110)) = rcx;
    *((rsp + 0x118)) = rcx;
    *((rsp + 0x19c)) = ecx;
    *((rsp + 0x15c)) = ecx;
    *((rsp + 0x2e0)) = rcx;
    *((rsp + 0x1c0)) = rax;
    *((rsp + 0x12c)) = eax;
    *((rsp + 0x128)) = eax;
    *((rsp + 0x1e0)) = rax;
    *((rsp + 0x1e8)) = rax;
    *((rsp + 0x1f0)) = rcx;
    *((rsp + 0x1f8)) = rcx;
    *((rsp + 0x2e8)) = rcx;
    *((rsp + 0x288)) = rax;
    *((rsp + 0x150)) = ecx;
    *((rsp + 0x2a8)) = rcx;
    *((rsp + 0x2b8)) = rcx;
    *((rsp + 0x2d0)) = rcx;
    *((rsp + 0x2d8)) = rcx;
    *((rsp + 0xb0)) = rax;
    *((rsp + 0xb8)) = rax;
    *((rsp + 0xc0)) = rax;
    *((rsp + 0x148)) = eax;
    *((rsp + 0x158)) = ecx;
    *((rsp + 0x144)) = eax;
    *((rsp + 0x298)) = rcx;
    *((rsp + 0x278)) = rax;
    *((rsp + 0x2c0)) = rcx;
    *((rsp + 0x198)) = ecx;
    *((rsp + 0x3e0)) = rcx;
    *((rsp + 0x154)) = ecx;
    *((rsp + 0x2b0)) = rcx;
    *((rsp + 0x14c)) = eax;
    *((rsp + 0x2c8)) = rcx;
    *((rsp + 0x2a0)) = rcx;
    *((rsp + 0x184)) = ecx;
    *((rsp + 0x3d8)) = rcx;
    *((rsp + 0x3c8)) = rcx;
    *((rsp + 0x18c)) = ecx;
    *((rsp + 0x370)) = rax;
    *((rsp + 0x3b0)) = rax;
    *((rsp + 0x194)) = ecx;
    *((rsp + 0x120)) = eax;
    *((rsp + 0x200)) = rcx;
    *((rsp + 0x124)) = eax;
    *((rsp + 0x188)) = ecx;
    *((rsp + 0x190)) = ecx;
    *((rsp + 0x378)) = rax;
    *((rsp + 0x3d0)) = rcx;
    *((rsp + 0x270)) = rax;
    *((rsp + 0x280)) = rax;
    *((rsp + 0x368)) = rax;
    *((rsp + 0x3c0)) = rcx;
    *((rsp + 0x94)) = eax;
    *((rsp + 0x1c8)) = rax;
    *((rsp + 0x290)) = rax;
    *((rsp + 0x134)) = eax;
    *((rsp + 0x228)) = rax;
    *((rsp + 0x3b8)) = rax;
    *((rsp + 0x360)) = rax;
    *((rsp + 0x388)) = rax;
    *((rsp + 0x3a0)) = rax;
    *((rsp + 0x3a8)) = rax;
    *((rsp + 0x350)) = rax;
    *((rsp + 0x358)) = rax;
    *((rsp + 0x1b8)) = rax;
    *((rsp + 0x1b0)) = rax;
    *((rsp + 0x1a8)) = rax;
    *((rsp + 0x1a0)) = rax;
    *((rsp + 0x1d0)) = rax;
    *((rsp + 0x1d8)) = rax;
    *((rsp + 0x130)) = eax;
    *((rsp + 0x338)) = rax;
    *((rsp + 0x340)) = rax;
    *((rsp + 0x398)) = rax;
    *((rsp + 0x348)) = rax;
    *((rsp + 0x380)) = rax;
    *((rsp + 0x390)) = rax;
    *((rsp + 0x330)) = rax;
    *((rsp + 0x180)) = eax;
    eax = 0;
    *((rsp + 0x560)) = rax;
    eax = 0;
    *((rsp + 0x568)) = rax;
    eax = 0;
    *((rsp + 0x570)) = rax;
    eax = 0;
    *((rsp + 0x578)) = rax;
    eax = 0;
    *((rsp + 0x580)) = rax;
    *((rsp + 0x81)) = al;
    *((rsp + 0x82)) = al;
    *((rsp + 0x83)) = al;
    *((rsp + 0x84)) = al;
    *((rsp + 0x46)) = al;
    *((rsp + 0x4b)) = al;
    *((rsp + 0x49)) = al;
    *((rsp + 0x4a)) = al;
    *((rsp + 0x7a)) = al;
    *((rsp + 0x80)) = al;
    *((rsp + 0x7d)) = al;
    *((rsp + 0x45)) = al;
    *((rsp + 0x17)) = al;
    *((rsp + 0x28)) = al;
    *((rsp + 0x48)) = al;
    *((rsp + 0x7f)) = al;
    *((rsp + 0x77)) = al;
    *((rsp + 0x78)) = al;
    *((rsp + 0x79)) = al;
    *((rsp + 0x27)) = al;
    *((rsp + 0x47)) = al;
    *((rsp + 0x44)) = al;
    *((rsp + 0x7c)) = al;
    *((rsp + 0x76)) = al;
    *((rsp + 0x7e)) = al;
    *((rsp + 0x7b)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_2:
    rax = *((rsp + 0x18));
    *((rsp + 0xf8)) = rax;
    do {
label_0:
        if (esi > 0xfe383a2f) {
            goto label_3;
        }
label_1:
        if (esi <= 0xbf38d51f) {
            goto label_7;
        }
        if (esi > 0xde40a221) {
            goto label_8;
        }
        if (esi > 0xcdcbf3ab) {
            goto label_9;
        }
        if (esi <= 0xc435ef44) {
            goto label_10;
        }
        if (esi <= 0xc8f275a3) {
            goto label_11;
        }
        if (esi > 0xccbf8f97) {
            goto label_12;
        }
        if (esi == 0xc8f275a4) {
            goto label_13;
        }
        if (esi == 0xcaa10807) {
            goto label_14;
        }
    } while (esi != 0xcaea675a);
    eax = *((rsp + 0xcc));
    esi = 0x618b0c4c;
    ecx = 0x320d6956;
    goto label_15;
label_7:
    if (esi <= 0x991e8b7a) {
        goto label_16;
    }
    if (esi > 0xae212b6d) {
        goto label_17;
    }
    if (esi <= 0xa3e3ae8e) {
        goto label_18;
    }
    if (esi <= 0xa8a806d7) {
        goto label_19;
    }
    if (esi > 0xac0ae1e2) {
        goto label_20;
    }
    if (esi == 0xa8a806d8) {
        goto label_21;
    }
    if (esi == 0xa8eacb60) {
        goto label_22;
    }
    if (esi != 0xa96168f2) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    goto label_23;
label_8:
    if (esi > 0xee890294) {
        goto label_24;
    }
    if (esi <= 0xe26b1d04) {
        goto label_25;
    }
    if (esi <= 0xe89c5b45) {
        goto label_26;
    }
    if (esi > 0xec9504f4) {
        goto label_27;
    }
    if (esi == 0xe89c5b46) {
        goto label_28;
    }
    if (esi == 0xe9daa39f) {
        goto label_29;
    }
    if (esi != 0xeb73fed0) {
        goto label_0;
    }
    rax = *((rsp + 0x488));
    rax++;
    *((rsp + 0x2b0)) = rax;
    esi = 0x8eadc7fe;
    *((rsp + 0x154)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_16:
    if (esi <= 0x8cb71765) {
        goto label_30;
    }
    if (esi <= 0x9275ee01) {
        goto label_31;
    }
    if (esi <= 0x9542ad59) {
        goto label_32;
    }
    if (esi > 0x97f186f8) {
        goto label_33;
    }
    if (esi == 0x9542ad5a) {
        goto label_34;
    }
    if (esi == 0x96a073a4) {
        goto label_35;
    }
    if (esi != 0x97c97627) {
        goto label_0;
    }
    rax = *((rsp + 0x468));
    *((rbx + rax)) = 0x27;
    esi = 0x5fa70308;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_9:
    if (esi <= 0xd40228de) {
        goto label_36;
    }
    if (esi <= 0xda6a431c) {
        goto label_37;
    }
    if (esi > 0xdce0963c) {
        goto label_38;
    }
    if (esi == 0xda6a431d) {
        goto label_39;
    }
    if (esi == 0xdaa37db8) {
        goto label_40;
    }
    if (esi != 0xdc2cc313) {
        goto label_0;
    }
    rax = *((rsp + 0x4f8));
    *((rsp + 0x118)) = rax;
    rax = *((rsp + 0x4f0));
    *((rsp + 0x110)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x108)) = rax;
    rax = *((rsp + 0x4e8));
    *((rsp + 0x100)) = rax;
    al = *((rsp + 0x8b));
    *((rsp + 0xf)) = al;
    al = *((rsp + 5));
    *((rsp + 0xe)) = al;
    al = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    eax = *((rsp + 0x168));
    *((rsp + 0x90)) = eax;
    esi = 0xf44e68fd;
    goto label_2;
label_17:
    if (esi <= 0xb556d5d7) {
        goto label_41;
    }
    if (esi <= 0xb9234faa) {
        goto label_42;
    }
    if (esi > 0xbc46c094) {
        goto label_43;
    }
    if (esi == 0xb9234fab) {
        goto label_44;
    }
    if (esi == 0xba7184dc) {
        goto label_45;
    }
    if (esi != 0xbc2083be) {
        goto label_0;
    }
    esi = 0xde3ef051;
    *((rsp + 0x17)) = 0x66;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_24:
    if (esi <= 0xf6dcce84) {
        goto label_46;
    }
    if (esi <= 0xfb4f4a61) {
        goto label_47;
    }
    if (esi > 0xfc1b03bf) {
        goto label_48;
    }
    if (esi == 0xfb4f4a62) {
        goto label_49;
    }
    if (esi == 0xfbe18fa9) {
        goto label_50;
    }
    if (esi != 0xfc1abe53) {
        goto label_0;
    }
    eax = *((rsp + 0x164));
    esi = 0xc1b10e23;
    ecx = 0xdedb3af8;
    goto label_51;
label_30:
    if (esi > 0x88c7815b) {
        goto label_52;
    }
    if (esi > 0x83f80c70) {
        goto label_53;
    }
    if (esi <= 0x8238150d) {
        goto label_54;
    }
    if (esi == 0x8238150e) {
        goto label_55;
    }
    if (esi == 0x8260c79e) {
        goto label_56;
    }
    if (esi != 0x82a5a5ca) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0x60728148;
    ecx = 0xb4829007;
    goto label_15;
label_10:
    if (esi > 0xc09dd6ab) {
        goto label_57;
    }
    if (esi <= 0xbf9d98b9) {
        goto label_58;
    }
    if (esi == 0xbf9d98ba) {
        goto label_59;
    }
    if (esi == 0xbfb53ded) {
        goto label_60;
    }
    if (esi != 0xbfe93fb6) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0xc33ffc7a;
    ecx = 0xc5291d91;
    goto label_15;
label_18:
    if (esi > 0x9d833b06) {
        goto label_61;
    }
    if (esi <= 0x9a913b68) {
        goto label_62;
    }
    if (esi == 0x9a913b69) {
        goto label_63;
    }
    if (esi == 0x9bac71ed) {
        goto label_64;
    }
    if (esi != 0x9d60a215) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0x8260c79e;
    ecx = 0xa4a7e4fd;
    goto label_15;
label_25:
    if (esi > 0xe178eb2d) {
        goto label_65;
    }
    if (esi <= 0xdee77069) {
        goto label_66;
    }
    if (esi == 0xdee7706a) {
        goto label_67;
    }
    if (esi == 0xe067dc71) {
        goto label_68;
    }
    if (esi != 0xe0ba3425) {
        goto label_0;
    }
    al = *((rsp + 0x45));
    *((rsp + 0x88)) = al;
    rax = *((rsp + 0x270));
    *((rsp + 0x208)) = rax;
    rax = *((rsp + 0x280));
    *((rsp + 0x258)) = rax;
    *((rsp + 0x5c8)) = rdi;
    rax = *((rsp + 0x5c8));
    rax = *((rsp + 0x30));
    rax += *((rsp + 0x208));
    *((rsp + 0x458)) = rax;
    rsi = *((rsp + 0x458));
    rsi += *((rsp + 0xd0));
    rax = *((rsp + 0x458));
    rdx -= rax;
    rax = rpl_mbrtowc (rsp + 0x558, *(rsi), *((rsp + 0x258)), rsp + 0x5b0);
    *((rsp + 0x238)) = rax;
    esi = 0xed73378a;
    ecx = 0xffc3a069;
    goto label_51;
label_31:
    if (esi > 0x8eadc7fd) {
        goto label_69;
    }
    if (esi <= 0x8e459093) {
        goto label_70;
    }
    if (esi == 0x8e459094) {
        goto label_71;
    }
    if (esi == 0x8e731a77) {
        goto label_72;
    }
    if (esi != 0x8e801480) {
        goto label_0;
    }
    rax = strlen (*((rsp + 0x4a8)));
    *((rsp + 0x1b0)) = rax;
    eax = *((rsp + 0x6c));
    *((rsp + 0x130)) = eax;
    rax = *((rsp + 0x5e8));
    *((rsp + 0x1d8)) = rax;
    rax = *((rsp + 0x4a8));
    *((rsp + 0x1d0)) = rax;
    rax = *((rsp + 0x4a8));
    *((rsp + 0x1a8)) = rax;
    esi = 0x8c0ac709;
    *((rsp + 0x27)) = 1;
    al = *((rsp + 0x2f));
    *((rsp + 0x1b8)) = rax;
    rax = *((rsp + 0x340));
    goto label_73;
label_36:
    if (esi > 0xd0de9e89) {
        goto label_74;
    }
    if (esi <= 0xce6d9574) {
        goto label_75;
    }
    if (esi == 0xce6d9575) {
        goto label_76;
    }
    if (esi == 0xd02d3f98) {
        goto label_77;
    }
    if (esi != 0xd0783449) {
        goto label_0;
    }
    rax = *((rsp + 0x498));
    rax++;
    *((rsp + 0x2e8)) = rax;
    esi = 0x231211a0;
    *((rsp + 0x52)) = 1;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_41:
    if (esi > 0xb1b86ce9) {
        goto label_78;
    }
    if (esi <= 0xaf4d75a3) {
        goto label_79;
    }
    if (esi == 0xaf4d75a4) {
        goto label_80;
    }
    if (esi == 0xaf5726a3) {
        goto label_81;
    }
    if (esi != 0xb03d4928) {
        goto label_0;
    }
    rax = *((rsp + 0x328));
    ecx = *((rsp + 0xa4));
    *((rbx + rax)) = cl;
    esi = 0xaf5726a3;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_46:
    if (esi > 0xf3d065f5) {
        goto label_82;
    }
    if (esi <= 0xf0da854a) {
        goto label_83;
    }
    if (esi == 0xf0da854b) {
        goto label_84;
    }
    if (esi == 0xf2faffd8) {
        goto label_85;
    }
    if (esi != 0xf39b8ac3) {
        goto label_0;
    }
    esi = 0x68fd5719;
    rcx = *((rsp + 0x538));
    goto label_86;
label_52:
    if (esi > 0x8a858c1f) {
        goto label_87;
    }
    if (esi <= 0x89d8f241) {
        goto label_88;
    }
    if (esi == 0x89d8f242) {
        goto label_89;
    }
    if (esi == 0x89e89484) {
        goto label_90;
    }
    if (esi != 0x8a4d4541) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0xac0ae1e3;
    ecx = 0xf3d065f6;
    goto label_51;
label_11:
    if (esi <= 0xc53894d0) {
        goto label_91;
    }
    if (esi == 0xc53894d1) {
        goto label_92;
    }
    if (esi == 0xc7797312) {
        goto label_93;
    }
    if (esi != 0xc7ba80a2) {
        goto label_0;
    }
    esi = 0xc1b10e23;
    ecx = 0x38beb86e;
    goto label_51;
label_19:
    if (esi <= 0xa4a7e4fc) {
        goto label_94;
    }
    if (esi == 0xa4a7e4fd) {
        goto label_95;
    }
    if (esi == 0xa5693f19) {
        goto label_96;
    }
    if (esi != 0xa5f1b424) {
        goto label_0;
    }
    rax = *((rsp + 0x440));
    *((rbx + rax)) = 0x5c;
    esi = 0x50800aa4;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_26:
    if (esi <= 0xe593e452) {
        goto label_97;
    }
    if (esi == 0xe593e453) {
        goto label_98;
    }
    if (esi == 0xe6335c7d) {
        goto label_99;
    }
    if (esi != 0xe65faf38) {
        goto label_0;
    }
    esi = 0xac0ae1e3;
    ecx = 0x647d5048;
    goto label_51;
label_32:
    if (esi <= 0x9319e870) {
        goto label_100;
    }
    if (esi == 0x9319e871) {
        goto label_101;
    }
    if (esi == 0x938bf143) {
        goto label_102;
    }
    if (esi != 0x93ea4c05) {
        goto label_0;
    }
    rax = *((rsp + 0x288));
    *((rsp + 0x218)) = rax;
    eax = *((rsp + 0x150));
    *((rsp + 0xed)) = al;
    al = *((rsp + 0x4f));
    *((rsp + 0xee)) = al;
    al = *((rsp + 0x50));
    *((rsp + 0xaf)) = al;
    al = *((rsp + 0x51));
    *((rsp + 0x57)) = al;
    rax = *((rsp + 0x2a8));
    *((rsp + 0x618)) = rax;
    rax = *((rsp + 0x2b8));
    *((rsp + 0x620)) = rax;
    rax = *((rsp + 0x2d0));
    *((rsp + 0x220)) = rax;
    rax = *((rsp + 0x2d8));
    *((rsp + 0x628)) = rax;
    esi = 0xcd9817bc;
    ecx = 0x4201febc;
    goto label_103;
label_37:
    if (esi <= 0xd685a47c) {
        goto label_104;
    }
    if (esi == 0xd685a47d) {
        goto label_105;
    }
    if (esi == 0xd8e3a7f4) {
        goto label_106;
    }
    if (esi != 0xd9f53783) {
        goto label_0;
    }
    rax = *((rsp + 0x170));
    rcx = *((rsp + 0x30));
    goto label_107;
label_42:
    if (esi <= 0xb6c21416) {
        goto label_108;
    }
    if (esi == 0xb6c21417) {
        goto label_109;
    }
    if (esi == 0xb77de89d) {
        goto label_110;
    }
    if (esi != 0xb7da7513) {
        goto label_0;
    }
    eax = *((rsp + 0x70));
    esi = 0xee890295;
    ecx = 0x7db686c8;
    if (eax == 2) {
        esi = ecx;
    }
    goto label_111;
label_47:
    if (esi <= 0xf7853071) {
        goto label_112;
    }
    if (esi == 0xf7853072) {
        goto label_113;
    }
    if (esi == 0xf8587b22) {
        goto label_114;
    }
    if (esi != 0xf8e1f5d9) {
        goto label_0;
    }
    rax = *((rsp + 0x430));
    *((rbx + rax)) = 0x22;
    esi = 0xdaa37db8;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_53:
    if (esi <= 0x85cc1831) {
        goto label_115;
    }
    if (esi == 0x85cc1832) {
        goto label_116;
    }
    if (esi == 0x86599e58) {
        goto label_117;
    }
    if (esi != 0x88aea349) {
        goto label_0;
    }
    eax = *((rsp + 0x57));
    esi = 0x96a073a4;
    ecx = 0x231211a0;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    goto label_118;
label_57:
    if (esi <= 0xc31a07d2) {
        goto label_119;
    }
    if (esi == 0xc31a07d3) {
        goto label_120;
    }
    if (esi == 0xc33ffc7a) {
        goto label_121;
    }
    if (esi != 0xc41fe1a7) {
        goto label_0;
    }
    esi = 0x8e459094;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_61:
    if (esi <= 0xa07acac8) {
        goto label_122;
    }
    if (esi == 0xa07acac9) {
        goto label_123;
    }
    if (esi == 0xa0fc852e) {
        goto label_124;
    }
    if (esi != 0xa2c218d6) {
        goto label_0;
    }
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x138));
    esi = 0x89ae8f14;
    ecx = 0x43d0d807;
    goto label_125;
label_65:
    if (esi <= 0xe1fa1386) {
        goto label_126;
    }
    if (esi == 0xe1fa1387) {
        goto label_127;
    }
    if (esi == 0xe224b2e1) {
        goto label_128;
    }
    if (esi != 0xe2560a7c) {
        goto label_0;
    }
    rax = *((rsp + 0x530));
    ecx = *((rsp + 0xf2));
    *((rbx + rax)) = cl;
    esi = 0x59430ae6;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_69:
    if (esi <= 0x8fbeb5e7) {
        goto label_129;
    }
    if (esi == 0x8fbeb5e8) {
        goto label_130;
    }
    if (esi == 0x91018eab) {
        goto label_127;
    }
    if (esi != 0x9272e77d) {
        goto label_0;
    }
    rax = *((rsp + 0x398));
    *((rsp + 0x5f0)) = rax;
    rax = *((rsp + 0x348));
    *((rsp + 0x300)) = rax;
    rax = *((rsp + 0x5f0));
    eax = *(rax);
    *((rsp + 0x9d)) = al;
    esi = 0x8e801480;
    ecx = 0x660afdbb;
    if (*((rsp + 0x9d)) != 0) {
        esi = ecx;
    }
    rax = *((rsp + 0x300));
    goto label_131;
label_74:
    if (esi <= 0xd2039915) {
        goto label_132;
    }
    if (esi == 0xd2039916) {
        goto label_133;
    }
    if (esi == 0xd25177af) {
        goto label_134;
    }
    if (esi != 0xd32170bf) {
        goto label_0;
    }
    rax = *((rsp + 0x178));
    rax++;
    *((rsp + 0x418)) = rax;
    rax = *((rsp + 0x418));
    esi = 0xcaa10807;
    ecx = 0xb9234fab;
    goto label_125;
label_78:
    if (esi <= 0xb348a13c) {
        goto label_135;
    }
    if (esi == 0xb348a13d) {
        goto label_136;
    }
    if (esi == 0xb4829007) {
        goto label_137;
    }
    if (esi != 0xb4c899ce) {
        goto label_0;
    }
    al = *((rsp + 0x85));
    esi = 0xd0de9e8a;
    ecx = 0xdee7706a;
    goto label_103;
label_82:
    if (esi <= 0xf44e68fc) {
        goto label_138;
    }
    if (esi == 0xf44e68fd) {
        goto label_139;
    }
    if (esi == 0xf4993e48) {
        goto label_140;
    }
    if (esi != 0xf61083cc) {
        goto label_0;
    }
    eax = *((rsp + 0x46));
    *((rsp + 0x8a)) = al;
    eax = *((rsp + 0x14c));
    *((rsp + 0xaa)) = al;
    eax = *((rsp + 0x4b));
    *((rsp + 0xab)) = al;
    eax = *((rsp + 0x49));
    *((rsp + 0x55)) = al;
    rax = *((rsp + 0x2c8));
    *((rsp + 0x210)) = rax;
    rax = *((rsp + 0x610));
    rax++;
    *((rsp + 0x480)) = rax;
    rax = *((rsp + 0x650));
    esi = 0xff27b898;
    ecx = 0x10561490;
    if (rax <= *((rsp + 0x480))) {
        esi = ecx;
    }
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_87:
    if (esi <= 0x8bb8b169) {
        goto label_141;
    }
    if (esi == 0x8bb8b16a) {
        goto label_142;
    }
    if (esi == 0x8c0ac709) {
        goto label_143;
    }
    if (esi != 0x8c5e75ed) {
        goto label_0;
    }
    rax = *((rsp + 0x178));
    *((rbx + rax)) = 0x30;
    esi = 0xd32170bf;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_12:
    if (esi == 0xccbf8f98) {
        goto label_144;
    }
    if (esi == 0xccc377f8) {
        goto label_145;
    }
    if (esi != 0xcd9817bc) {
        goto label_0;
    }
    eax = *((rsp + 0x70));
    esi = 0x231211a0;
    ecx = 0x88aea349;
    if (eax == 2) {
        esi = ecx;
    }
label_118:
    rcx = *((rsp + 0x220));
    *((rsp + 0x2e8)) = rcx;
    ecx = *((rsp + 0x57));
    *((rsp + 0x52)) = cl;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_20:
    if (esi == 0xac0ae1e3) {
        goto label_146;
    }
    if (esi == 0xacd0c624) {
        goto label_147;
    }
    if (esi != 0xacf77f7c) {
        goto label_0;
    }
    rax = *((rsp + 0x260));
    rax++;
    *((rsp + 0x4a0)) = rax;
    rax = *((rsp + 0x4a0));
    esi = 0xfe77e7b8;
    ecx = 0x50d35a85;
    goto label_125;
label_27:
    if (esi == 0xec9504f5) {
        goto label_148;
    }
    if (esi == 0xed73378a) {
        goto label_149;
    }
    if (esi != 0xedf4b3fa) {
        goto label_0;
    }
    eax = *((rsp + 0xb));
    ecx = *((rsp + 0xa1));
    esi = 0x4203c159;
    edx = 0xb556d5d8;
    if ((al & 1) != 0) {
        esi = edx;
    }
    ecx = 0x4203c159;
    if (cl == 0) {
        esi = ecx;
    }
    eax = *((rsp + 6));
    *((rsp + 0x28)) = al;
    goto label_150;
label_33:
    if (esi == 0x97f186f9) {
        goto label_151;
    }
    if (esi == 0x985b5332) {
        goto label_21;
    }
    if (esi != 0x990c4ada) {
        goto label_0;
    }
    eax = *((rsp + 0x70));
    *((rsp + 0x268)) = eax;
    rax = *((rsp + 0x4b8));
    *((rsp + 0x5a0)) = rax;
    rax = *((rsp + 0x4b0));
    *((rsp + 0x5a8)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x580)) = rax;
    rax = *((rsp + 0x308));
    *((rsp + 0x578)) = rax;
    rax = *((rsp + 0x250));
    *((rsp + 0x570)) = rax;
    al = *((rsp + 0x87));
    *((rsp + 0x568)) = rax;
    rax = *((rsp + 0x170));
    *((rsp + 0x598)) = rax;
    eax = *((rsp + 0xb));
    *((rsp + 0x9b)) = al;
    al = *((rsp + 4));
    *((rsp + 0x560)) = rax;
    al = *((rsp + 5));
    *((rsp + 0x588)) = rax;
    eax = *((rsp + 0xc));
    *((rsp + 0x9a)) = al;
    rax = *((rsp + 0x58));
    *((rsp + 0x590)) = rax;
    esi = 0x456ba924;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_38:
    if (esi == 0xdce0963d) {
        goto label_152;
    }
    if (esi == 0xde0d40f0) {
        goto label_127;
    }
    if (esi != 0xde3ef051) {
        goto label_0;
    }
    al = *((rsp + 0x17));
    *((rsp + 0xe7)) = al;
    al = *((rsp + 0x2c));
    esi = 0x7d349bf0;
    ecx = 0xa5693f19;
    goto label_153;
label_43:
    if (esi == 0xbc46c095) {
        goto label_154;
    }
    if (esi == 0xbcdef484) {
        goto label_155;
    }
    if (esi != 0xbcfb66a4) {
        goto label_0;
    }
    rax = *((rsp + 0x450));
    edx = *((rsp + 0x194));
    esi = 0x56147fa9;
    ecx = 0x66ebc4cd;
    if (edx == 0) {
        esi = ecx;
    }
    cl = *((rsp + 6));
    *((rsp + 0x4e)) = cl;
    rax = *((rsp + 0x258));
    *((rsp + 0x3b0)) = rax;
    rax = *((rsp + 0x5f8));
    *((rsp + 0x370)) = rax;
    cl = *((rsp + 0xa9));
    *((rsp + 0x18c)) = ecx;
    rcx = *((rsp + 0x30));
    *((rsp + 0x2c0)) = rcx;
    rax = *((rsp + 0x38));
    *((rsp + 0x278)) = rax;
    rcx = *((rsp + 0x258));
    *((rsp + 0x298)) = rcx;
    cl = *((rsp + 4));
    *((rsp + 0x4d)) = cl;
    *((rsp + 0x158)) = 0;
    cl = *((rsp + 7));
    *((rsp + 0x4c)) = cl;
    *((rsp + 0x148)) = edx;
    goto label_156;
label_48:
    if (esi == 0xfc1b03c0) {
        goto label_157;
    }
    if (esi == 0xfca62f35) {
        goto label_158;
    }
    if (esi != 0xfda924ae) {
        goto label_0;
    }
    eax = *((rsp + 0x70));
    esi = 0x47e19a1c;
    ecx = 0x938bf143;
    goto label_51;
label_54:
    if (esi == 0x801f7e29) {
        goto label_159;
    }
    if (esi != 0x80f239c0) {
        goto label_0;
    }
    esi = *((rsp + 0x548));
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_58:
    if (esi == 0xbf38d520) {
        goto label_160;
    }
    if (esi != 0xbf5b6cb2) {
        goto label_0;
    }
    rax = *((rsp + 0x248));
    *((rsp + 0x1d8)) = rax;
    rax = *((rsp + 0x240));
    *((rsp + 0x1d0)) = rax;
    al = *((rsp + 0xe5));
    *((rsp + 0x27)) = al;
    esi = 0x8c0ac709;
    *((rsp + 0x130)) = 2;
    al = *((rsp + 0xa6));
    *((rsp + 0x1b8)) = rax;
    eax = 1;
    *((rsp + 0x1b0)) = rax;
    eax = 0x40e466;
    *((rsp + 0x1a8)) = rax;
    rax = *((rsp + 0x338));
    goto label_73;
label_62:
    if (esi == 0x991e8b7b) {
        goto label_161;
    }
    if (esi != 0x99d2398f) {
        goto label_0;
    }
    eax = *((rsp + 0x6c));
    esi = 0x748c4531;
    ecx = 0xc31a07d3;
    goto label_15;
label_66:
    if (esi == 0xde40a222) {
        goto label_162;
    }
    if (esi != 0xdedb3af8) {
        goto label_0;
    }
    esi = 0xbcfb66a4;
    *((rsp + 0x194)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_70:
    if (esi == 0x8cb71766) {
        goto label_163;
    }
    if (esi != 0x8e0022a2) {
        goto label_0;
    }
    esi = 0x51699fbd;
    rcx = *((rsp + 0x208));
    *((rsp + 0x3d0)) = rcx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_75:
    if (esi == 0xcdcbf3ac) {
        goto label_164;
    }
    if (esi != 0xce61bee9) {
        goto label_0;
    }
    esi = 0x6fee4918;
    ecx = 0x50c6fda1;
    goto label_51;
label_79:
    if (esi == 0xae212b6e) {
        goto label_165;
    }
    if (esi != 0xaef5717b) {
        goto label_0;
    }
    eax = *((rsp + 0x56));
    ecx = eax;
    cl >>= 5;
    ecx = (int32_t) cl;
    rdx = *((rsp + 0x6f0));
    ecx = *((rdx + rcx*4));
    esi = 0xc7797312;
    ecx = 0x93ea4c05;
    if (((ecx >> eax) & 1) < 0) {
        esi = ecx;
    }
    rcx = *((rsp + 0x520));
    *((rsp + 0x2d8)) = rcx;
    rcx = *((rsp + 0x518));
    *((rsp + 0x2d0)) = rcx;
    rcx = *((rsp + 0x510));
    *((rsp + 0x2b8)) = rcx;
    rcx = *((rsp + 0x508));
    *((rsp + 0x2a8)) = rcx;
    ecx = *((rsp + 0x8e));
    *((rsp + 0x51)) = cl;
    ecx = *((rsp + 0x8d));
    *((rsp + 0x50)) = cl;
    ecx = *((rsp + 0x56));
    *((rsp + 0x4f)) = cl;
    cl = *((rsp + 0x8c));
    *((rsp + 0x150)) = ecx;
    rax = *((rsp + 0x500));
    goto label_166;
label_83:
    if (esi == 0xee890295) {
        goto label_167;
    }
    if (esi != 0xf0153fe0) {
        goto label_0;
    }
    rax = *((rsp + 0x410));
    *((rbx + rax)) = 0x27;
    esi = 0xd40228df;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_88:
    if (esi == 0x88c7815c) {
        goto label_168;
    }
    if (esi != 0x89ae8f14) {
        goto label_0;
    }
    rax = *((rsp + 0x138));
    rax++;
    *((rsp + 0x460)) = rax;
    rax = *((rsp + 0x460));
    esi = 0x495d2c34;
    ecx = 0xc53894d1;
    goto label_125;
label_91:
    if (esi == 0xc435ef45) {
        goto label_169;
    }
    if (esi != 0xc5291d91) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0x843af1c1;
    ecx = 0x1d140590;
    goto label_15;
label_94:
    if (esi == 0xa3e3ae8f) {
        goto label_170;
    }
    if (esi != 0xa492e3e8) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0xe6335c7d;
    ecx = 0xcc95e33;
    goto label_15;
label_97:
    if (esi == 0xe26b1d05) {
        goto label_171;
    }
    if (esi != 0xe272a002) {
        goto label_0;
    }
    rax = *((rsp + 0x178));
    esi = 0xd32170bf;
    ecx = 0x8c5e75ed;
    goto label_125;
label_100:
    if (esi == 0x9275ee02) {
        goto label_172;
    }
    if (esi != 0x928ab613) {
        goto label_0;
    }
    esi = 0x59adf2ec;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_104:
    if (esi == 0xd40228df) {
        goto label_173;
    }
    if (esi != 0xd5f5b568) {
        goto label_0;
    }
    esi = 0xe26b1d05;
    goto label_174;
label_108:
    if (esi == 0xb556d5d8) {
        goto label_175;
    }
    if (esi != 0xb6498275) {
        goto label_0;
    }
    eax = *((rsp + 0xdc));
    goto label_176;
label_112:
    if (esi == 0xf6dcce85) {
        goto label_177;
    }
    if (esi != 0xf7046cd6) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rbx + rax)) = 0x27;
    esi = 0xf6dcce85;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_115:
    if (esi == 0x83f80c71) {
        goto label_178;
    }
    if (esi != 0x843af1c1) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    goto label_23;
label_119:
    if (esi == 0xc09dd6ac) {
        goto label_179;
    }
    if (esi != 0xc1b10e23) {
        goto label_0;
    }
    esi = 0xbcfb66a4;
    ecx = *((rsp + 0x164));
    *((rsp + 0x194)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_122:
    if (esi == 0x9d833b07) {
        goto label_180;
    }
    if (esi != 0x9ee9c857) {
        goto label_0;
    }
    rax = *((rsp + 0x428));
    rax++;
    *((rsp + 0x430)) = rax;
    rax = *((rsp + 0x430));
    esi = 0xdaa37db8;
    ecx = 0xf8e1f5d9;
    goto label_125;
label_126:
    if (esi == 0xe178eb2e) {
        goto label_181;
    }
    if (esi != 0xe1e408b9) {
        goto label_0;
    }
    rax = *((rsp + 0x30));
    rcx = *((rsp + 0xd0));
label_107:
    *(rsp + 0x7f) = (*((rcx + rax)) == 0) ? 1 : 0;
    esi = 0x438d2fcb;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_129:
    if (esi == 0x8eadc7fe) {
        goto label_182;
    }
    if (esi != 0x8fa66383) {
        goto label_0;
    }
    eax = *((rsp + 0xcc));
    goto label_183;
label_132:
    if (esi == 0xd0de9e8a) {
        goto label_184;
    }
    if (esi != 0xd197ff03) {
        goto label_0;
    }
    rcx = *((rsp + 0x38));
    eax = *((rsp + 0x70));
    *(rsp + 0xa3) = (eax == 2) ? 1 : 0;
    al = *((rsp + 0xa3));
    esi = 0xe85f377;
    edx = 0x43dba6fe;
    if (al != 0) {
        esi = edx;
    }
    ecx = 0xe85f377;
    goto label_103;
label_135:
    if (esi == 0xb1b86cea) {
        goto label_185;
    }
    if (esi != 0xb2edc87e) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0xcdcbf3ac;
    ecx = 0xf0da854b;
    goto label_15;
label_138:
    if (esi == 0xf3d065f6) {
        goto label_186;
    }
    if (esi != 0xf3dbcb3b) {
        goto label_0;
    }
    rax = *((rsp + 0x380));
    *((rsp + 0x4a8)) = rax;
    rax = *((rsp + 0x390));
    *((rsp + 0x5e8)) = rax;
    esi = 0x5c1ac00a;
    ecx = 0x8e801480;
    if ((*((rsp + 0x2f)) & 1) != 0) {
        esi = ecx;
    }
    eax = 0;
label_131:
    *((rsp + 0x340)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_141:
    if (esi == 0x8a858c20) {
        goto label_187;
    }
    if (esi != 0x8b3fad00) {
        goto label_0;
    }
    esi = 0x1d4f8b83;
    ecx = 0x31edb382;
    goto label_103;
label_21:
    al = *((rsp + 6));
    *((rsp + 0xa)) = al;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x38));
    goto label_188;
label_13:
    esi = 0x801f7e29;
    *((rsp + 0x190)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_14:
    rax = *((rsp + 0x418));
    rax++;
    *((rsp + 0x1c8)) = rax;
    esi = 0x8fbeb5e8;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_22:
    r12 = *((rsp + 0x438));
    r12++;
    rax = *((rsp + 0x420));
    *((rsp + 0xc0)) = rax;
    al = *((rsp + 0xe1));
    *((rsp + 0xa)) = al;
label_188:
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 4));
    al = *((rsp + 5));
    *((rsp + 8)) = al;
    al = *((rsp + 7));
    *((rsp + 9)) = al;
    esi = 0x7d349bf0;
    goto label_189;
label_28:
    esi = 0x9bac71ed;
    edx = 0x7d349bf0;
    if (*((rsp + 0x30)) != 0) {
        esi = edx;
    }
    rcx = *((rsp + 0xd0));
    if (*((rcx + 1)) != 0) {
        esi = edx;
    }
    goto label_190;
label_29:
    rax = *((rsp + 0x420));
    rax += *((rsp + 0xd0));
    *((rsp + 0x5c0)) = rax;
    rax = *((rsp + 0x5c0));
    eax = *(rax);
    *((rsp + 0xcc)) = eax;
    esi = 0xd6bff2a;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_34:
    esi = 0x801f7e29;
    *((rsp + 0x190)) = 0x10;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_35:
    rax = *((rsp + 0x218));
    rcx = *((rsp + 0x220));
    esi = 0x63ecbc5f;
    ecx = 0xfbe18fa9;
    goto label_125;
label_39:
    rax = *((rsp + 0x490));
    *((rbx + rax)) = 0x24;
    esi = 0x25bd8294;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_40:
    rax = *((rsp + 0x430));
    rax++;
    *((rsp + 0x438)) = rax;
    rax = *((rsp + 0x438));
    esi = 0xa8eacb60;
    ecx = 0x3569c5c8;
    goto label_125;
label_44:
    rax = *((rsp + 0x418));
    *((rbx + rax)) = 0x30;
    esi = 0xcaa10807;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_45:
    al = *((rsp + 0x8a));
    esi = 0x40f2ea54;
    ecx = 0x8eadc7fe;
    goto label_191;
label_49:
    eax = *((rsp + 0xdc));
    esi = 0x23592045;
    ecx = 0x5caf72f0;
    goto label_15;
label_50:
    rax = *((rsp + 0x220));
    *((rbx + rax)) = 0x27;
    esi = 0x63ecbc5f;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_55:
    esi = 0xbf5b6cb2;
    eax = 1;
    goto label_192;
label_56:
    esi = 0xde3ef051;
    *((rsp + 0x17)) = 0x62;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_59:
    eax = *((rsp + 0x10));
    esi = 0xccbf8f98;
    ecx = 0xb2edc87e;
    goto label_15;
label_60:
    *(rbx) = 0x27;
    esi = 0x8238150e;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_63:
    rax = *((rsp + 0x3f0));
    *((rsp + 0x640)) = rax;
    rax = *((rsp + 0x400));
    *((rsp + 0x328)) = rax;
    rax = *((rsp + 0x640));
    eax = *(rax);
    *((rsp + 0xa4)) = al;
    esi = 0x6ac25e51;
    ecx = 0x10d55dd6;
    if (*((rsp + 0xa4)) != 0) {
        esi = ecx;
    }
    rcx = *((rsp + 0x328));
    *((rsp + 0x2f0)) = rcx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_64:
    esi = 0x37185d53;
    al = 1;
    *((rsp + 0x94)) = eax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_67:
    al = *((rsp + 0x54));
    esi = 0xf61083cc;
    ecx = 0x22009641;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    rcx = *((rsp + 0x138));
    *((rsp + 0x2c8)) = rcx;
    al = *((rsp + 0x2e));
    *((rsp + 0x49)) = al;
    al = *((rsp + 0x2d));
    *((rsp + 0x4b)) = al;
    al = *((rsp + 0x54));
    *((rsp + 0x14c)) = eax;
    goto label_193;
label_68:
    rax = *((rsp + 0x4d8));
    *((rbx + rax)) = 0x5c;
    esi = 0xe593e453;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_71:
    eax = *((rsp + 0x70));
    esi = 0xb6c21417;
    ecx = 0x63a892d7;
    goto label_15;
label_72:
    al = *((rsp + 0x87));
    esi = 0x44574ab3;
    ecx = 0xde40a222;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    goto label_194;
label_76:
    eax = *((rsp + 6));
    *((rsp + 0xa)) = al;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x38));
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 4));
    eax = *((rsp + 5));
    *((rsp + 8)) = al;
    eax = *((rsp + 7));
    *((rsp + 9)) = al;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r15d = 0;
    esi = *((rsp + 0x550));
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_77:
    al = *((rsp + 0x87));
    al &= 1;
    *((rsp + 0x2c)) = al;
    eax = *((rsp + 0x70));
    *(rsp + 0x9f) = (eax != 2) ? 1 : 0;
    al = *((rsp + 0x2c));
    cl = *((rsp + 0x9f));
    cl &= al;
    cl &= 1;
    *((rsp + 0xa0)) = cl;
    *(rsp + 0xa1) = (*((rsp + 0x250)) != 0) ? 1 : 0;
    cl = *((rsp + 0xa0));
    al = *((rsp + 0xa1));
    esi = 0xf2faffd8;
    edx = 0xfe383a30;
    if (al != 0) {
        esi = edx;
    }
    ecx = 0xf2faffd8;
    if (cl == 0) {
        esi = ecx;
    }
    *((rsp + 0x134)) = 0;
    rax = *((rsp + 0x170));
    goto label_195;
label_80:
    rax = *((rsp + 0x60));
    esi = 0xec9504f5;
    ecx = 0xe89c5b46;
    goto label_51;
label_81:
    rax = *((rsp + 0x328));
    rax++;
    *((rsp + 0x400)) = rax;
    rax = *((rsp + 0x640));
    rax++;
    *((rsp + 0x3f0)) = rax;
    esi = 0x9a913b69;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_84:
    eax = *((rsp + 0x10));
    esi = 0x9bac71ed;
    ecx = 0xc9856f5;
    goto label_15;
label_85:
    eax = *((rsp + 0x134));
    *((rsp + 7)) = al;
    rax = *((rsp + 0x228));
    *((rsp + 0x60)) = rax;
    rax = *((rsp + 0x30));
    rcx = *((rsp + 0xd0));
    eax = *((rcx + rax));
    *((rsp + 6)) = al;
    eax = *((rsp + 6));
    *((rsp + 0x10)) = eax;
    esi = 0x82a5a5ca;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_89:
    al = *((rsp + 0x2e));
    esi = 0xa2c218d6;
    ecx = 0xbcdef484;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    goto label_196;
label_90:
    rax = *((rsp + 0x138));
    *((rbx + rax)) = 0x5c;
    esi = 0x6fd5b9cf;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_92:
    rax = *((rsp + 0x460));
    *((rbx + rax)) = 0x24;
    esi = 0x495d2c34;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_93:
    al = *((rsp + 0xec));
    esi = 0xb556d5d8;
    ecx = 0x93ea4c05;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    rcx = *((rsp + 0x520));
    *((rsp + 0x2d8)) = rcx;
    rcx = *((rsp + 0x518));
    *((rsp + 0x2d0)) = rcx;
    rcx = *((rsp + 0x510));
    *((rsp + 0x2b8)) = rcx;
    rcx = *((rsp + 0x508));
    *((rsp + 0x2a8)) = rcx;
    cl = *((rsp + 0x8e));
    *((rsp + 0x51)) = cl;
    cl = *((rsp + 0x8d));
    *((rsp + 0x50)) = cl;
    cl = *((rsp + 0x56));
    *((rsp + 0x4f)) = cl;
    cl = *((rsp + 0x8c));
    *((rsp + 0x150)) = ecx;
    rax = *((rsp + 0x500));
    *((rsp + 0x288)) = rax;
    rcx = *((rsp + 0x520));
    *((rsp + 0x1f8)) = rcx;
    rcx = *((rsp + 0x518));
    *((rsp + 0x1f0)) = rcx;
    rax = *((rsp + 0x510));
    *((rsp + 0x1e8)) = rax;
    rax = *((rsp + 0x508));
    *((rsp + 0x1e0)) = rax;
    cl = *((rsp + 0x8e));
    *((rsp + 0x2a)) = cl;
    cl = *((rsp + 0x8d));
    *((rsp + 0x29)) = cl;
    cl = *((rsp + 0x56));
    *((rsp + 0x2b)) = cl;
    al = *((rsp + 0xeb));
    *((rsp + 0x128)) = eax;
    al = *((rsp + 0x8c));
    *((rsp + 0x12c)) = eax;
    rax = *((rsp + 0x500));
    goto label_197;
label_95:
    esi = 0xde3ef051;
    *((rsp + 0x17)) = 0x61;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_96:
    rax = *((rsp + 0x30));
    *((rsp + 0x2d8)) = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x2d0)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x2b8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0x2a8)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0x51)) = al;
    eax = *((rsp + 5));
    *((rsp + 0x50)) = al;
    eax = *((rsp + 0xe7));
    *((rsp + 0x4f)) = al;
    esi = 0x93ea4c05;
    *((rsp + 0x150)) = 0;
    rax = *((rsp + 0x18));
label_166:
    *((rsp + 0x288)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_98:
    rax = *((rsp + 0x4d8));
    rax++;
    *((rsp + 0x470)) = rax;
    rax = *((rsp + 0x470));
    esi = 0x9319e871;
    ecx = 0x6feec056;
    goto label_125;
label_99:
    eax = *((rsp + 0x10));
    esi = 0x19bb047c;
    ecx = 0xfda924ae;
    goto label_15;
label_101:
    rax = *((rsp + 0x470));
    rax++;
    *((rsp + 0x478)) = rax;
    rax = *((rsp + 0x478));
    esi = 0x6bf15c94;
    ecx = 0x5ebb4251;
    goto label_125;
label_102:
    eax = *((rsp + 0xb));
    esi = 0xb556d5d8;
    ecx = 0x14f96d48;
    if ((al & 1) != 0) {
        esi = ecx;
    }
label_150:
    ecx = *((rsp + 6));
    *((rsp + 0x2b)) = cl;
    rcx = *((rsp + 0x30));
    *((rsp + 0x1f8)) = rcx;
    rcx = *((rsp + 0x38));
    *((rsp + 0x1f0)) = rcx;
    rax = *((rsp + 0x58));
    *((rsp + 0x1e8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0x1e0)) = rax;
    ecx = *((rsp + 4));
    *((rsp + 0x2a)) = cl;
    ecx = *((rsp + 5));
    *((rsp + 0x29)) = cl;
    *((rsp + 0x12c)) = 0;
    rax = *((rsp + 0x18));
    *((rsp + 0x1c0)) = rax;
    *((rsp + 0x128)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_105:
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x38));
    esi = 0xf6dcce85;
    ecx = 0xf7046cd6;
    goto label_125;
label_106:
    esi = 0x566e46b5;
    *((rsp + 0x124)) = 0x34;
    rcx = *((rsp + 0x4c8));
    goto label_198;
label_109:
    eax = *((rsp + 0x70));
    esi = 0xa8a806d8;
    ecx = 0x5ad7cf7f;
    goto label_51;
label_110:
    rcx = *((rsp + 0x18));
    esi = 0x38343e51;
    edx = 0x990c4ada;
    if (*((rsp + 0x58)) != 0) {
        esi = edx;
    }
label_174:
    ecx = 0x38343e51;
    goto label_103;
label_113:
    esi = 0x120112a5;
    eax = 1;
    *((rsp + 0x378)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_114:
    rax = *((rsp + 0x6a0));
    rax++;
    *((rsp + 0x358)) = rax;
    rax = *((rsp + 0x698));
    *((rsp + 0x350)) = rax;
    rax = *((rsp + 0x690));
    *((rsp + 0x3a8)) = rax;
    rax = *((rsp + 0x638));
    *((rsp + 0x3a0)) = rax;
    eax = *((rsp + 0xf7));
    *((rsp + 0x79)) = al;
    eax = *((rsp + 0xf6));
    *((rsp + 0x78)) = al;
    eax = *((rsp + 0xf5));
    *((rsp + 0x77)) = al;
    esi = 0x12ed529f;
    rax = *((rsp + 0x630));
    *((rsp + 0x388)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_116:
    rax = *((rsp + 0x4c8));
    rax++;
    *((rsp + 0x3d0)) = rax;
    esi = 0x51699fbd;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_117:
    rax = *((rsp + 0x210));
    *((rbx + rax)) = 0x27;
    esi = 0xb1b86cea;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_120:
    eax = *((rsp + 0x6c));
    esi = 0xc435ef45;
    ecx = 0x463c7a41;
    goto label_15;
label_121:
    eax = *((rsp + 0x10));
    esi = 0x55e7cf76;
    ecx = 0x58deffab;
    goto label_15;
label_123:
    eax = *((rsp + 0x26c));
    esi = 0x8fbeb5e8;
    ecx = 0xe272a002;
    if (eax < 0x3a) {
        esi = ecx;
    }
    goto label_199;
label_124:
    eax = *((rsp + 0xcc));
    esi = 0xae212b6e;
    ecx = 0x8fa66383;
    goto label_15;
label_128:
    rax = *((rsp + 0x5b8));
    rcx = *((rsp + 0xd0));
    eax = *((rcx + rax));
    *((rsp + 0x26c)) = eax;
    eax = *((rsp + 0x26c));
    esi = 0x8fbeb5e8;
    ecx = 0xa07acac9;
    if (eax > 0x2f) {
        esi = ecx;
    }
    goto label_199;
label_130:
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 0xe6));
    eax = *((rsp + 5));
    *((rsp + 8)) = al;
    eax = *((rsp + 7));
    *((rsp + 9)) = al;
    esi = 0x7d349bf0;
    *((rsp + 0xa)) = 0x30;
    r15b = 1;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r12 = *((rsp + 0x1c8));
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_133:
    esi = 0x6ea4bf53;
    *((rsp + 0x44)) = 1;
    eax = *((rsp + 0x86));
    goto label_200;
label_134:
    rax = *((rsp + 0x4e0));
    rax++;
    *((rsp + 0x3d8)) = rax;
    rax = *((rsp + 0x480));
    rcx = *((rsp + 0xd0));
    eax = *((rcx + rax));
    *((rsp + 0x80)) = al;
    rax = *((rsp + 0x480));
    *((rsp + 0x3c8)) = rax;
    eax = *((rsp + 0xe9));
    *((rsp + 0x7d)) = al;
    eax = *((rsp + 0xaa));
    *((rsp + 0x7a)) = al;
    esi = 0x6b6f9d2c;
    cl = *((rsp + 0x8a));
    *((rsp + 0x184)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_136:
    eax = *((rsp + 0x15c));
    *((rsp + 0xf4)) = al;
    rax = *((rsp + 0x2e0));
    *((rsp + 0x530)) = rax;
    rax = *((rsp + 0x320));
    rcx = *((rsp + 0x530));
    esi = 0x59430ae6;
    ecx = 0xe2560a7c;
    goto label_125;
label_137:
    eax = *((rsp + 0x10));
    esi = 0xbf9d98ba;
    ecx = 0x764623e3;
    goto label_15;
label_139:
    rax = *((rsp + 0xf8));
    *((rsp + 0x630)) = rax;
    eax = *((rsp + 0x90));
    *((rsp + 0x16c)) = eax;
    eax = *((rsp + 0xd));
    *((rsp + 0xf5)) = al;
    eax = *((rsp + 0xe));
    *((rsp + 0xf6)) = al;
    eax = *((rsp + 0xf));
    *((rsp + 0xf7)) = al;
    rax = *((rsp + 0x100));
    *((rsp + 0x638)) = rax;
    rax = *((rsp + 0x108));
    *((rsp + 0x690)) = rax;
    rax = *((rsp + 0x110));
    *((rsp + 0x698)) = rax;
    rax = *((rsp + 0x118));
    *((rsp + 0x6a0)) = rax;
    esi = 0x3df5fdbd;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_140:
    rax = *((rsp + 0x5c0));
    al = *(rax);
    *((rsp + 0xe1)) = al;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x38));
    esi = 0x2fc52b78;
    ecx = 0x12c43c6c;
    goto label_125;
label_142:
    eax = *((rsp + 0xcc));
    eax += 0xffffffc4;
    goto label_201;
label_143:
    rax = *((rsp + 0x1b8));
    *((rsp + 0xb)) = al;
    eax = *((rsp + 0x27));
    *((rsp + 0x87)) = al;
    rax = *((rsp + 0x1b0));
    *((rsp + 0x250)) = rax;
    rax = *((rsp + 0x1a8));
    *((rsp + 0x308)) = rax;
    rax = *((rsp + 0x1d0));
    *((rsp + 0x4b0)) = rax;
    rax = *((rsp + 0x1d8));
    *((rsp + 0x4b8)) = rax;
    eax = *((rsp + 0x130));
    *((rsp + 0x70)) = eax;
    rax = *((rsp + 0x668));
    *((rsp + 0x3a8)) = rax;
    rax = *((rsp + 0x660));
    *((rsp + 0x3a0)) = rax;
    eax = *((rsp + 0xe4));
    *((rsp + 0x79)) = al;
    eax = *((rsp + 0xe3));
    *((rsp + 0x78)) = al;
    eax = *((rsp + 0xe2));
    *((rsp + 0x77)) = al;
    esi = 0x12ed529f;
    rax = *((rsp + 0x2f8));
    *((rsp + 0x388)) = rax;
    rax = *((rsp + 0x1a0));
    *((rsp + 0x350)) = rax;
    eax = 0;
    *((rsp + 0x358)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_144:
    eax = *((rsp + 0x10));
    esi = 0x4e4dc84f;
    ecx = 0x97f186f9;
    goto label_15;
label_145:
    rdi += *((rsp + 0xd0));
    eax = memcmp (*((rsp + 0x30)), *((rsp + 0x308)), *((rsp + 0x250)));
    esi = 0xf2faffd8;
    ecx = 0x8b3fad00;
    if (eax == 0) {
        esi = ecx;
    }
    goto label_202;
label_146:
    esi = 0x37713ec0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_147:
    eax = *((rsp + 0xcc));
    goto label_183;
label_148:
    rcx = *((rsp + 0x60));
    esi = 0x9bac71ed;
    edx = 0x7d349bf0;
    if (*((rsp + 0x30)) != 0) {
        esi = edx;
    }
    if (rcx != 1) {
        esi = edx;
    }
    goto label_190;
label_149:
    rax = *((rsp + 0x238));
    esi = 0x16eaf33d;
    ecx = 0x66f9435c;
    goto label_51;
label_151:
    eax = *((rsp + 0x10));
    goto label_23;
label_152:
    esi = 0xb7da7513;
    ecx = 0x64cb348b;
    goto label_103;
label_154:
    eax = *((rsp + 0x55c));
    *((rsp + 0x130)) = eax;
    rax = *((rsp + 0x248));
    *((rsp + 0x1d8)) = rax;
    rax = *((rsp + 0x240));
    *((rsp + 0x1d0)) = rax;
    esi = 0x8c0ac709;
    *((rsp + 0x27)) = 1;
    al = *((rsp + 0xa5));
    *((rsp + 0x1b8)) = rax;
    eax = 1;
    *((rsp + 0x1b0)) = rax;
    eax = 0x40e462;
    *((rsp + 0x1a8)) = rax;
    rax = *((rsp + 0x330));
    goto label_73;
label_155:
    al = *((rsp + 0x4a));
    *((rsp + 0xe8)) = al;
    rax = *((rsp + 0x2a0));
    *((rsp + 0x4d8)) = rax;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x4d8));
    esi = 0xe593e453;
    ecx = 0xe067dc71;
    goto label_125;
label_157:
    eax = *((rsp + 0x16c));
    esi = 0x1c8c675a;
    ecx = 0x71c9d2e8;
    if (eax == 0x10) {
        esi = ecx;
    }
    rcx = *((rsp + 0x638));
    *((rsp + 0x3f8)) = rcx;
    rcx = *((rsp + 0x630));
    goto label_203;
label_158:
    eax = *((rsp + 0xdc));
    esi = 0xfb4f4a62;
    ecx = 0x75964b5e;
    goto label_15;
label_159:
    edx = *((rsp + 0x190));
    esi = 0x566e46b5;
    ecx = 0x9275ee02;
    if (edx == 0) {
        esi = ecx;
    }
    rcx = *((rsp + 0x208));
    *((rsp + 0x200)) = rcx;
    al = *((rsp + 0x88));
    *((rsp + 0x120)) = eax;
    *((rsp + 0x124)) = edx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_160:
    eax = *((rsp + 0x70));
    esi = 0x7d349bf0;
    ecx = 0x67d468af;
    if (eax == 2) {
        esi = ecx;
    }
    ecx = *((rsp + 6));
    *((rsp + 0xa)) = cl;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x38));
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 4));
    eax = *((rsp + 7));
    *((rsp + 9)) = al;
    r13b = 1;
    r15d = 0;
    rbp = *((rsp + 0x18));
    *((rsp + 8)) = 1;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_161:
    rax = *((rsp + 0x408));
    *((rbx + rax)) = 0x24;
    esi = 0x19078f4;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_162:
    esi = 0x44574ab3;
    *((rsp + 0x160)) = 4;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_163:
    esi = 0xdc2cc313;
    ecx = 0x7d349bf0;
    if (*((rsp + 0x168)) == 0) {
        esi = ecx;
    }
    rax = *((rsp + 0x4f8));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x4f0));
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x4e8));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 0x8b));
    eax = *((rsp + 5));
    *((rsp + 8)) = al;
    ecx = *((rsp + 0xae));
    *((rsp + 0xa)) = cl;
    eax = *((rsp + 0xea));
    *((rsp + 9)) = al;
    r15b = *((rsp + 0xad));
    r13b = *((rsp + 0xac));
    rbp = *((rsp + 0x18));
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_164:
    eax = *((rsp + 0x10));
    esi = 0xf3d065f6;
    goto label_5;
label_165:
    eax = *((rsp + 0xcc));
    esi = 0x8bb8b16a;
    ecx = 0xacd0c624;
    goto label_15;
label_167:
    al = *((rsp + 0x48));
    *((rsp + 0xe6)) = al;
    rax = *((rsp + 0x290));
    *((rsp + 0x4c0)) = rax;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x4c0));
    esi = 0x416143d;
    ecx = 0x6756050d;
    goto label_125;
label_168:
    rax = *((rsp + 0x528));
    *((rbx + rax)) = 0x5c;
    esi = 0xfee1dc24;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_169:
    eax = *((rsp + 0x6c));
    esi = 0x5921050f;
    ecx = 0x6ea4bf53;
    if (eax < 3) {
        esi = ecx;
    }
    eax = *((rsp + 0x53));
    *((rsp + 0x44)) = al;
    eax = *((rsp + 0x2f));
label_200:
    *((rsp + 0x47)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_170:
    esi = 0xe178eb2e;
    ecx = 0x286a0521;
    goto label_103;
label_171:
    esi = 0x38343e51;
    ecx = 0x2fcf2033;
    goto label_103;
label_172:
    eax = iswprint (*((rsp + 0x558)));
    esi = 0xc09dd6ac;
    ecx = 0x2ff7a0b1;
    if (eax != 0) {
        esi = ecx;
    }
    cl = *((rsp + 0x88));
    *((rsp + 0x188)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_173:
    rax = *((rsp + 0x410));
    rax++;
    *((rsp + 0x290)) = rax;
    esi = 0xee890295;
    *((rsp + 0x48)) = 1;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_175:
    rax = *((rsp + 0x1c0));
    *((rsp + 0x320)) = rax;
    eax = *((rsp + 0x12c));
    *((rsp + 0xf0)) = al;
    eax = *((rsp + 0x128));
    *((rsp + 0xf1)) = al;
    al = *((rsp + 0x2b));
    *((rsp + 0xf2)) = al;
    al = *((rsp + 0x29));
    *((rsp + 0xf3)) = al;
    al = *((rsp + 0x2a));
    *((rsp + 0x8f)) = al;
    rax = *((rsp + 0x1e0));
    *((rsp + 0x678)) = rax;
    rax = *((rsp + 0x1e8));
    *((rsp + 0x680)) = rax;
    rax = *((rsp + 0x1f0));
    *((rsp + 0x260)) = rax;
    rax = *((rsp + 0x1f8));
    *((rsp + 0x688)) = rax;
    al = *((rsp + 0x8f));
    esi = 0xb348a13d;
    ecx = 0x45b815e4;
    goto label_204;
label_177:
    rax = *((rsp + 0x38));
    rax++;
    *((rsp + 0x408)) = rax;
    rax = *((rsp + 0x408));
    esi = 0x19078f4;
    ecx = 0x991e8b7b;
    goto label_125;
label_178:
    esi = 0x159f232b;
    rcx = *((rsp + 0x18));
    *((rsp + 0x3c0)) = rcx;
    eax = 0;
    goto label_205;
label_179:
    esi = 0x2ff7a0b1;
    *((rsp + 0x188)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_180:
    esi = 0xde3ef051;
    *((rsp + 0x17)) = 0x76;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_181:
    esi = 0xbc46c095;
    eax = 1;
    goto label_206;
label_182:
    eax = *((rsp + 0x154));
    *((rsp + 0xe9)) = al;
    rax = *((rsp + 0x2b0));
    *((rsp + 0x4e0)) = rax;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x4e0));
    esi = 0xd25177af;
    ecx = 0x300161;
    goto label_125;
label_184:
    esi = 0x553e218a;
    ecx = 0x6648d30a;
    goto label_103;
label_185:
    rax = *((rsp + 0x210));
    rax++;
    *((rsp + 0x488)) = rax;
    rax = *((rsp + 0x488));
    esi = 0xeb73fed0;
    ecx = 0x27abe5b4;
    goto label_125;
label_186:
    esi = 0x9bac71ed;
    ecx = 0x7d349bf0;
    goto label_153;
label_187:
    rax = *((rsp + 0x448));
    *((rbx + rax)) = 0x27;
    esi = 0x5fa61f6c;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
label_3:
    if (esi > 0x45286e13) {
        goto label_207;
    }
    if (esi > 0x2312119f) {
        goto label_208;
    }
    if (esi > 0x120112a4) {
        goto label_209;
    }
    if (esi <= 0x598f203) {
        goto label_210;
    }
    if (esi <= 0xc9856f4) {
        goto label_211;
    }
    if (esi > 0xe85f376) {
        goto label_212;
    }
    if (esi == 0xc9856f5) {
        goto label_213;
    }
    if (esi == 0xcc95e33) {
        goto label_214;
    }
    if (esi != 0xd6bff2a) {
        goto label_0;
    }
    eax = *((rsp + 0xcc));
    esi = 0xa0fc852e;
    ecx = 0xcaea675a;
    goto label_15;
label_207:
    if (esi <= 0x618b0c4b) {
        goto label_215;
    }
    if (esi > 0x6b6f9d2b) {
        goto label_216;
    }
    if (esi <= 0x6648d309) {
        goto label_217;
    }
    if (esi <= 0x6756050c) {
        goto label_218;
    }
    if (esi > 0x69058b56) {
        goto label_219;
    }
    if (esi == 0x6756050d) {
        goto label_220;
    }
    if (esi == 0x67d468af) {
        goto label_221;
    }
    if (esi == 0x68fd5719) {
        goto label_222;
    }
    goto label_0;
label_208:
    if (esi > 0x367b2566) {
        goto label_223;
    }
    if (esi <= 0x2e1f68ad) {
        goto label_224;
    }
    if (esi <= 0x320d6955) {
        goto label_225;
    }
    if (esi > 0x336d8d05) {
        goto label_226;
    }
    if (esi == 0x320d6956) {
        goto label_227;
    }
    if (esi == 0x325db615) {
        goto label_228;
    }
    if (esi != 0x32fcc5c2) {
        goto label_0;
    }
    al = *((rsp + 6));
    *((rsp + 0x4e)) = al;
    al = *((rsp + 0xa2));
    *((rsp + 0x158)) = eax;
    rax = *((rsp + 0x30));
    *((rsp + 0x2c0)) = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x278)) = rax;
    rax = *((rsp + 0x608));
    *((rsp + 0x298)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x4d)) = al;
    esi = 0x56147fa9;
    *((rsp + 0x148)) = 0;
    cl = *((rsp + 7));
    *((rsp + 0x4c)) = cl;
label_156:
    *((rsp + 0x144)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_215:
    if (esi <= 0x52157a06) {
        goto label_229;
    }
    if (esi <= 0x5921050e) {
        goto label_230;
    }
    if (esi <= 0x5c1ac009) {
        goto label_231;
    }
    if (esi > 0x5fa61f6b) {
        goto label_232;
    }
    if (esi == 0x5c1ac00a) {
        goto label_233;
    }
    if (esi == 0x5caf72f0) {
        goto label_234;
    }
    if (esi != 0x5ebb4251) {
        goto label_0;
    }
    eax = *((rsp + 0x2d));
    al >>= 3;
    al &= 7;
    al |= 0x30;
    rcx = *((rsp + 0x478));
    *((rbx + rcx)) = al;
    esi = 0x6bf15c94;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_209:
    if (esi <= 0x19bb047b) {
        goto label_235;
    }
    if (esi <= 0x1d14058f) {
        goto label_236;
    }
    if (esi > 0x1eac3be8) {
        goto label_237;
    }
    if (esi == 0x1d140590) {
        goto label_238;
    }
    if (esi == 0x1d4f8b83) {
        goto label_239;
    }
    if (esi != 0x1dd1f07c) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0x65197087;
    ecx = 0x6339a220;
    goto label_15;
label_216:
    if (esi <= 0x748c4530) {
        goto label_240;
    }
    if (esi <= 0x7a2139e2) {
        goto label_241;
    }
    if (esi > 0x7d72993f) {
        goto label_242;
    }
    if (esi == 0x7a2139e3) {
        goto label_243;
    }
    if (esi == 0x7c02e571) {
        goto label_244;
    }
    if (esi != 0x7d349bf0) {
        goto label_0;
    }
    *((rsp + 0x500)) = rbp;
    *((rsp + 0x8c)) = r13b;
    *((rsp + 0xeb)) = r15b;
    al = *((rsp + 9));
    *((rsp + 0xec)) = al;
    al = *((rsp + 0xa));
    *((rsp + 0x56)) = al;
    al = *((rsp + 8));
    *((rsp + 0x8d)) = al;
    *((rsp + 0x8e)) = r14b;
    rax = *((rsp + 0xb0));
    *((rsp + 0x508)) = rax;
    rax = *((rsp + 0xb8));
    *((rsp + 0x510)) = rax;
    *((rsp + 0x518)) = r12;
    rax = *((rsp + 0xc0));
    *((rsp + 0x520)) = rax;
    al = *((rsp + 0xa0));
    esi = 0x3e968845;
    ecx = 0x80f239c0;
    goto label_103;
label_223:
    if (esi <= 0x3fc4c1d6) {
        goto label_245;
    }
    if (esi > 0x4203c158) {
        goto label_246;
    }
    if (esi <= 0x40f2ea53) {
        goto label_247;
    }
    if (esi == 0x40f2ea54) {
        goto label_248;
    }
    if (esi == 0x41b46991) {
        goto label_249;
    }
    if (esi != 0x4201febc) {
        goto label_0;
    }
    rax = *((rsp + 0x628));
    *((rsp + 0x118)) = rax;
    rax = *((rsp + 0x220));
    *((rsp + 0x110)) = rax;
    rax = *((rsp + 0x620));
    *((rsp + 0x108)) = rax;
    rax = *((rsp + 0x618));
    *((rsp + 0x100)) = rax;
    eax = *((rsp + 0x57));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 0xaf));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    esi = 0xf44e68fd;
    *((rsp + 0x90)) = 0x10;
    rax = *((rsp + 0x218));
    *((rsp + 0xf8)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_229:
    if (esi > 0x4a7d58a7) {
        goto label_250;
    }
    if (esi > 0x463c7a40) {
        goto label_251;
    }
    if (esi <= 0x45b815e3) {
        goto label_252;
    }
    if (esi == 0x45b815e4) {
        goto label_253;
    }
    if (esi == 0x45da0fc2) {
        goto label_254;
    }
    if (esi != 0x46004cef) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    rax++;
    *((rsp + 0x440)) = rax;
    rax = *((rsp + 0x440));
    esi = 0x50800aa4;
    ecx = 0xa5f1b424;
    goto label_125;
label_210:
    if (esi > 0x300160) {
        goto label_255;
    }
    if (esi <= 0xfee1dc23) {
        goto label_256;
    }
    if (esi == 0xfee1dc24) {
        goto label_257;
    }
    if (esi == 0xff27b898) {
        goto label_258;
    }
    if (esi != 0xffc3a069) {
        goto label_0;
    }
    rax = *((rsp + 0x208));
    *((rsp + 0x200)) = rax;
    esi = 0x566e46b5;
    *((rsp + 0x124)) = 0x34;
    al = *((rsp + 0x88));
    *((rsp + 0x120)) = eax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_217:
    if (esi > 0x647d5047) {
        goto label_259;
    }
    if (esi <= 0x6339a21f) {
        goto label_260;
    }
    if (esi == 0x6339a220) {
        goto label_261;
    }
    if (esi == 0x63a892d7) {
        goto label_262;
    }
    if (esi != 0x63ecbc5f) {
        goto label_0;
    }
    rax = *((rsp + 0x220));
    rax++;
    *((rsp + 0x490)) = rax;
    rax = *((rsp + 0x490));
    esi = 0x25bd8294;
    ecx = 0xda6a431d;
    goto label_125;
label_224:
    if (esi > 0x286a0520) {
        goto label_263;
    }
    if (esi <= 0x24798e47) {
        goto label_264;
    }
    if (esi == 0x24798e48) {
        goto label_265;
    }
    if (esi == 0x25bd8294) {
        goto label_266;
    }
    if (esi != 0x27abe5b4) {
        goto label_0;
    }
    rax = *((rsp + 0x488));
    *((rbx + rax)) = 0x27;
    esi = 0xeb73fed0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_230:
    if (esi > 0x56147fa8) {
        goto label_267;
    }
    if (esi <= 0x553e2189) {
        goto label_268;
    }
    if (esi == 0x553e218a) {
        goto label_269;
    }
    if (esi == 0x55b6d685) {
        goto label_270;
    }
    if (esi != 0x55e7cf76) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0x8a4d4541;
    ecx = 0xaf4d75a4;
    goto label_15;
label_235:
    if (esi > 0x159f232a) {
        goto label_271;
    }
    if (esi <= 0x12ed529e) {
        goto label_272;
    }
    if (esi == 0x12ed529f) {
        goto label_273;
    }
    if (esi == 0x14f96d48) {
        goto label_127;
    }
    if (esi != 0x15446e21) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0x56e78998;
    goto label_5;
label_240:
    if (esi > 0x6fee4917) {
        goto label_274;
    }
    if (esi <= 0x6ea4bf52) {
        goto label_275;
    }
    if (esi == 0x6ea4bf53) {
        goto label_276;
    }
    if (esi == 0x6eb4594c) {
        goto label_277;
    }
    if (esi != 0x6fd5b9cf) {
        goto label_0;
    }
    rax = *((rsp + 0x138));
    rax++;
    *((rsp + 0x2c8)) = rax;
    al = *((rsp + 0x2e));
    *((rsp + 0x49)) = al;
    al = *((rsp + 0x2d));
    *((rsp + 0x4b)) = al;
    esi = 0xf61083cc;
    *((rsp + 0x14c)) = 0;
label_193:
    al = *((rsp + 0x89));
    *((rsp + 0x46)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_245:
    if (esi > 0x38beb86d) {
        goto label_278;
    }
    if (esi <= 0x37713ebf) {
        goto label_279;
    }
    if (esi == 0x37713ec0) {
        goto label_280;
    }
    if (esi == 0x38343e51) {
        goto label_281;
    }
    if (esi != 0x38921ca9) {
        goto label_0;
    }
    eax = *((rsp + 0x164));
    esi = 0xfc1abe53;
    ecx = 0xc7ba80a2;
    goto label_15;
label_250:
    if (esi > 0x50800aa3) {
        goto label_282;
    }
    if (esi <= 0x4e4dc84e) {
        goto label_283;
    }
    if (esi == 0x4e4dc84f) {
        goto label_284;
    }
    if (esi == 0x4f6af117) {
        goto label_285;
    }
    if (esi != 0x4f6af3bd) {
        goto label_0;
    }
    esi = 0x1c8c675a;
    ecx = 0xf8587b22;
    goto label_51;
label_211:
    if (esi <= 0x764930c) {
        goto label_286;
    }
    if (esi == 0x764930d) {
        goto label_287;
    }
    if (esi == 0x9ad67c1) {
        goto label_288;
    }
    if (esi != 0xb21edb8) {
        goto label_0;
    }
    esi = 0x4203c159;
    *((rsp + 0x28)) = 0x6e;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_218:
    if (esi <= 0x66f9435b) {
        goto label_289;
    }
    if (esi == 0x66f9435c) {
        goto label_290;
    }
    if (esi == 0x671cb0e2) {
        goto label_127;
    }
    if (esi != 0x6750c4f9) {
        goto label_0;
    }
    eax = *((rsp + 0x6c));
    esi = 0x5478aad6;
    ecx = 0x2e1f68ae;
    goto label_15;
label_225:
    if (esi <= 0x2fcf2032) {
        goto label_291;
    }
    if (esi == 0x2fcf2033) {
        goto label_292;
    }
    if (esi == 0x2ff7a0b1) {
        goto label_293;
    }
    if (esi != 0x31edb382) {
        goto label_0;
    }
    rax = *((rsp + 0x30));
    *((rsp + 0x118)) = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x110)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x108)) = rax;
    rax = *((rsp + 0x310));
    goto label_294;
label_231:
    if (esi <= 0x59adf2eb) {
        goto label_295;
    }
    if (esi == 0x59adf2ec) {
        goto label_296;
    }
    if (esi == 0x5a807149) {
        goto label_297;
    }
    if (esi != 0x5ad7cf7f) {
        goto label_0;
    }
    eax = *((rsp + 6));
    *((rsp + 0xa)) = al;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x38));
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 4));
    eax = *((rsp + 5));
    *((rsp + 8)) = al;
    eax = *((rsp + 7));
    *((rsp + 9)) = al;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r15d = 0;
    esi = *((rsp + 0x54c));
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_236:
    if (esi <= 0x1b5b584c) {
        goto label_298;
    }
    if (esi == 0x1b5b584d) {
        goto label_299;
    }
    if (esi == 0x1c8c675a) {
        goto label_300;
    }
    if (esi != 0x1cc6d789) {
        goto label_0;
    }
    esi = 0x8238150e;
    ecx = 0xbfb53ded;
    goto label_103;
label_241:
    if (esi <= 0x75f38423) {
        goto label_301;
    }
    if (esi == 0x75f38424) {
        goto label_302;
    }
    if (esi == 0x764623e3) {
        goto label_303;
    }
    if (esi != 0x786dea1a) {
        goto label_0;
    }
    rax = *((rsp + 0x30));
    rax++;
    *((rsp + 0x5b8)) = rax;
    rax = *((rsp + 0x5b8));
    esi = 0x8fbeb5e8;
    ecx = 0xe224b2e1;
    if (rax < *((rsp + 0x60))) {
        esi = ecx;
    }
    goto label_199;
label_246:
    if (esi <= 0x43d0d806) {
        goto label_304;
    }
    if (esi == 0x43d0d807) {
        goto label_305;
    }
    if (esi == 0x43dba6fe) {
        goto label_306;
    }
    if (esi != 0x44574ab3) {
        goto label_0;
    }
    quotearg_buffer_restyled (rbx, *((rsp + 0x6a8)), *((rsp + 0xd8)), *((rsp + 0x6b0)), *((rsp + 0x168)), *((rsp + 0x54c)));
    goto label_4;
    goto label_307;
label_251:
    if (esi <= 0x47e19a1b) {
        goto label_308;
    }
    if (esi == 0x47e19a1c) {
        goto label_309;
    }
    if (esi == 0x492502f0) {
        goto label_310;
    }
    if (esi != 0x495d2c34) {
        goto label_0;
    }
    rax = *((rsp + 0x460));
    rax++;
    *((rsp + 0x468)) = rax;
    rax = *((rsp + 0x468));
    esi = 0x5fa70308;
    ecx = 0x97c97627;
    goto label_125;
label_255:
    if (esi <= 0x24fadc7) {
        goto label_311;
    }
    if (esi == 0x24fadc8) {
        goto label_312;
    }
    if (esi == 0x31bf32d) {
        goto label_313;
    }
    if (esi != 0x416143d) {
        goto label_0;
    }
    rax = *((rsp + 0x4c0));
    rax++;
    *((rsp + 0x178)) = rax;
    al = *((rsp + 0x9f));
    esi = 0x8fbeb5e8;
    ecx = 0x786dea1a;
    if (al != 0) {
        esi = ecx;
    }
label_199:
    rax = *((rsp + 0x178));
    *((rsp + 0x1c8)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_259:
    if (esi <= 0x64f5ba3d) {
        goto label_314;
    }
    if (esi == 0x64f5ba3e) {
        goto label_315;
    }
    if (esi == 0x65197087) {
        goto label_316;
    }
    if (esi != 0x660afdbb) {
        goto label_0;
    }
    rax = *((rsp + 0x2f8));
    rcx = *((rsp + 0x300));
    esi = 0x2b993d33;
    ecx = 0x4f6af117;
    goto label_125;
label_263:
    if (esi <= 0x2b993d32) {
        goto label_317;
    }
    if (esi == 0x2b993d33) {
        goto label_318;
    }
    if (esi == 0x2c634995) {
        goto label_319;
    }
    if (esi != 0x2c64a008) {
        goto label_0;
    }
    eax = *((rsp + 0x6c));
    esi = 0x9ad67c1;
    ecx = 0x7c02e571;
    if (eax < 5) {
        esi = ecx;
    }
    eax = *((rsp + 0x6c));
    *((rsp + 0x180)) = eax;
    eax = *((rsp + 0x2f));
    *((rsp + 0x7b)) = al;
    eax = *((rsp + 0x53));
    *((rsp + 0x76)) = al;
    eax = *((rsp + 0x2f));
    *((rsp + 0x7c)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_267:
    if (esi <= 0x56e78997) {
        goto label_320;
    }
    if (esi == 0x56e78998) {
        goto label_321;
    }
    if (esi == 0x56e9acc0) {
        goto label_322;
    }
    if (esi != 0x58deffab) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0x37185d53;
    ecx = 0xaf4d75a4;
    goto label_323;
label_271:
    if (esi <= 0x166cf1fe) {
        goto label_324;
    }
    if (esi == 0x166cf1ff) {
        goto label_325;
    }
    if (esi == 0x16eaf33d) {
        goto label_326;
    }
    if (esi != 0x1846c4a0) {
        goto label_0;
    }
    rax = strlen (*((rsp + 0xd0)));
    esi = 0x45da0fc2;
    *((rsp + 0x3b8)) = rax;
    *((rsp + 0x360)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_274:
    if (esi <= 0x71c9d2e7) {
        goto label_327;
    }
    if (esi == 0x71c9d2e8) {
        goto label_328;
    }
    if (esi == 0x7237e26f) {
        goto label_329;
    }
    if (esi != 0x7367ccde) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rbx + rax)) = 0x27;
    esi = 0x46004cef;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_278:
    if (esi <= 0x3df5fdbc) {
        goto label_330;
    }
    if (esi == 0x3df5fdbd) {
        goto label_331;
    }
    if (esi == 0x3e968845) {
        goto label_332;
    }
    if (esi != 0x3fc30886) {
        goto label_0;
    }
    rax = quotearg_buffer_restyled (rbx, *((rsp + 0x58)), *((rsp + 0xd8)), *((rsp + 0x170)), 5, *((rsp + 0x55c)));
    goto label_4;
label_307:
    *((rsp + 0x230)) = rax;
    esi = 0x68fd5719;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_282:
    if (esi <= 0x50d35a84) {
        goto label_333;
    }
    if (esi == 0x50d35a85) {
        goto label_334;
    }
    if (esi == 0x51684d88) {
        goto label_335;
    }
    if (esi != 0x51699fbd) {
        goto label_0;
    }
    rax = *((rsp + 0x3d0));
    *((rsp + 0x4c8)) = rax;
    rax = *((rsp + 0x30));
    rax += *((rsp + 0x4c8));
    *((rsp + 0x5d0)) = rax;
    rax = *((rsp + 0x5d0));
    esi = 0xd8e3a7f4;
    ecx = 0x4a7d58a8;
    goto label_125;
label_212:
    if (esi == 0xe85f377) {
        goto label_336;
    }
    if (esi == 0x10561490) {
        goto label_337;
    }
    if (esi != 0x10d55dd6) {
        goto label_0;
    }
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x328));
    esi = 0xaf5726a3;
    ecx = 0xb03d4928;
    goto label_125;
label_219:
    if (esi == 0x69058b57) {
        goto label_338;
    }
    if (esi == 0x69ab88f8) {
        goto label_339;
    }
    if (esi != 0x6ac25e51) {
        goto label_0;
    }
    rax = *((rsp + 0x2f0));
    *((rsp + 0x538)) = rax;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x538));
    esi = 0xf39b8ac3;
    ecx = 0x74c779d;
    goto label_125;
label_226:
    if (esi == 0x336d8d06) {
        goto label_340;
    }
    if (esi == 0x3569c5c8) {
        goto label_341;
    }
    if (esi != 0x35837ffb) {
        goto label_0;
    }
    esi = 0x7ed1059c;
    *((rsp + 0x19c)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_232:
    if (esi == 0x5fa61f6c) {
        goto label_342;
    }
    if (esi == 0x5fa70308) {
        goto label_343;
    }
    if (esi != 0x60728148) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0xbfe93fb6;
    ecx = 0x292c00a6;
    goto label_15;
label_237:
    if (esi == 0x1eac3be9) {
        goto label_344;
    }
    if (esi == 0x211e73a7) {
        goto label_345;
    }
    if (esi != 0x22009641) {
        goto label_0;
    }
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x138));
    esi = 0x6fd5b9cf;
    ecx = 0x89e89484;
    goto label_125;
label_242:
    if (esi == 0x7d729940) {
        goto label_346;
    }
    if (esi == 0x7db686c8) {
        goto label_347;
    }
    if (esi != 0x7ed1059c) {
        goto label_0;
    }
    rax = *((rsp + 0x658));
    *((rsp + 0x110)) = rax;
    rax = *((rsp + 0x688));
    *((rsp + 0x118)) = rax;
    rax = *((rsp + 0x680));
    *((rsp + 0x108)) = rax;
    rax = *((rsp + 0x678));
    *((rsp + 0x100)) = rax;
    eax = *((rsp + 0xf4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 0xf3));
    *((rsp + 0xe)) = al;
    esi = 0xf44e68fd;
    *((rsp + 0x90)) = 0;
    rax = *((rsp + 0x320));
    *((rsp + 0xf8)) = rax;
    ecx = *((rsp + 0x19c));
    *((rsp + 0xd)) = cl;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_247:
    if (esi == 0x3fd92880) {
        goto label_348;
    }
    if (esi != 0x408a7e1a) {
        goto label_349;
    }
    eax = *((rsp + 0xb));
    esi = 0x9a913b69;
    ecx = 0x6ac25e51;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    rcx = *((rsp + 0x38));
    *((rsp + 0x400)) = rcx;
    rcx = *((rsp + 0x308));
    *((rsp + 0x3f0)) = rcx;
    goto label_350;
label_252:
    if (esi == 0x45286e14) {
        goto label_351;
    }
    if (esi != 0x456ba924) {
        goto label_0;
    }
    rax = *((rsp + 0x590));
    *((rsp + 0x2f8)) = rax;
    eax = *((rsp + 0x9a));
    *((rsp + 0xe2)) = al;
    rax = *((rsp + 0x588));
    *((rsp + 0xe3)) = al;
    rax = *((rsp + 0x560));
    *((rsp + 0xe4)) = al;
    eax = *((rsp + 0x9b));
    *((rsp + 0x2f)) = al;
    rax = *((rsp + 0x598));
    *((rsp + 0x660)) = rax;
    rax = *((rsp + 0x568));
    *((rsp + 0x53)) = al;
    rax = *((rsp + 0x570));
    *((rsp + 0x5d8)) = rax;
    rax = *((rsp + 0x578));
    *((rsp + 0x5e0)) = rax;
    rax = *((rsp + 0x580));
    *((rsp + 0x668)) = rax;
    rax = *((rsp + 0x5a8));
    *((rsp + 0x240)) = rax;
    rax = *((rsp + 0x5a0));
    *((rsp + 0x248)) = rax;
    eax = *((rsp + 0x268));
    *((rsp + 0x6c)) = eax;
    esi = 0x99d2398f;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_256:
    if (esi == 0xfe383a30) {
        goto label_352;
    }
    if (esi != 0xfe77e7b8) {
        goto label_0;
    }
    rax = *((rsp + 0x4a0));
    rax++;
    *((rsp + 0x2e0)) = rax;
    esi = 0xb348a13d;
    *((rsp + 0x15c)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_260:
    if (esi == 0x618b0c4c) {
        goto label_353;
    }
    if (esi != 0x632f9713) {
        goto label_0;
    }
    esi = 0x9ad67c1;
    *((rsp + 0x180)) = 5;
    *((rsp + 0x7b)) = 1;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_264:
    if (esi == 0x231211a0) {
        goto label_354;
    }
    if (esi != 0x23592045) {
        goto label_0;
    }
    eax = *((rsp + 0xdc));
    goto label_176;
label_268:
    if (esi == 0x52157a07) {
        goto label_355;
    }
    if (esi != 0x5478aad6) {
        goto label_0;
    }
    eax = *((rsp + 0x6c));
    eax += 0xfffffff8;
    esi = 0x6fee4918;
    ecx = 0x19c5a5e6;
    goto label_125;
label_272:
    if (esi == 0x120112a5) {
        goto label_356;
    }
    if (esi != 0x12c43c6c) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rbx + rax)) = 0x3f;
    esi = 0x2fc52b78;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_275:
    if (esi == 0x6b6f9d2c) {
        goto label_357;
    }
    if (esi != 0x6bf15c94) {
        goto label_0;
    }
    rax = *((rsp + 0x478));
    rax++;
    *((rsp + 0x2c8)) = rax;
    eax = *((rsp + 0x2d));
    al &= 7;
    al |= 0x30;
    *((rsp + 0x4b)) = al;
    eax = *((rsp + 0xe8));
    *((rsp + 0x49)) = al;
    esi = 0xf61083cc;
    *((rsp + 0x46)) = 1;
    al = *((rsp + 0x54));
    *((rsp + 0x14c)) = eax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_279:
    if (esi == 0x367b2567) {
        goto label_358;
    }
    if (esi != 0x37185d53) {
        goto label_0;
    }
    eax = *((rsp + 0x94));
    *((rsp + 0xa8)) = al;
    eax = *((rsp + 0x70));
    esi = 0x7d349bf0;
    ecx = 0x5a807149;
    if (eax == 2) {
        esi = ecx;
    }
    goto label_359;
label_283:
    if (esi == 0x4a7d58a8) {
        goto label_360;
    }
    if (esi != 0x4b56707f) {
        goto label_0;
    }
    rax = strlen (*((rsp + 0xd0)));
    *((rsp + 0x280)) = rax;
    esi = 0xe0ba3425;
    *((rsp + 0x45)) = 1;
    goto label_361;
label_286:
    if (esi == 0x598f204) {
        goto label_362;
    }
    if (esi != 0x74c779d) {
        goto label_0;
    }
    rax = *((rsp + 0x538));
    *((rbx + rax)) = 0;
    esi = 0xf39b8ac3;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_289:
    if (esi == 0x6648d30a) {
        goto label_363;
    }
    if (esi != 0x66ebc4cd) {
        goto label_0;
    }
    rax = *((rsp + 0x370));
    *((rsp + 0x600)) = rax;
    rax = *((rsp + 0x3b0));
    *((rsp + 0x608)) = rax;
    eax = *((rsp + 0x18c));
    al &= 1;
    *((rsp + 0x85)) = al;
    eax = *((rsp + 0x85));
    *((rsp + 0xa2)) = al;
    rax = *((rsp + 0x600));
    esi = 0x336d8d06;
    ecx = 0x166cf1ff;
    if (rax > 1) {
        esi = ecx;
    }
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_291:
    if (esi == 0x2e1f68ae) {
        goto label_364;
    }
    if (esi != 0x2fc52b78) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    rax++;
    *((rsp + 0x428)) = rax;
    rax = *((rsp + 0x428));
    esi = 0x9ee9c857;
    ecx = 0x3fd92880;
    goto label_125;
label_295:
    if (esi == 0x5921050f) {
        goto label_365;
    }
    if (esi != 0x59430ae6) {
        goto label_0;
    }
    rax = *((rsp + 0x530));
    rax++;
    *((rsp + 0x658)) = rax;
    eax = *((rsp + 0xf0));
    esi = 0x35837ffb;
    ecx = 0x7ed1059c;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    cl = *((rsp + 0xc));
    *((rsp + 0x19c)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_298:
    if (esi == 0x19bb047c) {
        goto label_366;
    }
    if (esi != 0x19c5a5e6) {
        goto label_0;
    }
    eax = *((rsp + 0x6c));
    esi = 0xf3dbcb3b;
    ecx = 0x56e9acc0;
    if (eax != 0xa) {
        esi = ecx;
    }
    rax = *((rsp + 0x248));
    *((rsp + 0x390)) = rax;
    rax = *((rsp + 0x240));
    *((rsp + 0x380)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_301:
    if (esi == 0x748c4531) {
        goto label_367;
    }
    if (esi != 0x75964b5e) {
        goto label_0;
    }
    eax = *((rsp + 0xdc));
    esi = 0xb6498275;
    ecx = 0x1620464c;
    goto label_15;
label_304:
    if (esi == 0x4203c159) {
        goto label_368;
    }
    if (esi != 0x438d2fcb) {
        goto label_0;
    }
    esi = 0xd02d3f98;
    ecx = 0xd197ff03;
    goto label_103;
label_308:
    if (esi == 0x463c7a41) {
        goto label_369;
    }
    if (esi != 0x46e066cc) {
        goto label_0;
    }
    rax = *((rsp + 0x30));
    rcx = *((rsp + 0xd0));
    esi = 0x7d349bf0;
    ecx = 0xe9daa39f;
    if (*((rcx + rax + 1)) == 0x3f) {
        esi = ecx;
    }
    goto label_190;
label_311:
    if (esi == 0x300161) {
        goto label_370;
    }
    if (esi != 0x19078f4) {
        goto label_0;
    }
    rax = *((rsp + 0x408));
    rax++;
    *((rsp + 0x410)) = rax;
    rax = *((rsp + 0x410));
    esi = 0xd40228df;
    ecx = 0xf0153fe0;
    goto label_125;
label_314:
    if (esi == 0x647d5048) {
        goto label_371;
    }
    if (esi != 0x64cb348b) {
        goto label_0;
    }
label_127:
    rax = *((rsp + 0x30));
    *((rsp + 0x118)) = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x110)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x108)) = rax;
    rax = *((rsp + 0x60));
label_294:
    *((rsp + 0x100)) = rax;
    al = *((rsp + 4));
    *((rsp + 0xf)) = al;
    al = *((rsp + 5));
    *((rsp + 0xe)) = al;
    al = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    esi = 0xf44e68fd;
label_6:
    *((rsp + 0x90)) = 0x10;
    goto label_2;
label_317:
    if (esi == 0x286a0521) {
        goto label_372;
    }
    if (esi != 0x292c00a6) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    esi = 0xa492e3e8;
    ecx = 0x31bf32d;
    goto label_15;
label_320:
    if (esi == 0x56147fa9) {
        goto label_373;
    }
    if (esi != 0x566e46b5) {
        goto label_0;
    }
    eax = *((rsp + 0x120));
    *((rsp + 0xa9)) = al;
    rax = *((rsp + 0x200));
    *((rsp + 0x5f8)) = rax;
    eax = *((rsp + 0x124));
    *((rsp + 0x164)) = eax;
    rax = *((rsp + 0x5c8));
    esi = 0x38921ca9;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_324:
    if (esi == 0x159f232b) {
        goto label_374;
    }
    if (esi != 0x1620464c) {
        goto label_0;
    }
    eax = *((rsp + 0xdc));
    eax += 0xffffffa5;
    esi = 0x928ab613;
    ecx = 0x9542ad5a;
    goto label_125;
label_327:
    if (esi == 0x6fee4918) {
        goto label_375;
    }
    if (esi != 0x6feec056) {
        goto label_0;
    }
    eax = *((rsp + 0x2d));
    al >>= 6;
    al |= 0x30;
    rcx = *((rsp + 0x470));
    *((rbx + rcx)) = al;
    esi = 0x9319e871;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_330:
    if (esi == 0x38beb86e) {
        goto label_376;
    }
    if (esi != 0x3c6a567f) {
        goto label_0;
    }
    al = *((rsp + 0xa2));
    *((rsp + 0x158)) = eax;
    rax = *((rsp + 0x610));
    *((rsp + 0x2c0)) = rax;
    esi = 0x56147fa9;
    rcx = *((rsp + 0x608));
    *((rsp + 0x298)) = rcx;
    eax = *((rsp + 0x198));
    *((rsp + 0x148)) = eax;
    eax = *((rsp + 0x81));
    *((rsp + 0x144)) = eax;
    eax = *((rsp + 0x82));
    *((rsp + 0x4c)) = al;
    eax = *((rsp + 0x83));
    *((rsp + 0x4e)) = al;
    eax = *((rsp + 0x84));
    *((rsp + 0x4d)) = al;
    rax = *((rsp + 0x3e0));
    *((rsp + 0x278)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_333:
    if (esi == 0x50800aa4) {
        goto label_377;
    }
    if (esi != 0x50c6fda1) {
        goto label_0;
    }
    eax = *((rsp + 0x6c));
    *((rsp + 0x130)) = eax;
    rax = *((rsp + 0x248));
    *((rsp + 0x1d8)) = rax;
    rax = *((rsp + 0x240));
    *((rsp + 0x1d0)) = rax;
    rax = *((rsp + 0x5e0));
    *((rsp + 0x1a8)) = rax;
    rax = *((rsp + 0x5d8));
    *((rsp + 0x1b0)) = rax;
    esi = 0x8c0ac709;
    eax = 0;
    *((rsp + 0x1b8)) = rax;
    al = *((rsp + 0x53));
    *((rsp + 0x27)) = al;
    goto label_378;
label_213:
    eax = *((rsp + 0x10));
    esi = 0xac0ae1e3;
    ecx = 0x367b2567;
    goto label_51;
label_214:
    eax = *((rsp + 0x10));
    esi = 0x37185d53;
    ecx = 0x19bb047c;
    goto label_323;
label_220:
    rax = *((rsp + 0x4c0));
    *((rbx + rax)) = 0x5c;
    esi = 0x416143d;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_221:
    esi = 0x55b6d685;
    ecx = 0x1eac3be9;
    goto label_103;
label_227:
    eax = *((rsp + 0xcc));
label_183:
    esi = 0x985b5332;
    ecx = 0x52157a07;
    goto label_51;
label_228:
    cl = *((rsp + 0xb));
    eax = *((rsp + 0x70));
    esi = 0x9275ee02;
    edx = 0xf7853072;
    if (eax == 2) {
        esi = edx;
    }
    ecx = 0x9275ee02;
    goto label_51;
label_233:
    esi = 0x9272e77d;
    rax = *((rsp + 0x5e8));
    *((rsp + 0x398)) = rax;
    eax = 0;
    *((rsp + 0x348)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_234:
    eax = *((rsp + 0xdc));
label_176:
    esi = 0x928ab613;
    ecx = 0x9542ad5a;
    goto label_51;
label_238:
    eax = *((rsp + 0x10));
label_23:
    esi = 0x19bb047c;
label_5:
    ecx = 0x37185d53;
    if (eax < 0x5f) {
label_323:
        esi = ecx;
    }
    *((rsp + 0x94)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_239:
    esi = 0xf2faffd8;
    al = 1;
    *((rsp + 0x134)) = eax;
    goto label_379;
label_243:
    eax = *((rsp + 0x16c));
    esi = 0xfc1b03c0;
    ecx = 0xf8587b22;
    goto label_15;
label_244:
    eax = *((rsp + 0x7c));
    *((rsp + 0x86)) = al;
    eax = *((rsp + 0x86));
    esi = 0xd2039916;
    ecx = 0x6ea4bf53;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    eax = *((rsp + 0x86));
    *((rsp + 0x47)) = al;
    eax = *((rsp + 0x76));
    *((rsp + 0x44)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_248:
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x210));
    esi = 0xb1b86cea;
    ecx = 0x86599e58;
    goto label_125;
label_249:
    rax = *((rsp + 0x30));
    rax += 2;
    *((rsp + 0x420)) = rax;
    rax = *((rsp + 0x420));
    esi = 0x7d349bf0;
    ecx = 0x46e066cc;
    if (rax < *((rsp + 0x60))) {
        esi = ecx;
    }
    goto label_190;
label_253:
    al = *((rsp + 0xf1));
    esi = 0x2c634995;
    ecx = 0xb348a13d;
    if ((al & 1) != 0) {
label_204:
        esi = ecx;
    }
    rcx = *((rsp + 0x260));
    *((rsp + 0x2e0)) = rcx;
    cl = *((rsp + 0x8f));
    *((rsp + 0x15c)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_254:
    rax = *((rsp + 0x360));
    *((rsp + 0x310)) = rax;
    rax = *((rsp + 0x648));
    esi = 0xf2faffd8;
    ecx = 0xccc377f8;
    if (rax <= *((rsp + 0x3b8))) {
        esi = ecx;
    }
label_202:
    *((rsp + 0x134)) = 0;
label_379:
    rax = *((rsp + 0x310));
label_195:
    *((rsp + 0x228)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_257:
    rax = *((rsp + 0x528));
    rax++;
    *((rsp + 0x1f0)) = rax;
    rax = *((rsp + 0x628));
    *((rsp + 0x1f8)) = rax;
    rax = *((rsp + 0x620));
    *((rsp + 0x1e8)) = rax;
    rax = *((rsp + 0x618));
    *((rsp + 0x1e0)) = rax;
    al = *((rsp + 0xef));
    *((rsp + 0x2a)) = al;
    al = *((rsp + 0xaf));
    *((rsp + 0x29)) = al;
    al = *((rsp + 0xee));
    *((rsp + 0x2b)) = al;
    al = *((rsp + 0xed));
    *((rsp + 0x12c)) = eax;
    esi = 0xb556d5d8;
    al = 1;
    *((rsp + 0x128)) = eax;
    rax = *((rsp + 0x218));
    goto label_197;
label_258:
    al = *((rsp + 0x55));
    esi = 0x8eadc7fe;
    ecx = 0xba7184dc;
    if ((al & 1) != 0) {
label_191:
        esi = ecx;
    }
    rcx = *((rsp + 0x210));
    *((rsp + 0x2b0)) = rcx;
    cl = *((rsp + 0x55));
    *((rsp + 0x154)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_261:
    eax = *((rsp + 0x10));
    esi = 0xb21edb8;
    ecx = 0x69ab88f8;
    goto label_15;
label_262:
    eax = *((rsp + 0x70));
    esi = 0xa8a806d8;
    ecx = 0x6eb4594c;
    goto label_51;
label_265:
    eax = *((rsp + 0xb));
    esi = 0xde3ef051;
    ecx = 0xe1fa1387;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    goto label_380;
label_266:
    rax = *((rsp + 0x490));
    rax++;
    *((rsp + 0x498)) = rax;
    rax = *((rsp + 0x498));
    esi = 0xd0783449;
    ecx = 0x51684d88;
    goto label_125;
label_269:
    eax = *((rsp + 0x70));
    esi = 0xbcdef484;
    ecx = 0x89d8f242;
    if (eax == 2) {
        esi = ecx;
    }
label_196:
    rcx = *((rsp + 0x138));
    *((rsp + 0x2a0)) = rcx;
    al = *((rsp + 0x2e));
    *((rsp + 0x4a)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_270:
    rcx = *((rsp + 0x18));
    esi = 0x83f80c71;
    edx = 0x159f232b;
    if (*((rsp + 0x58)) != 0) {
        esi = edx;
    }
    if (rcx == 0) {
        esi = edx;
    }
    rcx = *((rsp + 0x58));
    *((rsp + 0x3c0)) = rcx;
    rax = *((rsp + 0x18));
label_205:
    *((rsp + 0x368)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_273:
    rax = *((rsp + 0x388));
    *((rsp + 0x18)) = rax;
    al = *((rsp + 0x77));
    *((rsp + 0xc)) = al;
    al = *((rsp + 0x78));
    *((rsp + 5)) = al;
    al = *((rsp + 0x79));
    *((rsp + 4)) = al;
    rax = *((rsp + 0x3a0));
    *((rsp + 0x170)) = rax;
    rax = *((rsp + 0x3a8));
    *((rsp + 0x58)) = rax;
    rax = *((rsp + 0x350));
    *((rsp + 0x38)) = rax;
    rax = *((rsp + 0x358));
    *((rsp + 0x30)) = rax;
    rax = *((rsp + 0x170));
    *(rsp + 0x9e) = (rax == -1) ? 1 : 0;
    al = *((rsp + 0x9e));
    esi = 0xd9f53783;
    ecx = 0xe1e408b9;
    goto label_103;
label_276:
    al = *((rsp + 0x47));
    *((rsp + 0xa6)) = al;
    al = *((rsp + 0x44));
    *((rsp + 0xe5)) = al;
    esi = 0x1cc6d789;
    ecx = 0xbf5b6cb2;
    if ((*((rsp + 0xa6)) & 1) != 0) {
        esi = ecx;
    }
    eax = 0;
label_192:
    *((rsp + 0x338)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_277:
    al = *((rsp + 0xb));
    esi = 0x7d349bf0;
    ecx = 0x671cb0e2;
    if ((al & 1) != 0) {
label_153:
        esi = ecx;
    }
label_190:
    cl = *((rsp + 6));
    *((rsp + 0xa)) = cl;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x38));
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 4));
    al = *((rsp + 5));
    *((rsp + 8)) = al;
    al = *((rsp + 7));
    *((rsp + 9)) = al;
label_189:
    r13d = 0;
    rbp = *((rsp + 0x18));
    r15d = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_280:
    al = *((rsp + 0x9c));
    esi = 0x1b5b584d;
    ecx = 0x24fadc8;
    goto label_103;
label_281:
    esi = 0x6ac25e51;
    ecx = 0x408a7e1a;
    if (*((rsp + 0x308)) != 0) {
        esi = ecx;
    }
label_350:
    rcx = *((rsp + 0x38));
    *((rsp + 0x2f0)) = rcx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_284:
    eax = *((rsp + 0x10));
    esi = 0xbf38d520;
    goto label_5;
label_285:
    rax = *((rsp + 0x300));
    ecx = *((rsp + 0x9d));
    *((rbx + rax)) = cl;
    esi = 0x2b993d33;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_287:
    rax = *((rsp + 0x458));
    rax += *((rsp + 0x4d0));
    rcx = *((rsp + 0xd0));
    eax = *((rcx + rax));
    *((rsp + 0xdc)) = eax;
    esi = 0xfca62f35;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_288:
    al = *((rsp + 0x7b));
    *((rsp + 0xa5)) = al;
    eax = *((rsp + 0x180));
    *((rsp + 0x55c)) = eax;
    esi = 0xa3e3ae8f;
    ecx = 0xbc46c095;
    if ((*((rsp + 0xa5)) & 1) != 0) {
        esi = ecx;
    }
    eax = 0;
label_206:
    *((rsp + 0x330)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_290:
    esi = 0x566e46b5;
    *((rsp + 0x124)) = 0x34;
    rcx = *((rsp + 0x208));
label_198:
    *((rsp + 0x200)) = rcx;
    *((rsp + 0x120)) = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_292:
    esi = 0xb77de89d;
    ecx = 0x3fc30886;
    goto label_103;
label_293:
    rax = *((rsp + 0x238));
    rax += *((rsp + 0x208));
    *((rsp + 0x200)) = rax;
    esi = 0x566e46b5;
    *((rsp + 0x124)) = 0;
    ecx = *((rsp + 0x188));
    *((rsp + 0x120)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_296:
    rax = *((rsp + 0x4d0));
    rax++;
    *((rsp + 0x378)) = rax;
    esi = 0x120112a5;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_297:
    eax = *((rsp + 0xb));
    esi = 0x7d349bf0;
    ecx = 0xde0d40f0;
    if ((al & 1) != 0) {
        esi = ecx;
    }
label_359:
    ecx = *((rsp + 6));
    *((rsp + 0xa)) = cl;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x38));
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 4));
    eax = *((rsp + 5));
    *((rsp + 8)) = al;
    eax = *((rsp + 7));
    *((rsp + 9)) = al;
    r13b = *((rsp + 0xa8));
    goto label_381;
label_299:
    rax = rsp + 0x5b0;
    *((rsp + 0x450)) = rax;
    rax = *((rsp + 0x450));
    rax = *((rsp + 0x450));
    *(rax) = 0;
    rax = *((rsp + 0x60));
    esi = 0xe0ba3425;
    ecx = 0x4b56707f;
    if (rax == -1) {
        esi = ecx;
    }
    *((rsp + 0x45)) = 1;
    rax = *((rsp + 0x60));
    *((rsp + 0x280)) = rax;
label_361:
    eax = 0;
    *((rsp + 0x270)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_300:
    esi = 0x68fd5719;
label_86:
    *((rsp + 0x230)) = rcx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_302:
    rax = *((rsp + 0x260));
    *((rbx + rax)) = 0x27;
    esi = 0xacf77f7c;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_303:
    eax = *((rsp + 0x10));
    esi = 0x1dd1f07c;
    ecx = 0x69058b57;
    goto label_15;
label_305:
    rax = *((rsp + 0x138));
    *((rbx + rax)) = 0x27;
    esi = 0x89ae8f14;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_306:
    al = *((rsp + 0xb));
    esi = 0xe85f377;
    ecx = 0x71c9d2e8;
    if ((al & 1) != 0) {
        esi = ecx;
    }
    rcx = *((rsp + 0x170));
    *((rsp + 0x3f8)) = rcx;
    rcx = *((rsp + 0x18));
label_203:
    *((rsp + 0x3e8)) = rcx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_309:
    eax = *((rsp + 0x2c));
    esi = 0x4203c159;
    ecx = 0xedf4b3fa;
    if (al != 0) {
        esi = ecx;
    }
    eax = *((rsp + 6));
    *((rsp + 0x28)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_310:
    esi = 0x7c02e571;
    *((rsp + 0x7c)) = 1;
    eax = *((rsp + 0x7e));
    *((rsp + 0x76)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_312:
    rax = ctype_b_loc ();
    rax = *(rax);
    rcx = *((rsp + 0x10));
    eax = *((rax + rcx*2));
    eax >>= 0xe;
    al &= 1;
    *((rsp + 0x18c)) = eax;
    esi = 0x66ebc4cd;
    rax = *((rsp + 0x60));
    *((rsp + 0x3b0)) = rax;
    eax = 1;
    *((rsp + 0x370)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_313:
    eax = *((rsp + 0x10));
    esi = 0x15446e21;
    ecx = 0xa96168f2;
    goto label_15;
label_315:
    al = *((rsp + 0x85));
    esi = 0x166cf1ff;
    ecx = 0x32fcc5c2;
    goto label_103;
label_316:
    eax = *((rsp + 0x10));
    esi = 0xbc2083be;
    ecx = 0x9d833b07;
    goto label_15;
label_318:
    rax = *((rsp + 0x300));
    rax++;
    *((rsp + 0x348)) = rax;
    rax = *((rsp + 0x5f0));
    rax++;
    *((rsp + 0x398)) = rax;
    esi = 0x9272e77d;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_319:
    rax = *((rsp + 0x320));
    rcx = *((rsp + 0x260));
    esi = 0xacf77f7c;
    ecx = 0x75f38424;
    goto label_125;
label_321:
    eax = *((rsp + 0x10));
    esi = 0xac0ae1e3;
    ecx = 0xc41fe1a7;
    goto label_51;
label_322:
    rax = gettext_quote (0x40e464, *((rsp + 0x6c)));
    *((rsp + 0x390)) = rax;
    rax = gettext_quote (0x40e466, *((rsp + 0x6c)));
    *((rsp + 0x380)) = rax;
    esi = 0xf3dbcb3b;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_325:
    rax = *((rsp + 0x30));
    rax += *((rsp + 0x600));
    *((rsp + 0x650)) = rax;
    eax = *((rsp + 6));
    *((rsp + 0x80)) = al;
    rax = *((rsp + 0x30));
    *((rsp + 0x3c8)) = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x3d8)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0x7d)) = al;
    esi = 0x6b6f9d2c;
    *((rsp + 0x184)) = 0;
    eax = *((rsp + 7));
    *((rsp + 0x7a)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_326:
    rax = *((rsp + 0x238));
    esi = 0x325db615;
    ecx = 0x8e0022a2;
    goto label_51;
label_328:
    rax = *((rsp + 0x3e8));
    *((rsp + 0x6a8)) = rax;
    rax = *((rsp + 0x3f8));
    *((rsp + 0x6b0)) = rax;
    eax = *((rsp + 0x70));
    esi = 0x44574ab3;
    ecx = 0x8e731a77;
    if (eax == 2) {
        esi = ecx;
    }
label_194:
    ecx = *((rsp + 0x70));
    *((rsp + 0x160)) = ecx;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_329:
    eax = *((rsp + 0x6c));
    esi = 0x6750c4f9;
    ecx = 0x632f9713;
    goto label_15;
label_331:
    eax = *((rsp + 0x16c));
    esi = 0x7a2139e3;
    ecx = 0x4f6af3bd;
    goto label_15;
label_332:
    esi = 0xc7797312;
    ecx = 0xaef5717b;
    if ((*((rsp + 0xb)) & 1) != 0) {
        esi = ecx;
    }
    ecx = 0xc7797312;
    goto label_51;
label_334:
    rax = *((rsp + 0x4a0));
    *((rbx + rax)) = 0x27;
    esi = 0xfe77e7b8;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_335:
    rax = *((rsp + 0x498));
    *((rbx + rax)) = 0x27;
    esi = 0xd0783449;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_336:
    al = *((rsp + 0xa3));
    esi = 0x38343e51;
    ecx = 0xd5f5b568;
    goto label_103;
label_337:
    rax = *((rsp + 0x210));
    *((rsp + 0x3e0)) = rax;
    eax = *((rsp + 0x55));
    *((rsp + 0x84)) = al;
    eax = *((rsp + 0xab));
    *((rsp + 0x83)) = al;
    eax = *((rsp + 0xaa));
    *((rsp + 0x82)) = al;
    esi = 0x3c6a567f;
    *((rsp + 0x198)) = 0x2c;
    eax = *((rsp + 0x8a));
    goto label_382;
label_338:
    eax = *((rsp + 0x10));
    esi = 0x9d60a215;
    ecx = 0xe65faf38;
    goto label_15;
label_339:
    esi = 0x4203c159;
    *((rsp + 0x28)) = 0x74;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_340:
    al = *((rsp + 0x2c));
    esi = 0x32fcc5c2;
    ecx = 0x64f5ba3e;
    goto label_103;
label_341:
    rax = *((rsp + 0x438));
    *((rbx + rax)) = 0x3f;
    esi = 0xa8eacb60;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_342:
    r12 = *((rsp + 0x448));
    r12++;
    eax = *((rsp + 6));
    *((rsp + 0xa)) = al;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x670));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    eax = *((rsp + 7));
    *((rsp + 9)) = al;
    esi = 0x7d349bf0;
    r13b = 1;
    r15d = 0;
    rbp = *((rsp + 0x318));
    *((rsp + 8)) = 1;
    r14d = 0;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_343:
    rax = *((rsp + 0x468));
    rax++;
    *((rsp + 0x2a0)) = rax;
    esi = 0xbcdef484;
    *((rsp + 0x4a)) = 1;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_344:
    rax = *((rsp + 0x30));
    *((rsp + 0x118)) = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x110)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x108)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0x100)) = rax;
    al = *((rsp + 4));
    *((rsp + 0xf)) = al;
    al = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    esi = 0xf44e68fd;
    *((rsp + 0xe)) = 1;
    goto label_6;
label_345:
    rax = *((rsp + 0x170));
    *((rsp + 0x360)) = rax;
    esi = 0x45da0fc2;
    rax = *((rsp + 0x170));
    *((rsp + 0x3b8)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_346:
    rax = *((rsp + 0x30));
    *((rsp + 0x118)) = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x110)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x108)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0x100)) = rax;
    al = *((rsp + 4));
    *((rsp + 0xf)) = al;
    al = *((rsp + 5));
    *((rsp + 0xe)) = al;
    al = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    esi = 0xf44e68fd;
    *((rsp + 0x90)) = 0xf;
    goto label_2;
label_347:
    al = *((rsp + 4));
    esi = 0xd685a47d;
    ecx = 0xee890295;
    if ((al & 1) != 0) {
        esi = ecx;
    }
label_111:
    rax = *((rsp + 0x38));
    *((rsp + 0x290)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_348:
    rax = *((rsp + 0x428));
    *((rbx + rax)) = 0x22;
    esi = 0x9ee9c857;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_351:
    eax = *((rsp + 0x168));
    esi = 0x598f204;
    ecx = 0x8cb71766;
    goto label_15;
label_352:
    rax = *((rsp + 0x250));
    rax += *((rsp + 0x30));
    *((rsp + 0x648)) = rax;
    rax = *((rsp + 0x250));
    cl = *((rsp + 0x9e));
    esi = 0x211e73a7;
    edx = 0x1846c4a0;
    if (rax > 1) {
        esi = edx;
    }
    ecx = 0x211e73a7;
    if (cl == 0) {
label_51:
        esi = ecx;
    }
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_353:
    eax = *((rsp + 0xcc));
    eax += 0xffffffd9;
label_201:
    esi = 0x985b5332;
    ecx = 0x52157a07;
    goto label_125;
label_354:
    al = *((rsp + 0x52));
    *((rsp + 0xef)) = al;
    rax = *((rsp + 0x2e8));
    *((rsp + 0x528)) = rax;
    rax = *((rsp + 0x218));
    rcx = *((rsp + 0x528));
    esi = 0xfee1dc24;
    ecx = 0x88c7815c;
    goto label_125;
label_355:
    esi = 0xf4993e48;
    ecx = 0x91018eab;
    goto label_103;
label_356:
    rax = *((rsp + 0x378));
    *((rsp + 0x4d0)) = rax;
    rax = *((rsp + 0x238));
    rcx = *((rsp + 0x4d0));
    esi = 0xc8f275a4;
    ecx = 0x764930d;
    goto label_125;
label_357:
    eax = *((rsp + 0x184));
    *((rsp + 0x89)) = al;
    al = *((rsp + 0x7a));
    *((rsp + 0x54)) = al;
    al = *((rsp + 0x80));
    *((rsp + 0x2d)) = al;
    al = *((rsp + 0x7d));
    *((rsp + 0x2e)) = al;
    rax = *((rsp + 0x3d8));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x3c8));
    *((rsp + 0x610)) = rax;
    al = *((rsp + 0x2c));
    esi = 0xdee7706a;
    ecx = 0xb4c899ce;
    goto label_103;
label_358:
    esi = 0x4203c159;
    *((rsp + 0x28)) = 0x72;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_360:
    rax = *((rsp + 0x5d0));
    rcx = *((rsp + 0xd0));
    esi = 0xd8e3a7f4;
    ecx = 0x85cc1832;
    goto label_103;
label_362:
    eax = *((rsp + 0x168));
    esi = 0xdc2cc313;
    ecx = 0xb556d5d8;
    if (eax == 0x2c) {
        esi = ecx;
    }
    rcx = *((rsp + 0x4f8));
    *((rsp + 0x1f8)) = rcx;
    rcx = *((rsp + 0x4f0));
    *((rsp + 0x1f0)) = rcx;
    rax = *((rsp + 0x58));
    *((rsp + 0x1e8)) = rax;
    rax = *((rsp + 0x4e8));
    *((rsp + 0x1e0)) = rax;
    cl = *((rsp + 0x8b));
    *((rsp + 0x2a)) = cl;
    cl = *((rsp + 5));
    *((rsp + 0x29)) = cl;
    cl = *((rsp + 0xae));
    *((rsp + 0x2b)) = cl;
    al = *((rsp + 0xad));
    *((rsp + 0x128)) = eax;
    al = *((rsp + 0xac));
    *((rsp + 0x12c)) = eax;
    rax = *((rsp + 0x18));
label_197:
    *((rsp + 0x1c0)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_363:
    rax = *((rsp + 0x138));
    *((rsp + 0x3e0)) = rax;
    eax = *((rsp + 0x2e));
    *((rsp + 0x84)) = al;
    eax = *((rsp + 0x2d));
    *((rsp + 0x83)) = al;
    eax = *((rsp + 0x54));
    *((rsp + 0x82)) = al;
    esi = 0x3c6a567f;
    *((rsp + 0x198)) = 0x10;
    eax = *((rsp + 0x89));
label_382:
    *((rsp + 0x81)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_364:
    eax = *((rsp + 0x6c));
    *((rsp + 0x130)) = eax;
    rax = *((rsp + 0x248));
    *((rsp + 0x1d8)) = rax;
    rax = *((rsp + 0x240));
    *((rsp + 0x1d0)) = rax;
    rax = *((rsp + 0x5e0));
    *((rsp + 0x1a8)) = rax;
    esi = 0x8c0ac709;
    *((rsp + 0x27)) = 1;
    eax = 0;
    *((rsp + 0x1b8)) = rax;
    rax = *((rsp + 0x5d8));
    *((rsp + 0x1b0)) = rax;
label_378:
    eax = 0;
label_73:
    *((rsp + 0x1a0)) = rax;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_365:
    esi = 0x492502f0;
    *((rsp + 0x7e)) = 1;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_366:
    eax = *((rsp + 6));
    *((rsp + 0xa)) = al;
    rax = *((rsp + 0x30));
    *((rsp + 0xc0)) = rax;
    r12 = *((rsp + 0x38));
    rax = *((rsp + 0x58));
    *((rsp + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0xb0)) = rax;
    r14b = *((rsp + 4));
    eax = *((rsp + 5));
    *((rsp + 8)) = al;
    eax = *((rsp + 7));
    *((rsp + 9)) = al;
    esi = 0x7d349bf0;
    r13b = 1;
label_381:
    r15d = 0;
    rbp = *((rsp + 0x18));
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_367:
    eax = *((rsp + 0x6c));
    esi = 0x7237e26f;
    ecx = 0x2c64a008;
    if (eax < 6) {
label_15:
        esi = ecx;
    }
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_368:
    eax = *((rsp + 0x28));
    *((rsp + 0xa7)) = al;
    eax = *((rsp + 0x70));
    esi = 0xde3ef051;
    ecx = 0x24798e48;
    if (eax == 2) {
        esi = ecx;
    }
label_380:
    eax = *((rsp + 0xa7));
    *((rsp + 0x17)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_369:
    esi = 0x492502f0;
    ecx = 0xce61bee9;
    if (*((rsp + 0x6c)) <= 0) {
        esi = ecx;
    }
    eax = *((rsp + 0x53));
    *((rsp + 0x7e)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_370:
    rax = *((rsp + 0x4e0));
    ecx = *((rsp + 0xab));
    *((rbx + rax)) = cl;
    esi = 0xd25177af;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_371:
    al = *((rsp + 0x2c));
    esi = 0xce6d9575;
    ecx = 0xdce0963d;
    if (al != 0) {
label_103:
        esi = ecx;
    }
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_372:
    *(rbx) = 0x22;
    esi = 0xe178eb2e;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_373:
    eax = *((rsp + 0x148));
    *((rsp + 0x168)) = eax;
    eax = *((rsp + 0x158));
    *((rsp + 0xac)) = al;
    eax = *((rsp + 0x144));
    *((rsp + 0xad)) = al;
    eax = *((rsp + 0x4c));
    *((rsp + 0xea)) = al;
    eax = *((rsp + 0x4e));
    *((rsp + 0xae)) = al;
    eax = *((rsp + 0x4d));
    *((rsp + 0x8b)) = al;
    rax = *((rsp + 0x298));
    *((rsp + 0x4e8)) = rax;
    rax = *((rsp + 0x278));
    *((rsp + 0x4f0)) = rax;
    rax = *((rsp + 0x2c0));
    *((rsp + 0x4f8)) = rax;
    esi = 0x45286e14;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_374:
    rax = *((rsp + 0x368));
    *((rsp + 0x318)) = rax;
    rax = *((rsp + 0x3c0));
    *((rsp + 0x670)) = rax;
    rax = *((rsp + 0x38));
    esi = 0x46004cef;
    ecx = 0x7367ccde;
    goto label_125;
label_375:
    esi = 0x3fc4c1d7;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_376:
    eax = mbsinit (rsp + 0x5b0);
    esi = 0xdedb3af8;
    ecx = 0xe0ba3425;
    if (eax == 0) {
        esi = ecx;
    }
    rax = *((rsp + 0x258));
    *((rsp + 0x280)) = rax;
    rax = *((rsp + 0x5f8));
    *((rsp + 0x270)) = rax;
    eax = *((rsp + 0xa9));
    *((rsp + 0x45)) = al;
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_377:
    rax = *((rsp + 0x440));
    rax++;
    *((rsp + 0x448)) = rax;
    rax = *((rsp + 0x448));
    esi = 0x5fa61f6c;
    ecx = 0x8a858c20;
    if (rax < *((rsp + 0x318))) {
label_125:
        esi = ecx;
    }
    if (esi <= 0xfe383a2f) {
        goto label_1;
    }
    goto label_3;
label_349:
    if (esi != 0x3fc4c1d7) {
        goto label_0;
    }
    abort ();
label_222:
    rax = *((rsp + 0x230));
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4092b0 */
#include <stdint.h>
 
int64_t dbg_quotearg_alloc (char const * arg, int64_t arg3, size_t argsize, quoting_options const * o) {
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg;
    rdx = arg3;
    rsi = argsize;
    rax = o;
    /* char * quotearg_alloc(char const * arg,size_t argsize,quoting_options const * o); */
    rax = rdx;
    edx = 0;
    rcx = rax;
invalid_funccall(); //    return void (*0x4092c0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4092c0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_alloc_mem (int64_t arg1, int64_t arg2, int64_t arg3, size_t argsize, char * buf, int32_t flags, quoting_options const * o, quoting_options const * p) {
    size_t n;
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    size_t size;
    void * var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = argsize;
    rax = buf;
    r12 = flags;
    rcx = o;
    r13 = p;
    /* char * quotearg_alloc_mem(char const * arg,size_t argsize,size_t * size,quoting_options const * o); */
    rbx = rdx;
    r15 = rsi;
    *((rsp + 0x20)) = rbp;
    r13d = default_quoting_options;
    if (rcx != 0) {
        r13 = rcx;
    }
    rax = errno_location ();
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    eax = *(rax);
    *((rsp + 4)) = eax;
    eax = *((r13 + 4));
    *(rsp + 3) = (rbx != 0) ? 1 : 0;
    r12d = *((rsp + 3));
    r12d ^= 1;
    r12d |= eax;
    r14 = r13 + 8;
    rax = quotearg_buffer_restyled (0, 0, rbp, r15, *(r13), r12d);
    *((rsp + 0x10)) = rax;
    rbp = *((rsp + 0x10));
    rbp++;
    rax = xmalloc (rbp);
    *((rsp + 0x18)) = rax;
    quotearg_buffer_restyled (*((rsp + 0x18)), rbp, *((rsp + 0x28)), r15, *(r13), r12d);
    ecx = 0xfea94bd2;
    eax = 0xda4a481c;
    if (ecx != 0xda4a481c) {
        goto label_1;
    }
    do {
label_0:
        rcx = *((rsp + 0x10));
        *(rbx) = rcx;
        ecx = 0x1323d875;
    } while (ecx == 0xda4a481c);
    do {
label_1:
        if (ecx != 0xfea94bd2) {
            goto label_2;
        }
        rcx = *((rsp + 8));
        edx = *((rsp + 4));
        *(rcx) = edx;
        ecx = *((rsp + 3));
        ecx = 0x1323d875;
        if (cl != 0) {
            ecx = eax;
        }
    } while (ecx != 0xda4a481c);
    goto label_0;
label_2:
    if (ecx == 0x1323d875) {
        rax = *((rsp + 0x18));
        return rax;
    }
}
/* r2dec pseudo code output */
/* nostrip @ 0x409410 */
#include <stdint.h>
 
int64_t dbg_quotearg_free (void) {
    int64_t var_4h;
    void * ptr;
    void * var_10h;
    /* void quotearg_free(); */
    rax = slotvec;
    *((rsp + 8)) = rax;
    r14d = slot0;
    r15d = 0x6984bc38;
    r12d = 0x6d981074;
    r13d = slotvec0;
    ebx = 0xea40a6b8;
    goto label_3;
label_2:
    rax = *((rsp + 4));
    rcx = *((rsp + 8));
    rax <<= 4;
    free (*((rcx + rax + 8)));
    ebp = *((rsp + 4));
    ebp++;
label_3:
    eax = 0x1ec0206a;
    if (eax > 0x1ec02069) {
        goto label_1;
    }
    while (eax == 0xea40a6b8) {
        free (*((rsp + 8)));
        *(obj.slotvec) = 0x411198;
        eax = 0x829d288a;
        if (eax > 0x1ec02069) {
            goto label_1;
        }
label_0:
        if (eax == 0xbe0f5ec0) {
            goto label_4;
        }
    }
    goto label_5;
label_4:
    rax = *((rsp + 8));
    rax = *((rax + 8));
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x10));
    eax = 0x4944ba0d;
    if (rax != r14) {
        eax = r15d;
    }
    if (eax <= 0x1ec02069) {
        goto label_0;
    }
    do {
label_1:
        if (eax > 0x6984bc37) {
            goto label_6;
        }
        if (eax == 0x1ec0206a) {
            goto label_7;
        }
        if (eax != 0x4944ba0d) {
            goto label_8;
        }
        rax = *((rsp + 8));
        eax = 0x829d288a;
        if (rax != r13) {
            eax = ebx;
        }
    } while (eax > 0x1ec02069);
    goto label_0;
label_6:
    if (eax != 0x6984bc38) {
        goto label_9;
    }
    free (*((rsp + 0x10)));
    *(obj.slotvec0) = 0x100;
    *(obj.slot0) = 0x411290;
    eax = 0x4944ba0d;
    if (eax > 0x1ec02069) {
        goto label_1;
    }
    goto label_0;
label_7:
    *((rsp + 4)) = ebp;
    eax = *((rsp + 4));
    eax = 0xbe0f5ec0;
    if (eax < *(obj.nslots)) {
        eax = r12d;
    }
    if (eax > 0x1ec02069) {
        goto label_1;
    }
    goto label_0;
label_9:
    if (eax == 0x6d981074) {
        goto label_2;
    }
    goto label_8;
label_5:
    if (eax == 0x829d288a) {
        *(obj.nslots) = 1;
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4095f0 */
#include <stdint.h>
 
void quotearg_n (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, int64_t arg1, int64_t arg2) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409600 */
#include <stdint.h>
 
uint64_t dbg_quotearg_n_options (int64_t arg_3ch, int64_t arg_50h, char const * arg, int64_t arg1, int64_t arg4, size_t argsize, quoting_options const * options, size_t qsize, char * val) {
    slotvec * sv;
    int64_t var_7h;
    size_t n;
    void * var_ch;
    void * ptr;
    int64_t var_18h;
    int64_t var_20h;
    size_t size;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    void ** var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    uint32_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    rsi = arg;
    rdi = arg1;
    rcx = arg4;
    rdx = argsize;
    r12 = options;
    rax = qsize;
    r15 = val;
    /* char * quotearg_n_options(int n,char const * arg,size_t argsize,quoting_options const * options); */
    r12 = rcx;
    *((rsp + 0x48)) = rdx;
    *((rsp + 0x40)) = rsi;
    r13d = edi;
    rax = errno_location ();
    *((rsp + 0x50)) = rax;
    rax = *((rsp + 0x50));
    eax = *(rax);
    *((rsp + 0x3c)) = eax;
    rax = slotvec;
    *((rsp + 0x18)) = rax;
    r14d = r13d;
    r14d >>= 0x1f;
    r14d &= 0x948acadb;
    r14d += 0x318e9fd6;
    eax = 0xd2d5aa3a;
    ecx = 0xe53cd537;
    if (r13d == 0x7fffffff) {
        ecx = eax;
    }
    *((rsp + 0x38)) = ecx;
    eax = r13 + 1;
    *((rsp + 0x34)) = eax;
    rcx = (int64_t) r13d;
    rax = r12 + 8;
    *((rsp + 0xb0)) = rax;
    rax = r12 + 0x28;
    *((rsp + 0xa8)) = rax;
    rax = r12 + 0x30;
    *((rsp + 0xa0)) = rax;
    eax = 0x579d5ed3;
    rcx <<= 4;
    *((rsp + 0x98)) = rcx;
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_2:
    rax = xmalloc (*((rsp + 0x28)));
    r15 = rax;
    rax = *((rsp + 0x68));
    *(rax) = r15;
    rax = *((rsp + 0x70));
    rax = *((rsp + 0x80));
    rbx = rbp;
    rbp = *((rsp + 0x88));
    quotearg_buffer_restyled (r15, *((rsp + 0x28)), *((rsp + 0x48)), *((rsp + 0x50)), *(rax), *((rsp + 0xc)));
    eax = 0xfcf089d5;
    do {
label_1:
        if (eax <= 0xfcf089d4) {
            goto label_3;
        }
label_0:
        if (eax > 0x4f562140) {
            goto label_5;
        }
        if (eax == 0xfcf089d5) {
            goto label_6;
        }
        if (eax == 0xb20b0f2) {
            goto label_7;
        }
    } while (eax != 0x318e9fd6);
    eax = 0xe7a6e722;
    ecx = 0xb20b0f2;
    if (*(obj.nslots) <= r13d) {
        eax = ecx;
    }
    rbp = *((rsp + 0x18));
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_5:
    if (eax == 0x4f562141) {
        goto label_8;
    }
    if (eax == 0x61360f2b) {
        goto label_9;
    }
    if (eax != 0x579d5ed3) {
        goto label_1;
    }
    eax = r14d;
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_7:
    rax = *((rsp + 0x18));
    ecx = slotvec0;
    *(rsp + 7) = (rax == rcx) ? 1 : 0;
    eax = *((rsp + 7));
    eax = *((rsp + 0x38));
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_8:
    free (*((rsp + 0x10)));
    eax = 0xf32db80f;
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_9:
    rax = *((rsp + 0x90));
    rax++;
    *((rsp + 0x28)) = rax;
    rax = *((rsp + 0x60));
    rcx = *((rsp + 0x28));
    *(rax) = rcx;
    rax = *((rsp + 0x10));
    ecx = slot0;
    eax = 0xf32db80f;
    ecx = 0x4f562141;
    if (rax != rcx) {
label_4:
        eax = ecx;
    }
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
label_3:
    if (eax <= 0xe53cd536) {
        goto label_10;
    }
    if (eax == 0xe53cd537) {
        goto label_11;
    }
    if (eax == 0xe7a6e722) {
        goto label_12;
    }
    if (eax == 0xf32db80f) {
        goto label_2;
    }
    goto label_1;
label_10:
    if (eax > 0xd2d5aa39) {
        goto label_13;
    }
    if (eax != 0x9d66688b) {
        goto label_14;
    }
    rax = *((rsp + 0x58));
    __asm ("movups xmm0, xmmword [obj.slotvec0]");
    __asm ("movups xmmword [rax], xmm0");
    eax = 0xdcf7a830;
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_13:
    if (eax != 0xdcf7a830) {
        goto label_15;
    }
    rdi = *(obj.nslots);
    rax = *((rsp + 0x20));
    rdx = *((rsp + 8));
    rdx -= rdi;
    rdi <<= 4;
    rdi += rax;
    rdx <<= 4;
    memset (rdi, 0, rdx);
    eax = *((rsp + 8));
    *(obj.nslots) = eax;
    eax = 0xe7a6e722;
    rbp = *((rsp + 0x20));
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_11:
    rax = *((rsp + 0x18));
    cl = *((rsp + 7));
    edi = 0;
    if (cl == 0) {
        rdi = rax;
    }
    eax = *((rsp + 0x34));
    *((rsp + 8)) = eax;
    rsi = *((rsp + 8));
    rsi <<= 4;
    rax = xrealloc ();
    *((rsp + 0x58)) = rax;
    rax = *((rsp + 0x58));
    *((rsp + 0x20)) = rax;
    rax = *((rsp + 0x20));
    *(obj.slotvec) = rax;
    al = *((rsp + 7));
    eax = 0xdcf7a830;
    ecx = 0x9d66688b;
    goto label_4;
label_12:
    rcx = *((rsp + 0x98));
    rax = rbp + rcx;
    *((rsp + 0x60)) = rax;
    rax = *((rsp + 0x60));
    r15 = *(rax);
    rax = rbp + rcx + 8;
    *((rsp + 0x68)) = rax;
    rax = *((rsp + 0x68));
    rax = *(rax);
    *((rsp + 0x10)) = rax;
    eax = *((r12 + 4));
    eax |= 1;
    *((rsp + 0xc)) = eax;
    *((rsp + 0x70)) = r12;
    rax = *((rsp + 0x70));
    r8d = *(rax);
    rax = *((rsp + 0xb0));
    *((rsp + 0x78)) = rax;
    rax = *((rsp + 0xa8));
    *((rsp + 0x80)) = rax;
    rax = *((rsp + 0x80));
    rax = *(rax);
    rcx = *((rsp + 0xa0));
    *((rsp + 0x88)) = rcx;
    rbx = rbp;
    rbp = *((rsp + 0x88));
    rax = quotearg_buffer_restyled (*((rsp + 0x10)), r15, *((rsp + 0x48)), *((rsp + 0x50)), *(r8d), *((rsp + 0xc)));
    *((rsp + 0x90)) = rax;
    eax = 0xfcf089d5;
    ecx = 0x61360f2b;
    if (r15 <= *((rsp + 0x90))) {
        eax = ecx;
    }
    r15 = *((rsp + 0x10));
    if (eax > 0xfcf089d4) {
        goto label_0;
    }
    goto label_3;
label_14:
    if (eax != 0xc6196ab1) {
        goto label_1;
    }
    goto label_16;
label_15:
    if (eax != 0xd2d5aa3a) {
        goto label_1;
    }
    xalloc_die ();
label_6:
    rax = *((rsp + 0x50));
    ecx = *((rsp + 0x3c));
    *(rax) = ecx;
    rax = r15;
    return rax;
label_16:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409a80 */
#include <stdint.h>
 
void quotearg_n_mem (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409a90 */
#include <stdint.h>
 
int64_t dbg_quotearg (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, char const * arg, int64_t arg1) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    rax = arg;
    rdi = arg1;
    /* char * quotearg(char const * arg); */
    rax = rdi;
    edi = 0;
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
    rsi = rax;
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409ab0 */
#include <stdint.h>
 
int64_t dbg_quotearg_mem (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
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
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409ad0 */
#include <stdint.h>
 
uint64_t quotearg_n_style (int64_t arg1, uint32_t arg2, int64_t arg3) {
    uint32_t var_8h;
    int64_t var_ch;
    int64_t var_1ch;
    int64_t var_2ch;
    int64_t var_3ch;
    int64_t var_44h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = rdx;
    rax = rsp + 0x44;
    *(rsp) = rax;
    rax = *(rsp);
    rax = *(rsp);
    __asm ("xorps xmm0, xmm0");
    __asm ("movups xmmword [rax + 0x20], xmm0");
    __asm ("movups xmmword [rax + 0x10], xmm0");
    __asm ("movups xmmword [rax], xmm0");
    *((rax + 0x30)) = 0;
    ecx = 0xff9bb038;
    eax = 0x16bfb60a;
    if (esi == 0xa) {
        eax = ecx;
    }
    ecx = 0x4985f7e8;
    do {
        edx = 0x4985f7e8;
        if (edx == 0x16bfb60a) {
            goto label_0;
        }
        ecx = eax;
    } while (edx == 0x4985f7e8);
    if (edx != 0xff9bb038) {
label_0:
        *((rsp + 8)) = esi;
        rax = *(rsp);
        ecx = *((rax + 0x30));
        *((rsp + 0x3c)) = ecx;
        __asm ("movups xmm0, xmmword [rax]");
        __asm ("movups xmm1, xmmword [rax + 0x10]");
        __asm ("movups xmm2, xmmword [rax + 0x20]");
        __asm ("movups xmmword [rsp + 0x2c], xmm2");
        __asm ("movups xmmword [rsp + 0x1c], xmm1");
        __asm ("movups xmmword [rsp + 0xc], xmm0");
        rax = *(rsp);
        quotearg_n_options (rdi, r8, 0xffffffffffffffff, rsp + 8);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409b80 */
#include <stdint.h>
 
uint64_t quotearg_n_style_mem (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
    uint32_t var_8h;
    int64_t var_ch;
    int64_t var_1ch;
    int64_t var_2ch;
    int64_t var_3ch;
    int64_t var_44h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = rsp + 0x44;
    *(rsp) = rax;
    rax = *(rsp);
    rax = *(rsp);
    __asm ("xorps xmm0, xmm0");
    __asm ("movups xmmword [rax + 0x20], xmm0");
    __asm ("movups xmmword [rax + 0x10], xmm0");
    __asm ("movups xmmword [rax], xmm0");
    *((rax + 0x30)) = 0;
    eax = 0xff9bb038;
    r8d = 0x16bfb60a;
    if (esi == 0xa) {
        r8d = eax;
    }
    r9d = 0x4985f7e8;
    do {
        eax = 0x4985f7e8;
        if (eax == 0x16bfb60a) {
            goto label_0;
        }
        r9d = r8d;
    } while (eax == 0x4985f7e8);
    if (eax != 0xff9bb038) {
label_0:
        *((rsp + 8)) = esi;
        rax = *(rsp);
        esi = *((rax + 0x30));
        *((rsp + 0x3c)) = esi;
        __asm ("movups xmm0, xmmword [rax]");
        __asm ("movups xmm1, xmmword [rax + 0x10]");
        __asm ("movups xmm2, xmmword [rax + 0x20]");
        __asm ("movups xmmword [rsp + 0x2c], xmm2");
        __asm ("movups xmmword [rsp + 0x1c], xmm1");
        __asm ("movups xmmword [rsp + 0xc], xmm0");
        rax = *(rsp);
        rax = rsp + 8;
        quotearg_n_options (rdi, rdx, rcx, rax);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409c30 */
#include <stdint.h>
 
uint64_t dbg_quotearg_style (char const * arg, enum quoting_style style) {
    uint32_t var_8h;
    int64_t var_ch;
    int64_t var_1ch;
    int64_t var_2ch;
    int64_t var_3ch;
    quoting_options o;
    rsi = arg;
    rdi = style;
    /* char * quotearg_style(enum quoting_style s,char const * arg); */
    rax = rsp + 0x44;
    *(rsp) = rax;
    rax = *(rsp);
    rax = *(rsp);
    __asm ("xorps xmm0, xmm0");
    __asm ("movups xmmword [rax + 0x20], xmm0");
    __asm ("movups xmmword [rax + 0x10], xmm0");
    __asm ("movups xmmword [rax], xmm0");
    *((rax + 0x30)) = 0;
    ecx = 0xff9bb038;
    eax = 0x16bfb60a;
    if (edi == 0xa) {
        eax = ecx;
    }
    edx = 0x4985f7e8;
    do {
        ecx = 0x4985f7e8;
        if (ecx == 0x16bfb60a) {
            goto label_0;
        }
        edx = eax;
    } while (ecx == 0x4985f7e8);
    if (ecx != 0xff9bb038) {
label_0:
        *((rsp + 8)) = edi;
        rax = *(rsp);
        ecx = *((rax + 0x30));
        *((rsp + 0x3c)) = ecx;
        __asm ("movups xmm0, xmmword [rax]");
        __asm ("movups xmm1, xmmword [rax + 0x10]");
        __asm ("movups xmm2, xmmword [rax + 0x20]");
        __asm ("movups xmmword [rsp + 0x2c], xmm2");
        __asm ("movups xmmword [rsp + 0x1c], xmm1");
        __asm ("movups xmmword [rsp + 0xc], xmm0");
        rax = *(rsp);
        quotearg_n_options (0, rsi, 0xffffffffffffffff, rsp + 8);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409ce0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_style_mem (char const * arg, size_t argsize, enum quoting_style style) {
    uint32_t var_8h;
    int64_t var_ch;
    int64_t var_1ch;
    int64_t var_2ch;
    int64_t var_3ch;
    quoting_options o;
    rsi = arg;
    rdx = argsize;
    rdi = style;
    /* char * quotearg_style_mem(enum quoting_style s,char const * arg,size_t argsize); */
    rax = rsp + 0x44;
    *(rsp) = rax;
    rax = *(rsp);
    rax = *(rsp);
    __asm ("xorps xmm0, xmm0");
    __asm ("movups xmmword [rax + 0x20], xmm0");
    __asm ("movups xmmword [rax + 0x10], xmm0");
    __asm ("movups xmmword [rax], xmm0");
    *((rax + 0x30)) = 0;
    eax = 0xff9bb038;
    r8d = 0x16bfb60a;
    if (edi == 0xa) {
        r8d = eax;
    }
    eax = 0x4985f7e8;
    do {
        ecx = 0x4985f7e8;
        if (ecx == 0x16bfb60a) {
            goto label_0;
        }
        eax = r8d;
    } while (ecx == 0x4985f7e8);
    if (ecx != 0xff9bb038) {
label_0:
        *((rsp + 8)) = edi;
        rax = *(rsp);
        ecx = *((rax + 0x30));
        *((rsp + 0x3c)) = ecx;
        __asm ("movups xmm0, xmmword [rax]");
        __asm ("movups xmm1, xmmword [rax + 0x10]");
        __asm ("movups xmm2, xmmword [rax + 0x20]");
        __asm ("movups xmmword [rsp + 0x2c], xmm2");
        __asm ("movups xmmword [rsp + 0x1c], xmm1");
        __asm ("movups xmmword [rsp + 0xc], xmm0");
        rax = *(rsp);
        quotearg_n_options (0, rsi, rdx, rsp + 8);
        return rax;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x409d90 */
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
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
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
/* nostrip @ 0x409e00 */
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
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
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
/* nostrip @ 0x409e70 */
#include <stdint.h>
 
int64_t dbg_quotearg_colon (char const * arg, uint32_t arg1, quoting_options * o) {
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
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    quotearg_n_options (0, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x409ed0 */
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
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
    *((rsp + 0x10)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *(rsp) = xmm0;
    quotearg_n_options (0, rdx, rax, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x409f30 */
#include <stdint.h>
 
uint64_t dbg_quotearg_n_style_colon (char const * arg, int64_t arg3, int32_t n, quoting_options * o, enum quoting_style style) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    quoting_options options;
    int64_t var_5fh;
    int64_t var_64h;
    int64_t var_74h;
    int64_t var_84h;
    r8 = arg;
    rdx = arg3;
    rdi = n;
    rcx = o;
    rsi = style;
    /* char * quotearg_n_style_colon(int n,quoting_style s,char const * arg); */
    r8 = rdx;
    rax = rsp + 0x50;
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    rax = *((rsp + 8));
    __asm ("xorps xmm0, xmm0");
    __asm ("movups xmmword [rax + 0x20], xmm0");
    __asm ("movups xmmword [rax + 0x10], xmm0");
    __asm ("movups xmmword [rax], xmm0");
    *((rax + 0x30)) = 0;
    ecx = 0xff9bb038;
    eax = 0x16bfb60a;
    if (esi == 0xa) {
        eax = ecx;
    }
    ecx = 0x4985f7e8;
    do {
        edx = 0x4985f7e8;
        if (edx == 0x16bfb60a) {
            goto label_0;
        }
        ecx = eax;
    } while (edx == 0x4985f7e8);
    if (edx == 0xff9bb038) {
        goto label_1;
    }
label_0:
    rax = *((rsp + 8));
    ecx = *((rax + 0x30));
    *((rsp + 0x40)) = ecx;
    __asm ("movups xmm0, xmmword [rax]");
    __asm ("movups xmm1, xmmword [rax + 0x10]");
    __asm ("movups xmm2, xmmword [rax + 0x20]");
    *((rsp + 0x30)) = xmm2;
    *((rsp + 0x20)) = xmm1;
    *((rsp + 0x10)) = xmm0;
    rax = *((rsp + 8));
    *((rsp + 0x50)) = esi;
    eax = *((rsp + 0x40));
    *((rsp + 0x84)) = eax;
    xmm0 = *((rsp + 0x10));
    xmm1 = *((rsp + 0x20));
    xmm2 = *((rsp + 0x30));
    __asm ("movups xmmword [rsp + 0x74], xmm2");
    __asm ("movups xmmword [rsp + 0x64], xmm1");
    __asm ("movups xmmword [rsp + 0x54], xmm0");
    while (1);
    quotearg_n_options (rdi, r8, 0xffffffffffffffff, rsp + 0x50);
    return rax;
label_1:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a020 */
#include <stdint.h>
 
int64_t quotearg_n_custom (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = comment;
    *((rsp + 0x40)) = rax;
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x30)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *((rsp + 0x10)) = xmm0;
    r9d = 0x7a9369fa;
    eax = 0x52e6450;
    if (rdx == 0) {
        r9d = eax;
    }
    if (rsi == 0) {
        r9d = eax;
    }
    r11d = 0x9f90a2e0;
    r8 = rsp + 0x10;
    goto label_2;
label_0:
    ebx = default_quoting_options;
    do {
label_2:
        eax = r11d;
        r10 = rbx;
        r11d = 0xf93fd158;
        rbx = r8;
    } while (eax == 0x9f90a2e0);
    goto label_3;
label_1:
    *((rsp + 8)) = r10;
    rax = *((rsp + 8));
    *(rax) = 0xa;
    eax = r9d;
label_3:
    if (eax > 0x52e644f) {
        goto label_4;
    }
    if (eax == 0xa5a09921) {
        goto label_0;
    }
    if (eax == 0xf93fd158) {
        goto label_1;
    }
    goto label_5;
label_4:
    if (eax == 0x7a9369fa) {
        rax = *((rsp + 8));
        *((rax + 0x28)) = rsi;
        rax = *((rsp + 8));
        *((rax + 0x30)) = rdx;
        rax = rsp + 0x10;
        eax = quotearg_n_options (rdi, rcx, 0xffffffffffffffff, rax);
        return rax;
    }
    if (eax != 0x52e6450) {
INVALID_JUMP;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a120 */
#include <stdint.h>
 
int64_t quotearg_n_custom_mem (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rax = comment;
    *((rsp + 0x40)) = rax;
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x30)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *((rsp + 0x10)) = xmm0;
    r10d = 0x7a9369fa;
    eax = 0x52e6450;
    if (rdx == 0) {
        r10d = eax;
    }
    if (rsi == 0) {
        r10d = eax;
    }
    r9 = rsp + 0x10;
    goto label_2;
label_0:
    eax = default_quoting_options;
    do {
label_2:
        ebx = ebp;
        r11 = rax;
        rax = r9;
    } while (ebx == 0x9f90a2e0);
    goto label_3;
label_1:
    *((rsp + 8)) = r11;
    rax = *((rsp + 8));
    *(rax) = 0xa;
    ebx = r10d;
label_3:
    if (ebx > 0x52e644f) {
        goto label_4;
    }
    if (ebx == 0xa5a09921) {
        goto label_0;
    }
    if (ebx == 0xf93fd158) {
        goto label_1;
    }
    goto label_5;
label_4:
    if (ebx == 0x7a9369fa) {
        rax = *((rsp + 8));
        *((rax + 0x28)) = rsi;
        rax = *((rsp + 8));
        *((rax + 0x30)) = rdx;
        rax = rsp + 0x10;
        rax = quotearg_n_options (rdi, rcx, r8, rax);
        return rax;
    }
    if (ebx != 0x52e6450) {
INVALID_JUMP;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a220 */
#include <stdint.h>
 
int64_t dbg_quotearg_custom (char const * arg, int64_t arg3, int64_t arg4, char const * left_quote, quoting_options * o, char const * right_quote) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    r8 = arg;
    rdx = arg3;
    rcx = arg4;
    rdi = left_quote;
    r10 = o;
    rsi = right_quote;
    /* char * quotearg_custom(char const * left_quote,char const * right_quote,char const * arg); */
    r8 = rdx;
    rax = comment;
    *((rsp + 0x40)) = rax;
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x30)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *((rsp + 0x10)) = xmm0;
    r11d = 0x7a9369fa;
    eax = 0x52e6450;
    if (rsi == 0) {
        r11d = eax;
    }
    if (rdi == 0) {
        r11d = eax;
    }
    edx = 0x9f90a2e0;
    r9 = rsp + 0x10;
    goto label_2;
label_0:
    ecx = default_quoting_options;
    do {
label_2:
        eax = edx;
        r10 = rcx;
        edx = 0xf93fd158;
        rcx = r9;
    } while (eax == 0x9f90a2e0);
    goto label_3;
label_1:
    *((rsp + 8)) = r10;
    rax = *((rsp + 8));
    *(rax) = 0xa;
    eax = r11d;
label_3:
    if (eax > 0x52e644f) {
        goto label_4;
    }
    if (eax == 0xa5a09921) {
        goto label_0;
    }
    if (eax == 0xf93fd158) {
        goto label_1;
    }
    goto label_5;
label_4:
    if (eax == 0x7a9369fa) {
        rax = *((rsp + 8));
        *((rax + 0x28)) = rdi;
        rax = *((rsp + 8));
        *((rax + 0x30)) = rsi;
        eax = quotearg_n_options (0, r8, 0xffffffffffffffff, rsp + 0x10);
        return rax;
    }
    if (eax != 0x52e6450) {
INVALID_JUMP;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a330 */
#include <stdint.h>
 
int64_t dbg_quotearg_custom_mem (char const * arg, size_t argsize, char const * left_quote, quoting_options * o, char const * right_quote) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    rdx = arg;
    rcx = argsize;
    rdi = left_quote;
    r10 = o;
    rsi = right_quote;
    /* char * quotearg_custom_mem(char const * left_quote,char const * right_quote,char const * arg,size_t argsize); */
    rax = comment;
    *((rsp + 0x40)) = rax;
    __asm ("movups xmm0, xmmword [0x00411270]");
    *((rsp + 0x30)) = xmm0;
    __asm ("movups xmm0, xmmword [0x00411260]");
    *((rsp + 0x20)) = xmm0;
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    *((rsp + 0x10)) = xmm0;
    r9d = 0x7a9369fa;
    eax = 0x52e6450;
    if (rsi == 0) {
        r9d = eax;
    }
    if (rdi == 0) {
        r9d = eax;
    }
    r11d = 0x9f90a2e0;
    r8 = rsp + 0x10;
    goto label_2;
label_0:
    ebx = default_quoting_options;
    do {
label_2:
        eax = r11d;
        r10 = rbx;
        r11d = 0xf93fd158;
        rbx = r8;
    } while (eax == 0x9f90a2e0);
    goto label_3;
label_1:
    *((rsp + 8)) = r10;
    rax = *((rsp + 8));
    *(rax) = 0xa;
    eax = r9d;
label_3:
    if (eax > 0x52e644f) {
        goto label_4;
    }
    if (eax == 0xa5a09921) {
        goto label_0;
    }
    if (eax == 0xf93fd158) {
        goto label_1;
    }
    goto label_5;
label_4:
    if (eax == 0x7a9369fa) {
        rax = *((rsp + 8));
        *((rax + 0x28)) = rdi;
        rax = *((rsp + 8));
        *((rax + 0x30)) = rsi;
        rax = rsp + 0x10;
        eax = quotearg_n_options (0, rdx, rcx, rax);
        return rax;
    }
    if (eax != 0x52e6450) {
INVALID_JUMP;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a430 */
#include <stdint.h>
 
void quote_n_mem (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a440 */
#include <stdint.h>
 
int64_t dbg_quote_mem (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
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
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a460 */
#include <stdint.h>
 
void quote_n (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, int64_t arg1, int64_t arg2) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a480 */
#include <stdint.h>
 
int64_t dbg_quote (int64_t arg_8h, int64_t arg_3ch, int64_t arg_50h, char const * arg, int64_t arg1) {
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    rax = arg;
    rdi = arg1;
    /* char const * quote(char const * arg); */
    rax = rdi;
    edi = 0;
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
    rsi = rax;
invalid_funccall(); //    return void (*0x409600)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a4a0 */
#include <stdint.h>
 
uint64_t dbg_gettext_quote (int64_t arg1, uint32_t arg2, char const * locale_code, char const * msgid, enum quoting_style s) {
    int64_t var_8h;
    func main;
    rdi = arg1;
    rsi = arg2;
    rax = locale_code;
    r14 = msgid;
    rbx = s;
    /* char const * gettext_quote(char const * msgid,quoting_style s); */
    ebx = esi;
    r14 = rdi;
    edx = 5;
    rax = dcgettext (0, r14);
    *((rsp + 8)) = rax;
    eax = 0x40e462;
    r15d = 0x40e466;
    if (ebx == 9) {
        r15 = rax;
    }
    eax = 0x7b1d46ca;
    r12d = 0x40e47e;
    r13d = 0xfc760fa1;
    if (eax <= 0x2ba4512a) {
        goto label_2;
    }
    goto label_3;
label_0:
    eax = 0x53f1faf3;
    rbx = r15;
    do {
label_1:
        if (eax > 0x2ba4512a) {
            goto label_3;
        }
label_2:
        if (eax > 0xfac3cd65) {
            goto label_4;
        }
        if (eax == 0xc46f114f) {
            goto label_5;
        }
    } while (eax != 0xeef1a426);
    goto label_0;
label_4:
    if (eax == 0xfac3cd66) {
        goto label_6;
    }
    if (eax != 0xfc760fa1) {
        goto label_1;
    }
    eax = 0x53f1faf3;
    rbx = *((rsp + 8));
    if (eax <= 0x2ba4512a) {
        goto label_2;
    }
    goto label_3;
label_5:
    eax = strcaseeq0 (*((rsp + 0x10)), "GB18030", 0x47, 0x42, 0x31, 0x38);
    eax = 0xeef1a426;
    ecx = 0x338f66d9;
    goto label_7;
label_6:
    rax = locale_charset ();
    *((rsp + 0x10)) = rax;
    eax = strcaseeq0 (*((rsp + 0x10)), 0x40e468, 0x55, 0x54, 0x46, 0x2d);
    eax = 0xc46f114f;
    ecx = 0x2ba4512b;
    if (eax != 0) {
label_7:
        eax = ecx;
    }
    if (eax <= 0x2ba4512a) {
        goto label_2;
    }
label_3:
    if (eax > 0x53f1faf2) {
        goto label_8;
    }
    if (eax == 0x2ba4512b) {
        goto label_9;
    }
    if (eax != 0x338f66d9) {
        goto label_1;
    }
    ebx = 0x40e482;
    if (*(r14) == 0x60) {
        rbx = r12;
    }
    goto label_10;
label_8:
    if (eax == 0x7b1d46ca) {
        goto label_11;
    }
    if (eax != 0x53f1faf3) {
        goto label_1;
    }
    goto label_12;
label_9:
    ebx = 0x40e472;
    if (*(r14) == 0x60) {
        rbx = rbp;
    }
label_10:
    eax = 0x53f1faf3;
    if (eax <= 0x2ba4512a) {
        goto label_2;
    }
    goto label_3;
label_11:
    rax = *((rsp + 8));
    eax = 0xfac3cd66;
    if (rax != r14) {
        eax = r13d;
    }
    if (eax <= 0x2ba4512a) {
        goto label_2;
    }
    goto label_3;
label_12:
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40a6a0 */
#include <stdint.h>
 
int32_t dbg_strcaseeq0 (int64_t arg_b0h, int64_t arg_b8h, int64_t arg_c0h, int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int32_t c) {
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_9h;
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_11h;
    int64_t var_12h;
    int64_t var_13h;
    int64_t var_14h;
    int64_t var_15h;
    int64_t var_16h;
    int64_t var_17h;
    uint32_t var_18h;
    uint32_t var_1ch;
    uint32_t var_20h;
    uint32_t var_24h;
    uint32_t var_28h;
    uint32_t var_2ch;
    uint32_t var_30h;
    uint32_t var_34h;
    uint32_t var_38h;
    uint32_t var_3ch;
    uint32_t var_40h;
    uint32_t var_44h;
    uint32_t var_48h;
    uint32_t var_4ch;
    uint32_t var_50h;
    uint32_t var_54h;
    uint32_t var_58h;
    uint32_t var_5ch;
    int64_t var_60h;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_6ch;
    int64_t var_70h;
    int64_t var_74h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = c;
    /* int strcaseeq0(char const * s1,char const * s2,char s20,char s21,char s22,char s23,char s24,char s25,char s26,char s27,char s28); */
    *((rsp + 0x68)) = r9d;
    *((rsp + 0x64)) = r8d;
    *((rsp + 0x60)) = ecx;
    r13 = rdi;
    *((rsp + 0x18)) = edx;
    eax = *((rsp + 0x18));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 6)) = al;
    al = *(r13);
    *((rsp + 7)) = al;
    eax = *((rsp + 0xb0));
    *((rsp + 0x6c)) = eax;
    eax = *((rsp + 0xb8));
    *((rsp + 0x70)) = eax;
    eax = *((rsp + 0xc0));
    *((rsp + 0x74)) = eax;
    rbx = r13 + 9;
    rbp += 9;
    ecx = 0x60caaaeb;
    r15d = 0x2ee4801b;
    r12d = 0xc8f618de;
    r14d = 0xac4c6235;
    if (ecx <= 0x14aeef7c) {
        goto label_0;
    }
    goto label_35;
label_34:
    ecx = 0x9a2a8690;
    edx = 0x14aeef7d;
    if (ecx == 0x14aeef7c) {
        ecx = edx;
    }
    do {
label_1:
        if (ecx > 0x14aeef7c) {
            goto label_35;
        }
label_0:
        if (ecx > 0xb114c9b7) {
            goto label_36;
        }
        if (ecx == 0x870fe3f2) {
            goto label_37;
        }
    } while (ecx != 0x9a2a8690);
    ecx = 0x7468c8f3;
    eax = 0;
    if (ecx <= 0x14aeef7c) {
        goto label_0;
    }
    goto label_35;
label_36:
    if (ecx == 0xb114c9b8) {
        goto label_38;
    }
    if (ecx != 0x905f939) {
        goto label_1;
    }
    ecx = 0x7468c8f3;
    eax = 1;
    if (ecx <= 0x14aeef7c) {
        goto label_0;
    }
    goto label_35;
label_37:
    eax = *((rsp + 0x60));
    *((rsp + 0x1c)) = eax;
    eax = *((rsp + 0x1c));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 8)) = al;
    al = *((r13 + 1));
    *((rsp + 9)) = al;
    ecx = 0xc37cd46d;
    if (ecx <= 0xf22d1cdd) {
        goto label_2;
    }
    goto label_32;
label_33:
    ecx = 0xdb08e16a;
    edx = 0xd77b79db;
    if (ecx == 0xf22d1cdd) {
        ecx = edx;
    }
    do {
label_3:
        if (ecx > 0xf22d1cdd) {
            goto label_32;
        }
label_2:
        if (ecx > 0xd77b79da) {
            goto label_39;
        }
        if (ecx == 0xbda46a83) {
            goto label_40;
        }
    } while (ecx != 0xc37cd46d);
    ecx = *((rsp + 9));
    *((rsp + 0x40)) = ecx;
    cl = *((rsp + 8));
    ecx = 0xf22d1cde;
    edx = 0x792f9c95;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx <= 0xf22d1cdd) {
        goto label_2;
    }
    goto label_32;
label_39:
    if (ecx == 0xd77b79db) {
        goto label_41;
    }
    if (ecx != 0xdb08e16a) {
        goto label_3;
    }
    ecx = 0x724ba558;
    eax = 0;
    if (ecx <= 0xf22d1cdd) {
        goto label_2;
    }
    goto label_32;
label_40:
    eax = *((rsp + 0x64));
    *((rsp + 0x20)) = eax;
    eax = *((rsp + 0x20));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0xa)) = al;
    al = *((r13 + 2));
    *((rsp + 0xb)) = al;
    ecx = 0x826406cd;
    if (ecx <= 0xff407a25) {
        goto label_6;
    }
    goto label_31;
label_4:
    ecx = 0x7e96b5a0;
    edx = 0xfcda2fcf;
    if (ecx == 0xff407a25) {
        ecx = edx;
    }
    do {
label_5:
        if (ecx > 0xff407a25) {
            goto label_31;
        }
label_6:
        if (ecx > 0xf69319af) {
            goto label_42;
        }
        if (ecx == 0x826406cd) {
            goto label_43;
        }
    } while (ecx != 0xec8ebcac);
    ecx = *((rsp + 0x44));
    ecx &= 0xffffffdf;
    goto label_4;
label_42:
    if (ecx == 0xf69319b0) {
        goto label_44;
    }
    if (ecx != 0xfcda2fcf) {
        goto label_5;
    }
    ecx = 0xf69319b0;
    edx = 0xff407a26;
    if (*((rsp + 0x20)) == 0) {
        ecx = edx;
    }
    if (ecx <= 0xff407a25) {
        goto label_6;
    }
    goto label_31;
label_43:
    ecx = *((rsp + 0xb));
    *((rsp + 0x44)) = ecx;
    cl = *((rsp + 0xa));
    ecx = 0x227bf8a3;
    edx = 0xec8ebcac;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx <= 0xff407a25) {
        goto label_6;
    }
    goto label_31;
label_44:
    eax = *((rsp + 0x68));
    *((rsp + 0x24)) = eax;
    eax = *((rsp + 0x24));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0xc)) = al;
    al = *((r13 + 3));
    *((rsp + 0xd)) = al;
    ecx = 0x8b9cd9df;
    if (ecx > 0xbc4342a) {
        goto label_7;
    }
    goto label_30;
label_9:
    ecx = 0x6385ce7a;
    edx = 0x265ad46a;
    if (ecx == 0xbc4342a) {
        ecx = edx;
    }
    do {
label_8:
        if (ecx <= 0xbc4342a) {
            goto label_30;
        }
label_7:
        if (ecx > 0x6385ce79) {
            goto label_45;
        }
        if (ecx == 0xbc4342b) {
            goto label_46;
        }
    } while (ecx != 0x265ad46a);
    ecx = 0xa6131fd9;
    edx = 0x6b7da88d;
    if (*((rsp + 0x24)) == 0) {
        ecx = edx;
    }
    if (ecx > 0xbc4342a) {
        goto label_7;
    }
    goto label_30;
label_45:
    if (ecx == 0x6385ce7a) {
        goto label_47;
    }
    if (ecx != 0x6b7da88d) {
        goto label_8;
    }
    ecx = 0xa4b9cefc;
    eax = 1;
    if (ecx > 0xbc4342a) {
        goto label_7;
    }
    goto label_30;
label_46:
    ecx = *((rsp + 0x24));
    edx = *((rsp + 0x48));
    goto label_9;
label_47:
    ecx = 0xa4b9cefc;
    eax = 0;
    if (ecx > 0xbc4342a) {
        goto label_7;
    }
label_30:
    if (ecx <= 0xa6131fd8) {
        goto label_48;
    }
    if (ecx == 0xa6131fd9) {
        goto label_49;
    }
    if (ecx != 0xeffcfda9) {
        goto label_8;
    }
    ecx = *((rsp + 0x48));
    ecx &= 0xffffffdf;
    goto label_9;
label_48:
    if (ecx == 0x8b9cd9df) {
        goto label_50;
    }
    if (ecx != 0xa4b9cefc) {
        goto label_8;
    }
    goto label_51;
label_49:
    eax = *((rsp + 0x6c));
    *((rsp + 0x28)) = eax;
    eax = *((rsp + 0x28));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0xe)) = al;
    al = *((r13 + 4));
    *((rsp + 0xf)) = al;
    ecx = 0xfa482190;
    if (ecx <= 0x507ac1ca) {
        goto label_10;
    }
    goto label_13;
label_12:
    ecx = 0x624d9d8b;
    edx = 0x91b04ca1;
    if (ecx == 0x507ac1ca) {
        ecx = edx;
    }
    do {
label_11:
        if (ecx > 0x507ac1ca) {
            goto label_13;
        }
label_10:
        if (ecx > 0xccb91d34) {
            goto label_52;
        }
        if (ecx == 0x91b04ca1) {
            goto label_53;
        }
    } while (ecx != 0xb88bf9bc);
    ecx = 0x507ac1cb;
    eax = 1;
    if (ecx <= 0x507ac1ca) {
        goto label_10;
    }
    goto label_13;
label_52:
    if (ecx == 0xccb91d35) {
        goto label_54;
    }
    if (ecx != 0xfa482190) {
        goto label_11;
    }
    ecx = *((rsp + 0xf));
    *((rsp + 0x4c)) = ecx;
    ecx = *((rsp + 0xe));
    ecx = 0xccb91d35;
    edx = 0x5be26bd7;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx <= 0x507ac1ca) {
        goto label_10;
    }
    goto label_13;
label_53:
    ecx = 0x5b98e432;
    edx = 0xb88bf9bc;
    if (*((rsp + 0x28)) == 0) {
        ecx = edx;
    }
    if (ecx <= 0x507ac1ca) {
        goto label_10;
    }
    goto label_13;
label_54:
    ecx = *((rsp + 0x28));
    edx = *((rsp + 0x4c));
    goto label_12;
label_13:
    if (ecx <= 0x5be26bd6) {
        goto label_55;
    }
    if (ecx == 0x5be26bd7) {
        goto label_56;
    }
    if (ecx != 0x624d9d8b) {
        goto label_11;
    }
    ecx = 0x507ac1cb;
    eax = 0;
    if (ecx <= 0x507ac1ca) {
        goto label_10;
    }
    goto label_13;
label_55:
    if (ecx == 0x5b98e432) {
        goto label_57;
    }
    if (ecx != 0x507ac1cb) {
        goto label_11;
    }
    goto label_58;
label_56:
    ecx = *((rsp + 0x4c));
    ecx &= 0xffffffdf;
    goto label_12;
label_57:
    eax = *((rsp + 0x70));
    *((rsp + 0x2c)) = eax;
    eax = *((rsp + 0x2c));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0x10)) = al;
    al = *((r13 + 5));
    *((rsp + 0x11)) = al;
    ecx = 0xc8fe5e59;
    if (ecx > 0x337a0a78) {
        goto label_14;
    }
    goto label_28;
label_29:
    ecx = 0x737e80d3;
    edx = 0x7c9c0586;
    if (ecx == 0x337a0a78) {
        ecx = edx;
    }
    do {
label_15:
        if (ecx <= 0x337a0a78) {
            goto label_28;
        }
label_14:
        if (ecx > 0x737e80d2) {
            goto label_59;
        }
        if (ecx == 0x337a0a79) {
            goto label_60;
        }
    } while (ecx != 0x3e027ace);
    ecx = 0xfc20dd5;
    eax = 1;
    if (ecx > 0x337a0a78) {
        goto label_14;
    }
    goto label_28;
label_59:
    if (ecx == 0x737e80d3) {
        goto label_61;
    }
    if (ecx != 0x7c9c0586) {
        goto label_15;
    }
    ecx = 0x337a0a79;
    edx = 0x3e027ace;
    if (*((rsp + 0x2c)) == 0) {
        ecx = edx;
    }
    if (ecx > 0x337a0a78) {
        goto label_14;
    }
    goto label_28;
label_60:
    eax = *((rsp + 0x74));
    *((rsp + 0x30)) = eax;
    eax = *((rsp + 0x30));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0x12)) = al;
    al = *((r13 + 6));
    *((rsp + 0x13)) = al;
    ecx = 0x830677da;
    if (ecx > 0xc3b98a5) {
        goto label_16;
    }
    goto label_27;
label_18:
    ecx = 0xf044b379;
    edx = 0xac77f45;
    if (ecx == 0xc3b98a5) {
        ecx = edx;
    }
    do {
label_17:
        if (ecx <= 0xc3b98a5) {
            goto label_27;
        }
label_16:
        if (ecx > 0x64c4cea2) {
            goto label_62;
        }
        if (ecx == 0xc3b98a6) {
            goto label_63;
        }
    } while (ecx != 0x6150078c);
    ecx = 0xa41e0411;
    eax = 1;
    if (ecx > 0xc3b98a5) {
        goto label_16;
    }
    goto label_27;
label_62:
    if (ecx == 0x64c4cea3) {
        goto label_64;
    }
    if (ecx != 0x70b665d2) {
        goto label_17;
    }
    ecx = *((rsp + 0x54));
    ecx &= 0xffffffdf;
    goto label_18;
label_63:
    *((rsp + 0x34)) = 0;
    eax = *((rsp + 0x34));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0x14)) = al;
    al = *((r13 + 7));
    *((rsp + 0x15)) = al;
    ecx = 0x2385bc59;
    if (ecx <= 0x2385bc58) {
        goto label_19;
    }
    goto label_22;
label_21:
    ecx = 0x2f347f98;
    edx = 0x82f2b674;
    if (ecx == 0x2385bc58) {
        ecx = edx;
    }
    do {
label_20:
        if (ecx > 0x2385bc58) {
            goto label_22;
        }
label_19:
        if (ecx > 0xa0f290e2) {
            goto label_65;
        }
        if (ecx == 0x82f2b674) {
            goto label_66;
        }
    } while (ecx != 0x89a32caa);
    ecx = 0x7a35fc89;
    eax = 1;
    if (ecx <= 0x2385bc58) {
        goto label_19;
    }
    goto label_22;
label_65:
    if (ecx == 0xa0f290e3) {
        goto label_67;
    }
    if (ecx != 0xc4d2d7f3) {
        goto label_20;
    }
    ecx = *((rsp + 0x58));
    ecx &= 0xffffffdf;
    goto label_21;
label_66:
    ecx = 0x397718b5;
    edx = 0x89a32caa;
    if (*((rsp + 0x34)) == 0) {
        ecx = edx;
    }
    if (ecx <= 0x2385bc58) {
        goto label_19;
    }
    goto label_22;
label_67:
    ecx = *((rsp + 0x34));
    edx = *((rsp + 0x58));
    goto label_21;
label_22:
    if (ecx > 0x397718b4) {
        goto label_68;
    }
    if (ecx == 0x2385bc59) {
        goto label_69;
    }
    if (ecx != 0x2f347f98) {
        goto label_20;
    }
    ecx = 0x7a35fc89;
    eax = 0;
    if (ecx <= 0x2385bc58) {
        goto label_19;
    }
    goto label_22;
label_68:
    if (ecx == 0x397718b5) {
        goto label_70;
    }
    if (ecx != 0x7a35fc89) {
        goto label_20;
    }
    goto label_71;
label_69:
    ecx = *((rsp + 0x15));
    *((rsp + 0x58)) = ecx;
    cl = *((rsp + 0x14));
    ecx = 0xa0f290e3;
    edx = 0xc4d2d7f3;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx <= 0x2385bc58) {
        goto label_19;
    }
    goto label_22;
label_70:
    *((rsp + 0x38)) = 0;
    eax = *((rsp + 0x38));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0x16)) = al;
    al = *((r13 + 8));
    *((rsp + 0x17)) = al;
    ecx = 0x76e9bff6;
    if (ecx <= 0x2ac4ec97) {
        goto label_23;
    }
    goto label_26;
label_25:
    ecx = 0xbc3bb5e8;
    if (ecx == 0x2ac4ec97) {
        ecx = r15d;
    }
    do {
label_24:
        if (ecx > 0x2ac4ec97) {
            goto label_26;
        }
label_23:
        if (ecx > 0xc8f618dd) {
            goto label_72;
        }
        if (ecx == 0xac4c6235) {
            goto label_73;
        }
    } while (ecx != 0xbc3bb5e8);
    ecx = 0x65446b53;
    eax = 0;
    if (ecx <= 0x2ac4ec97) {
        goto label_23;
    }
    goto label_26;
label_72:
    if (ecx == 0xc8f618de) {
        goto label_74;
    }
    if (ecx != 0xdc10684d) {
        goto label_24;
    }
    rdi = rbx;
    rsi = rbp;
    eax = c_strcasecmp ();
    ecx = eax;
    eax = 0;
    al = (ecx == 0) ? 1 : 0;
    ecx = 0x65446b53;
    if (ecx <= 0x2ac4ec97) {
        goto label_23;
    }
    goto label_26;
label_73:
    ecx = *((rsp + 0x5c));
    ecx &= 0xffffffdf;
    goto label_25;
label_74:
    ecx = 0x65446b53;
    eax = 1;
    if (ecx <= 0x2ac4ec97) {
        goto label_23;
    }
label_26:
    if (ecx > 0x65446b52) {
        goto label_75;
    }
    if (ecx == 0x2ac4ec98) {
        goto label_76;
    }
    if (ecx != 0x2ee4801b) {
        goto label_24;
    }
    ecx = 0xdc10684d;
    if (*((rsp + 0x38)) == 0) {
        ecx = r12d;
    }
    if (ecx <= 0x2ac4ec97) {
        goto label_23;
    }
    goto label_26;
label_75:
    if (ecx == 0x76e9bff6) {
        goto label_77;
    }
    if (ecx != 0x65446b53) {
        goto label_24;
    }
    goto label_78;
label_76:
    ecx = *((rsp + 0x38));
    edx = *((rsp + 0x5c));
    goto label_25;
label_77:
    ecx = *((rsp + 0x17));
    *((rsp + 0x5c)) = ecx;
    ecx = *((rsp + 0x16));
    ecx = 0x2ac4ec98;
    if (cl != 0) {
        ecx = r14d;
    }
    if (ecx <= 0x2ac4ec97) {
        goto label_23;
    }
    goto label_26;
label_78:
    ecx = 0x7a35fc89;
    if (ecx <= 0x2385bc58) {
        goto label_19;
    }
    goto label_22;
label_64:
    ecx = *((rsp + 0x30));
    edx = *((rsp + 0x54));
    goto label_18;
label_71:
    ecx = 0xa41e0411;
    if (ecx > 0xc3b98a5) {
        goto label_16;
    }
label_27:
    if (ecx <= 0xf044b378) {
        goto label_79;
    }
    if (ecx == 0xf044b379) {
        goto label_80;
    }
    if (ecx != 0xac77f45) {
        goto label_17;
    }
    ecx = 0xc3b98a6;
    edx = 0x6150078c;
    if (*((rsp + 0x30)) == 0) {
        ecx = edx;
    }
    if (ecx > 0xc3b98a5) {
        goto label_16;
    }
    goto label_27;
label_79:
    if (ecx == 0x830677da) {
        goto label_81;
    }
    if (ecx != 0xa41e0411) {
        goto label_17;
    }
    goto label_82;
label_80:
    ecx = 0xa41e0411;
    eax = 0;
    if (ecx > 0xc3b98a5) {
        goto label_16;
    }
    goto label_27;
label_81:
    ecx = *((rsp + 0x13));
    *((rsp + 0x54)) = ecx;
    ecx = *((rsp + 0x12));
    ecx = 0x64c4cea3;
    edx = 0x70b665d2;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx > 0xc3b98a5) {
        goto label_16;
    }
    goto label_27;
label_61:
    ecx = 0xfc20dd5;
    eax = 0;
    if (ecx > 0x337a0a78) {
        goto label_14;
    }
    goto label_28;
label_82:
    ecx = 0xfc20dd5;
    if (ecx > 0x337a0a78) {
        goto label_14;
    }
label_28:
    if (ecx > 0xdb369a5a) {
        goto label_83;
    }
    if (ecx == 0x8a1aac2e) {
        goto label_84;
    }
    if (ecx != 0xc8fe5e59) {
        goto label_15;
    }
    ecx = *((rsp + 0x11));
    *((rsp + 0x50)) = ecx;
    ecx = *((rsp + 0x10));
    ecx = 0x8a1aac2e;
    edx = 0xdb369a5b;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx > 0x337a0a78) {
        goto label_14;
    }
    goto label_28;
label_83:
    if (ecx == 0xdb369a5b) {
        goto label_85;
    }
    if (ecx != 0xfc20dd5) {
        goto label_15;
    }
    goto label_86;
label_84:
    ecx = *((rsp + 0x2c));
    edx = *((rsp + 0x50));
    goto label_29;
label_85:
    ecx = *((rsp + 0x50));
    ecx &= 0xffffffdf;
    goto label_29;
label_86:
    ecx = 0x507ac1cb;
    if (ecx <= 0x507ac1ca) {
        goto label_10;
    }
    goto label_13;
label_50:
    ecx = *((rsp + 0xd));
    *((rsp + 0x48)) = ecx;
    cl = *((rsp + 0xc));
    ecx = 0xbc4342b;
    edx = 0xeffcfda9;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx > 0xbc4342a) {
        goto label_7;
    }
    goto label_30;
label_58:
    ecx = 0xa4b9cefc;
    if (ecx > 0xbc4342a) {
        goto label_7;
    }
    goto label_30;
label_51:
    ecx = 0x29c7e750;
    if (ecx <= 0xff407a25) {
        goto label_6;
    }
label_31:
    if (ecx > 0x29c7e74f) {
        goto label_87;
    }
    if (ecx == 0xff407a26) {
        goto label_88;
    }
    if (ecx != 0x227bf8a3) {
        goto label_5;
    }
    ecx = *((rsp + 0x20));
    edx = *((rsp + 0x44));
    goto label_4;
label_87:
    if (ecx == 0x7e96b5a0) {
        goto label_89;
    }
    if (ecx != 0x29c7e750) {
        goto label_5;
    }
    goto label_90;
label_88:
    ecx = 0x29c7e750;
    eax = 1;
    if (ecx <= 0xff407a25) {
        goto label_6;
    }
    goto label_31;
label_89:
    ecx = 0x29c7e750;
    eax = 0;
    if (ecx <= 0xff407a25) {
        goto label_6;
    }
    goto label_31;
label_41:
    ecx = 0xbda46a83;
    edx = 0x7149d193;
    if (*((rsp + 0x1c)) == 0) {
        ecx = edx;
    }
    if (ecx <= 0xf22d1cdd) {
        goto label_2;
    }
    goto label_32;
label_90:
    ecx = 0x724ba558;
    if (ecx <= 0xf22d1cdd) {
        goto label_2;
    }
label_32:
    if (ecx > 0x724ba557) {
        goto label_91;
    }
    if (ecx == 0xf22d1cde) {
        goto label_92;
    }
    if (ecx != 0x7149d193) {
        goto label_3;
    }
    ecx = 0x724ba558;
    eax = 1;
    if (ecx <= 0xf22d1cdd) {
        goto label_2;
    }
    goto label_32;
label_91:
    if (ecx == 0x792f9c95) {
        goto label_93;
    }
    if (ecx != 0x724ba558) {
        goto label_3;
    }
    goto label_94;
label_92:
    ecx = *((rsp + 0x1c));
    edx = *((rsp + 0x40));
    goto label_33;
label_93:
    ecx = *((rsp + 0x40));
    ecx &= 0xffffffdf;
    goto label_33;
label_38:
    ecx = *((rsp + 0x3c));
    ecx &= 0xffffffdf;
    goto label_34;
label_94:
    ecx = 0x7468c8f3;
    if (ecx <= 0x14aeef7c) {
        goto label_0;
    }
label_35:
    if (ecx > 0x60caaaea) {
        goto label_95;
    }
    if (ecx == 0x14aeef7d) {
        goto label_96;
    }
    if (ecx != 0x35dadc89) {
        goto label_1;
    }
    ecx = *((rsp + 0x18));
    edx = *((rsp + 0x3c));
    goto label_34;
label_95:
    if (ecx == 0x60caaaeb) {
        goto label_97;
    }
    if (ecx != 0x7468c8f3) {
        goto label_1;
    }
    goto label_98;
label_96:
    ecx = 0x870fe3f2;
    edx = 0x905f939;
    if (*((rsp + 0x18)) == 0) {
        ecx = edx;
    }
    if (ecx <= 0x14aeef7c) {
        goto label_0;
    }
    goto label_35;
label_97:
    ecx = *((rsp + 7));
    *((rsp + 0x3c)) = ecx;
    ecx = *((rsp + 6));
    ecx = 0x35dadc89;
    edx = 0xb114c9b8;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx <= 0x14aeef7c) {
        goto label_0;
    }
    goto label_35;
label_98:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40b400 */
#include <stdint.h>
 
uint64_t dbg_version_etc_arn (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char const * const * authors, size_t n_authors, FILE * stream) {
    char const * package;
    char const * version;
    char const * command_name;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rbx = authors;
    r9 = n_authors;
    r13 = stream;
    /* void version_etc_arn(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors,size_t n_authors); */
    rbx = r8;
    *((rsp + 0x28)) = rcx;
    *((rsp + 0x20)) = rdx;
    r13 = rdi;
    *((rsp + 0x30)) = rsi;
    eax = 0x883e44db;
    ecx = 0xe41cea58;
    if (rsi != 0) {
        ecx = eax;
    }
    *((rsp + 0x14)) = ecx;
    eax = 0xfaab55f5;
    ecx = 0x7a2bff08;
    if (r9 < 5) {
        ecx = eax;
    }
    *((rsp + 0x1c)) = ecx;
    eax = 0xc4a8a0e7;
    ecx = 0x436fe6c3;
    if (r9 < 7) {
        ecx = eax;
    }
    *((rsp + 8)) = ecx;
    eax = 0x47678c48;
    ecx = 0x2d6ef314;
    if (r9 < 8) {
        ecx = eax;
    }
    *((rsp + 0x18)) = ecx;
    eax = 0x14eeb2c1;
    ecx = 0xab0baa75;
    if (r9 < 9) {
        ecx = eax;
    }
    *((rsp + 4)) = ecx;
    ecx = 0xdc301cbb;
    eax = 0x1df09a72;
    if (r9 != 9) {
        ecx = eax;
    }
    *(rsp) = ecx;
    ecx = 0x991ba7b0;
    r14d = 0xf5152ea0;
    if (r9 < 6) {
        r14d = ecx;
    }
    ecx = 0x67cb3bab;
    if (r9 < 2) {
    }
    ecx = 0xd32a6594;
    edx = 0xfeb90d74;
    if (r9 < 3) {
        edx = ecx;
    }
    *((rsp + 0x10)) = edx;
    ecx = 0x5c7e8815;
    r12d = 0x1d217b6f;
    if (r9 < 4) {
        r12d = ecx;
    }
    ecx = 0xc22574ff;
    edx = 0xab4563ff;
    if (r9 <= 0) {
        edx = ecx;
    }
    *((rsp + 0xc)) = edx;
    r15d = 0x5991c38b;
    if (r9 != 0) {
        r15d = eax;
    }
    eax = 0xd3c26829;
    goto label_0;
label_1:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    do {
label_0:
        ecx = eax;
        if (ecx <= 0xfaab55f4) {
            goto label_2;
        }
        if (ecx > 0x3f0e5cee) {
            goto label_3;
        }
        if (ecx <= 0x1d217b6e) {
            goto label_4;
        }
        if (ecx > 0x282bf7c4) {
            goto label_5;
        }
        if (ecx == 0x1d217b6f) {
            goto label_6;
        }
        eax = ecx;
    } while (ecx != 0x1df09a72);
    eax = 0xb7b2cb13;
    goto label_0;
label_2:
    if (ecx <= 0xc22574fe) {
        goto label_7;
    }
    if (ecx <= 0xd3c26828) {
        goto label_8;
    }
    if (ecx > 0xe41cea57) {
        goto label_9;
    }
    eax = *((rsp + 0x14));
    if (ecx == 0xd3c26829) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0xdc301cbb) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_3:
    if (ecx <= 0x5991c38a) {
        goto label_10;
    }
    if (ecx <= 0x67cb3baa) {
        goto label_11;
    }
    eax = *((rsp + 0xc));
    if (ecx == 0x67cb3bab) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0x7a2bff08) {
        goto label_0;
    }
    eax = *((rsp + 8));
    goto label_0;
label_7:
    if (ecx > 0xab4563fe) {
        goto label_12;
    }
    if (ecx == 0x883e44db) {
        goto label_13;
    }
    if (ecx == 0x991ba7b0) {
        goto label_14;
    }
    eax = ecx;
    if (ecx != 0xab0baa75) {
        goto label_0;
    }
    eax = *(rsp);
    goto label_0;
label_4:
    eax = ebp;
    if (ecx == 0xfaab55f5) {
        goto label_0;
    }
    eax = r12d;
    if (ecx == 0xfeb90d74) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0x14eeb2c1) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_8:
    eax = r15d;
    if (ecx == 0xc22574ff) {
        goto label_0;
    }
    eax = r14d;
    if (ecx == 0xc4a8a0e7) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0xd32a6594) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_10:
    if (ecx == 0x3f0e5cef) {
        goto label_15;
    }
    eax = *((rsp + 0x18));
    if (ecx == 0x436fe6c3) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0x47678c48) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_12:
    if (ecx == 0xab4563ff) {
        goto label_16;
    }
    eax = *((rsp + 0x1c));
    if (ecx == 0xb70adc3d) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0xb7b2cb13) {
        goto label_0;
    }
    goto label_1;
label_5:
    eax = *((rsp + 0x10));
    if (ecx == 0x282bf7c5) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0x2d6ef314) {
        goto label_0;
    }
    eax = *((rsp + 4));
    goto label_0;
label_9:
    if (ecx == 0xe41cea58) {
        goto label_17;
    }
    eax = ecx;
    if (ecx != 0xf5152ea0) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_11:
    if (ecx == 0x5c7e8815) {
        goto label_18;
    }
    eax = ecx;
    if (ecx != 0x5991c38b) {
        goto label_0;
    }
    goto label_19;
label_6:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\nand %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_13:
    esi = 1;
    edx = 0x40e518;
    eax = 0;
    rdi = r13;
    rcx = *((rsp + 0x30));
    r8 = *((rsp + 0x20));
    r9 = *((rsp + 0x28));
    fprintf_chk ();
    eax = 0x3f0e5cef;
    goto label_0;
label_14:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_15:
    edx = 5;
    rax = dcgettext (0, 0x40e52b);
    rcx = rax;
    esi = 1;
    edx = "Copyright %s %d Free Software Foundation, Inc.";
    r8d = 0x7e3;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    edx = 5;
    rax = dcgettext (0, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
    rdi = rax;
    rsi = r13;
    fputs_unlocked ();
    eax = 0xb70adc3d;
    goto label_0;
label_16:
    edx = 5;
    rax = dcgettext (0, "Written by %s.\n");
    rdx = rax;
    rcx = *(rbx);
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_17:
    esi = 1;
    edx = "%s %s\n";
    eax = 0;
    rdi = r13;
    rcx = *((rsp + 0x20));
    r8 = *((rsp + 0x28));
    fprintf_chk ();
    eax = 0x3f0e5cef;
    goto label_0;
label_18:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x5991c38b;
    goto label_0;
label_19:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40ba90 */
#include <stdint.h>
 
int64_t dbg_version_etc_ar (char const * const * authors, char const * command_name, size_t n_authors, char const * package, FILE * stream, char const * version) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    r8 = authors;
    rsi = command_name;
    r10 = n_authors;
    rdx = package;
    rdi = stream;
    rcx = version;
    /* void version_etc_ar(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors); */
    r10d = 0;
    r9d = 0x31c558a;
    goto label_1;
label_0:
    r10 = *((rsp - 8));
    r10++;
label_1:
    eax = 0x79364210;
    if (eax != 0x79364210) {
        goto label_2;
    }
    do {
        *((rsp - 8)) = r10;
        rax = *((rsp - 8));
        eax = 0xf12a6122;
        if (*((r8 + rax*8)) != 0) {
            eax = r9d;
        }
    } while (eax == 0x79364210);
label_2:
    if (eax == 0xf12a6122) {
        goto label_3;
    }
    if (eax == 0x31c558a) {
        goto label_0;
    }
label_3:
    r9 = *((rsp - 8));
invalid_funccall(); //    return void (*0x40b400)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40bb00 */
#include <stdint.h>
 
uint64_t version_etc_va (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rax = rsp + 0x20;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x10));
    r14d = 0;
    r9d = 0x80d27a3a;
    r10d = 0x94ab0086;
    r11d = 0x39e0e3d9;
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
    goto label_4;
label_3:
    r14 = *((rsp + 8));
    r14++;
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
    goto label_4;
label_1:
    if (ebp == 0x9c478434) {
        goto label_5;
    }
    if (ebp != 0xeda4fd7) {
        goto label_6;
    }
    rbx = *((r8 + 8));
    rax = rbx + 8;
    *((r8 + 8)) = rax;
    goto label_7;
label_2:
    rbx = *((rsp + 4));
    rbx += *((r8 + 0x10));
    ebp = *((rsp + 4));
    ebp += 8;
    rax = *((rsp + 0x18));
    *(rax) = ebp;
label_7:
    if (ebp <= 0x39e0e3d8) {
        goto label_4;
    }
    do {
label_0:
        if (ebp == 0x39e0e3d9) {
            goto label_8;
        }
        if (ebp == 0x39ef8b9a) {
            goto label_9;
        }
        if (ebp != 0x51ca0544) {
            goto label_6;
        }
        *((rsp + 8)) = r14;
        rbp = *((rsp + 8));
        if (rbp < 0xa) {
        }
    } while (ebp > 0x39e0e3d8);
    goto label_4;
label_8:
    *((rsp + 0x18)) = r8;
    rbp = *((rsp + 0x18));
    ebp = *(rbp);
    *((rsp + 4)) = ebp;
    ebp = *((rsp + 4));
    if (ebp < 0x29) {
    }
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
    goto label_4;
label_9:
    rax = *(rbx);
    rbp = *((rsp + 8));
    *((rsp + rbp*8 + 0x20)) = rax;
    if (rax != 0) {
    }
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
label_4:
    if (ebp > 0x9c478433) {
        goto label_1;
    }
    if (ebp == 0x80d27a3a) {
        goto label_2;
    }
    if (ebp == 0x94ab0086) {
        goto label_3;
    }
label_6:
label_5:
    r9 = *((rsp + 8));
    version_etc_arn (rdi, rsi, rdx, rcx, rsp + 0x20);
    rax = *((rsp + 0x10));
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40bca0 */
#include <stdint.h>
 
uint64_t dbg_version_etc (int64_t arg_160h, int64_t arg10, int64_t arg11, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, char const * command_name, char const * package, FILE * stream, char const * version) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    va_list authors;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
    int64_t var_e0h;
    char const * authtab[11];
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
        *((rsp + 0x70)) = xmm0;
        *((rsp + 0x80)) = xmm1;
        *((rsp + 0x90)) = xmm2;
        *((rsp + 0xa0)) = xmm3;
        *((rsp + 0xb0)) = xmm4;
        *((rsp + 0xc0)) = xmm5;
        *((rsp + 0xd0)) = xmm6;
        *((rsp + 0xe0)) = xmm7;
    }
    *((rsp + 0x68)) = r9;
    *((rsp + 0x60)) = r8;
    rax = rsp + 0x40;
    *((rsp + 0x30)) = rax;
    rax = rsp + 0x160;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x24)) = 0x30;
    *((rsp + 0x20)) = 0x20;
    rax = rsp + 0xf0;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x10));
    r14d = 0;
    r8 = rsp + 0x20;
    r9d = 0x80d27a3a;
    r10d = 0x94ab0086;
    r11d = 0x39e0e3d9;
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
    goto label_4;
label_3:
    r14 = *((rsp + 8));
    r14++;
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
    goto label_4;
label_1:
    if (ebp == 0x9c478434) {
        goto label_5;
    }
    if (ebp != 0xeda4fd7) {
        goto label_6;
    }
    rbx = *((rsp + 0x28));
    rax = rbx + 8;
    *((rsp + 0x28)) = rax;
    goto label_7;
label_2:
    rbx = *((rsp + 4));
    rbx += *((rsp + 0x30));
    ebp = *((rsp + 4));
    ebp += 8;
    rax = *((rsp + 0x18));
    *(rax) = ebp;
label_7:
    if (ebp <= 0x39e0e3d8) {
        goto label_4;
    }
    do {
label_0:
        if (ebp == 0x39e0e3d9) {
            goto label_8;
        }
        if (ebp == 0x39ef8b9a) {
            goto label_9;
        }
        if (ebp != 0x51ca0544) {
            goto label_6;
        }
        *((rsp + 8)) = r14;
        rbp = *((rsp + 8));
        if (rbp < 0xa) {
        }
    } while (ebp > 0x39e0e3d8);
    goto label_4;
label_8:
    *((rsp + 0x18)) = r8;
    rbp = *((rsp + 0x18));
    ebp = *(rbp);
    *((rsp + 4)) = ebp;
    ebp = *((rsp + 4));
    if (ebp < 0x29) {
    }
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
    goto label_4;
label_9:
    rax = *(rbx);
    rbp = *((rsp + 8));
    *((rsp + rbp*8 + 0xf0)) = rax;
    if (rax != 0) {
    }
    if (ebp > 0x39e0e3d8) {
        goto label_0;
    }
label_4:
    if (ebp > 0x9c478433) {
        goto label_1;
    }
    if (ebp == 0x80d27a3a) {
        goto label_2;
    }
    if (ebp == 0x94ab0086) {
        goto label_3;
    }
label_6:
label_5:
    r9 = *((rsp + 8));
    version_etc_arn (rdi, rsi, rdx, rcx, rsp + 0xf0);
    rax = *((rsp + 0x10));
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40bee0 */
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
/* nostrip @ 0x40bf60 */
#include <stdint.h>
 
int64_t dbg_xnmalloc (int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, int64_t arg_10h, uint32_t arg1, int64_t arg2, size_t n, void * p) {
    int64_t var_8h;
    int64_t var_eh_2;
    int64_t var_fh_2;
    int64_t var_10h_2;
    int64_t var_eh;
    int64_t var_fh;
    void * var_10h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_18h;
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_2;
    int64_t var_6h_3;
    int64_t var_7h_3;
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
    *((rsp + 0x18)) = rax;
    ecx = 0x570d7231;
    eax = 0xd1e8b289;
    if (ecx != 0x33104f7d) {
        goto label_1;
    }
    goto label_2;
    do {
        rcx = *((rsp + 0x18));
        ecx = 0x33104f7d;
        if (rcx < rdi) {
            ecx = eax;
        }
        if (ecx == 0x33104f7d) {
            goto label_2;
        }
INVALID_JUMP;
    } while (ecx == 0x570d7231);
    if (ecx == 0xd1e8b289) {
        goto label_3;
    }
label_2:
    rbx *= rdi;
    rax = malloc (rbx);
    *((rsp + 0x10)) = rax;
    *(rsp + 0xe) = (*((rsp + 0x10)) == 0) ? 1 : 0;
    *(rsp + 0xf) = (rbx != 0) ? 1 : 0;
    edx = 0x4e43466e;
    eax = 0xe1efa77f;
    ecx = 0xe587b31f;
    if (edx != 0xe587b31f) {
        goto label_4;
    }
    goto label_5;
label_0:
    ebx = *((rsp + 0xe));
    edx = *((rsp + 0xf));
    edx = 0xe587b31f;
    if (dl == 0) {
        edx = eax;
        goto label_6;
    }
    while (1);
label_6:
    if (bl == 0) {
        edx = ecx;
    }
    if (edx == 0xe587b31f) {
        goto label_5;
    }
label_4:
    if (edx == 0x4e43466e) {
        goto label_0;
    }
    if (edx != 0xe1efa77f) {
label_5:
        rax = *((rsp + 0x10));
        return rax;
label_3:
        xalloc_die ();
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c060 */
#include <stdint.h>
 
uint64_t xmalloc (int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, int64_t arg_10h, size_t size) {
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_3;
    int64_t var_6h_3;
    int64_t var_7h_3;
    int64_t var_8h_2;
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_6h;
    int64_t var_7h;
    void * var_8h;
    rdi = size;
    rbx = rdi;
    rax = malloc (rdi);
    *((rsp + 8)) = rax;
    *(rsp + 6) = (*((rsp + 8)) == 0) ? 1 : 0;
    *(rsp + 7) = (rbx != 0) ? 1 : 0;
    edx = 0x4e43466e;
    eax = 0xe1efa77f;
    ecx = 0xe587b31f;
    if (edx != 0xe587b31f) {
        goto label_0;
    }
    goto label_1;
    do {
        ebx = *((rsp + 6));
        edx = *((rsp + 7));
        edx = 0xe587b31f;
        if (dl != 0) {
            edx = eax;
        }
        if (bl == 0) {
            edx = ecx;
        }
        if (edx == 0xe587b31f) {
            goto label_1;
        }
INVALID_JUMP;
    } while (edx == 0x4e43466e);
    if (edx != 0xe1efa77f) {
label_1:
        rax = *((rsp + 8));
        return rax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c100 */
#include <stdint.h>
 
int64_t dbg_xnrealloc (int64_t arg_6h, int64_t arg_7h, void * arg_8h, int64_t arg_10h, int64_t arg1, uint32_t arg2, int64_t arg3, size_t n, void * p) {
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_3;
    int64_t var_6h_3;
    int64_t var_7h_3;
    int64_t var_8h;
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h_2;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = n;
    r14 = p;
    /* void * xnrealloc(void * p,size_t n,size_t s); */
    rbx = rdx;
    r14 = rdi;
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / rbx;
    rdx = rdx_rax % rbx;
    *((rsp + 0x10)) = rax;
    ecx = 0xa0b94ace;
    eax = 0x22190561;
    if (ecx != 0x85b1066b) {
        goto label_3;
    }
    goto label_4;
    do {
        rcx = *((rsp + 0x10));
        ecx = 0x85b1066b;
        if (rcx < rsi) {
            ecx = eax;
        }
        if (ecx == 0x85b1066b) {
            goto label_4;
        }
INVALID_JUMP;
    } while (ecx == 0xa0b94ace);
    if (ecx == 0x22190561) {
        goto label_5;
    }
label_4:
    rbx *= rsi;
    *(rsp + 6) = (rbx == 0) ? 1 : 0;
    *(rsp + 7) = (r14 != 0) ? 1 : 0;
    eax = 0x6b0e46c6;
    r13d = 0x8479630a;
    r12d = 0x9504070c;
    if (eax <= 0xee5a66ad) {
        goto label_1;
    }
    goto label_2;
label_0:
    rax = realloc (r14, rbx);
    *((rsp + 8)) = rax;
    eax = 0x8479630a;
    ecx = 0xee5a66ae;
    if (*((rsp + 8)) == 0) {
        eax = ecx;
    }
    if (rbx == 0) {
        eax = r13d;
    }
    if (eax > 0xee5a66ad) {
        goto label_2;
    }
    while (1);
label_1:
    if (eax == 0x8479630a) {
        goto label_6;
    }
    if (eax == 0x9504070c) {
        goto label_0;
    }
    if (eax != 0xc09d0373) {
        goto label_7;
    }
    free (r14);
    eax = 0x2401ddd7;
    r15d = 0;
    if (eax <= 0xee5a66ad) {
        goto label_1;
    }
    goto label_2;
label_6:
    eax = 0x2401ddd7;
    r15 = *((rsp + 8));
    if (eax <= 0xee5a66ad) {
        goto label_1;
    }
label_2:
    if (eax == 0x2401ddd7) {
        goto label_8;
    }
    if (eax != 0x6b0e46c6) {
        goto label_9;
    }
    ecx = *((rsp + 6));
    eax = *((rsp + 7));
    eax = 0x9504070c;
    if (al != 0) {
        eax = ebp;
    }
    if (cl == 0) {
        eax = r12d;
    }
    if (eax <= 0xee5a66ad) {
        goto label_1;
    }
    goto label_2;
label_8:
    rax = r15;
    return rax;
label_9:
    if (eax != 0xee5a66ae) {
label_7:
label_5:
        xalloc_die ();
    }
    rax = xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c2b0 */
#include <stdint.h>
 
uint64_t xrealloc (int64_t arg1, size_t arg2) {
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_3;
    int64_t var_6h_3;
    int64_t var_7h_3;
    int64_t var_8h;
    int64_t var_eh;
    int64_t var_fh;
    void * var_10h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h_2;
    rdi = arg1;
    rsi = arg2;
    r14 = rsi;
    rbx = rdi;
    *(rsp + 0xe) = (r14 == 0) ? 1 : 0;
    *(rsp + 0xf) = (rbx != 0) ? 1 : 0;
    eax = 0x6b0e46c6;
    r13d = 0x8479630a;
    r12d = 0x9504070c;
    if (eax <= 0xee5a66ad) {
        goto label_0;
    }
    goto label_1;
    do {
        rax = realloc (rbx, r14);
        *((rsp + 0x10)) = rax;
        eax = 0x8479630a;
        ecx = 0xee5a66ae;
        if (*((rsp + 0x10)) == 0) {
            eax = ecx;
        }
        if (r14 == 0) {
            eax = r13d;
        }
        if (eax > 0xee5a66ad) {
            goto label_1;
        }
label_0:
        if (eax == 0x8479630a) {
            goto label_2;
        }
    } while (eax == 0x9504070c);
    if (eax != 0xc09d0373) {
        goto label_3;
    }
    free (rbx);
    eax = 0x2401ddd7;
    r15d = 0;
    if (eax <= 0xee5a66ad) {
        goto label_0;
    }
    goto label_1;
label_2:
    eax = 0x2401ddd7;
    r15 = *((rsp + 0x10));
    if (eax <= 0xee5a66ad) {
        goto label_0;
    }
label_1:
    if (eax == 0x2401ddd7) {
        goto label_4;
    }
    if (eax != 0x6b0e46c6) {
        goto label_5;
    }
    ecx = *((rsp + 0xe));
    eax = *((rsp + 0xf));
    eax = 0x9504070c;
    if (al != 0) {
        eax = ebp;
    }
    if (cl == 0) {
        eax = r12d;
    }
    if (eax <= 0xee5a66ad) {
        goto label_0;
    }
    goto label_1;
label_4:
    rax = r15;
    return rax;
label_5:
    if (eax != 0xee5a66ae) {
INVALID_JUMP;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c400 */
#include <stdint.h>
 
int64_t dbg_x2nrealloc (int64_t arg1, int64_t arg3, uint32_t arg4, size_t n, void * p, size_t * pn) {
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_3;
    int64_t var_6h_3;
    int64_t var_7h_3;
    uint32_t var_8h;
    void * var_10h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h_2;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r12 = n;
    r14 = p;
    rsi = pn;
    /* void * x2nrealloc(void * p,size_t * pn,size_t s); */
    r12 = rdx;
    r14 = rdi;
    rax = *(rsi);
    *((rsp + 8)) = rax;
    eax = 0xacc3c518;
    edi = 0x96cdf6c7;
    if (r14 != 0) {
        edi = eax;
    }
    ebx = 0;
    bl = (r12 > 0x80) ? 1 : 0;
    eax = 0xa8285c98;
    r10d = 0x7d6db3df;
    r8 = 0x5555555555555554;
    r11d = 0x36313687;
    r9 = 0x7fffffffffffffff;
    r15d = 0x349a4d0;
    if (eax <= 0xd28287d3) {
        goto label_1;
    }
    goto label_2;
label_0:
    edx = 0;
    rax = r8;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    eax = 0x749105ec;
    if (rax <= *((rsp + 8))) {
        eax = r11d;
    }
    do {
        if (eax > 0xd28287d3) {
            goto label_2;
        }
label_1:
        if (eax > 0xacc3c517) {
            goto label_5;
        }
        if (eax == 0x96cdf6c7) {
            goto label_6;
        }
        eax = edi;
    } while (eax == 0xa8285c98);
    goto label_7;
label_5:
    if (eax == 0xacc3c518) {
        goto label_0;
    }
    if (eax != 0xd0a01c6d) {
        goto label_7;
    }
    eax = 0x80;
    edx = 0;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx = rax;
    rcx += rbx;
    eax = 0x7d6db3df;
    if (eax <= 0xd28287d3) {
        goto label_1;
    }
    goto label_2;
label_6:
    eax = 0xd0a01c6d;
    if (*((rsp + 8)) != 0) {
        eax = r10d;
    }
    rcx = *((rsp + 8));
    if (eax <= 0xd28287d3) {
        goto label_1;
    }
label_2:
    if (eax <= 0x749105eb) {
        goto label_8;
    }
    if (eax == 0x749105ec) {
        goto label_9;
    }
    if (eax != 0x7d6db3df) {
        goto label_7;
    }
    edx = 0;
    rax = r9;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    eax = 0xd28287d4;
    if (rax < rcx) {
        eax = r15d;
    }
    if (eax <= 0xd28287d3) {
        goto label_1;
    }
    goto label_2;
label_9:
    rax = *((rsp + 8));
    rax >>= 1;
    rdx = *((rsp + 8));
    rbp = rax + rdx + 1;
    eax = 0xd28287d4;
    if (eax <= 0xd28287d3) {
        goto label_1;
    }
    goto label_2;
label_8:
    if (eax != 0xd28287d4) {
        goto label_10;
    }
    *(rsi) = rbp;
    r12 *= rbp;
    *(rsp + 6) = (r12 == 0) ? 1 : 0;
    *(rsp + 7) = (r14 != 0) ? 1 : 0;
    eax = 0x6b0e46c6;
    ebx = 0xc09d0373;
    r13d = 0x9504070c;
    if (eax <= 0xee5a66ad) {
        goto label_3;
    }
    goto label_4;
    do {
        rax = realloc (r14, r12);
        *((rsp + 0x10)) = rax;
        eax = 0x8479630a;
        ecx = 0xee5a66ae;
        if (*((rsp + 0x10)) == 0) {
            eax = ecx;
        }
        if (r12 == 0) {
            eax = ebp;
        }
        if (eax > 0xee5a66ad) {
            goto label_4;
        }
label_3:
        if (eax == 0x8479630a) {
            goto label_11;
        }
    } while (eax == 0x9504070c);
    if (eax != 0xc09d0373) {
        goto label_12;
    }
    free (r14);
    eax = 0x2401ddd7;
    r15d = 0;
    if (eax <= 0xee5a66ad) {
        goto label_3;
    }
    goto label_4;
label_11:
    eax = 0x2401ddd7;
    r15 = *((rsp + 0x10));
    if (eax <= 0xee5a66ad) {
        goto label_3;
    }
label_4:
    if (eax == 0x2401ddd7) {
        goto label_13;
    }
    if (eax != 0x6b0e46c6) {
        goto label_14;
    }
    ecx = *((rsp + 6));
    eax = *((rsp + 7));
    eax = 0x9504070c;
    if (al != 0) {
        eax = ebx;
    }
    if (cl == 0) {
        eax = r13d;
    }
    if (eax <= 0xee5a66ad) {
        goto label_3;
    }
    goto label_4;
label_13:
    rax = r15;
    return rax;
label_10:
    if (eax != 0x349a4d0) {
        if (eax == 0x36313687) {
            goto label_15;
        }
label_7:
label_14:
        if (eax == 0xee5a66ae) {
            goto label_16;
        }
INVALID_JUMP;
    }
    xalloc_die ();
label_15:
    xalloc_die ();
label_16:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c6e0 */
#include <stdint.h>
 
uint64_t dbg_xcharalloc (int64_t arg1, size_t n, void * p) {
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_2;
    int64_t var_6h_3;
    int64_t var_7h_3;
    int64_t var_8h_3;
    int64_t var_10h;
    int64_t var_6h;
    int64_t var_7h;
    void * var_8h;
    rdi = arg1;
    rbx = n;
    rax = p;
    /* char * xcharalloc(size_t n); */
    rbx = rdi;
    rax = malloc (rdi);
    *((rsp + 8)) = rax;
    *(rsp + 6) = (*((rsp + 8)) == 0) ? 1 : 0;
    *(rsp + 7) = (rbx != 0) ? 1 : 0;
    edx = 0x4e43466e;
    eax = 0xe1efa77f;
    ecx = 0xe587b31f;
    if (edx != 0xe587b31f) {
        goto label_0;
    }
    goto label_1;
    do {
        ebx = *((rsp + 6));
        edx = *((rsp + 7));
        edx = 0xe587b31f;
        if (dl != 0) {
            edx = eax;
        }
        if (bl == 0) {
            edx = ecx;
        }
        if (edx == 0xe587b31f) {
            goto label_1;
        }
INVALID_JUMP;
    } while (edx == 0x4e43466e);
    if (edx != 0xe1efa77f) {
label_1:
        rax = *((rsp + 8));
        return rax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c780 */
#include <stdint.h>
 
void dbg_x2realloc (int64_t arg4, void * p, size_t * pn) {
    int64_t var_6h_2;
    int64_t var_7h_2;
    int64_t var_8h_3;
    int64_t var_6h_3;
    int64_t var_7h_3;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h_2;
    rcx = arg4;
    rdi = p;
    rsi = pn;
    /* void * x2realloc(void * p,size_t * pn); */
    edx = 1;
invalid_funccall(); //    return void (*0x40c400)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c790 */
#include <stdint.h>
 
uint64_t dbg_xzalloc (int64_t arg_8h, int64_t arg_10h, int64_t arg1, size_t n, void * p) {
    int64_t var_10h_2;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_eh;
    int64_t var_fh;
    void * s;
    rdi = arg1;
    rbx = n;
    rax = p;
    /* void * xzalloc(size_t s); */
    rbx = rdi;
    rax = malloc (rdi);
    *((rsp + 0x10)) = rax;
    *(rsp + 0xe) = (*((rsp + 0x10)) == 0) ? 1 : 0;
    *(rsp + 0xf) = (rbx != 0) ? 1 : 0;
    edx = 0x4e43466e;
    esi = 0xe1efa77f;
    ecx = 0xe587b31f;
    if (edx != 0xe587b31f) {
        goto label_0;
    }
    goto label_1;
    do {
        eax = *((rsp + 0xe));
        edx = *((rsp + 0xf));
        edx = 0xe587b31f;
        if (dl != 0) {
            edx = esi;
        }
        if (al == 0) {
            edx = ecx;
        }
        if (edx == 0xe587b31f) {
            goto label_1;
        }
INVALID_JUMP;
    } while (edx == 0x4e43466e);
    if (edx != 0xe1efa77f) {
label_1:
        r14 = *((rsp + 0x10));
        memset (r14, 0, rbx);
        rax = r14;
        return rax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c840 */
#include <stdint.h>
 
int64_t dbg_xcalloc (void * arg_8h, int64_t arg_10h, int64_t arg1, int64_t arg2, size_t n, void * p, size_t s) {
    int64_t var_10h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    r14 = n;
    rax = p;
    rbx = s;
    /* void * xcalloc(size_t n,size_t s); */
    rbx = rsi;
    r14 = rdi;
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / rbx;
    rdx = rdx_rax % rbx;
    *((rsp + 0x10)) = rax;
    eax = 0xa1328356;
    r15d = 0xbf66dcc9;
    if (eax <= 0xbf66dcc8) {
        goto label_1;
    }
    goto label_2;
label_0:
    rax = calloc (r14, rbx);
    *((rsp + 8)) = rax;
    eax = 0xbf66dcc9;
    if (*((rsp + 8)) != 0) {
        eax = ebp;
    }
    if (eax > 0xbf66dcc8) {
        goto label_2;
    }
    do {
label_1:
        if (eax == 0x86b22ce5) {
            goto label_3;
        }
        if (eax != 0xa1328356) {
            goto label_4;
        }
        rax = *((rsp + 0x10));
        eax = 0x18353572;
        if (rax < r14) {
            eax = r15d;
        }
    } while (eax <= 0xbf66dcc8);
label_2:
    if (eax == 0x18353572) {
        goto label_0;
    }
    if (eax != 0xbf66dcc9) {
label_4:
label_3:
        rax = *((rsp + 8));
        return rax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c900 */
#include <stdint.h>
 
uint64_t xmemdup (int64_t arg1, size_t size) {
    int64_t var_6h;
    int64_t var_7h;
    void * s1;
    rdi = arg1;
    rsi = size;
    rbx = rsi;
    r14 = rdi;
    rax = malloc (rbx);
    *((rsp + 8)) = rax;
    *(rsp + 6) = (*((rsp + 8)) == 0) ? 1 : 0;
    *(rsp + 7) = (rbx != 0) ? 1 : 0;
    edx = 0x4e43466e;
    esi = 0xe1efa77f;
    ecx = 0xe587b31f;
    if (edx != 0xe587b31f) {
        goto label_0;
    }
    goto label_1;
    do {
        eax = *((rsp + 6));
        edx = *((rsp + 7));
        edx = 0xe587b31f;
        if (dl != 0) {
            edx = esi;
        }
        if (al == 0) {
            edx = ecx;
        }
        if (edx == 0xe587b31f) {
            goto label_1;
        }
INVALID_JUMP;
    } while (edx == 0x4e43466e);
    if (edx != 0xe1efa77f) {
label_1:
        r15 = *((rsp + 8));
        memcpy (*((rsp + 8)), r14, rbx);
        rax = r15;
        return rax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40c9c0 */
#include <stdint.h>
 
uint64_t dbg_xstrdup (int64_t arg1, size_t n, void * p, char const * string) {
    int64_t var_6h;
    int64_t var_7h;
    void * s1;
    rdi = arg1;
    rbx = n;
    rax = p;
    r14 = string;
    /* char * xstrdup(char const * string); */
    r14 = rdi;
    rax = strlen (rdi);
    rbx = rax;
    rax = malloc (rbx + 1);
    *((rsp + 8)) = rax;
    *(rsp + 6) = (*((rsp + 8)) == 0) ? 1 : 0;
    rbx++;
    *(rsp + 7) = (rbx != 0) ? 1 : 0;
    edx = 0x4e43466e;
    esi = 0xe1efa77f;
    ecx = 0xe587b31f;
    if (edx != 0xe587b31f) {
        goto label_0;
    }
    goto label_1;
    do {
        eax = *((rsp + 6));
        edx = *((rsp + 7));
        edx = 0xe587b31f;
        if (dl != 0) {
            edx = esi;
        }
        if (al == 0) {
            edx = ecx;
        }
        if (edx == 0xe587b31f) {
            goto label_1;
        }
INVALID_JUMP;
    } while (edx == 0x4e43466e);
    if (edx != 0xe1efa77f) {
label_1:
        r15 = *((rsp + 8));
        memcpy (*((rsp + 8)), r14, rbx);
        rax = r15;
        return rax;
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40ca80 */
#include <stdint.h>
 
uint64_t dbg_xalloc_die (void) {
    /* void xalloc_die(); */
    ebx = *(obj.exit_failure);
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (ebx, 0, 0x40e355);
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x40cab0 */
#include <stdint.h>
 
uint64_t dbg_rpl_mbrtowc (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, size_t n, mbstate_t * ps, size_t ret, char const * s) {
    int64_t var_ch;
    int64_t var_10h;
    size_t var_18h;
    wchar_t * pwc;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r12 = n;
    r14 = ps;
    rax = ret;
    r15 = s;
    /* size_t rpl_mbrtowc(wchar_t * pwc,char const * s,size_t n,mbstate_t * ps); */
    r14 = rcx;
    r12 = rdx;
    r15 = rsi;
    rbx = rdi;
    rax = rsp + 0xc;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x10));
    eax = 0x5d816138;
    if (rbx != 0) {
    }
    ecx = 0xc952e69a;
    *(rsp) = rax;
    goto label_3;
label_2:
    *(rsp) = rax;
    rdx = r13;
    goto label_3;
label_1:
    ecx = 0x5d816138;
    rdx = rsp + 0xc;
    do {
label_3:
        eax = ecx;
        r13 = rdx;
        rdx = rbx;
        ecx = ebp;
    } while (eax == 0xc952e69a);
    while (eax == 0xfda46465) {
        edi = 0;
        al = hard_locale ();
        eax = 0x228608cf;
        ecx = 0xa6e85ca5;
        if (al != 0) {
            eax = ecx;
        }
        if (eax <= 0xfda46464) {
            goto label_4;
        }
INVALID_JUMP;
    }
    if (eax != 0x5d816138) {
        goto label_5;
    }
    *((rsp + 0x20)) = r13;
    rax = mbrtowc (*((rsp + 0x20)), r15, r12, r14);
    *((rsp + 0x18)) = rax;
    rax = *((rsp + 0x18));
    eax = 0xa6e85ca5;
    ecx = 0xfda46465;
    if (rax > 0xfffffffffffffffd) {
        eax = ecx;
    }
    ecx = 0xa6e85ca5;
    if (r12 == 0) {
        eax = ecx;
    }
    if (eax > 0xfda46464) {
        goto label_0;
    }
label_4:
    if (eax == 0x966325da) {
        goto label_1;
    }
    if (eax == 0xa6e85ca5) {
        ecx = 0xf5f7e787;
        rax = *((rsp + 0x18));
        goto label_2;
label_5:
        if (eax != 0x228608cf) {
            goto label_6;
        }
        eax = *(r15);
        rcx = *((rsp + 0x20));
        *(rcx) = eax;
        ecx = 0xf5f7e787;
        eax = 1;
        goto label_2;
    }
    if (eax == 0xf5f7e787) {
        rax = *((rsp + 0x10));
        rax = *(rsp);
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40cc20 */
#include <stdint.h>
 
int32_t dbg_c_strcasecmp (int32_t c, unsigned char const * p1, unsigned char const * p2) {
    rdx = c;
    rdi = p1;
    rsi = p2;
    /* int c_strcasecmp(char const * s1,char const * s2); */
    r10d = 0xf4050509;
    r9d = 0x37f169c9;
    if (rdi != rsi) {
        r10d = r9d;
    }
    r8d = 0xaee959f4;
    goto label_4;
label_3:
    eax = 0;
label_4:
    rcx = r14;
    rbx = r11;
    goto label_5;
label_0:
    rcx = *((rsp - 0x10));
    rcx++;
    rbx = *((rsp - 8));
    rbx++;
    edx = *((rsp - 0x15));
    ebp = *((rsp - 0x14));
    if (ebp == edx) {
    }
    do {
label_5:
        edx = ebp;
        r11 = rbx;
        r14 = rcx;
        rcx = rdi;
        rbx = rsi;
    } while (edx == 0xfb74fa9e);
    goto label_1;
label_2:
    *((rsp - 0x15)) = dl;
    ecx = (int32_t) cl;
    *((rsp - 0x14)) = ecx;
    edx = 0x4c9291c6;
    if (*((rsp - 0x14)) == 0) {
        edx = r8d;
    }
label_1:
    if (edx <= 0x37f169c8) {
        goto label_6;
    }
    if (edx == 0x7fe82863) {
        goto label_7;
    }
    if (edx == 0x4c9291c6) {
        goto label_0;
    }
    if (edx != 0x37f169c9) {
        goto label_1;
    }
    *((rsp - 0x10)) = r14;
    *((rsp - 8)) = r11;
    rcx = *((rsp - 0x10));
    edx = *(rcx);
    ebx = rdx - 0x41;
    ecx = rdx + 0x20;
    if (ebx >= 0x1a) {
        ecx = edx;
    }
    rdx = *((rsp - 8));
    edx = *(rdx);
    ebx = edx;
    ebx += 0xffffffbf;
    if (ebx >= 0x1a) {
        goto label_2;
    }
    dl += 0x20;
    goto label_2;
label_6:
    if (edx == 0xaee959f4) {
        goto label_8;
    }
    if (edx != 0xf4050509) {
        goto label_1;
    }
    goto label_3;
label_8:
    ecx = *((rsp - 0x15));
    eax = *((rsp - 0x14));
    eax -= ecx;
    goto label_4;
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40cd70 */
#include <stdint.h>
 
uint64_t dbg_close_stream (FILE * __stream, int64_t arg1) {
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    rbx = __stream;
    rdi = arg1;
    /* int close_stream(FILE * stream); */
    rbx = rdi;
    rax = fpending ();
    *(rsp + 6) = (rax != 0) ? 1 : 0;
    al = *((rsp + 6));
    al = *(rbx);
    al >>= 5;
    al &= 1;
    *((rsp + 7)) = al;
    al = *((rsp + 7));
    eax = rpl_fclose (rbx);
    *(rsp + 5) = (eax != 0) ? 1 : 0;
    al = *((rsp + 5));
    eax = 0xcd1448c1;
    r14d = 0xdb1d488c;
    r15d = 0x26c0a95c;
    if (eax > 0x26c0a95b) {
        goto label_1;
    }
    goto label_2;
label_3:
    eax = 0x2eeb6774;
    ebx = 0;
    do {
label_0:
        if (eax <= 0x26c0a95b) {
            goto label_2;
        }
label_1:
        if (eax > 0x44a9427c) {
            goto label_4;
        }
        if (eax == 0x26c0a95c) {
            goto label_5;
        }
        if (eax == 0x42aca365) {
            goto label_6;
        }
    } while (eax != 0x2eeb6774);
    goto label_7;
label_4:
    if (eax == 0x44a9427d) {
        goto label_8;
    }
    if (eax != 0x74ba9d4e) {
        goto label_0;
    }
    errno_location ();
    *(rax) = 0;
    eax = 0x26c0a95c;
    if (eax > 0x26c0a95b) {
        goto label_1;
    }
    goto label_2;
label_5:
    eax = 0x2eeb6774;
    ebx = 0xffffffff;
    if (eax > 0x26c0a95b) {
        goto label_1;
    }
    goto label_2;
label_6:
    rax = errno_location ();
    eax = 0xf72e4fd2;
    goto label_9;
label_8:
    eax = *((rsp + 5));
    eax = 0x74ba9d4e;
    if (al != 0) {
        eax = r15d;
    }
    if (eax > 0x26c0a95b) {
        goto label_1;
    }
label_2:
    if (eax > 0xdb1d488b) {
        goto label_10;
    }
    if (eax == 0xcd1448c1) {
        goto label_11;
    }
    if (eax != 0xd75a892d) {
        goto label_0;
    }
    eax = *((rsp + 5));
    eax = 0xf72e4fd2;
    if (al != 0) {
        eax = r14d;
    }
    if (eax > 0x26c0a95b) {
        goto label_1;
    }
    goto label_2;
label_10:
    if (eax == 0xdb1d488c) {
        goto label_12;
    }
    if (eax != 0xf72e4fd2) {
        goto label_0;
    }
    goto label_3;
label_11:
    al = *((rsp + 7));
    eax = 0xd75a892d;
    goto label_9;
label_12:
    al = *((rsp + 6));
    eax = 0x42aca365;
    if (al != 0) {
label_9:
        eax = ebp;
    }
    if (eax > 0x26c0a95b) {
        goto label_1;
    }
    goto label_2;
label_7:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40cf10 */
#include <stdint.h>
 
uint64_t dbg_hard_locale (int32_t category, char const * p) {
    char * s1;
    rdi = category;
    rax = p;
    /* _Bool hard_locale(int category); */
    ebx = 0;
    rax = setlocale (rdi, 0);
    *((rsp + 8)) = rax;
    eax = 0x449b0a96;
    r14d = 0x3fe9c105;
    if (eax != 0x449b0a96) {
        goto label_2;
    }
    do {
label_0:
        eax = 0xa279131b;
        if (*((rsp + 8)) != 0) {
            eax = r14d;
        }
        bl = 1;
    } while (eax == 0x449b0a96);
    goto label_2;
label_1:
    eax = 0xa279131b;
    ebx = 0;
    if (eax != 0x449b0a96) {
        goto label_2;
    }
    goto label_0;
    do {
        eax = strcmp (*((rsp + 8)), 0x40e840);
        eax = 0x76cef87b;
        if (eax == 0) {
            eax = ebp;
        }
label_2:
        if (eax > 0x5b14a3f0) {
            goto label_3;
        }
    } while (eax == 0x3fe9c105);
    goto label_4;
label_3:
    if (eax == 0x5b14a3f1) {
        goto label_1;
    }
    if (eax != 0x76cef87b) {
        goto label_5;
    }
    eax = strcmp (*((rsp + 8)), "POSIX");
    eax = 0xa279131b;
    if (eax == 0) {
        eax = ebp;
    }
    bl = 1;
    if (eax != 0x449b0a96) {
        goto label_2;
    }
    goto label_0;
label_4:
    if (eax == 0xa279131b) {
        al = (bl != 0) ? 1 : 0;
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40d000 */
#include <stdint.h>
 
uint64_t dbg_locale_charset (char const * codeset) {
    rax = codeset;
    /* char const * locale_charset(); */
    rax = nl_langinfo (0xe);
    ecx = 0x40e096;
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
/* nostrip @ 0x40d030 */
#include <stdint.h>
 
uint64_t dbg_rpl_fclose (int64_t arg1, int32_t fd, FILE * fp, int32_t result) {
    int64_t var_4h;
    rdi = arg1;
    rax = fd;
    rbx = fp;
    r15 = result;
    /* int rpl_fclose(FILE * fp); */
    rbx = rdi;
    eax = fileno (rdi);
    *((rsp + 4)) = eax;
    eax = 0x867556c5;
    r13d = 0x8ee0d759;
    r15d = 0x92402e32;
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
    goto label_3;
label_2:
    eax = 0x52f17c63;
    r14d = ebp;
    do {
label_0:
        if (eax > 0xd5962b7a) {
            goto label_3;
        }
label_1:
        if (eax <= 0x92402e31) {
            goto label_5;
        }
        if (eax == 0x92402e32) {
            goto label_6;
        }
        if (eax == 0xa8dfa205) {
            goto label_7;
        }
    } while (eax != 0xd52ea08d);
    rdi = rbx;
    eax = freading ();
    eax = 0x42677c44;
    ecx = 0xd5962b7b;
    goto label_4;
label_5:
    if (eax == 0x867556c5) {
        goto label_8;
    }
    if (eax != 0x8ee0d759) {
        goto label_0;
    }
    rax = errno_location ();
    r12d = *(rax);
    eax = 0x79a6ed09;
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
    goto label_3;
label_6:
    errno_location ();
    ecx = *(rsp);
    *(rax) = ecx;
    eax = 0x3bf7039;
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
    goto label_3;
label_7:
    eax = fclose (rbx);
    r14d = eax;
    eax = 0x52f17c63;
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
    goto label_3;
label_8:
    eax = *((rsp + 4));
    eax >>= 0x1f;
    eax &= 0xd3b10178;
    eax += 0xd52ea08d;
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
    goto label_3;
    if (eax != 0xd5962b7a) {
label_4:
        eax = ecx;
    }
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
label_3:
    if (eax <= 0x42677c43) {
        goto label_9;
    }
    if (eax == 0x42677c44) {
        goto label_10;
    }
    if (eax == 0x79a6ed09) {
        goto label_11;
    }
    if (eax != 0x52f17c63) {
        goto label_0;
    }
    goto label_12;
label_9:
    if (eax == 0xd5962b7b) {
        goto label_13;
    }
    if (eax != 0x3bf7039) {
        goto label_0;
    }
    goto label_2;
label_10:
    eax = rpl_fflush (rbx);
    eax = 0x79a6ed09;
    if (eax != 0) {
        eax = r13d;
    }
    r12d = 0;
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
    goto label_3;
label_11:
    *(rsp) = r12d;
    eax = fclose (rbx);
    eax = 0x3bf7039;
    if (*(rsp) != 0) {
        eax = r15d;
    }
    if (eax <= 0xd5962b7a) {
        goto label_1;
    }
    goto label_3;
label_13:
    eax = fileno (rbx);
    r12d = 0;
    esi = 0;
    edx = 1;
    edi = eax;
    rax = lseek ();
    eax = 0x79a6ed09;
    ecx = 0x42677c44;
    goto label_4;
label_12:
    eax = r14d;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40d220 */
#include <stdint.h>
 
int32_t dbg_rpl_fflush (int64_t arg1, FILE * fp) {
    uint32_t var_4h;
    rdi = arg1;
    rbx = fp;
    /* int rpl_fflush(FILE * stream); */
    rbx = rdi;
    eax = 0x4a84d7f1;
    if (rbx == 0) {
    }
    eax = 0x69b81609;
    r15d = 0x100;
    r12d = 0x91fdf10c;
    r13d = 0xabb1dbe7;
    goto label_2;
label_0:
    rdi = rbx;
    eax = freading ();
    eax = 0x4a84d7f1;
    eax = r13d;
    while (ecx == 0x69b81609) {
label_2:
        ecx = eax;
        if (ecx <= 0x69b81608) {
            if (ecx == 0x848b603b) {
                goto label_3;
            }
            if (ecx == 0xabb1dbe7) {
                goto label_4;
            }
            if (ecx == 0x4a84d7f1) {
                goto label_5;
            }
            goto label_6;
        }
        eax = ebp;
    }
    if (ecx == 0x71c494b2) {
        goto label_0;
    }
    goto label_6;
label_4:
    eax = *(rbx);
    eax &= r15d;
    *((rsp + 4)) = eax;
    eax = 0xdc522a8;
    if (eax != 0x91fdf10c) {
        goto label_7;
    }
    do {
label_1:
        rpl_fseeko (rbx, 0, 1, rcx, r8, r9);
        eax = 0x44a8e893;
    } while (eax == 0x91fdf10c);
    do {
label_7:
        if (eax != 0xdc522a8) {
            goto label_8;
        }
        eax = 0x44a8e893;
        if (*((rsp + 4)) != 0) {
            eax = r12d;
        }
    } while (eax != 0x91fdf10c);
    goto label_1;
label_8:
    if (eax == 0x44a8e893) {
label_5:
        eax = fflush (rbx);
        r14d = eax;
        eax = 0x848b603b;
        goto label_2;
INVALID_JUMP;
    }
label_3:
    eax = r14d;
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40d360 */
#include <stdint.h>
 
int64_t dbg_rpl_fseeko (int64_t arg_8h, int64_t arg_10h, uint32_t arg_20h, int64_t arg_28h, uint32_t arg_48h, int64_t arg_90h, int64_t arg1, int64_t arg2, int64_t arg3, off_t offset, off_t pos, int32_t whence) {
    FILE * fp;
    int64_t var_8h;
    uint32_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = offset;
    rax = pos;
    r14 = whence;
    /* int rpl_fseeko(FILE * fp,off_t offset,int whence); */
    r14d = edx;
    r15 = rsi;
    rax = *((rbp + 0x10));
    *((rsp + 8)) = rax;
    rax = *((rbp + 8));
    *((rsp + 0x10)) = rax;
    eax = 0xca0d29dc;
    r13d = 0x2e37a2ad;
    if (eax <= 0xf8f3252f) {
        goto label_1;
    }
    goto label_2;
    do {
        rdi = rbp;
        rsi = r15;
        edx = r14d;
        eax = fseeko ();
        r12d = eax;
        eax = 0x9014123a;
label_0:
        if (eax > 0xf8f3252f) {
            goto label_2;
        }
label_1:
        if (eax > 0xca0d29db) {
            goto label_3;
        }
        if (eax == 0x948a853a) {
            goto label_4;
        }
    } while (eax == 0xb77fc703);
    if (eax != 0x9014123a) {
        goto label_0;
    }
    goto label_5;
label_3:
    if (eax == 0xca0d29dc) {
        goto label_6;
    }
    if (eax != 0xd2aaca0c) {
        goto label_0;
    }
    eax = 0x948a853a;
    ebx = 0xffffffff;
    if (eax <= 0xf8f3252f) {
        goto label_1;
    }
    goto label_2;
label_4:
    eax = 0x9014123a;
    r12d = ebx;
    if (eax <= 0xf8f3252f) {
        goto label_1;
    }
    goto label_2;
label_6:
    rax = *((rsp + 8));
    eax = 0xb77fc703;
    ecx = 0x348abb6c;
    goto label_7;
label_2:
    if (eax > 0x348abb6b) {
        goto label_8;
    }
    if (eax == 0xf8f32530) {
        goto label_9;
    }
    if (eax != 0x2e37a2ad) {
        goto label_0;
    }
    eax = 0xb77fc703;
    ecx = 0xf8f32530;
    goto label_7;
label_8:
    if (eax == 0x348abb6c) {
        goto label_10;
    }
    if (eax != 0x67e73762) {
        goto label_0;
    }
    *(rbp) &= 0xef;
    rax = *(rsp);
    *((rbp + 0x90)) = rax;
    eax = 0x948a853a;
    ebx = 0;
    if (eax <= 0xf8f3252f) {
        goto label_1;
    }
    goto label_2;
label_9:
    eax = fileno (rbp);
    edi = eax;
    rsi = r15;
    edx = r14d;
    rax = lseek ();
    *(rsp) = rax;
    rax = *(rsp);
    eax = 0x67e73762;
    ecx = 0xd2aaca0c;
    if (rax == -1) {
label_7:
        eax = ecx;
    }
    if (eax <= 0xf8f3252f) {
        goto label_1;
    }
    goto label_2;
label_10:
    rax = *((rbp + 0x28));
    eax = 0xb77fc703;
    if (rax == *((rbp + 0x20))) {
        eax = r13d;
    }
    if (eax <= 0xf8f3252f) {
        goto label_1;
    }
    goto label_2;
label_5:
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40d520 */
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
/* nostrip @ 0x40d590 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x40d5a0 */
#include <stdint.h>
 
void atexit (void) {
    rdx = *(obj.__dso_handle);
    esi = 0;
    return cxa_atexit ();
}
