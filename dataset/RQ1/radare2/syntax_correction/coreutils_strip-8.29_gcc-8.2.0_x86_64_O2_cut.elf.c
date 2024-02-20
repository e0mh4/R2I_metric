#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x401a40 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    rdi = argc;
    rsi = argv;
    r14 = 0xffffffffffffffff;
    r12d = 0;
    rdi = *(rsi);
    rbx = rsi;
    fcn_00403790 (*(rdi));
    setlocale (6, 0x409507);
    bindtextdomain (0x4075d9, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x4075d9, rsi);
    edi = 0x4031d0;
    fcn_004074f0 ();
    *(0x0060b313) = 0;
    *(0x0060b314) = 0;
    *(0x0060b311) = 0;
    *(0x0060b2fa) = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x407fa0;
        edx = "b:c:d:f:nsz";
        rsi = rbx;
        edi = ebp;
        eax = fcn_00406ac0 ();
        if (eax == 0xffffffff) {
            goto label_5;
        }
        if (eax == 0x66) {
            goto label_6;
        }
        if (eax <= 0x66) {
            goto label_7;
        }
        if (eax == 0x7a) {
            goto label_8;
        }
        if (eax > 0x7a) {
            goto label_9;
        }
    } while (eax == 0x6e);
    if (eax != 0x73) {
        goto label_10;
    }
    *(0x0060b313) = 1;
    goto label_0;
label_7:
    if (eax <= 0x63) {
        if (eax >= 0x62) {
            goto label_11;
        }
        if (eax == 0xffffff7d) {
            eax = 0;
            rcx = *(str_8_29);
            r9d = "David MacKenzie";
            r8d = "David M. Ihnat";
            fcn_00405830 (*(obj.stdout), 0x40755b, "GNU coreutils");
            eax = exit (0);
label_9:
            if (eax == 0x80) {
                rdx = imp.__libc_start_main;
                *(0x0060b310) = 1;
                eax = 1;
                if (*(rdx) != 0) {
                    eax = 0;
                    rcx = r14;
                    rdi = rdx;
                    __asm ("repne scasb al, byte [rdi]");
                    rax = rcx;
                    rax = ~rax;
                    rax--;
                }
                *(0x0060b308) = rax;
                rax = fcn_00405ba0 (rdx);
                *(0x0060b300) = rax;
                goto label_0;
            }
            if (eax != 0x81) {
                goto label_10;
            }
            *(0x0060b312) = 1;
            goto label_0;
        }
        if (eax != 0xffffff7e) {
            goto label_10;
        }
        eax = fcn_004026b0 (0);
    }
    if (eax != 0x64) {
        goto label_10;
    }
    rdx = imp.__libc_start_main;
    eax = *(rdx);
    if (al != 0) {
        if (*((rdx + 1)) != 0) {
            goto label_12;
        }
    }
    *(0x0060b311) = al;
    r12d = 1;
    goto label_0;
label_11:
    edx = imp.__libc_start_main;
    if (edx != 0) {
        goto label_13;
    }
    *(0x0060b314) = 1;
    r13 = imp.__libc_start_main;
    goto label_0;
label_6:
    eax = imp.__libc_start_main;
    if (eax != 0) {
        goto label_13;
    }
    *(0x0060b314) = 2;
    r13 = imp.__libc_start_main;
    goto label_0;
label_8:
    *(0x0060b230) = 0;
    goto label_0;
label_5:
    eax = imp.__libc_start_main;
    edx = 5;
    esi = "you must specify a list of bytes, characters, or fields";
    if (eax == 0) {
        goto label_4;
    }
    dl = (eax != 2) ? 1 : 0;
    if (eax != 2) {
        if (r12b != 0) {
            goto label_14;
        }
    }
    if ((*(0x0060b313) & dl) != 0) {
        goto label_15;
    }
    sil = (eax != 2) ? 1 : 0;
    esi <<= 2;
    eax -= eax;
    eax = ~eax;
    eax &= 2;
    esi |= eax;
    fcn_00402bd0 (r13, 0, rdx);
    if (r12b == 0) {
        *(0x0060b311) = 9;
    }
    if (*(0x0060b300) == 0) {
        goto label_16;
    }
label_2:
    eax = *(0x0060b2bc);
    if (eax == ebp) {
        goto label_17;
    }
    r12d = 1;
    if (eax >= ebp) {
        goto label_3;
    }
    do {
        rax = (int64_t) eax;
        eax = fcn_00401ee0 (*((rbx + rax*8)));
        r12d &= eax;
        eax = *(0x0060b2bc);
        eax++;
        *(0x0060b2bc) = eax;
    } while (eax < ebp);
label_3:
    while (eax != 0) {
label_1:
        r12d ^= 1;
        eax = (int32_t) r12b;
        return rax;
        eax = fcn_00405c20 (*(obj.stdin));
        eax++;
    }
    rax = errno_location ();
    r12d = 0;
    eax = 0;
    error (0, *(rax), 0x4094ea);
    goto label_1;
label_16:
    eax = *(0x0060b311);
    *(0x0060b2f9) = 0;
    *(0x0060b300) = 0x60b2f8;
    *(0x0060b2f8) = al;
    *(0x0060b308) = 1;
    goto label_2;
label_17:
    eax = fcn_00401ee0 (0x4094ea);
    r12d = eax;
    goto label_3;
label_13:
    edx = 5;
    do {
label_4:
        rax = dcgettext (0, "only one type of list may be specified");
        eax = 0;
        error (0, 0, rax);
label_10:
        fcn_004026b0 (1);
label_12:
        edx = 5;
        esi = "the delimiter must be a single character";
    } while (1);
label_15:
    edx = 5;
    esi = "suppressing non-delimited lines makes sense\n\tonly when operating on fields";
    goto label_4;
label_14:
    edx = 5;
    esi = "an input delimiter may be specified only when operating on fields";
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x401e2b */
#include <stdint.h>
 
