#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x401fd0 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    struct sigaction * oldact;
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_68h;
    int64_t var_78h;
    int64_t var_88h;
    int64_t var_98h;
    int64_t var_a8h;
    rdi = argc;
    rsi = argv;
    rbx = rsi;
    rax = getenv ("POSIXLY_CORRECT");
    edi = 0x614500;
    r12 = rax;
    sigemptyset ();
    if (r12 == 0) {
        goto label_49;
    }
label_33:
    sigaction (2, 0, rsp + 0x20);
    if (*((rsp + 0x20)) != 1) {
        esi = 2;
        edi = 0x614500;
        sigaddset ();
    }
    __asm ("movdqa xmm0, xmmword [0x00614500]");
    __asm ("movdqa xmm1, xmmword [0x00614510]");
    esi = 0xa;
    edi = 0x614500;
    __asm ("movdqa xmm2, xmmword [0x00614520]");
    __asm ("movdqa xmm3, xmmword [0x00614530]");
    __asm ("movdqa xmm4, xmmword [0x00614540]");
    __asm ("movdqa xmm5, xmmword [0x00614550]");
    __asm ("movups xmmword [rsp + 0x28], xmm0");
    __asm ("movdqa xmm6, xmmword [0x00614560]");
    __asm ("movdqa xmm7, xmmword [0x00614570]");
    __asm ("movups xmmword [rsp + 0x38], xmm1");
    __asm ("movups xmmword [rsp + 0x48], xmm2");
    __asm ("movups xmmword [rsp + 0x58], xmm3");
    __asm ("movups xmmword [rsp + 0x68], xmm4");
    __asm ("movups xmmword [rsp + 0x78], xmm5");
    __asm ("movups xmmword [rsp + 0x88], xmm6");
    __asm ("movups xmmword [rsp + 0x98], xmm7");
    eax = sigismember ();
    if (eax != 0) {
        goto label_50;
    }
label_23:
    esi = 2;
    edi = 0x614500;
    eax = sigismember ();
    if (eax != 0) {
        goto label_51;
    }
label_22:
    fcn_00406a10 (*(rbx));
    setlocale (6, 0x410daf);
    bindtextdomain (0x40dca5, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40dca5, rsi);
    edi = 0x404720;
    fcn_0040da80 ();
    rax = getpagesize ();
    rax = (int64_t) eax;
    *(0x00614658) = rax;
    eax = 0;
    fcn_00406900 (ebp, rbx, 0x40dc23, 0x40dca5, *(0x006142c8), fcn_00405460);
    r8d = 0;
    rsi = rbx;
    ecx = 0x40f680;
    edx = 0x410daf;
    edi = ebp;
    *(0x006142b8) = 0;
    eax = fcn_0040a500 ();
    if (eax != 0xffffffff) {
        goto label_43;
    }
    eax = 0;
    do {
        *((rax + 0x6143e0)) = al;
        rax++;
    } while (rax != 0x100);
    eax = *(0x0061433c);
    if (ebp <= eax) {
        goto label_52;
    }
    rdx = (int64_t) eax;
    eax = ~eax;
    r13d = 0;
    r14d = 0;
    *((rsp + 8)) = 0;
    eax += ebp;
    r12 = rbx + rdx*8;
    rax += rdx;
    rbx = rbx + rax*8 + 8;
label_0:
    r15 = *(r12);
    rax = strchr (r15, 0x3d);
    if (rax == 0) {
        goto label_47;
    }
    r8 = rax + 1;
    rdx = r15;
    eax = 0x69;
    ecx = 0x40dcba;
    do {
        rdx++;
        rcx++;
        if (*((rdx - 1)) != al) {
            goto label_53;
        }
        eax = *(rcx);
    } while (al != 0);
    eax = *(rdx);
    if (al != 0) {
        if (al != 0x3d) {
            goto label_53;
        }
    }
    *(0x00614668) = r8;
label_2:
    r12 += 8;
    if (rbx != r12) {
        goto label_0;
    }
    if (r14 == 0) {
        goto label_54;
    }
    *(0x00614648) = r14;
    *(0x00614650) = r14;
label_3:
    if (*(0x00614640) == 0) {
        *(0x0061460c) &= 0xffffffe7;
    }
    eax = imp.__libc_start_main;
    if ((eax & 0x101000) != 0) {
        eax |= 0x101000;
        *(0x00614608) = eax;
    }
    esi = imp.__libc_start_main;
    if ((sil & 1) != 0) {
        goto label_55;
    }
    ecx = imp.__libc_start_main;
    if ((cl & 0x10) != 0) {
        goto label_56;
    }
    if ((sil & 0xc) != 0) {
        goto label_57;
    }
    if ((cl & 8) == 0) {
        goto label_58;
    }
    if (r13 != 0) {
        rax = r13;
        edx = 0;
        rax = *(rdx_rax) / 0x00614650;
        rdx = *(rdx_rax) % 0x00614650;
        *(0x00614638) = rax;
        *(0x00614630) = rdx;
    }
label_7:
    if ((cl & 4) == 0) {
        goto label_59;
    }
    if (rbp != -1) {
        rax = rbp;
        edx = 0;
        rax = *(rdx_rax) / 0x00614650;
        rdx = *(rdx_rax) % 0x00614650;
        *(0x006142c0) = rax;
        *(0x00614610) = rdx;
    }
label_6:
    rax = *((rsp + 8));
    if ((sil & 0x10) == 0) {
        goto label_60;
    }
    if (rax != 0) {
        edx = 0;
        rax = *(rdx_rax) / 0x00614648;
        rdx = *(rdx_rax) % 0x00614648;
        *(0x00614628) = rax;
        *(0x00614620) = rdx;
    }
label_10:
    ebp = imp.__libc_start_main;
    eax = ecx;
    eax &= 1;
    edx = ebp;
    edx &= 0x800;
    edx |= eax;
    if (edx != 0) {
        goto label_61;
    }
    if (*(0x00614638) == 0) {
        goto label_62;
    }
label_29:
    *(0x006145a8) = 1;
    eax = fcn_00404900;
label_5:
    *(0x006144e0) = rax;
    eax = ecx;
    eax &= 0xfffffffe;
    *(0x00614608) = eax;
    eax = ebp;
    eax &= 7;
    edx = rax - 1;
    if ((edx & eax) != 0) {
        goto label_63;
    }
    eax = ebp;
    eax &= 0x18;
    edx = rax - 1;
    if ((edx & eax) != 0) {
        goto label_64;
    }
    eax = ebp;
    eax &= 0x60;
    edx = rax - 1;
    if ((edx & eax) != 0) {
        goto label_65;
    }
    eax = ebp;
    eax &= 0x3000;
    edx = rax - 1;
    if ((edx & eax) != 0) {
        goto label_66;
    }
    eax = ecx;
    edx = esi;
    eax &= 0x4002;
    edx &= 0x4002;
    ebx = rax - 1;
    ebx &= eax;
    eax = rdx - 1;
    eax &= edx;
    ebx |= eax;
    *((rsp + 0x1c)) = ebx;
    if (ebx != 0) {
        goto label_67;
    }
    if ((cl & 2) != 0) {
        rax = *(0x006142c0);
        rax |= *(0x00614610);
        *(0x006144eb) = 1;
        0x006144e9 = (rax == 0) ? 1 : 0;
        ecx &= 0xfffffffc;
        *(0x00614608) = ecx;
    }
    if ((sil & 2) != 0) {
        rax = *(0x006142c0);
        rax |= *(0x00614610);
        *(0x006144ea) = 1;
        0x006144e8 = (rax == 0) ? 1 : 0;
        esi &= 0xfffffffd;
        *(0x00614604) = esi;
    }
    if ((bpl & 1) == 0) {
        goto label_68;
    }
    eax = 0x6143e0;
    ecx = 0x6144e0;
    do {
        edx = *(rax);
        rax++;
        edx = *((rdx + 0x40f0e0));
        *((rax - 1)) = dl;
    } while (rcx != rax);
    *(0x00614600) = 1;
label_68:
    if ((bpl & 0x40) == 0) {
        goto label_69;
    }
    rax = ctype_toupper_loc ();
    ecx = 0x6144e0;
    rsi = *(rax);
    eax = 0x6143e0;
    do {
        edx = *(rax);
        rax++;
        edx = *((rsi + rdx*4));
        *((rax - 1)) = dl;
    } while (rcx != rax);
label_12:
    *(0x00614600) = 1;
label_11:
    if ((bpl & 2) == 0) {
        goto label_70;
    }
    eax = 0x6143e0;
    ecx = 0x6144e0;
    do {
        edx = *(rax);
        rax++;
        edx = *((rdx + 0x40f2e0));
        *((rax - 1)) = dl;
    } while (rcx != rax);
label_9:
    *(0x00614600) = 1;
    *(0x006142ba) = 0x25;
    *(0x006142b9) = 0x40;
label_8:
    rbp = imp.__libc_start_main;
    r12d = imp.__libc_start_main;
    rax = errno_location ();
    *((rsp + 8)) = rax;
    if (rbp == 0) {
        goto label_71;
    }
    eax = fcn_004048b0 (0, rbp, r12d, 0);
    if (eax < 0) {
        goto label_72;
    }
label_24:
    esi = 0;
    edx = 1;
    edi = 0;
    rax = lseek ();
    rsi = imp.__libc_start_main;
    r12d = imp.__libc_start_main;
    rdx = rax;
    rdx = ~rdx;
    rdx >>= 0x3f;
    *(0x006145bc) = dl;
    edx = 0;
    __asm ("cmovs rax, rdx");
    *(0x006145b0) = rax;
    rax = *((rsp + 8));
    eax = *(rax);
    *(0x006145b8) = eax;
    if (rsi == 0) {
        goto label_73;
    }
    eax = imp.__libc_start_main;
    edx = 0;
    dl = ((ah & 0x10) == 0) ? 1 : 0;
    ebp >>= 6;
    ebp &= 0x80;
    edx <<= 6;
    ebp |= r12d;
    ebp |= edx;
    if (*(0x00614628) != 0) {
        goto label_74;
    }
    eax &= 0x200;
    eax -= eax;
    eax &= 0x200;
    ebp |= eax;
label_14:
    edx |= 1;
    eax = fcn_004048b0 (1, *(0x00614660), ebp, 0x1b6);
    if (eax < 0) {
        goto label_75;
    }
label_13:
    rbp = imp.__libc_start_main;
    if (rbp != 0) {
        if ((*(0x0061460d) & 2) != 0) {
            goto label_32;
        }
        r14 = imp.__libc_start_main;
        edx = 0;
        r12 = rbp;
        rax = 0x7fffffffffffffff;
        rax = rdx_rax / r14;
        rdx = rdx_rax % r14;
        r12 *= r14;
        r12 += *(0x00614620);
        if (rbp > rax) {
            goto label_76;
        }
        eax = fcn_00404bf0 (r12);
        if (eax != 0) {
            goto label_77;
        }
    }
label_32:
    rax = fcn_00405c40 ();
    rbp = imp.__libc_start_main;
    r12 = imp.__libc_start_main;
    *(0x006145d0) = rax;
    rax += 0x3b9aca00;
    *(0x006145c8) = rax;
    rax = rbp;
    rax |= r12;
    if (rax != 0) {
        r15 = imp.__libc_start_main;
        r14 = imp.__libc_start_main;
        rax = fcn_00405150 (0, *(0x00614668), rbp, r15, 0x614630);
        if (rax != 0) {
            goto label_78;
        }
        rbp *= r15;
        rax = r12 + r14;
        rax += rbp;
        if (rax == *(0x006145b0)) {
            goto label_4;
        }
        if (*(0x006145a9) != 1) {
            goto label_78;
        }
    }
label_4:
    rdx = imp.__libc_start_main;
    rax = imp.__libc_start_main;
    rbx = rdx;
    rbx |= rax;
    if (rbx == 0) {
        goto label_20;
    }
    *((rsp + 0x20)) = rax;
    rax = fcn_00405150 (1, *(0x00614660), rdx, *(0x00614648), rsp + 0x20);
    if (rax == 0) {
        goto label_79;
    }
    rax = memset (*(0x00614590), 0, *(0x00614648));
    do {
        r12 = imp.__libc_start_main;
        rax = fcn_00404c30 (*(0x00614590), r12);
        if (r12 != rax) {
            goto label_80;
        }
        rbp--;
    } while (rbp != 0);
    rbp = *((rsp + 0x20));
    if (rbp != 0) {
label_21:
        rax = fcn_00404c30 (*(0x00614590), rbp);
        if (rax != rbp) {
            goto label_80;
        }
    }
label_20:
    rax = *(0x006142c0);
    rax |= *(0x00614610);
    if (rax == 0) {
        goto label_81;
    }
    if (*(0x00614598) == 0) {
        goto label_82;
    }
label_27:
    rax = fcn_00404ba0 ();
    *((rsp + 0x10)) = 0;
    r12d = 0;
    if (*(0x006142bc) == 4) {
        goto label_83;
    }
label_1:
    rbx = imp.__libc_start_main;
    eax = 0;
    rbp = imp.__libc_start_main;
    r15 = *(0x006142c0);
    rbp += *(0x006145e8);
    esi = imp.__libc_start_main;
    al = (rbx != 0) ? 1 : 0;
    rax += r15;
    if (rbp >= rax) {
invalid_funccall(); //        void (*0x4030a7)() ();
    }
