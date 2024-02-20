/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4017a0 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int32_t var_8h;
    int64_t var_10h;
    void * fildes;
    void * var_1dh;
    uint32_t var_1eh;
    int64_t var_1fh;
    void * var_20h;
    uint32_t s1;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    uint32_t var_48h;
    int32_t var_50h;
    uint32_t var_58h;
    uint32_t var_60h;
    void * var_68h;
    void * ptr;
    int64_t var_78h;
    int64_t var_80h;
    uint32_t var_88h;
    void * var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_b8h;
    int64_t var_d0h;
    int64_t var_d8h;
    rdi = argc;
    rsi = argv;
    r12d = edi;
    fcn_004036d0 (*(rsi));
    setlocale (6, 0x4098bf);
    bindtextdomain (0x40798c, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40798c, rsi);
    edi = 0x4034c0;
    rax = fcn_00407800 ();
    *(0x0060b2b8) = 0;
    *(0x0060b2ba) = 0;
    *(0x0060b2b9) = 0xa;
    if (r12d > 1) {
        rsi = *((rbp + 8));
        if (*(rsi) == 0x2d) {
            goto label_35;
        }
    }
label_1:
    *((rsp + 0x1e)) = 1;
    ebx = 0;
    *((rsp + 8)) = 0xa;
label_2:
    *((rsp + 0x1d)) = 0;
    r13d = 1;
    do {
label_0:
        r8d = 0;
        ecx = 0x4081a0;
        edx = "c:n:qvz0123456789";
        rsi = rbp;
        edi = r12d;
        eax = fcn_00406e30 ();
        if (eax == 0xffffffff) {
            goto label_36;
        }
        if (eax == 0x6e) {
            goto label_37;
        }
        if (eax <= 0x6e) {
            goto label_38;
        }
        if (eax == 0x76) {
            goto label_39;
        }
        if (eax <= 0x76) {
            goto label_40;
        }
        if (eax != 0x7a) {
            goto label_41;
        }
        *(0x0060b2b9) = 0;
    } while (1);
label_38:
    if (eax == 0xffffff7e) {
        goto label_42;
    }
    if (eax == 0x63) {
        rax = imp.__libc_start_main;
        edx = *(rax);
        rsp + 0x1d = (dl == 0x2d) ? 1 : 0;
        if (dl == 0x2d) {
            rax++;
            *(0x0060b460) = rax;
        }
        rsi = imp.__libc_start_main;
        rax = fcn_00402990 (0);
        *((rsp + 0x1e)) = 0;
        *((rsp + 8)) = rax;
        goto label_0;
    }
    r14d = eax;
    if (eax != 0xffffff7d) {
label_33:
        eax = r14 - 0x30;
        if (eax <= 9) {
            goto label_43;
        }
label_19:
        eax = fcn_004030d0 (1);
label_41:
        if (eax != 0x80) {
            goto label_44;
        }
        *(0x0060b2bb) = r13b;
        goto label_0;
label_40:
        if (eax != 0x71) {
            goto label_44;
        }
        ebx = 2;
        goto label_0;
label_39:
        ebx = 1;
        goto label_0;
label_37:
        rax = imp.__libc_start_main;
        edx = *(rax);
        rsp + 0x1d = (dl == 0x2d) ? 1 : 0;
        if (dl == 0x2d) {
            rax++;
            *(0x0060b460) = rax;
        }
        rsi = imp.__libc_start_main;
        rax = fcn_00402990 (1);
        *((rsp + 0x1e)) = 1;
        *((rsp + 8)) = rax;
        goto label_0;
    }
    eax = 0;
    rcx = *(str.8.29);
    r9d = "Jim Meyering";
    r8d = "David MacKenzie";
    fcn_004057d0 (*(obj.stdout), "head", "GNU coreutils");
    exit (0);
label_35:
    eax = *((rsi + 1));
    eax -= 0x30;
    if (eax > 9) {
        goto label_1;
    }
    rsi++;
    rcx = rsi;
    do {
        rcx++;
        eax = *(rcx);
        r13d = eax;
        eax -= 0x30;
    } while (eax <= 9);
    if (r13b == 0) {
        goto label_45;
    }
    rdx = rcx;
    r8d = 0;
    r9d = 0xa;
    edi = 0;
    r10d = 1;
    ebx = 0;
    do {
        eax = r13 - 0x62;
        if (al > 0x18) {
            goto label_46;
        }
        eax = (int32_t) al;
        /* switch table (25 cases) at 0x4080c0 */
        r8d = 1;
        r9d = 0;
label_3:
        rdx++;
        r13d = *(rdx);
    } while (r13b != 0);
    *((rsp + 0x1e)) = r10b;
    if (r8b != 0) {
        *(0x0060b2b9) = r9b;
    }
    *(rcx) = dil;
    if (dil != 0) {
        *((rcx + 1)) = 0;
    }
label_34:
    edi = *((rsp + 0x1e));
    rbp += 8;
    r12d--;
    rax = fcn_00402990 (rdi);
    *((rsp + 8)) = rax;
    rax = *((rbp - 8));
    *(rbp) = rax;
    goto label_2;
    ebx = 1;
    goto label_3;
    ebx = 2;
    goto label_3;
    r10d = 1;
    goto label_3;
    edi = 0;
    r10d = 0;
    goto label_3;
    edi = r13d;
    r10d = 0;
    goto label_3;
label_36:
    if (ebx == 1) {
        goto label_47;
    }
    if (ebx == 0) {
        eax = r12 - 1;
        if (eax > *(0x0060b27c)) {
            goto label_47;
        }
    }
label_6:
    if (*((rsp + 0x1e)) == 0) {
        if (*((rsp + 0x1d)) == 0) {
            goto label_48;
        }
        if (*((rsp + 8)) < 0) {
            goto label_49;
        }
    }