int32_t fcn_00401e2b (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x401e81 */
#include <stdint.h>
 
int64_t fcn_00401e81 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060b2e8) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x60ae48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060b2f0) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00401e2b ();
    *(0x0060b2e8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x401ed8 */
#include <stdint.h>
 
int64_t fcn_00401ed8 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x401ee0 */
#include <stdint.h>
 
void fcn_00401ee0 (int64_t arg1) {
    int64_t var_bh;
    int64_t var_ch;
    rdi = arg1;
    rsi = rdi;
    ecx = 2;
    r14 = rdi;
    edi = 0x4094ea;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (unknown > unknown) ? 1 : 0;
    if (al != 0) {
        goto label_25;
    }
    *(0x0060b2fa) = 1;
    r13 = stdin;
label_15:
    fcn_00403280 (r13, 2);
    rax = imp.__libc_start_main;
    *(0x0060b328) = rax;
    if (*(0x0060b314) == 1) {
        goto label_26;
    }
    rax = *((r13 + 8));
    if (rax >= *((r13 + 0x10))) {
        goto label_27;
    }
    rdx = rax + 1;
    *((r13 + 8)) = rdx;
    edi = *(rax);
label_5:
    ebx = 1;
    ungetc (rdi, r13);
    rax = imp.__libc_start_main;
    r15b = (*(rax) > 1) ? 1 : 0;
    r15b ^= *(0x0060b313);
    ebp = 0;
    edx = 0;
    *((rsp + 0xb)) = r15b;
label_6:
    r12b = (rbx == 1) ? 1 : 0;
    r12b &= *((rsp + 0xb));
    if (r12b != 0) {
        goto label_28;
    }
label_3:
    rax = imp.__libc_start_main;
    r12d = edx;
label_10:
    if (*(rax) > rbx) {
        goto label_29;
    }
    if (bpl == 0) {
        goto label_30;
    }
    rcx = stdout;
    rdx = imp.__libc_start_main;
    esi = 1;
    rdi = imp.__libc_start_main;
    rax = fwrite_unlocked ();
    while (rax < *((r13 + 0x10))) {
        rdx = rax + 1;
        *((r13 + 8)) = rdx;
        ebp = *(rax);
label_0:
        edx = *(0x0060b311);
        eax = *(0x0060b230);
        ecx = edx;
        edi = edx;
        r15d = edx;
        if (ebp == edx) {
            goto label_31;
        }
        edx = (int32_t) al;
        if (ebp == edx) {
            goto label_32;
        }
        if (ebp == 0xffffffff) {
            goto label_33;
        }
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_34;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = bpl;
label_2:
        r12d = ebp;
label_30:
        rax = *((r13 + 8));
    }
    rdi = r13;
    eax = uflow ();
    goto label_0;
    do {
        rdx = rax + 1;
        *((r13 + 8)) = rdx;
        r15d = *(rax);
label_1:
        edx = *(0x0060b311);
        eax = *(0x0060b230);
        ecx = edx;
        edi = edx;
        if (edx == r15d) {
            goto label_35;
        }
        edx = (int32_t) al;
        if (r15d == edx) {
            goto label_36;
        }
        if (r15d == 0xffffffff) {
            goto label_37;
        }
        r12d = r15d;
label_29:
        rax = *((r13 + 8));
    } while (rax < *((r13 + 0x10)));
    rdi = r13;
    eax = uflow ();
    r15d = eax;
    goto label_1;
label_34:
    esi = (int32_t) bpl;
    al = overflow ();
    goto label_2;
label_33:
label_37:
    edi = ecx;
    r9d = ebp;
    esi = (int32_t) al;
    edx = 0xffffffff;
    ecx = 0;
label_8:
    if (r9b == 0) {
        if (*(0x0060b313) != 1) {
            goto label_38;
        }
        if (rbx == 1) {
            goto label_13;
        }
    }
label_38:
    r8b = (esi != r12d) ? 1 : 0;
    dil = (dil == al) ? 1 : 0;
    r8b |= dil;
    if (r8b == 0) {
        if (cl == 0) {
            goto label_18;
        }
    }
    rdi = stdout;
    rcx = *((rdi + 0x28));
    if (rcx >= *((rdi + 0x30))) {
        goto label_39;
    }
    rsi = rcx + 1;
    *((rdi + 0x28)) = rsi;
    *(rcx) = al;
label_13:
    if (bpl != 0) {
        goto label_18;
    }
    rax = imp.__libc_start_main;
    *(0x0060b328) = rax;
label_4:
    ebx = 1;
    r12b = (rbx == 1) ? 1 : 0;
    r12b &= *((rsp + 0xb));
    if (r12b == 0) {
        goto label_3;
    }
label_28:
    r9d = *(0x0060b230);
    r8d = *(0x0060b311);
    rax = fcn_004032b0 (0x60b320, 0x60b318, 0, 0xffffffffffffffff, r8, r9);
    rbx = rax;
    if (rbx < 0) {
        goto label_40;
    }
    if (rbx == 0) {
        goto label_41;
    }
    rdi = imp.__libc_start_main;
    rdx = rbx - 1;
    eax = *(0x0060b311);
    if (*((rdi + rbx - 1)) == al) {
        goto label_42;
    }
    if (*(0x0060b313) != 0) {
        goto label_43;
    }
    rcx = stdout;
    rdx = rbx;
    esi = 1;
    fwrite_unlocked ();
    rax = imp.__libc_start_main;
    edx = *(0x0060b230);
    eax = *((rax + rbx - 1));
    if (eax == edx) {
        goto label_4;
    }
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_44;
    }
    rsi = rax + 1;
    *((rdi + 0x28)) = rsi;
    *(rax) = dl;
    goto label_4;
label_27:
    rdi = r13;
    eax = uflow ();
    edi = eax;
    if (eax != 0xffffffff) {
        goto label_5;
    }
label_18:
    eax = *(r13);
label_19:
    if ((al & 0x20) != 0) {
        goto label_45;
    }
    edi = 0x4094ea;
    ecx = 2;
    rsi = r14;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    rdi = r13;
    al = ((al & 0x20) > 0) ? 1 : 0;
    if (al == 0) {
        goto label_46;
    }
    eax = fcn_00405c20 (rdi);
    edx = eax;
    eax = 1;
    if (edx == 0xffffffff) {
        goto label_45;
    }
    return;
label_32:
label_36:
    ecx = (int32_t) cl;
    edi = ecx;
    if (*(0x0060b230) == cl) {
        goto label_47;
    }
label_11:
    if (edx != ecx) {
        goto label_48;
    }
label_7:
    rax = imp.__libc_start_main;
    rbx++;
    if (rbx <= *((rax + 8))) {
        goto label_6;
    }
    rax += 0x10;
    *(0x0060b328) = rax;
    goto label_6;
label_31:
label_35:
    if (al == cl) {
        goto label_49;
    }
    ecx = edx;
    edx = r15d;
    if (edx == ecx) {
        goto label_7;
    }
label_48:
    eax = *(0x0060b230);
    r8b = (edx == 0xffffffff) ? 1 : 0;
label_9:
    esi = (int32_t) al;
    cl = (esi == edx) ? 1 : 0;
    if (r8b != 0) {
        goto label_50;
    }
    if (cl == 0) {
        goto label_6;
    }
label_50:
    r9d = ebp;
    goto label_8;
label_43:
    ebx = 1;
    edx = 0;
    goto label_6;
label_47:
    r8d = 0;
    goto label_9;
label_42:
    rax = imp.__libc_start_main;
    while (1) {
label_22:
        if (*((rax + 8)) <= 1) {
            rax += 0x10;
            ebx = 2;
            r12d = 0;
            *(0x0060b328) = rax;
            goto label_10;
label_49:
            rax = *((r13 + 8));
            if (rax >= *((r13 + 0x10))) {
                goto label_51;
            }
            rdx = rax + 1;
            *((r13 + 8)) = rdx;
            edx = *(rax);
label_12:
            ungetc (edx, r13);
            ecx = *(0x0060b311);
            edx = r15d;
            edi = ecx;
            goto label_11;
        }
        ebx = 2;
        r12d = 0;
        goto label_10;
        rcx = stdout;
        esi = 1;
        fwrite_unlocked ();
        eax = *(0x0060b230);
        if (*(0x0060b311) == al) {
            goto label_52;
        }
label_14:
        rax = imp.__libc_start_main;
    }
label_51:
    rdi = r13;
    eax = uflow ();
    edx = eax;
    if (eax != 0xffffffff) {
        goto label_12;
    }
    esi = *(0x0060b230);
    r9d = ebp;
    edi = *(0x0060b311);
    ecx = 0;
    eax = esi;
    goto label_8;
label_46:
    clearerr_unlocked ();
    eax = 1;
    return;
label_39:
    *((rsp + 0xc)) = edx;
    overflow ();
    edx = *((rsp + 0xc));
    goto label_13;
label_52:
    rax = *((r13 + 8));
    if (rax >= *((r13 + 0x10))) {
        goto label_53;
    }
    rdx = rax + 1;
    *((r13 + 8)) = rdx;
    eax = *(rax);
label_21:
    ungetc (eax, r13);
    goto label_14;
label_25:
    rax = fopen (r14, 0x40764e);
    r13 = rax;
    if (rax != 0) {
        goto label_15;
    }
label_45:
    rdx = r14;
    rax = fcn_00405230 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    eax = error (0, *(rax), 0x4082a6);
    eax = 0;
    return;
label_26:
    ebx = 0;
    r12d = 0;
    do {
label_20:
        rax = *((r13 + 8));
        if (rax >= *((r13 + 0x10))) {
            goto label_54;
        }
label_16:
        rdx = rax + 1;
        esi = *(0x0060b230);
        *((r13 + 8)) = rdx;
        ebp = *(rax);
        if (ebp == esi) {
            goto label_55;
        }
label_17:
        rax = imp.__libc_start_main;
        rbx++;
        if (rbx > *((rax + 8))) {
            rax += 0x10;
            *(0x0060b328) = rax;
        }
        rax = *(rax);
    } while (rbx < rax);
    edx = *(0x0060b310);
    rdi = stdout;
    if (dl != 0) {
        al = (rbx == rax) ? 1 : 0;
        r12b &= al;
        if (r12b != 0) {
            goto label_56;
        }
        r12d = edx;
    }
label_24:
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_57;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = bpl;
    rax = *((r13 + 8));
    if (rax < *((r13 + 0x10))) {
        goto label_16;
    }
label_54:
    rdi = r13;
    eax = uflow ();
    esi = *(0x0060b230);
    if (ebp == esi) {
        goto label_55;
    }
    if (ebp != 0xffffffff) {
        goto label_17;
    }
    if (rbx == 0) {
        goto label_18;
    }
    rdi = stdout;
    rdx = *((rdi + 0x28));
    if (rdx >= *((rdi + 0x30))) {
        goto label_58;
    }
    rcx = rdx + 1;
    *((rdi + 0x28)) = rcx;
    *(rdx) = sil;
    eax = *(r13);
    goto label_19;
label_55:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_59;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = sil;
label_23:
    rax = imp.__libc_start_main;
    ebx = 0;
    r12d = 0;
    *(0x0060b328) = rax;
    goto label_20;
label_40:
    free (*(0x0060b320));
    eax = *(r13);
    *(0x0060b320) = 0;
    if ((al & 0x30) != 0) {
        goto label_19;
    }
    fcn_00405bc0 ();
label_53:
    rdi = r13;
    eax = uflow ();
    if (eax != 0xffffffff) {
        goto label_21;
    }
    rax = imp.__libc_start_main;
    goto label_22;
label_59:
    overflow ();
    goto label_23;
label_57:
    esi = (int32_t) bpl;
    overflow ();
    goto label_20;
label_56:
    rcx = rdi;
    rdx = imp.__libc_start_main;
    rdi = imp.__libc_start_main;
    esi = 1;
    fwrite_unlocked ();
    rdi = stdout;
    goto label_24;
label_44:
    esi = edx;
    overflow ();
    edx = *(0x0060b230);
    goto label_4;
label_58:
    overflow ();
    eax = *(r13);
    goto label_19;
label_41:
    return assert_fail ("n_bytes != 0", "src/cut.c", 0x149, "cut_fields");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x4026b0 */
#include <stdint.h>
 
uint64_t fcn_004026b0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s OPTION.. [FILE]..\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Print selected parts of lines from each FILE to standard output.\n");
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
    rax = dcgettext (0, "  -b, --bytes=LIST        select only these bytes\n  -c, --characters=LIST   select only these characters\n  -d, --delimiter=DELIM   use DELIM instead of TAB for field delimiter\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -f, --fields=LIST       select only these fields;  also print any line\n                            that contains no delimiter character, unless\n                            the -s option is specified\n  -n                      (ignored)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --complement        complement the set of selected bytes, characters\n                            or fields\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -s, --only-delimited    do not print lines not containing delimiters\n      --output-delimiter=STRING  use STRING as the output delimiter\n                            the default is to use the input delimiter\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -z, --zero-terminated    line delimiter is NUL, not newline\n");
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
    rax = dcgettext (0, "\nUse one, and only one of -b, -c or -f.  Each LIST is made up of one\nrange, or many ranges separated by commas.  Selected input is written\nin the same order that it is read, and is written exactly once.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Each range is one of:\n\n  N     N'th byte, character or field, counted from 1\n  N-    from N'th byte, character or field, to end of line\n  N-M   from N'th to M'th (included) byte, character or field\n  -M    from first to M'th (included) byte, character or field\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x40755f;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x4075d9;
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
        esi = 0x40755b;
        ecx = 4;
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
        eax = strncmp (rax, 0x4075e3, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40757b;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x40755b;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x409507;
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
            eax = strncmp (rax, 0x4075e3, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x40755b;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40757b;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x40755b;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x402b00 */
#include <stdint.h>
 
int64_t fcn_00402b00 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    rdx = imp.__libc_start_main;
    rcx = imp.__libc_start_main;
    rax = imp.__libc_start_main;
    while (1) {
        rdi = rdx;
        rdx++;
        rdi <<= 4;
        rax += rdi;
        *(rax) = rbp;
        *((rax + 8)) = rbx;
        *(0x0060b4e8) = rdx;
        return rax;
        if (rax == 0) {
            goto label_1;
        }
        rdx = 0x555555555555554;
        if (rcx > rdx) {
            goto label_2;
        }
        rdx = rcx;
        rdx >>= 1;
        rcx = rcx + rdx + 1;
        rsi = rcx;
        rsi <<= 4;
label_0:
        *(0x0060b338) = rcx;
        rax = fcn_004059d0 (rax, rsi);
        rdx = imp.__libc_start_main;
        *(0x0060b4e0) = rax;
    }
label_1:
    if (rcx == 0) {
        goto label_3;
    }
    rsi = rcx;
    edx = 0;
    rsi >>= 0x3c;
    rsi = rcx;
    dl = (rsi != 0) ? 1 : 0;
    rsi <<= 4;
    if (rsi < 0) {
        goto label_2;
    }
    if (rdx == 0) {
        goto label_0;
    }
label_2:
    fcn_00405bc0 ();
label_3:
    esi = 0x80;
    ecx = 8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x402bd0 */
#include <stdint.h>
 
uint64_t fcn_00402bd0 (int64_t arg1, int64_t arg2, int64_t arg4) {
    uint32_t var_8h;
    int64_t var_sp_10h;
    int64_t var_18h;
    int64_t var_1ch;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    eax = esi;
    r15 = rdi;
    eax &= 1;
    *((rsp + 0x1c)) = esi;
    *((rsp + 0x18)) = eax;
    if (eax != 0) {
        edi = 0x4094ea;
        ecx = 2;
        rsi = r15;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (eax > 0) ? 1 : 0;
        if (al == 0) {
            goto label_13;
        }
    }
    edi = 0;
    ebx = 0;
label_7:
    r12d = 0;
    r14d = 0;
    *((rsp + 8)) = 1;
    while (r13b != 0x2d) {
        if (r13b != 0x2c) {
            *((rsp + 0x10)) = rdi;
            rax = ctype_b_loc ();
            r9d = (int32_t) r13b;
            rdi = *((rsp + 0x10));
            rax = *(rax);
            if ((*((rax + r9*2)) & 1) != 0) {
                goto label_14;
            }
            if (r13b != 0) {
                goto label_15;
            }
        }
label_14:
        if (bpl == 0) {
            goto label_16;
        }
        if (bl != 0) {
            goto label_17;
        }
        if (r14b != 0) {
            goto label_18;
        }
        eax = *((rsp + 0x18));
        if (eax == 0) {
            goto label_19;
        }
        *((rsp + 8)) = 1;
label_5:
        fcn_00402b00 (*((rsp + 8)), 0xffffffffffffffff);
label_6:
        if (*(r15) == 0) {
            goto label_20;
        }
label_1:
        edi = 0;
        r12d = 0;
        ebp = 0;
        r14d = 0;
        ebx = 0;
label_0:
        r15++;
        r13d = *(r15);
    }
    if (bpl != 0) {
        goto label_21;
    }
    cl = (rdi == 0) ? 1 : 0;
    cl &= bl;
    r12d = ecx;
    if (cl != 0) {
        goto label_22;
    }
    if (bl != 0) {
        goto label_23;
    }
    r12d = ebx;
    edi = 0;
    *((rsp + 8)) = 1;
    goto label_0;
label_16:
    if (rdi == 0) {
        goto label_24;
    }
    fcn_00402b00 (rdi, rdi);
    if (*(r15) != 0) {
        goto label_1;
    }
label_20:
    rsi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_25;
    }
    rdi = imp.__libc_start_main;
    ecx = 0x402ae0;
    edx = 0x10;
    r15d = 0;
    qsort ();
    rbx = imp.__libc_start_main;
    r14 = imp.__libc_start_main;
    do {
label_2:
        if (r15 >= rbx) {
            goto label_26;
        }
label_4:
        r15++;
    } while (r15 >= rbx);
    rbp <<= 4;
    r12 = rbp - 0x10;
    rdi = r14 + rbp;
    rdx = r14 + r12;
    rax = *((rdx + 8));
    if (rax < *(rdi)) {
        goto label_2;
    }
    r13 = rbp + 0x10;
label_3:
    if (*((rdi + 8)) >= rax) {
        rax = *((rdi + 8));
    }
    rbx -= r15;
    rbx <<= 4;
    *((rdx + 8)) = rax;
    memmove (rdi, r14 + r13, rbx - 0x10);
    rax = imp.__libc_start_main;
    r14 = imp.__libc_start_main;
    rbx = rax - 1;
    *(0x0060b4e8) = rbx;
    if (rbx <= r15) {
        goto label_2;
    }
    rdx = r14 + r12;
    rdi = r14 + rbp;
    rax = *((rdx + 8));
    if (*(rdi) <= rax) {
        goto label_3;
    }
    if (r15 < rbx) {
        goto label_4;
    }
label_26:
    if ((*((rsp + 0x1c)) & 2) != 0) {
        goto label_27;
    }
label_8:
    rbx++;
    rsi = rbx;
    *(0x0060b4e8) = rbx;
    rsi <<= 4;
    rax = fcn_004059d0 (r14, rsi);
    rdx = imp.__libc_start_main;
    *(0x0060b4e0) = rax;
    rdx <<= 4;
    rax = rax + rdx - 0x10;
    rdx = 0xffffffffffffffff;
    *((rax + 8)) = rdx;
    *(rax) = rdx;
    return rax;
label_17:
    if (r14b == 0) {
        goto label_5;
    }
label_18:
    if (*((rsp + 8)) > rdi) {
        goto label_28;
    }
    fcn_00402b00 (*((rsp + 8)), rdi);
    goto label_6;
label_23:
    *((rsp + 8)) = rdi;
    edi = 0;
    goto label_0;
label_15:
    eax = (int32_t) r13b;
    r9d = rax - 0x30;
    if (r9d > 9) {
        goto label_29;
    }
    if (r12b == 0) {
        goto label_30;
    }
    while (1) {
        ecx = 1;
        if (bpl == 0) {
            ebx = ecx;
        }
        if (bpl != 0) {
            r14d = ebp;
        }
        rcx = 0x1999999999999999;
        if (rdi > rcx) {
            goto label_31;
        }
        eax -= 0x30;
        rcx = rdi * 5;
        rax = (int64_t) eax;
        rax = rax + rcx*2;
        if (rax < rdi) {
            goto label_31;
        }
        if (rax == -1) {
            goto label_31;
        }
        rdi = rax;
        r12d = 1;
        goto label_0;
label_30:
        *(0x0060b330) = r15;
    }
label_13:
    r15++;
    edi = 1;
    ebx = 1;
    goto label_7;
label_27:
    *(0x0060b4e0) = 0;
    rax = *(r14);
    *(0x0060b4e8) = 0;
    *(0x0060b338) = 0;
    if (rax > 1) {
        goto label_32;
    }
label_9:
    r12 = rbx;
    rbp = r14 + 0x10;
    r12 <<= 4;
    r12 += r14;
    if (rbx <= 1) {
        goto label_33;
    }
    do {
        rax = *((rbp - 8));
        rsi = *(rbp);
        rdi = rax + 1;
        if (rdi != rsi) {
            rsi--;
            fcn_00402b00 (rdi, rsi);
        }
        rbp += 0x10;
    } while (r12 != rbp);
label_33:
    rbx <<= 4;
    rax = *((r14 + rbx - 8));
    while (1) {
        free (r14);
        rbx = imp.__libc_start_main;
        r14 = imp.__libc_start_main;
        goto label_8;
        fcn_00402b00 (rax + 1, 0xffffffffffffffff);
    }
label_32:
    fcn_00402b00 (1, rax - 1);
    goto label_9;
label_19:
    edx = 5;
    do {
label_12:
        rax = dcgettext (0, "invalid range with no endpoint: -");
label_10:
        eax = 0;
        error (0, 0, rax);
        fcn_004026b0 (1);
label_31:
        rbx = imp.__libc_start_main;
        rax = strspn (rbx, "0123456789");
        rax = fcn_00405c00 (rbx, rax);
        rdi = rax;
        rbx = rax;
        rax = fcn_004053b0 (rdi);
        edx = 5;
        if ((*((rsp + 0x1c)) & 4) == 0) {
            goto label_34;
        }
        rax = dcgettext (0, "byte/character offset %s is too large");
label_11:
        rcx = rbp;
        eax = 0;
        error (0, 0, rax);
        free (rbx);
        fcn_004026b0 (1);
label_28:
        edx = 5;
        esi = "invalid decreasing range";
    } while (1);
label_22:
    edx = 5;
    if ((*((rsp + 0x1c)) & 4) == 0) {
        goto label_35;
    }
    dcgettext (0, "byte/character positions are numbered from 1");
    goto label_10;
label_21:
    edx = 5;
    if ((*((rsp + 0x1c)) & 4) == 0) {
        goto label_36;
    }
    dcgettext (0, "invalid byte or character range");
    goto label_10;
    do {
label_35:
        dcgettext (0, "fields are numbered from 1");
        goto label_10;
label_36:
        dcgettext (0, "invalid field range");
        goto label_10;
label_24:
        edx = 5;
    } while ((*((rsp + 0x1c)) & 4) == 0);
    dcgettext (rdi, "byte/character positions are numbered from 1");
    goto label_10;
label_34:
    dcgettext (0, "field number %s is too large");
    goto label_11;
label_25:
    edx = 5;
    if ((*((rsp + 0x1c)) & 4) == 0) {
        goto label_37;
    }
    dcgettext (0, "missing list of byte/character positions");
    goto label_10;
label_29:
    rax = fcn_004053b0 (r15);
    edx = 5;
    rbx = rax;
    if ((*((rsp + 0x1c)) & 4) == 0) {
        goto label_38;
    }
    rax = dcgettext (0, "invalid byte/character position %s");
    do {
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        fcn_004026b0 (1);
label_37:
        esi = "missing list of fields";
        goto label_12;
label_38:
        dcgettext (0, "invalid field value %s");
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x403280 */
#include <stdint.h>
 
uint32_t fcn_00403280 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rdi != 0) {
        ebx = esi;
        eax = fileno (rdi);
        ecx = ebx;
        edx = 0;
        esi = 0;
        edi = eax;
invalid_funccall(); //        void (*0x401820)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x4032b0 */
#include <stdint.h>
 
int64_t fcn_004032b0 (int64_t arg_90h, int64_t arg1, int64_t arg2, void * arg3, uint32_t arg5, uint32_t arg6, size_t size) {
    uint32_t var_4h;
    size_t var_8h;
    void * ptr;
    int64_t var_18h;
    uint32_t var_1ch;
    int64_t var_20h;
    void * var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint32_t var_48h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = arg5;
    r9 = arg6;
    rcx = size;
    rax = *(rdi);
    r12 = *(rsi);
    *((rsp + 0x30)) = rdi;
    r14 = *((rsp + 0x90));
    *((rsp + 0x38)) = rsi;
    *((rsp + 0x28)) = rdx;
    *((rsp + 8)) = rcx;
    *((rsp + 4)) = r8d;
    *((rsp + 0x1c)) = r9d;
    *((rsp + 0x10)) = rax;
    if (rax == 0) {
        goto label_10;
    }
label_7:
    if (r12 < *((rsp + 0x28))) {
        goto label_2;
    }
    rbp -= *((rsp + 0x28));
    dl = (rbp == 0) ? 1 : 0;
    al = (r12 >= *((rsp + 8))) ? 1 : 0;
    if ((dl & al) != 0) {
        goto label_2;
    }
    eax = *((rsp + 4));
    if (eax == 0xffffffff) {
        goto label_11;
    }
    ebx = *((rsp + 0x1c));
    if (ebx == 0xffffffff) {
        ebx = eax;
    }
    *((rsp + 0x1c)) = ebx;
label_9:
    rbx = *((rsp + 0x10));
    rbx += *((rsp + 0x28));
    while (rax != 0) {
        r13 = *((rsp + 0x48));
        if (*((rsp + 4)) != 0xffffffff) {
            goto label_12;
        }
label_4:
        rcx = r13 + 1;
        r13d = 0;
label_0:
        rdi = *((rsp + 8));
        if (r12 < rdi) {
            if (rbp < rcx) {
                goto label_13;
            }
        }
label_3:
        if (rbp > 1) {
            rcx = rbp - 1;
            if (*((rsp + 0x48)) <= rcx) {
                rcx = *((rsp + 0x48));
            }
            if (r15 == 0) {
                goto label_14;
            }
            rdx = rcx;
            *((rsp + 0x20)) = rcx;
            memcpy (rbx, r15, rdx);
            rcx = *((rsp + 0x20));
label_1:
            rbx += rcx;
            rbp -= rcx;
        }
        if (r15 != 0) {
            eax = fcn_00406d30 (r14, *((rsp + 0x48)));
            if (eax != 0) {
                goto label_2;
            }
        }
        if (r13b != 0) {
            goto label_15;
        }
        rax = fcn_00405ce0 (r14, rsp + 0x48);
        r15 = rax;
    }
    rax = *((r14 + 8));
    if (rax >= *((r14 + 0x10))) {
        goto label_16;
    }
    rdx = rax + 1;
    *((r14 + 8)) = rdx;
    eax = *(rax);
    *((rsp + 0x18)) = eax;
    do {
        eax = *((rsp + 0x18));
        ecx = 2;
        *((rsp + 0x48)) = 1;
        r13b = (*((rsp + 4)) == eax) ? 1 : 0;
        al = (*((rsp + 0x1c)) == eax) ? 1 : 0;
        r13d |= eax;
        goto label_0;
label_16:
        rdi = r14;
        eax = uflow ();
        *((rsp + 0x18)) = eax;
    } while (eax != 0xffffffff);
    if (rbx != *((rsp + 0x10))) {
        goto label_15;
    }
    do {
label_2:
        rax = *((rsp + 0x30));
        rbx = *((rsp + 0x10));
        *(rax) = rbx;
        rax = *((rsp + 0x38));
        *(rax) = r12;
        rax = 0xffffffffffffffff;
label_6:
        return rax;
label_14:
        eax = *((rsp + 0x18));
        *(rbx) = al;
        goto label_1;
label_13:
        rax = r12 + 0x40;
        rdx = r12 + r12;
        if (r12 <= 0x3f) {
            rdx = rax;
        }
        rbx -= *((rsp + 0x10));
        rax = rbx + rcx;
        rsi = rdx;
        rsi -= rbx;
        if (rsi < rcx) {
            rdx = rax;
        }
        if (r12 >= rdx) {
            goto label_17;
        }
        if (rdx > rdi) {
            goto label_17;
        }
label_5:
        rax = *((rsp + 0x28));
        if (rdx >= rax) {
            goto label_18;
        }
        rdx = 0x8000000000000000;
        rdx += rax;
    } while (r12 == rdx);
label_18:
    rsi = rdx;
    *((rsp + 0x20)) = rdx;
    rbp -= rbx;
    rax = realloc (*((rsp + 0x10)), rsi);
    if (rax == 0) {
        goto label_2;
    }
    rdx = *((rsp + 0x20));
    rbx += rax;
    *((rsp + 0x10)) = rax;
    r12 = rdx;
    goto label_3;
label_12:
    rax = fcn_00403600 (rax, *((rsp + 4)), *((rsp + 0x1c)), r13);
    if (rax == 0) {
        goto label_4;
    }
    rax -= r15;
    r13d = 1;
    rdx = rax + 1;
    rcx = rax + 2;
    *((rsp + 0x48)) = rdx;
    goto label_0;
label_17:
    rdx = *((rsp + 8));
    goto label_5;
label_15:
    rdx = *((rsp + 0x10));
    rax = *((rsp + 0x28));
    *(rbx) = 0;
    rsi = *((rsp + 0x30));
    rax += rdx;
    *(rsi) = rdx;
    rdx = *((rsp + 0x38));
    rbx -= rax;
    rax = rbx;
    *(rdx) = r12;
    if (rbx != 0) {
        goto label_6;
    }
label_8:
    rax = 0xffffffffffffffff;
    return rax;
label_10:
    r12d = 0x40;
    if (rcx <= 0x40) {
        r12 = rcx;
    }
    rax = malloc (r12);
    *((rsp + 0x10)) = rax;
    if (rax != 0) {
        goto label_7;
    }
    goto label_8;
label_11:
    eax = *((rsp + 0x1c));
    *((rsp + 4)) = eax;
    goto label_9;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x403600 */
#include <stdint.h>
 
int64_t fcn_00403600 (uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    if (sil == dl) {
        goto label_1;
    }
    r10d = esi;
    r9d = edx;
    if (rcx == 0) {
        goto label_2;
    }
    if ((dil & 7) == 0) {
        goto label_2;
    }
    eax = *(rdi);
    if (al == dl) {
        goto label_3;
    }
    if (al != sil) {
        goto label_4;
    }
    goto label_3;
    do {
        if ((dil & 7) == 0) {
            goto label_2;
        }
        eax = *(rdi);
        if (al == r9b) {
            goto label_3;
        }
        if (al == r10b) {
            goto label_3;
        }
label_4:
        rdi++;
        rcx--;
    } while (rcx != 0);
label_2:
    r8d = esi;
    eax = edx;
    r8d <<= 8;
    eax <<= 8;
    r8d = (int32_t) r8w;
    eax = (int32_t) ax;
    ebp = (int32_t) dl;
    ebx = (int32_t) sil;
    eax |= ebp;
    r8d |= ebx;
    rax = (int64_t) eax;
    r8 = (int64_t) r8d;
    rbx = r8;
    rbp <<= 0x10;
    rbx <<= 0x10;
    rax |= rbp;
    r8 |= rbx;
    rbx = r8;
    rbp <<= 0x20;
    rbx <<= 0x20;
    rbp |= rax;
    rbx |= r8;
    if (rcx <= 7) {
        goto label_5;
    }
    r11 = 0xfefefefefefefeff;
    rax = *(rdi);
    r12 = rbx;
    r12 ^= rax;
    rax ^= rbp;
    r8 = r12 + r11;
    r12 = ~r12;
    r8 &= r12;
    r12 = rax + r11;
    rax = ~rax;
    rax &= r12;
    r12 = 0x8080808080808080;
    rax |= r8;
    if ((rax & r12) == 0) {
        goto label_6;
    }
    goto label_7;
    do {
        rax = *(rdi);
        r13 = *(rdi);
        rax ^= rbp;
        r13 ^= rbx;
        r8 = r13 + r11;
        r13 = ~r13;
        r8 &= r13;
        r13 = rax + r11;
        rax = ~rax;
        rax &= r13;
        rax |= r8;
        if ((rax & r12) != 0) {
            goto label_7;
        }
label_6:
        rcx -= 8;
        rdi += 8;
    } while (rcx > 7);
label_5:
    if (rcx == 0) {
        goto label_8;
    }
label_7:
    eax = *(rdi);
    if (al == dl) {
        goto label_9;
    }
    if (al == sil) {
        goto label_9;
    }
    rdx = rdi + 1;
    rdi += rcx;
    while (rdx != rdi) {
        esi = *(rdx);
        rdx++;
        if (sil == r10b) {
            goto label_10;
        }
        if (sil == r9b) {
            goto label_10;
        }
        rax = rdx;
    }
label_8:
    eax = 0;
    do {
label_10:
        r12 = rbx;
        r13 = rbx;
        return rax;
label_3:
        rax = rdi;
        return rax;
label_1:
        esi = (int32_t) sil;
        rdx = rcx;
        goto label_11;
label_9:
        rax = rdi;
    } while (1);
label_11:
    r8d = esi;
    if (rdx == 0) {
        goto label_0;
    }
    if ((dil & 7) == 0) {
        goto label_12;
    }
    if (sil != *(rdi)) {
        goto label_13;
    }
    goto label_14;
    do {
        if ((dil & 7) == 0) {
            goto label_12;
        }
        if (*(rdi) == r8b) {
            goto label_14;
        }
label_13:
        rdi++;
        rdx--;
    } while (rdx != 0);
label_0:
    eax = 0;
    return rax;
label_12:
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
        goto label_15;
    }
    r11 = 0xfefefefefefefeff;
    rax = *(rdi);
    r10 = 0x8080808080808080;
    rax ^= r9;
    rcx = rax + r11;
    rax = ~rax;
    rax &= rcx;
    if ((rax & r10) == 0) {
        goto label_16;
    }
    goto label_15;
    do {
        rax = *(rdi);
        rax ^= r9;
        rcx = rax + r11;
        rax = ~rax;
        rax &= rcx;
        if ((rax & r10) != 0) {
            goto label_15;
        }
label_16:
        rdx -= 8;
        rdi += 8;
    } while (rdx > 7);
    if (rdx == 0) {
        goto label_0;
    }
label_15:
    if (sil == *(rdi)) {
        goto label_14;
    }
    rcx = rdi + 1;
    rdi += rdx;
    while (rcx != rdi) {
        rcx++;
        if (*((rcx - 1)) == r8b) {
            goto label_17;
        }
        rax = rcx;
    }
    goto label_0;
label_14:
    rax = rdi;
label_17:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x403790 */
#include <stdint.h>
 
uint64_t fcn_00403790 (char ** arg1) {
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
            edi = 0x4082f0;
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
        *(0x0060b350) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x403830 */
#include <stdint.h>
 
uint64_t fcn_00403830 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00406ee0 ();
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
        eax = 0x4082f6;
        ebx = 0x408301;
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
        eax = 0x4082fa;
        ebx = 0x4082fd;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x4094d7;
    ebx = 0x4082f4;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x403930 */
#include <stdint.h>
 
uint64_t fcn_00403930 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 23304 named .text */
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
    /* switch table (11 cases) at 0x408360 */
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
    *((rsp + 0x50)) = 0x4094d7;
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
        /* switch table (127 cases) at 0x4083b8 */
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
    rax = fcn_00403930 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x4087b0 */
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
    /* switch table (127 cases) at 0x408ba8 */
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
    *((rsp + 0x50)) = 0x4094d7;
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
        rax = fcn_00406b40 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x4094d7;
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
        *((rsp + 0x50)) = 0x4082f4;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00403830 (0x408305, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00403830 (0x4094d7, r13d);
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
        *((rsp + 0x50)) = 0x4082f4;
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
        *((rsp + 0x50)) = 0x4094d7;
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
    *((rsp + 0x50)) = 0x4082f4;
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
    rax = fcn_00403930 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x4094d7;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x404b60 */
#include <stdint.h>
 
uint64_t fcn_00404b60 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0060b298);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060b2b0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60b2a0) {
        goto label_2;
    }
    rax = fcn_004059d0 (rbx, rsi);
    *(0x0060b298) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060b2b0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060b2b0) = r12d;
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
        rax = fcn_00403930 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60b360) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00405970 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00403930 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_004059d0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060b2a0]");
        rbx = rax;
        *(0x0060b298) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00405bc0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405200 */
#include <stdint.h>
 
int64_t fcn_00405200 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0060b460]");
        __asm ("movdqa xmm1, xmmword [0x0060b470]");
        __asm ("movdqa xmm2, xmmword [0x0060b480]");
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
        fcn_00404b60 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405230 */
#include <stdint.h>
 
int64_t fcn_00405230 (uint32_t arg2, int64_t arg3) {
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
    fcn_00404b60 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x4053b0 */
#include <stdint.h>
 
void fcn_004053b0 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x60b260;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x404b60)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x4053d0 */
#include <stdint.h>
 
void fcn_004053d0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40904b);
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
        /* switch table (10 cases) at 0x409338 */
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
invalid_funccall(); //    void (*0x4019e0)() ();
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
invalid_funccall(); //    void (*0x4019e0)() ();
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
invalid_funccall(); //    void (*0x4019e0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405830 */
#include <stdint.h>
 
uint64_t fcn_00405830 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_004053d0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405970 */
#include <stdint.h>
 
uint64_t fcn_00405970 (int64_t arg1) {
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
    return fcn_00405bc0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x4059d0 */
#include <stdint.h>
 
uint64_t fcn_004059d0 (int64_t arg1, int64_t arg2) {
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
    return fcn_00405bc0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405b70 */
#include <stdint.h>
 
uint64_t fcn_00405b70 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00405970 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405ba0 */
#include <stdint.h>
 
void fcn_00405ba0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
invalid_funccall(); //    return void (*0x405b70)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405bc0 */
#include <stdint.h>
 
uint64_t fcn_00405bc0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060b240), 0, 0x4082a6);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405c00 */
#include <stdint.h>
 
uint64_t fcn_00405c00 (int32_t n, const char * src) {
    rsi = n;
    rdi = src;
    rax = strndup (rdi, rsi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00405bc0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405c20 */
#include <stdint.h>
 
uint64_t fcn_00405c20 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00405ca0 (rbx);
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
invalid_funccall(); //    void (*0x401710)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405ca0 */
#include <stdint.h>
 
uint32_t fcn_00405ca0 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x4018c0)() ();
label_1:
    fcn_00405d10 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405ce0 */
#include <stdint.h>
 
int64_t fcn_00405ce0 (uint32_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x20));
    if (*((rdi + 0x28)) <= rax) {
        rax = *((rdi + 8));
        rdx = *((rdi + 0x10));
        rdx -= rax;
        if (rdx == 0) {
            goto label_0;
        }
        *(rsi) = rdx;
        return rax;
    }
label_0:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405d10 */
#include <stdint.h>
 
int64_t fcn_00405d10 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401990)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405d70 */
#include <stdint.h>
 