label_83:
    rax = fcn_00405c40 ();
    if (rax < *(0x006145c8)) {
        goto label_1;
    }
    fcn_00403d50 (rax);
    *(0x006145c8) += 0x3b9aca00;
    goto label_1;
label_53:
    rax = r15;
    ecx = 0x6f;
    edx = 0x40dcbd;
    do {
        rax++;
        rdx++;
        if (*((rax - 1)) != cl) {
            goto label_84;
        }
        ecx = *(rdx);
    } while (cl != 0);
    eax = *(rax);
    if (al != 0x3d) {
        if (al != 0) {
            goto label_84;
        }
    }
    *(0x00614660) = r8;
    goto label_2;
label_84:
    rax = r15;
    ecx = 0x63;
    edx = "conv";
    do {
        rax++;
        rdx++;
        if (*((rax - 1)) != cl) {
            goto label_85;
        }
        ecx = *(rdx);
    } while (cl != 0);
    eax = *(rax);
    if (al != 0) {
        if (al != 0x3d) {
            goto label_85;
        }
    }
    eax = fcn_004059d0 (r8, "ascii", 0, "invalid conversion");
    *(0x0061460c) |= eax;
    goto label_2;
label_85:
    rax = r15;
    ecx = 0x69;
    edx = "iflag";
    do {
        rax++;
        rdx++;
        if (*((rax - 1)) != cl) {
            goto label_86;
        }
        ecx = *(rdx);
    } while (cl != 0);
    eax = *(rax);
    while (al == 0x3d) {
        eax = fcn_004059d0 (r8, "append", 0, "invalid input flag");
        *(0x00614608) |= eax;
        goto label_2;
    }
label_86:
    rax = r15;
    ecx = 0x6f;
    edx = "oflag";
    do {
        rax++;
        rdx++;
        if (*((rax - 1)) != cl) {
            goto label_87;
        }
        ecx = *(rdx);
    } while (cl != 0);
    eax = *(rax);
    if (al != 0) {
        goto label_88;
    }
label_28:
    eax = fcn_004059d0 (r8, "append", 0, "invalid output flag");
    *(0x00614604) |= eax;
    goto label_2;
label_52:
    *((rsp + 8)) = 0;
    rbp |= 0xffffffffffffffff;
    r13d = 0;
label_54:
    *(0x0061460c) |= 0x800;
    if (*(0x00614650) == 0) {
        *(0x00614650) = 0x200;
    }
    if (*(0x00614648) != 0) {
        goto label_3;
    }
    *(0x00614648) = 0x200;
    goto label_3;
label_78:
    if (*(0x006142bc) == 1) {
        goto label_4;
    }
    rdx = imp.__libc_start_main;
    rax = fcn_004084b0 (0, 3);
    edx = 5;
    rax = dcgettext (0, "%s: cannot skip to specified offset");
    eax = 0;
    eax = fcn_004041e0 (0, 0, rax, rbp, r8, r9);
    goto label_4;
label_61:
    edx = fcn_00404900;
    eax = 0x404a10;
    *(0x006145a8) = 0;
    if (eax == 0) {
        rax = rdx;
    }
    goto label_5;
label_15:
    rax = fcn_00404c30 (*(0x00614590), rsi);
    *(0x006145d8) += rax;
    if (rax != 0) {
        *(0x006145f8)++;
    }
    if (rax == *(0x00614588)) {
        goto label_89;
    }
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rbx = rax;
label_18:
    rax = dcgettext (0, "error writing %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (0, *(rax), rdx, rbx, r8, r9);
label_35:
    *((rsp + 0x10)) = 1;
label_16:
    if (*(0x006142c0) == 0) {
        goto label_90;
    }
label_25:
    if (*(0x006144eb) == 0) {
        if (*(0x006144e9) == 0) {
            goto label_91;
        }
    }
    fcn_004045a0 (0, 0);
label_91:
    if (*(0x006144ea) == 0) {
        if (*(0x006144e8) == 0) {
            goto label_19;
        }
    }
    fcn_004045a0 (1, 0);
label_19:
    fcn_00404760 ();
    fcn_004040b0 ();
    fcn_00404810 ();
    eax = *((rsp + 0x10));
    return rax;
label_59:
    if (rbp == -1) {
        goto label_6;
    }
    *(0x006142c0) = rbp;
    goto label_6;
label_58:
    if (r13 == 0) {
        goto label_7;
    }
    *(0x00614638) = r13;
    goto label_7;
label_70:
    bpl &= 4;
    if (bpl == 0) {
        goto label_8;
    }
    eax = 0x6143e0;
    do {
        edx = *(rax);
        rax++;
        edx = *((rdx + 0x40f1e0));
        *((rax - 1)) = dl;
    } while (rax != 0x6144e0);
    goto label_9;
label_60:
    if (rax == 0) {
        goto label_10;
    }
    *(0x00614628) = rax;
    goto label_10;
label_69:
    if ((bpl & 0x20) == 0) {
        goto label_11;
    }
    rax = ctype_tolower_loc ();
    ecx = 0x6144e0;
    rsi = *(rax);
    eax = 0x6143e0;
    do {
        edx = *(rax);
        rax++;
        edx = *((rsi + rdx*4));
        *((rax - 1)) = dl;
    } while (rcx != rax);
    goto label_12;
label_74:
    edx |= 2;
    eax = fcn_004048b0 (1, rsi, ebp, 0x1b6);
    if (eax >= 0) {
        goto label_13;
    }
    goto label_14;
label_36:
    rsi = imp.__libc_start_main;
    if (rsi != 0) {
        goto label_15;
    }
label_89:
    if (*(0x00614618) != 0) {
        goto label_92;
    }
label_34:
    esi = imp.__libc_start_main;
    if ((esi & 0x4000) != 0) {
        goto label_93;
    }
label_30:
    esi &= 0x8000;
    if (esi == 0) {
        goto label_16;
    }
label_17:
    edi = 1;
    eax = fsync ();
    if (eax == 0) {
        goto label_16;
    }
    rax = *((rsp + 8));
    if (*(rax) == 4) {
        goto label_17;
    }
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    esi = "fsync failed for %s";
    rbx = rax;
    goto label_18;
label_81:
    *((rsp + 0x10)) = 0;
label_26:
    if (*(0x006144eb) != 0) {
        goto label_94;
    }
label_31:
    if (*(0x006144ea) == 0) {
        goto label_19;
    }
    al = fcn_004045a0 (1, 0);
    if (al != 0) {
        goto label_19;
    }
    rdx = imp.__libc_start_main;
    rax = fcn_004084b0 (0, 3);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to discard cache for: %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (0, *(rax), rdx, rbx, r8, r9);
    *((rsp + 0x10)) = 1;
    goto label_19;
label_79:
    rdx = *((rsp + 0x20));
    if (rdx == 0) {
        goto label_20;
    }
    memset (*(0x00614590), 0, rdx);
    rbp = *((rsp + 0x20));
    goto label_21;
label_51:
    *((rsp + 0x20)) = 0x403d30;
    *((rsp + 0xa8)) = 0xc0000000;
    sigaction (2, rsp + 0x20, 0);
    goto label_22;
label_50:
    *((rsp + 0x20)) = 0x403d40;
    *((rsp + 0xa8)) = 0;
    sigaction (0xa, rsp + 0x20, 0);
    goto label_23;
label_71:
    edx = 5;
    rax = dcgettext (0, "standard input");
    rdx = rax;
    *(0x00614668) = rax;
    fcn_004043e0 (0, r12d, rdx);
    goto label_24;
label_90:
    if (*(0x00614610) != 0) {
        goto label_25;
    }
    goto label_26;
label_82:
    al = fcn_00404a80 ();
    goto label_27;
label_88:
    if (al == 0x3d) {
        goto label_28;
    }
label_87:
    rax = r15;
    ecx = 0x73;
    edx = "status";
    do {
        rax++;
        rdx++;
        if (*((rax - 1)) != cl) {
            goto label_95;
        }
        ecx = *(rdx);
    } while (cl != 0);
    eax = *(rax);
    if (al != 0x3d) {
        if (al != 0) {
            goto label_95;
        }
    }
    eax = fcn_004059d0 (r8, "none", 1, "invalid status level");
    *(0x006142bc) = eax;
    goto label_2;
label_62:
    rax = *(0x006142c0);
    rax--;
    if (rax <= 0xfffffffffffffffd) {
        goto label_29;
    }
    eax = esi;
    eax |= ecx;
    if ((ah & 0x40) != 0) {
        goto label_29;
    }
    *(0x006145a8) = 0;
    eax = fcn_00404900;
    goto label_5;
label_93:
    edi = 1;
    eax = fdatasync ();
    esi = imp.__libc_start_main;
    if (eax == 0) {
        goto label_30;
    }
    rax = *((rsp + 8));
    eax = *(rax);
    *((rsp + 0x1c)) = eax;
    eax -= 0x16;
    eax &= 0xffffffef;
    if (eax != 0) {
        goto label_96;
    }
label_40:
    *(0x0061460c) |= 0x8000;
    goto label_17;
label_94:
    al = fcn_004045a0 (0, 0);
    if (al != 0) {
        goto label_31;
    }
    rdx = imp.__libc_start_main;
    rax = fcn_004084b0 (0, 3);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to discard cache for: %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (0, *(rax), rdx, rbx, r8, r9);
    *((rsp + 0x10)) = 1;
    goto label_31;
label_77:
    rax = *((rsp + 8));
    rdx = rsp + 0x20;
    esi = 1;
    edi = 1;
    ebp = *(rax);
    eax = fxstat ();
    if (eax != 0) {
        goto label_97;
    }
    eax = *((rsp + 0x38));
    eax &= 0xf000;
    eax -= 0x4000;
    if ((eax & 0xffffb000) != 0) {
        goto label_32;
    }
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to truncate to %lu bytes in output file %s");
    eax = 0;
    fcn_004041e0 (1, ebp, rax, r12, rbx, r9);
label_49:
    esi = 0xa;
    edi = 0x614500;
    sigaddset ();
    goto label_33;
label_73:
    edx = 5;
    rax = dcgettext (0, "standard output");
    rdx = rax;
    *(0x00614660) = rax;
    fcn_004043e0 (1, r12d, rdx);
    goto label_32;
label_92:
    rdx = rsp + 0x20;
    esi = 1;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_98;
    }
    eax = *((rsp + 0x38));
    eax &= 0xf000;
    if (eax != 0x8000) {
        goto label_34;
    }
    edx = 1;
    esi = 0;
    edi = 1;
    rax = lseek ();
    rbx = rax;
    if (rax < 0) {
        goto label_34;
    }
    if (rax <= *((rsp + 0x50))) {
        goto label_34;
    }
    eax = fcn_00404bf0 (rax);
    if (eax == 0) {
        goto label_34;
    }
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rax = dcgettext (0, "failed to truncate to %ld bytes in output file %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (0, *(rax), rdx, rbx, rbp, r9);
    goto label_35;
label_95:
    rdi = r8;
    *((rsp + 0x10)) = r8;
    *((rsp + 0x20)) = 0;
    rax = fcn_004042d0 (rdi, rsp + 0x20);
    r8 = *((rsp + 0x10));
    rdx = r15;
    esi = 0x69;
    ecx = 0x40dcd8;
    do {
        rdx++;
        rcx++;
        if (*((rdx - 1)) != sil) {
            goto label_99;
        }
        esi = *(rcx);
    } while (sil != 0);
    edx = *(rdx);
    if (dl != 0x3d) {
        if (dl != 0) {
            goto label_99;
        }
    }
    rdi = imp.__libc_start_main;
    *(0x00614650) = rax;
    rdx = rdi + 2;
    rdi = 0x7fffffffffffffff;
    rdx += rdx;
    rdx = -rdx;
    if (rdx > rdi) {
        rdx = rdi;
    }
label_38:
    if (rax == 0) {
        goto label_100;
    }
    if (rax <= rdx) {
        goto label_39;
    }
    *((rsp + 0x20)) = 1;
label_37:
    rax = fcn_00408630 (r8);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid number");
    edx = 0;
    r8 = rbx;
    esi = 0x4b;
    rcx = rax;
    edi = 1;
    if (*((rsp + 0x20)) != 1) {
        esi = edx;
    }
    eax = 0;
    fcn_004041e0 (rdi, rsi, "%s: %s", rcx, r8, r9);
    rax = fcn_00404e50 ();
    goto label_36;
label_44:
    rdx = r15;
    esi = 0x73;
    ecx = 0x40dc0d;
    do {
        rdx++;
        rcx++;
        if (sil != *((rdx - 1))) {
            goto label_101;
        }
        esi = *(rcx);
    } while (sil != 0);
    edx = *(rdx);
    if (dl != 0x3d) {
        if (dl != 0) {
            goto label_101;
        }
    }
    *((rsp + 8)) = rax;
label_39:
    if (*((rsp + 0x20)) == 0) {
        goto label_2;
    }
    goto label_37;
label_99:
    rdx = r15;
    esi = 0x6f;
    ecx = 0x40dcdc;
    do {
        rdx++;
        rcx++;
        if (*((rdx - 1)) != sil) {
            goto label_102;
        }
        esi = *(rcx);
    } while (sil != 0);
    edx = *(rdx);
    if (dl != 0x3d) {
        if (dl != 0) {
            goto label_102;
        }
    }
    rdx = imp.__libc_start_main;
    *(0x00614648) = rax;
    rdi = 0x7fffffffffffffff;
    rdx = -rdx;
    if (rdx > rdi) {
        rdx = rdi;
    }
    goto label_38;
label_41:
    rdx = r15;
    esi = 0x63;
    ecx = 0x40dce0;
    do {
        rdx++;
        rcx++;
        if (*((rdx - 1)) != sil) {
            goto label_103;
        }
        esi = *(rcx);
    } while (sil != 0);
    edx = *(rdx);
    if (dl != 0x3d) {
        if (dl != 0) {
            goto label_103;
        }
    }
    *(0x00614640) = rax;
    if (rax != 0) {
        goto label_39;
    }
label_100:
    *((rsp + 0x20)) = 4;
    goto label_37;
label_98:
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    esi = "cannot fstat %s";
    rbx = rax;
    goto label_18;
label_96:
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "fdatasync failed for %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (0, *(rax), rdx, rbx, r8, r9);
    *((rsp + 0x10)) = 1;
    goto label_40;
label_55:
    rax = fcn_00408630 ("fullblock");
    edx = 5;
    rbx = rax;
label_46:
    rax = dcgettext (0, "invalid output flag");
    eax = 0;
    fcn_004041e0 (0, 0, "%s: %s", rax, rbx, r9);
label_43:
    rax = fcn_00405460 (1);
label_102:
    rdx = r15;
    esi = 0x62;
    ecx = 0x40dce1;
label_42:
    rdx++;
    rcx++;
    if (*((rdx - 1)) != sil) {
        goto label_41;
    }
    esi = *(rcx);
    if (sil != 0) {
        goto label_42;
    }
    edx = *(rdx);
    if (dl == 0x3d) {
        goto label_104;
    }
    if (dl != 0) {
        goto label_41;
    }
label_104:
    rdi = imp.__libc_start_main;
    r14 = rax;
    rdx = rdi + 2;
    rdi = 0x7fffffffffffffff;
    rdx += rdx;
    rdx = -rdx;
    if (rdx > rdi) {
        rdx = rdi;
    }
    goto label_38;
label_47:
    rax = fcn_00408630 (r15);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "unrecognized operand %s");
    eax = 0;
    fcn_004041e0 (0, 0, rax, rbx, r8, r9);
    goto label_43;