label_48:
    rax = *(0x0060b27c);
    if (eax >= r12d) {
        goto label_50;
    }
    rax = rbp + rax*8;
    r12 = *(rax);
    if (r12 == 0) {
        goto label_51;
    }
    *((rsp + 0x30)) = 0x4098a2;
label_14:
    rcx = *((rsp + 8));
    edx = 0x2000;
    rax += 8;
    r15 = r12;
    *((rsp + 0x10)) = rax;
    rbx = rcx;
    *((rsp + 0x1f)) = 1;
    ebx &= 0x1fff;
    rdx -= rbx;
    *((rsp + 0x88)) = rbx;
    *((rsp + 0x80)) = rdx;
    rbx = rdx;
    rdx = rcx;
    rcx += 0x2000;
    rdx += rbx;
    *((rsp + 0x48)) = rcx;
    rcx += rcx;
    rdx >>= 0xd;
    *((rsp + 0x78)) = rcx;
    rsi = rdx + 1;
    *((rsp + 0x58)) = rdx;
    *((rsp + 0x38)) = rsi;
    rsi >>= 1;
    *((rsp + 0x60)) = rsi;
    while (r14d == 0) {
        edx = 5;
        *(0x0060b2b8) = 1;
        rax = dcgettext (0, "standard input");
        *((rsp + 0x18)) = 0;
        r15 = rax;
label_4:
        if (*(0x0060b2ba) != 0) {
            eax = 0x4098be;
            edx = 0x4098bf;
            rcx = r15;
            if (*(0x0060b1f0) == 0) {
                rdx = rax;
            }
            esi = "%s==> %s <==\n";
            edi = 1;
            eax = 0;
            printf_chk ();
            *(0x0060b1f0) = 0;
        }
        if (*((rsp + 0x1d)) != 0) {
            goto label_52;
        }
        rdx = *((rsp + 8));
        rdi = r15;
        esi = *((rsp + 0x18));
        if (*((rsp + 0x1e)) == 0) {
            goto label_53;
        }
        eax = fcn_00402bc0 (rdi, rsi, rdx, rcx);
        ebx = eax;
label_7:
        if (r14d != 0) {
            goto label_54;
        }
label_5:
        rax = *((rsp + 0x10));
        r15 = *((rax - 8));
        if (r15 == 0) {
            goto label_55;
        }
        rdi = *((rsp + 0x30));
        ecx = 2;
        rsi = r15;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (r15 > 0) ? 1 : 0;
        r14d = (int32_t) al;
    }
    eax = 0;
    eax = open (r15, 0, rdx);
    *((rsp + 0x18)) = eax;
    if (eax >= 0) {
        goto label_4;
    }
    rax = fcn_004050a0 (4, r15);
    edx = 5;
    rbx = rax;
label_8:
    rax = dcgettext (0, "cannot open %s for reading");
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, *(rax), rbp);
    goto label_5;
label_47:
    *(0x0060b2ba) = 1;
    goto label_6;
label_53:
    eax = fcn_00402d30 (rdi, rsi, rdx);
    ebx = eax;
    goto label_7;
label_52:
    esi = *((rsp + 0x18));
    rdx = rsp + 0xa0;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_56;
    }
    if (*(0x0060b2bb) == 0) {
        eax = *((rsp + 0xb8));
        eax &= 0xd000;
        if (eax == 0x8000) {
            goto label_57;
        }
    }
    *((rsp + 0x50)) = 0xffffffffffffffff;
    if (*((rsp + 0x1e)) != 0) {
        goto label_17;
    }
label_20:
    rax = *((rsp + 0x50));
    *((rsp + 0x28)) = rax;
    if (*((rsp + 8)) <= 0x100000) {
        goto label_58;
    }
    *((rsp + 0x40)) = 0;
    eax = 0;
    r12d = 0;
    ebp = 0;
    *((rsp + 0x70)) = r14d;
    r10d = 1;
    r13d = 0;
    *((rsp + 0x68)) = r15;
    rbx = r10;
    r15d = eax;
label_11:
    if (rbp != 0) {
        goto label_59;
    }
    rax = *((rsp + 0x38));
    if (rax <= 0x10) {
    }
label_12:
    r14 = r13;
    rax = fcn_00405970 (r12, rbp*8);
    *((rsp + 0x20)) = rbp;
    r13 = rbx;
    rbx = r14;
    r12 = rax;
    do {
        rbp = r12 + rbx*8;
        if (r15b == 0) {
            goto label_60;
        }
        rax = fcn_00403560 (*((rsp + 0x18)), *(rbp), 0x2000);
        if (rax > 0x1fff) {
            goto label_61;
        }
        rax = errno_location ();
        if (*(rax) != 0) {
            goto label_62;
        }
        r14d = r15d;
label_10:
        r15d = *((rsp + 0x1d));
        if (rbp != 0) {
            goto label_63;
        }
label_9:
        rax = r13 + 1;
        edx = 0;
        rax = *(rdx:rax) / rsp + 0x38;
        rdx = *(rdx:rax) % rsp + 0x38;
        r10 = rdx;
        if (r14b != 0) {
            goto label_64;
        }
        rbx = r13;
        if (*((rsp + 0x20)) == r13) {
            goto label_65;
        }
        r13 = rdx;
    } while (1);
label_54:
    eax = close (*((rsp + 0x18)));
    if (eax == 0) {
        goto label_5;
    }
    rax = fcn_004050a0 (4, r15);
    edx = 5;
    esi = "failed to close %s";
    rbx = rax;
    goto label_8;
label_60:
    r14d = 0;
    rax = fcn_00405910 (0x2000);
    rcx = rbx + 1;
    *(rbp) = rax;
    *((rsp + 0x40)) = rcx;
    rax = fcn_00403560 (*((rsp + 0x18)), rax, 0x2000);
    if (rax <= 0x1fff) {
        rax = errno_location ();
        if (*(rax) != 0) {
            goto label_62;
        }
        r14d = *((rsp + 0x1d));
    }
    if (*((rsp + 0x58)) != rbx) {
        goto label_9;
    }
    goto label_10;
