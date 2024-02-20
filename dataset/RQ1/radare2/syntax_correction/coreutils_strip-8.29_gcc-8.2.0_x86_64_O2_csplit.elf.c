#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x401f00 */
#include <stdint.h>
 
int32_t main (int64_t argc, char ** argv) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_28h;
    struct sigaction * oldact;
    int64_t var_38h;
    int64_t var_b8h;
    rdi = argc;
    rsi = argv;
    r12 = rsi;
    *((rsp + 8)) = edi;
    fcn_00404260 (*(rsi));
    setlocale (6, 0x41900f);
    bindtextdomain (0x416aa7, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x416aa7, rsi);
    edi = 0x404060;
    fcn_00416950 ();
    *(0x0061d432) = 1;
    *(0x0061d438) = r12;
    *(0x0061d428) = 0;
    *(0x0061d420) = 0;
    *(0x0061d433) = 0;
    *(0x0061d430) = 0;
    *(0x0061d468) = 0x416ab5;
    do {
label_0:
        edi = *((rsp + 8));
        r8d = 0;
        ecx = 0x4175a0;
        rsi = r12;
        edx = "f:b:kn:sqz";
        eax = fcn_00408360 ();
        if (eax == 0xffffffff) {
            goto label_29;
        }
        if (eax == 0x6b) {
            goto label_30;
        }
        if (eax <= 0x6b) {
            goto label_31;
        }
        if (eax == 0x73) {
            goto label_32;
        }
        if (eax <= 0x73) {
            goto label_33;
        }
        if (eax != 0x7a) {
            goto label_34;
        }
        *(0x0061d431) = 1;
    } while (1);
label_31:
    if (eax == 0xffffff7e) {
        goto label_35;
    }
    if (eax > 0xffffff7e) {
        if (eax == 0x62) {
            rax = imp.__libc_start_main;
            *(0x0061d460) = rax;
            goto label_0;
label_34:
            if (eax != 0x80) {
                goto label_28;
            }
            *(0x0061d430) = 1;
            goto label_0;
label_33:
            if (eax != 0x6e) {
                goto label_36;
            }
            edx = 5;
            rax = dcgettext (0, "invalid number");
            r9d = 0;
            eax = fcn_004067f0 (*(0x0061d640), 0, 0x7fffffff, 0x41900f, rax);
            *(0x0061d2b0) = eax;
            goto label_0;
        }
        if (eax != 0x66) {
            goto label_28;
        }
        rax = imp.__libc_start_main;
        *(0x0061d468) = rax;
        goto label_0;
    }
    if (eax != 0xffffff7d) {
        goto label_28;
    }
    eax = 0;
    rcx = *(str_8_29);
    r9d = "David MacKenzie";
    r8d = "Stuart Kemp";
    fcn_00406370 (*(obj.stdout), "csplit", "GNU coreutils");
    eax = exit (0);
label_36:
    if (eax != 0x71) {
        goto label_28;
    }
label_32:
    *(0x0061d433) = 1;
    goto label_0;
label_30:
    *(0x0061d432) = 0;
    goto label_0;
label_29:
    eax = *(0x0061d33c);
    edx = *((rsp + 8));
    edx -= eax;
    edx--;
    if (edx <= 0) {
        goto label_37;
    }
    rdi = imp.__libc_start_main;
    eax = 0;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    rax = imp.__libc_start_main;
    rcx = ~rcx;
    rbx = rcx - 1;
    if (rax == 0) {
        goto label_38;
    }
    r8 = imp.__libc_start_main;
    edi = 0;
    ecx = *(r8);
    rdx = r8;
    if (cl != 0) {
        goto label_39;
    }
    goto label_40;
    do {
        ecx = esi;
label_1:
        rdx = rax;
        if (cl == 0) {
            goto label_41;
        }
label_39:
        rax = rdx + 1;
        esi = *((rdx + 1));
    } while (cl != 0x25);
    if (sil == 0x25) {
        ecx = *((rdx + 2));
        rax = rdx + 2;
        goto label_1;
    }
    if (dil != 0) {
        goto label_42;
    }
    rdx = rax;
    edi = 0;
    do {
        eax = *(rdx);
        rsi = rdx;
        if (al == 0x27) {
            goto label_43;
        }
        if (al > 0x27) {
            goto label_44;
        }
        if (al != 0x23) {
            goto label_45;
        }
        edi |= 2;
label_2:
        rdx++;
    } while (1);
label_44:
    if (al == 0x2d) {
        goto label_2;
    }
    if (al == 0x30) {
        goto label_2;
    }
label_45:
    edx = (int32_t) al;
    edx -= 0x30;
    if (edx > 9) {
        goto label_46;
    }
    do {
        rsi++;
        edx = *(rsi);
        eax = edx;
        edx -= 0x30;
    } while (edx <= 9);
label_46:
    if (al == 0x2e) {
        goto label_23;
    }
label_22:
    r13d = *(rsi);
    if (r13b == 0x69) {
        goto label_47;
    }
    if (r13b <= 0x69) {
        goto label_48;
    }
    if (r13b == 0x75) {
        goto label_49;
    }
    if (r13b == 0x78) {
        goto label_50;
    }
    if (r13b == 0x6f) {
        goto label_50;
    }
    do {
        rax = ctype_b_loc ();
        edx = 5;
        rax = *(rax);
        if ((*((rax + rbp*2 + 1)) & 0x40) == 0) {
            goto label_51;
        }
        rax = dcgettext (0, "invalid conversion specifier in suffix: %c");
        ecx = r13d;
        eax = 0;
        error (1, 0, rax);
label_43:
        edi |= 1;
        goto label_2;
label_48:
        if (r13b == 0x58) {
            goto label_50;
        }
        if (r13b == 0x64) {
label_47:
            *(rsi) = 0x75;
            eax = 1;
label_3:
            eax = ~eax;
            edi &= eax;
            if (edi != 0) {
                goto label_52;
            }
            ecx = *((rsi + 1));
            rax = rsi + 1;
            edi = 1;
            goto label_1;
        }
    } while (r13b != 0);
    edx = 5;
    rax = dcgettext (0, "missing conversion specifier in suffix");
    eax = 0;
    error (1, 0, rax);
label_50:
    eax = 2;
    goto label_3;
label_38:
    eax = *(0x0061d2b0);
    if (eax <= 9) {
        goto label_53;
    }
    rax = 0xfffffffffffffffe;
    rdx = *(0x0061d2b0);
    rax -= rbx;
    if (rax >= rdx) {
        goto label_21;
    }
    do {
        fcn_00403510 ();
label_49:
        eax = 1;
        goto label_3;
label_41:
        if (dil == 0) {
            goto label_40;
        }
        edx = 1;
        r9d |= 0xffffffff;
        rcx |= 0xffffffffffffffff;
        esi = 0;
        edi = 0;
        eax = 0;
        eax = snprintf_chk ();
        rdx = (int64_t) eax;
    } while (eax < 0);
label_21:
    rax = fcn_004064b0 (rbx + rdx + 1);
    ebx = *(0x0061d33c);
    *(0x0061d470) = rax;
    rax = (int64_t) ebx;
    rbp = *((r12 + rax*8));
    ebx = rax + 1;
    *(0x0061d33c) = ebx;
    eax = strcmp (rbp, 0x418ff2);
    if (eax != 0) {
        goto label_54;
    }
label_24:
    if (ebx >= *((rsp + 8))) {
        goto label_7;
    }
    rax = (int64_t) ebx;
    *((rsp + 0x10)) = rax;
    r15 = *((r12 + rax*8));
    while (*((rsp + 8)) > eax) {
        r13 = *((rsp + 0x10));
        r13++;
        r15 = *((r12 + r13*8));
        rbp = r13*8;
        if (*(r15) == 0x7b) {
            goto label_55;
        }
        ebx = eax;
label_8:
        rax = (int64_t) ebx;
        *((rsp + 0x10)) = rax;
        ebp = *(r15);
        r13b = (bpl == 0x25) ? 1 : 0;
        if (bpl == 0x2f) {
            goto label_56;
        }
        if (r13b != 0) {
            goto label_56;
        }
        rax = *((rsp + 0x10));
        rbp = r12 + rax*8;
        rax = fcn_00403540 ();
        *((rax + 0x18)) = ebx;
        r14 = rax;
        eax = fcn_00406f70 (*(rbp), 0, 0xa, rsp + 0x28, 0x41900f);
        if (eax != 0) {
            goto label_57;
        }
        rax = *((rsp + 0x28));
        if (rax == 0) {
            goto label_58;
        }
        rdi = imp.__libc_start_main;
        if (rax < rdi) {
            goto label_59;
        }
        if (rax == rdi) {
            goto label_60;
        }
label_6:
        *(0x0061d390) = rax;
        *((r14 + 8)) = rax;
label_5:
        eax = rbx + 1;
    }
label_7:
    edi = 0x61d3a0;
    ebx = 0x417560;
    r12d = 0x41758c;
    sigemptyset ();
    do {
        r13d = *(rbp);
        sigaction (r13d, 0, rsp + 0x30);
        if (*((rsp + 0x30)) != 1) {
            esi = r13d;
            edi = 0x61d3a0;
            sigaddset ();
        }
        rbp += 4;
    } while (r12 != rbp);
    rdi = rsp + 0x38;
    esi = 0x61d3a0;
    ecx = 0x20;
    *((rsp + 0x30)) = 0x403260;
    *(rdi) = *(rsi);
    rcx--;
    rsi += 4;
    rdi += 4;
    *((rsp + 0xb8)) = 0;
    while (eax == 0) {
label_4:
        rbx += 4;
        if (r12 == rbx) {
            goto label_61;
        }
        ebp = *(rbx);
        edi = 0x61d3a0;
        esi = ebp;
        eax = sigismember ();
    }
    sigaction (ebp, rsp + 0x30, 0);
    goto label_4;
label_56:
    rax = r15 + 1;
    r14d = (int32_t) bpl;
    rdi = rax;
    *((rsp + 0x18)) = rax;
    rax = strrchr (rdi, r14d);
    if (rax == 0) {
        goto label_62;
    }
    rax = fcn_00403540 ();
    *((rax + 0x1d)) = r13b;
    r14 = rax;
    *((rax + 0x18)) = ebx;
    *((rax + 0x1e)) = 1;
    *((rax + 0x20)) = 0;
    *((rax + 0x28)) = 0;
    rax = fcn_004064b0 (0x100);
    *((r14 + 0x48)) = 0;
    *((r14 + 0x40)) = rax;
    rsi -= r15;
    *(0x0061d648) = 0x2c6;
    rsi--;
    rax = fcn_00415890 (*((rsp + 0x18)), rbp, r14 + 0x20);
    r13 = rax;
    if (rax != 0) {
        goto label_63;
    }
    if (*((rbp + 1)) == 0) {
        goto label_5;
    }
    eax = fcn_00406820 (rbp + 1, 0, 0xa, r14, 0x41900f);
    if (eax == 0) {
        goto label_5;
    }
    rax = fcn_00405e80 (r15);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: integer expected after delimiter");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_60:
    rax = fcn_00405e80 (*(rbp));
    edx = 5;
    rax = dcgettext (0, "warning: line number %s is the same as preceding line number");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    rax = *((rsp + 0x28));
    goto label_6;
label_55:
    eax = 0;
    rcx |= 0xffffffffffffffff;
    rdi = r15;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    r13 = r15 + rax - 2;
    if (*(r13) != 0x7d) {
        goto label_64;
    }
    rdi = r15 + 1;
    rax = r13 - 1;
    *(r13) = 0;
    if (rdi == rax) {
        goto label_65;
    }
label_9:
    eax = fcn_00406f70 (rdi, 0, 0xa, rsp + 0x30, 0x41900f);
    if (eax != 0) {
        goto label_66;
    }
    rax = *((rsp + 0x30));
    *((r14 + 0x10)) = rax;
label_10:
    *(r13) = 0x7d;
    ebx += 2;
    if (*((rsp + 8)) <= ebx) {
        goto label_7;
    }
    r15 = *((r12 + rbp + 8));
    goto label_8;
label_65:
    if (*((r15 + 1)) != 0x2a) {
        goto label_9;
    }
    *((r14 + 0x1c)) = 1;
    goto label_10;
label_61:
    *((rsp + 8)) = 0;
label_16:
    rax = *((rsp + 8));
    if (rax >= *(0x0061d420)) {
        goto label_67;
    }
    r15 = *((rsp + 8)) * 0x60;
    rbp = imp.__libc_start_main;
    r14d = 0;
    if (*((rbp + r15 + 0x1e)) == 0) {
        goto label_68;
    }
label_18:
    rbp += r15;
    if (*((rbp + 0x1c)) == 0) {
        if (r14 > *((rbp + 0x10))) {
            goto label_69;
        }
    }
    r12d = *((rbp + 0x1d));
    if (r12b == 0) {
        goto label_70;
    }
label_19:
    if (*(0x0061d430) != 0) {
        if (*(0x0061d480) != 0) {
            goto label_71;
        }
    }
label_26:
    rbx = rbp + 0x20;
    if (*(rbp) >= 0) {
        goto label_20;
    }
    goto label_72;
    do {
        rdx = *(rax);
        rsi = *((rax + 8));
        rdi = rbx;
        rax = rdx - 1;
        if (*((rsi + rdx - 1)) == 0xa) {
            rdx = rax;
        }
        r9d = 0;
        ecx = 0;
        r8 = rdx;
        rax = fcn_00416210 (rdi, rsi);
        if (rax == 0xfffffffffffffffe) {
            goto label_73;
        }
        if (rax != -1) {
            goto label_74;
        }
        fcn_00403960 ();
        if (r12b == 0) {
            goto label_75;
        }
label_20:
        rax = imp.__libc_start_main;
        *(0x0061d480) = rdi;
        rax = fcn_00403b30 (rax + 1);
    } while (rax != 0);
label_12:
    if (*((rbp + 0x1c)) == 0) {
        goto label_76;
    }
    if (r12b == 0) {
        goto label_77;
    }
label_25:
    exit (0);
    do {
        fcn_00403000 ();
        if (*(0x0061d430) != 0) {
            goto label_78;
        }
label_11:
        rax = imp.__libc_start_main;
        rax = fcn_00403b30 (rax + 1);
        if (rax == 0) {
            goto label_79;
        }
label_14:
        rbp = imp.__libc_start_main;
        r14 = r13;
label_68:
        rbp += r15;
        if (*((rbp + 0x1c)) == 0) {
            if (r14 > *((rbp + 0x10))) {
                goto label_69;
            }
        }
        r12 = *((rbp + 8));
        r13 = r14 + 1;
        fcn_00403190 ();
        rax = imp.__libc_start_main;
        r12 *= r13;
        rax = fcn_00403b30 (rax + 1);
        if (rax == 0) {
            goto label_80;
        }
label_13:
        rax = fcn_00403c10 ();
        rbx = rax + 1;
        if (r12 > rax) {
            goto label_81;
        }
    } while (1);
    do {
        rbx = rax;
label_81:
        rax = fcn_00403960 ();
        if (rax == 0) {
            goto label_15;
        }
        fcn_00403480 (rax, rax + 8);
        rax = rbx + 1;
    } while (r12 != rbx);
    fcn_00403000 ();
    if (*(0x0061d430) == 0) {
        goto label_11;
    }
label_78:
    rax = fcn_00403960 ();
    goto label_11;
    do {
        rdx = *(rax);
        rsi = *((rax + 8));
        rdi = rbx;
        rax = rdx - 1;
        if (*((rsi + rdx - 1)) == 0xa) {
            rdx = rax;
        }
        r9d = 0;
        ecx = 0;
        r8 = rdx;
        rax = fcn_00416210 (rdi, rsi);
        if (rax == 0xfffffffffffffffe) {
            goto label_73;
        }
        if (rax != -1) {
            goto label_74;
        }
label_72:
        rax = imp.__libc_start_main;
        *(0x0061d480) = rdi;
        rax = fcn_00403b30 (rax + 1);
    } while (rax != 0);
    goto label_12;
label_80:
    if (*(0x0061d430) == 0) {
        goto label_13;
    }
label_15:
    rsi = r14;
    fcn_00403290 (*((rbp + 8)));
label_79:
    if (*(0x0061d430) != 0) {
        goto label_14;
    }
    goto label_15;
label_69:
    goto label_16;
label_74:
    rax = imp.__libc_start_main;
    rax += *(rbp);
    rbx = rax;
    *((rsp + 0x10)) = rax;
    eax = *((rbp + 0x18));
    *((rsp + 0x18)) = eax;
    rax = fcn_00403c10 ();
    if (rbx < rax) {
        goto label_82;
    }
    r13 = *((rsp + 0x10));
    ebx = 0;
    r13 -= rax;
    if (r13 != 0) {
        goto label_83;
    }
    goto label_84;
    do {
label_17:
        rbx++;
        if (r13 == rbx) {
            goto label_84;
        }
label_83:
        rax = fcn_00403960 ();
        if (rax == 0) {
            goto label_85;
        }
    } while (r12b != 0);
    fcn_00403480 (rax, rax + 8);
    goto label_17;
label_84:
    if (r12b == 0) {
        goto label_86;
    }
label_27:
    if (*(rbp) > 0) {
        rax = *((rsp + 0x10));
        *(0x0061d480) = rax;
    }
    r14++;
    rbp = imp.__libc_start_main;
    goto label_18;
label_70:
    rax = fcn_00403190 ();
    goto label_19;
label_75:
    fcn_00403480 (rax, rax + 8);
    goto label_20;
label_53:
    edx = 0xa;
    goto label_21;
label_51:
    rax = dcgettext (0, "invalid conversion specifier in suffix: \\%.3o");
    ecx = r13d;
    eax = 0;
    error (1, 0, rax);
label_23:
    rsi++;
    eax = *(rsi);
    eax -= 0x30;
    if (eax > 9) {
        goto label_22;
    }
    goto label_23;
label_54:
    eax = fcn_00404100 (0, rbp, 0, 0);
    ebx = *(0x0061d33c);
    if (eax >= 0) {
        goto label_24;
    }
    rax = fcn_00405c30 (4, rbp);
    edx = 5;
    do {
    } while (rcx != 0);
    rax = dcgettext (0, "cannot open %s for reading");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_77:
    fcn_00403a40 ();
    fcn_00403000 ();
    goto label_25;
label_71:
    fcn_00403960 ();
    goto label_26;
label_86:
    fcn_00403000 ();
    goto label_27;
label_67:
    fcn_00403190 ();
    fcn_00403a40 ();
    fcn_00403000 ();
    eax = close (0);
    if (eax != 0) {
        goto label_87;
    }
    eax = 0;
    return rax;
label_40:
    edx = 5;
    rax = dcgettext (0, "missing %% conversion specification in suffix");
    eax = 0;
    error (1, 0, rax);
label_35:
    eax = fcn_00403c80 (0);
label_37:
    if (eax < *((rsp + 8))) {
        goto label_88;
    }
    edx = 5;
    rax = dcgettext (0, "missing operand");
    eax = 0;
    error (0, 0, rax);
label_28:
    fcn_00403c80 (1);
label_73:
    edx = 5;
    rax = dcgettext (0, "error in regular expression search");
    eax = 0;
    error (0, 0, rax);
    fcn_00402fb0 ();
label_85:
    rax = *((rsp + 0x18));
    rdx = imp.__libc_start_main;
    do {
        rax = fcn_00405e80 (*((rdx + rax*8)));
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "%s: line number out of range");
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        fcn_00402fb0 ();
label_58:
        rbx = *(rbp);
        edx = 5;
        rax = dcgettext (0, "%s: line number must be greater than zero");
        rcx = rbx;
        eax = 0;
        error (1, 0, rax);
label_57:
        rax = fcn_00405e80 (*(rbp));
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "%s: invalid pattern");
        rcx = rbx;
        eax = 0;
        error (1, 0, rax);
label_63:
        rax = fcn_00405e80 (r15);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "%s: invalid regular expression: %s");
        r8 = r13;
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        fcn_00402fb0 ();
label_62:
        edx = 5;
        rax = dcgettext (0, "%s: closing delimiter '%c' missing");
        r8d = r14d;
        rcx = r15;
        eax = 0;
        error (1, 0, rax);
label_59:
        rax = fcn_00404210 (rdi, rsp + 0x30, rdx);
        r12 = rax;
        rax = fcn_00405e80 (*(rbp));
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "line number %s is smaller than preceding line number, %s");
        r8 = r12;
        rcx = rbx;
        eax = 0;
        error (1, 0, rax);
label_82:
        rdx = *((rsp + 0x18));
        rax = imp.__libc_start_main;
        rdi = *((rax + rdx*8));
    } while (1);
label_52:
    edi &= 2;
    edx = 5;
    ebx -= ebx;
    rax = dcgettext (0, "invalid flags in conversion specification: %%%c%c");
    ebx &= 4;
    r8d = r13d;
    ebx += 0x23;
    eax = 0;
    ecx = ebx;
    error (1, 0, rax);
label_87:
    edx = 5;
    rax = dcgettext (0, "read error");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (0, *(rax), rbx);
    fcn_00402fb0 ();
label_42:
    edx = 5;
    rax = dcgettext (0, "too many %% conversion specifications in suffix");
    eax = 0;
    error (1, 0, rax);
label_76:
    edx = (int32_t) r12b;
    fcn_00403a70 (rbp, r14, rdx);
label_88:
    r14 = *((rsp + 8));
    rax = fcn_00405e80 (*((r12 + r14*8 - 8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "missing operand after %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_28;
label_66:
    rax = imp.__libc_start_main;
    rax = fcn_00405e80 (*((rax + rbp)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s}: integer required between '{' and '}'");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_64:
    rax = fcn_00405e80 (r15);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: '}' is required in repeat count");
    rcx = rbx;
    eax = 0;
    rax = error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x402d9b */
#include <stdint.h>
 
int32_t fcn_00402d9b (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x402df1 */
#include <stdint.h>
 
int64_t fcn_00402df1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0061d368) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x61ce48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0061d370) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00402d9b ();
    *(0x0061d368) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x402e48 */
#include <stdint.h>
 
int64_t fcn_00402e48 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x402e50 */
#include <stdint.h>
 
int64_t fcn_00402e50 (int64_t arg1) {
    rdi = arg1;
    strcpy (*(0x0061d470), *(0x0061d468));
    rax = imp.__libc_start_main;
    if (rax != 0) {
        r12 = imp.__libc_start_main;
        rbx = imp.__libc_start_main;
        eax = strlen (*(0x0061d468));
        r8d = ebp;
        rcx = r12;
        esi = 1;
        rdi = rbx + rax;
        rdx = 0xffffffffffffffff;
        eax = 0;
        sprintf_chk ();
        rax = imp.__libc_start_main;
        return rax;
    }
    r12d = *(0x0061d2b0);
    rbx = imp.__libc_start_main;
    eax = strlen (*(0x0061d468));
    r9d = ebp;
    r8d = r12d;
    ecx = "%0*u";
    rdi = rbx + rax;
    rdx = 0xffffffffffffffff;
    esi = 1;
    eax = 0;
    sprintf_chk ();
    rax = imp.__libc_start_main;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x402f10 */
#include <stdint.h>
 
uint64_t fcn_00402f10 (int64_t arg1) {
    rdi = arg1;
    eax = imp.__libc_start_main;
    if (eax == 0) {
        goto label_2;
    }
    r12d = edi;
    ebx = 0;
    while (eax == 0) {
label_0:
        eax = imp.__libc_start_main;
        ebx++;
        if (ebx >= eax) {
            goto label_3;
        }
label_1:
        rax = fcn_00402e50 (ebx);
        rdi = rax;
        eax = unlink (rdi);
    }
    if (r12b != 0) {
        goto label_0;
    }
    ebx++;
    rax = fcn_00405d00 (0, 3, rbp);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x417715);
    eax = imp.__libc_start_main;
    if (ebx < eax) {
        goto label_1;
    }
label_3:
    *(0x0061d458) = 0;
    return rax;
label_2:
    *(0x0061d458) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x402fb0 */
#include <stdint.h>
 
uint32_t fcn_00402fb0 (void) {
    fcn_00403000 ();
    rdx = rsp;
    esi = 0x61d3a0;
    edi = 0;
    sigprocmask ();
    eax = *(0x0061d432);
    if (al != 0) {
        fcn_00402f10 (0);
    }
    edi = 2;
    edx = 0;
    rsi = rsp;
    sigprocmask ();
    return exit (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403000 */
#include <stdint.h>
 
uint64_t fcn_00403000 (void) {
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_1;
    }
    if ((*(rdi) & 0x20) != 0) {
        goto label_2;
    }
    eax = fcn_004073b0 (rdi);
    if (eax != 0) {
        goto label_3;
    }
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        if (*(0x0061d431) != 0) {
            goto label_4;
        }
    }
    while (1) {
label_0:
        *(0x0061d448) = 0;
        return eax;
label_1:
        return eax;
        rax = fcn_00404210 (rdi, rsp, rdx);
        edx = 0x4184a0;
        esi = 1;
        rdi = stdout;
        rcx = rax;
        eax = 0;
        fprintf_chk ();
    }
label_4:
    rdx = rsp;
    esi = 0x61d3a0;
    sigprocmask ();
    rbp = imp.__libc_start_main;
    eax = unlink (*(0x0061d440));
    ebx = eax;
    rax = errno_location ();
    edx = 0;
    rsi = rsp;
    r12d = *(rax);
    eax = imp.__libc_start_main;
    dl = (ebx == 0) ? 1 : 0;
    edi = 2;
    eax -= edx;
    edx = 0;
    *(0x0061d458) = eax;
    sigprocmask ();
    if (ebx == 0) {
        goto label_0;
    }
    rax = fcn_00405d00 (0, 3, rbp);
    rcx = rax;
    eax = 0;
    error (0, r12d, 0x417715);
    goto label_0;
label_3:
    rax = fcn_00405d00 (0, 3, *(0x0061d440));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), 0x417715);
    *(0x0061d448) = 0;
    fcn_00402fb0 ();
label_2:
    rax = fcn_00405c30 (4, *(0x0061d440));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "write error for %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    *(0x0061d448) = 0;
    return fcn_00402fb0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403190 */
#include <stdint.h>
 
uint64_t fcn_00403190 (void) {
    rax = fcn_00402e50 (*(0x0061d458));
    rbx = rax;
    *(0x0061d440) = rax;
    eax = imp.__libc_start_main;
    while (1) {
        rax = fcn_00405d00 (0, 3, rbx);
        rcx = rax;
        eax = 0;
        error (0, ebp, 0x417715);
        fcn_00402fb0 ();
        rdx = rsp;
        edi = 0;
        esi = 0x61d3a0;
        sigprocmask ();
        rax = fcn_00404170 (rbx, 0x4169bc);
        rbx = rax;
        *(0x0061d448) = rax;
        rax = errno_location ();
        edx = imp.__libc_start_main;
        rsi = rsp;
        edi = 2;
        ebp = *(rax);
        eax = 0;
        al = (rbx != 0) ? 1 : 0;
        eax += edx;
        edx = 0;
        *(0x0061d458) = eax;
        sigprocmask ();
        if (rbx != 0) {
            *(0x0061d450) = 0;
            return rax;
        }
        rbx = imp.__libc_start_main;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403290 */
#include <stdint.h>
 
uint64_t fcn_00403290 (int64_t arg2) {
    rsi = arg2;
    rbx = rsi;
    rax = fcn_00404210 (rdi, rsp, rdx);
    rax = fcn_00405e80 (rax);
    edx = 5;
    rbp = imp.__libc_start_main;
    r12 = rax;
    rax = dcgettext (0, "%s: %s: line number out of range");
    r8 = r12;
    rcx = rbp;
    esi = 1;
    rdi = stderr;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
    if (rbx == 0) {
        goto label_0;
    }
    rax = fcn_00404210 (rbx, rsp, rdx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, " on repetition %s\n");
    rdi = stderr;
    rcx = rbx;
    esi = 1;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
    do {
        fcn_00402fb0 ();
label_0:
        fputc (0xa, *(obj.stderr));
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403340 */
#include <stdint.h>
 
int64_t fcn_00403340 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r13 = rdx;
    r12 = rcx;
    if (*(rdi) == 0) {
        goto label_1;
    }
label_0:
    rbx = *(rbp);
    rax = *(rbx);
    while (1) {
        rsi = *((rbx + 8));
        rax++;
        rdi = rsi;
        rsi++;
        rdi <<= 4;
        rdi += rbx;
        *((rdi + 0x20)) = r13;
        *((rdi + 0x18)) = r12;
        *(rbx) = rax;
        *((rbx + 8)) = rsi;
        return rax;
        fcn_004064b0 (0x520);
        *((rax + 0x518)) = 0;
        *(rax) = 0;
        *((rax + 8)) = 0;
        *((rax + 0x10)) = 0;
        *((rbx + 0x518)) = rax;
        rax = *(rbp);
        rbx = *((rax + 0x518));
        *(rbp) = rbx;
        rax = *(rbx);
    }
label_1:
    rbx = rdi;
    rax = fcn_004064b0 (0x520);
    *(rbp) = rax;
    *((rax + 0x518)) = 0;
    *(rax) = 0;
    *((rax + 8)) = 0;
    *((rax + 0x10)) = 0;
    *(rbx) = rax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403430 */
#include <stdint.h>
 
void fcn_00403430 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rsi;
    rdi = *(rsi);
    if (rdi == 0) {
        goto label_0;
    }
    do {
        rbx = *((rdi + 0x518));
        free (rdi);
        rdi = rbx;
    } while (rbx != 0);
label_0:
    *(r12) = 0;
    free (*(rbp));
    *(rbp) = 0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403480 */
#include <stdint.h>
 
int64_t fcn_00403480 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rsi;
    esi = 1;
    rbx = rdi;
    rdx = *(rdi);
    rcx = imp.__libc_start_main;
    rdi = *(rax);
    rax = fwrite_unlocked ();
    if (rax == *(rbx)) {
        *(0x0061d450) += rax;
        return rax;
    }
    rax = fcn_00405c30 (4, *(0x0061d440));
    edx = 5;
    rax = dcgettext (0, "write error for %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), rbx);
    *(0x0061d448) = 0;
    return fcn_00402fb0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403510 */
#include <stdint.h>
 
uint64_t fcn_00403510 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (0, 0, 0x417715);
    return fcn_00402fb0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403540 */
#include <stdint.h>
 
int64_t fcn_00403540 (void) {
    rax = imp.__libc_start_main;
    rcx = imp.__libc_start_main;
    rdi = imp.__libc_start_main;
    while (1) {
        rdx = rax + 1;
        rax *= 3;
        rax <<= 5;
        *(0x0061d420) = rdx;
        rax += rdi;
        *((rax + 0x1e)) = 0;
        *((rax + 0x10)) = 0;
        *((rax + 0x1c)) = 0;
        *((rax + 8)) = 0;
        *(rax) = 0;
        return rax;
        if (rdi == 0) {
            goto label_2;
        }
        rax = 0xe38e38e38e38e2;
        if (rcx > rax) {
            goto label_3;
        }
        rax = rcx;
        rax >>= 1;
        rcx = rcx + rax + 1;
label_0:
        rsi <<= 5;
label_1:
        *(0x0061d388) = rcx;
        rax = fcn_00406510 (rdi, rcx + rcx*2);
        rdi = rax;
        *(0x0061d428) = rax;
        rax = imp.__libc_start_main;
    }
label_2:
    if (rcx == 0) {
        goto label_4;
    }
    edx = 0x60;
    rax = rdx;
    rdx_rax = rax * rcx;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_3;
    }
    if (rdx == 0) {
        goto label_0;
    }
label_3:
    fcn_00403510 ();
label_4:
    esi = 0x60;
    ecx = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403630 */
#include <stdint.h>
 
uint64_t fcn_00403630 (void) {
    int64_t var_8h;
    if (*(0x0061d490) >= 0x1fff) {
        rbp = imp.__libc_start_main;
    }
    while (rbp > 0x1fff) {
        rbp -= 0x1800;
        rbp &= 0xfffffffffffff800;
        r13 = rbp + 0x1fff;
        rbp += 0x2000;
label_0:
        rax = fcn_004064b0 (0x48);
        rbx = rax;
        rax = fcn_004064b0 (rbp);
        rbp = imp.__libc_start_main;
        *(rbx) = r13;
        r12 = rax;
        *((rbx + 0x28)) = rax;
        rax = imp.__libc_start_main;
        *((rbx + 0x38)) = 0;
        rax++;
        *((rbx + 0x30)) = 0;
        *((rbx + 0x20)) = 0;
        *((rbx + 8)) = 0;
        *((rbx + 0x18)) = rax;
        *((rbx + 0x10)) = rax;
        *((rbx + 0x40)) = 0;
        if (rbp != 0) {
            goto label_6;
        }
label_5:
        rax = fcn_00405ea0 (0, r12, r13);
        if (rax != 0) {
            goto label_7;
        }
        *(0x0061d478) = 1;
label_2:
        rax += *((rbx + 8));
        *((rbx + 8)) = rax;
        if (rax != 0) {
            goto label_8;
        }
label_1:
        if (*(0x0061d478) != 0) {
            goto label_9;
        }
        rax = *(rbx);
        edx = 0;
        __asm ("sets dl");
        rax += rax;
        if (rax < 0) {
            goto label_10;
        }
        if (rdx != 0) {
            goto label_10;
        }
        fcn_00403430 (rbx + 0x28, rbx + 0x30);
        free (rbx);
    }
    r13d = 0x1fff;
    goto label_0;
label_6:
    memcpy (r12, *(0x0061d498), rbp);
    *((rbx + 8)) = rbp;
    *(0x0061d490) = 0;
    r13 -= rbp;
    if (r13 != 0) {
        goto label_11;
    }
label_4:
    rax = rbx + 0x38;
    r14d = 0;
    *((rsp + 8)) = rax;
    while (rax != 0) {
        r13 = rax;
        r13 -= r12;
        r14++;
        r12 = r15 + 1;
        r13++;
        rbp -= r13;
        fcn_00403340 (rbx + 0x30, *((rsp + 8)), r12, r13);
        rax = fcn_00408460 (r12, 0xa, rbp);
        r15 = rax;
    }
    if (rbp != 0) {
        if (*(0x0061d478) == 0) {
            goto label_12;
        }
        fcn_00403340 (rbx + 0x30, rbx + 0x38, r12, rbp);
        r14++;
    }
label_3:
    rax = imp.__libc_start_main;
    *((rbx + 0x20)) = r14;
    rdx = rax + 1;
    rax += r14;
    *((rbx + 0x10)) = rdx;
    *((rbx + 0x18)) = rdx;
    *(0x0061d488) = rax;
    if (r14 == 0) {
        goto label_1;
    }
    rax = *((rbx + 0x30));
    rdx = imp.__libc_start_main;
    *((rbx + 0x40)) = 0;
    *((rbx + 0x38)) = rax;
    if (rdx != 0) {
        goto label_13;
    }
    *(0x0061d4a0) = rbx;
    eax = 1;
    return rax;
    do {
        rdx = rax;
label_13:
        rax = *((rdx + 0x40));
    } while (rax != 0);
    *((rdx + 0x40)) = rbx;
    eax = 1;
    return rax;
label_7:
    if (rax != -1) {
        goto label_2;
    }
    edx = 5;
    rax = dcgettext (0, "read error");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (0, *(rax), rbx);
    fcn_00402fb0 ();
label_12:
    rax = fcn_004066b0 (r12, rbp);
    r12 = rax;
    free (*(0x0061d498));
    *(0x0061d498) = r12;
    *(0x0061d490) = rbp;
    goto label_3;
label_8:
    r12 = *((rbx + 0x28));
    goto label_4;
label_9:
    fcn_00403430 (rbx + 0x28, rbx + 0x30);
    eax = free (rbx);
    eax = 0;
    return rax;
label_10:
    fcn_00403510 ();
label_11:
    r12 += rbp;
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403960 */
#include <stdint.h>
 
int64_t fcn_00403960 (void) {
    rbx = imp.__libc_start_main;
    if (rbx != 0) {
        fcn_00403430 (rbx + 0x28, rbx + 0x30);
        free (rbx);
        *(0x0061d380) = 0;
    }
    rdx = imp.__libc_start_main;
    if (rdx == 0) {
        goto label_1;
    }
label_0:
    rax = *((rdx + 0x18));
    if (rax > *(0x0061d480)) {
        *(0x0061d480) = rax;
    }
    rsi = *((rdx + 0x38));
    rax++;
    *((rdx + 0x18)) = rax;
    rax = *((rsi + 0x10));
    rcx = rax + 1;
    rax = rcx;
    *((rsi + 0x10)) = rcx;
    rax <<= 4;
    rax = rsi + rax + 8;
    while (*(rcx) != 0) {
        return rax;
        rcx = *((rsi + 0x518));
        *((rdx + 0x38)) = rcx;
        if (rcx == 0) {
            goto label_2;
        }
    }
label_2:
    *(0x0061d380) = rdx;
    rdx = *((rdx + 0x40));
    *(0x0061d4a0) = rdx;
    return rax;
label_1:
    if (*(0x0061d478) == 0) {
        al = fcn_00403630 ();
        if (al == 0) {
            goto label_3;
        }
        rdx = imp.__libc_start_main;
        goto label_0;
    }
label_3:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403a40 */
#include <stdint.h>
 
uint64_t fcn_00403a40 (void) {
    while (rax != 0) {
        fcn_00403480 (rax, rax + 8);
        rax = fcn_00403960 ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403a70 */
#include <stdint.h>
 
int64_t fcn_00403a70 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rsi;
    rdx = *((rdi + 0x18));
    rax = imp.__libc_start_main;
    rax = fcn_00405e80 (*((rax + rdx*8)));
    edx = 5;
    r12 = imp.__libc_start_main;
    r13 = rax;
    rax = dcgettext (0, "%s: %s: match not found");
    r8 = r13;
    rcx = r12;
    esi = 1;
    rdi = stderr;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
    if (rbx == 0) {
        goto label_1;
    }
    rax = fcn_00404210 (rbx, rsp, rdx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, " on repetition %s\n");
    rdi = stderr;
    rcx = rbx;
    esi = 1;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
    do {
        if (bpl == 0) {
            goto label_2;
        }
label_0:
        fcn_00402fb0 ();
label_1:
        fputc (0xa, *(obj.stderr));
    } while (1);
label_2:
    fcn_00403a40 ();
    fcn_00403000 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403b30 */
#include <stdint.h>
 
int64_t fcn_00403b30 (int64_t arg1) {
    rdi = arg1;
    rbx = imp.__libc_start_main;
    if (rbx == 0) {
        goto label_2;
    }
label_1:
    rdx = *((rbx + 0x10));
    if (rdx <= rbp) {
        goto label_3;
    }
    goto label_4;
    do {
label_0:
        rdx = *((rax + 0x10));
        rbx = rax;
label_3:
        rax = *((rbx + 0x20));
        rax += rdx;
        if (rax > rbp) {
            goto label_5;
        }
        rax = *((rbx + 0x40));
    } while (rax != 0);
    if (*(0x0061d478) != 0) {
        goto label_4;
    }
    al = fcn_00403630 ();
    if (al == 0) {
        goto label_4;
    }
    rax = *((rbx + 0x40));
    if (rax != 0) {
        goto label_0;
    }
    eax = assert_fail (0x416a12, "src/csplit.c", 0x26a, "find_line");
label_2:
    while (al == 0) {
label_4:
        eax = 0;
        return rax;
        al = fcn_00403630 ();
    }
    rbx = imp.__libc_start_main;
    goto label_1;
label_5:
    rbp -= rdx;
    rax = *((rbx + 0x30));
    if (rbp <= 0x4f) {
        goto label_6;
    }
    do {
        rbp -= 0x50;
        rax = *((rax + 0x518));
    } while (rbp > 0x4f);
label_6:
    rbp <<= 4;
    rax = rax + rbp + 0x18;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403c10 */
#include <stdint.h>
 
int64_t fcn_00403c10 (void) {
    rax = imp.__libc_start_main;
    if (rax != 0) {
        rax = *((rax + 0x18));
        return rax;
    }
    if (*(0x0061d478) == 0) {
        al = fcn_00403630 ();
        if (al == 0) {
            goto label_0;
        }
        rax = imp.__libc_start_main;
        rax = *((rax + 0x18));
        return rax;
    }
label_0:
    edx = 5;
    rax = dcgettext (0, "input disappeared");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x403c80 */
#include <stdint.h>
 
uint64_t fcn_00403c80 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION].. FILE PATTERN..\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Output pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..,\nand output byte counts of each piece to standard output.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nRead standard input if FILE is -\n");
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
    rax = dcgettext (0, "  -b, --suffix-format=FORMAT  use sprintf FORMAT instead of %02d\n  -f, --prefix=PREFIX        use PREFIX instead of 'xx'\n  -k, --keep-files           do not remove output files on errors\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --suppress-matched     suppress the lines matching PATTERN\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -n, --digits=DIGITS        use specified number of digits instead of 2\n  -s, --quiet, --silent      do not print counts of output file sizes\n  -z, --elide-empty-files    remove empty output files\n");
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
    rax = dcgettext (0, "\nEach PATTERN may be:\n  INTEGER            copy up to but not including specified line number\n  /REGEXP/[OFFSET]   copy up to but not including a matching line\n  %REGEXP%[OFFSET]   skip to, but not including a matching line\n  {INTEGER}          repeat the previous pattern specified number of times\n  {*}                repeat the previous pattern as many times as possible\n\nA line OFFSET is a required '+' or '-' followed by a positive integer.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x416a2d;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x416aa7;
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
        esi = "csplit";
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
        eax = strncmp (rax, 0x416ab1, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x416a49;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "csplit";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x41900f;
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
            eax = strncmp (rax, 0x416ab1, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "csplit";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x416a49;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "csplit";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x404100 */
#include <stdint.h>
 
uint64_t fcn_00404100 (int64_t arg1, int64_t arg4, int64_t oflag, char * path) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x404170 */
#include <stdint.h>
 
uint64_t fcn_00404170 (int64_t arg2, const char * filename) {
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
        eax = fcn_00405f00 (eax, rsi, rdx);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_004073b0 (rbx);
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
    fcn_004073b0 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x404210 */
#include <stdint.h>
 
int64_t fcn_00404210 (uint32_t arg1, struct sigaction * arg2, int64_t arg3) {
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
        rdx_rax = rax * rsi;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x404260 */
#include <stdint.h>
 
uint64_t fcn_00404260 (char ** arg1) {
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
            edi = 0x417758;
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
        *(0x0061d4b8) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x404300 */
#include <stdint.h>
 
uint64_t fcn_00404300 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00416370 ();
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
        eax = 0x41775e;
        ebx = 0x417769;
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
        eax = 0x417762;
        ebx = 0x417765;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x418fdf;
    ebx = 0x41775c;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x404400 */
#include <stdint.h>
 
uint64_t fcn_00404400 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 84664 named .text */
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
    /* switch table (11 cases) at 0x4177c0 */
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
    *((rsp + 0x50)) = 0x418fdf;
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
        /* switch table (127 cases) at 0x417818 */
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
    rax = fcn_00404400 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x417c10 */
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
    /* switch table (127 cases) at 0x418008 */
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
    *((rsp + 0x50)) = 0x418fdf;
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
        rax = fcn_004083e0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x418fdf;
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
        *((rsp + 0x50)) = 0x41775c;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00404300 (0x41776d, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00404300 (0x418fdf, r13d);
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
        *((rsp + 0x50)) = 0x41775c;
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
        *((rsp + 0x50)) = 0x418fdf;
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
    *((rsp + 0x50)) = 0x41775c;
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
    rax = fcn_00404400 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x418fdf;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405630 */
#include <stdint.h>
 
uint64_t fcn_00405630 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0061d318);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0061d330) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x61d320) {
        goto label_2;
    }
    rax = fcn_00406510 (rbx, rsi);
    *(0x0061d318) = rax;
    rbx = rax;
    do {
        rdi = *(0x0061d330);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0061d330) = r12d;
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
        rax = fcn_00404400 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x61d4c0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_004064b0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00404400 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00406510 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0061d320]");
        rbx = rax;
        *(0x0061d318) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00403510 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405c30 */
#include <stdint.h>
 
int64_t fcn_00405c30 (int64_t arg1, int64_t arg2) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    do {
        abort ();
INVALID_JUMP;
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
    fcn_00405630 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
    rdx = rsi;
    esi = edi;
    edi = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405cd0 */
#include <stdint.h>
 
int64_t fcn_00405cd0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0061d5c0]");
        __asm ("movdqa xmm1, xmmword [0x0061d5d0]");
        __asm ("movdqa xmm2, xmmword [0x0061d5e0]");
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
        fcn_00405630 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405d00 */
#include <stdint.h>
 
int64_t fcn_00405d00 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00405630 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405e80 */
#include <stdint.h>
 
void fcn_00405e80 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x61d2e0;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x405630)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405ea0 */
#include <stdint.h>
 
uint64_t fcn_00405ea0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13d = edi;
    r12 = rsi;
    rbx = rdx;
    do {
label_0:
        rax = read (r13d, r12, rbx);
        if (rax >= 0) {
            goto label_1;
        }
        rax = errno_location ();
        eax = *(rax);
    } while (eax == 4);
    if (rbx > 0x7fffe000) {
        if (eax != 0x16) {
            goto label_1;
        }
        ebx = 0x7fffe000;
        goto label_0;
    }
label_1:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405f00 */
#include <stdint.h>
 
uint64_t fcn_00405f00 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
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
            *(0x0061d5f8) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
invalid_funccall(); //        eax = void (*0x407430)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0061d5f8) != 0xffffffff) {
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
invalid_funccall(); //    eax = void (*0x407430)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0061d5f8) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x405f10 */
#include <stdint.h>
 
void fcn_00405f10 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x4184ab);
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
        /* switch table (10 cases) at 0x418798 */
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
invalid_funccall(); //    void (*0x401e60)() ();
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
invalid_funccall(); //    void (*0x401e60)() ();
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
invalid_funccall(); //    void (*0x401e60)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x406370 */
#include <stdint.h>
 
uint64_t fcn_00406370 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00405f10 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4064b0 */
#include <stdint.h>
 
uint64_t fcn_004064b0 (int64_t arg1) {
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
    return fcn_00403510 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x406510 */
#include <stdint.h>
 
uint64_t fcn_00406510 (int64_t arg1, int64_t arg2) {
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
    return fcn_00403510 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4066b0 */
#include <stdint.h>
 
uint64_t fcn_004066b0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_004064b0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x406700 */
#include <stdint.h>
 
uint64_t fcn_00406700 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
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
    eax = fcn_00406820 (rdi, 0, edx, rsp + 8, r8);
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
        rax = fcn_00405e80 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4067f0 */
#include <stdint.h>
 
void fcn_004067f0 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    fcn_00406700 (rdi, 0xa, rsi, rdx, rcx, r8);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x406820 */
#include <stdint.h>
 
uint64_t fcn_00406820 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (54 cases) at 0x418868 */
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
    /* switch table (48 cases) at 0x418a18 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x406f70 */
#include <stdint.h>
 
uint64_t fcn_00406f70 (int64_t arg1, int64_t arg2, uint32_t arg3, struct sigaction * arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x418ba8 */
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
    /* switch table (54 cases) at 0x418d28 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4073b0 */
#include <stdint.h>
 
uint64_t fcn_004073b0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00407570 (rbx);
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
invalid_funccall(); //    void (*0x401b30)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x407570 */
#include <stdint.h>
 
uint32_t fcn_00407570 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x401d10)() ();
label_1:
    fcn_004075b0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4075b0 */
#include <stdint.h>
 
int64_t fcn_004075b0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401de0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x407610 */
#include <stdint.h>
 
uint64_t fcn_00407610 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4076f0 */
#include <stdint.h>
 
int64_t fcn_004076f0 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        goto label_9;
    }
    if (al == 0) {
        goto label_9;
    }
    do {
        rbp++;
        eax = *(rbp);
        if (al == 0) {
            goto label_10;
        }
    } while (al != 0x3d);
label_10:
    r13 = rbp;
    r13 -= r14;
label_4:
    rbx = *(rsp);
    r12d = 0;
    rax = *(rbx);
    *((rsp + 0x10)) = rax;
    r15 = rax;
    if (rax != 0) {
        goto label_11;
    }
    goto label_12;
    do {
        r12 = (int64_t) r8d;
label_11:
        eax = strncmp (r15, r14, r13);
        if (eax == 0) {
            rax = strlen (r15);
            if (rax == r13) {
                goto label_13;
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
                goto label_14;
            }
            eax = *((rsp + 0xc));
            if (eax == 0) {
                goto label_15;
            }
label_0:
            r11d = *((rsp + 0x38));
            if (r11d != 0) {
                goto label_1;
            }
            r10d = *((rsp + 0x98));
            if (r10d == 0) {
                goto label_16;
            }
            if (*((rsp + 0x18)) == 0) {
                goto label_17;
            }
label_2:
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
        goto label_18;
    }
    r9d = *((rsp + 0x38));
    if (r9d != 0) {
        goto label_18;
    }
    if (rbx != 0) {
        goto label_19;
    }
label_12:
    eax = *((rsp + 0xc));
    if (eax == 0) {
        goto label_20;
    }
    rax = *((rsp + 0x90));
    rcx = *((rsp + 0x28));
    rax = *(rax);
    rax = *((rcx + rax*8));
    if (*((rax + 1)) == 0x2d) {
        goto label_20;
    }
    esi = *((rsp + 0x3f));
    rax = strchr (*((rsp + 0x30)), rsi);
    rdx = rax;
    eax = 0xffffffff;
    if (rdx != 0) {
invalid_funccall(); //        void (*0x40795e)() ();
    }
label_20:
    ecx = *((rsp + 0x98));
    if (ecx != 0) {
        goto label_21;
    }
label_3:
    rax = *((rsp + 0x90));
    *((rax + 0x20)) = 0;
    *(rax)++;
    *((rax + 8)) = 0;
    eax = 0x3f;
    return rax;
label_19:
    r12d = *((rsp + 0x44));
label_13:
    rax = *((rsp + 0x90));
    rcx = *((rsp + 0x90));
    edx = *(rax);
    *((rcx + 0x20)) = 0;
    eax = rdx + 1;
    *(rcx) = eax;
    ecx = *((rbx + 8));
    if (*(rbp) != 0) {
        goto label_22;
    }
    if (ecx == 1) {
        goto label_23;
    }
label_15:
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
label_22:
    if (ecx == 0) {
        goto label_24;
    }
    *(rax) += al;
label_14:
    *((rsp + 0x44)) = r15d;
    rbx = rbp;
    goto label_1;
label_16:
    *((rsp + 0x38)) = 1;
    if (*((rsp + 0x18)) == 0) {
        goto label_1;
    }
    goto label_2;
label_21:
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
    goto label_3;
label_18:
    r8d = *((rsp + 0x98));
    if (r8d != 0) {
        edi = *((rsp + 0x38));
        if (edi == 0) {
            goto label_25;
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
label_7:
    esi = *((rsp + 0x48));
    if (esi != 0) {
        goto label_26;
    }
label_5:
    rax = strlen (r14);
    r14 += rax;
    rax = *((rsp + 0x90));
    *((rax + 0x20)) = r14;
    *(rax)++;
    *((rax + 8)) = 0;
    eax = 0x3f;
invalid_funccall(); //    void (*0x40795e)() ();
label_23:
    if (eax >= *((rsp + 0x40))) {
        goto label_27;
    }
    rcx = *((rsp + 0x90));
    edx += 2;
    rax = (int64_t) eax;
    *(rcx) = edx;
    rcx = *((rsp + 0x28));
    rax = *((rcx + rax*8));
    rcx = *((rsp + 0x90));
    *((rcx + 0x10)) = rax;
invalid_funccall(); //    void (*0x407941)() ();
label_9:
    r13d = 0;
    goto label_4;
label_24:
    edx = *((rsp + 0x98));
    while (1) {
        eax = *((rbx + 0x18));
        rcx = *((rsp + 0x90));
        *((rcx + 8)) = eax;
        eax = 0x3f;
invalid_funccall(); //        void (*0x40795e)() ();
label_17:
        rdi = *((rsp + 0x4c));
        rax = calloc (rdi, 1);
        *((rsp + 0x18)) = rax;
        if (rax == 0) {
            goto label_28;
        }
        rax = *((rsp + 0x44));
        rcx = *((rsp + 0x18));
        *((rsp + 0x48)) = 1;
        *((rcx + rax)) = 1;
        goto label_2;
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
label_26:
    free (*((rsp + 0x18)));
    goto label_5;
label_27:
    eax = *((rsp + 0x98));
    if (eax != 0) {
        goto label_29;
    }
label_8:
    eax = *((rbx + 0x18));
    rcx = *((rsp + 0x90));
    *((rcx + 8)) = eax;
    rax = *((rsp + 0x30));
    al = (*(rax) != 0x3a) ? 1 : 0;
    eax = (int32_t) al;
    eax = rax * 5;
invalid_funccall(); //    void (*0x40795e)() ();
label_25:
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
label_6:
        rbp++;
        rbx += 0x20;
        if (r12 == rbp) {
            goto label_30;
        }
    }
    r8 = *(rbx);
    edx = " '%s%s'";
    esi = 1;
    eax = 0;
    rcx = *((rsp + 0xa0));
    fprintf_chk ();
    rdi = stderr;
    goto label_6;
label_30:
    fputc (0xa, rdi);
    rdi = stderr;
    funlockfile ();
    rax = *((rsp + 0x90));
    r14 = *((rax + 0x20));
    goto label_7;
label_29:
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
    goto label_8;
label_28:
    *((rsp + 0x38)) = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4079a6 */
#include <stdint.h>
 
int64_t fcn_004079a6 (int64_t arg_20h, int64_t arg_90h) {
    do {
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
        return rax;
        *(rax) += al;
        rax = *((rsp + 0x90));
        rbp++;
        *((rax + 0x10)) = rbp;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x407d10 */
#include <stdint.h>
 
uint64_t fcn_00407d10 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x418ff1;
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
            fcn_00407610 (r12, rbx);
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
        fcn_00407610 (r12, rbx);
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
    eax = fcn_004076f0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_004076f0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4082e0 */
#include <stdint.h>
 
int32_t fcn_004082e0 (int64_t arg_10h) {
    eax = *(0x0061d33c);
    *(0x0061d600) = eax;
    eax = *(0x0061d338);
    *(0x0061d604) = eax;
    eax = *((rsp + 0x10));
    fcn_00407d10 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061d33c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0061d640) = rdx;
    edx = imp.__libc_start_main;
    *(0x0061d334) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408360 */
#include <stdint.h>
 
void fcn_00408360 (void) {
    r9d = 0;
    fcn_004082e0 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4083e0 */
#include <stdint.h>
 
uint64_t fcn_004083e0 (wint_t arg1, mbstate_t * arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00416310 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408460 */
#include <stdint.h>
 
int64_t fcn_00408460 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408570 */
#include <stdint.h>
 
int32_t fcn_00408570 (uint32_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    al = (rdi == 0) ? 1 : 0;
    dl = (rsi == 0) ? 1 : 0;
    al |= dl;
    if (al != 0) {
        goto label_1;
    }
    rdx = *((rdi + 8));
    if (rdx == *((rsi + 8))) {
        goto label_2;
    }
    do {
        return al;
label_0:
        rcx = *((rsi + 0x10));
        r8 = *((rdi + 0x10));
        rcx = *((rcx + rdx*8));
    } while (*((r8 + rdx*8)) != rcx);
label_2:
    rdx--;
    if (rdx >= 0) {
        goto label_0;
    }
    eax = 1;
    return eax;
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4085c0 */
#include <stdint.h>
 
int64_t fcn_004085c0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rsi;
    rbx = rdi;
    while (rax != 0) {
label_0:
        rbx = rax;
        rax = *((rbx + 8));
    }
    rax = *((rbx + 0x10));
    if (rax != 0) {
        goto label_0;
    }
    rsi = rbx;
    rdi = rbp;
invalid_funccall(); //    eax = void (*r12)() ();
    if (eax != 0) {
        goto label_2;
    }
label_1:
    rdx = *(rbx);
    if (rdx == 0) {
        goto label_2;
    }
    rax = *((rdx + 0x10));
    sil = (rax == 0) ? 1 : 0;
    rbx = rdx;
    cl = (rax == rbx) ? 1 : 0;
    sil |= cl;
    if (sil == 0) {
        goto label_0;
    }
    rsi = rbx;
    rdi = rbp;
invalid_funccall(); //    eax = void (*r12)() ();
    if (eax == 0) {
        goto label_1;
    }
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408630 */
#include <stdint.h>
 
int64_t fcn_00408630 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rsi + 0x48));
    if (*((rsi + 0x68)) <= rax) {
        goto label_0;
    }
    r8 = *((rsi + 8));
    ecx = *((r8 + rax));
    *(rdi) = cl;
    if (*((rsi + 0x90)) > 1) {
        if (rax == *((rsi + 0x30))) {
            goto label_1;
        }
        r9 = *((rsi + 0x10));
        if (*((r9 + rax*4)) == 0xffffffff) {
            goto label_2;
        }
    }
label_1:
    if (cl != 0x5c) {
        if (cl == 0x5b) {
            goto label_3;
        }
        if (cl == 0x5d) {
            goto label_4;
        }
        if (cl != 0x5e) {
            goto label_5;
        }
        *((rdi + 8)) = 0x19;
        eax = 1;
        return rax;
    }
    edx &= 1;
    if (edx == 0) {
        goto label_2;
    }
    rdx = rax + 1;
    if (rdx < *((rsi + 0x58))) {
        goto label_6;
    }
    do {
label_2:
        *((rdi + 8)) = 1;
        eax = 1;
        return rax;
INVALID_JUMP;
    } while (cl != 0x2d);
    *((rdi + 8)) = 0x16;
    eax = 1;
    return rax;
label_0:
    *((rdi + 8)) = 2;
    eax = 0;
    return rax;
label_3:
    rcx = rax + 1;
    if (rcx >= *((rsi + 0x58))) {
        goto label_7;
    }
    eax = *((r8 + rax + 1));
    *(rdi) = al;
    if (al == 0x3a) {
        goto label_8;
    }
    if (al == 0x3d) {
        goto label_9;
    }
    while (edx == 0) {
label_7:
        *((rdi + 8)) = 1;
        eax = 1;
        *(rdi) = 0x5b;
        return rax;
label_4:
        *((rdi + 8)) = 0x15;
        eax = 1;
        return rax;
label_6:
        *((rsi + 0x48)) = rdx;
        eax = *((r8 + rax + 1));
        *((rdi + 8)) = 1;
        *(rdi) = al;
        eax = 1;
        return rax;
        *((rdi + 8)) = 0x1a;
        eax = 2;
        return rax;
label_9:
        *((rdi + 8)) = 0x1c;
        eax = 2;
        return rax;
label_8:
        edx &= 4;
    }
    *((rdi + 8)) = 0x1e;
    eax = 2;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408780 */
#include <stdint.h>
 
int64_t fcn_00408780 (int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5) {
    int64_t var_4h;
    int64_t var_8h;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_26h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_1:
    r15 = rdx;
    rdx = rcx * 3;
    r9 = *((rdi + 0x98));
    *((rsp + 8)) = rdi;
    rax = *((r9 + 0x30));
    *(rsp) = esi;
    *((rsp + 0x10)) = rcx;
    r13 = rax + rdx*8;
    if (*((r13 + 8)) <= 0) {
        goto label_6;
    }
    rax = r8 * 5;
    ecx = r15d;
    r14 = r15;
    ebx = 0;
    rax <<= 3;
    r11 = r8;
    r15 = r9;
    *((rsp + 0x28)) = rax;
    eax = 1;
    rax <<= cl;
    *((rsp + 0x18)) = rax;
    eax = ~eax;
    *((rsp + 0x26)) = ax;
    eax = *(rsp);
    esi = *(rsp);
    eax &= 2;
    esi &= 1;
    *((rsp + 4)) = eax;
    *((rsp + 0x20)) = esi;
    while (dl != 9) {
        if (dl == 4) {
            goto label_7;
        }
label_0:
        rbx++;
        if (*((r13 + 8)) <= rbx) {
            goto label_6;
        }
label_5:
        rax = *((r13 + 0x10));
        rbp = *((rax + rbx*8));
        rax = *((rax + rbx*8));
        rax <<= 4;
        rax += *(r15);
        edx = *((rax + 8));
        if (dl == 8) {
            goto label_8;
        }
    }
    edx = *((rsp + 4));
    if (edx == 0) {
        goto label_0;
    }
    if (*(rax) != r14) {
        goto label_0;
    }
label_3:
    eax = 0;
    return rax;
label_8:
    ecx = *((rsp + 0x20));
    if (ecx == 0) {
        goto label_0;
    }
    if (*(rax) != r14) {
        goto label_0;
    }
label_2:
    eax = 0xffffffff;
    return rax;
label_7:
    if (r11 == -1) {
        goto label_0;
    }
    rax = *((rsp + 8));
    r12 = *((rsp + 0x28));
    rsi = r14;
    *((rsp + 0x30)) = r13;
    *((rsp + 0x38)) = rbx;
    r14 = r15;
    r13 = r11;
    r15 = rbp;
    r12 += *((rax + 0xd8));
    rax = rbp + rbp*2;
    rax <<= 3;
    rbx = rax;
label_4:
    if (*(r12) != r15) {
        goto label_9;
    }
    if (rbp <= 0x3f) {
        eax = *((r12 + 0x22));
        if ((*((rsp + 0x18)) & rax) == 0) {
            goto label_9;
        }
    }
    rax = *((r14 + 0x28));
    rax = *((rax + rbx + 0x10));
    rcx = *(rax);
    if (*((rsp + 0x10)) == rcx) {
        goto label_10;
    }
    eax = fcn_00408780 (*((rsp + 8)), *(rsp), rbp, rcx, r13);
    goto label_1;
    if (eax == 0xffffffff) {
        goto label_2;
    }
    if (eax != 0) {
        goto label_11;
    }
    esi = *((rsp + 4));
    if (esi != 0) {
        goto label_3;
    }
label_11:
    if (rbp <= 0x3f) {
        eax = *((rsp + 0x26));
        *((r12 + 0x22)) &= ax;
    }
label_9:
    r12 += 0x28;
    if (*((r12 - 8)) != 0) {
        goto label_4;
    }
    rbx = *((rsp + 0x38));
    r11 = r13;
    r13 = *((rsp + 0x30));
    r15 = r14;
    r14 = rbp;
    rbx++;
    if (*((r13 + 8)) > rbx) {
        goto label_5;
    }
label_6:
    eax = *(rsp);
    eax >>= 1;
    return rax;
label_10:
    eax = *(rsp);
    eax &= 1;
    eax = -eax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408990 */
#include <stdint.h>
 
int64_t fcn_00408990 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = *((rdi + 0xd8));
    rsi *= 5;
    rax = rax + rsi*8;
    r10 = *((rax + 0x10));
    if (r10 <= r8) {
        rax = *((rax + 0x18));
        if (rax >= r8) {
            esi = 0;
            sil = (r10 == r8) ? 1 : 0;
            if (rax != r8) {
                eax = 0;
                if (r10 == r8) {
                    goto label_0;
                }
                return rax;
            }
            esi |= 2;
label_0:
            r8 = r9;
invalid_funccall(); //            void (*0x408780)() ();
        }
        eax = 1;
        return rax;
    }
    eax = 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408a00 */
#include <stdint.h>
 
int64_t fcn_00408a00 (size_t arg2, void ** ptr) {
    rsi = arg2;
    rdi = ptr;
    rbx = rdi;
    if (*((rdi + 0x90)) > 1) {
        rax = 0x1fffffffffffffff;
        if (rsi > rax) {
            goto label_0;
        }
        rax = realloc (*((rdi + 0x10)), rsi*4);
        if (rax == 0) {
            goto label_0;
        }
        rdi = *((rbx + 0x18));
        *((rbx + 0x10)) = rax;
        if (rdi == 0) {
            goto label_1;
        }
        rax = realloc (rdi, rbp*8);
        if (rax == 0) {
            goto label_0;
        }
        *((rbx + 0x18)) = rax;
    }
label_1:
    while (1) {
        *((rbx + 0x40)) = rbp;
        eax = 0;
        return rax;
        rax = realloc (*((rbx + 8)), rbp);
        if (rax == 0) {
            goto label_0;
        }
        *((rbx + 8)) = rax;
    }
label_0:
    eax = 0xc;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408aa0 */
#include <stdint.h>
 
int64_t fcn_00408aa0 (uint32_t arg1, size_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    rsi = *((rdi + 8));
    rax = *((rdi + 0x10));
    while (1) {
        rdx = rsi + 1;
        *((rbx + 8)) = rdx;
        *((rax + rsi*8)) = rbp;
        eax = 1;
label_0:
        return rax;
        rsi++;
        rdx = rsi + rsi;
        rsi <<= 4;
        *(rdi) = rdx;
        rax = realloc (rax, rsi);
        if (rax == 0) {
            goto label_1;
        }
        *((rbx + 0x10)) = rax;
        rsi = *((rbx + 8));
    }
label_1:
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408b10 */
#include <stdint.h>
 
int64_t fcn_00408b10 (void * arg1, void * arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    rdx = *(rdi);
    if (rdx != 0) {
        rsi = *((rdi + 8));
        rax = *((rdi + 0x10));
        if (rsi != 0) {
            goto label_3;
        }
        *(rax) = rbp;
        eax = 1;
        *((rdi + 8))++;
label_0:
        return rax;
    }
    *(rdi) = 1;
    *((rdi + 8)) = 1;
    rax = malloc (8);
    *((rbx + 0x10)) = rax;
    if (rax == 0) {
        goto label_4;
    }
    *(rax) = rbp;
    eax = 1;
    return rax;
label_3:
    if (rdx == rsi) {
        goto label_5;
    }
label_2:
    rdx = rsi*8;
    if (*(rax) <= rbp) {
        goto label_6;
    }
    if (rsi <= 0) {
        goto label_1;
    }
    rdx += rax;
    do {
        rcx = *((rdx - 8));
        rdx -= 8;
        *((rdx + 8)) = rcx;
    } while (rdx != rax);
    edx = 0;
    do {
label_1:
        *((rax + rdx)) = rbp;
        eax = 1;
        *((rbx + 8))++;
        goto label_0;
label_6:
        rcx = *((rax + rdx - 8));
    } while (rbp >= rcx);
    do {
        *((rax + rdx)) = rcx;
        rdx -= 8;
        rcx = *((rax + rdx - 8));
    } while (rcx > rbp);
    goto label_1;
label_4:
    *((rbx + 8)) = 0;
    *(rbx) = 0;
    goto label_0;
label_5:
    rdx = rsi + rsi;
    rsi <<= 4;
    *(rdi) = rdx;
    rax = realloc (rax, rsi);
    if (rax != 0) {
        *((rbx + 0x10)) = rax;
        rsi = *((rbx + 8));
        goto label_2;
    }
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408c40 */
#include <stdint.h>
 
uint64_t fcn_00408c40 (int64_t arg1, int64_t arg3, size_t * size) {
    rdi = arg1;
    rdx = arg3;
    rsi = size;
    r14 = rdi;
    r13 = rdx;
    r12 = rsi + 0x20;
    r15 = *((rsi + 0x10));
    *(rsi) = rdx;
    *((rsi + 0x28)) = 0;
    *((rsi + 0x20)) = r15;
    rax = malloc (r15*8);
    *((rbp + 0x30)) = rax;
    if (rax == 0) {
        goto label_2;
    }
    ebx = 0;
    if (r15 > 0) {
        goto label_3;
    }
    goto label_4;
    do {
label_0:
        rbx++;
        if (*((rbp + 0x10)) <= rbx) {
            goto label_4;
        }
label_3:
        rax = *((rbp + 0x18));
        rsi = *((rax + rbx*8));
        rax = *((rax + rbx*8));
        rax <<= 4;
        rax += *(r14);
    } while ((*((rax + 8)) & 8) != 0);
    al = fcn_00408aa0 (r12, rsi);
    if (al != 0) {
        goto label_0;
    }
    do {
label_2:
        eax = 0xc;
        return rax;
label_4:
        rax = *((r14 + 0x40));
        r13 &= *((r14 + 0x88));
        rdx = r13 * 3;
        rbx = rax + rdx*8;
        rdx = *(rbx);
        rax = *((rbx + 0x10));
        rsi = rdx + 1;
        if (*((rbx + 8)) > rdx) {
label_1:
            *(rbx) = rsi;
            *((rax + rdx*8)) = rbp;
            eax = 0;
            return rax;
        }
        r12 = rsi + rsi;
        rsi <<= 4;
        rax = realloc (rax, rsi);
    } while (rax == 0);
    rdx = *(rbx);
    *((rbx + 0x10)) = rax;
    *((rbx + 8)) = r12;
    rsi = rdx + 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408d40 */
#include <stdint.h>
 
uint32_t fcn_00408d40 (int64_t arg2) {
    rsi = arg2;
    ebx = (int32_t) dil;
    eax = btowc (ebx);
    if (eax == 0xffffffff) {
        if (rbp != 0) {
            eax = ebx;
            goto label_0;
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408d70 */
#include <stdint.h>
 
uint64_t fcn_00408d70 (uint32_t arg1) {
    rdi = arg1;
    r12 = *((rdi + 0x58));
    if (*((rdi + 0x40)) <= r12) {
        r12 = *((rdi + 0x40));
    }
    rbx = *((rdi + 0x30));
    if (r12 <= rbx) {
        goto label_1;
    }
    rax = ctype_toupper_loc ();
    do {
        rdx = *(rbp);
        rcx = *((rbp + 0x78));
        rdx += rbx;
        rdx += *((rbp + 0x28));
        edx = *(rdx);
        if (rcx != 0) {
            goto label_2;
        }
label_0:
        rsi = *(rax);
        rcx = *((rbp + 8));
        edx = *((rsi + rdx*4));
        *((rcx + rbx)) = dl;
        rbx++;
    } while (r12 != rbx);
    *((rbp + 0x30)) = r12;
    *((rbp + 0x38)) = r12;
    return rax;
label_2:
    edx = *((rcx + rdx));
    goto label_0;
label_1:
    r12 = rbx;
    *((rbp + 0x30)) = r12;
    *((rbp + 0x38)) = r12;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408df0 */
#include <stdint.h>
 
uint64_t fcn_00408df0 (uint32_t arg1) {
    int64_t var_ch;
    int64_t var_10h;
    rdi = arg1;
    rbx = rdi;
    r12 = *((rdi + 0x58));
    rbp = *((rdi + 0x30));
    if (*((rdi + 0x40)) <= r12) {
        r12 = *((rdi + 0x40));
    }
    if (r12 <= rbp) {
        goto label_2;
    }
    r13 = rdi + 0x20;
label_0:
    rdi = *((rbx + 0x78));
    rdx = r12;
    r14 = *((rbx + 0x20));
    rdx -= rbp;
    if (rdi != 0) {
        goto label_7;
    }
    rsi += rbp;
    rsi += *(rbx);
label_3:
    rax = fcn_004083e0 (rsp + 0xc, *((rbx + 0x28)), rdx, r13);
    rdx = rax - 1;
    if (rdx > 0xfffffffffffffffd) {
        goto label_5;
    }
    edx = *((rsp + 0xc));
    if (rax == 0xfffffffffffffffe) {
        goto label_8;
    }
label_1:
    rcx = *((rbx + 0x10));
    rsi = rbp + 1;
    rdi = rbp*4;
    *((rcx + rbp*4)) = edx;
    rbp += rax;
    if (rsi >= rbp) {
        goto label_9;
    }
    rdx = rcx + rdi + 4;
    rcx = rcx + rbp*4;
    do {
        *(rdx) = 0xffffffff;
        rdx += 4;
    } while (rcx != rdx);
    if (rbp < r12) {
        goto label_0;
    }
label_2:
    *((rbx + 0x30)) = rbp;
    *((rbx + 0x38)) = rbp;
    return rax;
label_5:
    rax = *(rbx);
    rcx = *((rbx + 0x78));
    rax += rbp;
    rax += *((rbx + 0x28));
    edx = *(rax);
    *((rsp + 0xc)) = edx;
    if (rcx != 0) {
        goto label_10;
    }
label_6:
    *((rbx + 0x20)) = r14;
    eax = 1;
    goto label_1;
label_9:
    if (rbp < r12) {
        goto label_0;
    }
    goto label_2;
label_7:
    eax = *((rbx + 0x90));
    if (eax <= 0) {
        goto label_11;
    }
    eax = 0;
    rsi = rsp + 0x10;
    if (rdx > 0) {
        goto label_12;
    }
    goto label_11;
label_4:
    rax++;
    if (rdx == rax) {
        goto label_3;
    }
    rdi = *((rbx + 0x78));
label_12:
    rcx = *(rbx);
    rcx += rbp;
    rcx += rax;
    rcx += *((rbx + 0x28));
    ecx = *(rcx);
    ecx = *((rdi + rcx));
    rdi = *((rbx + 8));
    rdi += rbp;
    *((rdi + rax)) = cl;
    *((rsi + rax)) = cl;
    ecx = rax + 1;
    if (*((rbx + 0x90)) > ecx) {
        goto label_4;
    }
    goto label_3;
label_8:
    rax = *((rbx + 0x58));
    if (*((rbx + 0x40)) >= rax) {
        goto label_5;
    }
    *((rbx + 0x20)) = r14;
    goto label_2;
label_10:
    edx = *((rcx + rdx));
    *((rsp + 0xc)) = edx;
    goto label_6;
label_11:
    rsi = rsp + 0x10;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x408fa0 */
#include <stdint.h>
 
uint64_t fcn_00408fa0 (uint32_t arg1) {
    void * var_8h;
    void * var_10h;
    int64_t var_18h;
    wint_t wc;
    mbstate_t * ps;
    char * s2;
    rdi = arg1;
    r14 = rdi;
    rbx = *((rdi + 0x58));
    if (*((rdi + 0x40)) <= rbx) {
        rbx = *((rdi + 0x40));
    }
    r15 = *((rdi + 0x30));
    if (*((rdi + 0x8a)) == 0) {
        if (*((rdi + 0x78)) == 0) {
            goto label_17;
        }
    }
label_1:
    r12 = *((r14 + 0x38));
    do {
label_0:
        if (r15 >= rbx) {
            goto label_18;
        }
        rax = r14 + 0x20;
        *(rsp) = rax;
        rax = rbx;
        rax -= r15;
        *((rsp + 0x10)) = rax;
        rax = rsp + 0x24;
        *((rsp + 0x18)) = rax;
label_7:
        rax = *((r14 + 0x20));
        rdx = *((r14 + 0x78));
        *((rsp + 0x28)) = rax;
        if (rdx != 0) {
            goto label_19;
        }
        rbp = *((r14 + 0x28));
        rbp += r12;
        rbp += *(r14);
        *((rsp + 8)) = rbp;
label_6:
        rax = fcn_004083e0 (*((rsp + 0x18)), *((rsp + 8)), *((rsp + 0x10)), *(rsp));
        if (rax > 0xfffffffffffffffd) {
            goto label_20;
        }
        edx = *((rsp + 0x24));
        *(rsp) = edx;
        eax = towupper (*((rsp + 0x24)));
        edx = *(rsp);
        r8 = r15;
        r13d = eax;
        if (edx == eax) {
            goto label_11;
        }
        rcx = rsp + 0x30;
        *((rsp + 0x10)) = r15;
        rdi = rcx;
        *(rsp) = rcx;
        rax = wcrtomb (rdi, eax, rsp + 0x28);
        rcx = *(rsp);
        r8 = *((rsp + 0x10));
        r10 = rax;
        if (rbp != rax) {
            goto label_21;
        }
        *(rsp) = r8;
        rdi += r15;
        memcpy (*((r14 + 8)), rcx, rbp);
        r8 = *(rsp);
label_8:
        if (*((r14 + 0x8c)) != 0) {
            goto label_22;
        }
        rax = r12 + rbp;
label_10:
        r12 = rax;
        rax = *((r14 + 0x10));
        r15++;
        rsi = r8 + rbp;
        rdx = r8*4;
        *((rax + r8*4)) = r13d;
    } while (r15 >= rsi);
    rdx = rax + rdx + 4;
    rcx = rax + rsi*4;
    do {
        *(rdx) = 0xffffffff;
        rdx += 4;
    } while (rcx != rdx);
    r15 = rsi;
    goto label_0;
label_9:
    rax = *((rsp + 0x28));
    *((r14 + 0x20)) = rax;
label_18:
    *((r14 + 0x30)) = r15;
    eax = 0;
    *((r14 + 0x38)) = r12;
label_3:
    return rax;
label_17:
    if (*((rdi + 0x8c)) != 0) {
        goto label_1;
    }
    if (r15 >= rbx) {
        goto label_12;
    }
    rax = rdi + 0x20;
    *(rsp) = rax;
label_2:
    r12 = *((r14 + 0x28));
    r12 += r15;
    r12 += *(r14);
    r13d = *(r12);
    if ((r13b & 0x80) == 0) {
        eax = mbsinit (*(rsp));
        if (eax != 0) {
            goto label_23;
        }
    }
    rax = *((r14 + 0x20));
    rdx -= r15;
    *((rsp + 0x28)) = rax;
    rax = rsp + 0x24;
    rdi = rax;
    *((rsp + 0x10)) = rdx;
    *((rsp + 0x18)) = rax;
    rax = fcn_004083e0 (rdi, r12, rbx, *(rsp));
    r12 = rax;
    if (rax > 0xfffffffffffffffd) {
        goto label_24;
    }
    edx = *((rsp + 0x24));
    *((rsp + 8)) = edx;
    eax = towupper (*((rsp + 0x24)));
    edx = *((rsp + 8));
    r13d = eax;
    if (edx == eax) {
        goto label_25;
    }
    rax = wcrtomb (rsp + 0x30, eax, rsp + 0x28);
    if (r12 != rax) {
        goto label_26;
    }
    rdi += r15;
    memcpy (*((r14 + 8)), rsp + 0x30, r12);
label_4:
    rax = *((r14 + 0x10));
    rdx = rbp*4;
    r15++;
    *((rax + rbp*4)) = r13d;
    rbp += r12;
    if (r15 >= rbp) {
        goto label_5;
    }
    rcx = rax + rdx + 4;
    rax = rax + rbp*4;
    do {
        *(rcx) = 0xffffffff;
        rcx += 4;
    } while (rax != rcx);
    r15 = rbp;
label_5:
    if (rbx > r15) {
        goto label_2;
    }
label_12:
    *((r14 + 0x30)) = r15;
    eax = 0;
    *((r14 + 0x38)) = r15;
    goto label_3;
label_25:
    rsi += r15;
    rdi += r15;
    rsi += *(r14);
    memcpy (*((r14 + 8)), *((r14 + 0x28)), r12);
    goto label_4;
label_23:
    rax = ctype_toupper_loc ();
    rdx = *((r14 + 8));
    rax = *(rax);
    eax = *((rax + r13*4));
    *((rdx + r15)) = al;
    rdx = *((r14 + 8));
    rax = *((r14 + 0x10));
    edx = *((rdx + r15));
    *((rax + r15*4)) = edx;
    r15++;
    goto label_5;
label_24:
    if (rax == 0xfffffffffffffffe) {
        rax = *((r14 + 0x58));
        if (*((r14 + 0x40)) < rax) {
            goto label_27;
        }
        rax = *(r14);
        rdx = *((r14 + 8));
        rax += r15;
        rax += *((r14 + 0x28));
        eax = *(rax);
        *((rdx + r15)) = al;
        rdx = *((r14 + 0x10));
        r15++;
        *((rdx + rbp*4)) = eax;
        goto label_5;
    }
    rax = *(r14);
    rdx = *((r14 + 8));
    rax += r15;
    rax += *((r14 + 0x28));
    eax = *(rax);
    *((rdx + r15)) = al;
    rdx = *((r14 + 0x10));
    r15++;
    *((rdx + rbp*4)) = eax;
    rax = *((rsp + 0x28));
    *((r14 + 0x20)) = rax;
    goto label_5;
label_19:
    eax = *((r14 + 0x90));
    if (eax <= 0) {
        goto label_28;
    }
    if (*((rsp + 0x10)) <= 0) {
        goto label_28;
    }
    rdi = *((r14 + 0x28));
    r10d = rax - 1;
    rcx = rsp + 0x30;
    eax = 0;
    rdi += r12;
    rdi += *(r14);
    while (r10 != rax) {
        rax++;
        if (*((rsp + 0x10)) == rax) {
            goto label_14;
        }
        esi = *((rdi + rax));
        esi = *((rdx + rsi));
        *((rcx + rax)) = sil;
    }
label_14:
    *((rsp + 8)) = rcx;
    goto label_6;
label_26:
    r12 = r15;
    goto label_7;
label_11:
    *(rsp) = r8;
    rdi += r15;
    rax = memcpy (*((r14 + 8)), *((rsp + 8)), rbp);
    r8 = *(rsp);
    goto label_8;
label_20:
    if (rax != 0xfffffffffffffffe) {
        goto label_29;
    }
    rax = *((r14 + 0x58));
    if (*((r14 + 0x40)) < rax) {
        goto label_9;
    }
label_29:
    rax = *(r14);
    rdx = *((r14 + 0x78));
    rax += r12;
    rax += *((r14 + 0x28));
    eax = *(rax);
    if (rdx != 0) {
        goto label_30;
    }
label_16:
    rdx = *((r14 + 8));
    rcx = r15;
    *((rdx + r15)) = al;
    if (*((r14 + 0x8c)) != 0) {
        goto label_31;
    }
label_15:
    rdx = *((r14 + 0x10));
    r12++;
    r15++;
    *((rdx + rcx*4)) = eax;
    if (rbp != -1) {
        goto label_0;
    }
    rax = *((rsp + 0x28));
    *((r14 + 0x20)) = rax;
    goto label_0;
label_22:
    rax = r12;
    if (rbp == 0) {
        goto label_10;
    }
    rcx = r15;
    rdx = *((r14 + 0x18));
    rax = rbp + r12;
    rcx -= r12;
    rdx = rdx + rcx*8;
    do {
        *((rdx + r12*8)) = r12;
        r12++;
    } while (rax != r12);
    goto label_10;
label_21:
    if (rax == -1) {
        goto label_11;
    }
    rax = r15 + rax;
    rsi = rax;
    *(rsp) = rax;
    rax = *((r14 + 0x40));
    if (rsi > rax) {
        goto label_9;
    }
    if (*((r14 + 0x18)) == 0) {
        goto label_32;
    }
label_13:
    if (*((r14 + 0x8c)) != 0) {
        goto label_33;
    }
    if (r15 == 0) {
        goto label_34;
    }
    rdx = *((r14 + 0x18));
    eax = 0;
    do {
        *((rdx + rax*8)) = rax;
        rax++;
    } while (r15 != rax);
label_34:
    *((r14 + 0x8c)) = 1;
label_33:
    rdx = r10;
    *((rsp + 8)) = r10;
    rdi += r15;
    memcpy (*((r14 + 8)), rcx, rdx);
    rax = *((r14 + 0x10));
    r10 = *((rsp + 8));
    rdi = rbp - 1;
    rsi = rax + r15*4;
    rax = *((r14 + 0x18));
    *(rsi) = r13d;
    rcx = rax + r15*8;
    eax = 1;
    *(rcx) = r12;
    if (r10 <= 1) {
        goto label_35;
    }
    do {
        rdx = rax;
        if (rax >= rbp) {
            rdx = rdi;
        }
        rdx += r12;
        *((rcx + rax*8)) = rdx;
        *((rsi + rax*4)) = 0xffffffff;
        rax++;
    } while (rax != r10);
label_35:
    rbx = *((r14 + 0x58));
    r10 -= rbp;
    rbx += r10;
    *((r14 + 0x58)) = rbx;
    if (r12 < *((r14 + 0x60))) {
        *((r14 + 0x68)) += r10;
    }
    r15 = *(rsp);
    if (*((r14 + 0x40)) <= rbx) {
        rbx = *((r14 + 0x40));
    }
    r12 += rbp;
    goto label_0;
label_27:
    rax = *((rsp + 0x28));
    *((r14 + 0x20)) = rax;
    goto label_12;
label_32:
    *((rsp + 0x10)) = rcx;
    *((rsp + 8)) = r10;
    rax = malloc (rax*8);
    r10 = *((rsp + 8));
    rcx = *((rsp + 0x10));
    *((r14 + 0x18)) = rax;
    if (rax != 0) {
        goto label_13;
    }
    eax = 0xc;
    goto label_3;
label_28:
    rcx = rsp + 0x30;
    goto label_14;
label_31:
    rdx = *((r14 + 0x18));
    *((rdx + r15*8)) = r12;
    goto label_15;
label_30:
    eax = *((rdx + rax));
    goto label_16;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4095a0 */
#include <stdint.h>
 
int64_t fcn_004095a0 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffe;
    rax = *((rdi + 0x40));
    if (rax > rdx) {
        goto label_2;
    }
    rdx = *((rdi + 0x58));
    rax += rax;
    rsi = (int64_t) esi;
    rbx = rdi;
    if (rax > rdx) {
        rax = rdx;
    }
    if (rax >= rsi) {
        rsi = rax;
    }
    eax = fcn_00408a00 (rdi, rsi);
    if (eax != 0) {
        goto label_1;
    }
    rdi = *((rbx + 0xb8));
    if (rdi != 0) {
        rax = *((rbx + 0x40));
        rax = realloc (rdi, rax*8 + 8);
        if (rax == 0) {
            goto label_2;
        }
        *((rbx + 0xb8)) = rax;
    }
    eax = *((rbx + 0x90));
    if (*((rbx + 0x88)) == 0) {
        goto label_3;
    }
    rdi = rbx;
    if (eax <= 1) {
        goto label_4;
    }
invalid_funccall(); //    void (*0x408fa0)() ();
label_0:
    rsi = rax;
    *((rbx + 0x30)) = rsi;
    *((rbx + 0x38)) = rsi;
    do {
label_1:
        eax = ebp;
        return rax;
label_3:
        if (eax > 1) {
            goto label_5;
        }
        rcx = *((rbx + 0x78));
    } while (rcx == 0);
    rsi = *((rbx + 0x58));
    rax = *((rbx + 0x30));
    if (*((rbx + 0x40)) <= rsi) {
        rsi = *((rbx + 0x40));
    }
    if (rsi > rax) {
        goto label_6;
    }
    goto label_0;
    do {
        rcx = *((rbx + 0x78));
label_6:
        rdx = *(rbx);
        rdx += rax;
        rdx += *((rbx + 0x28));
        edx = *(rdx);
        ecx = *((rcx + rdx));
        rdx = *((rbx + 8));
        *((rdx + rax)) = cl;
        rax++;
    } while (rsi != rax);
    *((rbx + 0x30)) = rsi;
    *((rbx + 0x38)) = rsi;
    goto label_1;
label_5:
    fcn_00408df0 (rbx);
    eax = ebp;
    return rax;
label_4:
    fcn_00408d70 (rdi);
    eax = ebp;
    return rax;
label_2:
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4096f0 */
#include <stdint.h>
 
int64_t fcn_004096f0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x40));
    rbx = rdi;
    r12 = *((rdi + 0xc0));
    if (rax > rsi) {
        goto label_3;
    }
    if (rax >= *((rdi + 0x58))) {
        goto label_3;
    }
    eax = fcn_004095a0 (rbx, rbp + 1);
    while (rax > rbp) {
label_0:
        if (r12 < rbp) {
            goto label_4;
        }
label_2:
        eax = 0;
label_1:
        return rax;
label_3:
        rax = *((rbx + 0x30));
    }
    if (rax >= *((rbx + 0x58))) {
        goto label_0;
    }
    eax = fcn_004095a0 (rbx, rbp + 1);
    if (eax == 0) {
        goto label_0;
    }
    goto label_1;
label_4:
    rax = *((rbx + 0xb8));
    rdx -= r12;
    rdx <<= 3;
    memset (rax + r12*8 + 8, 0, rbp);
    *((rbx + 0xc0)) = rbp;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x409780 */
#include <stdint.h>
 
void fcn_00409780 (void ** ptr) {
    rdi = ptr;
    rbx = rdi;
    free (*(rdi));
    free (*((rbx + 0x18)));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4097a0 */
#include <stdint.h>
 
int32_t fcn_004097a0 (int64_t arg1) {
    rdi = arg1;
    eax = *((rdi + 8));
    eax &= 0x400ff;
    if (eax != 6) {
        if (eax == 3) {
            goto label_0;
        }
        return eax;
    }
    rdi = *(rdi);
invalid_funccall(); //    void (*0x409780)() ();
label_0:
    rdi = *(rdi);
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4097f0 */
#include <stdint.h>
 
int64_t fcn_004097f0 (uint32_t arg1, int64_t arg2, void * arg3) {
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = rsi;
    rbx = rdi;
    rdi = *((rdi + 0x10));
    rbp = *((rbx + 8));
    if (rdi >= rbp) {
        goto label_1;
    }
    r12 = *((rbx + 0x18));
    r13 = *((rbx + 0x28));
    do {
        rax = rdi;
        ecx = edx;
        ecx &= 0xfffc00ff;
        rax <<= 4;
        rax += *(rbx);
        *((rax + 8)) = rdx;
        *(rax) = r15;
        *((rax + 8)) = ecx;
        cl = (dl == 6) ? 1 : 0;
        if (dl == 5) {
            cl = (*((rbx + 0xb4)) > 1) ? 1 : 0;
        }
        edx = *((rax + 0xa));
        ecx <<= 4;
        xmm0 = 0;
        edx &= 0xffffffef;
        edx |= ecx;
        *((rax + 0xa)) = dl;
        *((r12 + rdi*8)) = 0xffffffffffffffff;
        rax = *((rbx + 0x10));
        rax *= 3;
        rax = r13 + rax*8;
        __asm ("movups xmmword [rax], xmm0");
        *((rax + 0x10)) = 0;
        rax = *((rbx + 0x10));
        rdx = rax * 3;
        rax = *((rbx + 0x30));
        rax = rax + rdx*8;
        __asm ("movups xmmword [rax], xmm0");
        *((rax + 0x10)) = 0;
        rax = *((rbx + 0x10));
        rdx = rax + 1;
        *((rbx + 0x10)) = rdx;
label_0:
        return rax;
label_1:
        rax = 0xaaaaaaaaaaaaaaa;
        r14 = rbp + rbp;
        if (r14 > rax) {
            goto label_2;
        }
        *((rsp + 8)) = rdx;
        rsi <<= 5;
        rax = realloc (*(rbx), rbp);
        if (rax == 0) {
            goto label_2;
        }
        r13 = rbp;
        *(rbx) = rax;
        rbp += r14;
        r13 <<= 4;
        rbp <<= 4;
        rax = realloc (*((rbx + 0x18)), r13);
        r12 = rax;
        rax = realloc (*((rbx + 0x20)), r13);
        *(rsp) = rax;
        rax = realloc (*((rbx + 0x28)), rbp);
        r13 = rax;
        rax = realloc (*((rbx + 0x30)), rbp);
        rcx = *(rsp);
        if (r12 == 0) {
            goto label_3;
        }
        if (rcx == 0) {
            goto label_3;
        }
        if (r13 == 0) {
            goto label_3;
        }
        rdx = *((rsp + 8));
        if (rax == 0) {
            goto label_3;
        }
        *((rbx + 0x18)) = r12;
        rdi = *((rbx + 0x10));
        *((rbx + 0x20)) = rcx;
        *((rbx + 0x28)) = r13;
        *((rbx + 0x30)) = rax;
        *((rbx + 8)) = r14;
    } while (1);
label_3:
    *((rsp + 8)) = rax;
    *(rsp) = rcx;
    free (r12);
    rcx = *(rsp);
    free (*(rsp));
    free (r13);
    rax = *((rsp + 8));
    free (*((rsp + 8)));
label_2:
    rax = 0xffffffffffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4099c0 */
#include <stdint.h>
 
int64_t fcn_004099c0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rsi;
    r13 <<= 4;
    r12d = edx;
    rbx = rdi;
    rax = *(rdi);
    rax = fcn_004097f0 (rdi, *((rax + r13)), *((rax + r13 + 8)));
    if (rax != -1) {
        edi = r12d;
        r8 = *(rbx);
        rsi = rax;
        di &= 0x3ff;
        rsi <<= 4;
        ecx = edi;
        rsi += r8;
        ecx &= 0x3ff;
        ecx <<= 8;
        edx = ecx;
        ecx = *((rsi + 8));
        ecx &= 0xfffc00ff;
        ecx |= edx;
        *((rsi + 8)) = ecx;
        edx = *((r8 + r13 + 8));
        ecx &= 0xfffc00ff;
        edx >>= 8;
        edx |= edi;
        edx &= 0x3ff;
        edx <<= 8;
        edx |= ecx;
        ecx = edx;
        *((rsi + 8)) = edx;
        ecx >>= 0x10;
        edx = ecx;
        edx |= 4;
        *((rsi + 0xa)) = dl;
        rdx = *((rbx + 0x20));
        *((rdx + rax*8)) = rbp;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x409a60 */
#include <stdint.h>
 
int64_t fcn_00409a60 (int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5) {
    uint32_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_4:
    r9 = rsi;
    r13 = rdx;
    r12d = r8d;
    rbx = rdi;
    *((rsp + 8)) = rcx;
label_1:
    rcx = *(rbx);
    rax = r9;
    rdi = *((rbx + 0x28));
    r14 = r13;
    rax <<= 4;
    rax += rcx;
    if (*((rax + 8)) == 4) {
        goto label_7;
    }
    r14 = r9 * 3;
    r14 <<= 3;
    r8 = rdi + r14;
    rsi = *((r8 + 8));
    if (rsi == 0) {
        goto label_8;
    }
    rbp = r13 * 3;
    r8 = *((r8 + 0x10));
    rbp <<= 3;
    rdi += rbp;
    r15 = *(r8);
    *((rdi + 8)) = 0;
    if (rsi == 1) {
        goto label_9;
    }
    rdx = *((rbx + 0x10));
    rsi = rdx - 1;
    rax = rsi;
    rax <<= 4;
    rax += rcx;
    if ((*((rax + 0xa)) & 4) == 0) {
        goto label_10;
    }
    if (rsi <= 0) {
        goto label_10;
    }
    rdx <<= 4;
    rcx -= rax;
    r8 = *((rbx + 0x20));
    rcx = rcx + rdx - 0x20;
    while (*((r8 + rsi*8)) != r15) {
label_0:
        rax += rcx;
        rsi--;
        if ((*((rax + 0xa)) & 4) == 0) {
            goto label_10;
        }
        if (rsi <= 0) {
            goto label_10;
        }
    }
    edx = *((rax + 8));
    edx >>= 8;
    edx &= 0x3ff;
    if (r12d != edx) {
        goto label_0;
    }
    al = fcn_00408b10 (rdi, rsi);
    if (al == 0) {
        goto label_2;
    }
label_5:
    rax = *((rbx + 0x28));
    rax = *((rax + r14 + 0x10));
    r9 = *((rax + 8));
    *(rsp) = r9;
    rax = fcn_004099c0 (rbx, *((rax + 8)), r12d);
    r13 = rax;
    if (rax == -1) {
        goto label_2;
    }
label_3:
    rdi += rbp;
    al = fcn_00408b10 (*((rbx + 0x28)), r13);
    r9 = *(rsp);
    if (al != 0) {
        goto label_1;
    }
    do {
label_2:
        eax = 0xc;
label_6:
        return rax;
label_9:
        if (r9 == *((rsp + 8))) {
            if (r9 != r13) {
                goto label_11;
            }
        }
        eax = *((rax + 8));
        eax >>= 8;
        eax &= 0x3ff;
        r12d |= eax;
        rax = fcn_004099c0 (rbx, r15, r12d);
        r13 = rax;
    } while (rax == -1);
    rdi += rbp;
    al = fcn_00408b10 (*((rbx + 0x28)), rax);
    if (al == 0) {
        goto label_2;
    }
    r9 = r15;
    goto label_1;
label_7:
    rax = *((rbx + 0x18));
    rbp = r13 * 3;
    r15 = r9*8;
    rbp <<= 3;
    r9 = *((rax + r9*8));
    *((rdi + rbp + 8)) = 0;
    rsi = r9;
    *(rsp) = r9;
    rax = fcn_004099c0 (rbx, rsi, r12d);
    r9 = *(rsp);
    r13 = rax;
    if (rax == -1) {
        goto label_2;
    }
    rax = *((rbx + 0x18));
    *(rsp) = r9;
    rcx = *((rax + r15));
    *((rax + r14*8)) = rcx;
    goto label_3;
label_10:
    rax = fcn_004099c0 (rbx, r15, r12d);
    r13 = rax;
    if (rax == -1) {
        goto label_2;
    }
    rdi += rbp;
    al = fcn_00408b10 (*((rbx + 0x28)), r13);
    if (al == 0) {
        goto label_2;
    }
    eax = fcn_00409a60 (rbx, r15, r13, *((rsp + 8)), r12d);
    goto label_4;
    if (eax == 0) {
        goto label_5;
    }
    goto label_6;
label_8:
    rax = *((rbx + 0x18));
    rcx = *((rax + r9*8));
    *((rax + r13*8)) = rcx;
    eax = 0;
    goto label_6;
label_11:
    eax = fcn_00408b10 (rdi, r15);
    edx = eax;
    eax = 0;
    if (dl != 0) {
        goto label_6;
    }
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x409cf0 */
#include <stdint.h>
 
int64_t fcn_00409cf0 (void ** ptr) {
    rdi = ptr;
    rbx = rdi;
    free (*((rdi + 0x30)));
    free (*((rbx + 0x48)));
    rax = *((rbx + 0x50));
    rdx = rbx + 8;
    if (rax != rdx) {
        free (*((rax + 0x10)));
        free (*((rbx + 0x50)));
    }
    free (*((rbx + 0x18)));
    free (*((rbx + 0x60)));
    free (*((rbx + 0x58)));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x409d50 */
#include <stdint.h>
 
void fcn_00409d50 (void ** ptr) {
    rdi = ptr;
    rbx = rdi;
    free (*((rdi + 0x10)));
    free (*((rbx + 0x18)));
    if (*((rbx + 0x8b)) == 0) {
        return;
    }
    rdi = *((rbx + 8));
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x409d90 */
#include <stdint.h>
 
int64_t fcn_00409d90 (int64_t arg1) {
    rdi = arg1;
    r14 = rdi;
    if (*((rdi + 0xe8)) <= 0) {
        goto label_1;
    }
    r13d = 0;
label_0:
    rax = *((r14 + 0xf8));
    r12 = *((rax + r13*8));
    if (*((r12 + 0x20)) <= 0) {
        goto label_2;
    }
    ebx = 0;
    do {
        rax = *((r12 + 0x28));
        rbp = *((rax + rbx*8));
        rbx++;
        free (*((rbp + 0x20)));
        free (rbp);
    } while (*((r12 + 0x20)) > rbx);
label_2:
    free (*((r12 + 0x28)));
    rax = *((r12 + 0x10));
    if (rax != 0) {
        free (*((rax + 0x10)));
        free (*((r12 + 0x10)));
    }
    r13++;
    free (r12);
    if (*((r14 + 0xe8)) > r13) {
        goto label_0;
    }
label_1:
    *((r14 + 0xe8)) = 0;
    *((r14 + 0xc8)) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a0d0 */
#include <stdint.h>
 
uint64_t fcn_0040a0d0 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rcx = *((rdi + 0x30));
    rax = rsi + 1;
    if (rax >= rcx) {
        goto label_0;
    }
    rdx = *((rdi + 0x10));
    rdi = rax*4;
    if (*((rdx + rax*4)) != 0xffffffff) {
        goto label_0;
    }
    rcx -= rsi;
    rsi = rdx + rdi - 4;
    edx = 2;
    while (rdx != rcx) {
        rdx++;
        if (*((rsi + rdx*4 - 4)) != 0xffffffff) {
            goto label_1;
        }
        eax = edx;
    }
    return rax;
label_0:
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a120 */
#include <stdint.h>
 
uint64_t fcn_0040a120 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    eax = 0;
    if (rdi <= 0) {
        goto label_1;
    }
    r8 = *(rsi);
    rdi--;
    esi = 0;
label_0:
    if (rsi >= rdi) {
        goto label_2;
    }
    rcx = rsi + rdi;
    rcx >>= 1;
    if (rdx <= *((r8 + rcx*8))) {
        goto label_3;
    }
    goto label_4;
    do {
        rax = rsi + rcx;
        rax >>= 1;
        if (*((r8 + rax*8)) < rdx) {
            goto label_5;
        }
        rcx = rax;
INVALID_JUMP;
    } while (rsi < rcx);
label_2:
    eax = 0;
    if (rdx != *((r8 + rsi*8))) {
label_1:
        return rax;
label_4:
        rax = rcx;
        rcx = rdi;
label_5:
        rsi = rax + 1;
        rdi = rcx;
        goto label_0;
    }
    rax = rsi + 1;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a190 */
#include <stdint.h>
 
uint64_t fcn_0040a190 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_0:
    r15 = rcx;
    r14 = rsi + 0x10;
    r13d = r8d;
    r12 = rdi;
    rbx = rdx;
    do {
        rax = fcn_0040a120 (*((rbp + 8)), r14, rbx);
        if (rax != 0) {
            goto label_2;
        }
        rax = rbx;
        rax <<= 4;
        rax += *(r12);
        edx = *((rax + 8));
        if (edx == r13d) {
            if (*(rax) == r15) {
                goto label_3;
            }
        }
        al = fcn_00408b10 (rbp, rbx);
        if (al == 0) {
            goto label_4;
        }
        rbx *= 3;
        rdx = *((r12 + 0x28));
        rbx <<= 3;
        rdx += rbx;
        rax = *((rdx + 8));
        if (rax == 0) {
            goto label_2;
        }
        rdx = *((rdx + 0x10));
        if (rax == 2) {
            goto label_5;
        }
label_1:
        rbx = *(rdx);
    } while (1);
label_5:
    eax = fcn_0040a190 (r12, rbp, *((rdx + 8)), r15, r13d);
    goto label_0;
    if (eax == 0) {
        rax = *((r12 + 0x28));
        rdx = *((rax + rbx + 0x10));
        goto label_1;
label_3:
        if (r13d != 9) {
            goto label_2;
        }
        al = fcn_00408b10 (rbp, rbx);
        if (al != 0) {
            goto label_2;
        }
label_4:
        eax = 0xc;
    }
    return rax;
label_2:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a290 */
#include <stdint.h>
 
int64_t fcn_0040a290 (int32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx >= *(rdi)) {
        goto label_0;
    }
    rax = *(rsi);
    do {
        rcx = *((rax + rdx*8 + 8));
        *((rax + rdx*8)) = rcx;
        rdx++;
    } while (rdx < *(rdi));
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a3b0 */
#include <stdint.h>
 
int64_t fcn_0040a3b0 (int64_t arg_80h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    ebx = 0;
    rax = *((rdi + 0x98));
    r15 = *((rdi + 0xc8));
    r12 = *((rsp + 0x80));
    *((rsp + 8)) = rax;
    rax = r15;
label_0:
    if (rbx >= rax) {
        goto label_5;
    }
    r11 = rbx + rax;
    rbp = *((rdi + 0xd8));
    r10 = r11;
    r10 >>= 0x3f;
    r10 += r11;
    r10 >>= 1;
    r11 = r10 * 5;
    if (r8 <= *((rbp + r11*8 + 8))) {
        goto label_6;
    }
    goto label_7;
    do {
        r11 = rbx + r10;
        rax = r11;
        rax >>= 0x3f;
        rax += r11;
        rax >>= 1;
        r11 = rax * 5;
        r13 = rax;
        if (*((rbp + r11*8 + 8)) < r8) {
            goto label_8;
        }
        r10 = rax;
INVALID_JUMP;
    } while (rbx < r10);
label_5:
    if (r15 <= rbx) {
        goto label_9;
    }
    r11 = *((rdi + 0xd8));
    rax = rbx * 5;
    rax = r11 + rax*8;
    rax = 0xffffffffffffffff;
    if (r8 != *((rax + 8))) {
        rbx = rax;
    }
label_3:
    rax = r15;
    ebp = 0;
label_1:
    if (rbp >= rax) {
        goto label_10;
    }
    r11 = rbp + rax;
    r10 = r11;
    r10 >>= 0x3f;
    r10 += r11;
    r11 = *((rdi + 0xd8));
    r10 >>= 1;
    r13 = r10 * 5;
    if (r12 <= *((r11 + r13*8 + 8))) {
        goto label_11;
    }
    goto label_12;
    do {
        r13 = rbp + r10;
        rax = r13;
        rax >>= 0x3f;
        rax += r13;
        rax >>= 1;
        r13 = rax * 5;
        r14 = rax;
        if (*((r11 + r13*8 + 8)) < r12) {
            goto label_13;
        }
        r10 = rax;
INVALID_JUMP;
    } while (rbp < r10);
label_10:
    if (r15 <= rbp) {
        goto label_14;
    }
    r10 = *((rdi + 0xd8));
    rax = rbp + rbp*4;
    rax = r10 + rax*8;
    rax = 0xffffffffffffffff;
    if (r12 != *((rax + 8))) {
    }
label_4:
    if (*(rsi) <= 0) {
        goto label_15;
    }
    *((rsp + 0x20)) = r9;
    r13 = rdi;
    r14d = 0;
    r15 = r12;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rcx;
    *((rsp + 0x38)) = rsi;
    *((rsp + 0x28)) = rbx;
    *((rsp + 0x30)) = rbp;
    do {
        rax = *(rbp);
        rdx = *((r13 + 0xd8));
        rax = rsi * 5;
        rax = rdx + rax*8;
        rdx = *((rsp + 8));
        rax = *(rax);
        rax <<= 4;
        rax += *(rdx);
        r12 = *(rax);
        eax = fcn_00408990 (r13, *((rax + r14*8)), *(rax), *((rsp + 0x10)), *((rsp + 0x18)), *((rsp + 0x28)));
        ebx = eax;
        rax = *(rbp);
        eax = fcn_00408990 (r13, *((rax + r14*8)), r12, *((rsp + 0x20)), r15, *((rsp + 0x30)));
        if (ebx != eax) {
            eax = 1;
label_2:
            return rax;
label_7:
            r13 = r10;
            r10 = rax;
label_8:
            rbx = r13 + 1;
            rax = r10;
            goto label_0;
label_12:
            r14 = r10;
            r10 = rax;
label_13:
            rbp = r14 + 1;
            rax = r10;
            goto label_1;
        }
        rax = *((rsp + 0x38));
        r14++;
    } while (r14 < *(rax));
label_15:
    eax = 0;
    goto label_2;
label_9:
    rbx = 0xffffffffffffffff;
    goto label_3;
label_14:
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a600 */
#include <stdint.h>
 
uint32_t fcn_0040a600 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rsi;
    rbx = rdi;
    while (rdx != 0) {
label_0:
        rbx = rdx;
        rsi = rdx;
        rdi = rbp;
invalid_funccall(); //        eax = void (*r12)() ();
        if (eax != 0) {
            goto label_2;
        }
        rdx = *((rbx + 8));
        ecx = 0;
    }
    goto label_3;
label_1:
    rbx = rdx;
label_3:
    rdx = *((rbx + 0x10));
    if (rdx == rcx) {
        goto label_4;
    }
    if (rdx != 0) {
        goto label_0;
    }
label_4:
    rdx = *(rbx);
    rcx = rbx;
    if (rdx != 0) {
        goto label_1;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a660 */
#include <stdint.h>
 
int64_t fcn_0040a660 (int64_t arg2, void ** ptr) {
    rsi = arg2;
    rdi = ptr;
    if (rsi == 0) {
        goto label_5;
    }
    rax = *((rsi + 8));
    if (rax == 0) {
        goto label_5;
    }
    r12 = rsi;
    rdx = *((rdi + 8));
    rbx = rdi;
    rsi = *(rdi);
    rcx = rdx + rax*2;
    if (rsi < rcx) {
        goto label_6;
    }
    if (rdx == 0) {
        goto label_7;
    }
label_2:
    rbp = rdx + rax*2;
    rax--;
    rdx--;
    rdi = rax;
    rdi = ~rdi;
label_1:
    if (rdi >= 0) {
        goto label_8;
    }
    do {
        if (rdx < 0) {
            goto label_8;
        }
        rsi = *((r12 + 0x10));
        rcx = *((rbx + 0x10));
        rsi = *((rsi + rax*8));
        if (*((rcx + rdx*8)) == rsi) {
            goto label_9;
        }
        if (*((rcx + rdx*8)) >= rsi) {
            goto label_10;
        }
        rax--;
        rbp--;
        rdi = rax;
        *((rcx + rbp*8)) = rsi;
        rdi = ~rdi;
    } while (rdi < 0);
label_8:
    if (rax >= 0) {
        rax++;
        rdx = *((rbx + 0x10));
        rbp -= rax;
        memcpy (rdx + rbp*8, *((r12 + 0x10)), rax*8);
    }
    rcx = *((rbx + 8));
    rax = *((r12 + 8));
    r8 = rcx + rax*2 - 1;
    rdx = r8;
    rdx -= rbp;
    rdx++;
    if (rdx == 0) {
        goto label_3;
    }
    rax = rcx - 1;
    rcx += rdx;
    rdi = *((rbx + 0x10));
    *((rbx + 8)) = rcx;
    do {
label_0:
        rsi = *((rdi + r8*8));
        rcx = *((rdi + rax*8));
        r9 = rax + rdx;
        r9 = rdi + r9*8;
        if (rsi <= rcx) {
            goto label_11;
        }
        r8--;
        *(r9) = rsi;
        rdx--;
    } while (rdx != 0);
label_3:
    eax = 0;
label_4:
    return rax;
label_11:
    *(r9) = rcx;
    rax--;
    if (rax >= 0) {
        goto label_0;
    }
    rdx <<= 3;
    eax = memcpy (rdi, rdi + rbp*8, rdx);
    eax = 0;
    return rax;
label_9:
    rax--;
    rdx--;
    rdi = rax;
    rdi = ~rdi;
    goto label_1;
label_10:
    rdx--;
    goto label_1;
label_5:
    eax = 0;
    return rax;
label_6:
    rax += rsi;
    rbp = rax + rax;
    rax <<= 4;
    rax = realloc (*((rdi + 0x10)), rax);
    if (rax == 0) {
        goto label_12;
    }
    rdx = *((rbx + 8));
    *((rbx + 0x10)) = rax;
    *(rbx) = rbp;
    rax = *((r12 + 8));
    if (rdx != 0) {
        goto label_2;
    }
label_7:
    *((rbx + 8)) = rax;
    rax = *((r12 + 8));
    memcpy (*((rbx + 0x10)), *((r12 + 0x10)), rax*8);
    goto label_3;
label_12:
    eax = 0xc;
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40a830 */
#include <stdint.h>
 
int64_t fcn_0040a830 (int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4) {
    uint32_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    void * var_20h;
    int64_t var_30h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
label_0:
    r15 = rsi;
    r12 = rdx;
    rbp = rdx * 3;
    rbp <<= 3;
    rbx = *((rsi + 0x28));
    *(rsp) = rdi;
    rbx += rbp;
    *((rsp + 0xc)) = ecx;
    rax = *((rbx + 8));
    *((rsp + 0x18)) = 0;
    *((rsp + 0x10)) = rdi;
    rdi <<= 3;
    rax = malloc (rax + 1);
    *((rsp + 0x20)) = rax;
    if (rax == 0) {
        goto label_6;
    }
    rax = *((r15 + 0x30));
    rdx = *(r15);
    r13 = r12;
    r13 <<= 4;
    *((rax + rbp + 8)) = 0xffffffffffffffff;
    rax = rdx + r13;
    r8d = *((rax + 8));
    if ((r8d & 0x3ff00) != 0) {
        goto label_7;
    }
label_4:
    if ((*((rax + 8)) & 8) == 0) {
        goto label_8;
    }
    rsi = *((r15 + 0x28));
    rax = rsi + rbp;
    if (*((rax + 8)) <= 0) {
        goto label_8;
    }
    r13d = 0;
    r14d = 0;
    while (rcx != 0) {
        __asm ("movdqu xmm0, xmmword [rax]");
        *((rsp + 0x30)) = xmm0;
        rax = *((rax + 0x10));
        *((rsp + 0x40)) = rax;
label_1:
        eax = fcn_0040a660 (rsp + 0x10, rsp + 0x30);
        if (eax != 0) {
            goto label_5;
        }
        rax = *((r15 + 0x30));
        if (*((rax + rbx + 8)) == 0) {
            goto label_9;
        }
label_2:
        rsi = *((r15 + 0x28));
        r14++;
        rax = rsi + rbp;
        if (*((rax + 8)) <= r14) {
            goto label_10;
        }
label_3:
        rax = *((rax + 0x10));
        rdx = *((rax + r14*8));
        rax = *((r15 + 0x30));
        rbx = rdx * 3;
        rbx <<= 3;
        rax += rbx;
        rcx = *((rax + 8));
        if (rcx == -1) {
            goto label_11;
        }
    }
    eax = fcn_0040a830 (rsp + 0x30, r15, rdx, rcx);
    goto label_0;
    if (eax == 0) {
        goto label_1;
    }
label_5:
    return rax;
label_9:
    r13d = 1;
    free (*((rsp + 0x40)));
    goto label_2;
label_11:
    rax = rsi + rbp;
    r13d = 1;
    r14++;
    if (*((rax + 8)) > r14) {
        goto label_3;
    }
label_10:
    al = fcn_00408b10 (rsp + 0x10, r12);
    if (al == 0) {
        goto label_6;
    }
    rax = *((r15 + 0x30));
    rdx = rax + rbp;
    if (*((rsp + 0xc)) == 1) {
        goto label_12;
    }
    if (r13b == 0) {
        goto label_12;
    }
    *((rdx + 8)) = 0;
    goto label_13;
label_7:
    if (*((rbx + 8)) == 0) {
        goto label_8;
    }
    rcx = *((rbx + 0x10));
    rcx = *(rcx);
    rcx <<= 4;
    if ((*((rdx + rcx + 0xa)) & 4) != 0) {
        goto label_4;
    }
    r8d >>= 8;
    rcx = r12;
    rdx = r12;
    r8d &= 0x3ff;
    eax = fcn_00409a60 (r15, r12, rdx, rcx, r8);
    if (eax != 0) {
        goto label_5;
    }
    rax = *(r15);
    rax += r13;
    goto label_4;
label_8:
    al = fcn_00408b10 (rsp + 0x10, r12);
    if (al != 0) {
        rax = *((r15 + 0x30));
label_12:
        __asm ("movdqa xmm2, xmmword [rsp + 0x10]");
        __asm ("movups xmmword [rax + rbp], xmm2");
        rdx = *((rsp + 0x20));
        *((rax + rbp + 0x10)) = rdx;
label_13:
        rdx = *(rsp);
        rax = *((rsp + 0x20));
        __asm ("movdqa xmm1, xmmword [rsp + 0x10]");
        *((rdx + 0x10)) = rax;
        eax = 0;
        *(rdx) = xmm1;
        return rax;
    }
label_6:
    eax = 0xc;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40aa90 */
#include <stdint.h>
 
uint64_t fcn_0040aa90 (int64_t arg1, int64_t arg3, int64_t arg4, size_t * size) {
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    void * ptr;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    rsi = size;
    r14 = rsi;
    r13 = rdi;
    ebx = ecx;
    r12 = *((rsi + 8));
    *((rsp + 0x18)) = 0;
    *((rsp + 0x10)) = r12;
    rax = malloc (r12*8);
    *((rsp + 0x20)) = rax;
    if (rax == 0) {
        goto label_3;
    }
    if (r12 <= 0) {
        goto label_4;
    }
    r12d = 0;
label_1:
    rax = *((r14 + 0x10));
    rdx = *((rax + r12*8));
    rax = *((r13 + 0x30));
    rcx = rdx * 3;
    rsi = rax + rcx*8;
    r9 = *((rsi + 8));
    if (r9 <= 0) {
        goto label_5;
    }
    r11 = *((rsi + 0x10));
    r10 = *(r13);
    ecx = 0;
    while (ebx != r8d) {
label_0:
        rcx++;
        if (r9 == rcx) {
            goto label_5;
        }
        rdi = *((r11 + rcx*8));
        rax = *((r11 + rcx*8));
        rax <<= 4;
        rax += r10;
        r8d = *((rax + 8));
    }
    if (rbp != *(rax)) {
        goto label_0;
    }
    if (rdi == -1) {
        goto label_5;
    }
    eax = fcn_0040a190 (r13, rsp + 0x10, rdx, rbp, ebx);
    if (eax != 0) {
        goto label_6;
    }
label_2:
    r12++;
    if (*((r14 + 8)) > r12) {
        goto label_1;
    }
label_4:
    free (*((r14 + 0x10)));
    rax = *((rsp + 0x20));
    __asm ("movdqa xmm0, xmmword [rsp + 0x10]");
    *((r14 + 0x10)) = rax;
    eax = 0;
    *(r14) = xmm0;
    return rax;
label_5:
    eax = fcn_0040a660 (rsp + 0x10, rsi);
    if (eax == 0) {
        goto label_2;
    }
label_6:
    *((rsp + 0xc)) = eax;
    free (*((rsp + 0x20)));
    eax = *((rsp + 0xc));
    return rax;
label_3:
    eax = 0xc;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40abd0 */
#include <stdint.h>
 
uint64_t fcn_0040abd0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r10 = *((rsi + 8));
    eax = 0;
    if (r10 == 0) {
        goto label_4;
    }
    r8 = *((rdx + 8));
    if (r8 == 0) {
        goto label_4;
    }
    rax = r10 + r8;
    r12 = rdx;
    rbx = rdi;
    rcx = *((rdi + 8));
    r13 = *(rdi);
    rdi = *((rdi + 0x10));
    rdx = rax + rcx;
    if (rdx > r13) {
        goto label_5;
    }
label_3:
    r13 = *((rbp + 0x10));
    r11 = *((r12 + 0x10));
    rsi = rcx + r10;
    rax = r8 - 1;
    r10--;
    rsi += r8;
    rcx--;
    r8 = *((r13 + r10*8));
    rdx = *((r11 + rax*8));
label_1:
    if (r8 == rdx) {
        goto label_6;
    }
    do {
        if (r8 >= rdx) {
            goto label_7;
        }
        rax--;
        if (rax < 0) {
            goto label_8;
        }
label_0:
        rdx = *((r11 + rax*8));
    } while (r8 != rdx);
label_6:
    if (rcx >= 0) {
        goto label_9;
    }
    goto label_10;
    do {
        rcx--;
        if (rcx == -1) {
            goto label_10;
        }
label_9:
        r9 = *((rdi + rcx*8));
    } while (r9 > r8);
    if (r9 != r8) {
label_10:
        rsi--;
        *((rdi + rsi*8)) = r8;
    }
    r10--;
    if (r10 >= 0) {
        rax--;
        if (rax < 0) {
            goto label_8;
        }
        r8 = *((r13 + r10*8));
        goto label_0;
label_4:
        return rax;
label_7:
        r10--;
        if (r10 < 0) {
            goto label_8;
        }
        r8 = *((r13 + r10*8));
        goto label_1;
    }
label_8:
    rcx = *((rbx + 8));
    rdx = *((rbp + 8));
    rdx += rcx;
    rdx += *((r12 + 8));
    rax = rcx - 1;
    r9 = rdx - 1;
    rdx -= rsi;
    rcx += rdx;
    *((rbx + 8)) = rcx;
    if (rdx <= 0) {
        goto label_11;
    }
    if (rax < 0) {
        goto label_11;
    }
    do {
label_2:
        r8 = *((rdi + r9*8));
        rcx = *((rdi + rax*8));
        r10 = rax + rdx;
        r10 = rdi + r10*8;
        if (r8 <= rcx) {
            goto label_12;
        }
        r9--;
        *(r10) = r8;
        rdx--;
    } while (rdx != 0);
    rdi = *((rbx + 0x10));
    edx = 0;
    goto label_13;
label_12:
    rax--;
    *(r10) = rcx;
    if (rax != -1) {
        goto label_2;
    }
    rdx <<= 3;
    rdi = *((rbx + 0x10));
    goto label_13;
label_11:
    rdx <<= 3;
label_13:
    eax = memcpy (rdi, rdi + rsi*8, rdx);
    eax = 0;
    do {
        return rax;
label_5:
        r13 += rax;
        rax = realloc (rdi, r13*8);
        rdi = rax;
        if (rax != 0) {
            rcx = *((rbx + 8));
            r10 = *((rbp + 8));
            *((rbx + 0x10)) = rax;
            *(rbx) = r13;
            r8 = *((r12 + 8));
            goto label_3;
        }
        eax = 0xc;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40ad90 */
#include <stdint.h>
 
uint64_t fcn_0040ad90 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rbx = rdi;
    rdi = *(rsi);
    if (edi == 0xf) {
        goto label_1;
    }
    r9 = rdi;
    r10 = *(rbx);
    eax = rdi + 1;
    r9 <<= 6;
    r9 += 8;
    do {
        *(rsi) = eax;
        rsi = rdi;
        rax = r10 + r9;
        rsi <<= 6;
        rdi = r10 + rsi;
        *((rdi + 8)) = 0;
        *((rdi + 0x10)) = rdx;
        *((rdi + 0x18)) = rcx;
        __asm ("movdqu xmm0, xmmword [r8]");
        __asm ("movups xmmword [rdi + 0x30], xmm0");
        *((r10 + rsi + 0x3a)) &= 0xf3;
        *((rdi + 0x20)) = 0;
        *((rdi + 0x28)) = 0;
        *((rdi + 0x40)) = 0xffffffffffffffff;
        if (rdx != 0) {
            *(rdx) = rax;
        }
        if (rcx != 0) {
            *(rcx) = rax;
        }
label_0:
        return rax;
label_1:
        *((rsp + 0x18)) = r8;
        *((rsp + 0x10)) = rcx;
        *((rsp + 8)) = rdx;
        *(rsp) = rsi;
        rax = malloc (0x3c8);
        r10 = rax;
        if (rax == 0) {
            goto label_2;
        }
        rax = *(rbx);
        r9d = 8;
        *(rbx) = r10;
        edi = 0;
        r8 = *((rsp + 0x18));
        rcx = *((rsp + 0x10));
        rdx = *((rsp + 8));
        rsi = *(rsp);
        *(r10) = rax;
        eax = 1;
    } while (1);
label_2:
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40ae70 */
#include <stdint.h>
 
uint64_t fcn_0040ae70 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    r13 = rsi + 0x70;
    r12 = rsi + 0x80;
    rbx = rdi;
    rbp = *(rdi);
    r14 = rsp + 8;
    while (rax != 0) {
        r14 = rbp + 8;
        rbx = rax;
label_0:
        rax = fcn_0040ad90 (r13, r12, 0, 0, rbx + 0x28);
        *(r14) = rax;
        if (rax == 0) {
            goto label_1;
        }
        *(rax) = rbp;
        rbp = *(r14);
        *((rbp + 0x32)) |= 4;
        rax = *((rbx + 8));
    }
    edx = 0;
    while (rax != 0) {
        rbx = rax;
        rax = *((rbx + 0x10));
        if (rax != 0) {
            if (rax != rdx) {
                goto label_2;
            }
        }
        rax = *(rbx);
        rbp = *(rbp);
        rdx = rbx;
    }
    rax = *((rsp + 8));
label_1:
    return rax;
label_2:
    r14 = rbp + 0x10;
    rbx = rax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40af20 */
#include <stdint.h>
 
int64_t fcn_0040af20 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdx;
    rbx = *(rsi);
    rbp = *((rdx + 8));
    *((rsp + 0x18)) = rdi;
    if ((*((rsi + 0x38)) & 0x10) == 0) {
        goto label_3;
    }
    if (rbp == 0) {
        goto label_4;
    }
    rax = *((rdx + 0x28));
    if (rax > 0x3f) {
        goto label_2;
    }
    rdx = *((rbx + 0xa0));
    if (((rdx >> rax) & 1) >= 0) {
        goto label_2;
    }
    rax = rbx + 0x80;
    r13 = rbx + 0x70;
    r14 = rsp + 0x20;
    r15 = rax;
    rsi = rax;
    *((rsp + 0x28)) = 8;
    *((rsp + 8)) = rax;
    rax = fcn_0040ad90 (r13, rsi, 0, 0, r14);
    rbx = rax;
    *((rsp + 0x28)) = 9;
    rax = fcn_0040ad90 (r13, r15, 0, 0, r14);
    r15 = rax;
label_0:
    *((rsp + 0x28)) = 0x10;
    rax = fcn_0040ad90 (r13, *((rsp + 8)), rbp, r15, r14);
    r11 = rax;
    do {
label_1:
        rcx = r11;
        *((rsp + 0x28)) = 0x10;
        *((rsp + 0x10)) = r11;
        rax = fcn_0040ad90 (r13, *((rsp + 8)), rbx, rcx, r14);
        if (rax == 0) {
            goto label_5;
        }
        r11 = *((rsp + 0x10));
        if (r11 == 0) {
            goto label_5;
        }
        if (rbx == 0) {
            goto label_5;
        }
        if (r15 == 0) {
            goto label_5;
        }
        rax = *((r12 + 0x28));
        *((r15 + 0x28)) = rax;
        *((rbx + 0x28)) = rax;
        eax = *((r12 + 0x32));
        edx = *((r15 + 0x32));
        eax &= 8;
        ecx = eax;
        edx &= 0xfffffff7;
        edx |= ecx;
        *((r15 + 0x32)) = dl;
        eax = *((rbx + 0x32));
        eax &= 0xfffffff7;
        eax |= ecx;
        *((rbx + 0x32)) = al;
label_2:
        rax = rbp;
        return rax;
label_4:
        rax = rbx + 0x80;
        r13 = rbx + 0x70;
        r14 = rsp + 0x20;
        r15 = rax;
        rsi = rax;
        *((rsp + 0x28)) = 8;
        *((rsp + 8)) = rax;
        rax = fcn_0040ad90 (r13, rsi, 0, 0, r14);
        rbx = rax;
        *((rsp + 0x28)) = 9;
        rax = fcn_0040ad90 (r13, r15, 0, 0, r14);
        r11 = rax;
        r15 = rax;
    } while (1);
label_3:
    rax = rbx + 0x80;
    r13 = rbx + 0x70;
    r14 = rsp + 0x20;
    r15 = rax;
    rsi = rax;
    *((rsp + 0x28)) = 8;
    *((rsp + 8)) = rax;
    rax = fcn_0040ad90 (r13, rsi, 0, 0, r14);
    rbx = rax;
    *((rsp + 0x28)) = 9;
    rax = fcn_0040ad90 (r13, r15, 0, 0, r14);
    r15 = rax;
    r11 = rax;
    if (rbp != 0) {
        goto label_0;
    }
    goto label_1;
label_5:
    rax = *((rsp + 0x18));
    ebp = 0;
    *(rax) = 0xc;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40b1c0 */
#include <stdint.h>
 
uint64_t fcn_0040b1c0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = *((rsi + 8));
    *((rdi + 8)) = rdx;
    if (rdx <= 0) {
        goto label_0;
    }
    r12 = rsi;
    rbx = rdx*8;
    *(rdi) = rdx;
    rax = malloc (rbx);
    *((rbp + 0x10)) = rax;
    if (rax == 0) {
        goto label_1;
    }
    eax = memcpy (rax, *((r12 + 0x10)), rbx);
    eax = 0;
    do {
        return rax;
label_0:
        xmm0 = 0;
        *((rdi + 0x10)) = 0;
        eax = 0;
        __asm ("movups xmmword [rdi], xmm0");
        return rax;
label_1:
        *((rbp + 8)) = 0;
        eax = 0xc;
        *(rbp) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40b240 */
#include <stdint.h>
 
uint64_t fcn_0040b240 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rsi == 0) {
        goto label_3;
    }
    r12 = *((rsi + 8));
    if (rdx == 0) {
        goto label_4;
    }
    if (r12 <= 0) {
        goto label_4;
    }
    r15 = *((rdx + 8));
    if (r15 <= 0) {
        goto label_5;
    }
    r13 = rdi;
    rbx = rsi;
    *(r13) = rdi;
    rdi <<= 3;
    rax = malloc (r12 + r15);
    *((r13 + 0x10)) = rax;
    if (rax == 0) {
        goto label_6;
    }
    rdi = rax;
    r10 = *((rbx + 0x10));
    r14d = 0;
    ecx = 0;
    edx = 0;
    while (rsi <= r8) {
        r8b = (rax == 0) ? 1 : 0;
        *(rdi) = rsi;
        rdx++;
        r8d = (int32_t) r8b;
        rcx += r8;
label_0:
        r12 = *((rbx + 8));
        rdi += 8;
        if (rdx >= r12) {
            goto label_7;
        }
        rsi = r10 + rdx*8;
        if (r15 <= rcx) {
            goto label_8;
        }
        r9 = *((rbp + 0x10));
        rsi = *(rsi);
        r14++;
        r8 = *((r9 + rcx*8));
    }
    rcx++;
    *(rdi) = r8;
    goto label_0;
label_4:
    if (r12 <= 0) {
label_3:
        if (rdx != 0) {
            if (*((rdx + 8)) > 0) {
                goto label_9;
            }
        }
        *((rdi + 0x10)) = 0;
        xmm0 = 0;
        eax = 0;
        *(rdi) = xmm0;
label_2:
        return rax;
label_9:
        rsi = rdx;
    }
label_5:
invalid_funccall(); //    void (*0x40b1c0)() ();
label_7:
    rdx = *((rbp + 8));
    while (1) {
label_1:
        *((r13 + 8)) = r14;
        eax = 0;
        return rax;
        rbx = rdx;
        rbx -= rcx;
        r14 += rbx;
        memcpy (rax + r14*8, r9 + rcx*8, rbx*8);
    }
label_8:
    r12 -= rdx;
    r14 += r12;
    memcpy (rdi, rsi, r12*8);
    goto label_1;
label_6:
    eax = 0xc;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40b3d0 */
#include <stdint.h>
 
int64_t fcn_0040b3d0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r10 = *((rdx + 8));
    if (r10 == 0) {
        goto label_7;
    }
    r8d = ecx;
    r12 = r8 + r10;
    if (r10 <= 0) {
        goto label_8;
    }
    rax = *((rdx + 0x10));
    r10 = rax + r10*8;
    do {
        r12 += *(rax);
        rax += 8;
    } while (r10 != rax);
label_8:
    rax = *((rsi + 0x88));
    r15d = ecx;
    r13 = rsi;
    *((rsp + 0x18)) = rdi;
    rax &= r12;
    rdx = rax * 3;
    rax = *((rsi + 0x40));
    rax = rax + rdx*8;
    r11 = *(rax);
    if (r11 <= 0) {
        goto label_9;
    }
    rbx = *((rax + 0x10));
    r10d = 0;
    r9d = ecx;
    while (*(r14) != r12) {
label_0:
        r10++;
        if (r10 == r11) {
            goto label_9;
        }
        r14 = *((rbx + r10*8));
    }
    eax = *((r14 + 0x68));
    eax &= 0xf;
    if (eax != r9d) {
        goto label_0;
    }
    al = fcn_00408570 (*((r14 + 0x50)), rbp);
    if (al == 0) {
        goto label_0;
    }
label_1:
    rax = r14;
    return rax;
label_9:
    rax = calloc (0x70, 1);
    r14 = rax;
    if (rax == 0) {
        goto label_5;
    }
    rax = rax + 8;
    rdi = rax;
    *(rsp) = rax;
    eax = fcn_0040b1c0 (rdi, rbp);
    if (eax != 0) {
        goto label_10;
    }
    eax = *((r14 + 0x68));
    edx = r15d;
    ecx = r15d;
    edx &= 0xf;
    eax &= 0xfffffff0;
    eax |= edx;
    *((r14 + 0x68)) = al;
    rax = *(rsp);
    *((r14 + 0x50)) = rax;
    if (*((rbp + 8)) <= 0) {
        goto label_11;
    }
    rax = r14 + 0x18;
    r15d = 0;
    *((rsp + 0x10)) = r12;
    r10d = 0;
    *((rsp + 8)) = rax;
    r12 = r14;
    r14 = r15;
    r15 = rbp;
    do {
        rax = *((r15 + 0x10));
        rax = *((rax + r14*8));
        rax <<= 4;
        rax += *(r13);
        ebx = *((rax + 8));
        esi = *((rax + 8));
        ebx >>= 8;
        bx &= 0x3ff;
        edi = (int32_t) bx;
        if (esi == 1) {
            if (edi == 0) {
                goto label_12;
            }
        }
        edx = *((r12 + 0x68));
        eax = *((rax + 0xa));
        r11d = edx;
        al >>= 4;
        edx &= 0xffffffdf;
        r11b >>= 5;
        eax |= r11d;
        eax &= 1;
        eax <<= 5;
        eax |= edx;
        *((r12 + 0x68)) = al;
        if (esi == 2) {
            goto label_13;
        }
        if (esi == 4) {
            eax |= 0x40;
            *((r12 + 0x68)) = al;
        }
label_2:
        if (edi != 0) {
            rax = *(rsp);
            if (rax == *((r12 + 0x50))) {
                goto label_14;
            }
label_6:
            if ((bl & 1) == 0) {
                goto label_15;
            }
            if ((bpl & 1) != 0) {
                if ((bl & 2) != 0) {
                    goto label_4;
                }
label_3:
                if ((bl & 0x10) != 0) {
                    if ((bpl & 2) == 0) {
                        goto label_4;
                    }
                }
                ebx &= 0x40;
                if (ebx == 0) {
                    goto label_12;
                }
                if ((bpl & 4) != 0) {
                    goto label_12;
                }
            }
label_4:
            rdx = r14;
            rdx -= r10;
            if (rdx >= 0) {
                rax = *((r12 + 0x10));
                if (rdx >= rax) {
                    goto label_16;
                }
                rax--;
                *((r12 + 0x10)) = rax;
                fcn_0040a290 (r12 + 0x10, *((rsp + 8)), rdx);
            }
label_16:
            r10++;
        }
label_12:
        r14++;
    } while (r14 < *((r15 + 8)));
    r14 = r12;
    r12 = *((rsp + 0x10));
label_11:
    eax = fcn_00408c40 (r13, r14, *((rsp + 0x10)));
    if (eax == 0) {
        goto label_1;
    }
    fcn_00409cf0 (r14);
label_5:
    rax = *((rsp + 0x18));
    r14d = 0;
    *(rax) = 0xc;
    goto label_1;
label_13:
    eax |= 0x10;
    *((r12 + 0x68)) = al;
    goto label_2;
label_15:
    if ((bl & 2) == 0) {
        goto label_3;
    }
    if ((bpl & 1) == 0) {
        goto label_3;
    }
    goto label_4;
label_14:
    rax = malloc (0x18);
    *((r12 + 0x50)) = rax;
    if (rax == 0) {
        goto label_17;
    }
    eax = fcn_0040b1c0 (rax, r15);
    if (eax != 0) {
        goto label_5;
    }
    *((r12 + 0x68)) |= 0x80;
    r10d = 0;
    goto label_6;
label_7:
    *(rdi) = 0;
    r14d = 0;
    goto label_1;
label_17:
    fcn_00409cf0 (r12);
    goto label_5;
label_10:
    free (r14);
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40b6d0 */
#include <stdint.h>
 
int64_t fcn_0040b6d0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbp = *((rdx + 8));
    if (rbp == 0) {
        goto label_4;
    }
    if (rbp <= 0) {
        goto label_5;
    }
    rax = *((rdx + 0x10));
    rcx = rax + rbp*8;
    do {
        rbp += *(rax);
        rax += 8;
    } while (rcx != rax);
label_5:
    rax = *((rsi + 0x88));
    r14 = rdx;
    r12 = rsi;
    r13 = rdi;
    rax &= rbp;
    rdx = rax * 3;
    rax = *((rsi + 0x40));
    rax = rax + rdx*8;
    r10 = *(rax);
    if (r10 <= 0) {
        goto label_6;
    }
    r11 = *((rax + 0x10));
    r9d = 0;
    do {
        rbx = *((r11 + r9*8));
        if (*(rbx) == rbp) {
            al = fcn_00408570 (rbx + 8, r14);
            if (al != 0) {
                goto label_3;
            }
        }
        r9++;
    } while (r10 != r9);
label_6:
    rax = calloc (0x70, 1);
    rbx = rax;
    if (rax == 0) {
        goto label_7;
    }
    r15 = rax + 8;
    eax = fcn_0040b1c0 (r15, r14);
    if (eax != 0) {
        goto label_8;
    }
    rax = *((r14 + 8));
    *((rbx + 0x50)) = r15;
    if (rax <= 0) {
        goto label_9;
    }
    rsi = *((r14 + 0x10));
    r8 = *(r12);
    r9 = rsi + rax*8;
    while (edi != 1) {
        ecx = *((rbx + 0x68));
        edx = *((rax + 0xa));
        r10d = ecx;
        dl >>= 4;
        ecx &= 0xffffffdf;
        r10b >>= 5;
        edx |= r10d;
        edx &= 1;
        edx <<= 5;
        edx |= ecx;
        *((rbx + 0x68)) = dl;
        if (edi == 2) {
            goto label_10;
        }
        if (edi != 4) {
            goto label_11;
        }
        edx |= 0x40;
        *((rbx + 0x68)) = dl;
label_0:
        rsi += 8;
        if (r9 == rsi) {
            goto label_9;
        }
label_1:
        rax = *(rsi);
        rax <<= 4;
        rax += r8;
        edi = *((rax + 8));
    }
    if ((*((rax + 8)) & 0x3ff00) == 0) {
        goto label_0;
    }
    edx = *((rbx + 0x68));
    eax = *((rax + 0xa));
    ecx = edx;
    al >>= 4;
    edx &= 0xffffffdf;
    cl >>= 5;
    eax |= ecx;
    eax &= 1;
    eax <<= 5;
    eax |= edx;
    *((rbx + 0x68)) = al;
label_2:
    rsi += 8;
    *((rbx + 0x68)) |= 0x80;
    if (r9 != rsi) {
        goto label_1;
    }
label_9:
    eax = fcn_00408c40 (r12, rbx, rbp);
    if (eax != 0) {
        goto label_12;
    }
label_3:
    rax = rbx;
    return rax;
label_10:
    edx |= 0x10;
    *((rbx + 0x68)) = dl;
    goto label_0;
label_11:
    if (edi == 0xc) {
        goto label_2;
    }
    if ((*((rax + 8)) & 0x3ff00) == 0) {
        goto label_0;
    }
    goto label_2;
label_8:
    free (rbx);
    do {
label_7:
        *(r13) = 0xc;
        ebx = 0;
        goto label_3;
label_4:
        *(rdi) = 0;
        ebx = 0;
        goto label_3;
label_12:
        fcn_00409cf0 (rbx);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40b8c0 */
#include <stdint.h>
 
uint64_t fcn_0040b8c0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_ch;
    int64_t var_10h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    if (rcx <= 0) {
        goto label_1;
    }
    r14 = rdi;
    r13 = rdx;
    r12 = rcx;
    ebx = 0;
    while (rsi != 0) {
        if (rdx != 0) {
            rdx += 8;
            rsi += 8;
            eax = fcn_0040b240 (rsp + 0x10, rsi, rdx);
            *((rsp + 0xc)) = eax;
            if (eax != 0) {
                goto label_2;
            }
            rax = fcn_0040b6d0 (rsp + 0xc, r14, rsp + 0x10);
            *((rbp + rbx*8)) = rax;
            free (*((rsp + 0x20)));
            eax = *((rsp + 0xc));
            if (eax != 0) {
                goto label_2;
            }
        }
        rbx++;
        if (r12 == rbx) {
            goto label_3;
        }
label_0:
        rsi = *((rbp + rbx*8));
        rdx = *((r13 + rbx*8));
    }
    *((rbp + rbx*8)) = rdx;
    rbx++;
    if (r12 != rbx) {
        goto label_0;
    }
label_3:
    eax = 0;
label_2:
    return rax;
label_1:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40b970 */
#include <stdint.h>
 
int64_t fcn_0040b970 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_2ch;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r11d = 0;
    rbp = *((rdi + 0xc8));
    rax = *((rdi + 0xc8));
label_4:
    if (r11 >= rax) {
        goto label_7;
    }
    r10 = r11 + rax;
    r12 = *((rdi + 0xd8));
    r9 = r10;
    r9 >>= 0x3f;
    r9 += r10;
    r9 >>= 1;
    r10 = r9 * 5;
    if (rdx <= *((r12 + r10*8 + 8))) {
        goto label_8;
    }
    goto label_9;
    do {
        r10 = r9 + r11;
        rax = r10;
        rax >>= 0x3f;
        rax += r10;
        rax >>= 1;
        r10 = rax * 5;
        rbx = rax;
        if (rdx > *((r12 + r10*8 + 8))) {
            goto label_10;
        }
        r9 = rax;
INVALID_JUMP;
    } while (r9 > r11);
label_7:
    if (rbp <= r11) {
        goto label_11;
    }
    r9 = r11 * 5;
    rax = *((rdi + 0xd8));
    rbx = r9*8;
    *((rsp + 0x18)) = rbx;
    if (*((rax + rbx + 8)) != rdx) {
        goto label_11;
    }
    if (r11 == -1) {
        goto label_11;
    }
    *((rsp + 0x20)) = rcx;
    rcx = rsi + 0x10;
    rbx = rdx;
    r12 = rsi;
    *((rsp + 0x2c)) = r8d;
    r13 = *((rdi + 0x98));
    *(rsp) = rcx;
label_2:
    rcx = *((rsp + 0x18));
    r15 = rax + rcx;
    goto label_12;
label_0:
    rax = *((r13 + 0x18));
    r10 = *((rbp + 0xb8));
    rcx = *((rax + r9*8));
    rax = r14*8;
    r10 += rax;
    *((rsp + 0x10)) = rax;
    r9 = *(r10);
    *((rsp + 8)) = rcx;
    if (r9 == 0) {
        goto label_13;
    }
    rax = fcn_0040a120 (*((r9 + 0x10)), r9 + 0x18, rcx);
    if (rax != 0) {
        goto label_1;
    }
    eax = fcn_0040b1c0 (rsp + 0x40, r9 + 8);
    *((rsp + 0x3c)) = eax;
    al = fcn_00408b10 (rsp + 0x40, *((rsp + 8)));
    edx = *((rsp + 0x3c));
    if (edx != 0) {
        goto label_14;
    }
    if (al != 1) {
        goto label_14;
    }
    r10 = *((rsp + 0x10));
    r10 += *((rbp + 0xb8));
label_3:
    *((rsp + 8)) = r10;
    rax = fcn_0040b6d0 (rsp + 0x3c, r13, rsp + 0x40);
    r10 = *((rsp + 8));
    *(r10) = rax;
    free (*((rsp + 0x50)));
    rax = *((rbp + 0xb8));
    if (*((rax + r14*8)) == 0) {
        goto label_15;
    }
    do {
label_1:
        r15 += 0x28;
        if (*((r15 - 8)) == 0) {
            goto label_11;
        }
label_12:
        r9 = *(r15);
        r10 = *((r12 + 8));
        rax = fcn_0040a120 (r10, *(rsp), r9);
    } while (rax == 0);
    r8 = *((r15 + 0x18));
    r8 += rbx;
    r14 = r8;
    r14 -= *((r15 + 0x10));
    if (rbx != r14) {
        goto label_0;
    }
    rcx = *((r13 + 0x28));
    rax = r9 * 3;
    rax = rcx + rax*8;
    rax = *((rax + 0x10));
    r14 = *(rax);
    rax = fcn_0040a120 (r10, *(rsp), *(rax));
    if (rax != 0) {
        goto label_1;
    }
    *((rsp + 0x40)) = 1;
    *((rsp + 0x48)) = 1;
    rax = malloc (8);
    *((rsp + 0x50)) = rax;
    if (rax == 0) {
        goto label_16;
    }
    *(rax) = r14;
    eax = 0;
label_6:
    *((rsp + 0x3c)) = eax;
    eax = fcn_0040aa90 (r13, rsp + 0x40, *((rsp + 0x20)), *((rsp + 0x2c)));
    r14d = eax;
    eax = fcn_0040a660 (r12, rsp + 0x40);
    r15d = eax;
    free (*((rsp + 0x50)));
    eax = *((rsp + 0x3c));
    edx = r14d;
    edx |= r15d;
    edx |= eax;
    if (edx != 0) {
        goto label_17;
    }
    rax = *((rbp + 0xd8));
    goto label_2;
label_13:
    *((rsp + 0x10)) = r10;
    *((rsp + 0x40)) = 1;
    *((rsp + 0x48)) = 1;
    rax = malloc (8);
    *((rsp + 0x50)) = rax;
    if (rax == 0) {
        goto label_18;
    }
    rcx = *((rsp + 8));
    *((rsp + 0x3c)) = 0;
    r10 = *((rsp + 0x10));
    *(rax) = rcx;
    goto label_3;
label_9:
    rbx = r9;
    r9 = rax;
label_10:
    r11 = rbx + 1;
    rax = r9;
    goto label_4;
label_11:
    eax = 0;
label_5:
    return rax;
label_15:
    eax = *((rsp + 0x3c));
    if (eax == 0) {
        goto label_1;
    }
    goto label_5;
label_14:
    free (*((rsp + 0x50)));
    eax = *((rsp + 0x3c));
    if (eax != 0) {
        goto label_5;
    }
label_18:
    eax = 0xc;
    return rax;
label_17:
    if (eax != 0) {
        goto label_5;
    }
    eax = r15d;
    if (r14d != 0) {
        eax = r14d;
    }
    goto label_5;
label_16:
    *((rsp + 0x48)) = 0;
    eax = 0xc;
    *((rsp + 0x40)) = 0;
    goto label_6;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40bd00 */
#include <stdint.h>
 
int64_t fcn_0040bd00 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    void ** var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r12 = *((rdi + 0x98));
    if (*(rsi) <= 0) {
        goto label_4;
    }
    r15 = rdi;
    r14 = rsi;
    r13 = rcx;
    ebx = 0;
    while (*((rax + 8)) != 8) {
label_0:
        rbx++;
        if (rbx >= *(r14)) {
            goto label_4;
        }
label_1:
        rax = *(rdx);
        rbp = *((rax + rbx*8));
        rax = *((rax + rbx*8));
        rax <<= 4;
        rax += *(r12);
    }
    rax = *(rax);
    if (rax > 0x3f) {
        goto label_0;
    }
    rcx = *((r12 + 0xa0));
    if (((rcx >> rax) & 1) >= 0) {
        goto label_0;
    }
    rcx = *((r15 + 0xe8));
    r9 = *((r15 + 0xf8));
    if (rcx == *((r15 + 0xf0))) {
        goto label_5;
    }
label_3:
    *((rsp + 0x10)) = r9;
    *((rsp + 8)) = rcx;
    *((rsp + 0x18)) = rdx;
    rax = calloc (1, 0x30);
    rcx = *((rsp + 8));
    r9 = *((rsp + 0x10));
    *((r9 + rcx*8)) = rax;
    if (rax == 0) {
        goto label_2;
    }
    rcx++;
    *(rax) = r13;
    rdx = *((rsp + 0x18));
    rbx++;
    *((rax + 8)) = rbp;
    *((r15 + 0xe8)) = rcx;
    if (rbx < *(r14)) {
        goto label_1;
    }
label_4:
    eax = 0;
    do {
        return rax;
label_2:
        eax = 0xc;
    } while (1);
label_5:
    rax = rcx + rcx;
    *((rsp + 8)) = rdx;
    rsi <<= 4;
    *((rsp + 0x10)) = rax;
    rax = realloc (r9, rcx);
    rdx = *((rsp + 8));
    r9 = rax;
    if (rax == 0) {
        goto label_2;
    }
    *((r15 + 0xf8)) = rax;
    rax = *((rsp + 0x10));
    rcx = *((r15 + 0xe8));
    *((r15 + 0xf0)) = rax;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40be50 */
#include <stdint.h>
 
int64_t fcn_0040be50 (int32_t arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rsi < 0) {
        goto label_2;
    }
    if (*((rdi + 0x58)) == rsi) {
        goto label_3;
    }
    if (*((rdi + 0x90)) <= 1) {
        goto label_4;
    }
    rax = *((rdi + 0x10));
    while (ebx == 0xffffffff) {
        rsi--;
        if (rsi == -1) {
            goto label_2;
        }
        ebx = *((rax + rsi*4));
    }
    if (*((rbp + 0x8e)) != 0) {
        goto label_5;
    }
label_1:
    eax = 0;
    if (ebx == 0xa) {
        goto label_6;
    }
    do {
label_0:
        return rax;
label_4:
        rax = *((rdi + 8));
        rdx = *((rdi + 0x80));
        eax = *((rax + rsi));
        rcx = rax;
        rax >>= 6;
        rax = *((rdx + rax*8));
        rax >>= cl;
        rdx = rax;
        eax = 1;
        edx &= 1;
    } while (edx != 0);
    eax = 0;
    if (cl != 0xa) {
        goto label_0;
    }
label_6:
    eax = 0;
    al = (*((rbp + 0x8d)) != 0) ? 1 : 0;
    eax += eax;
    return rax;
label_2:
    eax = *((rbp + 0x70));
    return rax;
label_3:
    edx &= 2;
    eax -= eax;
    eax &= 2;
    eax += 8;
    goto label_0;
label_5:
    eax = iswalnum (ebx);
    if (eax != 0) {
        goto label_7;
    }
    if (ebx != 0x5f) {
        goto label_1;
    }
label_7:
    eax = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40bf40 */
#include <stdint.h>
 
int64_t fcn_0040bf40 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    ecx = *((rax + rdx));
    eax = *((rsi + 8));
    if (al == 3) {
        goto label_3;
    }
    if (al <= 3) {
        goto label_4;
    }
    if (al != 5) {
        eax = 0;
        if (al != 7) {
            goto label_5;
        }
        if (cl < 0) {
            goto label_6;
        }
    }
    if (cl == 0xa) {
        goto label_7;
    }
    if (cl != 0) {
        goto label_0;
    }
    rcx = *((rdi + 0x98));
    eax = 0;
    if ((*((rcx + 0xd8)) & 0x80) != 0) {
        goto label_6;
    }
    do {
label_0:
        ebx = *((rsi + 8));
        eax = 1;
        if ((ebx & 0x3ff00) != 0) {
            ebx >>= 8;
            eax = fcn_0040be50 (rdi, rdx, *((rdi + 0xa0)));
            ecx = ebx;
            edx = eax;
            cx &= 0x3ff;
            if ((bl & 4) != 0) {
                goto label_8;
            }
            ebx &= 8;
            if (ebx != 0) {
                if ((al & 1) != 0) {
                    goto label_9;
                }
            }
label_2:
            if ((cl & 0x20) != 0) {
                eax = 0;
                if ((dl & 2) == 0) {
                    goto label_1;
                }
            }
            edx >>= 3;
            eax = 1;
            edx &= 1;
            ecx &= 0x80;
            if (ecx == 0) {
                eax = edx;
                goto label_1;
            }
        }
label_1:
        return rax;
label_4:
        eax = 0;
        if (al != 1) {
            goto label_10;
        }
    } while (*(rsi) == cl);
label_6:
    return rax;
label_5:
    return rax;
label_10:
    return rax;
label_3:
    eax = (int32_t) cl;
    r8 = *(rsi);
    rax >>= 6;
    rax = *((r8 + rax*8));
    rax >>= cl;
    rcx = rax;
    eax = 0;
    ecx &= 1;
    if (ecx != 0) {
        goto label_0;
    }
    return rax;
label_8:
    eax = 0;
    if ((dl & 1) == 0) {
        goto label_1;
    }
    ebx &= 8;
    if (ebx == 0) {
        goto label_2;
    }
    return rax;
label_7:
    rcx = *((rdi + 0x98));
    eax = 0;
    if ((*((rcx + 0xd8)) & 0x40) != 0) {
        goto label_0;
    }
    return rax;
label_9:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40c070 */
#include <stdint.h>
 
uint64_t fcn_0040c070 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r12 = rdx;
    rbx = rsi;
    eax = fcn_0040be50 (rdi, rcx, *((rdi + 0xa0)));
    if (rbx <= 0) {
        goto label_2;
    }
    rdx = *((rbp + 0x98));
    r11d = eax;
    r9 = *(r12);
    eax &= 1;
    esi = 0;
    ebp &= 8;
    r11d &= 2;
    r8 = *(rdx);
    r10d = eax;
label_1:
    rax = *((r9 + rsi*8));
    rdx = *((r9 + rsi*8));
    rdx <<= 4;
    rdx += r8;
    ecx = *((rdx + 8));
    ecx >>= 8;
    edi = ecx;
    di &= 0x3ff;
    if (*((rdx + 8)) != 2) {
        goto label_3;
    }
    if (di == 0) {
        goto label_4;
    }
    if ((cl & 4) == 0) {
        goto label_5;
    }
    if (r10d == 0) {
        goto label_3;
    }
    ecx &= 8;
    if (ecx != 0) {
        goto label_3;
    }
    do {
label_0:
        if ((dil & 0x20) != 0) {
            if (r11d == 0) {
                goto label_3;
            }
        }
        edi &= 0x80;
        if (edi != 0) {
            if (ebp == 0) {
                goto label_3;
            }
        }
label_4:
        return rax;
label_5:
        ecx &= 8;
    } while (ecx == 0);
    if (r10d == 0) {
        goto label_0;
    }
label_3:
    rsi++;
    if (rsi != rbx) {
        goto label_1;
    }
label_2:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40c140 */
#include <stdint.h>
 
int64_t fcn_0040c140 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_2ch;
    int64_t var_32h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r10d = edx;
    r15 = rsi;
    rbx = rdi;
    rax = *((rdi + 0x28));
    rbp -= rax;
    if (rax > rsi) {
        if (*((rdi + 0x90)) > 1) {
            *((rdi + 0x20)) = 0;
        }
        rax = *((rbx + 0x50));
        *((rbx + 0x30)) = 0;
        *((rbx + 0x28)) = 0;
        *((rbx + 0x58)) = rax;
        rax = *((rbx + 0x60));
        *((rbx + 0x38)) = 0;
        *((rbx + 0x68)) = rax;
        eax = r10d;
        eax &= 1;
        *((rbx + 0x8c)) = 0;
        eax -= eax;
        eax &= 2;
        eax += 4;
        *((rbx + 0x70)) = eax;
        if (*((rbx + 0x8b)) == 0) {
            goto label_27;
        }
    }
    if (rbp == 0) {
        goto label_28;
    }
    do {
        rax = *((rbx + 0x38));
        edx = *((rbx + 0x8c));
        r14 = *((rbx + 0x30));
        if (rax <= rbp) {
            goto label_29;
        }
        if (dl != 0) {
            goto label_30;
        }
        r14 -= rbp;
        eax = fcn_0040be50 (rbx, rbp - 1, r10d);
        *((rbx + 0x70)) = eax;
        if (*((rbx + 0x90)) > 1) {
            goto label_31;
        }
label_1:
        edx = *((rbx + 0x8b));
        if (dl != 0) {
            goto label_32;
        }
label_8:
        *((rbx + 0x38)) -= rbp;
        *((rbx + 0x30)) = r14;
label_6:
        rax = *((rbx + 0x58));
        rcx = *((rbx + 0x68));
        esi = *((rbx + 0x90));
        rax -= rbp;
        rcx -= rbp;
label_9:
        if (dl == 0) {
label_4:
            *((rbx + 8)) += rbp;
        }
label_0:
        *((rbx + 0x28)) = r15;
        *((rbx + 0x58)) = rax;
        *((rbx + 0x68)) = rcx;
        if (esi <= 1) {
            goto label_33;
        }
        rdi = rbx;
        if (*((rbx + 0x88)) != 0) {
            goto label_34;
        }
        eax = fcn_00408df0 (rdi);
label_2:
        *((rbx + 0x48)) = 0;
        eax = 0;
label_3:
        return rax;
label_27:
        rax = *(rbx);
        *((rbx + 8)) = rax;
    } while (rbp != 0);
label_28:
    esi = *((rbx + 0x90));
    rax = *((rbx + 0x58));
    rcx = *((rbx + 0x68));
    goto label_0;
label_31:
    memmove (*((rbx + 0x10)), rdi + rbp*4, r14*4);
    r14 = *((rbx + 0x30));
    r14 -= rbp;
    goto label_1;
label_34:
    eax = fcn_00408fa0 (rdi);
    if (eax == 0) {
        goto label_2;
    }
    goto label_3;
label_5:
    rax = *(rbx);
    rax += rbp;
    ecx = *((r11 + rax - 1));
    rax = *((rbx + 0x78));
    *((rbx + 0x38)) = 0;
    if (rax != 0) {
        ecx = *((rax + rcx));
    }
    rdx = *((rbx + 0x80));
    eax = (int32_t) cl;
    rax >>= 6;
    rax = *((rdx + rax*8));
    edx = 1;
    rax >>= cl;
    if ((al & 1) == 0) {
        edx = 0;
        if (cl != 0xa) {
            goto label_35;
        }
        edx = 0;
        dl = (*((rbx + 0x8d)) != 0) ? 1 : 0;
        edx += edx;
    }
label_35:
    rax = *((rbx + 0x58));
    rcx = *((rbx + 0x68));
    *((rbx + 0x70)) = edx;
    rax -= rbp;
    rcx -= rbp;
    if (*((rbx + 0x8b)) == 0) {
        goto label_4;
    }
    *((rbx + 0x28)) = r15;
    *((rbx + 0x58)) = rax;
    *((rbx + 0x68)) = rcx;
label_33:
    if (*((rbx + 0x8b)) != 0) {
        goto label_36;
    }
    *((rbx + 0x30)) = rax;
    goto label_2;
label_29:
    if (dl != 0) {
        goto label_37;
    }
label_18:
    rsi = *((rbx + 0x90));
    r11 = *((rbx + 0x28));
    *((rbx + 0x30)) = 0;
    if (esi <= 1) {
        goto label_5;
    }
    if (*((rbx + 0x89)) != 0) {
        goto label_38;
    }
label_10:
    r13 = r11 + rax;
    if (r15 <= r13) {
        goto label_39;
    }
    rax = rbx + 0x20;
    *((rsp + 8)) = rax;
    rax = rsp + 0x38;
    *((rsp + 0x10)) = rax;
    do {
        r12 = *((rbx + 0x50));
        *((rsp + 4)) = r10d;
        rax = *((rbx + 0x20));
        r12 -= r13;
        rsi += r13;
        *((rsp + 0x18)) = rax;
        rax = fcn_004083e0 (*((rsp + 0x10)), *(rbx), r12, *((rsp + 8)));
        edx = *((rsp + 0x38));
        r10d = *((rsp + 4));
        rcx = rax - 1;
        if (rcx > 0xfffffffffffffffc) {
            goto label_40;
        }
label_19:
        r13 += rax;
    } while (r15 > r13);
    r13 -= r15;
    r12 = r13;
    *((rbx + 0x30)) = r13;
    if (edx == 0xffffffff) {
        goto label_41;
    }
label_16:
    if (*((rbx + 0x8e)) != 0) {
        goto label_42;
    }
label_23:
    eax = 0;
    if (edx == 0xa) {
        eax = 0;
        al = (*((rbx + 0x8d)) != 0) ? 1 : 0;
        eax += eax;
    }
label_24:
    *((rbx + 0x70)) = eax;
label_15:
    if (r12 != 0) {
        goto label_43;
    }
label_21:
    edx = *((rbx + 0x8b));
label_20:
    *((rbx + 0x38)) = r12;
    goto label_6;
label_30:
    r13 = *((rbx + 0x18));
    rcx = r14;
    edi = 0;
    while (rdx <= rbp) {
        if (r12 >= 0) {
            goto label_44;
        }
        rdi = rax + 1;
label_7:
        if (rdi >= rcx) {
            goto label_45;
        }
        rdx = rdi + rcx;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rax >>= 1;
        rdx = *((r13 + rax*8));
        rsi = rax;
    }
    rcx = rax;
    goto label_7;
label_32:
    memmove (*((rbx + 8)), rdi + rbp, r14);
    r14 = *((rbx + 0x30));
    edx = *((rbx + 0x8b));
    r14 -= rbp;
    goto label_8;
label_45:
    r12 = rax + 1;
    if (rdx >= rbp) {
        goto label_46;
    }
label_12:
    eax = fcn_0040be50 (rbx, rsi, r10d);
    *((rbx + 0x70)) = eax;
    if (rbp != r12) {
        goto label_47;
    }
    if (rbp >= r14) {
        goto label_47;
    }
    if (*((r13 + r12*8)) != rbp) {
        goto label_47;
    }
    r8 = r14;
    r8 -= rbp;
    memmove (*((rbx + 0x10)), rdi + rbp*4, r8*4);
    rdx -= rbp;
    memmove (*((rbx + 8)), rdi + rbp, *((rbx + 0x30)));
    rax = *((rbx + 0x30));
    *((rbx + 0x38)) -= rbp;
    rax -= rbp;
    *((rbx + 0x30)) = rax;
    if (rax <= 0) {
        goto label_48;
    }
    rcx = *((rbx + 0x18));
    eax = 0;
    rsi = rcx + rbp*8;
    do {
        rdx = *((rsi + rax*8));
        rdx -= rbp;
        *((rcx + rax*8)) = rdx;
        rax++;
    } while (*((rbx + 0x30)) > rax);
label_48:
    rax = *((rbx + 0x58));
    rcx = *((rbx + 0x68));
    esi = *((rbx + 0x90));
    edx = *((rbx + 0x8b));
    rax -= rbp;
    rcx -= rbp;
    goto label_9;
label_47:
    rax = *((rbx + 0x50));
    rcx = *((rbx + 0x60));
    *((rbx + 0x8c)) = 0;
    rax -= r15;
    rcx -= r15;
    rdx = rax + rbp;
    *((rbx + 0x58)) = rdx;
    rdx = rcx + rbp;
    *((rbx + 0x68)) = rdx;
    if (r12 > 0) {
        goto label_49;
    }
    goto label_50;
    do {
        r12--;
        if (r12 == 0) {
            goto label_50;
        }
INVALID_JUMP;
    } while (*((r13 + r12*8 - 8)) == rbp);
label_50:
    if (r12 >= r14) {
        goto label_51;
    }
    rdx = *((rbx + 0x10));
    while (*((rdx + r12*4)) == 0xffffffff) {
        r12++;
        if (r12 == r14) {
            goto label_52;
        }
    }
label_13:
    rdx = *((r13 + r12*8));
    rdx -= rbp;
    *((rbx + 0x30)) = rdx;
    if (rdx == 0) {
        goto label_14;
    }
    if (rdx <= 0) {
        goto label_53;
    }
    rax = *((rbx + 0x10));
    rcx = rax + rdx*4;
    do {
        *(rax) = 0xffffffff;
        rax += 4;
    } while (rcx != rax);
label_53:
    memset (*((rbx + 8)), 0xff, rdx);
    rax = *((rbx + 0x58));
    rcx = *((rbx + 0x68));
    rdx = *((rbx + 0x30));
    rax -= rbp;
    rcx -= rbp;
label_14:
    *((rbx + 0x38)) = rdx;
    esi = *((rbx + 0x90));
    edx = *((rbx + 0x8b));
    goto label_9;
label_38:
    rcx = *(rbx);
    rdx = rbp;
    rdx -= rsi;
    r13 = rcx + r11;
    rdx += r13;
    r12 = r13 + rbp - 1;
    if (rcx < rdx) {
        rcx = rdx;
    }
    if (rcx <= r12) {
        goto label_54;
    }
    goto label_10;
label_11:
    r12--;
    if (rcx > r12) {
        goto label_10;
    }
label_54:
    edx = *(r12);
    edx &= 0xffffffc0;
    if (dl == 0x80) {
        goto label_11;
    }
    rdx = *((rbx + 0x58));
    rcx = *((rbx + 0x78));
    rsi = r12;
    rdx += r13;
    rdx -= r12;
    if (rcx != 0) {
        goto label_55;
    }
label_26:
    rax = rsp + 0x38;
    *((rsp + 4)) = r10d;
    *((rsp + 0x38)) = 0;
    rax = fcn_004083e0 (rsp + 0x2c, rsi, rdx, rax);
    rdx = r13 + rbp;
    r10d = *((rsp + 4));
    rdx -= r12;
    if (rdx <= rax) {
        if (rax <= 0xfffffffffffffffd) {
            goto label_56;
        }
    }
label_17:
    r11 = *((rbx + 0x28));
    rax = *((rbx + 0x38));
    goto label_10;
label_46:
    r12 = rax;
    rsi = rax - 1;
    goto label_12;
label_36:
    if (*((rbx + 0x88)) != 0) {
        goto label_57;
    }
    rcx = *((rbx + 0x78));
    if (rcx == 0) {
        goto label_2;
    }
    rdx = *((rbx + 0x30));
    if (*((rbx + 0x40)) <= rax) {
        rax = *((rbx + 0x40));
    }
    if (rax > rdx) {
        goto label_58;
    }
    goto label_59;
    do {
        r15 = *((rbx + 0x28));
        rcx = *((rbx + 0x78));
label_58:
        rsi = *(rbx);
        rsi += rdx;
        esi = *((rsi + r15));
        esi = *((rcx + rsi));
        rcx = *((rbx + 8));
        *((rcx + rdx)) = sil;
        rdx++;
    } while (rax != rdx);
label_25:
    *((rbx + 0x30)) = rax;
    *((rbx + 0x38)) = rax;
    goto label_2;
label_44:
    r12 = rax;
    rsi--;
    goto label_12;
    if (rsi != 0) {
label_51:
        goto label_13;
    }
label_52:
    *((rbx + 0x30)) = 0;
    edx = 0;
    goto label_14;
label_39:
    r13 -= r15;
    *((rbx + 0x30)) = r13;
    r12 = r13;
label_41:
    eax = fcn_0040be50 (rbx, r14 - 1, r10d);
    *((rbx + 0x70)) = eax;
    goto label_15;
label_56:
    rax -= rdx;
    edx = *((rsp + 0x2c));
    *((rbx + 0x20)) = 0;
    r12 = rax;
    *((rbx + 0x30)) = rax;
    if (edx != 0xffffffff) {
        goto label_16;
    }
    goto label_17;
label_57:
    rax = fcn_00408d70 (rbx);
    goto label_2;
label_37:
    rdx = *((rbx + 0x50));
    *((rbx + 0x8c)) = 0;
    rdx += rbp;
    rdx -= r15;
    *((rbx + 0x58)) = rdx;
    rdx = *((rbx + 0x60));
    rdx += rbp;
    rdx -= r15;
    *((rbx + 0x68)) = rdx;
    goto label_18;
label_40:
    if (rax == 0) {
        goto label_60;
    }
    if (r12 == 0) {
        goto label_60;
    }
    rax = *(rbx);
    edx = *((rax + r13));
label_22:
    rax = *((rsp + 0x18));
    *((rbx + 0x20)) = rax;
    eax = 1;
    goto label_19;
    if (r12 <= 0) {
label_43:
        goto label_61;
    }
    rax = *((rbx + 0x10));
    rdx = rax + r12*4;
    do {
        *(rax) = 0xffffffff;
        rax += 4;
    } while (rdx != rax);
label_61:
    edx = *((rbx + 0x8b));
    if (dl == 0) {
        goto label_20;
    }
    memset (*((rbx + 8)), 0xff, r12);
    r12 = *((rbx + 0x30));
    goto label_21;
label_60:
    edx = 0;
    goto label_22;
label_42:
    edi = edx;
    *((rsp + 4)) = edx;
    eax = iswalnum (edi);
    if (eax != 0) {
        goto label_62;
    }
    edx = *((rsp + 4));
    if (edx != 0x5f) {
        goto label_23;
    }
label_62:
    eax = 1;
    goto label_24;
label_59:
    rax = rdx;
    goto label_25;
label_55:
    esi = 6;
    if (rdx <= 6) {
        rsi = rdx;
    }
    esi--;
    rax = (int64_t) esi;
    if (esi < 0) {
        goto label_63;
    }
    do {
        esi = *((r12 + rax));
        esi = *((rcx + rsi));
        *((rsp + rax + 0x32)) = sil;
        rax--;
    } while (eax >= 0);
label_63:
    rsi = rsp + 0x32;
    goto label_26;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40c930 */
#include <stdint.h>
 
int64_t fcn_0040c930 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    xmm0 = 0;
    r13 = rdx;
    rdx = rsi * 3;
    rax = *((rdi + 0x38));
    *((rsp + 0x20)) = xmm0;
    rbp = rax + rdx*8;
    *((rsp + 0x18)) = rcx;
    *((rsp + 0x30)) = 0;
    r10 = *((rbp + 8));
    if (r10 <= 0) {
        goto label_3;
    }
    r12 = rdi;
    r14 = rsi;
    ebx = 0;
    goto label_4;
label_1:
    if (rax != 0) {
        goto label_5;
    }
    rax = fcn_0040a120 (*((r13 + 8)), r13 + 0x10, r8);
    if (rax == 0) {
        goto label_5;
    }
label_2:
    rdx += r9;
    eax = fcn_0040abd0 (rsp + 0x20, *((rsp + 0x18)), *((r12 + 0x38)));
    if (eax != 0) {
        goto label_6;
    }
    r10 = *((rbp + 8));
    do {
label_0:
        rbx++;
        if (r10 <= rbx) {
            goto label_7;
        }
label_4:
        rax = *((rbp + 0x10));
        rax = *((rax + rbx*8));
    } while (r14 == rax);
    rdx = rax;
    rdx <<= 4;
    rdx += *(r12);
    if ((*((rdx + 8)) & 8) == 0) {
        goto label_0;
    }
    r9 = rax * 3;
    rcx = *((r12 + 0x28));
    r11 = rbp + 0x10;
    r9 <<= 3;
    rcx += r9;
    r15 = *((rcx + 0x10));
    *((rsp + 0x10)) = rcx;
    r8 = *(r15);
    *((rsp + 8)) = r8;
    rax = fcn_0040a120 (r10, r11, *(r15));
    rcx = *((rsp + 0x10));
    r8 = *((rsp + 8));
    if (*((rcx + 8)) > 1) {
        goto label_1;
    }
    if (rax != 0) {
        goto label_0;
    }
    rax = fcn_0040a120 (*((r13 + 8)), r13 + 0x10, r8);
    if (rax != 0) {
        goto label_2;
    }
    goto label_0;
label_5:
    r15 = *((r15 + 8));
    if (r15 <= 0) {
        goto label_0;
    }
    rax = fcn_0040a120 (r10, r11, r15);
    if (rax != 0) {
        goto label_0;
    }
    rax = fcn_0040a120 (*((r13 + 8)), r13 + 0x10, rdx);
    if (rax == 0) {
        goto label_0;
    }
    goto label_2;
label_7:
    r9d = 0;
    rbx = rsp + 0x30;
    if (r10 <= 0) {
        goto label_8;
    }
    do {
        rax = *((rbp + 0x10));
        r10 = *((rax + r9*8));
        rax = fcn_0040a120 (*((rsp + 0x28)), rbx, *((rax + r9*8)));
        if (rax == 0) {
            r11 = *((r13 + 8));
            r12 = r13 + 0x10;
            rax = fcn_0040a120 (r11, r12, rdx);
            rax--;
            rdx = rax;
            if (rax < 0) {
                goto label_9;
            }
            if (rax >= r11) {
                goto label_9;
            }
            r11--;
            *((r13 + 8)) = r11;
            fcn_0040a290 (r13 + 8, r12, rdx);
        }
label_9:
        r9++;
    } while (*((rbp + 8)) > r9);
label_8:
    do {
        eax = free (*((rsp + 0x30)));
        eax = 0;
        return rax;
label_6:
        *((rsp + 8)) = eax;
        free (*((rsp + 0x30)));
        eax = *((rsp + 8));
        return rax;
label_3:
        edi = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40cb60 */
#include <stdint.h>
 
uint64_t fcn_0040cb60 (int64_t arg1, void ** arg2) {
    void * ptr;
    size_t var_10h;
    void * var_18h;
    size_t size;
    size_t * var_28h;
    uint32_t var_30h;
    void * var_38h;
    int64_t var_40h;
    void ** var_48h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_78h;
    void * var_80h;
    int64_t var_90h;
    int64_t var_91h;
    int64_t var_a0h;
    int64_t var_b0h;
    rdi = arg1;
    rsi = arg2;
    *((rsp + 0x48)) = rsi;
    rax = malloc (0x3800);
    *((rsp + 0x20)) = rax;
    if (rax == 0) {
        goto label_5;
    }
    r9 = *((rsp + 0x48));
    rax = *((rsp + 0x20));
    xmm0 = 0;
    *((rsp + 0x50)) = xmm0;
    rax += 0x1800;
    *((rsp + 0x60)) = xmm0;
    *((rsp + 8)) = rax;
    *((r9 + 0x58)) = 0;
    *((r9 + 0x60)) = 0;
    if (*((r9 + 0x10)) <= 0) {
        goto label_27;
    }
    r8d = 0;
    r12d = 0;
    *((rsp + 0x18)) = r8;
    r8 = rbp;
    do {
        rdi = *((rsp + 0x18));
        rax = rdi*8;
        *((rsp + 0x28)) = rax;
        rax = *((r9 + 0x18));
        r15 = *((rax + rdi*8));
        r15 <<= 4;
        r15 += *(r8);
        eax = *((r15 + 8));
        ebp = *((r15 + 8));
        eax >>= 8;
        ax &= 0x3ff;
        if (ebp == 1) {
            goto label_28;
        }
        if (ebp == 3) {
            goto label_29;
        }
        if (ebp == 5) {
            goto label_30;
        }
        if (ebp == 7) {
            goto label_31;
        }
label_2:
        rax = *((rsp + 0x18));
    } while (rax < *((r9 + 0x10)));
    if (r12 <= 0) {
        goto label_32;
    }
    *((rsp + 0x78)) = 0;
    rbx = r12 + 1;
    *((rsp + 0x70)) = rbx;
    rbx <<= 3;
    rax = malloc (rbx);
    r13 = rax;
    *((rsp + 0x80)) = rax;
    if (rax == 0) {
        goto label_33;
    }
    rax = 0xaaaaaaaaaaaa855;
    *((rsp + 0x50)) = 0;
    if (r12 > rax) {
        goto label_33;
    }
    rax = r12 * 3;
    rax <<= 3;
    rdi = rax;
    *((rsp + 0x38)) = rax;
    rax = malloc (rdi);
    *((rsp + 8)) = rax;
    if (rax == 0) {
        goto label_33;
    }
    rax = *((rsp + 8));
    rbx -= 8;
    xmm0 = 0;
    r15d = 0;
    r13 = *((rsp + 0x20));
    *((rsp + 0x30)) = 0;
    rax += rbx;
    *((rsp + 0x10)) = r12;
    r12 = rbp;
    *((rsp + 0x18)) = rax;
    rbx += rax;
    r14 = r13 + 8;
    *((rsp + 0x28)) = rbx;
    rbx = rsp + 0x70;
    *((rsp + 0x90)) = xmm0;
    *((rsp + 0xa0)) = xmm0;
label_0:
    *((rsp + 0x78)) = 0;
    r14d = 0;
    if (*(rbp) <= 0) {
        goto label_34;
    }
    do {
        rax = *((rbp + 8));
        rdx = *((rax + r14*8));
        rax = *((r12 + 0x18));
        rax = *((rax + rdx*8));
        if (rax != -1) {
            rdx = rax * 3;
            rax = *((r12 + 0x30));
            eax = fcn_0040a660 (rbx, rax + rdx*8);
            *((rsp + 0x50)) = eax;
            if (eax != 0) {
                goto label_17;
            }
        }
        r14++;
    } while (*(rbp) > r14);
label_34:
    rax = fcn_0040b3d0 (rsp + 0x50, r12, rbx, 0);
    rdi = *((rsp + 8));
    *((rdi + r15*8)) = rax;
    if (rax == 0) {
        goto label_35;
    }
label_18:
    if (*((rax + 0x68)) < 0) {
        goto label_36;
    }
    rdi = *((rsp + 0x18));
    *((rdi + r15*8)) = rax;
    rdi = *((rsp + 0x28));
    *((rdi + r15*8)) = rax;
label_16:
    eax = 0;
    rdx = rsp + 0x90;
    do {
        rcx = *((rdx + rax));
        rcx |= *((r13 + rax + 0x1800));
        *((rdx + rax)) = rcx;
        rax += 8;
    } while (rax != 0x20);
    r15++;
    rbp += 0x18;
    r13 += 0x20;
    if (r15 != *((rsp + 0x10))) {
        goto label_0;
    }
    r12 = *((rsp + 0x10));
    *((rsp + 0x10)) = rdx;
    if (*((rsp + 0x30)) != 0) {
        goto label_37;
    }
    rax = calloc (8, 0x100);
    rbx = rax;
    rax = *((rsp + 0x48));
    *((rax + 0x58)) = rbx;
    if (rbx == 0) {
        goto label_22;
    }
    r10 = *((rsp + 0x20));
    r13 = *((rsp + 8));
    r11d = 0;
    r14 = *((rsp + 0x18));
    rdx = *((rsp + 0x10));
    r8 = r10 + 0x1820;
label_1:
    rdi = r11;
    rax = *((rdx + r11));
    ecx = 1;
    rdi <<= 6;
    rdi += rbx;
    if (rax == 0) {
        goto label_38;
    }
    do {
        if ((al & 1) != 0) {
            goto label_39;
        }
label_19:
        rcx += rcx;
        rdi += 8;
        rax >>= 1;
    } while (rax != 0);
label_38:
    r11 += 8;
    if (r11 != 0x20) {
        goto label_1;
    }
label_24:
    if ((*((rsp + 0x91)) & 4) == 0) {
        goto label_21;
    }
    rcx = *((rsp + 0x20));
    eax = 0;
    do {
        rdx = rax;
        rdx <<= 5;
        if ((*((rcx + rdx + 0x1801)) & 4) != 0) {
            goto label_40;
        }
        rax++;
    } while (rax != r12);
label_21:
    free (*((rsp + 8)));
    free (*((rsp + 0x80)));
    rax = *((rsp + 0x20));
    rbx = *((rsp + 0x38));
    rbp = rax + 0x10;
    rbx += rbp;
    do {
        rbp += 0x18;
        free (*(rbp));
    } while (rbx != rbp);
    free (*((rsp + 0x20)));
    eax = 1;
    goto label_20;
label_4:
    *((r13 + 8)) = 0;
    *(r13) = 0;
    if (r12 != 0) {
        goto label_41;
    }
    eax = free (*((rsp + 0x20)));
label_5:
    eax = 0;
label_20:
    return rax;
label_28:
    ecx = *(r15);
    rbx = rsp + 0x50;
    edi = 1;
    rdx = rcx;
    rdi <<= cl;
    rdx >>= 3;
    edx &= 0x18;
    *((rbx + rdx)) |= rdi;
label_6:
    if (ax == 0) {
        goto label_9;
    }
    if ((al & 0x20) != 0) {
        goto label_42;
    }
label_7:
    if ((al & 0x80) != 0) {
        goto label_11;
    }
    if ((al & 4) == 0) {
        goto label_10;
    }
    if (ebp == 1) {
        goto label_43;
    }
    if (*((r8 + 0xb4)) <= 1) {
        goto label_13;
    }
label_12:
    rdi = *((r8 + 0x78));
    esi = 0;
    ecx = 0;
    do {
        rdx = *((rdi + rcx*8));
        rdx = ~rdx;
        rdx |= *((r8 + rcx*8 + 0xb8));
        rdx &= *((rbx + rcx*8));
        *((rbx + rcx*8)) = rdx;
        rcx++;
        rsi |= rdx;
    } while (rcx != 4);
    if (rsi == 0) {
        goto label_2;
    }
label_10:
    if ((al & 8) == 0) {
        goto label_9;
    }
    if (ebp == 1) {
        goto label_44;
    }
label_14:
    if (*((r8 + 0xb4)) <= 1) {
        goto label_45;
    }
    rsi = *((r8 + 0x78));
    ecx = 0;
    edx = 0;
    do {
        rax = *((r8 + rdx*8 + 0xb8));
        rax &= *((rsi + rdx*8));
        rax = ~rax;
        rax &= *((rbx + rdx*8));
        *((rbx + rdx*8)) = rax;
        rdx++;
        rcx |= rax;
    } while (rdx != 4);
    if (rcx == 0) {
        goto label_2;
    }
label_9:
    r14 = *((rsp + 8));
    r13d = 0;
    if (r12 <= 0) {
        goto label_46;
    }
    *((rsp + 0x10)) = ebp;
    r12 = r14;
    r14 = rbx;
    *((rsp + 0x40)) = r8;
    *((rsp + 0x30)) = r9;
    while (*((rsp + 0x10)) == 1) {
        ecx = *(r15);
        rax = rcx;
        rax >>= 3;
        eax &= 0x18;
        rax += *((rsp + 8));
        rax = *((rax + rdx));
        rax >>= cl;
        if ((al & 1) != 0) {
            goto label_47;
        }
label_3:
        r13++;
        r12 += 0x20;
        if (r13 >= rbp) {
            goto label_48;
        }
        rdx = r13;
        rdx <<= 5;
    }
label_47:
    ecx = 0;
    eax = 0;
    rsi = rsp + 0x70;
    do {
        rdx = *((r14 + rax*8));
        rdx &= *((r12 + rax*8));
        *((rsi + rax*8)) = rdx;
        rax++;
        rcx |= rdx;
    } while (rax != 4);
    if (rcx == 0) {
        goto label_3;
    }
    ebx = 0;
    edi = 0;
    r11 = rsp + 0x90;
    edx = 0;
    do {
        rsi = *((r14 + rdx*8));
        rax = *((r12 + rdx*8));
        rcx = rsi;
        rcx = ~rcx;
        rcx &= rax;
        rax = ~rax;
        rax &= rsi;
        *((r11 + rdx*8)) = rcx;
        rdi |= rcx;
        *((r14 + rdx*8)) = rax;
        rdx++;
        rbx |= rax;
    } while (rdx != 4);
    rsi = *((rsp + 0x20));
    rax = r13 * 3;
    rdx = rsi + rax*8;
    if (rdi != 0) {
        __asm ("movdqa xmm1, xmmword [rsp + 0x90]");
        rax = rbp;
        *((rsp + 0x38)) = rdx;
        rax <<= 5;
        rax += *((rsp + 8));
        __asm ("movups xmmword [rax], xmm1");
        __asm ("movdqa xmm2, xmmword [rsp + 0xa0]");
        __asm ("movups xmmword [rax + 0x10], xmm2");
        __asm ("movdqa xmm3, xmmword [rsp + 0x70]");
        rax = rbp + rbp*2;
        __asm ("movups xmmword [r12], xmm3");
        __asm ("movdqa xmm4, xmmword [rsp + 0x80]");
        __asm ("movups xmmword [r12 + 0x10], xmm4");
        eax = fcn_0040b1c0 (rsi + rax*8, rdx);
        if (eax != 0) {
            goto label_49;
        }
        rdx = *((rsp + 0x38));
        rbp++;
    }
    rax = *((rsp + 0x30));
    rdi = *((rsp + 0x28));
    rax = *((rax + 0x18));
    al = fcn_00408b10 (rdx, *((rax + rdi)));
    if (al == 0) {
        goto label_49;
    }
    if (rbx != 0) {
        goto label_3;
    }
label_48:
    r8 = *((rsp + 0x40));
    r9 = *((rsp + 0x30));
    r12 = rbp;
    rbx = r14;
label_46:
    if (r12 != r13) {
        goto label_2;
    }
    __asm ("movdqa xmm5, xmmword [rsp + 0x50]");
    rax = r12;
    rdi = *((rsp + 0x28));
    *((rsp + 0x30)) = r8;
    rax <<= 5;
    rax += *((rsp + 8));
    *((rsp + 0x10)) = r9;
    __asm ("movups xmmword [rax], xmm5");
    __asm ("movdqa xmm6, xmmword [rsp + 0x60]");
    __asm ("movups xmmword [rax + 0x10], xmm6");
    rax = *((r9 + 0x18));
    rbp = *((rax + rdi));
    rdi = *((rsp + 0x20));
    rax = r12 * 3;
    r13 = rdi + rax*8;
    *(r13) = 1;
    *((r13 + 8)) = 1;
    rax = malloc (8);
    r9 = *((rsp + 0x10));
    r8 = *((rsp + 0x30));
    *((r13 + 0x10)) = rax;
    if (rax == 0) {
        goto label_4;
    }
    *(rax) = rbp;
    r12++;
label_11:
    xmm0 = 0;
    *(rbx) = xmm0;
    *((rbx + 0x10)) = xmm0;
    goto label_2;
label_49:
    r12 = rbp;
label_41:
    rax = *((rsp + 0x20));
    rbx = rax + 0x10;
    rax = r12 * 3;
    rbp = rbx + rax*8;
    do {
        rbx += 0x18;
        free (*(rbx));
    } while (rbp != rbx);
    free (*((rsp + 0x20)));
    goto label_5;
label_30:
    if (*((r8 + 0xb4)) <= 1) {
        goto label_50;
    }
    rsi = *((r8 + 0x78));
    edx = 0;
    rbx = rsp + 0x50;
    do {
        rcx = *((rbx + rdx));
        rcx |= *((rsi + rdx));
        *((rbx + rdx)) = rcx;
        rdx += 8;
    } while (rdx != 0x20);
label_8:
    rdx = *((r8 + 0xd8));
    if ((dl & 0x40) == 0) {
    }
    edx &= 0x80;
    if (edx == 0) {
        goto label_6;
    }
    goto label_6;
label_42:
    rdx = *((rsp + 0x50));
    xmm0 = 0;
    *(rbx) = xmm0;
    *((rbx + 0x10)) = xmm0;
    dh &= 4;
    if (dh == 0) {
        goto label_2;
    }
    *((rsp + 0x50)) = 0x400;
    goto label_7;
label_50:
    __asm ("pcmpeqd xmm0, xmm0");
    rbx = rsp + 0x50;
    *((rsp + 0x50)) = xmm0;
    *((rsp + 0x60)) = xmm0;
    goto label_8;
label_45:
    ecx = 0;
    edx = 0;
    do {
        rax = *((r8 + rdx*8 + 0xb8));
        rax = ~rax;
        rax &= *((rbx + rdx*8));
        *((rbx + rdx*8)) = rax;
        rdx++;
        rcx |= rax;
    } while (rdx != 4);
    if (rcx == 0) {
        goto label_2;
    }
    goto label_9;
label_13:
    esi = 0;
    edx = 0;
    do {
        rcx = *((rbx + rdx*8));
        rcx &= *((r8 + rdx*8 + 0xb8));
        *((rbx + rdx*8)) = rcx;
        rdx++;
        rsi |= rcx;
    } while (rdx != 4);
    if (rsi != 0) {
        goto label_10;
    }
    goto label_2;
label_43:
    if ((*((r15 + 0xa)) & 0x40) == 0) {
        goto label_11;
    }
    if (*((r8 + 0xb4)) > 1) {
        goto label_12;
    }
    goto label_13;
label_31:
    __asm ("pcmpeqd xmm0, xmm0");
    rbx = rsp + 0x50;
    *((rsp + 0x50)) = xmm0;
    goto label_8;
label_29:
    rsi = *(r15);
    edx = 0;
    rbx = rsp + 0x50;
    do {
        rcx = *((rbx + rdx));
        rcx |= *((rsi + rdx));
        *((rbx + rdx)) = rcx;
        rdx += 8;
    } while (rdx != 0x20);
    goto label_6;
label_44:
    if ((*((r15 + 0xa)) & 0x40) == 0) {
        goto label_14;
    }
    goto label_11;
label_15:
    edx = *((rsp + 0x50));
    if (edx == 0) {
        goto label_51;
    }
label_17:
    r12 = *((rsp + 0x10));
label_22:
    free (*((rsp + 8)));
    r13 = *((rsp + 0x80));
label_33:
    free (*((rsp + 0x80)));
    rax = *((rsp + 0x20));
    rbx = rax + 0x10;
    rax = r12 * 3;
    rbp = rbx + rax*8;
    do {
        rbx += 0x18;
        free (*(rbx));
    } while (rbx != rbp);
    free (*((rsp + 0x20)));
    goto label_5;
label_36:
    rax = fcn_0040b3d0 (rsp + 0x50, r12, rbx, 1);
    rdi = *((rsp + 0x18));
    *((rdi + r15*8)) = rax;
    if (rax == 0) {
        goto label_15;
    }
label_51:
    rdi = *((rsp + 8));
    if (rax != *((rdi + r15*8))) {
        edi = *((rsp + 0x30));
        eax = 1;
        if (*((r12 + 0xb4)) >= 2) {
            edi = eax;
        }
        *((rsp + 0x30)) = dil;
    }
    rax = fcn_0040b3d0 (rsp + 0x50, r12, rbx, 2);
    rdi = *((rsp + 0x28));
    *((rdi + r15*8)) = rax;
    if (rax != 0) {
        goto label_16;
    }
    eax = *((rsp + 0x50));
    if (eax == 0) {
        goto label_16;
    }
    goto label_17;
label_35:
    ecx = *((rsp + 0x50));
    if (ecx == 0) {
        goto label_18;
    }
    goto label_17;
label_39:
    if ((*((r10 + r11 + 0x1800)) & rcx) != 0) {
        goto label_52;
    }
    rsi = r8 + r11;
    r9d = 0;
    do {
        r15 = *(rsi);
        r9++;
        rsi += 0x20;
        r15 &= rcx;
    } while (r15 == 0);
    r9 <<= 3;
    do {
        if ((*((rbp + r11 + 0xb8)) & rcx) != 0) {
            rsi = *((r14 + r9));
            *(rdi) = rsi;
            goto label_19;
        }
        rsi = *((r13 + r9));
        *(rdi) = rsi;
        goto label_19;
label_27:
        free (*((rsp + 0x20)));
label_26:
        rax = calloc (8, 0x100);
        rbx = *((rsp + 0x48));
        *((rbx + 0x58)) = rax;
        al = (rax != 0) ? 1 : 0;
        goto label_20;
label_52:
        r9d = 0;
    } while (1);
label_40:
    rdi = *((rsp + 0x28));
    rax = *((rdi + rax*8));
    *((rbx + 0x50)) = rax;
    if (*((rsp + 0x30)) == 0) {
        goto label_21;
    }
    *((rbx + 0x850)) = rax;
    goto label_21;
label_37:
    rax = calloc (8, 0x200);
    rbx = rax;
    rax = *((rsp + 0x48));
    *((rax + 0x60)) = rbx;
    if (rbx == 0) {
        goto label_22;
    }
    rax = *((rsp + 0x20));
    rdx = *((rsp + 0x10));
    r13 = rsp + 0xb0;
    r14 = *((rsp + 8));
    r15 = *((rsp + 0x18));
    r11 = rax + 0x1820;
label_23:
    rax = *(rdx);
    r8 = rbp;
    ecx = 1;
    if (rax == 0) {
        goto label_53;
    }
    do {
        if ((al & 1) != 0) {
            goto label_54;
        }
label_25:
        rcx += rcx;
        r8 += 8;
        rax >>= 1;
    } while (rax != 0);
label_53:
    rdx += 8;
    rbp += 0x200;
    r11 += 8;
    if (r13 != rdx) {
        goto label_23;
    }
    goto label_24;
label_54:
    if ((*((r11 - 0x20)) & rcx) != 0) {
        goto label_55;
    }
    rdi = r11;
    esi = 0;
    do {
        r9 = *(rdi);
        rsi++;
        rdi += 0x20;
        r10 = rsi;
        r9 &= rcx;
    } while (r9 == 0);
    do {
        rsi = *((r14 + r10*8));
        *(r8) = rsi;
        rsi = *((r15 + r10*8));
        *((r8 + 0x800)) = rsi;
        goto label_25;
label_55:
        r10d = 0;
    } while (1);
label_32:
    free (*((rsp + 0x20)));
    if (r12 != 0) {
        goto label_5;
    }
    goto label_26;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40d700 */
#include <stdint.h>
 
int64_t fcn_0040d700 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rdi = *(rdi);
    if (rdi == 0) {
        goto label_1;
    }
    if (*((r12 + 0x10)) == 0) {
        goto label_1;
    }
    ebx = 0;
    while (*((r12 + 0x10)) > rbx) {
        rax = rbx;
        rbx++;
        rax <<= 4;
        rdi += rax;
        fcn_004097a0 (*(r12));
    }
label_1:
    ebx = 0;
    free (*((r12 + 0x18)));
    if (*((r12 + 0x10)) == 0) {
        goto label_2;
    }
    do {
        rax = *((r12 + 0x30));
        if (rax != 0) {
            rdx = rbx * 3;
            free (*((rax + rdx*8 + 0x10)));
        }
        rax = *((r12 + 0x38));
        if (rax != 0) {
            rdx = rbx * 3;
            free (*((rax + rdx*8 + 0x10)));
        }
        rax = *((r12 + 0x28));
        if (rax != 0) {
            rdx = rbx * 3;
            free (*((rax + rdx*8 + 0x10)));
        }
        rbx++;
    } while (*((r12 + 0x10)) > rbx);
label_2:
    r13d = 0;
    free (*((r12 + 0x28)));
    free (*((r12 + 0x30)));
    free (*((r12 + 0x38)));
    free (*(r12));
    rdi = *((r12 + 0x40));
    if (rdi == 0) {
        goto label_3;
    }
label_0:
    rax = r13 * 3;
    ebx = 0;
    rbp = rdi + rax*8;
    if (*(rbp) <= 0) {
        goto label_4;
    }
    do {
        rax = *((rbp + 0x10));
        rbx++;
        fcn_00409cf0 (*((rax + rbx*8)));
    } while (rbx < *(rbp));
label_4:
    r13++;
    free (*((rbp + 0x10)));
    if (*((r12 + 0x88)) >= r13) {
        rdi = *((r12 + 0x40));
        goto label_0;
    }
label_3:
    free (*((r12 + 0x40)));
    rdi = *((r12 + 0x78));
    if (rdi != 0x419a80) {
        free (rdi);
    }
    free (*((r12 + 0xe0)));
    rdi = r12;
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40d880 */
#include <stdint.h>
 
int64_t fcn_0040d880 (int32_t arg1) {
    rdi = arg1;
    r12 = rdi;
    if (*(rdi) <= 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rax = *((r12 + 0x10));
        rbp = rbx * 3;
        rbx++;
        rbp <<= 4;
        free (*((rax + rbp + 0x28)));
        rax = *((r12 + 0x10));
        free (*((rax + rbp + 0x10)));
    } while (rbx < *(r12));
label_0:
    rdi = *((r12 + 0x10));
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40d8d0 */
#include <stdint.h>
 
int64_t fcn_0040d8d0 (uint32_t arg1, void * arg3, int64_t arg6, size_t n, void ** s1, void ** s2) {
    rdi = arg1;
    rdx = arg3;
    r9 = arg6;
    rcx = n;
    r8 = s1;
    rsi = s2;
    rax = *(rdi);
    rax--;
    *(rdi) = rax;
    if (rax >= 0) {
        rbx = rax * 3;
        rax = *(rsi);
        r12 = rsi;
        rcx <<= 4;
        rbx <<= 4;
        rax += rbx;
        rsi = *(rax);
        *(rdx) = rsi;
        memcpy (r8, *((rax + 0x10)), rcx);
        free (*((rbp + 0x10)));
        rax = *(r12);
        free (*((rax + rbx + 0x10)));
        rbx += *(r12);
        __asm ("movdqu xmm0, xmmword [rbx + 0x18]");
        *(rbp) = xmm0;
        rax = *((rbx + 0x28));
        *((rbp + 0x10)) = rax;
        rax = *((rbx + 8));
        return rax;
    }
    return assert_fail ("num >= 0", "lib/regexec.c", 0x54f, "pop_fail_stack");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40d960 */
#include <stdint.h>
 
uint64_t fcn_0040d960 (int64_t arg1, char * s) {
    rdi = arg1;
    rsi = s;
    rdi = rsi;
    rbx = rsi;
    rax = strlen (rdi);
    if (rax == 1) {
        ecx = *(rbx);
        rdx = rcx;
        rax <<= cl;
        rdx >>= 3;
        edx &= 0x18;
        *((rbp + rdx)) |= rax;
        eax = 0;
        return rax;
    }
    eax = 3;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40d9b0 */
#include <stdint.h>
 
uint64_t fcn_0040d9b0 (int64_t arg_40h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, void ** arg5, int64_t arg6) {
    void ** var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r13 = rcx;
    r12 = r9;
    rbx = rsi;
    if ((*((rsp + 0x40)) & segment.LOAD0) != 0) {
        edi = "upper";
        ecx = 6;
        rsi = r9;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = ((*((rsp + 0x40)) & segment.LOAD0) > 0) ? 1 : 0;
        if (al != 0) {
            goto label_3;
        }
        r12d = "alpha";
    }
    rcx = *(r13);
    rax = *(rdx);
    if (*(r8) == rcx) {
        goto label_4;
    }
label_1:
    rdx = rcx + 1;
    *(r13) = rdx;
    r13 = rax + rcx*8;
    rax = wctype (r12);
    edi = "alnum";
    ecx = 6;
    rsi = r12;
    *(r13) = rax;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(r8) > rcx) ? 1 : 0;
    if (al == 0) {
        goto label_5;
    }
    edi = "cntrl";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al != 0) {
        goto label_6;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_7;
    }
    do {
        if ((*((rdx + rcx*2)) & 2) != 0) {
            rax = rcx;
            rsi = rdi;
            rax >>= 6;
            rsi <<= cl;
            *((rbx + rax*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
label_0:
    eax = 0;
label_2:
    return rax;
label_5:
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_8;
    }
    do {
        if ((*((rdx + rcx*2)) & 8) != 0) {
            rax = rcx;
            rsi = rdi;
            rax >>= 6;
            rsi <<= cl;
            *((rbx + rax*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_3:
    ecx = 6;
    edi = "lower";
    rsi = r9;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    rcx = *(r13);
    al = (rcx > 0x100) ? 1 : 0;
    eax = "alpha";
    if (al == 0) {
        r12 = rax;
    }
    rax = *(rdx);
    if (*(r8) != rcx) {
        goto label_1;
    }
label_4:
    r14 = rcx + rcx + 1;
    *((rsp + 8)) = r8;
    *(rsp) = rdx;
    rax = realloc (rax, r14*8);
    if (rax == 0) {
        goto label_9;
    }
    rdx = *(rsp);
    r8 = *((rsp + 8));
    *(rdx) = rax;
    *(r8) = r14;
    rcx = *(r13);
    goto label_1;
label_6:
    edi = "lower";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rax > 0) ? 1 : 0;
    if (al == 0) {
        goto label_10;
    }
    edi = "space";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al != 0) {
        goto label_11;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_12;
    }
    do {
        if ((*((rdx + rcx*2 + 1)) & 0x20) != 0) {
            rax = rcx;
            rsi = rdi;
            rax >>= 6;
            rsi <<= cl;
            *((rbx + rax*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_10:
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_13;
    }
    do {
        if ((*((rdx + rcx*2 + 1)) & 2) != 0) {
            rax = rcx;
            rsi = rdi;
            rax >>= 6;
            rsi <<= cl;
            *((rbx + rax*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_11:
    edi = "alpha";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rcx > 0x100) ? 1 : 0;
    if (al == 0) {
        goto label_14;
    }
    edi = 0x41909e;
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al != 0) {
        goto label_15;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_16;
    }
    do {
        if ((*((rdx + rcx*2 + 1)) & 8) != 0) {
            rax = rcx;
            rsi = rdi;
            rax >>= 6;
            rsi <<= cl;
            *((rbx + rax*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_14:
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_17;
    }
    do {
        if ((*((rdx + rcx*2 + 1)) & 4) != 0) {
            rax = rcx;
            rsi = rdi;
            rax >>= 6;
            rsi <<= cl;
            *((rbx + rax*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_8:
    eax = 0;
    do {
        if ((*((rdx + rax*2)) & 8) != 0) {
            ecx = *((rbp + rax));
            r10 = rdi;
            rsi = rcx;
            r10 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r10;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_7:
    eax = 0;
    do {
        if ((*((rdx + rax*2)) & 2) != 0) {
            ecx = *((rbp + rax));
            r11 = rdi;
            rsi = rcx;
            r11 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r11;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_13:
    eax = 0;
    do {
        if ((*((rdx + rax*2 + 1)) & 2) != 0) {
            ecx = *((rbp + rax));
            r14 = rdi;
            rsi = rcx;
            r14 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r14;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_15:
    edi = "print";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rax > 0x100) ? 1 : 0;
    if (al != 0) {
        goto label_18;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_19;
    }
    do {
        if ((*((rdx + rcx*2 + 1)) & 0x40) != 0) {
            rax = rcx;
            rsi = rdi;
            rax >>= 6;
            rsi <<= cl;
            *((rbx + rax*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_18:
    edi = "upper";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rcx > 0x100) ? 1 : 0;
    if (al != 0) {
        goto label_20;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edi = 1;
    rax = *(rax);
    if (rbp != 0) {
        goto label_21;
    }
    do {
        if ((*((rax + rcx*2 + 1)) & 1) != 0) {
            rdx = rcx;
            rsi = rdi;
            rdx >>= 6;
            rsi <<= cl;
            *((rbx + rdx*8)) |= rsi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_9:
    eax = 0xc;
    goto label_2;
label_20:
    edi = "blank";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rcx > 0x100) ? 1 : 0;
    if (al != 0) {
        goto label_22;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    esi = 1;
    rdx = *(rax);
    if (rbp != 0) {
        goto label_23;
    }
    do {
        if ((*((rdx + rcx*2)) & 1) != 0) {
            rax = rcx;
            rdi = rsi;
            rax >>= 6;
            rdi <<= cl;
            *((rbx + rax*8)) |= rdi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_17:
    eax = 0;
    do {
        if ((*((rdx + rax*2 + 1)) & 4) != 0) {
            ecx = *((rbp + rax));
            r9 = rdi;
            rsi = rcx;
            r9 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r9;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_12:
    eax = 0;
    do {
        if ((*((rdx + rax*2 + 1)) & 0x20) != 0) {
            ecx = *((rbp + rax));
            r9 = rdi;
            rsi = rcx;
            r9 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r9;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_16:
    eax = 0;
    do {
        if ((*((rdx + rax*2 + 1)) & 8) != 0) {
            ecx = *((rbp + rax));
            r14 = rdi;
            rsi = rcx;
            r14 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r14;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_22:
    edi = "graph";
    ecx = 6;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rax > 0x100) ? 1 : 0;
    if (al != 0) {
        goto label_24;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edx = 1;
    rsi = *(rax);
    if (rbp != 0) {
        goto label_25;
    }
    do {
        if (*((rsi + rcx*2)) < 0) {
            rax = rcx;
            rdi = rdx;
            rax >>= 6;
            rdi <<= cl;
            *((rbx + rax*8)) |= rdi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_25:
    eax = 0;
    edi = 1;
    do {
        if (*((rsi + rax*2)) < 0) {
            ecx = *((rbp + rax));
            r9 = rdi;
            rdx = rcx;
            r9 <<= cl;
            rdx >>= 3;
            edx &= 0x18;
            *((rbx + rdx)) |= r9;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_24:
    eax = strcmp (r12, "punct");
    if (eax != 0) {
        goto label_26;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edx = 1;
    rsi = *(rax);
    if (rbp != 0) {
        goto label_27;
    }
    do {
        if ((*((rsi + rcx*2)) & 4) != 0) {
            rax = rcx;
            rdi = rdx;
            rax >>= 6;
            rdi <<= cl;
            *((rbx + rax*8)) |= rdi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_27:
    eax = 0;
    edi = 1;
    do {
        if ((*((rsi + rax*2)) & 4) != 0) {
            ecx = *((rbp + rax));
            r14 = rdi;
            rdx = rcx;
            r14 <<= cl;
            rdx >>= 3;
            edx &= 0x18;
            *((rbx + rdx)) |= r14;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_26:
    eax = strcmp (r12, "xdigit");
    if (eax != 0) {
        goto label_28;
    }
    rax = ctype_b_loc ();
    ecx = 0;
    edx = 1;
    rsi = *(rax);
    if (rbp != 0) {
        goto label_29;
    }
    do {
        if ((*((rsi + rcx*2 + 1)) & 0x10) != 0) {
            rax = rcx;
            rdi = rdx;
            rax >>= 6;
            rdi <<= cl;
            *((rbx + rax*8)) |= rdi;
        }
        rcx++;
    } while (rcx != 0x100);
    goto label_0;
label_29:
    eax = 0;
    edi = 1;
    do {
        if ((*((rsi + rax*2 + 1)) & 0x10) != 0) {
            ecx = *((rbp + rax));
            r9 = rdi;
            rdx = rcx;
            r9 <<= cl;
            rdx >>= 3;
            edx &= 0x18;
            *((rbx + rdx)) |= r9;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_28:
    eax = 4;
    goto label_2;
label_19:
    eax = 0;
    do {
        if ((*((rdx + rax*2 + 1)) & 0x40) != 0) {
            ecx = *((rbp + rax));
            r14 = rdi;
            rsi = rcx;
            r14 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r14;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_23:
    eax = 0;
    edi = 1;
    do {
        if ((*((rdx + rax*2)) & 1) != 0) {
            ecx = *((rbp + rax));
            r14 = rdi;
            rsi = rcx;
            r14 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r14;
        }
        rax++;
    } while (rax != 0x100);
    goto label_0;
label_21:
    edx = 0;
    do {
        if ((*((rax + rdx*2 + 1)) & 1) != 0) {
            ecx = *((rbp + rdx));
            r9 = rdi;
            rsi = rcx;
            r9 <<= cl;
            rsi >>= 3;
            esi &= 0x18;
            *((rbx + rsi)) |= r9;
        }
        rdx++;
    } while (rdx != 0x100);
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40e180 */
#include <stdint.h>
 
uint64_t fcn_0040e180 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_10h;
    int64_t var_8h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r14 = rdx;
    r13 = rcx;
    r12d = r8d;
    *(rsp) = rsi;
    *((rsp + 8)) = r9;
    *((rsp + 0x18)) = 0;
    rax = calloc (0x20, 1);
    if (rax == 0) {
        goto label_1;
    }
    rbx = rax;
    rax = calloc (0x50, 1);
    r15 = rax;
    if (rax == 0) {
        goto label_2;
    }
    eax = *((rax + 0x20));
    edx = r12d;
    edx &= 1;
    eax &= 0xfffffffe;
    eax |= edx;
    *((r15 + 0x20)) = al;
    eax = fcn_0040d9b0 (*((rsp + 0x10)), rbx, r15 + 0x18, r15 + 0x48, rsp + 0x28, r14);
    if (eax != 0) {
        goto label_3;
    }
    rcx = *(r13);
    esi = 1;
    if (cl == 0) {
        goto label_4;
    }
    do {
        rax = rcx + 0x3f;
        rdx = rcx;
        __asm ("cmovns rax, rcx");
        rdx >>= 0x3f;
        r13++;
        rdx >>= 0x3a;
        rcx += rdx;
        rax >>= 6;
        ecx &= 0x3f;
        rcx -= rdx;
        rdx = rsi;
        rdx <<= cl;
        rcx = *(r13);
        *((rbx + rax*8)) |= rdx;
    } while (cl != 0);
label_4:
    if (r12b == 0) {
        goto label_5;
    }
    rax = rbx;
    rdx = rbx + 0x20;
    do {
        rax = ~rax;
        rax += 8;
    } while (rdx != rax);
label_5:
    if (*((rbp + 0xb4)) <= 1) {
        goto label_6;
    }
    rcx = *((rbp + 0x78));
    eax = 0;
    do {
        rdx = *((rcx + rax));
        *((rbx + rax)) &= rdx;
        rax += 8;
    } while (rax != 0x20);
label_6:
    r12 = rbp + 0x70;
    r13 = rbp + 0x80;
    *((rsp + 0x28)) = 3;
    *((rsp + 0x20)) = rbx;
    rax = fcn_0040ad90 (r12, r13, 0, 0, rsp + 0x20);
    r14 = rax;
    if (rax == 0) {
        goto label_7;
    }
    if (*((rbp + 0xb4)) <= 1) {
        goto label_8;
    }
    *((rbp + 0xb0)) |= 2;
    *((rsp + 0x28)) = 6;
    *((rsp + 0x20)) = r15;
    rax = fcn_0040ad90 (r12, r13, 0, 0, rsp + 0x20);
    if (rax == 0) {
        goto label_7;
    }
    *((rsp + 0x38)) = 0xa;
    rax = fcn_0040ad90 (r12, r13, r14, rax, rsp + 0x30);
    r14 = rax;
    do {
label_0:
        rax = r14;
        return rax;
label_7:
        free (rbx);
        fcn_00409780 (r15);
label_1:
        rax = *((rsp + 8));
        r14d = 0;
        *(rax) = 0xc;
    } while (1);
label_8:
    fcn_00409780 (r15);
    goto label_0;
label_2:
    r14d = 0;
    free (rbx);
    rax = *((rsp + 8));
    *(rax) = 0xc;
    goto label_0;
label_3:
    *(rsp) = eax;
    r14d = 0;
    free (rbx);
    fcn_00409780 (r15);
    rdi = *((rsp + 8));
    eax = *(rsp);
    *(rdi) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40e3c0 */
#include <stdint.h>
 
int64_t fcn_0040e3c0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg7) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    wint_t wc;
    mbstate_t * ps;
    char * s;
    int64_t var_41h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    xmm0 = arg7;
    r12d = 0;
    rax = *(rdi);
    *(rsp) = rax;
    if (*((rax + 0xb4)) == 1) {
        r9 = *((rdi + 0x18));
        r9 >>= 0x16;
        r12d = r9d;
        r12d &= 1;
    }
    ebx = 0;
    if (*(rsi) <= 0) {
        goto label_4;
    }
    r15 = rcx;
    *((rsp + 0x20)) = rdx;
    *((rsp + 0x28)) = rsi;
    *((rsp + 0x18)) = rdi;
    while (eax != 1) {
        if (eax == 3) {
            goto label_6;
        }
        if (eax == 6) {
            goto label_7;
        }
        edx &= 0xfffffffd;
        if (dl == 5) {
            goto label_8;
        }
        if (eax == 2) {
            goto label_9;
        }
label_0:
        rax = *((rsp + 0x28));
        rbx++;
        if (rbx >= *(rax)) {
            goto label_4;
        }
label_1:
        rax = *((rsp + 0x20));
        rax = *(rax);
        r14 = *((rax + rbx*8));
        rax = *(rsp);
        rcx = *(rax);
        rax = r14;
        rax <<= 4;
        rsi = rcx + rax;
        *((rsp + 0x10)) = rax;
        eax = *((rsi + 8));
        edx = eax;
    }
    edx = *(rsi);
    *((r15 + rdx)) = 1;
    *((rsp + 8)) = rdx;
    if (r12d != 0) {
        rax = ctype_tolower_loc ();
        rdx = *((rsp + 8));
        rax = *(rax);
        rax = *((rax + rdx*4));
        *((r15 + rax)) = 1;
    }
    rax = *((rsp + 0x18));
    if ((*((rax + 0x1a)) & 0x40) == 0) {
        goto label_0;
    }
    rax = *(rsp);
    if (*((rax + 0xb4)) <= 1) {
        goto label_0;
    }
    rsi = rax;
    rcx = *((rsp + 0x10));
    rax = *(rax);
    edx = *((rax + rcx));
    *((rsp + 0x40)) = dl;
    rdx = r14 + 1;
    if (*((rsi + 0x10)) <= rdx) {
        goto label_10;
    }
    rax = rax + rcx + 0x10;
    ecx = *((rax + 8));
    ecx &= 0x2000ff;
    if (ecx != 0x200001) {
        goto label_10;
    }
    rsi = rsp + 0x41;
    while (*((rax + 0x10)) > rdx) {
        rcx = *(rsp);
        rax = rdx;
        rax <<= 4;
        rax += *(rcx);
        ecx = *((rax + 8));
        ecx &= 0x2000ff;
        if (ecx != 0x200001) {
            goto label_11;
        }
        eax = *(rax);
        rsi++;
        rdx++;
        *((rsi - 1)) = al;
        rax = *(rsp);
    }
label_11:
    rax = rsp + 0x40;
    rsi -= rax;
    r13 = rsi;
label_5:
    *((rsp + 0x38)) = 0;
    rax = fcn_004083e0 (rsp + 0x34, rsp + 0x40, r13, rsp + 0x38);
    if (rax != r13) {
        goto label_0;
    }
    eax = towlower (*((rsp + 0x34)));
    rax = wcrtomb (rsp + 0x40, eax, rsp + 0x38);
    if (rax == -1) {
        goto label_0;
    }
    eax = *((rsp + 0x40));
    rbx++;
    *((r15 + rax)) = 1;
    rax = *((rsp + 0x28));
    if (rbx < *(rax)) {
        goto label_1;
    }
label_4:
    return rax;
label_7:
    rax = *(rsp);
    r13 = *(rsi);
    if (*((rax + 0xb4)) > 1) {
        if (*((r13 + 0x48)) != 0) {
            goto label_12;
        }
        if ((*((r13 + 0x20)) & 1) != 0) {
            goto label_12;
        }
        if (*((r13 + 0x40)) != 0) {
            goto label_12;
        }
    }
    r14d = 0;
    if (*((r13 + 0x28)) > 0) {
        goto label_13;
    }
    goto label_0;
label_2:
    r14++;
    if (r14 >= *((r13 + 0x28))) {
        goto label_0;
    }
label_13:
    *((rsp + 0x38)) = 0;
    rax = *(r13);
    rbp = r14*4;
    rax = wcrtomb (rsp + 0x40, *((rax + r14*4)), rsp + 0x38);
    if (rax != -1) {
        edx = *((rsp + 0x40));
        *((r15 + rdx)) = 1;
        *((rsp + 8)) = rdx;
        if (r12d == 0) {
            goto label_14;
        }
        rax = ctype_tolower_loc ();
        rdx = *((rsp + 8));
        rax = *(rax);
        rax = *((rax + rdx*4));
        *((r15 + rax)) = 1;
    }
label_14:
    rax = *((rsp + 0x18));
    if ((*((rax + 0x1a)) & 0x40) == 0) {
        goto label_2;
    }
    rax = *(rsp);
    if (*((rax + 0xb4)) <= 1) {
        goto label_2;
    }
    rax = *(r13);
    eax = towlower (*((rax + rbp)));
    rax = wcrtomb (rsp + 0x40, eax, rsp + 0x38);
    if (rax == -1) {
        goto label_2;
    }
    eax = *((rsp + 0x40));
    *((r15 + rax)) = 1;
    goto label_2;
label_12:
    *((rsp + 0x38)) = 0;
    do {
        *((rsp + 0x40)) = 0;
        rax = fcn_004083e0 (0, rsp + 0x38, 1, rsp + 0x40);
        if (rax == 0xfffffffffffffffe) {
            eax = *((rsp + 0x38));
            *((r15 + rax)) = 1;
        }
    } while (rax != 0xfffffffffffffffe);
    goto label_0;
label_6:
    *((rsp + 8)) = 0;
label_3:
    rax = *((rsp + 0x10));
    r14d = 0;
    rax = *((rcx + rax));
    rcx = *((rsp + 8));
    rbp = *((rax + rcx));
    r13 = rcx*8;
    do {
        if (((rbp >> r14) & 1) < 0) {
            rax = r15 + r13;
            *((r15 + r13)) = 1;
            if (r12d == 0) {
                goto label_15;
            }
            edi = r13 + 0x80;
            if (edi <= 0x17f) {
                rax = ctype_tolower_loc ();
                rax = *(rax);
                rax = *((rax + r13*4));
                rax += r15;
            }
            *(rax) = 1;
        }
label_15:
        r14d++;
        r13++;
    } while (r14d != 0x40);
    rax = *((rsp + 8));
    if (rax == 0x20) {
        goto label_0;
    }
    rax = *(rsp);
    rcx = *(rax);
    goto label_3;
label_8:
    __asm ("movdqa xmm0, xmmword [0x00419cc0]");
    __asm ("movups xmmword [r15], xmm0");
    __asm ("movups xmmword [r15 + 0x10], xmm0");
    __asm ("movups xmmword [r15 + 0x20], xmm0");
    __asm ("movups xmmword [r15 + 0x30], xmm0");
    __asm ("movups xmmword [r15 + 0x40], xmm0");
    __asm ("movups xmmword [r15 + 0x50], xmm0");
    __asm ("movups xmmword [r15 + 0x60], xmm0");
    __asm ("movups xmmword [r15 + 0x70], xmm0");
    __asm ("movups xmmword [r15 + 0x80], xmm0");
    __asm ("movups xmmword [r15 + 0x90], xmm0");
    __asm ("movups xmmword [r15 + 0xa0], xmm0");
    __asm ("movups xmmword [r15 + 0xb0], xmm0");
    __asm ("movups xmmword [r15 + 0xc0], xmm0");
    __asm ("movups xmmword [r15 + 0xd0], xmm0");
    __asm ("movups xmmword [r15 + 0xe0], xmm0");
    __asm ("movups xmmword [r15 + 0xf0], xmm0");
    if (eax != 2) {
        goto label_4;
    }
    goto label_16;
label_9:
    __asm ("movdqa xmm0, xmmword [0x00419cc0]");
    __asm ("movups xmmword [r15], xmm0");
    __asm ("movups xmmword [r15 + 0x10], xmm0");
    __asm ("movups xmmword [r15 + 0x20], xmm0");
    __asm ("movups xmmword [r15 + 0x30], xmm0");
    __asm ("movups xmmword [r15 + 0x40], xmm0");
    __asm ("movups xmmword [r15 + 0x50], xmm0");
    __asm ("movups xmmword [r15 + 0x60], xmm0");
    __asm ("movups xmmword [r15 + 0x70], xmm0");
    __asm ("movups xmmword [r15 + 0x80], xmm0");
    __asm ("movups xmmword [r15 + 0x90], xmm0");
    __asm ("movups xmmword [r15 + 0xa0], xmm0");
    __asm ("movups xmmword [r15 + 0xb0], xmm0");
    __asm ("movups xmmword [r15 + 0xc0], xmm0");
    __asm ("movups xmmword [r15 + 0xd0], xmm0");
    __asm ("movups xmmword [r15 + 0xe0], xmm0");
    __asm ("movups xmmword [r15 + 0xf0], xmm0");
label_16:
    rax = *((rsp + 0x18));
    *((rax + 0x38)) |= 1;
    goto label_4;
label_10:
    r13d = 1;
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40e8a0 */
#include <stdint.h>
 
uint64_t fcn_0040e8a0 (int64_t arg1, int64_t arg2, int64_t arg3, int32_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rdx <<= 4;
    r10 = rdi + rdx;
    r11d = *((r10 + 8));
    if (r11b == 7) {
        goto label_6;
    }
    if (*((rcx + 0x90)) == 1) {
        goto label_0;
    }
    rbx = rsi;
    rdi = rcx;
    r9 = rcx;
    eax = fcn_0040a0d0 (rdi, r8);
    if (r11b == 5) {
        goto label_7;
    }
    if (r11b != 6) {
        goto label_0;
    }
    if (eax > 1) {
        goto label_8;
    }
    do {
label_0:
        ebp = 0;
label_1:
        eax = ebp;
        return eax;
INVALID_JUMP;
    } while (eax <= 1);
    rax = *(rbx);
    if ((al & 0x40) != 0) {
        goto label_9;
    }
    rdx = *((r9 + 8));
    if (*((rdx + r8)) == 0xa) {
        goto label_0;
    }
label_9:
    if ((al & 0x80) == 0) {
        goto label_1;
    }
    rax = *((r9 + 8));
    if (*((rax + r8)) == 0) {
        goto label_0;
    }
    goto label_1;
label_8:
    r13 = *(r10);
    rsi = *((r13 + 0x40));
    rdx = *((r13 + 0x28));
    if (rsi == 0) {
        rax = rdx;
        rax |= *((r13 + 0x48));
        if (rax == 0) {
            goto label_10;
        }
    }
    rax = *((r9 + 0x10));
    r12d = *((rax + r8*4));
    if (rdx <= 0) {
        goto label_11;
    }
    rcx = *(r13);
    if (r12d == *(rcx)) {
        goto label_3;
    }
    eax = 0;
    while (rdx != rax) {
        if (r12d == *((rcx + rax*4))) {
            goto label_3;
        }
        rax++;
    }
label_11:
    rax = *((r13 + 0x48));
    if (rax <= 0) {
        goto label_12;
    }
    ebx = 0;
    while (eax == 0) {
        rbx++;
        if (rbx >= *((r13 + 0x48))) {
            goto label_13;
        }
        rax = *((r13 + 0x18));
        eax = iswctype (r12d, *((rax + rbx*8)));
    }
label_3:
    if ((*((r13 + 0x20)) & 1) == 0) {
        goto label_1;
    }
    goto label_0;
label_6:
    rax = *((rcx + 8));
    edx = *((rax + r8));
    if (dl <= 0xc1) {
        goto label_0;
    }
    rcx = *((rcx + 0x58));
    rsi = r8 + 1;
    if (rsi >= rcx) {
        goto label_0;
    }
    edi = *((rax + r8 + 1));
    if (dl <= 0xdf) {
        goto label_14;
    }
    if (dl > 0xef) {
        goto label_15;
    }
    if (dl != 0xe0) {
        goto label_16;
    }
    if (dil <= 0x9f) {
        goto label_0;
    }
label_16:
    edi = 3;
label_5:
    rdx = r8 + rdi;
    if (rcx < rdx) {
        goto label_0;
    }
    rdx = rax + rsi;
    rax += r8;
    rax += rdi;
    goto label_17;
label_2:
    rdx++;
    if (rax == rdx) {
        goto label_1;
    }
label_17:
    ebx = *(rdx);
    ecx = rbx - 0x80;
    if (cl <= 0x3f) {
        goto label_2;
    }
    goto label_0;
label_13:
    rsi = *((r13 + 0x40));
label_12:
    if (rsi <= 0) {
        goto label_10;
    }
    rdx = *((r13 + 8));
    eax = 0;
label_4:
    if (r12d < *((rdx + rax*4))) {
        goto label_18;
    }
    rcx = *((r13 + 0x10));
    if (r12d <= *((rcx + rax*4))) {
        goto label_3;
    }
label_18:
    rax++;
    if (rax != rsi) {
        goto label_4;
    }
label_10:
    if ((*((r13 + 0x20)) & 1) != 0) {
        goto label_1;
    }
    goto label_0;
label_15:
    if (dl > 0xf7) {
        goto label_19;
    }
    if (dl != 0xf0) {
        goto label_20;
    }
    if (dil <= 0x8f) {
        goto label_0;
    }
label_20:
    edi = 4;
    goto label_5;
label_14:
    edi += 0xffffff80;
    if (dil <= 0x3f) {
        goto label_1;
    }
    goto label_0;
label_19:
    if (dl > 0xfb) {
        goto label_21;
    }
    if (dl != 0xf8) {
        goto label_22;
    }
    if (dil <= 0x87) {
        goto label_0;
    }
label_22:
    edi = 5;
    goto label_5;
label_21:
    if (dl > 0xfd) {
        goto label_0;
    }
    if (dl != 0xfc) {
        goto label_23;
    }
    if (dil <= 0x83) {
        goto label_0;
    }
label_23:
    edi = 6;
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40eb30 */
#include <stdint.h>
 
int64_t fcn_0040eb30 (int64_t arg_100h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_78h;
    int64_t var_7ch;
    int64_t var_80h;
    uint32_t var_88h;
    void * var_90h;
    int64_t var_a0h;
    int64_t var_a8h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = rdx;
    rax <<= 4;
    r13 = rdx;
    r12 = rdi;
    rbx = *((rdi + 0x98));
    r15 = *((rsi + 8));
    *((rsp + 0x50)) = rsi;
    rax += *(rbx);
    *((rsp + 0x68)) = r8;
    rax = *(rax);
    *((rsp + 0x30)) = r9;
    *((rsp + 0x20)) = rbx;
    *((rsp + 0x38)) = rax;
    rax = *((rdi + 0xe0));
    *((rsp + 0x78)) = 0;
    rax += r9;
    if (rax >= r15) {
        goto label_15;
    }
label_11:
    rcx = *((r12 + 0xb8));
    rax = *((rsp + 0x50));
    edx = *((r12 + 0xa0));
    rbx = *(rax);
    r14 = *((rax + 0x10));
    *((rsp + 0x58)) = rcx;
    rcx = *((r12 + 0x48));
    *((r12 + 0xb8)) = r14;
    *((rsp + 0x60)) = rcx;
    if (rbx == 0) {
        goto label_16;
    }
    *((r12 + 0x48)) = rbx;
    eax = fcn_0040be50 (r12, rbx - 1, rdx);
    *(rsp) = eax;
    if (rbx == rbp) {
        goto label_17;
    }
    r15 = *((r14 + rbx*8));
    if (r15 != 0) {
        if ((*((r15 + 0x68)) & 0x40) != 0) {
            goto label_18;
        }
    }
    *((rsp + 0x90)) = 0;
    xmm0 = 0;
    *((rsp + 0x80)) = xmm0;
label_6:
    if (rbx >= *((rsp + 0x30))) {
        goto label_19;
    }
    ecx = *((r12 + 0xe0));
    if (ecx < 0) {
        goto label_19;
    }
    *((rsp + 0x10)) = 0;
    r13 = rbx + 1;
    rax = *((r12 + 0xb8));
    r14 = r13;
label_1:
    rcx = r14 - 1;
    rsi = *((rax + r14*8));
    *((rsp + 0x88)) = 0;
    *(rsp) = rcx;
    rcx = r14*8;
    *((rsp + 0x18)) = rcx;
    if (rsi == 0) {
        goto label_20;
    }
    rsi += 8;
    eax = fcn_0040a660 (rsp + 0x80, rsi);
    *((rsp + 0x78)) = eax;
    if (eax != 0) {
        goto label_7;
    }
    if (r15 == 0) {
        goto label_8;
    }
label_4:
    xmm0 = 0;
    rbp = *((r12 + 0x98));
    *((rsp + 0x7c)) = 0;
    *((rsp + 0xa0)) = xmm0;
    *((rsp + 0xb0)) = 0;
    if (*((r15 + 0x28)) <= 0) {
        goto label_21;
    }
    ecx = 0;
    rax = rbp + 0xd8;
    *((rsp + 0x48)) = r14;
    *((rsp + 0x28)) = rax;
    r14 = rcx;
    while ((*((rsi + 0xa)) & 0x10) == 0) {
label_3:
        al = fcn_0040bf40 (r12, rsi, *(rsp));
        if (al != 0) {
label_2:
            rax = r13*8;
            *((rsp + 8)) = rax;
label_0:
            rax = *((rbp + 0x18));
            rcx = *((rsp + 8));
            al = fcn_00408b10 (rsp + 0x80, *((rax + rcx)));
            if (al == 0) {
                goto label_22;
            }
        }
        r14++;
        if (r14 >= *((r15 + 0x28))) {
            goto label_23;
        }
        rax = *((r15 + 0x30));
        rdi = *(rbp);
        r13 = *((rax + r14*8));
        rbx = *((rax + r14*8));
        rbx <<= 4;
        rsi = rdi + rbx;
    }
    eax = fcn_0040e8a0 (rdi, *((rsp + 0x28)), r13, r12, *(rsp));
    if (eax <= 1) {
        goto label_24;
    }
    rcx = *(rsp);
    rbx = r13*8;
    rax = (int64_t) eax;
    rdx = *((rbp + 0x18));
    *((rsp + 8)) = rbx;
    rbx = rax + rcx;
    rax = *((r12 + 0xb8));
    rdx = *((rdx + r13*8));
    r13 = rbx*8;
    rsi = *((rax + rbx*8));
    *((rsp + 0xa8)) = 0;
    if (rsi != 0) {
        rsi += 8;
        *((rsp + 0x40)) = rdx;
        eax = fcn_0040a660 (rsp + 0xa0, rsi);
        rdx = *((rsp + 0x40));
        *((rsp + 0x7c)) = eax;
        if (eax != 0) {
            goto label_25;
        }
    }
    al = fcn_00408b10 (rsp + 0xa0, rdx);
    if (al == 0) {
        goto label_22;
    }
    r13 += *((r12 + 0xb8));
    rax = fcn_0040b6d0 (rsp + 0x7c, rbp, rsp + 0xa0);
    *(r13) = rax;
    rax = *((r12 + 0xb8));
    if (*((rax + rbx*8)) != 0) {
        goto label_0;
    }
    edx = *((rsp + 0x7c));
    if (edx == 0) {
        goto label_0;
    }
label_25:
    r14 = *((rsp + 0x48));
    free (*((rsp + 0xb0)));
    eax = *((rsp + 0x7c));
    *((rsp + 0x78)) = eax;
    if (eax != 0) {
        goto label_7;
    }
label_8:
    rbx = r14;
    if (*((rsp + 0x88)) != 0) {
        eax = fcn_0040aa90 (*((rsp + 0x20)), rsp + 0x80, *((rsp + 0x38)), *((rsp + 0x100)));
        *((rsp + 0x78)) = eax;
        if (eax != 0) {
            goto label_7;
        }
        eax = fcn_0040b970 (r12, rsp + 0x80, r14, *((rsp + 0x38)), *((rsp + 0x100)));
        *((rsp + 0x78)) = eax;
        if (eax != 0) {
            goto label_7;
        }
    }
label_5:
    eax = fcn_0040be50 (r12, *(rsp), *((r12 + 0xa0)));
    rax = fcn_0040b3d0 (rsp + 0x78, *((rsp + 0x20)), rsp + 0x80, eax);
    r15 = rax;
    if (rax == 0) {
        goto label_26;
    }
    rax = *((r12 + 0xb8));
    rcx = *((rsp + 0x18));
    *((rsp + 0x10)) = 0;
    *((rax + rcx)) = r15;
label_9:
    if (*((rsp + 0x30)) <= r14) {
        goto label_19;
    }
    r14++;
    rdx = *((r12 + 0xe0));
    if (rdx >= *((rsp + 0x10))) {
        goto label_1;
    }
label_19:
    free (*((rsp + 0x90)));
    rax = *((r12 + 0xb8));
    rdx = *((rsp + 0x30));
    rax = *((rax + rdx*8));
    if (rax == 0) {
        goto label_27;
    }
    rdx = *((rsp + 0x50));
    *(rdx) = rbx;
    rbx = *((rsp + 0x58));
    *((r12 + 0xb8)) = rbx;
    rbx = *((rsp + 0x60));
    *((r12 + 0x48)) = rbx;
    rax = fcn_0040a120 (*((rax + 0x10)), rax + 0x18, *((rsp + 0x68)));
    al = (rax == 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_13;
label_24:
    if (eax != 0) {
        goto label_2;
    }
    rbx += *(rbp);
    rsi = rbx;
    goto label_3;
label_20:
    if (r15 != 0) {
        goto label_4;
    }
    rbx = r14;
    goto label_5;
label_22:
    free (*((rsp + 0xb0)));
    *((rsp + 0x78)) = 0xc;
label_7:
    free (*((rsp + 0x90)));
    eax = *((rsp + 0x78));
    do {
label_13:
        return rax;
label_18:
        r13 = rsp + 0x80;
        eax = fcn_0040b1c0 (r13, r15 + 8);
        *((rsp + 0x78)) = eax;
    } while (eax != 0);
    if ((*((r15 + 0x68)) & 0x40) == 0) {
        goto label_6;
    }
label_10:
    if (*((rsp + 0x88)) == 0) {
        goto label_28;
    }
    eax = fcn_0040b970 (r12, r13, rbx, *((rsp + 0x38)), *((rsp + 0x100)));
    *((rsp + 0x78)) = eax;
    if (eax != 0) {
        goto label_7;
    }
label_28:
    rax = fcn_0040b3d0 (rsp + 0x78, *((rsp + 0x20)), r13, *(rsp));
    r15 = rax;
    if (rax == 0) {
        goto label_29;
    }
label_12:
    rax = *((r12 + 0xb8));
    *((rax + rbx*8)) = r15;
    goto label_6;
label_23:
    r14 = *((rsp + 0x48));
label_14:
    free (*((rsp + 0xb0)));
    *((rsp + 0x78)) = 0;
    goto label_8;
label_26:
    eax = *((rsp + 0x78));
    if (eax != 0) {
        goto label_7;
    }
    rax = *((r12 + 0xb8));
    rdx = *((rsp + 0x18));
    *((rax + rdx)) = 0;
    goto label_9;
label_16:
    *((r12 + 0x48)) = rbp;
    eax = fcn_0040be50 (r12, rbp - 1, rdx);
    *(rsp) = eax;
label_17:
    *((rsp + 0x80)) = 1;
    *((rsp + 0x88)) = 1;
    rax = malloc (8);
    *((rsp + 0x90)) = rax;
    if (rax == 0) {
        goto label_30;
    }
    *(rax) = r13;
    rbx = rbp;
    r13 = rsp + 0x80;
    *((rsp + 0x78)) = 0;
    eax = fcn_0040aa90 (*((rsp + 0x20)), r13, *((rsp + 0x38)), *((rsp + 0x100)));
    *((rsp + 0x78)) = eax;
    if (eax == 0) {
        goto label_10;
    }
    goto label_7;
label_15:
    rbx = rax + 1;
    rax = 0x7fffffffffffffff;
    rax -= r15;
    if (rax < rbx) {
        goto label_30;
    }
    rax = 0x1fffffffffffffff;
    r14 = r15 + rbx;
    if (r14 > rax) {
        goto label_30;
    }
    rax = *((rsp + 0x50));
    rax = realloc (*((rax + 0x10)), r14*8);
    if (rax == 0) {
        goto label_30;
    }
    rcx = *((rsp + 0x50));
    *((rcx + 0x10)) = rax;
    *((rcx + 8)) = r14;
    memset (rax + r15*8, 0, rbx*8);
    goto label_11;
label_29:
    esi = *((rsp + 0x78));
    if (esi == 0) {
        goto label_12;
    }
    goto label_7;
label_30:
    eax = 0xc;
    goto label_13;
label_27:
    rax = *((rsp + 0x50));
    *(rax) = rbx;
    rax = *((rsp + 0x58));
    *((r12 + 0xb8)) = rax;
    rax = *((rsp + 0x60));
    *((r12 + 0x48)) = rax;
    eax = 1;
    goto label_13;
label_21:
    edi = 0;
    goto label_14;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40f250 */
#include <stdint.h>
 
int64_t fcn_0040f250 (int64_t arg1, int64_t arg2, int32_t arg3, int64_t arg4) {
    int64_t var_c8h;
    uint32_t var_b9h;
    int64_t var_b8h;
    void * s1;
    size_t size;
    uint32_t var_a0h;
    int32_t var_98h;
    int64_t var_90h;
    uint32_t var_88h;
    void * s2;
    int64_t var_70h;
    int64_t var_68h;
    void * ptr;
    int64_t var_50h;
    int64_t var_48h;
    void * var_40h;
    int64_t var_28h;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r13 = rcx;
    r12 = rsi;
    rax = *(rdi);
    *((rbp - 0x98)) = rdx;
    *((rbp - 0x50)) = 0;
    *((rbp - 0x90)) = rax;
    *((rbp - 0x48)) = 2;
    *((rbp - 0x40)) = 0;
    if (r8b == 0) {
        goto label_20;
    }
    rbx = rbp - 0x50;
    rax = malloc (0x60);
    *((rbp - 0x88)) = rbx;
    *((rbp - 0x40)) = rax;
    if (rax == 0) {
        goto label_15;
    }
label_13:
    rax = *((rbp - 0x90));
    xmm0 = 0;
    *((rbp - 0x60)) = 0;
    *((rbp - 0x70)) = xmm0;
    rbx = *((rax + 0x90));
    rax = *((rbp - 0x98));
    rax <<= 4;
    *((rbp - 0xa8)) = rax;
    if (rax > 0xfbf) {
        goto label_21;
    }
    rax += 0x10;
    *((rbp - 0xb9)) = 0;
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    *((rbp - 0xb0)) = rax;
label_14:
    memcpy (*((rbp - 0xb0)), r13, *((rbp - 0xa8)));
    rcx = *(r13);
    rax = rbp - 0x70;
    rax += 0x10;
    *((rbp - 0x78)) = rcx;
    *((rbp - 0xb8)) = rax;
    while (edx != 8) {
        if (edx == 9) {
            goto label_22;
        }
label_0:
        if (rcx == rax) {
            if (*((r12 + 0xb0)) == rbx) {
                goto label_23;
            }
        }
label_9:
        r14 = *((r12 + 0x98));
        rdi = *(r14);
        rsi = rdi + r9;
        eax = *((rsi + 8));
        if ((al & 8) != 0) {
            goto label_24;
        }
        if ((*((rsi + 0xa)) & 0x10) != 0) {
            goto label_25;
        }
        if (al == 4) {
            goto label_26;
        }
        rcx = *((rbp - 0x78));
label_3:
        *((rbp - 0xa0)) = rcx;
        al = fcn_0040bf40 (r12, rsi, *((rbp - 0x78)));
        rcx = *((rbp - 0xa0));
        if (al == 0) {
            goto label_27;
        }
        rax = *((r14 + 0x18));
        rdx = rcx + 1;
        rbx = *((rax + r15*8));
label_5:
        *((rbp - 0x78)) = rdx;
        if (*((rbp - 0x88)) != 0) {
            if (rdx > *((r12 + 0xa8))) {
                goto label_4;
            }
            rax = *((r12 + 0xb8));
            rax = *((rax + rdx*8));
            if (rax == 0) {
                goto label_4;
            }
            rax = fcn_0040a120 (*((rax + 0x10)), rax + 0x18, rbx);
            if (rax == 0) {
                goto label_4;
            }
        }
        *((rbp - 0x68)) = 0;
label_6:
        if (rbx < 0) {
            goto label_28;
        }
label_1:
        rcx = *((rbp - 0x78));
        rax = *((r13 + 8));
        if (rax < rcx) {
            goto label_29;
        }
label_2:
        rdi = *((rbp - 0x90));
        r9 = rbx;
        r15 = rbx;
        r9 <<= 4;
        rsi = *(rdi);
        rsi += r9;
        edx = *((rsi + 8));
    }
    rdx = *(rsi);
    rdx++;
    if (*((rbp - 0x98)) <= rdx) {
        goto label_0;
    }
    rdx <<= 4;
    rdx += r13;
    *((rdx + 8)) = 0xffffffffffffffff;
    rax = *((r13 + 8));
    *(rdx) = rcx;
    goto label_0;
label_24:
    rax = *((r12 + 0xb8));
    rdx = *((rbp - 0x78));
    r9 = *((rax + rdx*8));
    rax = *((r14 + 0x28));
    rdx = rbx * 3;
    *((rbp - 0xa0)) = r9;
    r15 = rax + rdx*8;
    al = fcn_00408b10 (rbp - 0x70, rbx);
    r9 = *((rbp - 0xa0));
    if (al == 0) {
        goto label_30;
    }
    r10 = *((r15 + 8));
    if (r10 <= 0) {
        goto label_27;
    }
    r11 = *((r9 + 0x10));
    rax = r9 + 0x18;
    r15 = *((r15 + 0x10));
    rbx = 0xffffffffffffffff;
    *((rbp - 0xa0)) = r12;
    r9d = 0;
    r12 = rbx;
    rbx = r11;
    r11 = rax;
    do {
        r14 = *((r15 + r9*8));
        rax = fcn_0040a120 (rbx, r11, r14);
        if (rax != 0) {
            if (r12 != -1) {
                goto label_31;
            }
            r12 = r14;
        }
        r9++;
    } while (r10 != r9);
    rbx = r12;
    r12 = *((rbp - 0xa0));
    if (rbx >= 0) {
        goto label_1;
    }
label_28:
    if (rbx == 0xfffffffffffffffe) {
        goto label_30;
    }
label_27:
    if (*((rbp - 0x88)) == 0) {
        goto label_32;
    }
label_4:
    rax = fcn_0040d8d0 (*((rbp - 0x88)), rdi + 0x10, rbp - 0x78, *((rbp - 0x98)), r13, rbp - 0x70);
    rcx = *((rbp - 0x78));
    rbx = rax;
    rax = *((r13 + 8));
    if (rax >= rcx) {
        goto label_2;
    }
label_29:
    free (*((rbp - 0x60)));
    if (*((rbp - 0xb9)) != 0) {
        goto label_33;
    }
    rdi = *((rbp - 0x88));
    if (rdi != 0) {
label_16:
        eax = fcn_0040d880 (rdi);
    }
label_17:
    eax = 0;
label_8:
    rsp = rbp - 0x28;
    return rax;
label_22:
    rdi = *(rsi);
    rdx = rdi + 1;
    if (*((rbp - 0x98)) <= rdx) {
        goto label_0;
    }
    rdx <<= 4;
    rax = r13 + rdx;
    if (*(rax) < rcx) {
        goto label_34;
    }
    if ((*((rsi + 0xa)) & 8) != 0) {
        rsi = *((rbp - 0xb0));
        if (*((rsi + rdx)) != -1) {
            goto label_35;
        }
    }
    *((rax + 8)) = rcx;
    rax = *((r13 + 8));
    goto label_0;
label_25:
    *((rbp - 0xa0)) = r9;
    eax = fcn_0040e8a0 (rdi, r14 + 0xd8, rbx, r12, *((rbp - 0x78)));
    rcx = (int64_t) eax;
    if (rcx != 0) {
        goto label_36;
    }
    r9 = *((rbp - 0xa0));
    rsi = *(r14);
    rcx = *((rbp - 0x78));
    rsi += r9;
    goto label_3;
label_26:
    rax = *(rsi);
    rax++;
    rax <<= 4;
    rax += r13;
    rdx = *((rax + 8));
    rdi = *(rax);
    rcx = rdx;
    rcx -= rdi;
    if (*((rbp - 0x88)) == 0) {
        goto label_37;
    }
    if (rdi == -1) {
        goto label_4;
    }
    if (rdx == -1) {
        goto label_4;
    }
    if (rcx == 0) {
        goto label_38;
    }
    rax = *((r12 + 8));
    r15 = *((rbp - 0x78));
    rdx = rcx;
    *((rbp - 0xa0)) = rcx;
    rdi += rax;
    eax = memcmp (rdi, rax + r15, rdx);
    rcx = *((rbp - 0xa0));
    if (eax != 0) {
        goto label_4;
    }
label_7:
    rax = *((r14 + 0x18));
    rdx = r15 + rcx;
    rbx = *((rax + rbx*8));
    goto label_5;
label_31:
    rbx = r12;
    r12 = *((rbp - 0xa0));
    rax = fcn_0040a120 (*((rbp - 0x68)), *((rbp - 0xb8)), rbx);
    if (rax != 0) {
        goto label_39;
    }
    rcx = *((rbp - 0x88));
    if (rcx == 0) {
        goto label_6;
    }
    r15 = *(rcx);
    rdx = *((rbp - 0x78));
    rax = r15 + 1;
    *(rcx) = rax;
    if (rax == *((rcx + 8))) {
        goto label_40;
    }
    rax = *((rcx + 0x10));
label_12:
    r15 *= 3;
    r15 <<= 4;
    r15 += rax;
    *((r15 + 8)) = r14;
    r14 = *((rbp - 0xa8));
    *(r15) = rdx;
    rax = malloc (r14);
    *((r15 + 0x10)) = rax;
    if (rax == 0) {
        goto label_11;
    }
    memcpy (rax, r13, r14);
    eax = fcn_0040b1c0 (r15 + 0x18, rbp - 0x70);
    if (eax == 0) {
        goto label_6;
    }
label_11:
    free (*((rbp - 0x60)));
    if (*((rbp - 0xb9)) != 0) {
        goto label_41;
    }
label_10:
    fcn_0040d880 (*((rbp - 0x88)));
    rsp = rbp - 0x28;
    eax = 0xc;
    return rax;
label_37:
    if (rcx == 0) {
        goto label_38;
    }
label_36:
    r15 = *((rbp - 0x78));
    goto label_7;
label_23:
    if (*((rbp - 0x88)) == 0) {
        goto label_42;
    }
    rcx = *((rbp - 0x98));
    if (rcx == 0) {
        goto label_43;
    }
    rax = r13;
    edx = 0;
    do {
        if (*(rax) >= 0) {
            if (*((rax + 8)) == -1) {
                goto label_44;
            }
        }
        rdx++;
        rax += 0x10;
    } while (rcx != rdx);
    do {
label_43:
        free (*((rbp - 0x60)));
        if (*((rbp - 0xb9)) != 0) {
            goto label_45;
        }
label_19:
        eax = fcn_0040d880 (*((rbp - 0x88)));
        eax = 0;
        goto label_8;
INVALID_JUMP;
    } while (*((rbp - 0x98)) == rdx);
    rax = fcn_0040d8d0 (*((rbp - 0x88)), rdi + 0x10, rbp - 0x78, *((rbp - 0x98)), r13, rbp - 0x70);
    r9 = rax;
    rbx = rax;
    r15 = rax;
    r9 <<= 4;
    goto label_9;
label_38:
    *((rbp - 0xa0)) = r9;
    al = fcn_00408b10 (rbp - 0x70, rbx);
    if (al == 0) {
        goto label_30;
    }
    rdx = *((r14 + 0x28));
    rax = rbx * 3;
    rcx = *((rbp - 0x78));
    rax = rdx + rax*8;
    *((rbp - 0xc8)) = rcx;
    rax = *((rax + 0x10));
    rbx = *(rax);
    rax = *((r12 + 0xb8));
    rax = *((rax + rcx*8));
    rax = fcn_0040a120 (*((rax + 0x10)), rax + 0x18, rbx);
    if (rax != 0) {
        goto label_6;
    }
    r9 = *((rbp - 0xa0));
    rsi = *(r14);
    rcx = *((rbp - 0xc8));
    rsi += r9;
    goto label_3;
label_39:
    rbx = r14;
    goto label_6;
label_30:
    free (*((rbp - 0x60)));
    if (*((rbp - 0xb9)) != 0) {
        goto label_41;
    }
label_18:
    if (*((rbp - 0x88)) != 0) {
        goto label_10;
    }
label_15:
    rsp = rbp - 0x28;
    eax = 0xc;
    return rax;
label_34:
    *((rax + 8)) = rcx;
    *((rbp - 0xc8)) = r9;
    *((rbp - 0xa0)) = rcx;
    memcpy (*((rbp - 0xb0)), r13, *((rbp - 0xa8)));
    rax = *((r13 + 8));
    rcx = *((rbp - 0xa0));
    r9 = *((rbp - 0xc8));
    goto label_0;
label_35:
    *((rbp - 0xc8)) = rcx;
    *((rbp - 0xa0)) = r9;
    memcpy (r13, rsi, *((rbp - 0xa8)));
    rax = *((r13 + 8));
    r9 = *((rbp - 0xa0));
    rcx = *((rbp - 0xc8));
    goto label_0;
label_40:
    rax = *((rbp - 0x88));
    *((rbp - 0xa0)) = rdx;
    rsi <<= 5;
    rax = realloc (*((rax + 0x10)), rax + rax*2);
    if (rax == 0) {
        goto label_11;
    }
    rcx = *((rbp - 0x88));
    rdx = *((rbp - 0xa0));
    *((rcx + 8)) <<= 1;
    *((rcx + 0x10)) = rax;
    goto label_12;
label_20:
    *((rbp - 0x88)) = 0;
    goto label_13;
label_21:
    rax = malloc (*((rbp - 0xa8)));
    *((rbp - 0xb9)) = 1;
    *((rbp - 0xb0)) = rax;
    if (rax != 0) {
        goto label_14;
    }
    rdi = *((rbp - 0x88));
    if (rdi == 0) {
        goto label_15;
    }
    fcn_0040d880 (rdi);
    goto label_15;
label_33:
    free (*((rbp - 0xb0)));
    rdi = *((rbp - 0x88));
    if (rdi != 0) {
        goto label_16;
    }
    goto label_17;
label_41:
    free (*((rbp - 0xb0)));
    goto label_18;
label_32:
    free (*((rbp - 0x60)));
    eax = 1;
    if (*((rbp - 0xb9)) == 0) {
        goto label_8;
    }
    *((rbp - 0x88)) = eax;
    free (*((rbp - 0xb0)));
    eax = *((rbp - 0x88));
    goto label_8;
label_42:
    free (*((rbp - 0x60)));
    if (*((rbp - 0xb9)) == 0) {
        goto label_17;
    }
    eax = free (*((rbp - 0xb0)));
    eax = 0;
    goto label_8;
label_45:
    free (*((rbp - 0xb0)));
    goto label_19;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40fb20 */
#include <stdint.h>
 
uint64_t fcn_0040fb20 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = r8;
    r14 = rdx;
    r13 = rcx;
    r12 = rsi;
    rbx = rdi;
    eax = fcn_0040eb30 (rdi, rdx + 0x10, *(rdx), *((rdx + 8)), r13, r9);
    if (eax != 0) {
label_1:
        return eax;
    }
    r15 = *((r14 + 8));
    rax = *((rbx + 0xc8));
    rdx = *((rbx + 0xd0));
    rcx = *(r12);
    rdi = *((rbx + 0xd8));
    rsi = r15;
    if (rax >= rdx) {
        goto label_2;
    }
label_0:
    rdx = rax * 5;
    rdx <<= 3;
    if (rax <= 0) {
        goto label_3;
    }
    r8 = rdi + rdx - 0x28;
    while (1) {
label_3:
        rdi += rdx;
        edx = 0;
        dl = (r15 == rcx) ? 1 : 0;
        rax++;
        *(rdi) = r13;
        edx = -edx;
        *((rdi + 8)) = rbp;
        *((rdi + 0x22)) = dx;
        *((rdi + 0x10)) = rcx;
        *((rdi + 0x18)) = r15;
        *((rbx + 0xc8)) = rax;
        rax = r15;
        *((rdi + 0x20)) = 0;
        rdx = *((rbx + 0xe0));
        rax -= rcx;
        if (rdx < rax) {
            r15d -= ecx;
            *((rbx + 0xe0)) = r15d;
        }
        rsi += rbp;
        rsi -= *(r12);
        rdi = rbx;
invalid_funccall(); //        void (*0x4096f0)() ();
        *((r8 + 0x20)) = 1;
    }
label_2:
    *((rsp + 8)) = rcx;
    rsi <<= 4;
    rax = realloc (rdi, rdx + rdx*4);
    rcx = *((rsp + 8));
    if (rax != 0) {
        rdx = *((rbx + 0xd0));
        rsi = *((rbx + 0xc8));
        *((rsp + 8)) = rcx;
        *((rbx + 0xd8)) = rax;
        rsi *= 5;
        rdx <<= 3;
        memset (rax + rsi*8, 0, rdx + rdx*4);
        *((rbx + 0xd0)) <<= 1;
        rax = *((rbx + 0xc8));
        rdi = *((rbx + 0xd8));
        rsi = *((r14 + 8));
        rcx = *((rsp + 8));
        goto label_0;
    }
    free (*((rbx + 0xd8)));
    eax = 0xc;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x40fcc0 */
#include <stdint.h>
 
int64_t fcn_0040fcc0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    void ** var_18h;
    uint32_t var_20h;
    void ** var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    uint32_t var_78h;
    int64_t var_8ch;
    int64_t var_90h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
label_9:
    r14 = rdi;
    r15 = *((rdi + 0x48));
    rax = *((rdi + 0x98));
    *((rsp + 0x50)) = rsi;
    *((rsp + 0x48)) = rdx;
    *((rsp + 0x38)) = rax;
    rax = r15*8;
    *((rsp + 0x58)) = rax;
    *((rsp + 8)) = 0;
    if (*(rsi) > 0) {
        goto label_21;
    }
    goto label_22;
label_0:
    if ((al & 1) == 0) {
        goto label_2;
    }
    edx &= 8;
    if (edx != 0) {
        goto label_2;
    }
label_1:
    if ((cl & 0x20) != 0) {
        if ((al & 2) == 0) {
            goto label_2;
        }
    }
    ecx &= 0x80;
    if (ecx == 0) {
        goto label_23;
    }
    if ((al & 8) != 0) {
        goto label_23;
    }
    do {
label_2:
        rdi = *((rsp + 0x50));
        rax = *((rsp + 8));
        if (rax >= *(rdi)) {
            goto label_22;
        }
label_21:
        rax = *((rsp + 0x48));
        rdi = *((rsp + 8));
        rax = *(rax);
        r13 = *((rax + rdi*8));
        rdi = *((rsp + 0x38));
        rax = *(rdi);
        rbp <<= 4;
        rax += rbp;
    } while (*((rax + 8)) != 4);
    ebx = *((rax + 8));
    if ((ebx & 0x3ff00) == 0) {
        goto label_23;
    }
    ebx >>= 8;
    al = fcn_0040be50 (r14, r15, *((r14 + 0xa0)));
    ecx = ebx;
    edx = ebx;
    cx &= 0x3ff;
    if ((bl & 4) != 0) {
        goto label_0;
    }
    edx &= 8;
    if (edx == 0) {
        goto label_1;
    }
    if ((al & 1) == 0) {
        goto label_1;
    }
    goto label_2;
label_23:
    rbx = *((r14 + 0xc8));
    ecx = 0;
    rax = rbx;
label_3:
    if (rcx >= rax) {
        goto label_24;
    }
    rsi = rcx + rax;
    r8 = *((r14 + 0xd8));
    rdx = rsi;
    rdx >>= 0x3f;
    rdx += rsi;
    rdx >>= 1;
    rsi = rdx * 5;
    if (r15 <= *((r8 + rsi*8 + 8))) {
        goto label_25;
    }
    goto label_26;
    do {
        rsi = rdx + rcx;
        rax = rsi;
        rax >>= 0x3f;
        rax += rsi;
        rax >>= 1;
        rsi = rax * 5;
        rdi = rax;
        if (r15 > *((r8 + rsi*8 + 8))) {
            goto label_27;
        }
        rdx = rax;
INVALID_JUMP;
    } while (rdx > rcx);
label_24:
    if (rbx <= rcx) {
        goto label_28;
    }
    rdx = *((r14 + 0xd8));
    rax = rcx * 5;
    rax = rdx + rax*8;
    if (*((rax + 8)) != r15) {
        goto label_28;
    }
    if (rcx != -1) {
        goto label_29;
    }
    goto label_28;
    do {
        rax += 0x28;
        if (*((rax - 8)) == 0) {
            goto label_28;
        }
INVALID_JUMP;
    } while (r13 != *(rax));
    do {
        *((rsp + 0x8c)) = 0;
        goto label_2;
label_26:
        rdi = rdx;
        rdx = rax;
label_27:
        rcx = rdi + 1;
        rax = rdx;
        goto label_3;
label_28:
        rax = *((r14 + 0x98));
        rdx = *(rax);
        *((rsp + 0x68)) = rax;
        rax = *((rdx + rbp));
        *((rsp + 0x60)) = rax;
    } while (*((r14 + 0xe8)) <= 0);
    rax = *((r14 + 8));
    *((rsp + 0x18)) = r15;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x20)) = rax;
    *((rsp + 0x40)) = r13;
    *((rsp + 0x70)) = rbx;
    do {
        rax = *((r14 + 0xf8));
        rbx = *((rsp + 0x10));
        rdi = *((rsp + 0x60));
        rbx = *((rax + rbx*8));
        rax = *((rbx + 8));
        rax <<= 4;
        if (rdi == *((rdx + rax))) {
            goto label_30;
        }
label_12:
        rax = *((rsp + 0x10));
        if (rax >= *((r14 + 0xe8))) {
            goto label_31;
        }
        rax = *((rsp + 0x68));
        rdx = *(rax);
    } while (1);
label_31:
    r15 = *((rsp + 0x18));
    r13 = *((rsp + 0x40));
    *((rsp + 0x8c)) = 0;
    rbx = *((rsp + 0x70));
    if (rbx >= *((r14 + 0xc8))) {
        goto label_2;
    }
    rax = r13*8;
    r12 = *((rsp + 0x38));
    *((rsp + 0x40)) = rax;
    rax = r13 * 3;
    rax <<= 3;
    *((rsp + 0x60)) = rax;
    rax = r14;
    r14 = rbx;
    rbx = rax;
    goto label_10;
label_5:
    rcx = *((r12 + 0x28));
    rdi = *((rsp + 0x60));
    rcx = *((rcx + rdi + 0x10));
    rcx = *(rcx);
    rcx *= 3;
    rsi = rdx + rcx*8;
    *((rsp + 0x18)) = rsi;
label_6:
    rbp += r15;
    rbp -= rax;
    eax = fcn_0040be50 (rbx, rbp - 1, *((rbx + 0xa0)));
    rdi = *((rsp + 0x58));
    r10 = rbp*8;
    *((rsp + 0x10)) = 0;
    ecx = eax;
    rax = *((rbx + 0xb8));
    r11 = rax + r10;
    rax = *((rax + rdi));
    rdx = *(r11);
    if (rax != 0) {
        rax = *((rax + 0x10));
        *((rsp + 0x10)) = rax;
    }
    if (rdx == 0) {
        goto label_32;
    }
    *((rsp + 0x28)) = ecx;
    *((rsp + 0x30)) = r10;
    eax = fcn_0040b240 (rsp + 0x90, *((rdx + 0x50)), *((rsp + 0x18)));
    ecx = *((rsp + 0x28));
    r10 = *((rsp + 0x30));
    *((rsp + 0x8c)) = eax;
    if (eax != 0) {
        goto label_33;
    }
    r10 += *((rbx + 0xb8));
    *((rsp + 0x28)) = r10;
    rax = fcn_0040b3d0 (rsp + 0x8c, r12, rsp + 0x90, rcx);
    r10 = *((rsp + 0x28));
    *(r10) = rax;
    free (*((rsp + 0xa0)));
    rdx = *((rbx + 0xb8));
    if (*((rdx + rbp*8)) == 0) {
        goto label_34;
    }
label_7:
    if (*((rsp + 0x20)) != 0) {
        goto label_4;
    }
    rax = *((rsp + 0x58));
    rdi = *((rsp + 0x10));
    rax = *((rdx + rax));
    if (*((rax + 0x10)) > rdi) {
        goto label_35;
    }
    do {
label_4:
        r14++;
        if (r14 >= *((rbx + 0xc8))) {
            goto label_36;
        }
label_10:
        rdx = *((rbx + 0xd8));
        rax = r14 * 5;
        rax = rdx + rax*8;
    } while (r13 != *(rax));
    if (r15 != *((rax + 8))) {
        goto label_4;
    }
    rbp = *((rax + 0x18));
    rax = *((rax + 0x10));
    rdx = *((r12 + 0x30));
    rdi = rbp;
    rdi -= rax;
    *((rsp + 0x20)) = rdi;
    if (rdi == 0) {
        goto label_5;
    }
    rcx = *((r12 + 0x18));
    rdi = *((rsp + 0x40));
    rcx = *((rcx + rdi));
    rcx *= 3;
    rsi = rdx + rcx*8;
    *((rsp + 0x18)) = rsi;
    goto label_6;
label_32:
    *((rsp + 0x28)) = r11;
    rax = fcn_0040b3d0 (rsp + 0x8c, r12, *((rsp + 0x18)), rcx);
    r11 = *((rsp + 0x28));
    rdx = *((rbx + 0xb8));
    *(r11) = rax;
    if (*((rdx + rbp*8)) != 0) {
        goto label_7;
    }
label_34:
    eax = *((rsp + 0x8c));
    if (eax == 0) {
        goto label_7;
    }
label_8:
    return rax;
label_30:
    r12 = *(rbx);
    r10 = *((rsp + 0x18));
    if (*((rbx + 0x20)) <= 0) {
        goto label_16;
    }
    rcx = r12;
    ebp = 0;
    r12 = *((rsp + 0x20));
    r8 = r10;
    while (eax <= 1) {
        rbp++;
        rcx = r13;
        r8 = r15;
        if (rbp >= *((rbx + 0x20))) {
            goto label_37;
        }
        rax = *((rbx + 0x28));
        r9 = *((rax + rbp*8));
        r13 = *((r9 + 8));
        rdx = *((r9 + 8));
        rdx -= rcx;
        r15 = rdx + r8;
        if (rdx > 0) {
            if (*((r14 + 0x30)) < r15) {
                goto label_38;
            }
label_11:
            *((rsp + 0x30)) = r9;
            *((rsp + 0x28)) = rcx;
            *((rsp + 0x20)) = r8;
            eax = memcmp (r12 + r8, r12 + rcx, rdx);
            r8 = *((rsp + 0x20));
            rcx = *((rsp + 0x28));
            r9 = *((rsp + 0x30));
            if (eax != 0) {
                goto label_39;
            }
        }
        eax = fcn_0040fb20 (r14, rbx, r9, *((rsp + 0x40)), *((rsp + 0x18)));
        r12 = *((r14 + 8));
    }
    goto label_8;
label_35:
    rax = *((rsp + 0x18));
    r8 = rax + 0x10;
    rbp = rax + 8;
    rdx = r8;
    *((rsp + 0x10)) = r8;
    eax = fcn_0040bd00 (rbx, rbp, rdx, r15);
    *((rsp + 0x8c)) = eax;
    if (eax != 0) {
        goto label_8;
    }
    r8 = *((rsp + 0x10));
    eax = fcn_0040fcc0 (rbx, rbp, r8);
    goto label_9;
    *((rsp + 0x8c)) = eax;
    if (eax != 0) {
        goto label_8;
    }
    r14++;
    if (r14 < *((rbx + 0xc8))) {
        goto label_10;
    }
label_36:
    r14 = rbx;
    goto label_2;
label_38:
    *((rsp + 0x28)) = rdx;
    *((rsp + 0x20)) = r9;
    if (*((r14 + 0x58)) < r15) {
        goto label_39;
    }
    *((rsp + 0x78)) = r8;
    *((rsp + 0x30)) = rcx;
    eax = fcn_004096f0 (r14, r15);
    if (eax != 0) {
        goto label_8;
    }
    r12 = *((r14 + 8));
    rdx = *((rsp + 0x28));
    r9 = *((rsp + 0x20));
    r8 = *((rsp + 0x78));
    rcx = *((rsp + 0x30));
    goto label_11;
label_33:
    free (*((rsp + 0xa0)));
    eax = *((rsp + 0x8c));
    goto label_8;
label_22:
    eax = 0;
    goto label_8;
label_37:
    *((rsp + 0x20)) = r12;
label_17:
    r12 = r13 + 1;
    r10 = r15;
label_16:
    if (*((rsp + 0x18)) < r12) {
        goto label_12;
    }
    r13 = *((rsp + 0x60));
    r15 = r10;
label_14:
    rax = r12;
    rax -= *(rbx);
    if (rax <= 0) {
        goto label_40;
    }
    if (*((r14 + 0x30)) <= r15) {
        goto label_41;
    }
label_18:
    rcx = *((rsp + 0x20));
    rax = r15 + 1;
    esi = *((rcx + r12 - 1));
    if (*((rcx + r15)) != sil) {
        goto label_12;
    }
    r15 = rax;
label_40:
    rax = *((r14 + 0xb8));
    rax = *((rax + r12*8));
    if (rax == 0) {
        goto label_42;
    }
    rcx = *((rax + 0x10));
    if (rcx <= 0) {
        goto label_42;
    }
    rdi = *((rax + 0x18));
    rax = *((rsp + 0x68));
    edx = 0;
    rsi = *(rax);
    while (*((rax + 8)) != 9) {
label_13:
        rdx++;
        if (rcx == rdx) {
            goto label_42;
        }
        rbp = *((rdi + rdx*8));
        rax = *((rdi + rdx*8));
        rax <<= 4;
        rax += rsi;
    }
    if (r13 != *(rax)) {
        goto label_13;
    }
    if (rbp == -1) {
        goto label_42;
    }
    rsi = *((rbx + 0x10));
    rcx = *(rbx);
    if (rsi == 0) {
        goto label_43;
    }
label_15:
    eax = fcn_0040eb30 (r14, rsi, *((rbx + 8)), rcx, rbp, r12);
    if (eax == 1) {
        goto label_42;
    }
    if (eax != 0) {
        goto label_8;
    }
    rax = *((rbx + 0x18));
    if (*((rbx + 0x20)) == rax) {
        goto label_44;
    }
label_20:
    rax = calloc (1, 0x28);
    if (rax == 0) {
        goto label_19;
    }
    rdx = *((rbx + 0x20));
    rcx = *((rbx + 0x28));
    *((rcx + rdx*8)) = rax;
    rdx++;
    *(rax) = rbp;
    *((rax + 8)) = r12;
    *((rbx + 0x20)) = rdx;
    fcn_0040fb20 (r14, rbx, rax, *((rsp + 0x40)), *((rsp + 0x18)));
label_42:
    r12++;
    if (*((rsp + 0x18)) >= r12) {
        goto label_14;
    }
    goto label_12;
label_43:
    *((rsp + 0x28)) = rcx;
    rsi -= rcx;
    rsi++;
    rax = calloc (0x18, r12);
    rcx = *((rsp + 0x28));
    rsi = rax;
    *((rbx + 0x10)) = rax;
    if (rax != 0) {
        goto label_15;
    }
label_19:
    eax = 0xc;
    goto label_8;
label_39:
    *((rsp + 0x20)) = r12;
    r10 = r8;
    r12 = rcx;
    if (*((rbx + 0x20)) > rbp) {
        goto label_12;
    }
    if (rbp <= 0) {
        goto label_16;
    }
    r13 = rcx;
    r15 = r8;
    goto label_17;
label_41:
    if (*((r14 + 0x58)) <= r15) {
        goto label_12;
    }
    eax = fcn_004095a0 (r14, r15 + 1);
    if (eax != 0) {
        goto label_8;
    }
    rax = *((r14 + 8));
    *((rsp + 0x20)) = rax;
    goto label_18;
label_44:
    rdx = rax + rax + 1;
    *((rsp + 0x28)) = rdx;
    rax = realloc (*((rbx + 0x28)), rdx*8);
    if (rax == 0) {
        goto label_19;
    }
    rdx = *((rsp + 0x28));
    *((rbx + 0x28)) = rax;
    *((rbx + 0x18)) = rdx;
    goto label_20;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x410540 */
#include <stdint.h>
 
int64_t fcn_00410540 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg7) {
    int64_t var_8h;
    int64_t var_10h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    xmm0 = arg7;
    r13 = rdi;
    rbx = rsi;
    r12 = *((rsi + 0x48));
    r14 = *((rsi + 0xb8));
    r15 = *((rsi + 0x98));
    rbp = r12*8;
    r14 += rbp;
    if (*((rsi + 0xc0)) >= r12) {
        goto label_2;
    }
    *(r14) = rdx;
    *((rsi + 0xc0)) = r12;
    do {
label_0:
        if (*((r15 + 0x98)) != 0) {
            goto label_3;
        }
label_1:
        rax = rbp;
        return rax;
label_2:
        rax = *(r14);
        if (rax == 0) {
            goto label_4;
        }
        rax = *((rax + 0x50));
        if (rdx == 0) {
            goto label_5;
        }
        r14 = *((rdx + 0x50));
        eax = fcn_0040b240 (rsp + 0x10, r14, rax);
        *(r13) = eax;
        if (eax != 0) {
            goto label_6;
        }
        rax = *((rbx + 0x48));
        eax = fcn_0040be50 (rbx, rax - 1, *((rbx + 0xa0)));
        r8 = *((rbx + 0xb8));
        r8 += rbp;
        *((rsp + 8)) = r8;
        rax = fcn_0040b3d0 (r13, r15, rsp + 0x10, eax);
        r8 = *((rsp + 8));
        *(r8) = rax;
    } while (r14 == 0);
    rax = free (*((rsp + 0x20)));
    goto label_0;
label_5:
    __asm ("movdqu xmm0, xmmword [rax]");
    *((rsp + 0x10)) = xmm0;
    rax = *((rax + 0x10));
    *((rsp + 0x20)) = rax;
    eax = fcn_0040be50 (rbx, r12 - 1, *((rsi + 0xa0)));
    rax = fcn_0040b3d0 (r13, r15, rsp + 0x10, eax);
    *(r14) = rax;
    goto label_0;
label_4:
    *(r14) = rdx;
    goto label_0;
label_3:
    if (rbp == 0) {
        goto label_6;
    }
    r14 = rbp + 0x10;
    r15 = rbp + 0x18;
    eax = fcn_0040bd00 (rbx, r14, r15, r12);
    *(r13) = eax;
    if (eax != 0) {
        goto label_6;
    }
    if ((*((rbp + 0x68)) & 0x40) == 0) {
        goto label_1;
    }
    eax = fcn_0040fcc0 (rbx, r14, r15);
    *(r13) = eax;
    if (eax == 0) {
        rax = *((rbx + 0xb8));
        rbp = *((rax + r12*8));
        goto label_1;
    }
label_6:
    ebp = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x410700 */
#include <stdint.h>
 
uint64_t fcn_00410700 (int64_t arg1, uint32_t arg2) {
    int64_t var_8h;
    size_t n;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    r15 = rsi;
    r13 = rdi;
    rbx = *((rsi + 0x18));
    rbp = *((rsi + 0x10));
    *((rsp + 0x40)) = 1;
    *((rsp + 0x48)) = 1;
    rax = malloc (8);
    *((rsp + 0x50)) = rax;
    if (rax == 0) {
        goto label_4;
    }
    *(rax) = rbp;
    eax = fcn_00412190 (r13, r15, rbx, rsp + 0x40);
    if (eax != 0) {
        goto label_5;
    }
    rax = r15 + 0x30;
    *((rsp + 0x1c)) = 0;
    *((rsp + 0x38)) = rax;
    if (rbx <= 0) {
        goto label_6;
    }
label_2:
    rdi = *(r15);
    rax = rbx*8;
    *((rsp + 0x10)) = rax;
    if (*((rdi + rbx*8)) == 0) {
        goto label_7;
    }
    *((rsp + 0x1c)) = 0;
    eax = *((rsp + 0x1c));
    if (*((r13 + 0xe0)) < eax) {
        goto label_8;
    }
label_3:
    rax = *((r13 + 0xb8));
    rcx = *((rsp + 0x10));
    rbx--;
    *((rsp + 0x48)) = 0;
    r14 = *((rax + rcx - 8));
    if (r14 == 0) {
        goto label_9;
    }
    r12 = *((r13 + 0x98));
    if (*((r14 + 0x28)) <= 0) {
        goto label_9;
    }
    *((rsp + 8)) = 0;
    while ((*((rsi + 0xa)) & 0x10) == 0) {
label_1:
        al = fcn_0040bf40 (r13, rsi, rbx);
        if (al != 0) {
            rax = *(r15);
            rcx = *((rsp + 0x10));
            rax = *((rax + rcx));
            if (rax == 0) {
                goto label_10;
            }
            rdx = *((r12 + 0x18));
            rax = fcn_0040a120 (*((rax + 0x10)), rax + 0x18, *((rdx + rbp*8)));
            if (rax == 0) {
                goto label_10;
            }
            r9d = 1;
label_0:
            if (*((r15 + 0x28)) != 0) {
                rdx = *((r12 + 0x18));
                rax = (int64_t) r9d;
                al = fcn_0040a3b0 (r13, r15 + 0x28, *((rsp + 0x48)), *((rdx + rbp*8)), rax + rbx, rbp);
                if (al != 0) {
                    goto label_10;
                }
            }
            al = fcn_00408b10 (rsp + 0x40, rbp);
            if (al == 0) {
                goto label_11;
            }
        }
label_10:
        rax = *((rsp + 8));
        if (rax >= *((r14 + 0x28))) {
            goto label_9;
        }
        rax = *((r14 + 0x30));
        rcx = *((rsp + 8));
        rsi = *(r12);
        rbp = *((rax + rcx*8));
        r11 = *((rax + rcx*8));
        r11 <<= 4;
        rsi += r11;
    }
    r10 = *((r13 + 0x98));
    rax = *((r15 + 0x18));
    *((rsp + 0x28)) = r11;
    rdi = *(r10);
    *((rsp + 0x30)) = r10;
    *((rsp + 0x20)) = rax;
    eax = fcn_0040e8a0 (*(rdi), r10 + 0xd8, rbp, r13, rbx);
    r11 = *((rsp + 0x28));
    r9d = eax;
    if (eax <= 0) {
        goto label_12;
    }
    rax = (int64_t) eax;
    rax += rbx;
    if (*((rsp + 0x20)) < rax) {
        goto label_0;
    }
    rdx = *(r15);
    r10 = *((rsp + 0x30));
    rax = *((rdx + rax*8));
    if (rax == 0) {
        goto label_13;
    }
    rdx = *((r10 + 0x18));
    *((rsp + 0x20)) = r11;
    rax = fcn_0040a120 (*((rax + 0x10)), rax + 0x18, *((rdx + rbp*8)));
    if (rax != 0) {
        goto label_0;
    }
    r11 = *((rsp + 0x20));
    rsi = *(r12);
    rsi += r11;
    goto label_1;
    if (rsi != 0) {
label_12:
        goto label_0;
    }
label_13:
    rsi = *(r12);
    rsi += r11;
    goto label_1;
label_9:
    eax = fcn_00412190 (r13, r15, rbx, rsp + 0x40);
    if (eax != 0) {
        goto label_5;
    }
    if (rbx != 0) {
        goto label_2;
    }
label_6:
    eax = 0;
    goto label_5;
label_11:
    eax = 0xc;
label_5:
    *((rsp + 8)) = eax;
    free (*((rsp + 0x50)));
    eax = *((rsp + 8));
    return rax;
label_7:
    eax = *((rsp + 0x1c));
    if (*((r13 + 0xe0)) >= eax) {
        goto label_3;
    }
label_8:
    memset (rdi, 0, *((rsp + 0x10)));
    eax = free (*((rsp + 0x50)));
    eax = 0;
    return rax;
label_4:
    eax = 0xc;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x410a30 */
#include <stdint.h>
 
int64_t fcn_00410a30 (uint32_t arg_240h, uint32_t arg_248h, int64_t arg_250h, int64_t arg1, uint32_t arg2, uint32_t arg3, int64_t arg4, uint32_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    void * var_20h;
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    void * var_4ch;
    int64_t var_50h;
    int64_t var_58h;
    uint32_t var_60h;
    uint32_t var_68h;
    uint32_t var_70h;
    uint32_t var_78h;
    uint32_t var_80h;
    uint32_t var_88h;
    uint32_t var_90h;
    int64_t var_98h;
    uint32_t var_9ch;
    int64_t var_a0h;
    uint32_t var_a8h;
    int64_t var_adh;
    int64_t var_aeh;
    int64_t var_afh;
    int64_t var_b0h;
    int64_t var_b4h;
    uint32_t var_b8h;
    int64_t var_c0h;
    int64_t var_c8h;
    void * ptr;
    int64_t var_d8h;
    int64_t var_e0h;
    void * var_f0h;
    int64_t var_100h;
    int64_t var_108h;
    int64_t var_110h;
    int64_t var_118h;
    int64_t var_128h;
    uint32_t var_130h;
    uint32_t var_138h;
    int64_t var_140h;
    int64_t var_148h;
    int64_t var_150h;
    int64_t var_158h;
    int64_t var_160h;
    int64_t var_168h;
    int64_t var_170h;
    int64_t var_178h;
    int64_t var_180h;
    int64_t var_188h;
    int64_t var_189h;
    int64_t var_18ah;
    uint32_t var_18bh;
    int64_t var_18ch;
    int64_t var_18dh;
    int64_t var_18eh;
    int64_t var_190h;
    int64_t var_198h;
    int64_t var_1a0h;
    int64_t var_1a8h;
    int64_t var_1b0h;
    void * var_1b8h;
    int64_t var_1c0h;
    int64_t var_1c8h;
    int64_t var_1d0h;
    void * var_1d8h;
    uint32_t var_1e0h;
    int64_t var_1f0h;
    void * var_1f8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r12 = r9;
    rbx = rcx;
    ecx = 0x20;
    rax = *(rdi);
    r13 = rsp + 0x100;
    *((rsp + 0x40)) = rdi;
    *((rsp + 0x70)) = rsi;
    rsi = rdi;
    rdi = r13;
    *((rsp + 0x78)) = rdx;
    rdx = rax;
    *((rsp + 0x18)) = rax;
    eax = 0;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    rcx = *((rsi + 0x20));
    *((rsp + 0x198)) = rdx;
    *((rsp + 0x60)) = rcx;
    if (rcx != 0) {
        edx = *((rsi + 0x38));
        if ((dl & 8) == 0) {
            goto label_47;
        }
        if (rbx == r8) {
            goto label_47;
        }
        edx &= 1;
        if (edx == 0) {
            rax = rcx;
        }
        *((rsp + 0x60)) = rax;
    }
label_0:
    rax = *((rsp + 0x40));
    *((rsp + 0x90)) = 0;
    rax = *((rax + 0x30));
    if (rax < *((rsp + 0x240))) {
        rsi = *((rsp + 0x240));
        rdx = rsi - 1;
        rsi = rdx;
        rsi -= rax;
        rax -= rdx;
        *((rsp + 0x90)) = rsi;
    }
    rsi = *((rsp + 0x40));
    if (*((rsi + 0x10)) == 0) {
        goto label_48;
    }
    rdi = *((rsp + 0x18));
    rax = *((rdi + 0x48));
    if (rax == 0) {
        goto label_48;
    }
    rdx = *((rdi + 0x50));
    if (rdx == 0) {
        goto label_48;
    }
    rcx = *((rdi + 0x58));
    if (rcx == 0) {
        goto label_48;
    }
    if (*((rdi + 0x60)) == 0) {
        goto label_48;
    }
    if (*((rax + 0x10)) == 0) {
        if (*((rdx + 0x10)) != 0) {
            goto label_49;
        }
        if (*((rcx + 0x10)) != 0) {
            if (*((rsi + 0x38)) < 0) {
                goto label_49;
            }
        }
        if (rbx != 0) {
            *((rsp + 0x4c)) = 1;
            if (rbp != 0) {
                goto label_25;
            }
        }
        ebp = 0;
        ebx = 0;
    }
label_49:
    *((rsp + 0x48)) = 1;
    while (1) {
        rax = *((rsp + 0x40));
        r11 = *((rsp + 0x18));
        rcx = *((rsp + 0x78));
        rdi = *((rax + 0x28));
        rax = *((rax + 0x18));
        edx = *((r11 + 0xb4));
        *((rsp + 8)) = rax;
        rax = *((r11 + 0x10));
        *((rsp + 0x190)) = edx;
        rsi = rax + 1;
        *((rsp + 0x10)) = rax;
        rax = (int64_t) edx;
        *((rsp + 0x88)) = rdi;
        if (rsi < rax) {
            rsi = rax;
        }
        rax = rcx + 1;
        *((rsp + 0x178)) = rdi;
        *((rsp + 0x158)) = rcx;
        *((rsp + 0x150)) = rcx;
        if (rsi > rax) {
            rsi = rax;
        }
        rax = *((rsp + 0x70));
        *((rsp + 0x168)) = rcx;
        *((rsp + 0x160)) = rcx;
        *((rsp + 0x100)) = rax;
        rax = *((rsp + 8));
        eax &= segment.LOAD0;
        *(rsp + 0x188) = (eax != 0) ? 1 : 0;
        rax |= rdi;
        eax = *((r11 + 0xb0));
        *(rsp + 0x18b) = (rax != 0) ? 1 : 0;
        edx = eax;
        al >>= 3;
        dl >>= 2;
        eax &= 1;
        edx &= 1;
        *((rsp + 0x18a)) = al;
        *((rsp + 0x189)) = dl;
        eax = fcn_00408a00 (r13, rsi);
        *((rsp + 0x4c)) = eax;
        if (eax != 0) {
            goto label_35;
        }
        rsi = *((rsp + 0x18));
        rax = rsi + 0xb8;
        *((rsp + 0x180)) = rax;
        eax = *((rsi + 0xb0));
        *((rsp + 8)) = al;
        al >>= 4;
        eax &= 1;
        *((rsp + 0x18e)) = al;
        if (*((rsp + 0x18b)) == 0) {
            rsi = *((rsp + 0x18));
            rax = *((rsp + 0x70));
            *((rsp + 0x108)) = rax;
            rax = *((rsp + 0x78));
            if (*((rsi + 0xb4)) <= 1) {
                goto label_50;
            }
        }
        eax = 0;
label_50:
        *((rsp + 0x130)) = rax;
        *((rsp + 0x138)) = rax;
        rax = *((rsp + 0x40));
        *((rsp + 0x168)) = r12;
        eax = *((rax + 0x38));
        *((rsp + 0x160)) = r12;
        *((rsp + 8)) = al;
        al >>= 7;
        *((rsp + 0x18d)) = al;
        rax = *((rsp + 0x18));
        r15 = *((rax + 0x98));
        eax = *((rsp + 0x250));
        *((rsp + 0x1a8)) = 0xffffffffffffffff;
        r12 = r15 + r15;
        *((rsp + 0x1a0)) = eax;
        if (r12 > 0) {
            rax = 0x666666666666666;
            if (r12 > rax) {
                goto label_51;
            }
            rdi <<= 3;
            rax = malloc (r12 + r15*8);
            rdi <<= 4;
            r14 = rax;
            *((rsp + 0x1d8)) = rax;
            rax = malloc (r15);
            *((rsp + 0x1f8)) = rax;
            if (rax == 0) {
                goto label_51;
            }
            if (r14 == 0) {
                goto label_51;
            }
        }
        *((rsp + 0x1d0)) = r12;
        *((rsp + 0x1e0)) = 1;
        *((rsp + 0x1f0)) = r12;
        if (*((rsp + 0x240)) <= 1) {
            goto label_52;
        }
label_30:
        rax = *((rsp + 0x140));
        rdx = 0x1ffffffffffffffe;
        if (rax > rdx) {
            goto label_51;
        }
        rax = malloc (rax*8 + 8);
        rdi = rax;
        *((rsp + 0x1b8)) = rax;
        if (rax == 0) {
            goto label_53;
        }
label_31:
        eax = *((rsp + 0x250));
        *((rsp + 0xb8)) = rbx;
        eax &= 1;
        eax -= eax;
        eax &= 2;
        eax += 4;
        *((rsp + 0x170)) = eax;
        eax = 0;
        al = (rbx <= rbp) ? 1 : 0;
        eax = rax + rax - 1;
        *((rsp + 0x9c)) = eax;
        rax = rbp;
        if (rbx <= rbp) {
            rax = rbx;
        }
        *((rsp + 0x80)) = rax;
        rax = rbp;
        if (rbx >= rbp) {
            rax = rbx;
        }
        *((rsp + 0x68)) = rax;
        rax = *((rsp + 0x18));
        esi = *((rax + 0xb4));
        eax = 8;
        *((rsp + 0xa8)) = esi;
        if (*((rsp + 0x60)) != 0) {
            ecx = 4;
            if (esi != 1) {
                rax = *((rsp + 0x40));
                ecx = 0;
                rax = *((rax + 0x18));
                *((rsp + 8)) = rax;
                eax &= segment.LOAD0;
                rax |= *((rsp + 0x88));
                cl = (rax == 0) ? 1 : 0;
                ecx <<= 2;
            }
            edx = 0;
            dl = (rbx <= rbp) ? 1 : 0;
            eax = 0;
            edx += edx;
            al = (*((rsp + 0x88)) != 0) ? 1 : 0;
            eax |= ecx;
            eax |= edx;
        }
        cl = (rbx > *((rsp + 0x68))) ? 1 : 0;
        dl = (rbx < *((rsp + 0x80))) ? 1 : 0;
        cl |= dl;
        if (cl != 0) {
            goto label_18;
        }
        rcx = rsp + 0xb8;
        edx = 0;
        if (rbx <= rbp) {
            rdx = rcx;
        }
        *((rsp + 0xa0)) = rdx;
        *(rsp + 0xaf) = (rdx != 0) ? 1 : 0;
        eax -= 4;
        *((rsp + 0x98)) = eax;
        eax = *((rsp + 0x98));
        if (eax > 4) {
            goto label_54;
        }
        /* switch table (5 cases) at 0x4191c8 */
label_19:
        rax = *((rsp + 0x18));
        al = (*((rax + 0x98)) != 0) ? 1 : 0;
        eax = (int32_t) al;
        *((rsp + 0x48)) = eax;
    }
label_47:
    *((rsp + 0x60)) = 0;
    goto label_0;
    if (*((rsp + 0x80)) > rbx) {
        goto label_18;
    }
    ecx = 0;
    rax = rbx;
    rdi = *((rsp + 0x60));
    r10 = *((rsp + 0x70));
    rsi = *((rsp + 0x88));
    r9 = *((rsp + 0x80));
    r8 = *((rsp + 0x78));
    while (*((rdi + rdx)) == 0) {
        rax--;
        ecx = 1;
        if (rax < r9) {
            goto label_55;
        }
        edx = 0;
        if (r8 > rax) {
            edx = *((r10 + rax));
        }
        if (rsi != 0) {
            edx = *((rsi + rdx));
        }
    }
    if (cl != 0) {
        *((rsp + 0xb8)) = rax;
        rbx = rax;
    }
label_1:
    eax = fcn_0040c140 (r13, rbx, *((rsp + 0x250)));
    *((rsp + 0x4c)) = eax;
    if (eax != 0) {
        goto label_35;
    }
    if (*((rsp + 0xa8)) != 1) {
        if (*((rsp + 0x130)) == 0) {
            goto label_56;
        }
        rax = *((rsp + 0x110));
        if (*(rax) == 0xffffffff) {
            goto label_33;
        }
    }
label_56:
    eax = *((rsp + 0x48));
    rbx = *((rsp + 0x198));
    *((rsp + 0x1e0)) = 0;
    *((rsp + 0x1c8)) = 0;
    eax &= 1;
    r14 = *((rbx + 0x48));
    *((rsp + 0x1c0)) = 0;
    *((rsp + 0xae)) = al;
    rax = *((rsp + 0x148));
    *((rsp + 0xb0)) = 0;
    *((rsp + 0x10)) = rax;
    if (*((r14 + 0x68)) < 0) {
        al = fcn_0040be50 (r13, rax - 1, *((rsp + 0x1a0)));
        if ((al & 1) != 0) {
            goto label_57;
        }
        if (eax == 0) {
            goto label_34;
        }
        edx = eax;
        edx &= 6;
        if (edx == 6) {
            goto label_58;
        }
        if ((al & 2) != 0) {
            goto label_59;
        }
        if ((al & 4) != 0) {
            goto label_60;
        }
    }
label_34:
    rax = *((rsp + 0x1b8));
    if (rax != 0) {
        rsi = *((rsp + 0x10));
        *((rax + rsi*8)) = r14;
        if (*((rbx + 0x98)) != 0) {
            goto label_61;
        }
    }
    eax = *((rsp + 0xaf));
    *((rsp + 0xad)) = al;
    eax = *((r14 + 0x68));
label_41:
    *((rsp + 0x20)) = 0;
    r12 = 0xffffffffffffffff;
    if ((al & 0x10) != 0) {
        goto label_62;
    }
label_36:
    rax = *((rsp + 0xa0));
    rbx = *((rsp + 0x148));
    *((rsp + 0x28)) = r12;
    *((rsp + 0x50)) = rax;
    while (rbp != 0) {
label_4:
        rbx = *((rsp + 0x148));
        al = (r14 == rbp) ? 1 : 0;
        rax = *((rsp + 8));
        if (r14 == rbp) {
            rax = *((rsp + 0x10));
        }
        *((rsp + 0x10)) = rax;
        eax = *((rbp + 0x68));
        if ((al & 0x10) != 0) {
            if (al < 0) {
                goto label_63;
            }
label_7:
            eax = *((rsp + 0x48));
            if (eax == 0) {
                goto label_64;
            }
            *((rsp + 0x28)) = rbx;
            *((rsp + 0x20)) = 1;
            *((rsp + 0x50)) = 0;
        }
label_6:
        r14 = rbp;
        if (*((rsp + 0x168)) <= rbx) {
            goto label_65;
        }
        rax = rbx + 1;
        rcx = rax;
        *((rsp + 8)) = rax;
        rax = *((rsp + 0x140));
        if (rcx >= rax) {
            goto label_66;
        }
label_8:
        rax = *((rsp + 0x130));
        if (*((rsp + 8)) >= rax) {
            goto label_67;
        }
label_16:
        if ((*((r14 + 0x68)) & 0x20) != 0) {
            goto label_68;
        }
label_9:
        rax = rbx + 1;
        *((rsp + 0x148)) = rax;
        rax = *((rsp + 0x108));
        ebx = *((rax + rbx));
label_22:
        rax = *((r14 + 0x58));
        if (rax == 0) {
            goto label_69;
        }
        rbp = *((rax + rbx*8));
label_15:
        if (*((rsp + 0x1b8)) != 0) {
label_21:
            rax = fcn_00410540 (rsp + 0xb0, r13, rbp, rcx);
        }
    }
    ecx = *((rsp + 0xb0));
    rdi = *((rsp + 0x1b8));
    if (ecx != 0) {
        goto label_53;
    }
    if (rdi == 0) {
        goto label_65;
    }
    eax = *((rsp + 0xae));
    eax ^= 1;
    if ((*((rsp + 0x20)) & al) != 0) {
        goto label_65;
    }
label_3:
    rsi = *((rsp + 0x1c0));
    rax = *((rsp + 0x148));
    ecx = 0;
    while (rsi >= rdx) {
        rax = rdx;
        ecx = 1;
        if (*((rdi + rdx*8)) != 0) {
            goto label_70;
        }
        rdx = rax + 1;
    }
    r12 = *((rsp + 0x28));
    if (cl != 0) {
        *((rsp + 0x148)) = rax;
    }
label_5:
    rax = *((rsp + 0x50));
    if (rax != 0) {
        rsi = *((rsp + 0x10));
        *(rax) += rsi;
    }
label_37:
    if (r12 == -1) {
        goto label_42;
    }
    if (r12 == 0xfffffffffffffffe) {
        goto label_51;
    }
    rax = *((rsp + 0x40));
    *((rsp + 0x1a8)) = r12;
    if ((*((rax + 0x38)) & 0x10) != 0) {
        goto label_71;
    }
    if (*((rsp + 0x240)) <= 1) {
        goto label_71;
    }
    rbx = *((rsp + 0x1b8));
    rax = *((rbx + r12*8));
    rax = fcn_0040c070 (r13, *((rax + 0x10)), rax + 0x18, r12);
    r14 = rax;
    *((rsp + 0x1b0)) = rax;
    rax = *((rsp + 0x18));
    if ((*((rax + 0xb0)) & 1) != 0) {
        goto label_72;
    }
    rax = *((rsp + 0x18));
    if (*((rax + 0x98)) != 0) {
        goto label_73;
    }
    goto label_29;
    if (*((rsp + 0x68)) <= rbx) {
        goto label_2;
    }
    rax = *((rsp + 0x70));
    rcx = *((rsp + 0x88));
    eax = *((rax + rbx));
    edx = *((rcx + rax));
    rcx = *((rsp + 0x60));
    rax = rbx + 1;
    if (*((rcx + rdx)) != 0) {
        goto label_1;
    }
    rsi = *((rsp + 0x60));
    rdi = *((rsp + 0x88));
    rcx = *((rsp + 0x68));
    r8 = *((rsp + 0x70));
    while (rcx != rax) {
        eax = *((r8 + rax));
        edx = *((rdi + rax));
        rax = rbx + 1;
        if (*((rsi + rdx)) != 0) {
            goto label_74;
        }
        rbx = rax;
    }
    rax = *((rsp + 0x68));
    *((rsp + 0xb8)) = rax;
label_2:
    if (*((rsp + 0x68)) != rbx) {
        goto label_1;
    }
    eax = 0;
    rsi = *((rsp + 0x68));
    if (*((rsp + 0x78)) > rsi) {
        rax = *((rsp + 0x70));
        eax = *((rax + rsi));
    }
    rsi = *((rsp + 0x88));
    if (rsi != 0) {
        eax = *((rsi + rax));
    }
    rcx = *((rsp + 0x60));
    if (*((rcx + rax)) != 0) {
        goto label_1;
    }
label_18:
    rdi = *((rsp + 0x1b8));
    *((rsp + 0x4c)) = 1;
    goto label_24;
    if (*((rsp + 0x68)) <= rbx) {
        goto label_2;
    }
    rax = *((rsp + 0x70));
    rsi = *((rsp + 0x60));
    edx = *((rax + rbx));
    rax = rbx + 1;
    if (*((rsi + rdx)) != 0) {
        goto label_1;
    }
    rsi = *((rsp + 0x60));
    rcx = *((rsp + 0x68));
    rdi = *((rsp + 0x70));
    while (rcx != rax) {
        edx = *((rdi + rax));
        rax = rax + 1;
        if (*((rsi + rdx)) != 0) {
            goto label_74;
        }
        rbx = rax;
    }
    rax = *((rsp + 0x68));
    *((rsp + 0xb8)) = rax;
    goto label_2;
label_71:
    rax = *((rsp + 0x18));
    if (*((rax + 0x98)) != 0) {
        goto label_75;
    }
label_29:
    if (*((rsp + 0x240)) != 0) {
        goto label_76;
    }
label_35:
label_24:
    free (*((rsp + 0x1b8)));
    rax = *((rsp + 0x18));
    if (*((rax + 0x98)) != 0) {
        goto label_77;
    }
label_32:
    fcn_00409d50 (r13);
label_25:
    eax = *((rsp + 0x4c));
    return rax;
label_70:
    *((rsp + 0x148)) = rdx;
    rax = fcn_00410540 (rsp + 0xb0, r13, 0, rcx);
    edx = *((rsp + 0xb0));
    if (edx == 0) {
        if (rax != 0) {
            goto label_78;
        }
        rdi = *((rsp + 0x1b8));
        goto label_3;
    }
    if (rax != 0) {
        goto label_4;
    }
label_65:
    r12 = *((rsp + 0x28));
    goto label_5;
label_63:
    rax = fcn_0040c070 (r13, *((rbp + 0x10)), rbp + 0x18, rbx);
    if (rax == 0) {
        goto label_6;
    }
    goto label_7;
label_66:
    if (rax >= *((rsp + 0x158))) {
        goto label_8;
    }
label_17:
    eax = *((rsp + 8));
    eax = fcn_004095a0 (r13, rax + 1);
    *((rsp + 0xb0)) = eax;
    if (eax != 0) {
        goto label_79;
    }
    rbx = *((rsp + 0x148));
    if ((*((r14 + 0x68)) & 0x20) == 0) {
        goto label_9;
    }
label_68:
    rbp = *((rsp + 0x198));
    if (*((r14 + 0x10)) <= 0) {
        goto label_80;
    }
    rax = rbp + 0xd8;
    r12d = 0;
    r8 = rbx;
    *((rsp + 0x58)) = rax;
    goto label_81;
label_11:
    if ((al & 1) == 0) {
        goto label_13;
    }
    edx &= 8;
    if (edx != 0) {
        goto label_13;
    }
label_12:
    if ((cl & 0x20) != 0) {
        if ((al & 2) == 0) {
            goto label_13;
        }
    }
    ecx &= 0x80;
    if (ecx != 0) {
        if ((al & 8) == 0) {
            goto label_13;
        }
    }
label_10:
    eax = fcn_0040e8a0 (r9, *((rsp + 0x58)), r15, r13, r8);
    if (eax != 0) {
        rbx = (int64_t) eax;
        rbx += *((rsp + 0x148));
        rdi = r13;
        if (*((rsp + 0x1e0)) >= eax) {
            eax = *((rsp + 0x1e0));
        }
        *((rsp + 0x1e0)) = eax;
        eax = fcn_004096f0 (rdi, rbx);
        *((rsp + 0xb4)) = eax;
        if (eax != 0) {
            goto label_82;
        }
        rax = *((rbp + 0x18));
        r8 = *((rsp + 0x1b8));
        rax = *((rax + r15*8));
        r15 = rbx*8;
        r8 += r15;
        rdx = rax * 3;
        rax = *((rbp + 0x30));
        *((rsp + 0x30)) = r8;
        rdx = rax + rdx*8;
        rax = *(r8);
        if (rax == 0) {
            goto label_83;
        }
        eax = fcn_0040b240 (rsp + 0xc0, *((rax + 0x50)), rdx);
        *((rsp + 0xb4)) = eax;
        if (eax != 0) {
            goto label_82;
        }
        eax = fcn_0040be50 (r13, rbx - 1, *((rsp + 0x1a0)));
        r15 += *((rsp + 0x1b8));
        rax = fcn_0040b3d0 (rsp + 0xb4, rbp, rsp + 0xc0, eax);
        *(r15) = rax;
        free (*((rsp + 0xd0)));
        rdx = *((rsp + 0x1b8));
        if (*((rdx + rbx*8)) == 0) {
            goto label_84;
        }
    }
label_14:
    r8 = *((rsp + 0x148));
    do {
label_13:
        r12++;
        if (r12 >= *((r14 + 0x10))) {
            goto label_85;
        }
label_81:
        rax = *((r14 + 0x18));
        r9 = *(rbp);
        r15 = *((rax + r12*8));
        rax = *((rax + r12*8));
        rax <<= 4;
        rax += r9;
    } while ((*((rax + 0xa)) & 0x10) == 0);
    ebx = *((rax + 8));
    if ((ebx & 0x3ff00) == 0) {
        goto label_10;
    }
    rsi = r8;
    *((rsp + 0x38)) = r9;
    *((rsp + 0x30)) = r8;
    al = fcn_0040be50 (r13, rsi, *((rsp + 0x1a0)));
    edx = ebx;
    r8 = *((rsp + 0x30));
    r9 = *((rsp + 0x38));
    edx >>= 8;
    ecx = edx;
    cx &= 0x3ff;
    if ((dl & 4) != 0) {
        goto label_11;
    }
    edx &= 8;
    if (edx == 0) {
        goto label_12;
    }
    if ((al & 1) == 0) {
        goto label_12;
    }
    goto label_13;
label_83:
    __asm ("movdqu xmm1, xmmword [rdx]");
    *((rsp + 0xc0)) = xmm1;
    rax = *((rdx + 0x10));
    *((rsp + 0xd0)) = rax;
    eax = fcn_0040be50 (r13, rbx - 1, *((rsp + 0x1a0)));
    rax = fcn_0040b3d0 (rsp + 0xb4, rbp, rsp + 0xc0, eax);
    r8 = *((rsp + 0x30));
    rdx = *((rsp + 0x1b8));
    *(r8) = rax;
    if (*((rdx + rbx*8)) != 0) {
        goto label_14;
    }
label_84:
    eax = *((rsp + 0xb4));
    if (eax == 0) {
        goto label_14;
    }
    goto label_86;
label_69:
    rbp = *((r14 + 0x60));
    if (rbp == 0) {
        goto label_87;
    }
    rax = *((rsp + 0x148));
    al = fcn_0040be50 (r13, rax - 1, *((rsp + 0x1a0)));
    if ((al & 1) == 0) {
        goto label_88;
    }
    rbp = *((rbp + rbx*8 + 0x800));
    goto label_15;
label_67:
    if (rax >= *((rsp + 0x158))) {
        goto label_16;
    }
    goto label_17;
label_26:
    xmm0 = 0;
    *((rsp + 0xc0)) = r15;
    *((rsp + 0xc8)) = 0;
    *((rsp + 0xd0)) = r14;
    *((rsp + 0xd8)) = r12;
    *((rsp + 0xe0)) = xmm0;
    *((rsp + 0xf0)) = 0;
    eax = fcn_00410700 (r13, rsp + 0xc0);
    ebx = eax;
    free (*((rsp + 0xf0)));
    if (ebx != 0) {
        goto label_89;
    }
    if (*(r15) != 0) {
        goto label_90;
    }
    free (r15);
label_42:
    fcn_00409d90 (r13);
    rbx = *((rsp + 0xb8));
label_33:
    rax = *((rsp + 0x9c));
    rbx += rax;
    *((rsp + 0xb8)) = rbx;
    if (rbx < *((rsp + 0x80))) {
        goto label_18;
    }
    if (rbx > *((rsp + 0x68))) {
        goto label_18;
    }
    eax = *((rsp + 0x98));
    if (eax <= 4) {
        goto label_19;
    }
label_54:
    rbp = *((rsp + 0x60));
    r14d = *((rsp + 0x9c));
    r15 = *((rsp + 0x80));
    rcx = *((rsp + 0x68));
    r12 = *((rsp + 0x78));
    goto label_91;
label_20:
    rax = rbp;
    if (r12 > rbx) {
        rax = *((rsp + 0x108));
        eax = *((rax + rdx));
        rax += rbp;
    }
    if (*(rax) != 0) {
        goto label_1;
    }
    rax = (int64_t) r14d;
    rbx += rax;
    *((rsp + 0xb8)) = rbx;
    if (rbx < r15) {
        goto label_18;
    }
    if (rbx > rcx) {
        goto label_18;
    }
label_91:
    rdx = rbx;
    rdx -= *((rsp + 0x128));
    if (*((rsp + 0x138)) > rdx) {
        goto label_20;
    }
    *((rsp + 8)) = rcx;
    eax = fcn_0040c140 (r13, rbx, *((rsp + 0x250)));
    rcx = *((rsp + 8));
    if (eax != 0) {
        goto label_92;
    }
    rdx = rbx;
    rdx -= *((rsp + 0x128));
    goto label_20;
label_82:
    rdx = *((rsp + 0x1b8));
label_86:
    *((rsp + 0xb0)) = eax;
    if (rdx == 0) {
        goto label_93;
    }
label_23:
    ebp = 0;
    goto label_21;
label_87:
    al = fcn_0040cb60 (*((rsp + 0x198)), r14);
    if (al != 0) {
        goto label_22;
    }
    *((rsp + 0xb0)) = 0xc;
    if (*((rsp + 0x1b8)) != 0) {
        goto label_23;
    }
label_93:
    edi = 0;
label_53:
    *((rsp + 0x4c)) = 0xc;
    goto label_24;
label_48:
    *((rsp + 0x4c)) = 1;
    goto label_25;
label_85:
    rbx = r8;
label_80:
    *((rsp + 0xb0)) = 0;
    goto label_9;
label_88:
    rbp = *((rbp + rbx*8));
    goto label_15;
label_79:
    if (eax != 0xc) {
        goto label_94;
    }
    do {
label_51:
        rdi = *((rsp + 0x1b8));
        *((rsp + 0x4c)) = 0xc;
        goto label_24;
label_75:
        rbx = *((rsp + 0x1b8));
        rax = *((rbx + r12*8));
        rax = fcn_0040c070 (r13, *((rax + 0x10)), rax + 0x18, r12);
        *((rsp + 0x1b0)) = rax;
label_73:
        r14 = *((rsp + 0x1b0));
label_72:
        rax = *((rsp + 0x198));
        *((rsp + 8)) = rax;
        rax = 0x1ffffffffffffffe;
        if (r12 > rax) {
            goto label_95;
        }
        rbp = r12 + 1;
        rbx = rbp*8;
        rax = malloc (rbx);
        r15 = rax;
    } while (rax == 0);
    rax = *((rsp + 8));
    if (*((rax + 0x98)) == 0) {
        goto label_26;
    }
    rax = malloc (rbx);
    rbx = rax;
    *((rsp + 0x20)) = rax;
    if (rax == 0) {
        goto label_96;
    }
label_28:
    memset (rbx, 0, rbp*8);
    xmm0 = 0;
    *((rsp + 0xe0)) = xmm0;
    *((rsp + 0xc0)) = r15;
    *((rsp + 0xc8)) = rbx;
    *((rsp + 0xd0)) = r14;
    *((rsp + 0xd8)) = r12;
    *((rsp + 0xf0)) = 0;
    eax = fcn_00410700 (r13, rsp + 0xc0);
    *((rsp + 0x10)) = eax;
    free (*((rsp + 0xf0)));
    eax = *((rsp + 0x10));
    if (eax != 0) {
        goto label_97;
    }
    if (*(r15) != 0) {
        goto label_98;
    }
    if (*(rbx) != 0) {
        goto label_98;
    }
    rdx = *((rsp + 0x1b8));
    do {
label_27:
        r12--;
        if (r12 == -1) {
            goto label_99;
        }
        rax = *((rdx + r12*8));
    } while (rax == 0);
    if ((*((rax + 0x68)) & 0x10) == 0) {
        goto label_27;
    }
    rbp = r12 + 1;
    rax = fcn_0040c070 (r13, *((rax + 0x10)), rax + 0x18, r12);
    r14 = rax;
    goto label_28;
label_98:
    eax = fcn_0040b8c0 (*((rsp + 8)), r15, rbx, rbp);
    free (rbx);
    if (ebp != 0) {
        goto label_89;
    }
label_90:
    rax = r14;
    r14 = r12;
    r12 = rax;
    free (*((rsp + 0x1b8)));
    *((rsp + 0x1b8)) = r15;
    *((rsp + 0x1b0)) = r12;
    *((rsp + 0x1a8)) = r14;
    goto label_29;
label_52:
    rax = *((rsp + 0x18));
    if ((*((rax + 0xb0)) & 2) != 0) {
        goto label_30;
    }
    *((rsp + 0x1b8)) = 0;
    goto label_31;
label_77:
    fcn_00409d90 (r13);
    free (*((rsp + 0x1f8)));
    free (*((rsp + 0x1d8)));
    goto label_32;
label_99:
    free (r15);
    free (rbx);
    fcn_00409d90 (r13);
    rbx = *((rsp + 0xb8));
    goto label_33;
label_57:
    r14 = *((rbx + 0x50));
label_38:
    if (r14 != 0) {
        goto label_34;
    }
    eax = *((rsp + 0xb0));
    *((rsp + 0x4c)) = eax;
    if (eax == 0xc) {
        goto label_35;
    }
    rax = assert_fail ("err == REG_ESPACE", "lib/regexec.c", 0x431, "check_matching");
label_74:
    *((rsp + 0xb8)) = rbx;
    goto label_1;
label_55:
    *((rsp + 0xb8)) = rax;
    rdi = *((rsp + 0x1b8));
    *((rsp + 0x4c)) = 1;
    goto label_24;
label_62:
    if (*((r14 + 0x68)) < 0) {
        goto label_100;
    }
label_39:
    esi = *((rsp + 0x48));
    r12 = *((rsp + 0x10));
    *((rsp + 0x20)) = 1;
    if (esi != 0) {
        goto label_36;
    }
    goto label_37;
label_78:
    goto label_4;
label_64:
    r12 = rbx;
    goto label_37;
label_95:
    rdi = rbx;
    *((rsp + 0x4c)) = 0xc;
    goto label_24;
label_59:
    r14 = *((rbx + 0x58));
    goto label_38;
label_60:
    rax = fcn_0040b3d0 (rsp + 0xb0, rbx, *((r14 + 0x50)), eax);
    r14 = rax;
    goto label_38;
label_100:
    rax = fcn_0040c070 (r13, *((r14 + 0x10)), r14 + 0x18, *((rsp + 0x10)));
    *((rsp + 0x20)) = rax;
    if (rax == 0) {
        goto label_36;
    }
    goto label_39;
label_76:
    rax = *((rsp + 0x248));
    rcx = *((rsp + 0x240));
    rdx = 0xffffffffffffffff;
    rcx <<= 4;
    rax += 0x10;
    rcx += *((rsp + 0x248));
    if (*((rsp + 0x240)) <= 1) {
        goto label_101;
    }
    do {
        *((rax + 8)) = rdx;
        rax += 0x10;
        *((rax - 0x10)) = rdx;
    } while (rcx != rax);
    rax = *((rsp + 0x248));
    rsi = *((rsp + 0x248));
    *(rax) = 0;
    rax = *((rsp + 0x1a8));
    *((rsi + 8)) = rax;
    rax = *((rsp + 0x40));
    if ((*((rax + 0x38)) & 0x10) != 0) {
        goto label_102;
    }
    if (*((rsp + 0x240)) == 1) {
        goto label_102;
    }
    rax = *((rsp + 0x18));
    r8d = 0;
    if ((*((rax + 0xb0)) & 1) != 0) {
        r8d = 0;
        r8b = (*((rax + 0x98)) > 0) ? 1 : 0;
    }
    eax = fcn_0040f250 (*((rsp + 0x40)), r13, *((rsp + 0x240)), *((rsp + 0x248)));
    if (eax != 0) {
        goto label_103;
    }
    rax = *((rsp + 0x248));
    rdx = *(rax);
label_45:
    r8d = *((rsp + 0x18c));
    r9 = *((rsp + 0x130));
    ecx = 0;
    r11 = *((rsp + 0x118));
    r10 = *((rsp + 0x138));
    rdi = *((rsp + 0xb8));
    rax = *((rsp + 0x248));
    rbx = *((rsp + 0x240));
    while (rcx != rbx) {
        rdx = *(rax);
        if (rdx != -1) {
            rsi = *((rax + 8));
            if (r8b != 0) {
                goto label_104;
            }
label_46:
            rdx += rdi;
            rsi += rdi;
            *(rax) = rdx;
            *((rax + 8)) = rsi;
        }
        rcx++;
        rax += 0x10;
    }
    if (*((rsp + 0x90)) <= 0) {
        goto label_105;
    }
    rax = *((rsp + 0x240));
    rcx = *((rsp + 0x90));
    rdx = 0xffffffffffffffff;
    rcx += *((rsp + 0x240));
    rax <<= 4;
    rcx <<= 4;
    rax += *((rsp + 0x248));
    rcx += *((rsp + 0x248));
    do {
        *(rax) = rdx;
        rax += 0x10;
        *((rax - 8)) = rdx;
    } while (rcx != rax);
label_105:
    rax = *((rsp + 0x18));
    rdi = *((rsp + 0x1b8));
    rsi = *((rax + 0xe0));
    if (rsi == 0) {
        goto label_24;
    }
    rax = *((rsp + 0x240));
    r8 = rax - 1;
    eax = 0;
    goto label_106;
label_40:
    rdx = *((rsi + rax*8));
    if (rdx == rax) {
invalid_funccall(); //        void (*0x412027)() ();
    }
label_106:
    if (rax != r8) {
        goto label_40;
    }
    goto label_24;
label_61:
    rbx = r14 + 0x10;
    rbp = r14 + 0x18;
    eax = fcn_0040bd00 (r13, rbx, rbp, 0);
    *((rsp + 0xb0)) = eax;
    if (eax != 0) {
        goto label_107;
    }
    eax = *((r14 + 0x68));
    if ((al & 0x40) != 0) {
        goto label_108;
    }
label_44:
    *((rsp + 0xad)) = 0;
    goto label_41;
label_58:
    r14 = *((rbx + 0x60));
    goto label_38;
label_97:
label_43:
    free (r15);
    free (*((rsp + 0x20)));
    eax = ebp;
    if (ebp == 1) {
        goto label_42;
    }
label_103:
    rdi = *((rsp + 0x1b8));
    *((rsp + 0x4c)) = eax;
    goto label_24;
label_92:
    *((rsp + 0x4c)) = eax;
    goto label_35;
label_89:
    *((rsp + 0x20)) = 0;
    goto label_43;
label_96:
    free (r15);
    rdi = *((rsp + 0x1b8));
    *((rsp + 0x4c)) = 0xc;
    goto label_24;
label_108:
    eax = fcn_0040fcc0 (r13, rbx, rbp);
    *((rsp + 0xb0)) = eax;
    if (eax == 0) {
        eax = *((r14 + 0x68));
        goto label_44;
label_101:
        rax = *((rsp + 0x248));
        rsi = *((rsp + 0x248));
        *(rax) = 0;
        rax = *((rsp + 0x1a8));
        *((rsi + 8)) = rax;
label_102:
        edx = 0;
        goto label_45;
    }
label_107:
    r12 = (int64_t) eax;
    goto label_37;
label_104:
    if (r9 == rdx) {
        goto label_109;
    }
    rdx = *((r11 + rdx*8));
    do {
        *(rax) = rdx;
        if (r9 == rsi) {
            goto label_110;
        }
        rsi = *((r11 + rsi*8));
        goto label_46;
label_109:
        rdx = r10;
    } while (1);
label_110:
    rsi = r10;
    goto label_46;
label_94:
    return assert_fail ("err == REG_ESPACE", "lib/regexec.c", 0x468, "check_matching");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x412190 */
#include <stdint.h>
 
int64_t fcn_00412190 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    uint32_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_5ch;
    uint32_t var_60h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    uint32_t var_88h;
    void * ptr;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    rcx = rdx*8;
    rbx = rsi;
    r12 = *((rdi + 0x98));
    rdx = *((rbp + 8));
    *((rsp + 0x18)) = rcx;
    rcx += *((rdi + 0xb8));
    *((rsp + 8)) = rdi;
    rdi = *(rcx);
    *((rsp + 0x5c)) = 0;
    *((rsp + 0x10)) = rdi;
    if (rdi == 0) {
        goto label_17;
    }
    if (rdx != 0) {
        goto label_18;
    }
    rdx = *(rsi);
    rax = rcx;
    *((rdx + r14*8)) = 0;
    rdx = *(rax);
    eax = 0;
    if ((*((rdx + 0x68)) & 0x40) != 0) {
        goto label_19;
    }
    do {
label_0:
        return rax;
label_18:
        *((rsp + 0x60)) = 0;
        rax = fcn_0040b6d0 (rsp + 0x60, r12, rbp);
        r15 = rax;
        eax = *((rsp + 0x60));
    } while (eax != 0);
    r13 = *((r15 + 0x38));
    rax = r15 + 0x38;
    *((rsp + 0x20)) = rax;
    if (r13 != 0) {
        goto label_20;
    }
    *((r15 + 0x40)) = 0;
    *((r15 + 0x38)) = rdi;
    rdi <<= 3;
    rax = malloc (*((rbp + 8)));
    *((r15 + 0x48)) = rax;
    if (rax == 0) {
        goto label_21;
    }
    *((rsp + 0x60)) = 0;
    if (*((rbp + 8)) <= 0) {
        goto label_20;
    }
    r15 = *((rsp + 0x20));
    while (eax == 0) {
        r13++;
        if (r13 >= *((rbp + 8))) {
            goto label_20;
        }
        rax = *((rbp + 0x10));
        rax = *((rax + r13*8));
        rdx = rax * 3;
        rax = *((r12 + 0x38));
        eax = fcn_0040a660 (r15, rax + rdx*8);
        *((rsp + 0x60)) = eax;
    }
label_21:
    eax = 0xc;
    goto label_0;
label_20:
    rax = *((rsp + 0x10));
    rax += 8;
    rsi = rax;
    *((rsp + 0x28)) = rax;
    eax = fcn_0040abd0 (rbp, rsi, *((rsp + 0x20)));
    *((rsp + 0x5c)) = eax;
    if (eax != 0) {
        goto label_0;
    }
    if (*((rbx + 0x28)) != 0) {
        goto label_22;
    }
label_9:
    r13 = *((rsp + 0x18));
    r13 += *(rbx);
    rax = fcn_0040b6d0 (rsp + 0x5c, r12, rbp);
    *(r13) = rax;
    eax = *((rsp + 0x5c));
    if (eax != 0) {
        goto label_0;
    }
    rsi = *((rsp + 8));
    rax = *((rsp + 0x18));
    rax += *((rsi + 0xb8));
    rdx = *(rax);
    eax = 0;
    if ((*((rdx + 0x68)) & 0x40) == 0) {
        goto label_0;
    }
label_19:
    rax = *((rsp + 8));
    r12d = 0;
    rsi = *((rax + 0xc8));
    rax = *((rax + 0xc8));
label_4:
    if (r12 >= rax) {
        goto label_23;
    }
    rcx = r12 + rax;
    rdi = *((rsp + 8));
    rdx = rcx;
    rdx >>= 0x3f;
    rdi = *((rdi + 0xd8));
    rdx += rcx;
    rdx >>= 1;
    rcx = rdx * 5;
    if (r14 <= *((rdi + rcx*8 + 8))) {
        goto label_24;
    }
    goto label_25;
    do {
        rcx = r12 + rdx;
        rax = rcx;
        rax >>= 0x3f;
        rax += rcx;
        rax >>= 1;
        rcx = rax * 5;
        r8 = rax;
        if (r14 > *((rdi + rcx*8 + 8))) {
            goto label_26;
        }
        rdx = rax;
INVALID_JUMP;
    } while (r12 < rdx);
label_23:
    if (rsi <= r12) {
        goto label_27;
    }
    rcx = *((rsp + 8));
    rax = r12 * 5;
    rsi = rax*8;
    rax = *((rcx + 0xd8));
    *((rsp + 0x38)) = rsi;
    if (r14 != *((rax + rsi + 8))) {
        goto label_27;
    }
    if (r12 == -1) {
        goto label_27;
    }
    rax = *((rsp + 0x10));
    r13 = *((rcx + 0x98));
    *((rsp + 0x60)) = 0;
    if (*((rax + 0x10)) <= 0) {
        goto label_27;
    }
    *((rsp + 0x30)) = r14;
    r15d = 0;
    r14 = rbx;
    *((rsp + 0x40)) = r12;
    while (rbp != *((r14 + 0x10))) {
        if (al == 4) {
            goto label_28;
        }
label_1:
        rax = *((rsp + 0x10));
        r15++;
        if (r15 >= *((rax + 0x10))) {
            goto label_29;
        }
        rax = *((rsp + 0x10));
        rax = *((rax + 0x18));
        rbp = *((rax + r15*8));
        rax = *((rax + r15*8));
        rax <<= 4;
        rax += *(r13);
        eax = *((rax + 8));
    }
    rbx = *((rsp + 0x30));
    if (rbx == *((r14 + 0x18))) {
        goto label_1;
    }
    if (al != 4) {
        goto label_1;
    }
label_28:
    rax = *((rsp + 8));
    rbx = *((rsp + 0x38));
    *((rsp + 0x48)) = r15;
    r12 = *((rsp + 0x40));
    r15 = *((rsp + 0x30));
    rbx += *((rax + 0xd8));
    rax = rbp + rbp*2;
    rax <<= 3;
    *((rsp + 0x28)) = rax;
    rax = rbp*8;
    *((rsp + 0x20)) = rax;
    goto label_30;
label_2:
    rax = *((r13 + 0x18));
    rsi = *((rsp + 0x20));
    r9 = *((rax + rsi));
label_3:
    if (r10 > *((r14 + 0x18))) {
        goto label_31;
    }
    rax = *(r14);
    rax = *((rax + r10*8));
    if (rax == 0) {
        goto label_31;
    }
    rax = fcn_0040a120 (*((rax + 0x10)), rax + 0x18, r9);
    if (rax == 0) {
        goto label_31;
    }
    al = fcn_0040a3b0 (*((rsp + 0x18)), r14 + 0x28, r14 + 0x30, rbp, r15, r9);
    if (al != 0) {
        goto label_31;
    }
    if (*((rsp + 0x60)) == 0) {
        goto label_32;
    }
label_5:
    *((rsp + 0x70)) = rbp;
    *((rsp + 0x78)) = r15;
    al = fcn_00408b10 (rsp + 0x80, r12);
    if (al == 0) {
        goto label_33;
    }
    rax = *((rsp + 0x60));
    rbx = *((rsp + 0x18));
    rbx = *((rax + rbx));
    eax = fcn_00410700 (*((rsp + 8)), rsp + 0x60);
    if (eax != 0) {
        goto label_15;
    }
    rsi = *((r14 + 8));
    rdx = *((rsp + 0x60));
    if (rsi != 0) {
        eax = fcn_0040b8c0 (r13, rsi, rdx, r15 + 1);
        if (eax != 0) {
            goto label_15;
        }
        rdx = *((rsp + 0x60));
    }
    rax = *((rsp + 0x18));
    r9 = *((rsp + 0x88));
    r10 = rsp + 0x90;
    *((rdx + rax)) = rbx;
    rax = fcn_0040a120 (r9, r10, r12);
    rax--;
    rdx = rax;
    if (rax >= 0) {
        if (r9 <= rax) {
            goto label_34;
        }
        r9--;
        *((rsp + 0x88)) = r9;
        fcn_0040a290 (rsp + 0x88, r10, rdx);
    }
label_34:
    rbx = *((rsp + 8));
    rax = r12 * 5;
    rdx = *((rbx + 0xd8));
    rbx = rdx + rax*8;
    do {
label_31:
        r12++;
        rax = rbx + 0x28;
        if (*((rbx + 0x20)) == 0) {
            goto label_35;
        }
        rbx = rax;
INVALID_JUMP;
    } while (rbp != *(rbx));
    rax = *((rbx + 0x18));
    rax -= *((rbx + 0x10));
    r10 = r15 + rax;
    if (rax != 0) {
        goto label_2;
    }
    rax = *((r13 + 0x28));
    rcx = *((rsp + 0x28));
    rax = *((rax + rcx + 0x10));
    r9 = *(rax);
    goto label_3;
label_17:
    rax = *((rsp + 0x18));
    rax += *(rsi);
    rbx = rax;
    if (rdx == 0) {
        *(rax) = 0;
        eax = 0;
        goto label_0;
    }
    rax = fcn_0040b6d0 (rsp + 0x5c, r12, rbp);
    *(rbx) = rax;
    eax = *((rsp + 0x5c));
    goto label_0;
label_29:
    if (*((rsp + 0x60)) != 0) {
        goto label_36;
    }
label_27:
    eax = 0;
    goto label_0;
label_25:
    r8 = rdx;
    rdx = rax;
label_26:
    r12 = r8 + 1;
    rax = rdx;
    goto label_4;
label_32:
    __asm ("movdqa xmm0, xmmword [r14]");
    __asm ("movdqa xmm1, xmmword [r14 + 0x10]");
    __asm ("movdqa xmm2, xmmword [r14 + 0x20]");
    rax = *((r14 + 0x30));
    *((rsp + 0x60)) = xmm0;
    *((rsp + 0x70)) = xmm1;
    *((rsp + 0x80)) = xmm2;
    *((rsp + 0x90)) = rax;
    eax = fcn_0040b1c0 (rsp + 0x80, r14 + 0x20);
    if (eax == 0) {
        goto label_5;
    }
label_15:
    if (*((rsp + 0x60)) == 0) {
        goto label_0;
    }
label_16:
    *((rsp + 8)) = eax;
    free (*((rsp + 0x90)));
    eax = *((rsp + 8));
    goto label_0;
label_35:
    r15 = *((rsp + 0x48));
    goto label_1;
label_22:
    rax = *((rsp + 8));
    rax = *((rax + 0xd8));
    *((rsp + 0x20)) = rax;
    if (*((rsp + 0x60)) <= 0) {
        goto label_37;
    }
    r11d = 0;
    r15 = r11;
label_8:
    rax = *((rbx + 0x30));
    rcx = *((rsp + 0x20));
    rax = *((rax + r15*8));
    rax *= 5;
    rdx = rcx + rax*8;
    if (r14 <= *((rdx + 0x10))) {
        goto label_10;
    }
    if (r14 > *((rdx + 8))) {
        goto label_10;
    }
    rcx = *(rdx);
    rax = *(r12);
    rsi = *((rbp + 8));
    rcx <<= 4;
    r8 = *((rax + rcx));
    if (r14 == *((rdx + 0x18))) {
        goto label_38;
    }
    r13d = 0;
    if (rsi <= 0) {
        goto label_10;
    }
    *((rsp + 0x30)) = rbx;
    rbx = r8;
    while (edx > 1) {
label_6:
        r13++;
        if (r13 >= *((rbp + 8))) {
            goto label_39;
        }
label_7:
        rax = *(r12);
        rdx = *((rbp + 0x10));
        rsi = *((rdx + r13*8));
        rdx = *((rdx + r13*8));
        rdx <<= 4;
        rax += rdx;
        edx = *((rax + 8));
        edx -= 8;
    }
    if (rbx != *(rax)) {
        goto label_6;
    }
    eax = fcn_0040c930 (r12, rsi, rbp, *((rsp + 0x28)));
    if (eax != 0) {
        goto label_0;
    }
    r13++;
    if (r13 < *((rbp + 8))) {
        goto label_7;
    }
label_39:
    rbx = *((rsp + 0x30));
label_10:
    r15++;
    if (r15 < *((rbx + 0x28))) {
        goto label_8;
    }
label_37:
    *((rsp + 0x5c)) = 0;
    goto label_9;
label_38:
    if (rsi <= 0) {
        goto label_10;
    }
    r10 = *((rbp + 0x10));
    r9 = 0xffffffffffffffff;
    r11 = r10 + rsi*8;
    rcx = r10;
    rsi = r9;
    while (r13d != 8) {
        if (r13d == 9) {
            if (r8 != *(rdx)) {
                r9 = rdi;
                goto label_40;
            }
        }
label_40:
        rcx += 8;
        if (r11 == rcx) {
            goto label_41;
        }
label_11:
        rdi = *(rcx);
        rdx = *(rcx);
        rdx <<= 4;
        rdx += rax;
        r13d = *((rdx + 8));
    }
    if (r8 == *(rdx)) {
        rsi = rdi;
    }
    rcx += 8;
    if (r11 != rcx) {
        goto label_11;
    }
label_41:
    r13 = r9;
    *((rsp + 0x30)) = r9;
    if (rsi >= 0) {
        goto label_42;
    }
    if (*((rsp + 0x30)) < 0) {
        goto label_10;
    }
label_14:
    r13d = 0;
    *((rsp + 0x38)) = rbx;
    rbx = r13;
    r13 = *((rsp + 0x30));
    while (rax != 0) {
label_12:
        rbx++;
label_13:
        if (*((rbp + 8)) <= rbx) {
            goto label_43;
        }
        r10 = *((rbp + 0x10));
        r10 = *((r10 + rbx*8));
        rax = *((r12 + 0x38));
        r9 = r10 * 3;
        r9 <<= 3;
        rax += r9;
        rax = fcn_0040a120 (*((rax + 8)), rax + 0x10, r13);
    }
    r9 += *((r12 + 0x30));
    rax = fcn_0040a120 (*((r9 + 8)), r9 + 0x10, rdx);
    if (rax != 0) {
        goto label_12;
    }
    eax = fcn_0040c930 (r12, r10, rbp, *((rsp + 0x28)));
    if (eax == 0) {
        goto label_13;
    }
    goto label_0;
label_42:
    eax = fcn_0040c930 (r12, rsi, rbp, *((rsp + 0x28)));
    if (eax != 0) {
        goto label_0;
    }
    if (r13 < 0) {
        goto label_10;
    }
    if (*((rbp + 8)) <= 0) {
        goto label_10;
    }
    r10 = *((rbp + 0x10));
    goto label_14;
label_33:
    eax = 0xc;
    goto label_15;
label_43:
    rbx = *((rsp + 0x38));
    goto label_10;
label_36:
    eax = 0;
    goto label_16;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4129c0 */
#include <stdint.h>
 
int64_t fcn_004129c0 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    uint32_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r10 = rsi;
    r11 = (int64_t) ecx;
    rbx = rdi;
    r12 = *((rsi + 0x48));
    if (*((rsi + 0x90)) != 1) {
        eax = fcn_0040a0d0 (r10, r12);
        if (eax > 1) {
            goto label_5;
        }
    }
    eax = *((rbp + 8));
    r11 += r12;
    *((r10 + 0x48)) = r11;
    edx = eax;
    edx &= 0xfffffffb;
    if (dl != 0x1a) {
        if (al == 0x1c) {
            goto label_6;
        }
        if (al == 0x16) {
            if (r9b == 0) {
                goto label_7;
            }
        }
label_4:
        eax = *(rbp);
        *(rbx) = 0;
        *((rbx + 8)) = al;
        eax = 0;
label_1:
        return eax;
label_5:
        rdx = *((r10 + 0x10));
        rax = (int64_t) eax;
        *(rbx) = 1;
        rax += r12;
        edx = *((rdx + r12*4));
        *((rbx + 8)) = edx;
        *((r10 + 0x48)) = rax;
        eax = 0;
        return rax;
    }
label_6:
    if (r11 >= *((r10 + 0x68))) {
        goto label_8;
    }
    r9d = *(rbp);
    r8d = 0;
    while (r9b != r13b) {
label_0:
        rax = *((rbx + 8));
        *((rax + r8)) = r13b;
        r8++;
        if (r8 == 0x20) {
            goto label_8;
        }
        eax = *((rbp + 8));
        r11 = *((r10 + 0x48));
        r12 = (int64_t) r8d;
        if (al == 0x1e) {
            goto label_9;
        }
label_2:
        rdx = *((r10 + 8));
        rax = r11 + 1;
        *((r10 + 0x48)) = rax;
        r13d = *((rdx + r11));
label_3:
        if (*((r10 + 0x68)) <= rax) {
            goto label_8;
        }
    }
    rdx = *((r10 + 8));
    if (*((rdx + rax)) != 0x5d) {
        goto label_0;
    }
    rax++;
    *((r10 + 0x48)) = rax;
    rax = *((rbx + 8));
    *((rax + r12)) = 0;
    edx = *((rbp + 8));
    if (dl == 0x1c) {
        goto label_10;
    }
    if (dl == 0x1e) {
        goto label_11;
    }
    eax = 0;
    if (dl != 0x1a) {
        goto label_1;
    }
    *(rbx) = 3;
    goto label_1;
label_8:
    eax = 7;
    return rax;
label_9:
    if (*((r10 + 0x8b)) == 0) {
        goto label_2;
    }
    if (*((r10 + 0x8c)) == 0) {
        goto label_12;
    }
    if (r11 == *((r10 + 0x30))) {
        goto label_13;
    }
    rax = *((r10 + 0x10));
    if (*((rax + r11*4)) == 0xffffffff) {
        goto label_2;
    }
label_13:
    rax = *((r10 + 0x18));
    rax = *((rax + r11*8));
    rax += *(r10);
    rax += *((r10 + 0x28));
    r13d = *(rax);
    if ((r13b & 0x80) != 0) {
        goto label_2;
    }
    eax = 1;
    if (*((r10 + 0x90)) != 1) {
        rax = fcn_0040a0d0 (r10, r11);
        rax = (int64_t) eax;
    }
    rax += r11;
    *((r10 + 0x48)) = rax;
    goto label_3;
label_12:
    rax = r11 + 1;
    r11 += *(r10);
    r11 += *((r10 + 0x28));
    *((r10 + 0x48)) = rax;
    r13d = *(r11);
    goto label_3;
label_7:
    fcn_00408630 (rsp, r10, r8);
    eax = 0xb;
    if (*((rsp + 8)) == 0x15) {
        goto label_4;
    }
    goto label_1;
label_11:
    *(rbx) = 4;
    eax = 0;
    goto label_1;
label_10:
    *(rbx) = 2;
    eax = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x412be0 */
#include <stdint.h>
 
int64_t fcn_00412be0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
label_2:
    r12 = *((rsi + 0x48));
    if (*((rsi + 0x68)) <= r12) {
        goto label_14;
    }
    r15 = rdx;
    rdx = *((rsi + 8));
    r14d = *((rdi + 0xa));
    r13 = rsi;
    eax = *((rsi + 0x90));
    rbx = rdi;
    ebp = *((rdx + r12));
    r14d &= 0xffffff9f;
    *((rdi + 0xa)) = r14b;
    *(rdi) = bpl;
    if (eax <= 1) {
        goto label_15;
    }
    if (r12 != *((rsi + 0x30))) {
        rcx = *((rsi + 0x10));
        if (*((rcx + r12*4)) == 0xffffffff) {
            goto label_16;
        }
    }
    if (bpl == 0x5c) {
        goto label_17;
    }
    rax = *((r13 + 0x10));
    *((rbx + 8)) = 1;
    *((rsp + 8)) = rdx;
    r14d = *((rax + r12*4));
    eax = iswalnum (*((rax + r12*4)));
    al = (eax != 0) ? 1 : 0;
    cl = (r14d == 0x5f) ? 1 : 0;
    eax |= ecx;
    eax <<= 6;
    ecx = eax;
    eax = *((rbx + 0xa));
    eax &= 0xffffffbf;
    eax |= ecx;
    *((rbx + 0xa)) = al;
    rdx = *((rsp + 8));
    do {
        ebp -= 0xa;
        if (bpl > 0x73) {
            goto label_11;
        }
        ebp = (int32_t) bpl;
        /* switch table (116 cases) at 0x4191f0 */
label_15:
        if (bpl == 0x5c) {
            goto label_17;
        }
        *((rbx + 8)) = 1;
        *((rsp + 8)) = rdx;
        rax = ctype_b_loc ();
        ecx = (int32_t) bpl;
        rax = *(rax);
        eax = *((rax + rcx*2));
        ax >>= 3;
        eax &= 1;
        cl = (bpl == 0x5f) ? 1 : 0;
        eax |= ecx;
        eax <<= 6;
        r14d |= eax;
        *((rbx + 0xa)) = r14b;
        rdx = *((rsp + 8));
    } while (1);
label_17:
    rcx = r12 + 1;
    if (rcx < *((r13 + 0x58))) {
        goto label_18;
    }
    *((rbx + 8)) = 0x24;
    eax = 1;
    return rax;
label_14:
    *((rdi + 8)) = 2;
    eax = 0;
    do {
label_1:
        return rax;
label_18:
        if (*((r13 + 0x8b)) != 0) {
            goto label_19;
        }
label_10:
        edi = *((rdx + r12 + 1));
        *((rsp + 8)) = edi;
        r14d = edi;
label_9:
        *(rbx) = r14b;
        *((rbx + 8)) = 1;
        if (eax <= 1) {
            goto label_20;
        }
        rax = *((r13 + 0x10));
        ebp = *((rax + rcx*4));
label_13:
        eax = iswalnum (*((rax + rcx*4)));
        al = (eax != 0) ? 1 : 0;
        dl = (ebp == 0x5f) ? 1 : 0;
        eax |= edx;
        eax <<= 6;
        edx = eax;
        eax = *((rbx + 0xa));
        eax &= 0xffffffbf;
        eax |= edx;
        *((rbx + 0xa)) = al;
label_0:
        r14d -= 0x27;
        if (r14b > 0x56) {
            goto label_21;
        }
        r14d = (int32_t) r14b;
        /* switch table (87 cases) at 0x419590 */
label_16:
        eax = *((rdi + 8));
        eax &= 0xffdfff00;
        eax |= 0x200001;
        *((rdi + 8)) = eax;
        eax = 1;
    } while (1);
label_20:
    rax = ctype_b_loc ();
    edx = (int32_t) r14b;
    rax = *(rax);
    eax = *((rax + rdx*2));
    ax >>= 3;
    eax &= 1;
    dl = (r14b == 0x5f) ? 1 : 0;
    eax |= edx;
    edx = *((rbx + 0xa));
    eax <<= 6;
    edx &= 0xffffffbf;
    eax |= edx;
    *((rbx + 0xa)) = al;
    goto label_0;
    eax = 1;
    if ((r15d & 0x2000) == 0) {
        goto label_1;
    }
label_8:
    *((rbx + 8)) = 8;
    goto label_1;
    eax = 1;
    if ((r15d & 0x2000) == 0) {
        goto label_1;
    }
label_7:
    *((rbx + 8)) = 9;
    goto label_1;
    *((rbx + 8)) = 0xb;
    eax = 1;
    goto label_1;
    eax = 1;
    if ((r15d & 0x402) != 0) {
        goto label_1;
    }
label_6:
    *((rbx + 8)) = 0x12;
    goto label_1;
    *((rbx + 8)) = 5;
    eax = 1;
    goto label_1;
    eax = 1;
    if ((r15d & 0x402) != 0) {
        goto label_1;
    }
label_5:
    *((rbx + 8)) = 0x13;
    goto label_1;
    *((rbx + 8)) = 0x14;
    eax = 1;
    goto label_1;
    if ((r15d & 0x800008) == 0) {
        if (r12 != 0) {
            goto label_22;
        }
    }
label_12:
    *((rbx + 8)) = 0xc;
    eax = 1;
    *(rbx) = 0x10;
    goto label_1;
    r15d &= 0x1200;
    eax = 1;
    if (r15 != 0x1200) {
        goto label_1;
    }
label_4:
    *((rbx + 8)) = 0x17;
    goto label_1;
    r15d &= 0x8400;
    if (r15 == 0x8000) {
        goto label_23;
    }
label_11:
    eax = 1;
    goto label_1;
    eax = 1;
    if ((r15d & 0x800) == 0) {
        goto label_1;
    }
label_23:
    *((rbx + 8)) = 0xa;
    eax = 1;
    goto label_1;
    if ((r15b & 8) != 0) {
        goto label_24;
    }
    r12++;
    if (r12 == *((r13 + 0x58))) {
        goto label_24;
    }
    *((r13 + 0x48)) = r12;
    fcn_00412be0 (rsp + 0x10, r13, r15);
    goto label_2;
    eax = *((rsp + 0x18));
    *((r13 + 0x48))--;
    edx = rax - 9;
    eax = 1;
    if (dl > 1) {
        goto label_1;
    }
label_24:
    *((rbx + 8)) = 0xc;
    eax = 1;
    *(rbx) = 0x20;
    goto label_1;
    r15d &= 0x1200;
    eax = 1;
    if (r15 != 0x1200) {
        goto label_1;
    }
label_3:
    *((rbx + 8)) = 0x18;
    goto label_1;
    r15d &= 0x1200;
    eax = 2;
    if (r15 != 0x200) {
        goto label_1;
    }
    goto label_3;
    eax = 2;
    if ((r15d & 0x8400) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0xa;
    goto label_1;
    r15d &= 0x1200;
    eax = 2;
    if (r15 != 0x200) {
        goto label_1;
    }
    goto label_4;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0x20;
    goto label_1;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0x22;
    goto label_1;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0xc;
    *(rbx) = 0x100;
    goto label_1;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0xc;
    *(rbx) = 0x40;
    goto label_1;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0x21;
    goto label_1;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0x23;
    goto label_1;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0xc;
    *(rbx) = 0x200;
    goto label_1;
    r15d &= 0x402;
    eax = 2;
    if (r15 != 2) {
        goto label_1;
    }
    goto label_5;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0xc;
    *(rbx) = 9;
    goto label_1;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0xc;
    *(rbx) = 6;
    goto label_1;
    eax = 2;
    if ((r15d & 0x4000) != 0) {
        goto label_1;
    }
    edx = *((rsp + 8));
    *((rbx + 8)) = 4;
    edx -= 0x31;
    rdx = (int64_t) edx;
    *(rbx) = rdx;
    goto label_1;
    r15d &= 0x402;
    eax = 2;
    if (r15 != 2) {
        goto label_1;
    }
    goto label_6;
    eax = 2;
    if ((r15d & 0x2000) != 0) {
        goto label_1;
    }
    goto label_7;
    eax = 2;
    if ((r15d & 0x2000) != 0) {
        goto label_1;
    }
    goto label_8;
    eax = 2;
    if ((r15d & 0x80000) != 0) {
        goto label_1;
    }
    *((rbx + 8)) = 0xc;
    *(rbx) = 0x80;
    goto label_1;
label_21:
    eax = 2;
    goto label_1;
label_19:
    if (eax > 1) {
        rdi = *((r13 + 0x10));
        r8 = rcx*4;
        ebp = *((rdi + rcx*4));
        if (ebp == 0xffffffff) {
            goto label_25;
        }
        r9 = r12 + 2;
        if (*((r13 + 0x30)) == r9) {
            goto label_26;
        }
        if (*((rdi + r8 + 4)) == 0xffffffff) {
            goto label_25;
        }
    }
label_26:
    rsi = *(r13);
    rdi = *((r13 + 0x28));
    if (*((r13 + 0x8c)) == 0) {
        goto label_27;
    }
    r8 = *((r13 + 0x18));
    rsi += rdi;
    rsi += *((r8 + rcx*8));
    edi = *(rsi);
    r14d = edi;
    *((rsp + 8)) = edi;
    edi &= 0x80;
    if (edi == 0) {
        goto label_9;
    }
    goto label_10;
label_22:
    if (*((rdx + r12 - 1)) != 0xa) {
        goto label_11;
    }
    if ((r15d & 0x800) == 0) {
        goto label_11;
    }
    goto label_12;
label_27:
    rsi += rcx;
    edi = *((rsi + rdi));
    r14d = edi;
    *((rsp + 8)) = edi;
    goto label_9;
label_25:
    eax = *((rdx + r12 + 1));
    *((rbx + 8)) = 1;
    r14d = eax;
    *(rbx) = al;
    *((rsp + 8)) = eax;
    goto label_13;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x413290 */
#include <stdint.h>
 
uint64_t fcn_00413290 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = rdi;
    r13 = rsi;
    r12 = 0xfffffffffffffffe;
    rbx = 0xffffffffffffffff;
    do {
label_1:
        rax = fcn_00412be0 (r13, r14, rbp);
        edx = *(r13);
        rax = (int64_t) eax;
        *((r14 + 0x48)) += rax;
        eax = *((r13 + 8));
        if (al == 2) {
            goto label_2;
        }
        if (al == 0x18) {
            goto label_3;
        }
        if (dl == 0x2c) {
            goto label_3;
        }
        if (al == 1) {
            goto label_4;
        }
label_0:
        rbx = r12;
    } while (1);
label_4:
    eax = rdx - 0x30;
    if (al > 9) {
        goto label_0;
    }
    if (rbx == 0xfffffffffffffffe) {
        goto label_0;
    }
    if (rbx != -1) {
        rax = rbx * 5;
        rbx = rdx + rax*2;
        eax = 0x8030;
        if (rbx > 0x8030) {
            rbx = rax;
        }
        rbx -= 0x30;
        goto label_1;
label_2:
        rbx = 0xfffffffffffffffe;
label_3:
        rax = 0xfffffffffffffffe;
        return rax;
    }
    ebx = (int32_t) dl;
    ebx -= 0x30;
    rbx = (int64_t) ebx;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x413350 */
#include <stdint.h>
 
int64_t fcn_00413350 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, uint32_t arg6) {
    int64_t var_10h_2;
    int64_t var_8h;
    int64_t var_10h;
    void * ptr;
    uint32_t var_20h;
    uint32_t var_30h;
    uint32_t var_38h;
    uint32_t var_40h;
    void * var_48h;
    size_t * size;
    uint32_t var_58h;
    uint32_t var_5ch;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_c0h;
    int64_t var_c8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
label_28:
    rax = *(rsi);
    *((rsp + 0x10)) = rax;
    eax = *((rdx + 8));
    if (al > 0x24) {
        goto label_5;
    }
    r12 = rdx;
    edx = (int32_t) al;
    *((rsp + 0x30)) = r9;
    *((rsp + 8)) = rcx;
    r15 = rdi;
    /* switch table (37 cases) at 0x419848 */
    if ((*((rsp + 8)) & 0x1000000) != 0) {
        goto label_52;
    }
    rcx = *((rsp + 8));
    if ((cl & 0x20) != 0) {
        goto label_52;
    }
    if ((cl & 0x10) != 0) {
        goto label_53;
    }
    if (al == 9) {
        goto label_54;
    }
label_20:
    rax = *((rsp + 0x10));
    *((r12 + 8)) = 1;
    rax = fcn_0040ad90 (rax + 0x70, rax + 0x80, 0, 0, r12);
    *((rsp + 0x18)) = rax;
    if (rax == 0) {
        goto label_19;
    }
label_17:
    rax = fcn_00412be0 (r12, r15, *((rsp + 8)));
    ebp = *((r12 + 8));
    rax = (int64_t) eax;
    *((r15 + 0x48)) += rax;
label_1:
    if (bpl <= 0x17) {
        goto label_55;
    }
    do {
label_0:
        rax = *((rsp + 0x18));
        return rax;
        rbx = *((rsi + 0x30));
        r14 = *((rsp + 8));
        *(rsp) = r8;
        rax = rbx + 1;
        *((rsi + 0x30)) = rax;
        rdx |= 0x800000;
        rax = fcn_00412be0 (r12, rdi, r14);
        rax = (int64_t) eax;
        *((r15 + 0x48)) += rax;
        eax = 0;
        if (*((r12 + 8)) == 9) {
            goto label_56;
        }
        r13 = *((rsp + 0x30));
        r8++;
        rax = fcn_00414980 (r15, rbp, r12, r14, *(rsp), r13);
        r11d = *(r13);
        if (r11d == 0) {
            if (*((r12 + 8)) == 9) {
                goto label_56;
            }
            if (rax != 0) {
                fcn_004085c0 (rax, 0x4097d0, 0);
            }
            rax = *((rsp + 0x30));
            *(rax) = 8;
        }
label_5:
        *((rsp + 0x18)) = 0;
    } while (1);
label_55:
    eax = 0x8c0800;
    bl = (bpl == 0x12) ? 1 : 0;
    if (((rax >> rbp) & 1) >= 0) {
        goto label_0;
    }
    r13 = *((r15 + 0x48));
    __asm ("movdqa xmm0, xmmword [r12]");
    if (bpl == 0x17) {
        goto label_57;
    }
    ebx = (int32_t) bl;
    if (bpl == 0x13) {
        goto label_58;
    }
    rax = fcn_00412be0 (r12, r15, *((rsp + 8)));
    rax = (int64_t) eax;
    *((r15 + 0x48)) += rax;
    if (*((rsp + 0x18)) == 0) {
        goto label_8;
    }
    if (bpl == 0x12) {
        goto label_59;
    }
    rbp = *((rsp + 0x18));
    if (*((rbp + 0x30)) == 0x11) {
        goto label_60;
    }
    *(rsp) = 0xffffffffffffffff;
    ebx = 0;
    *((rsp + 0x20)) = 0;
label_3:
    eax = 0xb;
label_2:
    *((rsp + 0xc8)) = al;
    rax = *((rsp + 0x10));
    r13 = rax + 0x70;
    r14 = rax + 0x80;
    rax = fcn_0040ad90 (r13, r14, rbp, 0, rsp + 0xc0);
    rdx = rax;
    if (rax == 0) {
        goto label_14;
    }
    rbx += 2;
    if (rbx > *(rsp)) {
        goto label_61;
    }
    *((rsp + 0x38)) = r12;
    r12 = rbp;
    do {
        rax = fcn_0040ae70 (r12, *((rsp + 0x10)));
        r12 = rax;
        *((rsp + 0xc8)) = 0x10;
        rax = fcn_0040ad90 (r13, r14, rbp, rax, rsp + 0xc0);
        if (r12 == 0) {
            goto label_14;
        }
        if (rax == 0) {
            goto label_14;
        }
        *((rsp + 0xc8)) = 0xa;
        rax = fcn_0040ad90 (r13, r14, rax, 0, rsp + 0xc0);
        if (rax == 0) {
            goto label_14;
        }
        rbx++;
    } while (rbx <= *(rsp));
    r12 = *((rsp + 0x38));
    rdx = rax;
label_61:
    rax = *((rsp + 0x20));
    if (rax == 0) {
        goto label_62;
    }
    *((rsp + 0xc8)) = 0x10;
    rax = fcn_0040ad90 (r13, r14, rax, rdx, rsp + 0xc0);
label_4:
    rcx = *((rsp + 0x30));
    edx = *(rcx);
    if (edx != 0) {
        if (rax == 0) {
            goto label_32;
        }
    }
    *((rsp + 0x18)) = rax;
label_6:
    ebp = *((r12 + 8));
    if ((*((rsp + 8)) & 0x1000000) == 0) {
        goto label_1;
    }
    if (bpl == 0xb) {
        goto label_63;
    }
    if (bpl != 0x17) {
        goto label_1;
    }
label_63:
    rax = *((rsp + 0x18));
    if (rax != 0) {
        fcn_004085c0 (rax, 0x4097d0, 0);
    }
label_52:
    *((rsp + 0x18)) = 0;
    rax = *((rsp + 0x30));
    *(rax) = 0xd;
    goto label_0;
label_9:
    if (rbx <= 0) {
        goto label_64;
    }
    if (rbx == 1) {
        goto label_65;
    }
    rax = *((rsp + 0x10));
    r14 = *((rsp + 0x18));
    *((rsp + 0x20)) = r15;
    *((rsp + 0x38)) = r12;
    r12 = rbx;
    r13 = rax + 0x70;
    rax -= 0xffffffffffffff80;
    r15 = r14;
    rbx = rax;
    while (r15 != 0) {
        if (rax == 0) {
            goto label_14;
        }
        rbp++;
        if (r12 < rbp) {
            goto label_66;
        }
        rax = fcn_0040ae70 (r15, *((rsp + 0x10)));
        rcx = rax;
        r15 = rax;
        *((rsp + 0xc8)) = 0x10;
        rax = fcn_0040ad90 (r13, rbx, r14, rcx, rsp + 0xc0);
        r14 = rax;
    }
label_14:
    rax = *((rsp + 0x30));
    *(rax) = 0xc;
label_11:
    fcn_004085c0 (*((rsp + 0x18)), 0x4097d0, 0);
    *((rsp + 0x18)) = 0;
    goto label_0;
label_58:
    rax = fcn_00412be0 (r12, r15, *((rsp + 8)));
    rax = (int64_t) eax;
    *((r15 + 0x48)) += rax;
    if (*((rsp + 0x18)) == 0) {
        goto label_8;
    }
    rbp = *((rsp + 0x18));
    if (*((rbp + 0x30)) == 0x11) {
        goto label_67;
    }
    *(rsp) = 1;
    eax = 0xa;
    *((rsp + 0x20)) = 0;
    goto label_2;
label_60:
    *(rsp) = 0xffffffffffffffff;
    rbp = *((rsp + 0x18));
    ebx = 0;
    *((rsp + 0x20)) = 0;
label_16:
    fcn_004085c0 (rbp, 0x408760, *((rbp + 0x28)));
label_15:
    if (*(rsp) == -1) {
        goto label_3;
    }
    eax = 0xa;
    goto label_2;
label_57:
    *((rsp + 0x20)) = xmm0;
    rax = fcn_00413290 (r15, r12, *((rsp + 8)));
    __asm ("movdqa xmm0, xmmword [rsp + 0x20]");
    *(rsp) = rax;
    if (rax == -1) {
        goto label_68;
    }
    if (*(rsp) != 0xfffffffffffffffe) {
        eax = *((r12 + 8));
        if (al == 0x18) {
            goto label_69;
        }
        if (al == 1) {
            goto label_70;
        }
    }
label_7:
    if ((*((rsp + 8)) & 0x200000) == 0) {
        goto label_71;
    }
label_13:
    *((r15 + 0x48)) = r13;
    rax = *((rsp + 0x18));
    *(r12) = xmm0;
    *((r12 + 8)) = 1;
    goto label_4;
label_8:
    rax = *((rsp + 0x30));
    ecx = *(rax);
    if (ecx != 0) {
        goto label_5;
    }
label_10:
    *((rsp + 0x18)) = 0;
    goto label_6;
label_68:
    if (*((r12 + 8)) != 1) {
        goto label_31;
    }
    if (*(r12) != 0x2c) {
        goto label_31;
    }
    ebx = 0;
label_50:
    *((rsp + 0x20)) = xmm0;
    rax = fcn_00413290 (r15, r12, *((rsp + 8)));
    __asm ("movdqa xmm0, xmmword [rsp + 0x20]");
    *(rsp) = rax;
    if (rax == 0xfffffffffffffffe) {
        goto label_7;
    }
    rax = *(rsp);
    if (rax != -1) {
        if (rax < rbx) {
            goto label_31;
        }
    }
    if (*((r12 + 8)) != 0x18) {
        goto label_31;
    }
    if (*(rsp) != -1) {
        goto label_72;
    }
    eax = 0;
    al = (rbx > 0x7fff) ? 1 : 0;
    if (rax != 0) {
        goto label_73;
    }
label_12:
    rax = fcn_00412be0 (r12, r15, *((rsp + 8)));
    rdi = *((rsp + 0x18));
    rax = (int64_t) eax;
    *((r15 + 0x48)) += rax;
    if (rdi == 0) {
        goto label_8;
    }
    rax = *(rsp);
    rax |= rbx;
    if (rax != 0) {
        goto label_9;
    }
    fcn_004085c0 (rdi, 0x4097d0, 0);
    rax = *((rsp + 0x30));
    esi = *(rax);
    if (esi == 0) {
        goto label_10;
    }
    goto label_11;
label_69:
    rbx = *(rsp);
label_72:
    eax = 0;
    al = (*(rsp) > 0x7fff) ? 1 : 0;
    if (rax == 0) {
        goto label_12;
    }
label_73:
    rax = *((rsp + 0x30));
    *(rax) = 0xf;
    goto label_32;
label_70:
    if (*(r12) == 0x2c) {
        goto label_74;
    }
    if ((*((rsp + 8)) & 0x200000) != 0) {
        goto label_13;
    }
label_31:
    rax = *((rsp + 0x30));
    *(rax) = 0xa;
label_32:
    if (*((rsp + 0x18)) == 0) {
        goto label_5;
    }
    goto label_11;
label_66:
    rbx = r12;
    r14 = r15;
    r12 = *((rsp + 0x38));
    r15 = *((rsp + 0x20));
    rdx = rax;
label_49:
    if (rbx == *(rsp)) {
label_62:
        *((rsp + 0x18)) = rdx;
        goto label_6;
label_59:
        r14 = *((rsp + 0x18));
        *(rsp) = 0xffffffffffffffff;
        ebx = 1;
        rdx = r14;
    }
    *((rsp + 0x20)) = rdx;
    rax = fcn_0040ae70 (r14, *((rsp + 0x10)));
    rdx = *((rsp + 0x20));
    if (rax == 0) {
        goto label_14;
    }
label_51:
    *((rsp + 0x20)) = rdx;
    if (*((rbp + 0x30)) != 0x11) {
        goto label_15;
    }
    goto label_16;
    *((rsp + 0x68)) = 0;
    rax = calloc (0x20, 1);
    rbx = rax;
    *(rsp) = rax;
    rax = calloc (0x50, 1);
    r13 = rax;
    dl = (rbx == 0) ? 1 : 0;
    al = (r13 == 0) ? 1 : 0;
    dl |= al;
    if (dl != 0) {
        goto label_75;
    }
    eax = fcn_00408630 (r12, r15, *((rsp + 8)));
    ebx = eax;
    eax = *((r12 + 8));
    if (al == 2) {
        goto label_76;
    }
    *((rsp + 0x38)) = 0;
    if (al == 0x19) {
        goto label_77;
    }
label_26:
    if (al == 0x15) {
        goto label_78;
    }
label_27:
    *((rsp + 0x20)) = 0;
    rbp = *(rsp);
    r9d = 1;
    r14 = rsp + 0xa0;
    *((rsp + 0x18)) = 0;
label_22:
    r9d &= 1;
    *((rsp + 0x78)) = r14;
    *((rsp + 0x70)) = 3;
    eax = fcn_004129c0 (rsp + 0x70, r15, r12, ebx, *((rsp + 8)));
    if (eax != 0) {
        goto label_30;
    }
    eax = fcn_00408630 (r12, r15, *((rsp + 8)));
    ebx = eax;
    eax = *((rsp + 0x70));
    edx = rax - 2;
    edx &= 0xfffffffd;
    if (edx != 0) {
        edx = *((r12 + 8));
        if (dl == 2) {
            goto label_79;
        }
        if (dl == 0x16) {
            goto label_80;
        }
    }
label_33:
    if (eax > 4) {
        goto label_81;
    }
    /* switch table (5 cases) at 0x419970 */
    rbx = *((rsp + 0x30));
    r8b = (al == 0x21) ? 1 : 0;
    r8d = (int32_t) r8b;
label_18:
    rax = fcn_0040e180 (*((rsp + 0x10)), *((rdi + 0x78)), "alnum", 0x416ab3, r8, rbx);
    edi = *(rbx);
    *((rsp + 0x18)) = rax;
    if (edi == 0) {
        goto label_17;
    }
    if (rax != 0) {
        goto label_17;
    }
    goto label_5;
    rbx = *((rsp + 0x30));
    rsi = *((rdi + 0x78));
    ecx = 0x41900f;
    r8b = (al == 0x23) ? 1 : 0;
    edx = "space";
    r9 = rbx;
    r8d = (int32_t) r8b;
    goto label_18;
    *((rsp + 0x18)) = 0;
    rax = *((rsp + 0x30));
    *(rax) = 5;
    goto label_0;
    rax = *((rsp + 0x10));
    rbx = rax + 0x70;
    rbp = rax + 0x80;
    rax = fcn_0040ad90 (rbx, rbp, 0, 0, r12);
    *((rsp + 0x18)) = rax;
    if (rax == 0) {
        goto label_19;
    }
    rax = *((rsp + 0x10));
    r14 = *((rsp + 0x18));
    if (*((rax + 0xb4)) <= 1) {
        goto label_17;
    }
    do {
        rax = *((r15 + 0x48));
        if (*((r15 + 0x68)) <= rax) {
            goto label_82;
        }
        if (rax == *((r15 + 0x30))) {
            goto label_82;
        }
        rdx = *((r15 + 0x10));
        if (*((rdx + rax*4)) != 0xffffffff) {
            goto label_82;
        }
        rax = fcn_00412be0 (r12, r15, *((rsp + 8)));
        rax = (int64_t) eax;
        *((r15 + 0x48)) += rax;
        rax = fcn_0040ad90 (rbx, rbp, 0, 0, r12);
        r13 = rax;
        *((rsp + 0xc8)) = 0x10;
        rax = fcn_0040ad90 (rbx, rbp, r14, rax, rsp + 0xc0);
        dl = (r13 == 0) ? 1 : 0;
        r14 = rax;
        al = (rax == 0) ? 1 : 0;
        dl |= al;
    } while (dl == 0);
    do {
label_19:
        rax = *((rsp + 0x30));
        *(rax) = 0xc;
        goto label_5;
        rcx = *(r12);
        eax = 1;
        eax <<= cl;
        rcx = *((rsp + 0x10));
        rax = (int64_t) eax;
        if ((*((rcx + 0xa8)) & rax) == 0) {
            goto label_83;
        }
        rbx = *((rsp + 0x10));
        *((rbx + 0xa0)) |= rax;
        rax = fcn_0040ad90 (rbx + 0x70, rbx + 0x80, 0, 0, r12);
        *((rsp + 0x18)) = rax;
    } while (rax == 0);
    *((rbx + 0x98))++;
    *((rbx + 0xb0)) |= 2;
    goto label_17;
    rbx = *((rsp + 0x10));
    rax = fcn_0040ad90 (rbx + 0x70, rbx + 0x80, 0, 0, r12);
    *((rsp + 0x18)) = rax;
    if (rax == 0) {
        goto label_19;
    }
    if (*((rbx + 0xb4)) <= 1) {
        goto label_17;
    }
    *((rbx + 0xb0)) |= 2;
    goto label_17;
    r14d = *(r12);
    if ((r14d & 0x30f) != 0) {
        rax = *((rsp + 0x10));
        eax = *((rax + 0xb0));
        if ((al & 0x10) != 0) {
            goto label_39;
        }
        rcx = *((rsp + 0x10));
        eax |= 0x10;
        *((rcx + 0xb0)) = al;
        if ((al & 8) != 0) {
            goto label_84;
        }
        rsi = 0x3ff000000000000;
        *((rcx + 0xb8)) = rsi;
        rsi = 0x7fffffe87fffffe;
        *((rcx + 0xc0)) = rsi;
        if ((al & 4) == 0) {
            goto label_85;
        }
        xmm0 = 0;
        __asm ("movups xmmword [rcx + 0xc8], xmm0");
        r14d = *(r12);
    }
label_39:
    rax = *((rsp + 0x10));
    r13 = rax + 0x70;
    rbp = rax + 0x80;
    eax = r14 - 0x100;
    if ((eax & 0xfffffeff) != 0) {
        goto label_86;
    }
    if (r14d == 0x100) {
        goto label_87;
    }
    *(r12) = 5;
    rax = fcn_0040ad90 (r13, rbp, 0, 0, r12);
    *(r12) = 0xa;
    rbx = rax;
label_29:
    rax = fcn_0040ad90 (r13, rbp, 0, 0, r12);
    rcx = rax;
    r14 = rax;
    *((rsp + 0xc8)) = 0xa;
    rax = fcn_0040ad90 (r13, rbp, rbx, rcx, rsp + 0xc0);
    dl = (rbx == 0) ? 1 : 0;
    rcx = rax;
    *((rsp + 0x18)) = rax;
    al = (r14 == 0) ? 1 : 0;
    dl |= al;
    if (dl != 0) {
        goto label_19;
    }
    if (rcx == 0) {
        goto label_19;
    }
label_25:
    rax = fcn_00412be0 (r12, r15, *((rsp + 8)));
    rax = (int64_t) eax;
    *((r15 + 0x48)) += rax;
    goto label_0;
label_54:
    if ((*((rsp + 8)) & 0x20000) != 0) {
        goto label_20;
    }
    *((rsp + 0x18)) = 0;
    rax = *((rsp + 0x30));
    *(rax) = 0x10;
    goto label_0;
label_56:
    if (rbx <= 8) {
        goto label_88;
    }
label_21:
    rcx = *((rsp + 0x10));
    *((rsp + 0xc8)) = 0x11;
    rax = fcn_0040ad90 (rcx + 0x70, rcx + 0x80, rax, 0, rsp + 0xc0);
    *((rsp + 0x18)) = rax;
    if (rax == 0) {
        goto label_19;
    }
    *((rax + 0x28)) = rbx;
    goto label_17;
label_88:
    ecx = ebx;
    edx = 1;
    edx <<= cl;
    rcx = *((rsp + 0x10));
    rdx = (int64_t) edx;
    *((rcx + 0xa8)) |= rdx;
    goto label_21;
    eax = fcn_0040d960 (rbp, *((rsp + 0x78)));
    rcx = *((rsp + 0x30));
    *(rcx) = eax;
    if (eax != 0) {
        goto label_24;
    }
    do {
label_23:
        eax = *((r12 + 8));
        if (al == 2) {
            goto label_79;
        }
        if (al == 0x15) {
            goto label_89;
        }
        r9d = 0;
        goto label_22;
        rdx = *((r13 + 0x28));
        rax = *(r13);
        if (rdx == *((rsp + 0x18))) {
            goto label_90;
        }
label_34:
        rcx = rdx + 1;
        *((r13 + 0x28)) = rcx;
        ecx = *((rsp + 0x78));
        *((rax + rdx*4)) = ecx;
    } while (1);
    ecx = *((rsp + 0x78));
    edx = 1;
    rax = rcx;
    rdx <<= cl;
    rax >>= 3;
    eax &= 0x18;
    *((rbp + rax)) |= rdx;
    goto label_23;
    eax = fcn_0040d9b0 (*((r15 + 0x78)), rbp, r13 + 0x18, r13 + 0x48, rsp + 0x78, *((rsp + 0x88)));
    rcx = *((rsp + 0x40));
    *(rcx) = eax;
    if (eax == 0) {
        goto label_23;
    }
label_24:
    free (*(rsp));
    fcn_00409780 (r13);
    rax = *((rsp + 0x30));
    r8d = *(rax);
    if (r8d != 0) {
        goto label_5;
    }
    *((rsp + 0x18)) = 0;
    goto label_17;
    eax = fcn_0040d960 (rbp, *((rsp + 0x78)));
    rcx = *((rsp + 0x30));
    *(rcx) = eax;
    if (eax == 0) {
        goto label_23;
    }
    goto label_24;
label_86:
    rax = fcn_0040ad90 (r13, rbp, 0, 0, r12);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        goto label_25;
    }
    goto label_19;
label_77:
    *((r13 + 0x20)) |= 1;
    if ((*((rsp + 8)) & 0x100) != 0) {
        rax = *(rsp);
        *(rax) |= 0x400;
    }
    rax = (int64_t) ebx;
    *((r15 + 0x48)) += rax;
    eax = fcn_00408630 (r12, r15, *((rsp + 8)));
    ebx = eax;
    eax = *((r12 + 8));
    if (al == 2) {
        goto label_76;
    }
    *((rsp + 0x38)) = 1;
    goto label_26;
label_78:
    *((r12 + 8)) = 1;
    goto label_27;
    do {
label_79:
        rax = *((rsp + 0x30));
        *(rax) = 7;
        goto label_24;
label_53:
        rdx = rcx;
        *(rsp) = r8;
        rbx = rcx;
        rax = fcn_00412be0 (r12, r15, rdx);
        rax = (int64_t) eax;
        *((r15 + 0x48)) += rax;
        rax = fcn_00413350 (r15, rbp, r12, rbx, *(rsp), *((rsp + 0x30)));
        goto label_28;
        *((rsp + 0x18)) = rax;
        goto label_0;
label_30:
        rcx = *((rsp + 0x30));
        *(rcx) = eax;
        goto label_24;
label_82:
        *((rsp + 0x18)) = r14;
        goto label_17;
label_87:
        *(r12) = 6;
        rax = fcn_0040ad90 (r13, rbp, 0, 0, r12);
        *(r12) = 9;
        rbx = rax;
        goto label_29;
label_80:
        rax = (int64_t) ebx;
        *((r15 + 0x48)) += rax;
        r10 = *((rsp + 8));
        eax = fcn_00408630 (rsp + 0x90, rsi, r10);
        edx = *((rsp + 0x98));
    } while (dl == 2);
    if (dl == 0x15) {
        goto label_91;
    }
    rcx = rsp + 0xc0;
    r9d = 1;
    *((rsp + 0x80)) = 3;
    *((rsp + 0x88)) = rcx;
    eax = fcn_004129c0 (rsp + 0x80, rsi, rsp + 0x90, eax, r10);
    if (eax != 0) {
        goto label_30;
    }
    eax = fcn_00408630 (r12, r15, *((rsp + 8)));
    r8d = *((rsp + 0x70));
    edx = 0;
    ebx = eax;
    rax = *((rsp + 0x10));
    eax = r8 - 2;
    if (*((rax + 0xb4)) >= 2) {
        rdx = r13;
    }
    eax &= 0xfffffffd;
    if (eax == 0) {
        goto label_92;
    }
    esi = *((rsp + 0x80));
    eax = rsi - 2;
    eax &= 0xfffffffd;
    if (eax == 0) {
        goto label_92;
    }
    *(rsp + 0x40) = (r8d == 3) ? 1 : 0;
    if (r8d == 3) {
        goto label_93;
    }
    if (esi == 3) {
        goto label_94;
    }
    if (r8d != 0) {
        goto label_95;
    }
label_45:
    edi = *((rsp + 0x78));
label_47:
    if (esi == 0) {
        goto label_96;
    }
    ecx = 0;
    if (esi == 3) {
        r9 = *((rsp + 0x88));
label_44:
        ecx = *(r9);
    }
label_42:
    if (r8d == 0) {
        goto label_97;
    }
    r8d = *((rsp + 0x78));
    if (*((rsp + 0x40)) != 0) {
        goto label_97;
    }
label_41:
    if (esi == 0) {
        goto label_98;
    }
    r9d = *((rsp + 0x88));
    if (esi == 3) {
        goto label_98;
    }
label_36:
    if (r8d == 0xffffffff) {
        goto label_43;
    }
    if (r9d == 0xffffffff) {
        goto label_43;
    }
    if ((*((rsp + 8)) & 0x10000) != 0) {
        if (r8d > r9d) {
            goto label_92;
        }
    }
    if (rdx != 0) {
        rax = *((rdx + 0x40));
        rcx = *((rdx + 8));
        if (rax == *((rsp + 0x20))) {
            goto label_99;
        }
label_48:
        *((rcx + rax*4)) = r8d;
        rcx = *((rdx + 0x10));
        rsi = rax + 1;
        *((rdx + 0x40)) = rsi;
        *((rcx + rax*4)) = r9d;
    }
    eax = 0;
    esi = 1;
    do {
        ecx = eax;
        if (r8d <= eax) {
            if (r9d < eax) {
                goto label_100;
            }
            rdx = rax;
            rdi = rsi;
            rdx >>= 6;
            rdi <<= cl;
            *((rbp + rdx*8)) |= rdi;
        }
label_100:
        rax++;
    } while (rax != 0x100);
    rax = *((rsp + 0x30));
    *(rax) = 0;
    goto label_23;
label_76:
    rax = *((rsp + 0x30));
    *(rax) = 2;
    goto label_24;
label_71:
    if (*((r12 + 8)) != 2) {
        goto label_31;
    }
    rax = *((rsp + 0x30));
    *(rax) = 9;
    goto label_32;
label_75:
    free (*(rsp));
    free (r13);
    goto label_19;
label_83:
    *((rsp + 0x18)) = 0;
    rax = *((rsp + 0x30));
    *(rax) = 6;
    goto label_0;
label_91:
    eax = ebx;
    eax = -eax;
    rax = (int64_t) eax;
    *((r15 + 0x48)) += rax;
    eax = *((rsp + 0x70));
    *((r12 + 8)) = 1;
    goto label_33;
label_90:
    rcx = *((rsp + 0x18));
    rcx = rcx + rcx + 1;
    *((rsp + 0x18)) = rcx;
    rax = realloc (rax, rcx*4);
    if (rax == 0) {
        goto label_35;
    }
    *(r13) = rax;
    rdx = *((r13 + 0x28));
    goto label_34;
label_89:
    rax = (int64_t) ebx;
    *((r15 + 0x48)) += rax;
    if (*((rsp + 0x38)) == 0) {
        goto label_101;
    }
    rcx = *(rsp);
    rax = *(rsp);
    rdx = rcx + 0x20;
    do {
        rax = ~rax;
        rax += 8;
    } while (rdx != rax);
label_101:
    rax = *((rsp + 0x10));
    edx = *((rax + 0xb4));
    if (edx <= 1) {
        goto label_102;
    }
    rax = *((rsp + 0x10));
    rsi = *(rsp);
    rcx = *((rax + 0x78));
    eax = 0;
    do {
        rdi = *((rcx + rax));
        *((rsi + rax)) &= rdi;
        rax += 8;
    } while (rax != 0x20);
label_102:
    if (*((r13 + 0x28)) != 0) {
        goto label_103;
    }
    if (*((r13 + 0x30)) != 0) {
        goto label_103;
    }
    if (*((r13 + 0x38)) != 0) {
        goto label_103;
    }
    if (*((r13 + 0x40)) != 0) {
        goto label_103;
    }
    edx--;
    if (edx > 0) {
        if (*((r13 + 0x48)) != 0) {
            goto label_103;
        }
        if ((*((r13 + 0x20)) & 1) != 0) {
            goto label_103;
        }
    }
    fcn_00409780 (r13);
    rax = *(rsp);
    *((rsp + 0xa8)) = 3;
    *((rsp + 0xa0)) = rax;
    rax = *((rsp + 0x10));
    rax = fcn_0040ad90 (rax + 0x70, rax + 0x80, 0, 0, r14);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        goto label_17;
    }
    do {
label_35:
        rax = *((rsp + 0x30));
        *(rax) = 0xc;
        goto label_24;
label_103:
        rax = *((rsp + 0x10));
        *((rax + 0xb0)) |= 2;
        rbp = rax + 0x70;
        rbx = rax + 0x80;
        *((rsp + 0xa8)) = 6;
        *((rsp + 0xa0)) = r13;
        rax = fcn_0040ad90 (rbp, rbx, 0, 0, r14);
        rcx = *(rsp);
        rsi = rax;
        *((rsp + 0x18)) = rax;
        rdx = rcx + 0x20;
        rax = rcx;
    } while (rsi == 0);
    do {
        if (*(rax) != 0) {
            goto label_104;
        }
        rax += 8;
    } while (rdx != rax);
    free (*(rsp));
    goto label_17;
label_104:
    rax = *(rsp);
    *((rsp + 0xa8)) = 3;
    *((rsp + 0xa0)) = rax;
    rax = fcn_0040ad90 (rbp, rbx, 0, 0, r14);
    if (rax == 0) {
        goto label_35;
    }
    *((rsp + 0xc8)) = 0xa;
    rax = fcn_0040ad90 (rbp, rbx, rax, *((rsp + 0x18)), rsp + 0xc0);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        goto label_17;
    }
    goto label_35;
label_46:
    r9 = *((rsp + 0x88));
    rcx = r10;
    rdi = r9;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rax--;
    if (rax <= 1) {
        goto label_105;
    }
label_43:
    rax = *((rsp + 0x30));
    *(rax) = 3;
    goto label_24;
label_98:
    rsi = rdx;
    *((rsp + 0x48)) = r8d;
    *((rsp + 0x40)) = rdx;
    eax = fcn_00408d40 (ecx);
    r8d = *((rsp + 0x48));
    rdx = *((rsp + 0x40));
    r9d = eax;
    goto label_36;
label_85:
    ebx = 0x80;
label_40:
    rax = ctype_b_loc ();
    rcx = *((rsp + 0x10));
    rdx = (int64_t) ebp;
    r9d = rbx + 0x100;
    rax = *(rax);
    ebp <<= 6;
    r8d = 1;
    rsi = rcx + rdx*8;
    rdx = (int64_t) ebx;
    r9d -= ebp;
    rdi = rax + rdx*2;
label_38:
    eax = 0;
    while ((*((rdi + rax*2)) & 8) == 0) {
        edx = rbx + rax;
        if (edx == 0x5f) {
            goto label_106;
        }
label_37:
        rax++;
        if (rax == 0x40) {
            goto label_107;
        }
        ecx = eax;
    }
label_106:
    rdx = r8;
    rdx <<= cl;
    *((rsi + 0xb8)) |= rdx;
    goto label_37;
label_107:
    ebx += 0x40;
    rsi += 8;
    rdi -= 0xffffffffffffff80;
    if (r9d != ebx) {
        goto label_38;
    }
    goto label_39;
label_84:
    ebx = 0;
    ebp = 0;
    goto label_40;
label_97:
    rsi = rdx;
    *((rsp + 0x48)) = ecx;
    *((rsp + 0x40)) = rdx;
    eax = fcn_00408d40 (rdi);
    esi = *((rsp + 0x80));
    ecx = *((rsp + 0x48));
    r8d = eax;
    rdx = *((rsp + 0x40));
    goto label_41;
label_95:
    edi = 0;
    ecx = 0;
    if (esi != 0) {
        goto label_42;
    }
label_96:
    ecx = *((rsp + 0x88));
    goto label_42;
label_92:
    rax = *((rsp + 0x30));
    *(rax) = 0xb;
    goto label_24;
label_94:
    r9 = *((rsp + 0x88));
    eax = 0;
    rcx |= 0xffffffffffffffff;
    rdi = r9;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rax--;
    if (rax > 1) {
        goto label_43;
    }
    edi = 0;
    if (r8d != 0) {
        goto label_44;
    }
    goto label_45;
label_93:
    r11 = *((rsp + 0x78));
    r10 |= 0xffffffffffffffff;
    eax = 0;
    rcx = r10;
    rdi = r11;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rcx += r10;
    if (rcx > 1) {
        goto label_43;
    }
    if (esi == 3) {
        goto label_46;
    }
label_105:
    edi = *(r11);
    goto label_47;
label_99:
    rax = *((rsp + 0x20));
    *((rsp + 0x5c)) = r9d;
    *((rsp + 0x58)) = r8d;
    rax += rax;
    *((rsp + 0x40)) = rdx;
    rax++;
    r11 = rax*4;
    *((rsp + 0x20)) = rax;
    rsi = r11;
    *((rsp + 0x50)) = r11;
    rax = realloc (rcx, rsi);
    rdx = *((rsp + 0x40));
    r11 = *((rsp + 0x50));
    *((rsp + 0x48)) = rax;
    rax = realloc (*((rdx + 0x10)), r11);
    rcx = *((rsp + 0x48));
    if (rcx != 0) {
        rdx = *((rsp + 0x40));
        r8d = *((rsp + 0x58));
        r9d = *((rsp + 0x5c));
        if (rax == 0) {
            goto label_108;
        }
        *((rdx + 0x10)) = rax;
        rax = *((rdx + 0x40));
        *((rdx + 8)) = rcx;
        goto label_48;
label_81:
        rax = assert_fail (0x41905f, "lib/regcomp.c", 0xcf3, "parse_bracket_exp");
    }
label_108:
    *((rsp + 0x18)) = rax;
    free (rcx);
    rax = *((rsp + 0x18));
    free (*((rsp + 0x18)));
    rax = *((rsp + 0x30));
    *(rax) = 0xc;
    goto label_24;
label_65:
    r14 = *((rsp + 0x18));
    rdx = *((rsp + 0x18));
    goto label_49;
label_67:
    rbp = *((rsp + 0x18));
    *(rsp) = 1;
    *((rsp + 0x20)) = 0;
    goto label_16;
label_74:
    rbx = *(rsp);
    goto label_50;
label_64:
    rbp = *((rsp + 0x18));
    edx = 0;
    goto label_51;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x414840 */
#include <stdint.h>
 
int64_t fcn_00414840 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15 = rcx;
    r13 = rsi;
    r12 = r8;
    rbx = r9;
    rax = *(rsi);
    *((rsp + 8)) = rdi;
    *((rsp + 0x18)) = rax;
    rax = fcn_00413350 (rdi, rsi, rdx, rcx, r8, r9);
    edx = *(rbx);
    r14 = rax;
    if (edx != 0) {
        if (rax == 0) {
            goto label_2;
        }
    }
label_0:
    eax = *((rbp + 8));
    edx = eax;
    edx &= 0xfffffff7;
    if (dl == 2) {
        goto label_1;
    }
    do {
        if (al == 9) {
            if (r12 != 0) {
                goto label_1;
            }
        }
        rax = fcn_00413350 (*((rsp + 8)), r13, rbp, r15, r12, rbx);
        r9 = rax;
        eax = *(rbx);
        if (eax != 0) {
            if (r9 == 0) {
                goto label_3;
            }
        }
        if (r14 == 0) {
            goto label_4;
        }
        if (r9 == 0) {
            goto label_4;
        }
        rax = *((rsp + 0x18));
        rcx = r9;
        *((rsp + 0x10)) = r9;
        *((rsp + 0x28)) = 0x10;
        rax = fcn_0040ad90 (rax + 0x70, rax + 0x80, r14, rcx, rsp + 0x20);
        r9 = *((rsp + 0x10));
        if (rax == 0) {
            goto label_5;
        }
        r14 = rax;
        eax = *((rbp + 8));
        edx = eax;
        edx &= 0xfffffff7;
    } while (dl != 2);
    do {
label_1:
        rax = r14;
        return rax;
label_4:
        if (r14 == 0) {
            r14 = r9;
        }
        goto label_0;
label_3:
        if (r14 != 0) {
            fcn_004085c0 (r14, 0x4097d0, 0);
        }
label_2:
        r14d = 0;
    } while (1);
label_5:
    fcn_004085c0 (r9, 0x4097d0, 0);
    fcn_004085c0 (r14, 0x4097d0, 0);
    r14d = 0;
    *(rbx) = 0xc;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x414980 */
#include <stdint.h>
 
int64_t fcn_00414980 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r14 = r9;
    r13 = rcx;
    r12 = rdi;
    rbx = *(rsi);
    *((rsp + 0x18)) = rsi;
    rax = *((rbx + 0xa8));
    *(rsp) = r8;
    *((rsp + 0x10)) = rax;
    rax = fcn_00414840 (rdi, rsi, rdx, rcx, r8, r9);
    edx = *(r14);
    r15 = rax;
    if (edx == 0) {
        goto label_4;
    }
    if (rax != 0) {
        goto label_4;
    }
label_3:
    r15d = 0;
    do {
label_2:
        rax = r15;
        return rax;
label_0:
        if (al == 9) {
            if (*(rsp) != 0) {
                goto label_5;
            }
        }
        rax = *((rbx + 0xa8));
        *((rsp + 8)) = rax;
        rax = *((rsp + 0x10));
        *((rbx + 0xa8)) = rax;
        rax = fcn_00414840 (r12, *((rsp + 0x18)), rbp, r13, *(rsp), r14);
        rcx = rax;
        eax = *(r14);
        if (eax != 0) {
            if (rcx == 0) {
                goto label_6;
            }
        }
        rax = *((rsp + 8));
        *((rbx + 0xa8)) |= rax;
label_1:
        *((rsp + 0x28)) = 0xa;
        rax = fcn_0040ad90 (rbx + 0x70, rbx + 0x80, r15, rcx, rsp + 0x20);
        r15 = rax;
        if (rax == 0) {
            goto label_7;
        }
INVALID_JUMP;
    } while (*((rbp + 8)) != 0xa);
    rdx |= 0x800000;
    rax = fcn_00412be0 (rbp, r12, r13);
    rax = (int64_t) eax;
    *((r12 + 0x48)) += rax;
    eax = *((rbp + 8));
    edx = eax;
    edx &= 0xfffffff7;
    if (dl != 2) {
        goto label_0;
    }
label_5:
    ecx = 0;
    goto label_1;
label_7:
    *(r14) = 0xc;
    goto label_2;
label_6:
    if (r15 == 0) {
        goto label_3;
    }
    fcn_004085c0 (r15, 0x4097d0, 0);
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x414ae0 */
#include <stdint.h>
 
uint64_t fcn_00414ae0 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    size_t size;
    size_t var_10h;
    int64_t var_18h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_48h;
    void * ptr;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    uint32_t var_b8h;
    int64_t var_c0h;
    int64_t var_c8h;
    int64_t var_d8h;
    int64_t var_e8h;
    int64_t var_e9h;
    int64_t var_eah;
    int64_t var_ebh;
    int64_t var_f0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
label_18:
    eax = abort ();
    r14 = rsi;
    r13 = rcx;
    r12 = rdx;
    *((rdi + 0x38)) &= 0x90;
    *((rsp + 0x2c)) = 0;
    rbx = *(rdi);
    *((rdi + 0x18)) = rcx;
    *((rdi + 0x10)) = 0;
    *((rdi + 0x30)) = 0;
    if (*((rdi + 8)) <= 0xe7) {
        goto label_32;
    }
label_21:
    rdi = rbx + 8;
    rcx = rbx;
    eax = 0;
    *((rbp + 0x10)) = 0xe8;
    rdi &= 0xfffffffffffffff8;
    *(rbx) = 0;
    *((rbx + 0xe0)) = 0;
    rcx -= rdi;
    ecx += 0xe8;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    rax = 0x555555555555554;
    *((rbx + 0x80)) = 0xf;
    if (r12 > rax) {
        goto label_10;
    }
    rax = r12 + 1;
    *((rbx + 8)) = rax;
    rdi = rax;
    rdi <<= 4;
    *((rsp + 0x10)) = rax;
    rax = malloc (rdi);
    *(rbx) = rax;
    if (r12 == 0) {
        goto label_33;
    }
    esi = 1;
    do {
        rsi += rsi;
    } while (r12 >= rsi);
    r15 = rsi - 1;
label_22:
    rax = calloc (0x18, rsi);
    *((rbx + 0x88)) = r15;
    *((rbx + 0x40)) = rax;
    eax = ctype_get_mb_cur_max ();
    *((rbx + 0xb4)) = eax;
    rax = nl_langinfo (0xe);
    edx = *(rax);
    edx &= 0xffffffdf;
    if (dl == 0x55) {
        edx = *((rax + 1));
        edx &= 0xffffffdf;
        if (dl != 0x54) {
            goto label_34;
        }
        edx = *((rax + 2));
        edx &= 0xffffffdf;
        if (dl != 0x46) {
            goto label_34;
        }
        edx = 0;
        edi = 0x4190b6;
        ecx = 2;
        dl = (*((rax + 3)) == 0x2d) ? 1 : 0;
        rsi = rax + rdx + 3;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (*((rax + 3)) > 0x2d) ? 1 : 0;
        if (al != 0) {
            goto label_34;
        }
        *((rbx + 0xb0)) |= 4;
    }
label_34:
    eax = *((rbx + 0xb0));
    edx = eax;
    edx &= 0xfffffff7;
    *((rbx + 0xb0)) = dl;
    if (*((rbx + 0xb4)) > 1) {
        if ((al & 4) == 0) {
            goto label_35;
        }
        *((rbx + 0x78)) = 0x419a80;
    }
label_15:
    if (*(rbx) == 0) {
        goto label_10;
    }
    if (*((rbx + 0x40)) == 0) {
        goto label_10;
    }
    rsi = rsp + 0x68;
    eax = 0;
    ecx = 0x12;
    rdx = *((rbp + 0x28));
    rdi = rsi;
    *((rsp + 0x2c)) = 0;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    rax = r13;
    *((rsp + 0xd8)) = rdx;
    edi = *((rbx + 0xb4));
    eax &= segment.LOAD0;
    *((rsp + 0x60)) = r14;
    *(rsp) = rax;
    *(rsp + 0xe8) = (eax != 0) ? 1 : 0;
    rdx |= rax;
    eax = *((rbx + 0xb0));
    sil = (rdx != 0) ? 1 : 0;
    *((rsp + 0xb8)) = r12;
    r15 = rdx;
    ecx = eax;
    al >>= 3;
    *((rsp + 0xb0)) = r12;
    cl >>= 2;
    eax &= 1;
    *((rsp + 0xeb)) = sil;
    ecx &= 1;
    *((rsp + 0xf0)) = edi;
    *((rsp + 0xe9)) = cl;
    *((rsp + 0xea)) = al;
    *((rsp + 0xc8)) = r12;
    *((rsp + 0xc0)) = r12;
    if (r12 != 0) {
        goto label_36;
    }
label_4:
    if (sil != 0) {
        r14 = *((rsp + 0x68));
    }
    *((rsp + 0x68)) = r14;
    if (*(rsp) == 0) {
        goto label_37;
    }
    if (edi <= 1) {
        goto label_38;
    }
label_0:
    eax = fcn_00408fa0 (rsp + 0x60);
    if (eax != 0) {
        goto label_39;
    }
    if (r12 <= *((rsp + 0x98))) {
        goto label_40;
    }
    rsi = *((rsp + 0xa0));
    rax = *((rbx + 0xb4));
    rax += *((rsp + 0x90));
    if (rsi > rax) {
        goto label_40;
    }
    rsi += rsi;
    eax = fcn_00408a00 (rsp + 0x60, rsi);
    do {
    } while (rcx != 0);
    if (eax == 0) {
        goto label_0;
    }
    goto label_39;
label_37:
    if (edi > 1) {
        goto label_41;
    }
    rcx = *((rsp + 0xa0));
    if (r15 == 0) {
        goto label_30;
    }
    rax = *((rsp + 0x90));
    if (*((rsp + 0xb8)) <= rcx) {
        rcx = *((rsp + 0xb8));
    }
    if (rcx > rax) {
        goto label_42;
    }
    goto label_43;
    do {
        r14 = *((rsp + 0x68));
label_42:
        rdx = *((rsp + 0x60));
        rsi = *((rsp + 0xd8));
        rdx += rax;
        rdx += *((rsp + 0x88));
        edx = *(rdx);
        edx = *((rsi + rdx));
        *((r14 + rax)) = dl;
        rax++;
    } while (rcx != rax);
label_30:
    *((rsp + 0x90)) = rcx;
    *((rsp + 0x98)) = rcx;
    *((rsp + 0x2c)) = 0;
label_16:
    r12 = *(rbp);
    *((rbp + 0x30)) = 0;
    rdx = r13;
    rdx |= 0x800000;
    *((r12 + 0xd8)) = r13;
    rax = fcn_00412be0 (rsp + 0x30, rsp + 0x60, rdx);
    rax = (int64_t) eax;
    rax = fcn_00414980 (rsp + 0x60, rbp, rsp + 0x30, r13, 0, rsp + 0x2c);
    ecx = *((rsp + 0x2c));
    if (ecx != 0) {
        goto label_44;
    }
    r15 = r12 + 0x70;
    *((rsp + 8)) = rax;
    r13 = r12 + 0x80;
    r12 = rsp + 0x40;
    *((rsp + 0x48)) = 2;
    rax = fcn_0040ad90 (r15, r13, 0, 0, r12);
    r9 = *((rsp + 8));
    r14 = rax;
    rdx = rax;
    if (r9 != 0) {
label_25:
        *((rsp + 0x48)) = 0x10;
        rax = fcn_0040ad90 (r15, r13, r9, r14, r12);
        rdx = r14;
        r14 = rax;
    }
    r15 = *(rbp);
    dl = (rdx == 0) ? 1 : 0;
    al = (r14 == 0) ? 1 : 0;
    dl |= al;
    if (dl != 0) {
        goto label_45;
    }
    r13 = *((r15 + 8));
    *((rbx + 0x68)) = r14;
    rdx = r13*8;
    r13 *= 3;
    rdi = rdx;
    *((rsp + 8)) = rdx;
    r13 <<= 3;
    rax = malloc (rdi);
    rdx = *((rsp + 8));
    *((r15 + 0x18)) = rax;
    r14 = rax;
    rax = malloc (rdx);
    *((r15 + 0x20)) = rax;
    *((rsp + 0x10)) = rax;
    rax = malloc (r13);
    *((r15 + 0x28)) = rax;
    *((rsp + 8)) = rax;
    rax = malloc (r13);
    rcx = *((rsp + 8));
    rdx = *((rsp + 0x10));
    *((r15 + 0x30)) = rax;
    if (r14 == 0) {
        goto label_46;
    }
    if (rdx == 0) {
        goto label_46;
    }
    if (rcx == 0) {
        goto label_46;
    }
    if (rax == 0) {
        goto label_46;
    }
    r13 = *((rbp + 0x30));
    rax = malloc (r13*8);
    *((r15 + 0xe0)) = rax;
    if (rax == 0) {
        goto label_47;
    }
    edx = 0;
    if (r13 == 0) {
        goto label_48;
    }
    do {
        *((rax + rdx*8)) = rdx;
        rdx++;
    } while (rdx != r13);
label_48:
    fcn_0040a600 (*((r15 + 0x68)), 0x40a2c0, r15);
    rdx = *((rbp + 0x30));
    if (rdx == 0) {
        goto label_49;
    }
    rdi = *((r15 + 0xe0));
    rax = *(rdi);
    if (rax == 0) {
        goto label_50;
    }
    goto label_47;
    do {
        if (*((rdi + rax*8)) != rax) {
            goto label_47;
        }
label_50:
        rax++;
    } while (rax != rdx);
label_31:
    free (rdi);
    *((r15 + 0xe0)) = 0;
label_47:
    eax = fcn_004085c0 (*((r15 + 0x68)), 0x40b140, rbp);
    if (eax != 0) {
        goto label_39;
    }
    eax = fcn_004085c0 (*((r15 + 0x68)), 0x40d670, r15);
    if (eax != 0) {
        goto label_39;
    }
    fcn_0040a600 (*((r15 + 0x68)), 0x40a350, r15);
    eax = fcn_0040a600 (*((r15 + 0x68)), 0x409e50, r15);
    if (eax != 0) {
        goto label_39;
    }
    r13d = 0;
    r14d = 0;
label_2:
    if (*((r15 + 0x10)) == r14) {
        goto label_51;
    }
    do {
label_1:
        r9 = r14 * 3;
        rax = *((r15 + 0x30));
        r9 <<= 3;
        if (*((rax + r9 + 8)) == 0) {
            goto label_52;
        }
        r14++;
    } while (*((r15 + 0x10)) != r14);
label_51:
    if (r13b == 0) {
        goto label_53;
    }
label_3:
    r13d = 0;
    r14d = 0;
    goto label_1;
label_52:
    *((rsp + 8)) = r9;
    eax = fcn_0040a830 (r12, r15, r14, 1);
    if (eax != 0) {
        goto label_39;
    }
    rax = *((r15 + 0x30));
    r9 = *((rsp + 8));
    r14++;
    if (*((rax + r9 + 8)) != 0) {
        goto label_2;
    }
    r13d = 1;
    free (*((rsp + 0x50)));
    if (*((r15 + 0x10)) != r14) {
        goto label_1;
    }
    goto label_3;
label_36:
    eax = fcn_00408a00 (rsp + 0x60, *((rsp + 0x10)));
    if (eax != 0) {
        goto label_39;
    }
    esi = *((rsp + 0xeb));
    edi = *((rbx + 0xb4));
    goto label_4;
label_53:
    if ((*((rbp + 0x38)) & 0x10) != 0) {
        goto label_54;
    }
    if (*((rbp + 0x30)) == 0) {
        goto label_54;
    }
    if ((*((r15 + 0xb0)) & 1) == 0) {
        goto label_54;
    }
label_5:
    rdi <<= 3;
    rax = malloc (r14 + r14*2);
    *((r15 + 0x38)) = rax;
    if (rax == 0) {
        goto label_55;
    }
    edx = 0;
    if (r14 != 0) {
        goto label_56;
    }
    goto label_24;
    do {
        rax = *((r15 + 0x38));
label_56:
        rcx = rdx * 3;
        xmm0 = 0;
        rdx++;
        rax = rax + rcx*8;
        __asm ("movups xmmword [rax], xmm0");
        *((rax + 0x10)) = 0;
        rax = *((r15 + 0x10));
    } while (rax > rdx);
    if (rax == 0) {
        goto label_24;
    }
    *((rsp + 0x10)) = 0;
    rax = *((r15 + 0x30));
label_23:
    rsi = *((rsp + 0x10));
    r14d = 0;
    rdx = rsi * 3;
    rsi = rdx*8;
    *((rsp + 0x18)) = rsi;
    rsi += rax;
    rcx = *((rsi + 0x10));
    if (*((rsi + 8)) > 0) {
        goto label_57;
    }
    goto label_58;
    do {
        rax = *((r15 + 0x30));
        rsi = *((rsp + 0x18));
        r14++;
        rcx = *((rsp + 8));
        if (r14 >= *((rax + rsi + 8))) {
            goto label_58;
        }
label_57:
        rax = *((rcx + r14*8));
        *((rsp + 8)) = rcx;
        rsi = rax * 3;
        rax = *((r15 + 0x38));
        al = fcn_00408aa0 (rax + rsi*8, *((rsp + 0x10)));
    } while (al != 0);
    eax = 0xc;
label_39:
    *((rsp + 0x2c)) = eax;
    r15 = *(rbp);
    goto label_26;
label_54:
    if (*((r15 + 0x98)) != 0) {
        goto label_5;
    }
label_24:
    eax = *((rbx + 0xb0));
    *((rsp + 0x2c)) = 0;
    al >>= 2;
    dl = (*(rsp) == 0) ? 1 : 0;
    al &= dl;
    if (al != 0) {
        goto label_59;
    }
label_17:
    rax = *((rbx + 0x68));
    rax = *((rax + 0x18));
    rax = *((rax + 0x38));
    rdx = rax * 3;
    *((rbx + 0x90)) = rax;
    rax = *((rbx + 0x30));
    eax = fcn_0040b1c0 (r12, rax + rdx*8);
    r13d = eax;
    *((rsp + 0x30)) = eax;
    if (eax != 0) {
        goto label_20;
    }
    if (*((rbx + 0x98)) <= 0) {
        goto label_60;
    }
    r10 = *((rsp + 0x48));
    if (r10 <= 0) {
        goto label_60;
    }
    r9d = 0;
    r14 = r12 + 0x10;
    while (*((rcx + 8)) != 4) {
label_6:
        r9++;
        if (r10 <= r9) {
            goto label_60;
        }
label_8:
        rdi = *((rsp + 0x50));
        r8 = *(rbx);
        rsi = *((rdi + r9*8));
        rcx = *((rdi + r9*8));
        rcx <<= 4;
        rcx += r8;
    }
    edx = 0;
    goto label_61;
label_7:
    rdx++;
    if (r10 == rdx) {
        goto label_6;
    }
label_61:
    rax = *((rdi + rdx*8));
    rax <<= 4;
    rax += r8;
    if (*((rax + 8)) != 9) {
        goto label_7;
    }
    r11 = *(rcx);
    if (*(rax) != r11) {
        goto label_7;
    }
    rdx = *((rbx + 0x28));
    rax = rsi * 3;
    rax = rdx + rax*8;
    rax = *((rax + 0x10));
    r11 = *(rax);
    rax = fcn_0040a120 (r10, r14, *(rax));
    if (rax != 0) {
        goto label_6;
    }
    rax = *((rbx + 0x30));
    rdx = r11 * 3;
    eax = fcn_0040a660 (r12, rax + rdx*8);
    if (eax != 0) {
        goto label_62;
    }
    r10 = *((rsp + 0x48));
    r9d = 1;
    if (r10 > r9) {
        goto label_8;
    }
label_60:
    rax = fcn_0040b3d0 (rsp + 0x30, rbx, r12, 0);
    *((rbx + 0x48)) = rax;
    if (rax == 0) {
        goto label_63;
    }
    if (*((rax + 0x68)) < 0) {
        goto label_64;
    }
    *((rbx + 0x60)) = rax;
    *((rbx + 0x58)) = rax;
    *((rbx + 0x50)) = rax;
label_19:
    free (*((rsp + 0x50)));
label_20:
    r12 = *(rbp);
    *((rsp + 0x2c)) = r13d;
    rdi = *((r12 + 0x70));
    if (rdi == 0) {
        goto label_65;
    }
    do {
        r13 = *(rdi);
        free (rdi);
        rdi = r13;
    } while (r13 != 0);
label_65:
    *((r12 + 0x70)) = 0;
    *((r12 + 0x80)) = 0xf;
    *((r12 + 0x68)) = 0;
    free (*((r12 + 0x20)));
    *((r12 + 0x20)) = 0;
    fcn_00409d50 (rsp + 0x60);
    eax = *((rsp + 0x2c));
    if (eax != 0) {
        goto label_66;
    }
label_9:
    return rax;
label_46:
    *((rsp + 0x2c)) = 0xc;
label_26:
    rdi = *((r15 + 0x70));
    if (rdi == 0) {
        goto label_67;
    }
    do {
        r12 = *(rdi);
        free (rdi);
        rdi = r12;
    } while (r12 != 0);
label_67:
    *((r15 + 0x70)) = 0;
    *((r15 + 0x80)) = 0xf;
    *((r15 + 0x68)) = 0;
    free (*((r15 + 0x20)));
    *((r15 + 0x20)) = 0;
    fcn_00409d50 (rsp + 0x60);
    do {
label_66:
        fcn_0040d700 (rbx);
        *(rbp) = 0;
        eax = *((rsp + 0x2c));
        *((rbp + 8)) = 0;
        goto label_9;
label_10:
        *((rsp + 0x2c)) = 0xc;
    } while (1);
label_35:
    rax = calloc (0x20, 1);
    *((rbx + 0x78)) = rax;
    if (rax == 0) {
        goto label_10;
    }
    r15d = 0;
label_14:
    edx = r15*8;
    ecx = 0;
    while (eax == 0xffffffff) {
        if (edi == 0) {
label_12:
            *((rbx + 0xb0)) |= 8;
        }
label_11:
        ecx++;
        edx++;
        if (ecx == 0x40) {
            goto label_68;
        }
label_13:
        edi = edx;
        *((rsp + 8)) = ecx;
        *(rsp) = edx;
        eax = btowc (edi);
        edx = *(rsp);
        ecx = *((rsp + 8));
        edi = edx;
        edi &= 0xffffff80;
    }
    r8 = *((rbx + 0x78));
    r9d = 1;
    r9 <<= cl;
    r8 += r15;
    *(r8) |= r9;
    if (edi != 0) {
        goto label_11;
    }
    if (eax != edx) {
        goto label_12;
    }
    ecx++;
    edx++;
    if (ecx != 0x40) {
        goto label_13;
    }
label_68:
    r15 += 8;
    if (r15 != 0x20) {
        goto label_14;
    }
    goto label_15;
label_41:
    fcn_00408df0 (rsp + 0x60);
    *((rsp + 0x2c)) = 0;
    goto label_16;
label_59:
    if (*((rbp + 0x28)) != 0) {
        goto label_17;
    }
    rdi = *((rbx + 0x10));
    if (rdi == 0) {
        goto label_69;
    }
    r8 = *(rbx);
    r9d = 0;
    ecx = 0;
    rdx = r8;
label_27:
    if (*((rdx + 8)) > 0xc) {
        goto label_18;
    }
    esi = *((rdx + 8));
    /* switch table (13 cases) at 0x419998 */
label_64:
    rax = fcn_0040b3d0 (rsp + 0x30, rbx, r12, 1);
    *((rbx + 0x50)) = rax;
    rax = fcn_0040b3d0 (rsp + 0x30, rbx, r12, 2);
    *((rbx + 0x58)) = rax;
    rax = fcn_0040b3d0 (rsp + 0x30, rbx, r12, 6);
    *((rbx + 0x60)) = rax;
    if (*((rbx + 0x50)) == 0) {
        goto label_63;
    }
    if (*((rbx + 0x58)) == 0) {
        goto label_63;
    }
    if (rax != 0) {
        goto label_19;
    }
label_63:
    r13d = *((rsp + 0x30));
    goto label_20;
label_38:
    fcn_00408d70 (rsp + 0x60);
    *((rsp + 0x2c)) = 0;
    goto label_16;
label_32:
    rax = realloc (rbx, 0xe8);
    rbx = rax;
    if (rax == 0) {
        goto label_70;
    }
    *((rbp + 8)) = 0xe8;
    *(rbp) = rax;
    goto label_21;
label_33:
    r15d = 0;
    esi = 1;
    goto label_22;
label_58:
    rsi = *((rsp + 0x10));
    if (*((r15 + 0x10)) > rsi) {
        goto label_23;
    }
    goto label_24;
label_44:
    if (rax == 0) {
        goto label_71;
    }
    r15 = r12 + 0x70;
    *((rsp + 8)) = rax;
    r13 = r12 + 0x80;
    r12 = rsp + 0x40;
    *((rsp + 0x48)) = 2;
    rax = fcn_0040ad90 (r15, r13, 0, 0, r12);
    r9 = *((rsp + 8));
    r14 = rax;
    goto label_25;
label_45:
    *((rsp + 0x2c)) = 0xc;
    *((rbx + 0x68)) = 0;
    goto label_26;
label_40:
    *((rsp + 0x2c)) = 0;
    goto label_16;
    r9d = eax;
label_29:
    rcx++;
    rdx += 0x10;
    if (rcx != rdi) {
        goto label_27;
    }
    r13b |= r9b;
    if (r13b == 0) {
        goto label_69;
    }
    rax = rcx;
    rax <<= 4;
    rax += r8;
    while (dl != 1) {
        if (dl == 5) {
            *((r8 + 8)) = 7;
        }
label_28:
        r8 += 0x10;
        if (rax == r8) {
            goto label_72;
        }
        edx = *((r8 + 8));
    }
    if (*(r8) >= 0) {
        goto label_28;
    }
    *((r8 + 0xa)) &= 0xdf;
    goto label_28;
    __asm ("cmovs r13d, eax");
    goto label_29;
    esi = *(rdx);
    if (esi == 0x20) {
        goto label_29;
    }
    if (esi <= 0x20) {
        goto label_73;
    }
    if (esi == 0x40) {
        goto label_29;
    }
    if (esi == 0x80) {
        goto label_29;
    }
    goto label_17;
    rsi = *(rdx);
    if (*((rsi + 0x10)) != 0) {
        goto label_17;
    }
    if (*((rsi + 0x18)) == 0) {
        goto label_29;
    }
    goto label_17;
label_62:
    r13d = eax;
    goto label_20;
label_73:
    if (esi == 0x10) {
        goto label_29;
    }
    goto label_17;
label_43:
    rcx = rax;
    goto label_30;
label_49:
    rdi = *((r15 + 0xe0));
    goto label_31;
label_55:
    *((rsp + 0x2c)) = 0xc;
    r15 = *(rbp);
    goto label_26;
label_70:
    eax = 0xc;
    goto label_9;
label_71:
    *((rbx + 0x68)) = 0;
    r15 = *(rbp);
    goto label_26;
label_69:
    r9d = 0;
label_72:
    edx = *((rbx + 0xb0));
    *((rbx + 0xb4)) = 1;
    al = (*((rbx + 0x98)) > 0) ? 1 : 0;
    eax |= r9d;
    edx &= 0xfffffff9;
    eax &= 1;
    eax += eax;
    eax |= edx;
    *((rbx + 0xb0)) = al;
    goto label_17;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x415890 */
#include <stdint.h>
 
int64_t fcn_00415890 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = rdi;
    rax = rcx;
    rax >>= 0x19;
    eax &= 1;
    eax <<= 4;
    edx = eax;
    eax = *((rdi + 0x38));
    eax &= 0xffffffef;
    eax |= edx;
    eax |= 0xffffff80;
    *((rdi + 0x38)) = al;
    eax = fcn_00414ae0 (rdx, r8, rsi, *(0x0061d648));
    if (eax != 0) {
        rax = (int64_t) eax;
        edx = 5;
        edi = 0;
        rsi = *((rax*8 + 0x419aa0));
        rsi += str_Success;
invalid_funccall(); //        void (*0x401b50)() ();
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x415910 */
#include <stdint.h>
 
int64_t fcn_00415910 (int64_t arg1, int64_t arg5) {
    rdi = arg1;
    r8 = arg5;
    eax = 0;
    rbp = *((rdi + 0x20));
    rbx = rdi;
    r12 = *(rdi);
    rdi = rbp + 8;
    rcx = rbp;
    *(rbp) = 0;
    *((rbp + 0xf8)) = 0;
    rdi &= 0xfffffffffffffff8;
    rcx -= rdi;
    ecx += 0x100;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    rsi += 0x10;
    fcn_0040e3c0 (rbx, *((r12 + 0x48)), rsi + 0x18, rbp, r8);
    rax = *((r12 + 0x50));
    if (*((r12 + 0x48)) != rax) {
        fcn_0040e3c0 (rbx, rax + 0x10, rax + 0x18, rbp, r8);
        rax = *((r12 + 0x48));
    }
    rsi = *((r12 + 0x58));
    if (rsi != rax) {
        rsi += 0x10;
        fcn_0040e3c0 (rbx, rsi, rsi + 0x18, rbp, r8);
        rax = *((r12 + 0x48));
    }
    rsi = *((r12 + 0x60));
    if (rsi != rax) {
        rsi += 0x10;
        eax = fcn_0040e3c0 (rbx, rsi, rsi + 0x18, rbp, r8);
    }
    *((rbx + 0x38)) |= 8;
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4159e0 */
#include <stdint.h>
 
int64_t fcn_004159e0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, size_t * arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    size_t * size;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_28h;
    int64_t var_2ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = r8;
    r8 += rcx;
    ebx = *((rsp + 0x78));
    r12 = *((rsp + 0x70));
    *((rsp + 0x28)) = ebx;
    if (rcx < 0) {
        goto label_11;
    }
    if (rcx > rdx) {
        goto label_11;
    }
    rbx = rcx;
    *((rsp + 8)) = rsi;
    r15 = rdi;
    if (r8 > rdx) {
        goto label_12;
    }
    if (rax >= 0) {
        if (rcx > r8) {
            goto label_12;
        }
    }
    if (r8 < 0) {
        goto label_13;
    }
    if (rax < 0) {
        if (rbx <= r8) {
            goto label_13;
        }
    }
label_6:
    eax = *((r15 + 0x38));
    ecx = eax;
    cl >>= 5;
    esi = ecx;
    esi &= 3;
    *((rsp + 0x2c)) = esi;
    if (r8 > rbx) {
        if (*((r15 + 0x20)) == 0) {
            goto label_5;
        }
        if ((al & 8) == 0) {
            goto label_14;
        }
    }
label_5:
    if ((al & 0x10) != 0) {
        goto label_15;
    }
    if (r12 == 0) {
        goto label_15;
    }
    eax &= 6;
    rcx = *((r15 + 0x30));
    if (al == 4) {
        goto label_16;
    }
label_2:
    r14 = rcx + 1;
    r13 = r14;
label_3:
    rdi <<= 4;
label_4:
    *((rsp + 0x20)) = r9;
    *((rsp + 0x18)) = rdx;
    *((rsp + 0x10)) = r8;
    rax = malloc (r14);
    if (rax == 0) {
        goto label_17;
    }
    eax = *((rsp + 0x34));
    eax = fcn_00410a30 (r15, *((rsp + 0x28)), *((rsp + 0x38)), rbx, *((rsp + 0x30)), *((rsp + 0x40)));
    if (eax != 0) {
        r12 = 0xffffffffffffffff;
        if (eax != 1) {
label_0:
            r12 = 0xfffffffffffffffe;
        }
label_1:
        free (rbp);
label_8:
        rax = r12;
        return rax;
    }
    if (r12 == 0) {
        goto label_18;
    }
    eax = *((r15 + 0x38));
    rdx = r13 + 1;
    al >>= 1;
    eax &= 3;
    if (eax == 0) {
        goto label_19;
    }
    if (eax == 1) {
        goto label_20;
    }
    if (eax != 2) {
        goto label_21;
    }
    if (r14 > *(r12)) {
        goto label_22;
    }
    r9d = 2;
label_7:
    if (r13 <= 0) {
        goto label_23;
    }
    r8 = *((r12 + 8));
    rdi = *((r12 + 0x10));
    rdx = r13;
    eax = 0;
    rsi = r13*8;
    do {
        rcx = *((rbp + rax*2));
        *((r8 + rax)) = rcx;
        rcx = *((rbp + rax*2 + 8));
        *((rdi + rax)) = rcx;
        rax += 8;
    } while (rax != rsi);
label_9:
    if (*(r12) <= rdx) {
        goto label_10;
    }
    rsi = *((r12 + 0x10));
    rcx = *((r12 + 8));
    rax = 0xffffffffffffffff;
    do {
        r13++;
        *((rsi + rdx*8)) = rax;
        *((rcx + rdx*8)) = rax;
        rdx = r13;
    } while (*(r12) > r13);
label_10:
    eax = *((r15 + 0x38));
    r13d = r9 + r9;
    eax &= 0xfffffff9;
    eax |= r13d;
    *((r15 + 0x38)) = al;
    if ((al & 6) == 0) {
        goto label_0;
    }
label_18:
    r12 = *(rbp);
    if (*((rsp + 0x28)) == 0) {
        goto label_1;
    }
    if (rbx != r12) {
        goto label_24;
    }
    rax = *((rbp + 8));
    rax -= r12;
    r12 = rax;
    goto label_1;
label_16:
    r14 = *(r12);
    if (r14 > rcx) {
        goto label_2;
    }
    r13 = r14;
    if (r14 > 0) {
        goto label_3;
    }
label_15:
    edi = 0x10;
    r14d = 1;
    r13d = 1;
    r12d = 0;
    goto label_4;
label_14:
    *((rsp + 0x20)) = r9;
    *((rsp + 0x18)) = rdx;
    *((rsp + 0x10)) = r8;
    fcn_00415910 (r15, rsi);
    eax = *((r15 + 0x38));
    r9 = *((rsp + 0x20));
    rdx = *((rsp + 0x18));
    r8 = *((rsp + 0x10));
    goto label_5;
label_12:
    r8 = rdx;
    goto label_6;
label_19:
    r14 = rdx*8;
    *((rsp + 8)) = rdx;
    rax = malloc (r14);
    rdx = *((rsp + 8));
    *((r12 + 8)) = rax;
    if (rax == 0) {
        goto label_25;
    }
    *((rsp + 8)) = rdx;
    *((rsp + 0x10)) = rax;
    rax = malloc (r14);
    rdx = *((rsp + 8));
    rcx = *((rsp + 0x10));
    *((r12 + 0x10)) = rax;
    if (rax == 0) {
        goto label_26;
    }
    *(r12) = rdx;
    r9d = 1;
    goto label_7;
label_13:
    eax = *((r15 + 0x38));
    r8d = 0;
    ecx = eax;
    cl >>= 5;
    esi = ecx;
    esi &= 3;
    *((rsp + 0x2c)) = esi;
    goto label_5;
label_11:
    r12 = 0xffffffffffffffff;
    goto label_8;
label_17:
    r12 = 0xfffffffffffffffe;
    goto label_8;
label_20:
    r9d = 1;
    if (*(r12) >= rdx) {
        goto label_7;
    }
    rcx = rdx*8;
    *((rsp + 0x18)) = r9b;
    rsi = rcx;
    *((rsp + 0x10)) = rdx;
    *((rsp + 8)) = rcx;
    rax = realloc (*((r12 + 8)), rsi);
    r14 = rax;
    if (rax != 0) {
        rcx = *((rsp + 8));
        rax = realloc (*((r12 + 0x10)), rcx);
        rdx = *((rsp + 0x10));
        r9d = *((rsp + 0x18));
        if (rax == 0) {
            goto label_27;
        }
        *((r12 + 8)) = r14;
        *((r12 + 0x10)) = rax;
        *(r12) = rdx;
        goto label_7;
label_23:
        edx = 0;
        r13d = 0;
        goto label_9;
label_26:
        free (rcx);
    }
label_25:
    r9d = 0;
    goto label_10;
label_27:
    free (r14);
    r9d = 0;
    goto label_10;
label_24:
    assert_fail ("pmatch[0].rm_so == start", "lib/regexec.c", 0x1bd, "re_search_stub");
label_22:
    assert_fail ("regs->num_regs >= nregs", "lib/regexec.c", 0x1fa, "re_copy_regs");
label_21:
    return assert_fail ("regs_allocated == REGS_FIXED", "lib/regexec.c", 0x1f8, "re_copy_regs");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x415e40 */
#include <stdint.h>
 
void fcn_00415e40 (int64_t arg_70h_2, int64_t arg_70h, int64_t arg_78h, int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    void * s2;
    int64_t var_10h;
    int64_t var_1ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r14 = rcx;
    rcx = r9;
    r12 = rdi;
    rbx = rdx;
    rdx = rbp;
    rdx >>= 0x3f;
    edi = edx;
    r9 = *((rsp + 0x70));
    r8d = *((rsp + 0x78));
    rax = r9;
    rax >>= 0x3f;
    dil |= al;
    if (dil != 0) {
        goto label_2;
    }
    if (rbx < 0) {
        goto label_2;
    }
    r15 = rbx;
    r15 += rbp;
    if (UNKNOWN_OP /*r15 overflow 0*/) {
        goto label_2;
    }
    if (rbp == 0) {
        goto label_3;
    }
    *((rsp + 8)) = rsi;
    r13d = 0;
    while (1) {
label_1:
        r8d = (int32_t) r8b;
        rax = fcn_004159e0 (r12, r14, r15, rcx, *((rsp + 0x70)), r9);
        rbx = rax;
        free (r13);
label_0:
        rax = rbx;
        return;
        *((rsp + 0x1c)) = r8d;
        *((rsp + 0x70)) = r9;
        *((rsp + 0x10)) = rcx;
        rax = malloc (r15);
        r13 = rax;
        if (rax == 0) {
            goto label_2;
        }
        memcpy (rax, *((rsp + 8)), rbx);
        memcpy (r13 + rbx, r14, rbp);
        r14 = r13;
        rcx = *((rsp + 0x10));
        r9 = *((rsp + 0x70));
        r8d = *((rsp + 0x1c));
    }
label_2:
    rbx = 0xfffffffffffffffe;
    goto label_0;
label_3:
    r14 = rsi;
    r13d = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x416210 */
#include <stdint.h>
 
void fcn_00416210 (int64_t arg3, int64_t arg6) {
    rdx = arg3;
    r9 = arg6;
    fcn_004159e0 (rdi, rsi, rdx, rcx, r8, rdx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x4162b0 */
#include <stdint.h>
 
uint64_t fcn_004162b0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_004073b0 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x416310 */
#include <stdint.h>
 
uint64_t fcn_00416310 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x419cd0;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x416370 */
#include <stdint.h>
 
uint64_t fcn_00416370 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x41900f;
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
        r15d = 0x41900f;
label_2:
        *(0x0061d638) = r15;
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
        r15d = 0x41900f;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x416ac5;
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
    fcn_004073b0 (rbx);
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
        r15d = 0x41900f;
        rbx = rax;
        free (r15);
        fcn_004073b0 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x416950 */
#include <stdint.h>
 
int64_t fcn_00416950 (void) {
    rax = 0x61d2a8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_csplit.elf @ 0x416968 */
#include <stdint.h>
 
void fcn_00416968 (int64_t arg3) {
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