label_80:
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "writing to %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (0, *(rax), rdx, rbx, r8, r9);
    fcn_00404e30 ();
label_72:
    rax = fcn_004083e0 (4, *(0x00614668));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to open %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (1, *(rax), rdx, rbx, r8, r9);
label_75:
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to open %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (1, *(rax), rdx, rbx, r8, r9);
label_76:
    edx = 5;
    rax = dcgettext (0, "offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks");
    eax = 0;
    fcn_004041e0 (1, 0, rax, rbp, r14, r9);
label_97:
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot fstat %s");
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    fcn_004041e0 (1, *(rax), rdx, rbx, r8, r9);
label_103:
    rdx = r15;
    esi = 0x73;
    ecx = 0x40dbfd;
label_45:
    rdx++;
    rcx++;
    if (*((rdx - 1)) != sil) {
        goto label_44;
    }
    esi = *(rcx);
    if (sil != 0) {
        goto label_45;
    }
label_64:
    edx = 5;
    rax = dcgettext (0, "cannot combine block and unblock");
    eax = 0;
    fcn_004041e0 (1, 0, rax, rcx, r8, r9);
label_65:
    edx = 5;
    rax = dcgettext (0, "cannot combine lcase and ucase");
    eax = 0;
    fcn_004041e0 (1, 0, rax, rcx, r8, r9);
label_56:
    rax = fcn_00408630 ("seek_bytes");
    edx = 5;
    esi = "invalid input flag";
    rbx = rax;
    goto label_46;
label_57:
    sil &= 4;
    eax = "skip_bytes";
    edi = "count_bytes";
    if (sil == 0) {
        rdi = rax;
    }
    rax = fcn_00408630 (rdi);
    edx = 5;
    esi = "invalid output flag";
    rbx = rax;
    goto label_46;
label_63:
    edx = 5;
    rax = dcgettext (0, "cannot combine any two of {ascii,ebcdic,ibm}");
    eax = 0;
    fcn_004041e0 (1, 0, rax, rcx, r8, r9);
label_66:
    edx = 5;
    rax = dcgettext (0, "cannot combine excl and nocreat");
    eax = 0;
    fcn_004041e0 (1, 0, rax, rcx, r8, r9);
label_67:
    edx = 5;
    rax = dcgettext (0, "cannot combine direct and nocache");
    eax = 0;
    rax = fcn_004041e0 (1, 0, rax, rcx, r8, r9);
label_101:
    rdx = r15;
    esi = 0x63;
    ecx = "count";
label_48:
    rdx++;
    rcx++;
    if (*((rdx - 1)) != sil) {
        goto label_47;
    }
    esi = *(rcx);
    if (sil != 0) {
        goto label_48;
    }
    edx = *(rdx);
    if (dl == 0x3d) {
        goto label_105;
    }
    if (dl != 0) {
        goto label_47;
    }
label_105:
    goto label_39;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x403c7b */
#include <stdint.h>
 
int32_t fcn_00403c7b (void) {
    eax = 0x614348;
    if (rax != 0x614348) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x614348;
invalid_funccall(); //        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x403cd1 */
#include <stdint.h>
 
int64_t fcn_00403cd1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00614388) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x613e48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00614390) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00403c7b ();
    *(0x00614388) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x403d28 */
#include <stdint.h>
 