label_61:
    r14d = 0;
label_63:
    rsi = rbp;
    fcn_00402a90 (*((r12 + r13*8)));
    r15d = *((rsp + 0x1d));
    goto label_9;
label_65:
    rbp = *((rsp + 0x20));
    rbx = r10;
    goto label_11;
label_51:
    *((rsp + 0x1f)) = 1;
label_55:
    if (*(0x0060b2b8) != 0) {
        goto label_66;
    }
label_15:
    eax = *((rsp + 0x1f));
    eax ^= 1;
    eax = (int32_t) al;
    return rax;
label_59:
    rax = rbp + rbp;
    if (*((rsp + 0x60)) < rbp) {
        rax = *((rsp + 0x38));
    }
    goto label_12;
label_17:
    rax = *((rsp + 0x50));
    *((rsp + 0x40)) = rax;
    rax = fcn_00405910 (0x2018);
    *((rax + 0x2008)) = 0;
    r12 = rax;
    *((rax + 0x2000)) = 0;
    *((rax + 0x2010)) = 0;
    *((rsp + 0x28)) = rax;
    rax = fcn_00405910 (0x2018);
    *((rsp + 0x68)) = r15;
    *((rsp + 0x20)) = 0;
    rbx = rax;
    *((rsp + 0x70)) = r14d;
label_13:
    rax = fcn_00405310 (*((rsp + 0x18)), rbx, 0x2000);
    r15 = rax;
    rax = rax - 1;
    if (rax > 0xfffffffffffffffd) {
        goto label_67;
    }
    if (*((rsp + 8)) == 0) {
        goto label_68;
    }
    *((rbx + 0x2000)) = r15;
    r13 = rbx + r15;
    rdi = rbx;
    r14d = 0;
    *((rbx + 0x2008)) = 0;
    ebp = *(0x0060b2b9);
    *((rbx + 0x2010)) = 0;
    while (rax != 0) {
        *((rbx + 0x2008)) = rdx;
        r14 = rdx;
        rdx -= rdi;
        rax = fcn_00406f30 (rax + 1, ebp, r13);
        rdx = r14 + 1;
    }
    rax = *((rsp + 0x28));
    rdi = *((rax + 0x2000));
    rax = r15 + rdi;
    if (rax > 0x1fff) {
        rax = *((rsp + 0x28));
        *((rax + 0x2010)) = rbx;
        rax = *((rsp + 0x20));
        rax -= *((r12 + 0x2008));
        if (*((rsp + 8)) >= rax) {
            goto label_69;
        }
        rsi = *((r12 + 0x2000));
        if (rsi != 0) {
            fcn_00402a90 (r12);
        }
        rcx = *((r12 + 0x2008));
        *((rsp + 0x28)) = rbx;
        rbx = r12;
        r12 = *((r12 + 0x2010));
        goto label_13;
label_68:
        rsi = r15;
        fcn_00402a90 (rbx);
        goto label_13;
    }
    r14 = *((rsp + 0x28));
    rdi += r14;
    memcpy (rdi, rbx, r15);
    rax = *((rbx + 0x2000));
    *((r14 + 0x2000)) += rax;
    rax = *((rbx + 0x2008));
    *((r14 + 0x2008)) += rax;
    goto label_13;
label_69:
    rax = fcn_00405910 (0x2018);
    *((rsp + 0x28)) = rbx;
    rbx = rax;
    goto label_13;
label_67:
    r14d = *((rsp + 0x70));
    r15 = *((rsp + 0x68));
    free (rbx);
    rbp++;
    if (rbp == 0) {
        goto label_70;
    }
    rcx = *((rsp + 0x28));
    rax = *((rcx + 0x2000));
    if (rax != 0) {
        goto label_71;
    }
label_18:
    rax = *((rsp + 0x20));
    r13 = r12;
    rax -= *((r12 + 0x2008));
    if (*((rsp + 8)) >= rax) {
        goto label_72;
    }
    rbx = *((rsp + 8));
    rbp = *((rsp + 0x20));
    *((rsp + 0x28)) = r12;
    r12 = *((rsp + 0x40));
    do {
        rsi = *((r13 + 0x2000));
        r12 += rsi;
        if (rsi != 0) {
            fcn_00402a90 (r13);
        }
        rbp -= *((r13 + 0x2008));
        r13 = *((r13 + 0x2010));
        rdx = rbp;
        rdx -= *((r13 + 0x2008));
    } while (rbx < rdx);
    *((rsp + 0x20)) = rbp;
    *((rsp + 0x40)) = r12;
    r12 = *((rsp + 0x28));
label_72:
    rax = *((rsp + 8));
    rbp = *((rsp + 0x20));
    if (rax >= rbp) {
        goto label_73;
    }
    rcx = *((r13 + 0x2000));
    ebx = *(0x0060b2b9);
    rbp -= rax;
    *((rsp + 0x20)) = r12;
    rax = r13;
    rcx += r13;
    r12d = ebx;
    rbx = rcx;
    do {
        rdx -= rax;
        rax = fcn_00406f30 (rax, r12d, rcx);
        if (rax == 0) {
            goto label_74;
        }
        rax++;
        *((r13 + 0x2008))++;
        rbp--;
    } while (rbp != 0);
label_74:
    rax -= r13;
    r12 = *((rsp + 0x20));
    if (rax != 0) {
        rsi = rax;
        rax = fcn_00402a90 (r13);
    }
label_73:
    ebx = *((rsp + 0x1d));
    do {
label_32:
        rbp = *((rdi + 0x2010));
        free (r12);
        rdi = rbp;
    } while (rbp != 0);
label_31:
    if (*((rsp + 0x50)) == -1) {
        goto label_7;
    }
    rcx = r15;
    rax = fcn_004029f0 (*((rsp + 0x18)), *((rsp + 0x40)), 0);
    if (rax >= 0) {
        goto label_7;
    }