uint64_t fcn_00405d70 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x405e50 */
#include <stdint.h>
 
int64_t fcn_00405e50 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406470 */
#include <stdint.h>
 
uint64_t fcn_00406470 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x4094e9;
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
            fcn_00405d70 (r12, rbx);
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
        fcn_00405d70 (r12, rbx);
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
    eax = fcn_00405e50 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00405e50 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406a40 */
#include <stdint.h>
 
int32_t fcn_00406a40 (int64_t arg_10h) {
    eax = *(0x0060b2bc);
    *(0x0060b4a0) = eax;
    eax = *(0x0060b2b8);
    *(0x0060b4a4) = eax;
    eax = *((rsp + 0x10));
    fcn_00406470 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060b2bc) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060b4f0) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060b2b4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406ac0 */
#include <stdint.h>
 
void fcn_00406ac0 (void) {
    r9d = 0;
    fcn_00406a40 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406b40 */
#include <stdint.h>
 
uint64_t fcn_00406b40 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00406e80 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406cd0 */
#include <stdint.h>
 
uint64_t fcn_00406cd0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00405c20 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406d30 */
#include <stdint.h>
 
uint64_t fcn_00406d30 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0;
    if (rsi == 0) {
        goto label_4;
    }
    r12 = rdi;
    rbx = rsi;
    rax = fcn_00407450 (rdi);
    if (rax == 0) {
        goto label_5;
    }
    r13 = rsp;
    while (eax != 0xffffffff) {
        rbx--;
        if (rbx == 0) {
            goto label_6;
        }
        rbp--;
        if (rbp == 0) {
            goto label_5;
        }
        rax = fcn_00405ce0 (r12, r13);
        if (rax != 0) {
            rax = *(rsp);
            if (rax == 0) {
                goto label_7;
            }
            if (rax > rbx) {
                rax = rbx;
            }
            *((r12 + 8)) += rax;
            rbx -= rax;
            if (rbx == 0) {
                goto label_6;
            }
            rbp -= rax;
            if (rbp == 0) {
                goto label_5;
            }
        }
label_7:
        eax = fgetc (r12);
    }
label_1:
    eax = ferror (r12);
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
label_3:
    return rax;
    do {
label_6:
        eax = 0;
        return rax;
label_4:
        return rax;
label_5:
        eax = fileno (r12);
        if (eax >= 0) {
            goto label_8;
        }
label_2:
        r13 = rsp;
        r14d = 0x1000;
        goto label_9;
label_0:
        rbx -= rbp;
    } while (rbx == 0);
label_9:
    r8 = r12;
    rdi = r13;
    if (rbx <= 0x1000) {
    }
    edx = 1;
    esi = 0x1000;
    rcx = rbp;
    rax = fread_chk ();
    if (rbp <= rax) {
        goto label_0;
    }
    goto label_1;
label_8:
    esi = 0;
    edx = 1;
    edi = eax;
    rax = lseek ();
    if (rax < 0) {
        goto label_2;
    }
    fcn_00405d10 (r12, rbx, 1);
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406e80 */
#include <stdint.h>
 
uint64_t fcn_00406e80 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40950c;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x406ee0 */
#include <stdint.h>
 
uint64_t fcn_00406ee0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x409507;
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
        r15d = 0x409507;
label_2:
        *(0x0060b4d8) = r15;
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
        r15d = 0x409507;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40764e;
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
    fcn_00405c20 (rbx);
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
        r15d = 0x409507;
        rbx = rax;
        free (r15);
        fcn_00405c20 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x407450 */
#include <stdint.h>
 
int64_t fcn_00407450 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    rcx = *((rdi + 0x20));
    if (*((rdi + 0x28)) <= rcx) {
        rax = *((rdi + 0x10));
        rax -= *((rdi + 8));
        if ((*(rdi) & 0x100) == 0) {
            goto label_0;
        }
        rdx = *((rdi + 0x58));
        rdx -= *((rdi + 0x48));
        rax += rdx;
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x4074f0 */
#include <stdint.h>
 
int64_t fcn_004074f0 (void) {
    rax = 0x60b228;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_cut.elf @ 0x407508 */
#include <stdint.h>
 
void fcn_00407508 (int64_t arg3) {
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