int64_t fcn_00403d28 (void) {
    do {
        esi = 0x614348;
        ecx = 2;
        rsi -= 0x614348;
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
            edi = 0x614348;
invalid_funccall(); //            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x403d50 */
#include <stdint.h>
 
void fcn_00403d50 (int64_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_30h;
    int64_t var_2beh;
    int64_t var_54ch;
    rdi = arg1;
    rbx = rdi;
    if (rdi == 0) {
        goto label_7;
    }
label_1:
    r8d = 1;
    rax = fcn_00405d70 (*(0x006145d8), rsp + 0x30, 0x1d1, 1, r8d);
    r8d = 1;
    r12 = rax;
    rax = fcn_00405d70 (*(0x006145d8), rsp + 0x2be, 0x1f1, 1, r8d);
    r13 = rax;
    rax = imp.__libc_start_main;
    if (rax >= rbx) {
        goto label_8;
    }
    rbx -= rax;
    r8 = rbx;
    if (rbx < 0) {
        goto label_9;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rbx");
    do {
        __asm ("divsd xmm0, qword [0x0040f6a0]");
        *((rsp + 8)) = xmm0;
        rax = fcn_00405d70 (*(0x006145d8), rsp + 0x54c, 0x1d1, 0x3b9aca00, r8);
        rdi = rax;
        rbx = rax;
        strlen (rdi);
        edx = *(0x0040f0c0);
        xmm0 = *((rsp + 8));
        *((rbx + rax)) = dx;
        edx = *(0x0040f0c2);
        *((rbx + rax + 2)) = dl;
label_0:
        r8d = "%g s";
        if (rbp != 0) {
            rdi = stderr;
            rax = *((rdi + 0x28));
            if (rax >= *((rdi + 0x30))) {
                goto label_10;
            }
            rdx = rax + 1;
            r8d = "%.0f s";
            *((rdi + 0x28)) = rdx;
            *(rax) = 0xd;
        }
label_5:
        ecx = 0x18;
        edx = 1;
        esi = 0x18;
        eax = 1;
        rdi = rsp + 0x10;
        snprintf_chk ();
        strlen (r12);
        if (*((r12 + rax - 2)) == 0x20) {
            goto label_11;
        }
        strlen (r13);
        r14 = imp.__libc_start_main;
        edx = 5;
        if (*((r13 + rax - 2)) == 0x20) {
            goto label_12;
        }
        rax = dcgettext (0, "%lu bytes (%s, %s) copied, %s, %s");
        r9 = r13;
        rcx = rsp + 0x18;
label_2:
        rdi = stderr;
        rdx = rax;
        r8 = r12;
        rcx = r14;
        esi = 1;
        eax = 0;
        eax = fprintf_chk ();
        ebx = eax;
label_3:
        if (rbp == 0) {
            goto label_13;
        }
        if (ebx >= 0) {
            ecx = imp.__libc_start_main;
            if (ecx > ebx) {
                goto label_14;
            }
        }
label_4:
        *(0x006145c0) = ebx;
label_6:
        return;
label_9:
        rax = rbx;
        rdx = rbx;
        xmm0 = 0;
        rax >>= 1;
        edx &= 1;
        rax |= rdx;
        __asm ("cvtsi2sd xmm0, rax");
        __asm ("addsd xmm0, xmm0");
    } while (1);
label_13:
    rdi = stderr;
    rax = *((rdi + 0x28));
    if (rax < *((rdi + 0x30))) {
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
        return;
label_8:
        edx = 5;
        rax = dcgettext (0, "Infinity");
        r8d = "%s B/s";
        ecx = 0x28e;
        rbx = rsp + 0x54c;
        r9 = rax;
        edx = 1;
        esi = 0x28e;
        rdi = rbx;
        eax = 0;
        snprintf_chk ();
        xmm0 = 0;
        goto label_0;
label_7:
        rax = fcn_00405c40 ();
        rbx = rax;
        goto label_1;
label_12:
        dcgettext (0, "%lu bytes (%s) copied, %s, %s");
        r9 = rsp + 0x20;
        goto label_2;
label_11:
        r12 = imp.__libc_start_main;
        r8d = 5;
        edx = "%lu bytes copied, %s, %s";
        edi = 0;
        esi = "%lu byte copied, %s, %s";
        rcx = r12;
        rax = dcngettext ();
        r9 = rbx;
        r8 = rsp + 0x10;
        rcx = r12;
        rdi = stderr;
        rdx = rax;
        esi = 1;
        eax = 0;
        eax = fprintf_chk ();
        ebx = eax;
        goto label_3;
label_14:
        rdi = stderr;
        ecx -= ebx;
        edx = 0x40db4f;
        eax = 0;
        r8d = 0x410daf;
        esi = 1;
        fprintf_chk ();
        goto label_4;
label_10:
        esi = 0xd;
        *((rsp + 8)) = xmm0;
        overflow ();
        r8d = "%.0f s";
        xmm0 = *((rsp + 8));
        goto label_5;
    }
    esi = 0xa;
    overflow ();
    goto label_6;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4040b0 */
#include <stdint.h>
 
void fcn_004040b0 (void) {
    if (*(0x006142bc) == 1) {
        goto label_1;
    }
    ecx = imp.__libc_start_main;
    if (ecx > 0) {
        rdi = stderr;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_2;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
label_0:
        *(0x006145c0) = 0;
    }
    r13 = imp.__libc_start_main;
    edx = 5;
    rbx = imp.__libc_start_main;
    r12 = imp.__libc_start_main;
    rbp = imp.__libc_start_main;
    rax = dcgettext (0, "%lu+%lu records in\n%lu+%lu records out\n");
    rcx = rbx;
    r9 = r12;
    rdi = stderr;
    rdx = rax;
    r8 = rbp;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    rbx = imp.__libc_start_main;
    while (1) {
        if (*(0x006142bc) != 2) {
            edi = 0;
invalid_funccall(); //            void (*0x403d50)() ();
        }
        return;
        rcx = rbx;
        edi = 0;
        r8d = 5;
        edx = "%lu truncated records\n";
        esi = "%lu truncated record\n";
        rax = dcngettext ();
        rdi = stderr;
        rcx = rbx;
        esi = 1;
        rdx = rax;
        eax = 0;
        fprintf_chk ();
    }
label_1:
    return;
label_2:
    esi = 0xa;
    overflow ();
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4041e0 */
#include <stdint.h>
 
int64_t fcn_004041e0 (int64_t arg_100h, int64_t arg1, int64_t arg10, int64_t arg11, uint32_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
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
    ebx = edi;
    *((rsp + 0x48)) = rcx;
    *((rsp + 0x50)) = r8;
    *((rsp + 0x58)) = r9;
    if (al != 0) {
        *((rsp + 0x60)) = xmm0;
        *((rsp + 0x70)) = xmm1;
        *((rsp + 0x80)) = xmm2;
        *((rsp + 0x90)) = xmm3;
        *((rsp + 0xa0)) = xmm4;
        *((rsp + 0xb0)) = xmm5;
        *((rsp + 0xc0)) = xmm6;
        *((rsp + 0xd0)) = xmm7;
    }
    eax = imp.__libc_start_main;
    if (eax <= 0) {
        goto label_0;
    }
    rdi = stderr;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_1;
    }
    rcx = rax + 1;
    *((rdi + 0x28)) = rcx;
    *(rax) = 0xa;
    do {
        *(0x006145c0) = 0;
label_0:
        rax = rsp + 0x100;
        *((rsp + 0x20)) = rax;
        rax = rsp + 0x30;
        *((rsp + 0x18)) = 0x18;
        *((rsp + 0x1c)) = 0x30;
        *((rsp + 0x28)) = rax;
        fcn_00408710 (ebx, ebp, rdx, rsp + 0x18);
        return rax;
label_1:
        esi = 0xa;
        *((rsp + 8)) = rdx;
        overflow ();
        rdx = *((rsp + 8));
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4042d0 */
#include <stdint.h>
 
uint64_t fcn_004042d0 (int64_t arg1, struct sigaction * arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    do {
        r12 = rsi;
        eax = fcn_00408f50 (rdi, rsp + 8, 0xa, rsp, "bcEGkKMPTwYZ0");
        edx = eax;
        if (eax != 2) {
            rax = *(rsp);
            if (edx != 0) {
                goto label_2;
            }
label_0:
            return rax;
        }
        rdi = *((rsp + 8));
        if (*(rdi) != 0x78) {
label_2:
            *(r12) = edx;
            eax = 0;
            return rax;
        }
        rdi++;
        rax = fcn_004042d0 (rdi, r12);
    } while (1);
    rbx = rax;
    if (rax != 0) {
        goto label_3;
    }
    rax = *(rsp);
    do {
        if (rax == 0) {
            edi = 0x40db8f;
            ecx = 2;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            dl = (rax > 0) ? 1 : 0;
            if (dl == 0) {
                goto label_4;
            }
        }
label_1:
        rax *= rbx;
        goto label_0;
label_3:
        rcx = *(rsp);
        edx = 0;
        rax = rcx;
        rax *= rbx;
        rax = rdx_rax / rbx;
        rdx = rdx_rax % rbx;
    } while (rcx == rax);
    *(r12) = 1;
    eax = 0;
    goto label_0;
label_4:
    rax = fcn_00408610 (1, 0x40db8e);
    r12 = rax;
    rax = fcn_00408610 (0, 0x40db8f);
    edx = 5;
    rax = dcgettext (0, "warning: %s is a zero multiplier; use %s if that is intended");
    eax = 0;
    fcn_004041e0 (0, 0, rax, rbp, r12, r9);
    rax = *(rsp);
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4043e0 */
#include <stdint.h>
 
int64_t fcn_004043e0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ebx = esi;
    ebx &= 0xfffdfeff;
    while (eax == ebx) {
label_0:
        return;
        eax = 0;
        r13 = rdx;
        r12d = edi;
        eax = fcn_004095d0 (rdi, 3, rdx, rcx, r8);
        ebx |= eax;
        if (eax < 0) {
            goto label_2;
        }
    }
    if ((ebx & 0x10000) != 0) {
        goto label_3;
    }
label_1:
    eax = 0;
    eax = fcn_004095d0 (r12d, 4, ebx, rcx, r8);
    eax++;
    if (eax != 0) {
        goto label_0;
    }
    goto label_2;
label_3:
    rdx = rsp;
    esi = r12d;
    edi = 1;
    eax = fxstat ();
    if (eax == 0) {
        eax = *((rsp + 0x18));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_4;
        }
        errno_location ();
        *(rax) = 0x14;
    }
label_2:
    rax = fcn_004083e0 (4, r13);
    edx = 5;
    rax = dcgettext (0, "setting flags for %s");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    fcn_004041e0 (1, *(rax), rbx, rbp, r8, r9);
label_4:
    ebx &= 0xfffeffff;
    if (ebx == ebp) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4044d0 */
#include <stdint.h>
 
uint64_t fcn_004044d0 (int64_t arg1, int64_t arg3, int64_t arg4, int64_t fd) {
    uint32_t var_8h;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_58h;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    rsi = fd;
    eax = 0;
    r14 = rdi;
    r12d = ecx;
    ebx = esi;
    rdx = rsp;
    eax = ioctl (ebx, 0x80306d02);
    rsi = rbp;
    edx = r12d;
    edi = ebx;
    r13d = eax;
    rax = lseek ();
    if (rax < 0) {
        goto label_0;
    }
    while (eax != 0) {
label_0:
        rax = rbp;
        return rax;
        eax = 0;
        rdx = rsp + 0x30;
        eax = ioctl (ebx, 0x80306d02);
    }
    rax = *((rsp + 0x38));
    if (*((rsp + 8)) != rax) {
        goto label_0;
    }
    rax = *((rsp + 0x58));
    if (*((rsp + 0x28)) != rax) {
        goto label_0;
    }
    if (*(0x006142bc) != 1) {
        rbx = *((rsp + 0x30));
        edx = 5;
        rax = dcgettext (0, "warning: working around lseek kernel bug for file (%s)\n  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types");
        eax = 0;
        fcn_004041e0 (0, 0, rax, r14, rbx, r9);
    }
    errno_location ();
    rbp |= 0xffffffffffffffff;
    *(rax) = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4045a0 */
#include <stdint.h>
 
int64_t fcn_004045a0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (edi != 0) {
        goto label_6;
    }
    r15d = *(0x006144e9);
    eax = 0x6143a8;
label_3:
    rbx = *(rax);
    if (rsi == 0) {
        goto label_7;
    }
    rbx += rsi;
    r14 = rbx;
    r14d &= 0x1ffff;
    *(rax) = r14;
    if (rbx > r14) {
        goto label_8;
    }
    do {
label_1:
        r12d = 1;
label_0:
        eax = r12d;
        return rax;
label_7:
        if (rbx != 0) {
            goto label_9;
        }
    } while (r15b == 0);
label_9:
    r14d = 0;
    r13d = edi;
    if (edi != 0) {
        goto label_10;
    }
label_2:
    r12d = *(0x006145bc);
    rsi = imp.__libc_start_main;
    if (r12b != 0) {
        goto label_5;
    }
    errno_location ();
    *(rax) = 0x1d;
    goto label_0;
label_8:
    rbx -= r14;
    if (rbx == 0) {
        goto label_1;
    }
    r13d = edi;
    if (edi == 0) {
        goto label_2;
    }
label_10:
    rsi = *(0x006142b0);
    r12d = 0;
    if (rsi == -1) {
        goto label_0;
    }
    if (rsi < 0) {
        goto label_11;
    }
    if (rbp == 0) {
        goto label_12;
    }
    rdx = r14 + rbx;
    rsi += rdx;
    *(0x006142b0) = rsi;
label_5:
    r12d = 0;
    if (rsi < 0) {
        goto label_0;
    }
label_12:
    rsi -= rbx;
    if (rbp != 0) {
        goto label_13;
    }
    if (rbx == 0) {
        goto label_13;
    }
    if (r15b != 0) {
        goto label_14;
    }
    rsi -= r14;
    do {
label_4:
        ecx = 4;
        rdx = rbx;
        edi = r13d;
        eax = posix_fadvise ();
        r12b = (eax != 0xffffffff) ? 1 : 0;
        goto label_0;
label_6:
        r15d = *(0x006144e8);
        eax = 0x6143a0;
        goto label_3;
label_13:
        rsi -= r14;
    } while (rbx != 0);
label_14:
    rax = rsi;
    edx = 0;
    ebx = 0;
    rax = *(rdx_rax) / 0x00614658;
    rdx = *(rdx_rax) % 0x00614658;
    rsi -= rdx;
    goto label_4;
label_11:
    esi = 0;
    edx = 1;
    edi = 1;
    rax = lseek ();
    rsi = rax;
    *(0x006142b0) = rax;
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404760 */
#include <stdint.h>
 
uint64_t fcn_00404760 (void) {
    eax = close (0);
    if (eax >= 0) {
        eax = close (1);
        if (eax < 0) {
            goto label_0;
        }
        return eax;
    }
    rax = fcn_004083e0 (4, *(0x00614668));
    edx = 5;
    rax = dcgettext (0, "closing input file %s");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    fcn_004041e0 (1, *(rax), rbx, rbp, r8, r9);
label_0:
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    rax = dcgettext (0, "closing output file %s");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    fcn_004041e0 (1, *(rax), rbx, rbp, r8, r9);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404810 */
#include <stdint.h>
 
int32_t fcn_00404810 (void) {
    eax = imp.__libc_start_main;
    if (eax == 0) {
        eax = imp.__libc_start_main;
        if (eax == 0) {
            goto label_2;
        }
    }
    do {
label_0:
        rdx = rsp;
        esi = 0x614500;
        edi = 0;
        sigprocmask ();
        ebx = imp.__libc_start_main;
        eax = imp.__libc_start_main;
        if (eax != 0) {
            eax--;
            *(0x006144ec) = eax;
        }
        edx = 0;
        rsi = rsp;
        edi = 2;
        sigprocmask ();
        if (ebx != 0) {
            goto label_3;
        }
        fcn_004040b0 ();
label_1:
        eax = imp.__libc_start_main;
    } while (eax != 0);
    eax = imp.__libc_start_main;
    if (eax != 0) {
        goto label_0;
    }
    return eax;
label_3:
    fcn_00404760 ();
    fcn_004040b0 ();
    raise (ebx);
    goto label_1;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4048b0 */
#include <stdint.h>
 
uint64_t fcn_004048b0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14d = edi;
    r13 = rsi;
    r12d = edx;
    while (eax < 0) {
        rax = errno_location ();
        if (*(rax) != 4) {
            goto label_0;
        }
        fcn_00404810 ();
        eax = fcn_00405bd0 (r14d, r13, r12d, ebp);
        ebx = eax;
    }
label_0:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404900 */
#include <stdint.h>
 
uint64_t fcn_00404900 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13d = edi;
    r12 = rsi;
    while (rax != -1) {
        if (rax >= 0) {
            goto label_4;
        }
        rax = errno_location ();
        edx = *(rax);
label_0:
        if (edx != 4) {
            goto label_4;
        }
        fcn_00404810 ();
        rax = read (r13d, r12, rbp);
        rbx = rax;
    }
    rax = errno_location ();
    edx = *(rax);
    if (edx != 0x16) {
        goto label_0;
    }
    rdx = imp.__libc_start_main;
    if (rdx <= 0) {
        goto label_1;
    }
    if (rdx >= rbp) {
        goto label_1;
    }
    if ((*(0x00614609) & 0x40) != 0) {
        goto label_5;
    }
    do {
label_1:
        *(0x006143b8) = rbx;
        rax = rbx;
        return rax;
label_4:
        if (rbx <= 0) {
            goto label_6;
        }
        if (rbx >= rbp) {
            goto label_6;
        }
        fcn_00404810 ();
INVALID_JUMP;
    } while (*(0x006145a8) == 0);
    r12 = imp.__libc_start_main;
    if (r12 <= 0) {
        goto label_1;
    }
    if (r12 >= rbp) {
        goto label_1;
    }
    if (*(0x006142bc) != 1) {
        goto label_7;
    }
label_3:
    *(0x006145a8) = 0;
    goto label_1;
label_6:
    if (rbx > 0) {
        goto label_2;
    }
    goto label_1;
label_7:
    rcx = r12;
    edi = 0;
    r8d = 5;
    edx = "warning: partial read (%lu bytes); suggest iflag=fullblock";
    esi = "warning: partial read (%lu byte); suggest iflag=fullblock";
    rax = dcngettext ();
    eax = 0;
    fcn_004041e0 (0, 0, rax, r12, r8, r9);
    goto label_3;
label_5:
    *(rax) = 0;
    ebx = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404a80 */
#include <stdint.h>
 
uint64_t fcn_00404a80 (void) {
    rbx = imp.__libc_start_main;
    rbp = imp.__libc_start_main;
    rax = malloc (rbp + rbx*2 + 3);
    if (rax != 0) {
        rcx = rax + rbx + 1;
        edx = 0;
        rax = rcx;
        rax = rdx_rax / rbx;
        rdx = rdx_rax % rbx;
        rcx -= rdx;
        *(0x00614598) = rcx;
        return rax;
    }
    ecx = 1;
    rax = fcn_00405d70 (rbp, rsp, 0x1f1, ecx, 1);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "memory exhausted by input buffer of size %lu bytes (%s)");
    eax = 0;
    rax = fcn_004041e0 (1, 0, rax, rbp, rbx, r9);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404ba0 */
#include <stdint.h>
 
uint64_t fcn_00404ba0 (void) {
    do {
        rbx = imp.__libc_start_main;
        rbp = imp.__libc_start_main;
        rax = malloc (rbx + rbp - 1);
        if (rax != 0) {
            rcx = rax + rbx - 1;
            edx = 0;
            rax = rcx;
            rax = rdx_rax / rbx;
            rdx = rdx_rax % rbx;
            rcx -= rdx;
            *(0x00614590) = rcx;
            return rax;
        }
        ecx = 1;
        rax = fcn_00405d70 (rbp, rsp, 0x1f1, ecx, 1);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "memory exhausted by output buffer of size %lu bytes (%s)");
        eax = 0;
        rax = fcn_004041e0 (1, 0, rax, rbp, rbx, r9);
        if (*(0x00614590) != 0) {
            return rax;
        }
        if ((*(0x0061460d) & 8) == 0) {
            if (*(0x00614598) == 0) {
                goto label_0;
            }
            rax = imp.__libc_start_main;
            *(0x00614590) = rax;
            return rax;
        }
    } while (1);
label_0:
    fcn_00404a80 ();
    rax = imp.__libc_start_main;
    *(0x00614590) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404bf0 */
#include <stdint.h>
 
uint64_t fcn_00404bf0 (int64_t arg1) {
    rdi = arg1;
    while (eax < 0) {
        rax = errno_location ();
        if (*(rax) != 4) {
            goto label_0;
        }
        fcn_00404810 ();
        rsi = rbp;
        edi = 1;
        eax = ftruncate ();
        ebx = eax;
    }
label_0:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404c30 */
#include <stdint.h>
 
uint64_t fcn_00404c30 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    if ((*(0x00614605) & 0x40) != 0) {
        if (*(0x00614648) > rsi) {
            goto label_6;
        }
    }
label_5:
    ebx = 0;
    if (rbp == 0) {
        goto label_7;
        if (rbp == 0) {
label_0:
            goto label_8;
        }
label_2:
        rbx += rax;
label_1:
        if (rbp <= rbx) {
            goto label_3;
        }
    }
    fcn_00404810 ();
    r13d = imp.__libc_start_main;
    *(0x00614618) = 0;
    if ((r13d & 0x10000) == 0) {
        goto label_4;
    }
    rsi = r12;
    rdx = rbp;
    do {
        if (*(rsi) != 0) {
            goto label_4;
        }
        rsi++;
        rdx--;
        if (rdx == 0) {
            goto label_9;
        }
    } while ((dl & 0xf) != 0);
    eax = memcmp (r12, rsi, rdx);
    if (eax == 0) {
        goto label_9;
    }
label_4:
    rdx -= rbx;
    rax = write (1, r12 + rbx, rbp);
    if (rax >= 0) {
        goto label_0;
    }
    rax = errno_location ();
    if (*(rax) == 4) {
        goto label_1;
    }
label_3:
    if (*(0x006144ea) != 0) {
        if (rbx != 0) {
            goto label_10;
        }
    }
label_7:
    rax = rbx;
    return rax;
label_9:
    edx = 1;
    rsi = rbp;
    edi = 1;
    rax = lseek ();
    if (rax < 0) {
        goto label_11;
    }
    *(0x00614618) = 1;
    rax = rbp;
    if (rbp >= 0) {
        goto label_2;
    }
    rax = errno_location ();
    if (*(rax) == 4) {
        goto label_1;
    }
    goto label_3;
label_11:
    r13d &= 0xfffeffff;
    *(0x0061460c) = r13d;
    goto label_4;
label_8:
    errno_location ();
    *(rax) = 0x1c;
    goto label_3;
label_10:
    fcn_004045a0 (1, rbx);
    rax = rbx;
    return rax;
label_6:
    eax = 0;
    eax = fcn_004095d0 (1, 3, rdx, rcx, r8);
    ah &= 0xbf;
    edx = eax;
    eax = 0;
    eax = fcn_004095d0 (1, 4, edx, rcx, r8);
    if (eax == 0) {
        goto label_12;
    }
    while (1) {
label_12:
        edi = 1;
        *(0x006144e8) = 1;
        fcn_004045a0 (edi, 0);
        *(0x0061460c) |= 0x8000;
        goto label_5;
        rdx = imp.__libc_start_main;
        rax = fcn_004084b0 (0, 3);
        edx = 5;
        r13 = rax;
        rax = dcgettext (0, "failed to turn off O_DIRECT: %s");
        rbx = rax;
        rax = errno_location ();
        eax = 0;
        fcn_004041e0 (0, *(rax), rbx, r13, r8, r9);
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404e30 */
#include <stdint.h>
 
void fcn_00404e30 (void) {
    fcn_00404760 ();
    fcn_004040b0 ();
    fcn_00404810 ();
    return exit (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404e50 */
#include <stdint.h>
 
uint64_t fcn_00404e50 (void) {
    rax = fcn_00404c30 (*(0x00614590), *(0x00614648));
    *(0x006145d8) += rax;
    if (*(0x00614648) == rax) {
        *(0x00614588) = 0;
        *(0x006145f0)++;
        return rax;
    }
    rbx = rax;
    rax = fcn_004083e0 (4, *(0x00614660));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "writing to %s");
    rax = errno_location ();
    eax = 0;
    fcn_004041e0 (0, *(rax), rbp, r12, r8, r9);
    if (rbx != 0) {
        *(0x006145f8)++;
    }
    return fcn_00404e30 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x404ef0 */
#include <stdint.h>
 
uint64_t fcn_00404ef0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi + rsi;
    if (rsi == 0) {
        goto label_5;
    }
    while (al != *(0x006142ba)) {
        if (rbx == rdx) {
            goto label_6;
        }
        if (rbx < rdx) {
            rcx = imp.__libc_start_main;
            rsi = imp.__libc_start_main;
            rdx = rcx + 1;
            *((rsi + rcx)) = al;
            *(0x00614588) = rdx;
            if (rdx >= *(0x00614648)) {
                goto label_7;
            }
        }
label_4:
        rbx++;
        rbp++;
        *(0x00614580) = rbx;
        if (r12 == rbp) {
            goto label_5;
        }
label_0:
        eax = *(rbp);
        rbx = imp.__libc_start_main;
        rdx = imp.__libc_start_main;
    }
    if (rbx < rdx) {
        goto label_8;
    }
label_1:
    *(0x00614580) = 0;
    rbp++;
    if (r12 != rbp) {
        goto label_0;
    }
label_5:
    r12 = rbx;
    return eax;
label_3:
    fcn_00404e50 ();
label_2:
    rbx++;
    if (*(0x00614640) <= rbx) {
        goto label_1;
    }
label_8:
    rdx = imp.__libc_start_main;
    rcx = imp.__libc_start_main;
    esi = *(0x006142b9);
    rax = rdx + 1;
    *(0x00614588) = rax;
    *((rcx + rdx)) = sil;
    if (rax < *(0x00614648)) {
        goto label_2;
    }
    goto label_3;
label_6:
    *(0x006145a0)++;
    goto label_4;
label_7:
    fcn_00404e50 ();
    rbx = imp.__libc_start_main;
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405000 */
#include <stdint.h>
 
uint64_t fcn_00405000 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rsi == 0) {
        goto label_5;
    }
    r12d = 0;
    rbx = rsi;
    while (rax >= *(0x00614640)) {
        rdx = imp.__libc_start_main;
        rcx = imp.__libc_start_main;
        *(0x006143b0) = 0;
        esi = *(0x006142ba);
        *(0x00614580) = 0;
        rax = rdx + 1;
        *(0x00614588) = rax;
        *((rcx + rdx)) = sil;
        if (rax >= *(0x00614648)) {
            goto label_6;
        }
label_1:
        if (rbx <= r12) {
            goto label_7;
        }
label_0:
        rax = imp.__libc_start_main;
        r13d = *((rbp + r12));
        rdx = rax + 1;
        *(0x00614580) = rdx;
    }
    ecx = *(0x006142b9);
    rdx = imp.__libc_start_main;
    r12++;
    if (cl != r13b) {
        goto label_8;
    }
    rdx++;
    *(0x006143b0) = rdx;
    if (rbx > r12) {
        goto label_0;
    }
label_7:
    return rax;
label_2:
    rdx = rax;
label_3:
    rax = rdx + 1;
    *((rdi + rdx)) = r13b;
    *(0x00614588) = rax;
    if (rax < rsi) {
        goto label_1;
    }
label_6:
    fcn_00404e50 ();
    goto label_1;
label_8:
    rdi = imp.__libc_start_main;
    rax = imp.__libc_start_main;
    rsi = imp.__libc_start_main;
    if (rdx != 0) {
        goto label_9;
    }
    goto label_2;
label_4:
    *(0x006143b0)--;
    if (*(0x006143b0) == 0) {
        goto label_3;
    }
    ecx = *(0x006142b9);
    rax = rdx;
label_9:
    rdx = rax + 1;
    *((rdi + rax)) = cl;
    *(0x00614588) = rdx;
    if (rdx < rsi) {
        goto label_4;
    }
    fcn_00404e50 ();
    rdi = imp.__libc_start_main;
    rdx = imp.__libc_start_main;
    rsi = imp.__libc_start_main;
    goto label_4;
label_5:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405150 */
#include <stdint.h>
 
uint64_t fcn_00405150 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, struct sigaction * arg5) {
    uint32_t var_ch;
    int64_t var_10h;
    int64_t var_28h;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r14 = rdx;
    r13 = rcx;
    ebx = edi;
    r12 = *(r8);
    *(rsp) = rsi;
    rax = errno_location ();
    edx = 0;
    r15 = rax;
    *(rax) = 0;
    rax = 0x7fffffffffffffff;
    rax = rdx_rax / r13;
    rdx = rdx_rax % r13;
    if (rax < r14) {
        goto label_9;
    }
    rax = r14;
    rax *= r13;
    r12 += rax;
    rax = fcn_004044d0 (*(rsp), ebx, r12, 1);
    if (rax < 0) {
        goto label_10;
    }
    if (ebx == 0) {
        goto label_11;
    }
    do {
        *(rbp) = 0;
        eax = 0;
label_4:
        return rax;
label_9:
        rax = fcn_004044d0 (*(rsp), ebx, 0, 2);
        if (rax >= 0) {
            goto label_12;
        }
        *((rsp + 0xc)) = 0;
label_2:
        if (ebx != 0) {
            goto label_13;
        }
        if (*(0x00614598) == 0) {
            goto label_14;
        }
label_5:
        r12 = imp.__libc_start_main;
label_0:
        rax = imp.__libc_start_main;
        rdx = r13;
        if (r14 == 0) {
            goto label_15;
        }
label_1:
        rsi = r12;
        edi = ebx;
invalid_funccall(); //        rax = void (*rax)() ();
        if (rax < 0) {
            goto label_16;
        }
        if (rax == 0) {
            goto label_17;
        }
        if (ebx == 0) {
            rax += *(0x006145b0);
            *(0x006145b0) = rax;
            if (rax >= 0) {
                goto label_18;
            }
            *(0x006145a9) = 1;
        }
INVALID_JUMP;
    } while (r14 == 0);
    r14--;
    if (r14 != 0) {
        goto label_0;
    }
    rdx = *(rbp);
    if (rdx == 0) {
        goto label_19;
    }
    rax = imp.__libc_start_main;
label_3:
    r14d = 0;
    goto label_1;
label_10:
    eax = *(r15);
    *((rsp + 0xc)) = eax;
    rax = fcn_004044d0 (*(rsp), ebx, 0, 2);
    if (rax < 0) {
        goto label_2;
    }
    if (*((rsp + 0xc)) == 0) {
        goto label_12;
    }
label_8:
    rdx = *(rsp);
    esi = 3;
    edi = 0;
    if (ebx != 0) {
        goto label_20;
    }
    rax = fcn_004084b0 (rdi, rsi);
    edx = 5;
    esi = "%s: cannot skip";
    rbx = rax;
    goto label_21;
label_15:
    rdx = *(rbp);
    goto label_3;
label_17:
    rax = r14;
    goto label_4;
label_13:
    fcn_00404ba0 ();
    r12 = imp.__libc_start_main;
    goto label_0;
label_11:
    esi = 0;
    rdx = rsp + 0x10;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_22;
    }
    edx = *((rsp + 0x28));
    rcx = imp.__libc_start_main;
    eax = 0;
    edx &= 0xd000;
    if (edx == 0x8000) {
        rsi = *((rsp + 0x40));
        rdx = r12 + rcx;
        if (rsi < rdx) {
            goto label_23;
        }
    }
label_6:
    r12 += rcx;
    *(0x006145b0) = r12;
    if (r12 >= 0) {
        goto label_4;
    }
    *(0x006145a9) = 1;
    goto label_4;
label_14:
    fcn_00404a80 ();
    goto label_5;
label_23:
    rax = r12;
    edx = 0;
    rax -= rsi;
    rsi -= rcx;
    rax = rdx_rax / r13;
    rdx = rdx_rax % r13;
    r12 = rsi;
    goto label_6;
label_16:
    if (ebx != 0) {
        goto label_24;
    }
    rax = fcn_004083e0 (4, *(rsp));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "error reading %s");
    eax = 0;
    fcn_004041e0 (0, *(r15), rax, rbx, r8, r9);
    if ((*(0x0061460d) & 1) != 0) {
        goto label_25;
    }
    do {
label_7:
        fcn_00404e30 ();
label_24:
        rdx = *(rsp);
label_20:
        rax = fcn_004084b0 (0, 3);
        edx = 5;
        rbx = rax;
label_21:
        rax = dcgettext (0, "%s: cannot seek");
        eax = 0;
        fcn_004041e0 (0, *((rsp + 0xc)), rax, rbx, r8, r9);
    } while (1);
label_25:
    fcn_004040b0 ();
    goto label_7;
label_22:
    rax = fcn_004083e0 (4, *(rsp));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot fstat %s");
    eax = 0;
    eax = fcn_004041e0 (1, *(r15), rax, rbx, r8, r9);
label_19:
    eax = 0;
    goto label_4;
label_12:
    *((rsp + 0xc)) = 0x4b;
    goto label_8;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405460 */
#include <stdint.h>
 
uint64_t fcn_00405460 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPERAND]..\n  or:  %s OPTION\n");
    rcx = rbp;
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Copy a file, converting and formatting according to the operands.\n\n  bs=BYTES        read and write up to BYTES bytes at a time (default: 512);\n                  overrides ibs and obs\n  cbs=BYTES       convert BYTES bytes at a time\n  conv=CONVS      convert the file as per the comma separated symbol list\n  count=N         copy only N input blocks\n  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  if=FILE         read from FILE instead of stdin\n  iflag=FLAGS     read as per the comma separated symbol list\n  obs=BYTES       write BYTES bytes at a time (default: 512)\n  of=FILE         write to FILE instead of stdout\n  oflag=FLAGS     write as per the comma separated symbol list\n  seek=N          skip N obs-sized blocks at start of output\n  skip=N          skip N ibs-sized blocks at start of input\n  status=LEVEL    The LEVEL of information to print to stderr;\n                  'none' suppresses everything but error messages,\n                  'noxfer' suppresses the final transfer statistics,\n                  'progress' shows periodic transfer statistics\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nN and BYTES may be followed by the following multiplicative suffixes:\nc =1, w =2, b =512, kB =1000, K =1024, MB =1000*1000, M =1024*1024, xM =M,\nGB =1000*1000*1000, G =1024*1024*1024, and so on for T, P, E, Z, Y.\n\nEach CONV symbol may be:\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  ascii     from EBCDIC to ASCII\n  ebcdic    from ASCII to EBCDIC\n  ibm       from ASCII to alternate EBCDIC\n  block     pad newline-terminated records with spaces to cbs-size\n  unblock   replace trailing spaces in cbs-size records with newline\n  lcase     change upper case to lower case\n  ucase     change lower case to upper case\n  sparse    try to seek rather than write the output for NUL input blocks\n  swab      swap every pair of input bytes\n  sync      pad every input block with NULs to ibs-size; when used\n            with block or unblock, pad with spaces rather than NULs\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  excl      fail if the output file already exists\n  nocreat   do not create the output file\n  notrunc   do not truncate the output file\n  noerror   continue after read errors\n  fdatasync  physically write output file data before finishing\n  fsync     likewise, but also write metadata\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nEach FLAG symbol may be:\n\n  append    append mode (makes sense only for output; conv=notrunc suggested)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  direct    use direct I/O for data\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  directory  fail unless a directory\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  dsync     use synchronized I/O for data\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  sync      likewise, but also for metadata\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  fullblock  accumulate full blocks of input (iflag only)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  nonblock  use non-blocking I/O\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  noatime   do not update access time\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  nocache   Request to drop cache.  See also oflag=sync\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  noctty    do not assign controlling terminal from file\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  count_bytes  treat 'count=N' as a byte count (iflag only)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  skip_bytes  treat 'skip=N' as a byte count (iflag only)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  seek_bytes  treat 'seek=N' as a byte count (oflag only)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "\nSending a %s signal to a running 'dd' process makes it\nprint I/O statistics to standard error and then resume copying.\n\nOptions are:\n\n");
    edx = "USR1";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
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
    *(rsp) = 0x40dc2b;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40dca5;
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
        esi = 0x40dc23;
        ecx = 3;
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
        eax = strncmp (rax, 0x40dcaf, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40dc47;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x40dc23;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x410daf;
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
            eax = strncmp (rax, 0x40dcaf, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x40dc23;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40dc47;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x40dc23;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4059d0 */
#include <stdint.h>
 
uint64_t fcn_004059d0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdi;
    r13 = rcx;
    r12 = rsi;
    ebx = 0;
label_1:
    rax = strchr (r14, 0x2c);
    rdi = r12;
label_0:
    edx = 0;
    while (cl != 0) {
        rdx++;
        if (cl != sil) {
            goto label_2;
        }
        ecx = *((rdi + rdx));
        esi = *((r14 + rdx));
    }
    if (sil != 0x2c) {
        if (sil != 0) {
            goto label_2;
        }
    }
    edx = *((rdi + 0xc));
    if (edx == 0) {
label_2:
        if (*(rdi) == 0) {
            goto label_3;
        }
        rdi += 0x10;
        goto label_0;
    }
    ebx |= edx;
    if (bpl == 0) {
        edx = ebx;
    }
    if (rax != 0) {
        r14 = rax + 1;
        ebx = edx;
        goto label_1;
    }
    eax = edx;
    return rax;
label_3:
    if (rax == 0) {
        goto label_4;
    }
    rax -= r14;
    do {
        rax = fcn_00408370 (0, 8, r14, rax);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, r13);
        eax = 0;
        fcn_004041e0 (0, 0, "%s: %s", rax, rbx, r9);
        fcn_00405460 (1);
label_4:
        strlen (r14);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405ab0 */
#include <stdint.h>
 
uint64_t fcn_00405ab0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00409550 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405bd0 */
#include <stdint.h>
 
uint64_t fcn_00405bd0 (int64_t arg1, int64_t arg4, int64_t oflag, char * path) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405c40 */
#include <stdint.h>
 
uint64_t fcn_00405c40 (void) {
    int64_t var_8h;
    edi = 1;
    rsi = rsp;
    eax = clock_gettime ();
    if (eax != 0) {
        rax = fcn_00405c70 (rsp);
    }
    rax = *(rsp) * 0x3b9aca00;
    rax += *((rsp + 8));
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405c70 */
#include <stdint.h>
 
uint64_t fcn_00405c70 (int64_t arg1) {
    int64_t var_8h;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405cb0 */
#include <stdint.h>
 
uint64_t fcn_00405cb0 (int64_t arg1) {
    rdi = arg1;
    *(fp_stack--) = *(0x0040f734);
    *(fp_stack--) = fp_stack[unknown];
    if (fp_stack[0] >= fp_stack[1]) {
        goto label_0;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    eax = *((rsp - 0xa));
    ah |= 0xc;
    *((rsp - 0xc)) = ax;
    *(fp_stack--) = fp_stack[0];
    *((rsp - 0x18)) = fp_stack[0];
    fp_stack--;
    rax = *((rsp - 0x18));
    do {
        *((rsp - 0x20)) = rax;
        *(fp_stack--) = *((rsp - 0x20));
        if (rax < 0) {
            fp_stack[0] += *(0x0040f738);
        }
        if (edi == 0) {
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            __asm ("fucompi st(1)");
            if (edi != 0) {
                if (edi == 0) {
                    goto label_1;
                }
                fp_stack++;
            } else {
                fp_stack++;
            }
            rax++;
            *((rsp - 0x20)) = rax;
            *(fp_stack--) = *((rsp - 0x20));
            if (rax < 0) {
                goto label_2;
            }
        } else {
            fp_stack[1] = fp_stack[0];
            fp_stack--;
        }
label_1:
        return rax;
label_0:
        fp_stack[0] -= fp_stack[1];
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        eax = *((rsp - 0xa));
        ah |= 0xc;
        *((rsp - 0xc)) = ax;
        *((rsp - 0x18)) = fp_stack[0];
        fp_stack--;
        rax = *((rsp - 0x18));
        __asm ("btc rax, 0x3f");
    } while (1);
label_2:
    fp_stack[0] += *(0x0040f738);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x405d70 */
#include <stdint.h>
 
void fcn_00405d70 (int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    void * s2;
    int64_t var_10h;
    uint32_t var_14h;
    int64_t var_18h;
    size_t var_20h;
    int64_t var_30h;
    int64_t var_34h;
    int64_t var_38h;
    void * var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = edx;
    eax &= 0x20;
    r14 = rcx;
    ecx = edx;
    ecx &= 3;
    r13 = rsi;
    rbx = rdi;
    *((rsp + 0x30)) = eax;
    eax -= eax;
    eax &= 0xffffffe8;
    *((rsp + 8)) = rsi;
    eax += 0x400;
    *((rsp + 0x10)) = edx;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x14)) = ecx;
    *((rsp + 0x34)) = eax;
    rax = localeconv ();
    r15 = *(rax);
    r12 = rax;
    rax = strlen (r15);
    edx = 1;
    r8 = rax;
    rax--;
    eax = 0x40f6b9;
    if (rax >= 0x10) {
        r15 = rax;
    }
    rax = *((r12 + 0x10));
    r12 = *((r12 + 8));
    if (rax >= 0x10) {
        r8 = rdx;
    }
    *((rsp + 0x20)) = r8;
    *((rsp + 0x38)) = rax;
    rax = strlen (r12);
    r8 = *((rsp + 0x20));
    eax = 0x410daf;
    if (rax >= 0x11) {
        r12 = rax;
    }
    rax = r13 + 0x287;
    *(rsp) = rax;
    if (rbp > r14) {
        goto label_31;
    }
    rax = r14;
    edx = 0;
    rax = rdx_rax / rbp;
    rdx = rdx_rax % rbp;
    rcx = rax;
    if (rdx == 0) {
        rsi = rax;
        edx = 0;
        rsi *= rbx;
        rax = rsi;
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        if (rax == rbx) {
            goto label_32;
        }
    }
label_5:
    *((rsp + 0x20)) = r14;
    *(fp_stack--) = *((rsp + 0x20));
    if (r14 < 0) {
        goto label_33;
    }
label_4:
    rax = *((rsp + 0x18));
    *((rsp + 0x20)) = rax;
    *(fp_stack--) = *((rsp + 0x20));
    if (rax < 0) {
        goto label_34;
    }
    *((rsp + 0x20)) = rbx;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((rsp + 0x20));
    if (rbx < 0) {
        goto label_3;
    }
label_2:
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    if ((*((rsp + 0x10)) & 0x10) == 0) {
        goto label_1;
    }
label_0:
    *(fp_stack--) = *((rsp + 0x34));
    ebx = 0;
    *(fp_stack--) = fp_stack[0];
    while (ebx != 8) {
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        fp_tmp_0 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *(fp_stack--) = fp_stack[0];
        ebx++;
        fp_stack[0] *= fp_stack[2];
        fp_tmp_1 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        if (fp_stack[0] < fp_stack[3]) {
            goto label_35;
        }
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    goto label_36;
label_35:
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
label_36:
    ecx = *((rsp + 0x30));
    eax = 0;
    edi = *((rsp + 0x14));
    r14 = r8 + 1;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    al = (ecx == 0) ? 1 : 0;
    r15 = r14 + rax + 1;
    if (edi == 1) {
        goto label_37;
    }
    *(fp_stack--) = fp_stack[unknown];
    __asm ("fcompi st(1)");
    if (edi > 1) {
        goto label_38;
    }
    *(fp_stack--) = fp_stack[0];
label_12:
    unknown = fp_stack[0];
    fp_stack--;
    esi = 1;
    eax = 0;
    rbp = *((rsp + 0x18));
    ecx = "%.1Lf";
    rdx = 0xffffffffffffffff;
    rdi = rbp;
    unknown = fp_stack[0];
    fp_stack--;
    sprintf_chk ();
    rax = strlen (rbp);
    *(fp_stack--) = fp_stack[unknown];
    if (rax <= r15) {
        goto label_39;
    }
    *(fp_stack--) = *(0x0040f73c);
    fp_stack[1] *= fp_stack[0];
label_26:
    *(fp_stack--) = fp_stack[unknown];
    __asm ("fcompi st(2)");
    if (rax > r15) {
        *((rsp + 0x20)) = fp_stack[0];
        fp_stack--;
        unknown = fp_stack[0];
        fp_stack--;
        fcn_00405cb0 (*((rsp + 0x24)));
        *(fp_stack--) = *((rsp + 0x20));
    }
label_15:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ecx = "%.0Lf";
    esi = 1;
    r15 = *((rsp + 0x18));
    rdx = 0xffffffffffffffff;
    eax = 0;
    rdi = r15;
    unknown = fp_stack[0];
    fp_stack--;
    sprintf_chk ();
    rax = strlen (r15);
    r14 = rax;
    goto label_14;
label_1:
    edi = *((rsp + 0x14));
    if (edi != 1) {
        *(fp_stack--) = fp_stack[unknown];
        __asm ("fcompi st(1)");
        if (edi > 1) {
            goto label_40;
        }
    }
label_11:
    esi = 1;
    ecx = "%.0Lf";
    eax = 0;
    rbx = *((rsp + 0x18));
    rdx = 0xffffffffffffffff;
    unknown = fp_stack[0];
    fp_stack--;
    rdi = rbx;
    sprintf_chk ();
    ebx = 0xffffffff;
    rax = strlen (rbx);
    r14 = rax;
label_14:
    r15 = *(rsp);
    r15 -= rax;
    r14 += r15;
    memmove (r15, *((rsp + 8)), rax);
label_22:
    if ((*((rsp + 0x10)) & 4) != 0) {
        goto label_41;
    }
label_6:
    if ((*((rsp + 0x10)) & 0x80) != 0) {
        if (ebx == 0xffffffff) {
            goto label_42;
        }
label_23:
        eax = *((rsp + 0x10));
        eax &= 0x100;
        ecx = eax;
        ecx |= ebx;
        if (ecx != 0) {
            goto label_43;
        }
    }
label_7:
    rax = *(rsp);
    *(rax) = 0;
    rax = r15;
    return;
label_3:
    fp_stack[0] += *(0x0040f738);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    if ((*((rsp + 0x10)) & 0x10) != 0) {
        goto label_0;
    }
    goto label_1;
label_34:
    fp_stack[0] += *(0x0040f738);
    *((rsp + 0x20)) = rbx;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((rsp + 0x20));
    if (rbx >= 0) {
        goto label_2;
    }
    goto label_3;
label_33:
    fp_stack[0] += *(0x0040f738);
    goto label_4;
label_31:
    if (r14 == 0) {
        goto label_5;
    }
    rax = *((rsp + 0x18));
    edx = 0;
    rax = rdx_rax / r14;
    rdx = rdx_rax % r14;
    rcx = rax;
    if (rdx != 0) {
        goto label_5;
    }
    rax = rbx;
    edx = 0;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    rbx = rax;
    rax = rdx * 5;
    edx = 0;
    rax += rax;
    rsi = rbx;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    rdx += rdx;
    r9d = eax;
    if (rcx <= rdx) {
        goto label_44;
    }
    edi = 0;
    dil = (rdx != 0) ? 1 : 0;
label_18:
    ecx = *((rsp + 0x10));
    ecx &= 0x10;
    if (ecx == 0) {
        goto label_45;
    }
label_13:
    r10d = *((rsp + 0x34));
    ebx = 0;
    if (r10 <= rsi) {
        goto label_46;
    }
label_8:
    r14 = *(rsp);
    if (*((rsp + 0x14)) == 1) {
        goto label_47;
    }
label_24:
    r10d = *((rsp + 0x14));
    if (r10d == 0) {
        edi += r9d;
        if (edi <= 0) {
            goto label_16;
        }
label_17:
        rsi++;
        if (ecx == 0) {
            goto label_16;
        }
        eax = *((rsp + 0x34));
        if (rax == rsi) {
            goto label_48;
        }
    }
label_16:
    rcx = 0xcccccccccccccccd;
    r15 = r14;
    while (rsi > 9) {
        rsi = rdx;
        rax = rdx;
        rdi = rsi;
        r15--;
        rdx_rax = rax * rcx;
        rdx >>= 3;
        rax = rdx * 5;
        rax += rax;
        rdi -= rax;
        rax = rdi;
        eax += 0x30;
        *(r15) = al;
    }
    if ((*((rsp + 0x10)) & 4) == 0) {
        goto label_6;
    }
label_41:
    r13 = 0xffffffffffffffff;
    rax = strlen (r12);
    rbp -= r15;
    rsi = r15;
    ecx = 0x29;
    rdx = rbp;
    rdi = rsp + 0x40;
    *((rsp + 0x20)) = rax;
    memcpy_chk ();
    *((rsp + 0x14)) = ebx;
    r15 = *((rsp + 0x38));
    rbx = rbp;
    r13 = r12;
    r12 = *((rsp + 0x20));
    do {
        edx = *(r15);
        if (dl != 0) {
            eax = (int32_t) dl;
            if (dl >= 0x7f) {
                rax = rbx;
            }
            r15++;
        }
        if (rbp > rbx) {
            r15 = r14;
            ebx = *((rsp + 0x14));
            r15 -= rbp;
            memcpy (r15, rsp + 0x40, rbp);
            goto label_6;
        }
        r14 -= rbp;
        rbx -= rbp;
        rax = rsp + 0x40;
        memcpy (r14, rax + rbx, rbp);
        if (rbx == 0) {
            goto label_49;
        }
        r14 -= r12;
        memcpy (r14, r13, r12);
    } while (1);
label_42:
    rcx = *((rsp + 0x18));
    if (rcx <= 1) {
        goto label_50;
    }
    edx = *((rsp + 0x34));
    ebx = 1;
    eax = 1;
    do {
        rax *= rdx;
        if (rcx <= rax) {
            goto label_51;
        }
        ebx++;
    } while (ebx != 8);
label_51:
    ecx = *((rsp + 0x10));
    eax = *((rsp + 0x10));
    eax &= 0x100;
    ecx &= 0x40;
    if (ecx != 0) {
label_20:
        rcx = *((rsp + 8));
        rdi = rcx + 0x288;
        *((rcx + 0x287)) = 0x20;
        *(rsp) = rdi;
label_19:
        if (ebx == 0) {
            goto label_52;
        }
    }
    r9d = *((rsp + 0x30));
    if (r9d == 0) {
        if (ebx == 1) {
            goto label_53;
        }
    }
    rbx = (int64_t) ebx;
    rdi = *(rsp);
    ecx = *((rbx + 0x40f728));
    rdx = rdi + 1;
    *(rdi) = cl;
    if (eax == 0) {
        goto label_54;
    }
    r8d = *((rsp + 0x30));
    if (r8d != 0) {
        goto label_55;
    }
label_21:
    rax = rdx + 1;
    *(rdx) = 0x42;
    *(rsp) = rax;
    goto label_7;
label_9:
    dil = (edi != 0) ? 1 : 0;
    edi = (int32_t) dil;
label_10:
    ebx++;
    if (r10 > r11) {
        goto label_56;
    }
    if (ebx == 8) {
        goto label_8;
    }
label_46:
    rax = rsi;
    edx = 0;
    esi = edi;
    rax = rdx_rax / r10;
    rdx = rdx_rax % r10;
    esi >>= 1;
    r11 = rax;
    eax = rdx * 5;
    edx = 0;
    eax = r9 + rax*2;
    eax = edx_eax / ebp;
    edx = edx_eax % ebp;
    edx = rsi + rdx*2;
    r9d = eax;
    rsi = r11;
    edi += edx;
    if (ebp > edx) {
        goto label_9;
    }
    dil = (ebp < edi) ? 1 : 0;
    edi = (int32_t) dil;
    edi += 2;
    goto label_10;
label_40:
    unknown = fp_stack[0];
    fp_stack--;
    fcn_00405cb0 (rdi);
    goto label_11;
label_38:
    *(fp_stack--) = fp_stack[0];
    unknown = fp_stack[0];
    fp_stack--;
    unknown = fp_stack[0];
    fp_stack--;
    fcn_00405cb0 (rdi);
    *(fp_stack--) = fp_stack[unknown];
    goto label_12;
label_32:
    ecx = *((rsp + 0x10));
    edi = 0;
    r9d = 0;
    ecx &= 0x10;
    if (ecx != 0) {
        goto label_13;
    }
label_45:
    ebx = 0xffffffff;
    goto label_8;
    do {
label_39:
        if ((*((rsp + 0x10)) & 8) != 0) {
            rcx = *((rsp + 8));
            if (*((rcx + rax - 1)) == 0x30) {
                goto label_57;
            }
            fp_stack++;
        } else {
            fp_stack++;
        }
        rcx = rax;
        rcx -= r14;
        r14 = rcx;
        goto label_14;
label_37:
        ecx = "%.1Lf";
        esi = 1;
        eax = 0;
        *(fp_stack--) = fp_stack[0];
        unknown = fp_stack[0];
        fp_stack--;
        rbp = *((rsp + 0x18));
        rdx = 0xffffffffffffffff;
        rdi = rbp;
        unknown = fp_stack[0];
        fp_stack--;
        sprintf_chk ();
        rax = strlen (rbp);
        *(fp_stack--) = fp_stack[unknown];
    } while (rax <= r15);
    *(fp_stack--) = *(0x0040f73c);
    fp_stack[1] *= fp_stack[0];
    goto label_15;
label_47:
    rax = rsi;
    rdi = (int64_t) edi;
    eax &= 1;
    rax += rdi;
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    r9d += eax;
    if (r9d <= 5) {
        goto label_16;
    }
    r14 = *(rsp);
    goto label_17;
label_44:
    dil = (r9d < 5) ? 1 : 0;
    edi = (int32_t) dil;
    edi += 2;
    goto label_18;
label_43:
    if ((*((rsp + 0x10)) & 0x40) == 0) {
        goto label_19;
    }
    goto label_20;
label_55:
    rdx = rdi + 2;
    *((rdi + 1)) = 0x69;
    goto label_21;
label_48:
    if (ebx == 8) {
        goto label_16;
    }
    ebx++;
    if ((*((rsp + 0x10)) & 8) == 0) {
        goto label_58;
    }
label_30:
    r15 = r14 - 1;
    *((r14 - 1)) = 0x31;
    goto label_22;
label_50:
    ebx = 0;
    goto label_23;
label_53:
    rcx = *(rsp);
    rdx = rcx + 1;
    *(rcx) = 0x6b;
    if (eax != 0) {
        goto label_21;
    }
label_54:
    *(rsp) = rdx;
    goto label_7;
label_56:
    if (r11 > 9) {
        goto label_8;
    }
    if (*((rsp + 0x14)) == 1) {
        goto label_59;
    }
    ebp = *((rsp + 0x14));
    dl = (ebp == 0) ? 1 : 0;
    r9b = (edi > 0) ? 1 : 0;
    edx &= r9d;
label_28:
    if (dl != 0) {
        goto label_60;
    }
    if (eax != 0) {
        goto label_61;
    }
label_29:
    r14 = *(rsp);
    if ((*((rsp + 0x10)) & 8) == 0) {
        eax = 0x30;
label_27:
        rdi = *((rsp + 8));
        r14 = rdi + 0x286;
        *((rdi + 0x286)) = al;
        eax = r8d;
        r14 -= r8;
        if (r8d >= 8) {
            goto label_62;
        }
        if ((r8b & 4) != 0) {
            goto label_63;
        }
        if (eax != 0) {
            edx = *(r15);
            *(r14) = dl;
            if ((al & 2) != 0) {
                goto label_64;
            }
        }
label_25:
        edi = 0;
    }
    if (*((rsp + 0x14)) == 1) {
        goto label_16;
    }
    r9d = 0;
    goto label_24;
label_64:
    edx = *((r15 + rax - 2));
    *((r14 + rax - 2)) = dx;
    goto label_25;
label_57:
    *(fp_stack--) = *(0x0040f73c);
    fp_stack[1] *= fp_stack[0];
    if (*((rsp + 0x14)) != 1) {
        goto label_26;
    }
    goto label_15;
label_60:
    eax++;
    if (eax == 0xa) {
        goto label_65;
    }
label_61:
    eax += 0x30;
    goto label_27;
label_59:
    edx = eax;
    edx &= 1;
    edx += edi;
    dl = (edx > 2) ? 1 : 0;
    goto label_28;
label_62:
    rax = *(r15);
    r9 = r14 + 8;
    r10 = r15;
    r9 &= 0xfffffffffffffff8;
    *(r14) = rax;
    eax = r8d;
    rdx = *((r15 + rax - 8));
    *((r14 + rax - 8)) = rdx;
    rax = r14;
    rax -= r9;
    r10 -= rax;
    eax += r8d;
    eax &= 0xfffffff8;
    if (eax < 8) {
        goto label_25;
    }
    eax &= 0xfffffff8;
    edx = 0;
    do {
        edi = edx;
        edx += 8;
        r11 = *((r10 + rdi));
        *((r9 + rdi)) = r11;
    } while (edx < eax);
    goto label_25;
label_65:
    rsi = r11 + 1;
    if (rsi == 0xa) {
        goto label_66;
    }
    edi = 0;
    goto label_29;
label_58:
    rax = r8;
    *((r14 - 1)) = 0x30;
    rax = ~rax;
    r14 += rax;
    eax = r8d;
    if (r8d >= 8) {
        goto label_67;
    }
    r8d &= 4;
    if (r8d != 0) {
        goto label_68;
    }
    if (eax == 0) {
        goto label_30;
    }
    edx = *(r15);
    *(r14) = dl;
    if ((al & 2) == 0) {
        goto label_30;
    }
    edx = *((r15 + rax - 2));
    *((r14 + rax - 2)) = dx;
    goto label_30;
label_66:
    r14 = *(rsp);
    goto label_25;
label_67:
    rax = *(r15);
    rcx = r14 + 8;
    rcx &= 0xfffffffffffffff8;
    *(r14) = rax;
    eax = r8d;
    rdx = *((r15 + rax - 8));
    *((r14 + rax - 8)) = rdx;
    rax = r14;
    rax -= rcx;
    r15 -= rax;
    eax += r8d;
    eax &= 0xfffffff8;
    if (eax < 8) {
        goto label_30;
    }
    eax &= 0xfffffff8;
    edx = 0;
    do {
        esi = edx;
        edx += 8;
        rdi = *((r15 + rsi));
        *((rcx + rsi)) = rdi;
    } while (edx < eax);
    goto label_30;
label_63:
    edx = *(r15);
    *(r14) = edx;
    edx = *((r15 + rax - 4));
    *((r14 + rax - 4)) = edx;
    goto label_25;
label_68:
    edx = *(r15);
    *(r14) = edx;
    edx = *((r15 + rax - 4));
    *((r14 + rax - 4)) = edx;
    goto label_30;
label_49:
    ebx = *((rsp + 0x14));
    r15 = r14;
    goto label_6;
label_52:
    rdx = *(rsp);
    if (eax != 0) {
        goto label_21;
    }
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x406900 */
#include <stdint.h>
 
uint64_t fcn_00406900 (int64_t arg_100h, uint32_t arg1, int64_t arg10, int64_t arg11, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
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
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
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
    ebx = *(0x00614338);
    *(0x00614338) = 0;
    while (eax == 0xffffffff) {
label_0:
        *(0x00614338) = ebx;
        *(0x0061433c) = 0;
        return;
        r13 = r8;
        r12 = rcx;
        r8d = 0;
        ecx = 0x40f760;
        edx = 0x40f750;
        r14 = r9;
        eax = fcn_0040a500 ();
    }
    if (eax == 0x68) {
        goto label_1;
    }
    if (eax != 0x76) {
        goto label_0;
    }
    rcx = r13;
    rdx = r12;
    rsi = rbp;
    rax = rsp + 0x100;
    r8 = rsp + 8;
    *((rsp + 8)) = 0x30;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x20;
    *((rsp + 0xc)) = 0x30;
    *((rsp + 0x18)) = rax;
    fcn_00408b20 (*(obj.stdout));
    exit (0);
label_1:
    edi = 0;
invalid_funccall(); //    void (*r14)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x406a10 */
#include <stdint.h>
 
uint64_t fcn_00406a10 (int64_t arg1) {
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
            edi = 0x40f800;
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
        *(0x00614680) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x406ab0 */
#include <stdint.h>
 
uint64_t fcn_00406ab0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040aa50 ();
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
        eax = 0x40f806;
        ebx = 0x40f811;
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
        eax = 0x40f80a;
        ebx = 0x40f80d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x410d8f;
    ebx = 0x40f804;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x406bb0 */
#include <stdint.h>
 
uint64_t fcn_00406bb0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 47896 named .text */
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
    /* switch table (11 cases) at 0x40f880 */
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
    *((rsp + 0x50)) = 0x410d8f;
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
        /* switch table (127 cases) at 0x40f8d8 */
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
    rax = fcn_00406bb0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40fcd0 */
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
    /* switch table (127 cases) at 0x4100c8 */
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
    *((rsp + 0x50)) = 0x410d8f;
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
        rax = fcn_0040a580 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x410d8f;
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
        *((rsp + 0x50)) = 0x40f804;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00406ab0 (0x40f815, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00406ab0 (0x410d8f, r13d);
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
        *((rsp + 0x50)) = 0x40f804;
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
        *((rsp + 0x50)) = 0x410d8f;
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
    *((rsp + 0x50)) = 0x40f804;
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
    rax = fcn_00406bb0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x410d8f;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x407de0 */
#include <stdint.h>
 
uint64_t fcn_00407de0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x00614318);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00614330) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x614320) {
        goto label_2;
    }
    rax = fcn_00408d20 (rbx, rsi);
    *(0x00614318) = rax;
    rbx = rax;
    do {
        rdi = *(0x00614330);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x00614330) = r12d;
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
        rax = fcn_00406bb0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6146a0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00408cc0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00406bb0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00408d20 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00614320]");
        rbx = rax;
        *(0x00614318) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00408f10 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408300 */
#include <stdint.h>
 
int64_t fcn_00408300 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00407de0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408370 */
#include <stdint.h>
 
int64_t fcn_00408370 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
    rcx = arg4;
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
    fcn_00407de0 (rdi, rax, rcx, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4083e0 */
#include <stdint.h>
 
void fcn_004083e0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
invalid_funccall(); //    return void (*0x408300)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408480 */
#include <stdint.h>
 
int64_t fcn_00408480 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006147a0]");
        __asm ("movdqa xmm1, xmmword [0x006147b0]");
        __asm ("movdqa xmm2, xmmword [0x006147c0]");
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
        fcn_00407de0 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4084b0 */
#include <stdint.h>
 
int64_t fcn_004084b0 (uint32_t arg2, int64_t arg3) {
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
    fcn_00407de0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408610 */
#include <stdint.h>
 
void fcn_00408610 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x6142e0;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x407de0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408630 */
#include <stdint.h>
 
void fcn_00408630 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x6142e0;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x407de0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408710 */
#include <stdint.h>
 
uint64_t fcn_00408710 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    do {
        r14d = ecx;
        r13d = esi;
        r12d = edi;
        rax = fcn_004094c0 (r8, r9);
        if (rax != 0) {
            rbx = rax;
            if (rbp != 0) {
                edi = r12d;
                r9 = rax;
                ecx = r14d;
                rdx = rbp;
                esi = r13d;
                r8d = 0x40db4c;
                eax = 0;
                rax = error_at_line ();
                rdi = rbx;
invalid_funccall(); //                void (*0x401b00)() ();
            }
            rcx = rax;
            eax = 0;
            error (r12d, r13d, 0x40db4c);
            rdi = rbx;
invalid_funccall(); //            void (*0x401b00)() ();
        }
        edx = 5;
        rax = dcgettext (0, "unable to display error message");
        rbx = rax;
        rax = errno_location ();
        eax = 0;
        error (0, *(rax), rbx);
        abort ();
        r8 = rdx;
        r9 = rcx;
        edx = 0;
        ecx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408720 */
#include <stdint.h>
 
void fcn_00408720 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x41058b);
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
        /* switch table (10 cases) at 0x410878 */
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
invalid_funccall(); //    void (*0x401f30)() ();
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
invalid_funccall(); //    void (*0x401f30)() ();
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
invalid_funccall(); //    void (*0x401f30)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408b20 */
#include <stdint.h>
 
int64_t fcn_00408b20 (int64_t arg5) {
    r8 = arg5;
    r9d = 0;
    while (eax <= 0x2f) {
        r10d = eax;
        eax += 8;
        r10 += *((r8 + 0x10));
        *(r8) = eax;
        rax = *(r10);
        *((rsp + r9*8)) = rax;
        if (rax == 0) {
            goto label_1;
        }
label_0:
        r9++;
        if (r9 == 0xa) {
            goto label_1;
        }
        eax = *(r8);
    }
    r10 = *((r8 + 8));
    rax = r10 + 8;
    *((r8 + 8)) = rax;
    rax = *(r10);
    *((rsp + r9*8)) = rax;
    if (rax != 0) {
        goto label_0;
    }
label_1:
    fcn_00408720 (rdi, rsi, rdx, rcx, rsp, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408cc0 */
#include <stdint.h>
 
uint64_t fcn_00408cc0 (int64_t arg1) {
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
    return fcn_00408f10 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408d20 */
#include <stdint.h>
 
uint64_t fcn_00408d20 (int64_t arg1, int64_t arg2) {
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
    return fcn_00408f10 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408ec0 */
#include <stdint.h>
 
uint64_t fcn_00408ec0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00408cc0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408f10 */
#include <stdint.h>
 
uint64_t fcn_00408f10 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006142d0), 0, 0x40db4c);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x408f50 */
#include <stdint.h>
 
uint64_t fcn_00408f50 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x410958 */
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
    /* switch table (54 cases) at 0x410ad8 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x409390 */
#include <stdint.h>
 
uint64_t fcn_00409390 (int64_t arg1, int64_t arg2, int64_t arg7) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    xmm0 = arg7;
    __asm ("movdqu xmm0, xmmword [rsi]");
    __asm ("movups xmmword [rsp + 8], xmm0");
    r15 = *((rsi + 0x10));
    *((rsp + 0x18)) = r15;
    if (rdi == 0) {
        goto label_2;
    }
    r13 = rdi;
    r12 = rsi;
    ebx = 0;
    r14 = 0xffffffffffffffff;
    while (eax <= 0x2f) {
        edx = eax;
        eax += 8;
        *((rsp + 8)) = eax;
        rdx += r15;
label_0:
        rax = strlen (*(rdx));
        rbx += rax;
        if (rbx < 0) {
            rbx = r14;
        }
        rbp--;
        if (rbp == 0) {
            goto label_3;
        }
        eax = *((rsp + 8));
    }
    rdx = *((rsp + 0x10));
    rax = rdx + 8;
    *((rsp + 0x10)) = rax;
    goto label_0;
label_3:
    if (rbx > 0x7fffffff) {
        goto label_4;
    }
    rax = fcn_00408cc0 (rbx + 1);
    rbx = rax;
    while (eax <= 0x2f) {
        edx = eax;
        eax += 8;
        rdx += *((r12 + 0x10));
        *(r12) = eax;
label_1:
        r15 = *(rdx);
        rax = strlen (*(rdx));
        r14 = rax;
        memcpy (rbx, r15, rax);
        rbx += r14;
        r13--;
        if (r13 == 0) {
            goto label_5;
        }
        eax = *(r12);
    }
    rdx = *((r12 + 8));
    rax = rdx + 8;
    *((r12 + 8)) = rax;
    goto label_1;
label_2:
    rax = fcn_00408cc0 (1);
    rbx = rax;
label_5:
    *(rbx) = 0;
    do {
        rax = rbp;
        return rax;
label_4:
        errno_location ();
        ebp = 0;
        *(rax) = 0x4b;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4094c0 */
#include <stdint.h>
 
uint64_t fcn_004094c0 (uint32_t arg1, int64_t arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    eax = *(rdi);
    if (al == 0) {
        goto label_0;
    }
    if (al != 0x25) {
        goto label_1;
    }
    if (*((rdi + 1)) != 0x73) {
        goto label_1;
    }
    eax = 0;
    while (cl != 0) {
        if (cl != 0x25) {
            goto label_1;
        }
        if (*((rdi + rax*2 + 1)) != 0x73) {
            goto label_1;
        }
        rax++;
        ecx = *((rdi + rax*2));
    }
    do {
        fcn_00409390 (rax, rsi, rdx);
        return rax;
label_1:
        eax = fcn_0040a600 (rsp + 8, rdi, rsi);
        if (eax >= 0) {
            rax = *((rsp + 8));
            return rax;
        }
        rax = errno_location ();
        if (*(rax) == 0xc) {
            goto label_2;
        }
        eax = 0;
        return rax;
label_0:
        eax = 0;
    } while (1);
label_2:
    return fcn_00408f10 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x409550 */
#include <stdint.h>
 
uint64_t fcn_00409550 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00409710 (rbx);
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
invalid_funccall(); //    void (*0x401bf0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4095d0 */
#include <stdint.h>
 
uint64_t fcn_004095d0 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x006147d8) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_004095d0 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x006147d8) != 0xffffffff) {
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
    eax = fcn_004095d0 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x006147d8) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x409710 */
#include <stdint.h>
 
uint32_t fcn_00409710 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x401df0)() ();
label_1:
    fcn_00409750 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x409750 */
#include <stdint.h>
 
int64_t fcn_00409750 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401ec0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x4097b0 */
#include <stdint.h>
 
uint64_t fcn_004097b0 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x409890 */
#include <stdint.h>
 
int64_t fcn_00409890 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x409eb0 */
#include <stdint.h>
 
uint64_t fcn_00409eb0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x410d91;
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
            fcn_004097b0 (r12, rbx);
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
        fcn_004097b0 (r12, rbx);
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
    eax = fcn_00409890 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00409890 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a480 */
#include <stdint.h>
 
int32_t fcn_0040a480 (int64_t arg_10h) {
    eax = *(0x0061433c);
    *(0x006147e0) = eax;
    eax = *(0x00614338);
    *(0x006147e4) = eax;
    eax = *((rsp + 0x10));
    fcn_00409eb0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061433c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00614820) = rdx;
    edx = imp.__libc_start_main;
    *(0x00614334) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a500 */
#include <stdint.h>
 
void fcn_0040a500 (void) {
    r9d = 0;
    fcn_0040a480 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a580 */
#include <stdint.h>
 
uint64_t fcn_0040a580 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040a9f0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a600 */
#include <stdint.h>
 
uint64_t fcn_0040a600 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdi;
    rax = fcn_0040afc0 (0, rsp + 8, rsi, rdx);
    if (rax == 0) {
        goto label_1;
    }
    rdx = *((rsp + 8));
    if (rdx > 0x7fffffff) {
        goto label_2;
    }
    *(rbx) = rax;
    eax = edx;
    do {
label_0:
        return rax;
label_2:
        free (rax);
        errno_location ();
        *(rax) = 0x4b;
        eax = 0xffffffff;
    } while (1);
label_1:
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a670 */
#include <stdint.h>
 
uint64_t fcn_0040a670 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a790 */
#include <stdint.h>
 
uint64_t fcn_0040a790 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_00408610 (1, rbp);
        rax = fcn_00408300 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x401e90)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a810 */
#include <stdint.h>
 
uint64_t fcn_0040a810 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00408630 (r12);
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
INVALID_JUMP;
    } while (rbx == 0);
    eax = memcmp (r14, rbp, r13);
    if (eax != 0) {
        goto label_0;
    }
    rbx++;
    rbp += r13;
    rax = fcn_00408630 (r12);
    edx = 0x40db4a;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40a9f0 */
#include <stdint.h>
 
uint64_t fcn_0040a9f0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x410e09;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40aa50 */
#include <stdint.h>
 
uint64_t fcn_0040aa50 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x410daf;
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
        r15d = 0x410daf;
label_2:
        *(0x00614818) = r15;
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
        r15d = 0x410daf;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40de2f;
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
    fcn_00409550 (rbx);
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
        r15d = 0x410daf;
        rbx = rax;
        free (r15);
        fcn_00409550 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40afc0 */
#include <stdint.h>
 
uint64_t fcn_0040afc0 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
    eax = fcn_0040cd00 (r15, rbp - 0x580, rbp - 0x670);
    if (eax < 0) {
        goto label_58;
    }
    eax = fcn_0040cae0 (rbx, rbp - 0x670);
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
    /* switch table (18 cases) at 0x410ea0 */
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
    /* switch table (5 cases) at 0x410f30 */
label_58:
    ebx = 0;
    goto label_7;
label_72:
    *(fp_stack--) = fp_stack[unknown];
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
    *(fp_stack--) = fp_stack[unknown];
    eax = *((rbp - 0x6b0));
    if (eax == 1) {
        goto label_109;
    }
    if (eax == 2) {
        goto label_110;
    }
    r9 = rbp - 0x67c;
    unknown = fp_stack[0];
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
    unknown = fp_stack[0];
    fp_stack--;
    if (rax == -1) {
        goto label_5;
    }
    rax = malloc (rax);
    r11d = *((rbp - 0x6b0));
    *(fp_stack--) = fp_stack[unknown];
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
    unknown = fp_stack[0];
    fp_stack--;
    eax = 0;
    snprintf_chk ();
    r11 = *((rbp - 0x6c8));
    goto label_19;
label_109:
    rax = rbp - 0x67c;
    unknown = fp_stack[0];
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40cae0 */
#include <stdint.h>
 
int64_t fcn_0040cae0 (int64_t arg1, uint32_t arg2) {
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
        /* switch table (23 cases) at 0x410f60 */
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
    *(fp_stack--) = fp_stack[unknown];
    unknown = fp_stack[0];
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40cd00 */
#include <stdint.h>
 
uint64_t fcn_0040cd00 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    /* switch table (84 cases) at 0x411040 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40da80 */
#include <stdint.h>
 
int64_t fcn_0040da80 (void) {
    rax = 0x6142a8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dd.elf @ 0x40da98 */
#include <stdint.h>
 
void fcn_0040da98 (int64_t arg3) {
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