label_16:
    ebx = 0;
    goto label_7;
label_50:
    eax = 0x408190;
    r12d = 0x4098a2;
    *((rsp + 0x30)) = 0x4098a2;
    goto label_14;
label_56:
    rax = fcn_004050a0 (4, r15);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot fstat %s");
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, *(rax), rbp);
    goto label_7;
label_66:
    eax = close (0);
    if (eax >= 0) {
        goto label_15;
    }
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), 0x4098a2);
label_57:
    rcx = r15;
    rax = fcn_004029f0 (*((rsp + 0x18)), 0, 1);
    *((rsp + 0x50)) = rax;
    if (rax < 0) {
        goto label_16;
    }
    r8 = *((rsp + 0xd0));
    ebx = *(0x0060b2bb);
    if (*((rsp + 0x1e)) == 0) {
        goto label_75;
    }
    if (bl != 0) {
        goto label_17;
    }
    rax = *((rsp + 0xd8));
    rcx = 0x1fffffffffffffff;
    rdx = rax - 1;
    edx = 0x200;
    if (rdx > rcx) {
        rax = rdx;
    }
    if (rax >= r8) {
        goto label_17;
    }
    ebx = 1;
    if (*((rsp + 0x50)) < r8) {
        goto label_76;
    }
label_30:
    ebx &= 1;
    goto label_7;
label_71:
    ebx = *(0x0060b2b9);
    if (*((rcx + rax - 1)) == bl) {
        goto label_18;
    }
    *((rcx + 0x2008))++;
    goto label_18;
label_43:
    edx = 5;
    rax = dcgettext (0, "invalid trailing option -- %c");
    ecx = r14d;
    do {
        eax = 0;
        error (0, 0, rax);
        goto label_19;
label_46:
        if (r8b != 0) {
            *(0x0060b2b9) = r9b;
        }
        edx = 5;
        dcgettext (0, "invalid trailing option -- %c");
        ecx = (int32_t) r13b;
    } while (1);
label_75:
    if (bl != 0) {
        goto label_20;
    }
    rax = *((rsp + 0xd8));
    rcx = 0x1fffffffffffffff;
    rdx = rax - 1;
    edx = 0x200;
    if (rdx > rcx) {
        rax = rdx;
    }
    if (r8 <= rax) {
        goto label_20;
    }
    r8 -= *((rsp + 0x50));
    eax = 0;
    __asm ("cmovs r8, rax");
    if (*((rsp + 8)) < r8) {
        rsi -= *((rsp + 8));
        eax = fcn_00402b10 (*((rsp + 0x18)), r8);
        if (eax != 0) {
            goto label_77;
        }
    }
    ebx = *((rsp + 0x1d));
    goto label_7;
label_64:
    eax = r15d;
    ebx = r14d;
    *((rsp + 0x20)) = r15b;
    r14d = *((rsp + 0x70));
    r8 = rbp;
    r15 = *((rsp + 0x68));
    if (al == 0) {
        goto label_78;
    }
    esi = 0x2000;
    rcx = *((rsp + 0x80));
    rdi = *((r12 + r13*8));
    rsi -= rbp;
    rdi += rbp;
    if (rcx < rsi) {
        goto label_79;
    }
    rbp = r12 + rdx*8;
    if (rsi == 0) {
        goto label_80;
    }
    *((rsp + 0x68)) = r8;
    fcn_00402a90 (rdi);
    ebx = *((rsp + 0x20));
    r8 = *((rsp + 0x68));
    if (*((rsp + 0x88)) != r8) {
        goto label_80;
    }
label_29:
    rax = *((rsp + 0x40));
    r13 = r12;
    rbp = r12 + rax*8;
    while (r13 != rbp) {
        r13 += 8;
        free (*(r13));
    }
    free (r12);
label_21:
    if (*((rsp + 0x50)) == -1) {
        goto label_7;
    }
    rcx = r15;
    rax = fcn_004029f0 (*((rsp + 0x18)), *((rsp + 0x28)), 0);
    if (rax >= 0) {
        goto label_7;
    }
    ebx = 0;
    goto label_7;
label_58:
    ebp = 0;
    rax = fcn_00405910 (*((rsp + 0x78)));
    *((rsp + 0x40)) = r15;
    ebx = *((rsp + 0x1d));
    r12 = *((rsp + 8));
    r13 = *((rsp + 0x28));
    *((rsp + 0x70)) = rax;
    *((rsp + 0x90)) = rax;
    rax += *((rsp + 0x48));
    *((rsp + 0x98)) = rax;
    *((rsp + 0x68)) = r14d;
    do {
        eax = (int32_t) bpl;
        r14 = *((rsp + rax*8 + 0x90));
        rax = fcn_00403560 (*((rsp + 0x18)), *((rsp + rax*8 + 0x90)), *((rsp + 0x48)));
        r15 = rax;
        if (*((rsp + 0x48)) > rax) {
            rax = errno_location ();
            if (*(rax) != 0) {
                goto label_81;
            }
            if (r12 < r15) {
                goto label_82;
            }
            if (bl == 0) {
                goto label_83;
            }
label_26:
            r15 = *((rsp + 0x40));
            r14d = *((rsp + 0x68));
            ebx = *((rsp + 0x1d));
label_23:
            free (*((rsp + 0x70)));
            *((rsp + 0x28)) = r13;
            goto label_21;
        }
        if (bl != 0) {
            goto label_84;
        }
        esi = ebp;
        rax = r12 + r13;
        esi ^= 1;
        ecx = (int32_t) sil;
        rcx = *((rsp + rcx*8 + 0x90));
        if (r12 != 0) {
            goto label_85;
        }
        if (r12 < r15) {
            goto label_86;
        }
label_22:
        ebx = 0;
        r13 = rax;
    } while (1);
label_84:
    if (r12 >= rax) {
        goto label_87;
    }
    r15 -= r12;
    rax = r13 + r15;
    if (r15 != 0) {
        goto label_88;
    }
    ebp ^= 1;
    goto label_22;
label_82:
    if (bl != 0) {
        goto label_89;
    }
    ecx = ebp;
    rax = r12 + r13;
    ecx ^= 1;
    ecx = (int32_t) cl;
    rcx = *((rsp + rcx*8 + 0x90));
    if (r12 == 0) {
        goto label_90;
    }
    ebx = *((rsp + 0x1d));
label_85:
    rsi = r12;
label_27:
    *((rsp + 0x20)) = rax;
    fcn_00402a90 (rcx + 0x2000);
    rax = *((rsp + 0x20));
    if (r12 < r15) {
        goto label_86;
    }
label_24:
    ebp ^= 1;
    if (bl == 0) {
        goto label_22;
    }
label_25:
    r15 = *((rsp + 0x40));
    r13 = rax;
    r14d = *((rsp + 0x68));
    goto label_23;
label_86:
    r15 -= r12;
    rax += r15;
    if (r15 == 0) {
        goto label_24;
    }
    do {
label_28:
        rsi = r15;
        *((rsp + 0x20)) = rax;
        fcn_00402a90 (r14);
        rax = *((rsp + 0x20));
        goto label_24;
label_89:
        r15 -= r12;
        rax = r15 + r13;
    } while (r15 != 0);
    goto label_25;
label_83:
    eax = ebp;
    r13 += r15;
    eax ^= 1;
    eax = (int32_t) al;
    rcx = *((rsp + rax*8 + 0x90));
    if (r15 == 0) {
        goto label_26;
    }
    rdi = rcx + 0x2000;
    ebx = *((rsp + 0x1d));
    rax = r13;
    rsi = r15;
    goto label_27;
label_87:
    ebp ^= 1;
    rax = r13;
    goto label_22;
label_90:
    rax = r15 + r13;
    if (r15 == 0) {
        goto label_91;
    }
    ebx = *((rsp + 0x1d));
    goto label_28;
label_78:
    if (*((rsp + 0x58)) != r13) {
        goto label_29;
    }
    rsi = rbp;
    rsi -= *((rsp + 0x88));
    if (rsi == 0) {
        goto label_29;
    }
    rax = fcn_00402a90 (*((r12 + rdx*8)));
    goto label_29;
label_62:
    r15 = *((rsp + 0x68));
    rbx = rax;
    r14d = *((rsp + 0x70));
    rax = fcn_004050a0 (4, r15);
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rcx = rbp;
    eax = 0;
    ebx = 0;
    error (0, *(rbx), rax);
    goto label_29;
label_76:
    al = fcn_00402e80 (r15, *((rsp + 0x18)), *((rsp + 8)), *((rsp + 0x50)), r8);
    ebx = (int32_t) al;
    goto label_30;
label_70:
    rax = fcn_004050a0 (4, r15);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "error reading %s");
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    ebx = 0;
    rax = error (0, *(rax), rbp);
    if (r12 == 0) {
        goto label_31;
    }
    rdi = r12;
    goto label_32;
label_81:
    r15 = *((rsp + 0x40));
    r14d = *((rsp + 0x68));
    r13 = rax;
    rax = fcn_004050a0 (4, r15);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "error reading %s");
    rcx = rbx;
    eax = 0;
    r13 = rbp;
    ebx = 0;
    eax = error (0, *(r13), rax);
    goto label_23;
label_44:
    r14d = eax;
    goto label_33;
label_77:
    fcn_00402e00 (eax, r15);
    goto label_7;
label_80:
    rsi = r8;
    rsi -= *((rsp + 0x88));
    fcn_00402a90 (*(rbp));
    ebx = *((rsp + 0x20));
    goto label_29;
label_79:
    rsi = rcx;
    fcn_00402a90 (rdi);
    ebx = *((rsp + 0x20));
    goto label_29;
label_45:
    *((rsp + 0x1e)) = 1;
    ebx = 0;
    goto label_34;
label_42:
    fcn_004030d0 (0);
label_49:
    rax = fcn_00403680 (*((rsp + 8)), rsp + 0xa0, rdx);
    rax = fcn_004052f0 (rax);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid number of bytes");
    r8 = rbx;
    rcx = rax;
    eax = 0;
    rax = error (1, 0x4b, "%s: %s");
label_91:
    r15 = *((rsp + 0x40));
    r13 = rax;
    r14d = *((rsp + 0x68));
    ebx = *((rsp + 0x1d));
    goto label_23;
label_88:
    ebx = 0;
    goto label_28;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4028db */
#include <stdint.h>
 
int32_t fcn_004028db (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402931 */
#include <stdint.h>
 
int64_t fcn_00402931 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060b2a8) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x60ae48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060b2b0) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004028db ();
    *(0x0060b2a8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402988 */
#include <stdint.h>
 
int64_t fcn_00402988 (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402990 */
#include <stdint.h>
 
uint64_t fcn_00402990 (int64_t arg2) {
    rsi = arg2;
    edx = 5;
    rbx = rsi;
    if (dil == 0) {
        goto label_0;
    }
    rax = dcgettext (0, "invalid number of lines");
    r8 = rax;
    do {
        rdi = rbx;
        r9d = 0;
        ecx = "bkKmMGTPEZY0";
        esi = 0;
        rdx = 0xffffffffffffffff;
        goto label_1;
label_0:
        rax = dcgettext (0, "invalid number of bytes");
        r8 = rax;
    } while (1);
label_1:
    fcn_00405ba0 (rdi, 0xa, rsi, rdx, rcx, r8);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4029f0 */
#include <stdint.h>
 
uint64_t fcn_004029f0 (void * arg2, int64_t arg3, int64_t arg4) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r13 = rcx;
    r12 = rsi;
    rax = lseek ();
    rbx = rax;
    if (rax >= 0) {
        rax = rbx;
        return rax;
    }
    rax = fcn_004035e0 (r12, rsp, rdx);
    r12 = rax;
    rax = fcn_00405170 (0, 3, r13);
    esi = "%s: cannot seek to offset %s";
    edx = 5;
    r13 = rax;
    eax = "%s: cannot seek to relative offset %s";
    if (ebp != 0) {
        rsi = rax;
    }
    rax = dcgettext (0, rsi);
    rax = errno_location ();
    r8 = r12;
    rcx = r13;
    eax = 0;
    error (0, *(rax), rbp);
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402a90 */
#include <stdint.h>
 
uint64_t fcn_00402a90 (int64_t arg2) {
    rsi = arg2;
    rdx = rsi;
    rbx = rsi;
    esi = 1;
    rcx = stdout;
    rax = fwrite_unlocked ();
    if (rbx <= rax) {
        return rax;
    }
    rdi = stdout;
    clearerr_unlocked ();
    rax = fcn_004050a0 (4, "standard output");
    edx = 5;
    rax = dcgettext (0, "error writing %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402b10 */
#include <stdint.h>
 
uint64_t fcn_00402b10 (int64_t arg1, void * arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rsi == 0) {
        goto label_0;
    }
    r12d = 0x2000;
    rbx = rsi;
    while (rax != -1) {
        rbx -= rax;
        if (rax == 0) {
            if (rbx != 0) {
                goto label_1;
            }
        }
        if (rax != 0) {
            rsi = rax;
            fcn_00402a90 (rsp);
        }
        if (rbx == 0) {
            goto label_2;
        }
        rdx = r12;
        rsi = rsp;
        edi = ebp;
        if (rbx <= 0x2000) {
            rdx = rbx;
        }
        rax = fcn_00405310 (rdi, rsi, rdx);
    }
    eax = 1;
    return rax;
label_2:
    eax = 0;
    return rax;
label_1:
    eax = 2;
    return rax;
label_0:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402bc0 */
#include <stdint.h>
 
uint64_t fcn_00402bc0 (int64_t arg_90h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_3;
    }
    r13 = rdi;
    r12d = esi;
label_1:
    rax = fcn_00405310 (r12d, rsp + 0x90, 0x2000);
    if (rax == -1) {
        goto label_4;
    }
    if (rax == 0) {
        goto label_5;
    }
    edx = *(0x0060b2b9);
    ebx = 0;
    while (*((rsp + rbx + 0x8f)) != dl) {
label_0:
        if (rax == rbx) {
            goto label_6;
        }
        rbx++;
    }
    rbp--;
    if (rbp != 0) {
        goto label_0;
    }
    edx = 1;
    edi = r12d;
    rbp -= rax;
    rsi = rbp;
    rax = lseek ();
    while (eax != 0x8000) {
label_2:
        rsi = rbx;
        fcn_00402a90 (rsp + 0x90);
        eax = 1;
        return rax;
label_6:
        rsi = rax;
        fcn_00402a90 (rsp + 0x90);
        goto label_1;
        rdx = rsp;
        esi = r12d;
        edi = 1;
        eax = fxstat ();
        if (eax != 0) {
            goto label_7;
        }
        eax = *((rsp + 0x18));
        eax &= 0xf000;
    }
label_7:
    rcx = r13;
    fcn_004029f0 (r12d, rbp, 1);
    goto label_2;
label_4:
    rax = fcn_004050a0 (4, r13);
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    return rax;
label_5:
    eax = 1;
    return rax;
label_3:
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402d30 */
#include <stdint.h>
 
uint64_t fcn_00402d30 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r14 = rdi;
    r13d = esi;
    r12d = 0x2000;
    while (rax != -1) {
        if (rax == 0) {
            goto label_1;
        }
        rsi = rax;
        fcn_00402a90 (rsp);
        rbp -= rbx;
        if (rbp == 0) {
            goto label_1;
        }
        rsi = rsp;
        edi = r13d;
        if (r12 > rbp) {
            r12 = rbp;
        }
        rax = fcn_00405310 (rdi, rsi, r12);
        rbx = rax;
    }
    rax = fcn_004050a0 (4, r14);
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    return rax;
label_1:
    eax = 1;
    return rax;
label_0:
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402e00 */
#include <stdint.h>
 
uint64_t fcn_00402e00 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (edi != 1) {
        goto label_0;
    }
    rax = fcn_004050a0 (4, rsi);
    edx = 5;
    do {
        rax = dcgettext (0, "error reading %s");
        rbx = rax;
        rax = errno_location ();
        rcx = rbp;
        rdx = rbx;
        edi = 0;
        esi = *(rax);
        eax = 0;
        void (*0x4016d0)() ();
label_0:
        if (edi != 2) {
            goto label_1;
        }
        rax = fcn_00405170 (0, 3, rsi);
        edx = 5;
        esi = "%s: file has shrunk too much";
    } while (1);
label_1:
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x402e80 */
#include <stdint.h>
 
int64_t fcn_00402e80 (int64_t arg1, void * arg2, int32_t arg3, int32_t arg4, int64_t arg5) {
    int32_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r14d = esi;
    r13d = 0x2000;
    rbx = rdx;
    rdx = r8;
    rdx -= rcx;
    rax = rdx;
    rax >>= 0x3f;
    rax >>= 0x33;
    *(rsp) = rdi;
    rdx += rax;
    *((rsp + 8)) = rcx;
    rcx = rdi;
    edi = r14d;
    edx &= 0x1fff;
    rdx -= rax;
    if (rdx != 0) {
        r13 = rdx;
    }
    r8 -= r13;
    rsi = r8;
    r12 = r8;
    rax = fcn_004029f0 (rdi, rsi, 0);
    if (rax < 0) {
        goto label_3;
    }
    rbp = rsp + 0x10;
    rax = fcn_00405310 (r14d, rbp, r13);
    r8 = rax;
    if (rax == -1) {
        goto label_4;
    }
    if (rbx == 0) {
        goto label_5;
    }
    if (rax == 0) {
        goto label_5;
    }
    eax = *(0x0060b2b9);
    r15 = rbx;
    al = (*((rsp + r8 + 0xf)) != al) ? 1 : 0;
    eax = (int32_t) al;
    r15 -= rax;
label_1:
    if (r8 == 0) {
        goto label_6;
    }
    r13d = *(0x0060b2b9);
    while (rbx == 0) {
        r8--;
        rax = r15 - 1;
        if (r15 == 0) {
            goto label_7;
        }
label_0:
        r15 = rax;
        if (r8 == 0) {
            goto label_6;
        }
    }
    rdx = r8;
    esi = r13d;
    rdi = rbp;
    rax = memrchr ();
    if (rax == 0) {
        goto label_6;
    }
    rax -= rbp;
    r8 = rax;
    rax = r15 - 1;
    if (r15 != 0) {
        goto label_0;
    }
label_7:
    rbx = *((rsp + 8));
    if (r12 > rbx) {
        rcx = *(rsp);
        *((rsp + 8)) = r8;
        rax = fcn_004029f0 (r14d, rbx, 0);
        if (rax < 0) {
            goto label_3;
        }
        rsi -= rbx;
        eax = fcn_00402b10 (r14d, r12);
        r8 = *((rsp + 8));
        if (eax != 0) {
            goto label_8;
        }
    }
    rbx = r8;
    rbx++;
    if (rbx != 0) {
        rsi = rbx;
        fcn_00402a90 (rbp);
    }
    rcx = *(rsp);
    rax = fcn_004029f0 (r14d, r12 + rbx, 0);
    rax = ~rax;
    rax >>= 0x3f;
    while (rax < 0) {
label_3:
        eax = 0;
label_2:
        return rax;
label_5:
        r15 = rbx;
        goto label_1;
label_6:
        if (r12 == *((rsp + 8))) {
            goto label_9;
        }
        r12 -= 0x2000;
        rcx = *(rsp);
        rax = fcn_004029f0 (r14d, r12, 0);
    }
    rax = fcn_00405310 (r14d, rbp, 0x2000);
    r8 = rax;
    if (rax == -1) {
        goto label_4;
    }
    if (rax != 0) {
        goto label_1;
    }
label_9:
    eax = 1;
    goto label_2;
label_4:
    rax = fcn_004050a0 (4, *(rsp));
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    goto label_2;
label_8:
    eax = fcn_00402e00 (eax, *(rsp));
    eax = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4030d0 */
#include <stdint.h>
 
uint64_t fcn_004030d0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION]... [FILE]...\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "Print the first %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n");
    edx = 0xa;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
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
    edx = 5;
    rax = dcgettext (0, "  -c, --bytes=[-]NUM       print the first NUM bytes of each file;\n                             with the leading '-', print all but the last\n                             NUM bytes of each file\n  -n, --lines=[-]NUM       print the first NUM lines instead of the first %d;\n                             with the leading '-', print all but the last\n                             NUM lines of each file\n");
    edx = 0xa;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -q, --quiet, --silent    never print headers giving file names\n  -v, --verbose            always print headers giving file names\n");
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
    edx = 5;
    rbp = stdout;
    rax = dcgettext (0, "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x407912;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40798c;
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
        esi = "head";
        ecx = 5;
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
        eax = strncmp (rax, 0x407996, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40792e;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "head";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x4098bf;
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
            eax = strncmp (rax, 0x407996, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "head";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40792e;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "head";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x403560 */
#include <stdint.h>
 
uint64_t fcn_00403560 (void * arg1, void * arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r13d = edi;
    rbx = rdx;
    r12d = 0;
    while (rax != -1) {
        if (rax == 0) {
            goto label_1;
        }
        r12 += rax;
        rbp += rax;
        rbx -= rax;
        if (rbx == 0) {
            goto label_2;
        }
        rax = fcn_00405310 (r13d, rbp, rbx);
    }
    do {
label_2:
        rax = r12;
        return rax;
label_1:
        errno_location ();
        *(rax) = 0;
        rax = r12;
        return rax;
label_0:
        r12d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4035e0 */
#include <stdint.h>
 
int64_t fcn_004035e0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rsi + 0x14;
    *((rsi + 0x14)) = 0;
    r8d = 0x30;
    rsi = 0xcccccccccccccccd;
    r9 = 0x6666666666666667;
    if (rdi < 0) {
        goto label_0;
    }
    do {
        rax = rdi;
        rcx--;
        rdx:rax = rax * rsi;
        rdx >>= 3;
        rax = rdx * 5;
        rax += rax;
        rdi -= rax;
        edi += 0x30;
        *(rcx) = dil;
        rdi = rdx;
    } while (rdx != 0);
    rax = rcx;
    return rax;
    do {
        rcx = rsi;
label_0:
        rax = rdi;
        rsi = rcx - 1;
        rdx:rax = rax * r9;
        rax = rdi;
        rax >>= 0x3f;
        rdx >>= 2;
        rdx -= rax;
        rax = rdx * 5;
        eax = r8 + rax*2;
        eax -= edi;
        rdi = rdx;
        *((rcx - 1)) = al;
    } while (rdx != 0);
    rcx -= 2;
    *((rsi - 1)) = 0x2d;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x403680 */
#include <stdint.h>
 
int64_t fcn_00403680 (int32_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4036d0 */
#include <stdint.h>
 
uint64_t fcn_004036d0 (char ** arg1) {
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
            edi = 0x408338;
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
        *(0x0060b2d0) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x403770 */
#include <stdint.h>
 
uint64_t fcn_00403770 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00407100 ();
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
        eax = 0x40833e;
        ebx = 0x408349;
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
        eax = 0x408342;
        ebx = 0x408345;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40988f;
    ebx = 0x40833c;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x403870 */
#include <stdint.h>
 
uint64_t fcn_00403870 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 24760 named .text */
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
    /* switch table (11 cases) at 0x4083a0 */
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
    *((rsp + 0x50)) = 0x40988f;
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
        /* switch table (127 cases) at 0x4083f8 */
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
    rax = fcn_00403870 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x4087f0 */
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
    /* switch table (127 cases) at 0x408be8 */
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
    *((rsp + 0x50)) = 0x40988f;
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
        rax = fcn_00406eb0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40988f;
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
        *((rsp + 0x50)) = 0x40833c;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00403770 (0x40834d, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00403770 (0x40988f, r13d);
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
        *((rsp + 0x50)) = 0x40833c;
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
        *((rsp + 0x50)) = 0x40988f;
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
    *((rsp + 0x50)) = 0x40833c;
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
    rax = fcn_00403870 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40988f;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x404aa0 */
#include <stdint.h>
 
uint64_t fcn_00404aa0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0060b258);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060b270) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60b260) {
        goto label_2;
    }
    rax = fcn_00405970 (rbx, rsi);
    *(0x0060b258) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060b270);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060b270) = r12d;
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
        rax = fcn_00403870 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60b2e0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00405910 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00403870 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00405970 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060b260]");
        rbx = rax;
        *(0x0060b258) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00405b60 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4050a0 */
#include <stdint.h>
 
int64_t fcn_004050a0 (int64_t arg1, void * arg2) {
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
label_0:
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
    fcn_00404aa0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
    rdx = rsi;
    esi = edi;
    edi = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405140 */
#include <stdint.h>
 
int64_t fcn_00405140 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0060b3e0]");
        __asm ("movdqa xmm1, xmmword [0x0060b3f0]");
        __asm ("movdqa xmm2, xmmword [0x0060b400]");
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
        fcn_00404aa0 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405170 */
#include <stdint.h>
 
int64_t fcn_00405170 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00404aa0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4052f0 */
#include <stdint.h>
 
void fcn_004052f0 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x60b220;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x404aa0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405310 */
#include <stdint.h>
 
uint64_t fcn_00405310 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405370 */
#include <stdint.h>
 
void fcn_00405370 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40908b);
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
        /* switch table (10 cases) at 0x409378 */
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
    void (*0x401740)() ();
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
    void (*0x401740)() ();
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
    void (*0x401740)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4057d0 */
#include <stdint.h>
 
uint64_t fcn_004057d0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00405370 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405910 */
#include <stdint.h>
 
uint64_t fcn_00405910 (int64_t arg1) {
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
    return fcn_00405b60 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405970 */
#include <stdint.h>
 
uint64_t fcn_00405970 (int64_t arg1, int64_t arg2) {
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
    return fcn_00405b60 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405b10 */
#include <stdint.h>
 
uint64_t fcn_00405b10 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00405910 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405b60 */
#include <stdint.h>
 
uint64_t fcn_00405b60 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060b200), 0, 0x4079eb);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405ba0 */
#include <stdint.h>
 
uint64_t fcn_00405ba0 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
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
    eax = fcn_00405ca0 (rdi, 0, edx, rsp + 8, r8);
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
    eax -= eax;
    eax &= 0xffffffd7;
    eax += 0x4b;
    *(r14) = eax;
    do {
label_0:
        rax = fcn_004052f0 (r12);
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
        if (ebp == 1) {
            goto label_3;
        }
    } while (ebp != 3);
    *(rax) = 0;
    goto label_0;
label_3:
    *(rax) = 0x4b;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x405ca0 */
#include <stdint.h>
 
uint64_t fcn_00405ca0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x409458 */
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
    /* switch table (54 cases) at 0x4095d8 */
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
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtoumax");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4060e0 */
#include <stdint.h>
 
uint64_t fcn_004060e0 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4061c0 */
#include <stdint.h>
 
int64_t fcn_004061c0 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4067e0 */
#include <stdint.h>
 
uint64_t fcn_004067e0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x4098a1;
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
            fcn_004060e0 (r12, rbx);
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
        fcn_004060e0 (r12, rbx);
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
    eax = fcn_004061c0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_004061c0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x406db0 */
#include <stdint.h>
 
int32_t fcn_00406db0 (int64_t arg_10h) {
    eax = *(0x0060b27c);
    *(0x0060b420) = eax;
    eax = *(0x0060b278);
    *(0x0060b424) = eax;
    eax = *((rsp + 0x10));
    fcn_004067e0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060b27c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060b460) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060b274) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x406e30 */
#include <stdint.h>
 
void fcn_00406e30 (void) {
    r9d = 0;
    fcn_00406db0 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x406eb0 */
#include <stdint.h>
 
uint64_t fcn_00406eb0 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_004070a0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x406f30 */
#include <stdint.h>
 
int64_t fcn_00406f30 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x407040 */
#include <stdint.h>
 
uint64_t fcn_00407040 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00407670 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4070a0 */
#include <stdint.h>
 
uint64_t fcn_004070a0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x4098c4;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x407100 */
#include <stdint.h>
 
uint64_t fcn_00407100 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x4098bf;
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
        r15d = 0x4098bf;
label_2:
        *(0x0060b458) = r15;
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
        r15d = 0x4098bf;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x4082ef;
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
    fcn_00407670 (rbx);
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
        r15d = 0x4098bf;
        rbx = rax;
        free (r15);
        fcn_00407670 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x407670 */
#include <stdint.h>
 
uint64_t fcn_00407670 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_004076f0 (rbx);
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
    void (*0x4014b0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x4076f0 */
#include <stdint.h>
 
uint32_t fcn_004076f0 (int64_t arg1) {
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
    void (*0x401630)() ();
label_1:
    fcn_00407730 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x407730 */
#include <stdint.h>
 
int64_t fcn_00407730 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x401700)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x407800 */
#include <stdint.h>
 
int64_t fcn_00407800 (void) {
    rax = 0x60b1e8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_head.elf @ 0x407818 */
#include <stdint.h>
 
void fcn_00407818 (int64_t arg3) {
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
