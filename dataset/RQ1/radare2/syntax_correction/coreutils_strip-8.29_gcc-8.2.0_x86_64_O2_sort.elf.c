#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x402f50 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h_2;
    int64_t var_10h_2;
    char * var_8h;
    uint32_t var_10h;
    uint32_t var_18h;
    uint32_t var_20h;
    char * var_28h;
    uint32_t var_30h;
    char * var_38h;
    char * var_40h;
    char * var_48h;
    char * var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_90h_2;
    int64_t var_90h;
    int64_t var_91h;
    int64_t var_c0h_2;
    void * ptr;
    int64_t var_c8h;
    uint32_t var_d0h;
    int64_t var_d8h;
    int64_t var_f0h;
    int64_t var_108h;
    int64_t var_110h_2;
    uint32_t var_118h;
    int64_t var_110h;
    int64_t var_139h;
    int64_t var_150h_2;
    int64_t var_150h;
    int64_t var_158h;
    int64_t var_160h;
    int64_t var_168h;
    int64_t var_170h;
    int64_t var_178h;
    int64_t var_180h;
    int64_t var_181h;
    int64_t var_182h;
    int64_t var_183h;
    int64_t var_184h;
    int64_t var_185h;
    int64_t var_186h;
    int64_t var_187h;
    int64_t var_188h;
    int64_t var_1a0h_2;
    void * var_1a0h;
    int64_t var_1a8h;
    int64_t var_1b0h;
    int64_t var_1b8h;
    int64_t var_1c0h;
    int64_t var_1c8h;
    int64_t var_1d0h;
    int64_t var_1d1h;
    int64_t var_1d2h;
    int64_t var_1d3h;
    int64_t var_1d4h;
    int64_t var_1d5h;
    int64_t var_1d6h;
    int64_t var_1d7h;
    int64_t var_1d8h;
    int64_t var_230h_2;
    int64_t var_231h;
    struct sigaction * oldact;
    int64_t var_238h;
    int64_t var_248h;
    int64_t var_258h;
    int64_t var_268h;
    int64_t var_278h;
    int64_t var_288h;
    int64_t var_298h;
    int64_t var_2a8h;
    int64_t var_2b8h;
    rdi = argc;
    rsi = argv;
    ebx = edi;
    rax = getenv ("POSIXLY_CORRECT");
    *((rsp + 0x38)) = rax;
    r12b = (rax != 0) ? 1 : 0;
    eax = fcn_0040dbe0 ();
    eax -= 0x30db0;
    *(rsp + 8) = (eax > 0x2b8) ? 1 : 0;
    fcn_0040dc60 (*(rbp));
    rax = setlocale (6, 0x416571);
    *((rsp + 0x28)) = rax;
    bindtextdomain (0x416602, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x416602, rsi);
    *(0x0061c518) = 2;
    al = fcn_0040bd10 (3);
    *(0x0061cba1) = al;
    eax = fcn_0040bd10 (2);
    r14d = eax;
    *(0x0061cba0) = al;
    rax = localeconv ();
    rcx = *(rax);
    esi = *(rcx);
    *(0x0061cba8) = esi;
    if (sil == 0) {
        goto label_61;
    }
    if (*((rcx + 1)) != 0) {
        goto label_61;
    }
label_3:
    rdx = *((rax + 8));
    ecx = *(rdx);
    *(0x0061cba4) = ecx;
    if (cl == 0) {
        goto label_62;
    }
    if (*((rdx + 1)) != 0) {
        goto label_62;
    }
label_2:
    *(0x0061c758) = 0;
    rax = ctype_b_loc ();
    r13 = rax;
    rax = ctype_toupper_loc ();
    edx = 0;
    r9d = 1;
    r8d = 0;
    goto label_1;
label_0:
    esi = 0;
    do {
        *((rdx + 0x61ca80)) = sil;
        esi = ecx;
        rdi = rdx*4;
        si >>= 0xe;
        esi ^= 1;
        esi &= 1;
        *((rdx + 0x61c980)) = sil;
        esi = 0;
        if ((cl & 8) == 0) {
            sil = (rdx == 0xa) ? 1 : 0;
            ecx &= 1;
            ecx |= esi;
            ecx ^= 1;
            esi = ecx;
        }
        rcx = *(rax);
        *((rdx + 0x61c880)) = sil;
        rdx++;
        ecx = *((rcx + rdi));
        *((rdx + 0x61c77f)) = cl;
        if (rdx == 0x100) {
            goto label_63;
        }
label_1:
        rdi = *(r13);
        esi = 1;
        ecx = *((rdi + rdx*2));
    } while ((cl & 1) != 0);
    if (rdx != 0xa) {
        goto label_0;
    }
    edx = *((rdi + 0x14));
    *(0x0061ca8a) = r9b;
    *(0x0061c88a) = r8b;
    dx >>= 0xe;
    edx ^= 1;
    edx &= 1;
    *(0x0061c98a) = dl;
    rdx = *(rax);
    edx = *((rdx + 0x28));
    *(0x0061c78a) = dl;
    edx = 0xb;
    goto label_1;
label_62:
    *(0x0061cba4) = 0xffffffff;
    goto label_2;
label_61:
    *(0x0061cba8) = 0x2e;
    goto label_3;
label_63:
    if (r14b == 0) {
        goto label_64;
    }
    *(rsp) = ebx;
    r14d = 1;
label_4:
    rax = nl_langinfo (r14 + 0x2000d);
    rdi = rax;
    rbx = rax;
    rax = strlen (rdi);
    r15 = rax;
    rax = fcn_00411210 (rax + 1);
    rdx = r14;
    rdx <<= 4;
    *((rdx + 0x61c430)) = rax;
    *((rdx + 0x61c438)) = r14d;
    if (r15 == 0) {
        goto label_65;
    }
    r11 = *(r13);
    rdi = rbx;
    r10 = rbx + r15;
    r8d = 0;
    rcx = rax;
    do {
        esi = *(rdi);
        r9 = rcx;
        if ((*((r11 + rsi*2)) & 1) == 0) {
            edx = *((rsi + 0x61c780));
            r8++;
            *(rcx) = dl;
            rcx = rax + r8;
            r9 = rcx;
        }
        rdi++;
    } while (r10 != rdi);
label_11:
    r14++;
    *(r9) = 0;
    if (r14 != 0xd) {
        goto label_4;
    }
    ecx = 0x405cf0;
    edx = 0x10;
    esi = 0xc;
    ebx = *(rsp);
    edi = 0x61c440;
    qsort ();
label_64:
    edi = 0x61c6c0;
    r14d = 0xe;
    r13d = 0;
    sigemptyset ();
    while (r13 != 0xb) {
        r14d = *((r13*4 + 0x414980));
        sigaction (r14d, 0, rsp + 0x230);
        if (*((rsp + 0x230)) != 1) {
            esi = r14d;
            edi = 0x61c6c0;
            sigaddset ();
        }
        r13++;
    }
    __asm ("movdqa xmm3, xmmword [0x0061c6c0]");
    __asm ("movdqa xmm4, xmmword [0x0061c6d0]");
    *((rsp + 0x230)) = 0x405d80;
    r14d = 0xe;
    __asm ("movdqa xmm5, xmmword [0x0061c6e0]");
    __asm ("movdqa xmm6, xmmword [0x0061c6f0]");
    *((rsp + 0x2b8)) = 0;
    r13d = 0;
    __asm ("movups xmmword [rsp + 0x238], xmm3");
    __asm ("movdqa xmm7, xmmword [0x0061c700]");
    __asm ("movdqa xmm2, xmmword [0x0061c710]");
    __asm ("movdqa xmm1, xmmword [0x0061c720]");
    __asm ("movdqa xmm3, xmmword [0x0061c730]");
    __asm ("movups xmmword [rsp + 0x248], xmm4");
    __asm ("movups xmmword [rsp + 0x258], xmm5");
    __asm ("movups xmmword [rsp + 0x268], xmm6");
    __asm ("movups xmmword [rsp + 0x278], xmm7");
    __asm ("movups xmmword [rsp + 0x288], xmm2");
    __asm ("movups xmmword [rsp + 0x298], xmm1");
    __asm ("movups xmmword [rsp + 0x2a8], xmm3");
    while (eax == 0) {
        r13++;
        if (r13 == 0xb) {
            goto label_66;
        }
label_5:
        r14d = *((r13*4 + 0x414980));
        esi = *((r13*4 + 0x414980));
        edi = 0x61c6c0;
        eax = sigismember ();
    }
    r13++;
    sigaction (r14d, rsp + 0x230, 0);
    if (r13 != 0xb) {
        goto label_5;
    }
label_66:
    esi = 0;
    signal (0x11);
    edi = 0x407890;
    fcn_00413f20 ();
    xmm0 = 0;
    rax = 0xffffffffffffffff;
    rdi = (int64_t) ebx;
    __asm ("movups xmmword [rsp + 0x158], xmm0");
    *((rsp + 0x150)) = rax;
    *((rsp + 0x160)) = rax;
    rax = rdi;
    rax >>= 0x3d;
    __asm ("movups xmmword [rsp + 0x168], xmm0");
    al = (rax != 0) ? 1 : 0;
    rdi <<= 3;
    __asm ("movups xmmword [rsp + 0x178], xmm0");
    __asm ("movups xmmword [rsp + 0x188], xmm0");
    eax = (int32_t) al;
    if (rdi < 0) {
        goto label_67;
    }
    if (rax != 0) {
        goto label_67;
    }
    rax = fcn_00411210 (rdi);
    r15d = 0;
    *((rsp + 0x30)) = 0;
    r14d = 0;
    r13 = rax;
    *(rsp) = 0;
    rax = rsp + 0x110;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x50)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x40)) = rax;
    while (r14d != 0xffffffff) {
        if (r15 == 0) {
            goto label_68;
        }
        if (r12b == 0) {
            goto label_68;
        }
        rax = *(0x0061c57c);
        if (*((rsp + 8)) == 1) {
            if (*(rsp) != 0) {
                goto label_6;
            }
            if (eax == ebx) {
                goto label_69;
            }
            rdx = (int64_t) eax;
            rdx = *((rbp + rdx*8));
            if (*(rdx) == 0x2d) {
                goto label_70;
            }
        }
label_6:
        if (ebx <= eax) {
            goto label_71;
        }
        edx = rax + 1;
        rax = *((rbp + rax*8));
        *(0x0061c57c) = edx;
        *((r13 + r15*8)) = rax;
        r15++;
label_8:
        *((rsp + 0x90)) = 0xffffffff;
    }
label_7:
    rax = *(0x0061c57c);
    goto label_6;
label_70:
    if (*((rdx + 1)) != 0x6f) {
        goto label_6;
    }
    if (*((rdx + 2)) != 0) {
        goto label_68;
    }
    edx = rax + 1;
    if (edx == ebx) {
        goto label_6;
    }
label_68:
    ecx = 0x414b40;
    edx = "-bcCdfghik:mMno:rRsS:t:T:uVy:z";
    rsi = rbp;
    edi = ebx;
    r8 = rsp + 0x90;
    eax = fcn_00412f30 ();
    r14d = eax;
    if (eax == 0xffffffff) {
        goto label_7;
    }
    eax = rax + 0x83;
    if (eax > 0x10a) {
        goto label_72;
    }
    /* switch table (267 cases) at 0x4140f8 */
    fcn_0040a910 ("--sort", *(0x0061cd60), 0x414ae0, "ghMnRV", 1, *(0x0061c510));
    r14d = *((rax + str_ghMnRV));
    *((rsp + 0x230)) = r14b;
    *((rsp + 0x231)) = 0;
    fcn_00405c00 (rsp + 0x230, rsp + 0x150, 2);
    goto label_8;
    rsi = imp.__libc_start_main;
    r14d = 0x63;
    if (rsi != 0) {
        fcn_0040a910 ("--check", rsi, 0x414b20, 0x414b18, 1, *(0x0061c510));
        r14d = *((rax + 0x414b18));
    }
    eax = *(rsp);
    if (al != 0) {
        if (eax != r14d) {
            goto label_73;
        }
    }
    *(rsp) = r14b;
    goto label_8;
label_69:
    if (*((rsp + 0x10)) != 0) {
        goto label_59;
    }
    *(rsp) = 0;
label_58:
    rcx = imp.__libc_start_main;
    if (rcx == 0) {
        goto label_74;
    }
    rsi = rcx;
    ebx = 0;
    while (al != 0) {
        if (*((rsi + 0x37)) != 0) {
            goto label_75;
        }
        rax = *((rsp + 0x170));
        edx = *((rsp + 0x187));
        *((rsi + 0x20)) = rax;
        rax = *((rsp + 0x178));
        *((rsi + 0x28)) = rax;
        eax = *((rsp + 0x180));
        *((rsi + 0x30)) = al;
        eax = *((rsp + 0x181));
        *((rsi + 0x31)) = al;
        eax = *((rsp + 0x186));
        *((rsi + 0x36)) = al;
        eax = *((rsp + 0x182));
        *((rsi + 0x32)) = al;
        eax = *((rsp + 0x184));
        *((rsi + 0x34)) = al;
        eax = *((rsp + 0x185));
        *((rsi + 0x35)) = al;
        eax = *((rsp + 0x188));
        *((rsi + 0x37)) = dl;
        *((rsi + 0x38)) = al;
        eax = *((rsp + 0x183));
        *((rsi + 0x33)) = al;
        rsi = *((rsi + 0x40));
        ebx |= eax;
        if (rsi == 0) {
            goto label_76;
        }
label_9:
        al = fcn_00405af0 (rsi);
    }
label_75:
    eax = *((rsi + 0x33));
    rsi = *((rsi + 0x40));
    ebx |= eax;
    if (rsi != 0) {
        goto label_9;
    }
label_76:
    r12d = 0;
label_40:
    edx = *((rcx + 0x34));
    eax = *((rcx + 0x32));
    eax += edx;
    edx = *((rcx + 0x35));
    eax += edx;
    edx = *((rcx + 0x36));
    eax += edx;
    edx = *((rcx + 0x33));
    edx |= *((rcx + 0x38));
    sil = (*((rcx + 0x20)) != 0) ? 1 : 0;
    edx |= esi;
    edx = (int32_t) dl;
    eax += edx;
    eax--;
    if (eax <= 0) {
        goto label_77;
    }
    goto label_78;
    do {
        edx = *((rcx + 0x34));
        eax = *((rcx + 0x32));
        eax += edx;
        edx = *((rcx + 0x35));
        eax += edx;
        edx = *((rcx + 0x36));
        edx += eax;
        eax = *((rcx + 0x38));
        al |= *((rcx + 0x33));
        sil = (*((rcx + 0x20)) != 0) ? 1 : 0;
        eax |= esi;
        eax = (int32_t) al;
        eax += edx;
        if (eax > 1) {
            goto label_78;
        }
label_77:
        rcx = *((rcx + 0x40));
    } while (rcx != 0);
label_41:
    if (*(0x0061c740) == 0) {
        goto label_29;
    }
label_28:
    if (*(rsp) != 0) {
        goto label_79;
    }
    if (*((rsp + 0x20)) != 0) {
        goto label_79;
    }
    if (*((rsp + 0x28)) == 0) {
        goto label_80;
    }
    rax = setlocale (3, 0x416571);
    if (rax == 0) {
        goto label_80;
    }
label_16:
    if (*(0x0061cba1) != 0) {
        goto label_81;
    }
    edx = 5;
    rax = dcgettext (0, "using simple byte comparison");
    rcx = rax;
    eax = 0;
    error (0, 0, 0x416abc);
label_15:
    r14 = imp.__libc_start_main;
    rdi = rsp + 0x1a0;
    ecx = 0x12;
    rsi = rsp + 0x150;
    *((rsp + 8)) = rdi;
    *(rdi) = *(rsi);
    rcx--;
    rsi += 4;
    rdi += 4;
    if (r14 == 0) {
        goto label_82;
    }
    rax = rsp + 0x91;
    *((rsp + 0x48)) = bl;
    rbx = r14;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x38)) = r15;
    *((rsp + 0x40)) = r13;
    while (r13 == 0) {
        if (*((rbx + 0x18)) == 0) {
            goto label_83;
        }
        if (al != 0) {
            goto label_84;
        }
label_10:
        if (rdx != 0) {
            rax = *((rbx + 0x10));
            rdx = rax + 1;
            rax = *(rbx);
            rax++;
            if (rax == 0) {
                eax = 1;
            }
            if (rdx == 0) {
                goto label_85;
            }
            if (rdx > rax) {
                goto label_85;
            }
        }
label_22:
        rax = *((rsp + 0x1c0));
        if (rax != 0) {
            if (rax == *((rbx + 0x20))) {
                goto label_86;
            }
        }
label_23:
        rax = *((rsp + 0x1c8));
        if (rax != 0) {
            if (rax == *((rbx + 0x28))) {
                goto label_87;
            }
        }
label_24:
        eax = *((rbx + 0x30));
        rbp++;
        eax ^= 1;
        eax = *((rbx + 0x31));
        eax ^= 1;
        eax = *((rbx + 0x36));
        eax ^= 1;
        eax = *((rbx + 0x32));
        eax ^= 1;
        eax = *((rbx + 0x34));
        eax ^= 1;
        eax = *((rbx + 0x35));
        eax ^= 1;
        eax = *((rbx + 0x33));
        eax ^= 1;
        eax = *((rbx + 0x38));
        eax ^= 1;
        eax = *((rbx + 0x37));
        rbx = *((rbx + 0x40));
        eax ^= 1;
        if (rbx == 0) {
            goto label_88;
        }
        r15 = *(rbx);
        r13 = *((rbx + 0x10));
        if (*((rbx + 0x39)) != 0) {
            eax = 0;
            rsi = rsp + 0x70;
            if (r15 == -1) {
                r15 = rax;
            }
            rax = fcn_0040d370 (r15, rsi, rdx);
            rdi = *((rsp + 0x28));
            edx = 0x2d;
            *((rsp + 0x90)) = 0x2b;
            rsi = rax;
            rax = stpcpy_chk ();
            r14 = rax;
            r15 = rsp + 0xc0;
            rax = fcn_0040d370 (r15 + 1, rsp + 0x70, rdx);
            rdi = r15 + 3;
            edx = 0x2c;
            *((rsp + 0xc0)) = 0x206b2d;
            rsi = rax;
            rax = stpcpy_chk ();
            *((rsp + 0x10)) = rax;
            if (*((rbx + 0x10)) != -1) {
                r13++;
                rax = fcn_0040d370 (r13, rsp + 0x70, rdx);
                *(r14) = 0x2d20;
                strcpy (r14 + 2, rax);
                dil = (*((rbx + 0x18)) == -1) ? 1 : 0;
                rdi += r13;
                rax = fcn_0040d370 (0, rsp + 0x70, rdx);
                rdx = *((rsp + 0x10));
                *(rdx) = 0x2c;
                strcpy (rdx + 1, rax);
            }
            rax = fcn_0040f860 (1, r15);
            r14 = rax;
            rax = fcn_0040f860 (0, rsp + 0x90);
            edx = 5;
            r15 = rax;
            rax = dcgettext (0, "obsolescent key %s used; consider %s instead");
            rcx = r15;
            r8 = r14;
            eax = 0;
            error (0, 0, rax);
            r15 = *(rbx);
            r13 = *((rbx + 0x10));
        }
        eax = r12d;
        if (r15 != -1) {
            if (r13 >= r15) {
                goto label_89;
            }
            edx = 5;
            rax = dcgettext (0, "key %lu has zero width and will be ignored");
            rcx = rbp;
            eax = 0;
            error (0, 0, rax);
            r13 = *((rbx + 0x10));
            eax = 1;
        }
label_89:
        rdx = 0xffff00ff0000;
        esi = 1;
        rdx &= *((rbx + 0x30));
        if (rdx == 0) {
            esi = *((rbx + 0x36));
        }
    }
label_83:
    if (al != 0) {
        goto label_84;
    }
    if (*(0x0061c424) != 0x80) {
        goto label_10;
    }
    if (*((rbx + 0x30)) == 0) {
        if (esi == 0) {
            goto label_90;
        }
        if (*((rbx + 8)) != 0) {
            goto label_90;
        }
    }
    if (*((rbx + 0x31)) != 0) {
        goto label_10;
    }
    if (*((rbx + 0x18)) == 0) {
        goto label_10;
    }
label_90:
    edx = 5;
    rax = dcgettext (0, "leading blanks are significant in key %lu; consider also specifying 'b'");
    rcx = rbp;
    eax = 0;
    rax = error (0, 0, rax);
    edx = 0xffff00ff;
    rdx <<= 0x10;
    rdx &= *((rbx + 0x30));
    goto label_10;
label_65:
    r9 = rax;
    goto label_11;
    eax = *((rsp + 0x90));
    *((rsp + 0x48)) = rdi;
    *((rsp + 0x50)) = eax;
    eax = fcn_00411680 (*(0x0061cd60), 0, 0xa, rsp + 0x230, 0x416571);
    if (eax == 1) {
        goto label_91;
    }
    if (eax != 0) {
        goto label_92;
    }
    rax = *((rsp + 0x230));
    *((rsp + 0x50)) = rax;
    if (rax != 0) {
        goto label_8;
    }
    edx = 5;
    rax = dcgettext (0, "number in parallel must be nonzero");
    eax = 0;
    error (2, 0, rax);
    rdi = *((rsp + 0x18));
    rdx = imp.__libc_start_main;
    if (rdi != 0) {
        rsi = rdx;
        *((rsp + 0x18)) = rdx;
        eax = strcmp (rdi, rsi);
        rdx = *((rsp + 0x18));
        if (eax != 0) {
            goto label_93;
        }
    }
    *((rsp + 0x18)) = rdx;
    goto label_8;
    r10 = imp.__libc_start_main;
    eax = *((rsp + 0x90));
    rdi = r10;
    *((rsp + 0x58)) = r10;
    *((rsp + 0x60)) = eax;
    eax = fcn_00411b40 (rdi, 0, 0xa, rsp + 0xc0, 0);
    rsi = rsp + 0x230;
    edi = 7;
    *((rsp + 0x48)) = eax;
    eax = getrlimit ();
    r11d = 0x11;
    r9d = *((rsp + 0x48));
    r10 = *((rsp + 0x58));
    if (eax == 0) {
        eax = *((rsp + 0x230));
        r11d = rax - 3;
    }
    if (r9d != 0) {
        goto label_94;
    }
    rax = *((rsp + 0xc0));
    edx = eax;
    *(0x0061c420) = eax;
    if (rax != rdx) {
        goto label_17;
    }
    if (eax <= 1) {
        goto label_95;
    }
    if (eax <= r11d) {
        goto label_8;
    }
label_17:
    *(rsp) = r11d;
    rax = fcn_0040f880 (r10);
    edx = 5;
    rax = *((rsp + 0x60));
    rax <<= 5;
    rbx = *((rax + 0x414b40));
    rax = dcgettext (0, "--%s argument %s too large");
    r8 = rbp;
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    r11d = *(rsp);
    rax = fcn_0040d330 (r11d, rsp + 0x1a0, rdx);
    edx = 5;
    rax = dcgettext (0, "maximum --%s argument with current rlimit is %s");
    r8 = rbp;
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
    rax = imp.__libc_start_main;
    *((rsp + 0x10)) = rax;
    goto label_8;
    rdi = imp.__libc_start_main;
    rdx = imp.__libc_start_main;
    if (rdi != 0) {
        rsi = rdx;
        *((rsp + 0x48)) = rdx;
        eax = strcmp (rdi, rsi);
        rdx = *((rsp + 0x48));
        if (eax != 0) {
            goto label_96;
        }
    }
    *(0x0061c748) = rdx;
    goto label_8;
    *(0x0061c740) = 1;
    goto label_8;
    *(0x0061c500) = 0;
    goto label_8;
    rcx = *(0x0061c57c);
    rdx = imp.__libc_start_main;
    rax = rcx;
    if (*((rbp + rcx*8 - 8)) != rdx) {
        goto label_8;
    }
label_48:
    ecx = *(rdx);
    esi = ecx;
    ecx -= 0x30;
    if (ecx <= 9) {
        goto label_97;
    }
    edx = 0;
    dl = (sil != 0) ? 1 : 0;
    eax -= edx;
    *(0x0061c57c) = eax;
    goto label_8;
    *(0x0061c759) = 1;
    goto label_8;
    rdx = imp.__libc_start_main;
    eax = *(rdx);
    if (al == 0) {
        goto label_98;
    }
    if (*((rdx + 1)) != 0) {
        rdi = rdx;
        *((rsp + 0x48)) = rdx;
        eax = strcmp (rdi, 0x416750);
        rdx = *((rsp + 0x48));
        if (eax != 0) {
            goto label_99;
        }
        eax = 0;
    }
    edx = *(0x0061c424);
    if (edx != 0x80) {
        if (edx != eax) {
            goto label_100;
        }
    }
    *(0x0061c424) = eax;
    goto label_8;
    *(0x0061c75a) = 1;
    goto label_8;
    *((rsp + 0x30)) = 1;
    goto label_8;
    eax = 0;
    ecx = 0x12;
    rdi = rsp + 0x100;
    memset (rdi, eax, rcx);
    *((rsp + 0x110)) = 0xffffffffffffffff;
    rax = fcn_00407c00 (*(0x0061cd60), rsp + 0x100, "invalid number at field start");
    rdx = *((rsp + 0x100));
    rcx = rdx - 1;
    *((rsp + 0x100)) = rcx;
    if (rdx == 0) {
        goto label_101;
    }
    if (*(rax) == 0x2e) {
        goto label_102;
    }
label_44:
    rdx = *((rsp + 0x100));
    rdx |= *((rsp + 0x108));
    if (rdx == 0) {
        goto label_103;
    }
label_18:
    rax = fcn_00405c00 (rax, rsp + 0x100, 0);
    if (*(rax) == 0x2c) {
        goto label_104;
    }
    *((rsp + 0x110)) = 0xffffffffffffffff;
    *((rsp + 0x118)) = 0;
label_43:
    if (*(rax) != 0) {
        goto label_105;
    }
    fcn_00411410 (rsp + 0x100, 0x48);
    rdx = imp.__libc_start_main;
    ecx = 0x61c750;
    do {
        if (rdx == 0) {
            goto label_20;
        }
        rcx = rdx + 0x40;
        rdx = *((rdx + 0x40));
    } while (1);
    rdi = *((rsp + 0x20));
    rdx = imp.__libc_start_main;
    if (rdi != 0) {
        rsi = rdx;
        *((rsp + 0x20)) = rdx;
        eax = strcmp (rdi, rsi);
        rdx = *((rsp + 0x20));
        if (eax != 0) {
            goto label_106;
        }
    }
    *((rsp + 0x20)) = rdx;
    goto label_8;
    eax = fcn_0040a010 (*(0x0061cd60));
    goto label_8;
    do {
    } while (rcx != 0);
    r9d = "Paul Eggert";
    eax = 0;
    r8d = "Mike Haertel";
    rcx = *(0x0061c508);
    fcn_004110d0 (*(obj.stdout), 0x416672, "GNU coreutils");
    exit (0);
    rdx = imp.__libc_start_main;
    if (*(rdx) == 0x2b) {
        goto label_107;
    }
label_19:
    *((r13 + r15*8)) = rdx;
    r15++;
    goto label_8;
    eax = *((rsp + 0x90));
    *((rsp + 0x48)) = rdi;
    *((rsp + 0x58)) = eax;
    eax = fcn_00411b40 (*(0x0061cd60), rsp + 0x230, 0xa, rsp + 0x1a0, "EgGkKmMPtTYZ");
    if (eax != 0) {
        goto label_108;
    }
    rax = *((rsp + 0x230));
    eax = *((rax - 1));
    eax -= 0x30;
    if (eax <= 9) {
        rax = *((rsp + 0x1a0));
        rdi = 0x3fffffffffffff;
        if (rax > rdi) {
            goto label_53;
        }
        rax <<= 0xa;
        *((rsp + 0x1a0)) = rax;
    }
label_52:
    rdx = *((rsp + 0x1a0));
    if (rdx < *(0x0061c778)) {
        goto label_8;
    }
    eax = *(0x0061c420);
    rax *= 0x22;
    if (rax < rdx) {
        rax = rdx;
    }
    *(0x0061c778) = rax;
    goto label_8;
label_88:
    r15 = *((rsp + 0x38));
    r13 = *((rsp + 0x40));
    ebx = *((rsp + 0x48));
label_82:
    al = fcn_00405af0 (*((rsp + 8)));
    r12d = *((rsp + 0x1d7));
    if (al != 0) {
        goto label_109;
    }
    if (*(0x0061c75a) == 0) {
        if (*(0x0061c759) != 0) {
            goto label_110;
        }
        *((rsp + 0x1d7)) = 0;
    }
label_110:
    rbp = rsp + 0xc0;
    eax = fcn_00405b50 (*((rsp + 8)), rbp);
    eax = 0;
    rdi = rbp;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    r8d = 5;
    edx = "options '-%s' are ignored";
    edi = 0;
    esi = "option '-%s' is ignored";
    rcx = ~rcx;
    rcx--;
    rax = dcngettext ();
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    *((rsp + 0x1d7)) = r12b;
    if (r12b != 0) {
label_31:
        if (*(0x0061c75a) != 0) {
            goto label_29;
        }
label_30:
        if (*(0x0061c759) != 0) {
            goto label_29;
        }
        if (*(0x0061c750) == 0) {
            goto label_29;
        }
        edx = 5;
        rax = dcgettext (0, "option '-r' only applies to last-resort comparison");
        eax = 0;
        error (0, 0, rax);
    }
label_29:
    eax = *((rsp + 0x187));
    *(0x0061c75b) = al;
    if (bl != 0) {
        goto label_111;
    }
label_25:
    if (*(0x0061c768) == 0) {
        goto label_112;
    }
label_27:
    if (r15 == 0) {
        goto label_113;
    }
label_26:
    rdx = imp.__libc_start_main;
    if (rdx != 0) {
        eax = *(0x0061c420);
        rax *= 0x22;
        if (rax < rdx) {
            rax = rdx;
        }
        *(0x0061c778) = rax;
    }
    if (*(rsp) == 0) {
        goto label_114;
    }
    if (r15 > 1) {
        goto label_115;
    }
    if (*((rsp + 0x20)) != 0) {
        goto label_116;
    }
    r13 = *(r13);
    rax = fcn_00407cd0 (r13, 0x4168fa);
    r14 = rax;
    if (rax == 0) {
        goto label_117;
    }
    rax = imp.__libc_start_main;
    ebx = *(0x0061c759);
    esi = 0x20;
    *((rsp + 0x18)) = rax;
    ebx ^= 1;
    rax = *(0x0061c428);
    if (*(0x0061c778) >= rax) {
        rax = imp.__libc_start_main;
    }
    ebx = (int32_t) bl;
    r12d = 0;
    rdx = rax;
    rax = rsp + 0x1a0;
    rdi = rax;
    *((rsp + 8)) = rax;
    fcn_00405e30 (rdi, rsi, rdx);
    *((rsp + 0xc0)) = 0;
    *((rsp + 0x10)) = 0;
label_12:
    al = fcn_004074d0 (*((rsp + 8)), r14, r13);
    if (al == 0) {
        goto label_118;
    }
    rax = *((rsp + 0x1b0));
    rdi = *((rsp + 0x1b8));
    rdi += *((rsp + 0x1a0));
    rax <<= 5;
    r15 = rdi - 0x20;
    rbp -= rax;
    if (r12 == 0) {
        goto label_14;
    }
    goto label_119;
    do {
        r15 -= 0x20;
        eax = fcn_004082a0 (rdi, r15);
        if (ebx <= eax) {
            goto label_120;
        }
label_14:
        rdi = r15;
    } while (rbp < r15);
    rdx = *((r15 + 8));
    rdi = *((rsp + 0x1b0));
    if (r12 < rdx) {
        goto label_121;
    }
label_13:
    memcpy (*((rsp + 0xc0)), *(r15), rdx);
    rax = *((r15 + 8));
    *((rsp + 0xc8)) = rax;
    if (*((rsp + 0x18)) == 0) {
        goto label_12;
    }
    rdx = *((r15 + 0x10));
    rax = *((rsp + 0xc0));
    rcx = *(r15);
    rdx += rax;
    rax += *((r15 + 0x18));
    rdx -= rcx;
    rax -= rcx;
    *((rsp + 0xd0)) = rdx;
    *((rsp + 0xd8)) = rax;
    goto label_12;
    do {
        if (rdx <= r12) {
            goto label_122;
        }
label_121:
        r12 += r12;
    } while (r12 != 0);
    r12 = rdx;
label_122:
    free (*((rsp + 0xc0)));
    rax = fcn_00411210 (r12);
    rdx = *((r15 + 8));
    *((rsp + 0xc0)) = rax;
    goto label_13;
label_119:
    eax = fcn_004082a0 (rsp + 0xc0, r15);
    if (ebx > eax) {
        goto label_14;
    }
label_120:
    ebx = 0;
    if (*(rsp) == 0x63) {
        goto label_123;
    }
label_37:
    ebx ^= 1;
    fcn_00407df0 (r14, r13);
    free (*((rsp + 0x1a0)));
    free (*((rsp + 0xc0)));
    eax = (int32_t) bl;
label_33:
    return rax;
label_20:
    *(rcx) = rax;
    *((rax + 0x40)) = 0;
    goto label_8;
label_81:
    rax = setlocale (3, 0);
    rax = fcn_0040f880 (rax);
    edx = 5;
    rax = dcgettext (0, "using %s sorting rules");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    goto label_15;
label_80:
    edx = 5;
    rax = dcgettext (0, "failed to set locale");
    rcx = rax;
    eax = 0;
    eax = error (0, 0, 0x416abc);
    goto label_16;
label_108:
    if (eax == 2) {
        rdx = *((rsp + 0x230));
        ecx = *((rdx - 1));
        ecx -= 0x30;
        if (ecx > 9) {
            goto label_46;
        }
        if (*((rdx + 1)) == 0) {
            goto label_124;
        }
    }
label_46:
    r8 = *((rsp + 0x48));
    fcn_00411ab0 (eax, *((rsp + 0x58)), 0x53, 0x414b40);
label_94:
    if (r9d == 1) {
        goto label_17;
    }
    r8 = r10;
    fcn_00411ab0 (r9d, *((rsp + 0x60)), 0xffffff84, 0x414b40);
label_103:
    *((rsp + 0x100)) = 0xffffffffffffffff;
    goto label_18;
label_107:
    rax = *(0x0061c57c);
    if (eax == ebx) {
        goto label_125;
    }
    rax = *((rbp + rax*8));
    *((rsp + 0x48)) = 0;
    if (*(rax) == 0x2d) {
        goto label_126;
    }
label_47:
    al = (*((rsp + 0x38)) == 0) ? 1 : 0;
    eax &= *((rsp + 0x48));
    if (eax == 0) {
        goto label_19;
    }
    eax = 0;
    ecx = 0x12;
    rdi = rsp + 0x100;
    memset (rdi, eax, rcx);
    rcx |= 0xffffffffffffffff;
    *((rsp + 0x110)) = rcx;
    rax = fcn_00407c00 (rdx + 1, rsp + 0x100, 0);
    rcx = 0xffffffffffffffff;
    if (rax == 0) {
        goto label_127;
    }
    if (*(rax) == 0x2e) {
        goto label_128;
    }
    rdx = *((rsp + 0x100));
    rdx |= *((rsp + 0x108));
    if (rdx == 0) {
label_54:
        *((rsp + 0x100)) = 0xffffffffffffffff;
label_55:
        if (rax == 0) {
            goto label_129;
        }
    }
    rax = fcn_00405c00 (rax, rsp + 0x100, 0);
    if (*(rax) != 0) {
        goto label_129;
    }
    if (*((rsp + 0x48)) != 0) {
        rax = *(0x0061c57c);
        edx = rax + 1;
        rax = *((rbp + rax*8));
        *(0x0061c57c) = edx;
        *((rsp + 0x48)) = rax;
        rax = fcn_00407c00 (rax + 1, *((rsp + 0x40)), "invalid number after '-'");
        if (rax == 0) {
            goto label_130;
        }
        if (*(rax) == 0x2e) {
            goto label_131;
        }
label_57:
        if (*((rsp + 0x118)) == 0) {
            rdx = *((rsp + 0x110));
            if (rdx == 0) {
                goto label_132;
            }
            rdx--;
            *((rsp + 0x110)) = rdx;
        }
label_132:
        rax = fcn_00405c00 (rax, rsp + 0x100, 1);
        if (*(rax) != 0) {
            goto label_133;
        }
    }
    *((rsp + 0x139)) = 1;
    fcn_00411410 (rsp + 0x100, 0x48);
    rdx = imp.__libc_start_main;
    ecx = 0x61c750;
label_21:
    if (rdx == 0) {
        goto label_20;
    }
    rcx = rdx + 0x40;
    rdx = *((rdx + 0x40));
    goto label_21;
label_84:
    if (r12b != 0) {
        goto label_22;
    }
    goto label_10;
label_86:
    *((rsp + 0x1c0)) = 0;
    goto label_23;
label_87:
    *((rsp + 0x1c8)) = 0;
    goto label_24;
label_111:
    rax = fcn_0040f900 (*((rsp + 0x18)), 0x10);
    edx = 5;
    esi = "open failed";
    rbx = rax;
    if (rax == 0) {
        goto label_134;
    }
    rax = rsp + 0x1a0;
    rsi = rax;
    *((rsp + 8)) = rax;
    fcn_0040fc10 (rbx, rsi, 0x10);
    eax = fcn_0040fd70 (rbx);
    if (eax != 0) {
        goto label_135;
    }
    fcn_0040aa90 (0x61c600);
    fcn_0040b360 (*((rsp + 8)), 0x10, 0x61c600);
    goto label_25;
label_85:
    edx = 5;
    rax = dcgettext (0, "key %lu is numeric and spans multiple fields");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    goto label_22;
label_114:
    r12d = 0x41814a;
    ebx = 0;
    *((rsp + 0x68)) = r12;
    while (r15 != r14) {
        rbx = r14;
        rdx = *(rbp);
        ecx = 2;
        rdi = r12;
        rsi = rdx;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (eax > 0) ? 1 : 0;
        if (al != 0) {
            esi = 4;
            rdi = rdx;
            eax = euidaccess ();
            if (eax != 0) {
                goto label_136;
            }
        }
        r14 = rbx + 1;
        rbp += 8;
    }
    rax = *((rsp + 0x20));
    if (rax != 0) {
        eax = 0;
        eax = open (rax, 0x80041, 0x1b6);
        if (eax < 0) {
            goto label_137;
        }
        if (eax == 1) {
            goto label_138;
        }
        esi = 1;
        fcn_00408e10 (eax);
    }
label_138:
    if (*((rsp + 0x30)) != 0) {
        goto label_139;
    }
    if (*((rsp + 0x50)) == 0) {
        goto label_140;
    }
label_50:
    rbx = *((rsp + 0x50));
    *((rsp + 0x60)) = r13;
    rax = 0xffffffffffffff;
    *((rsp + 0xd8)) = 0;
    *((rsp + 0x30)) = r14;
    if (rbx <= rax) {
        rax = rbx;
    }
    r15d = 0;
    rbx = rax;
    *((rsp + 0x28)) = rax;
    rbx += rax;
    rax <<= 8;
    *((rsp + 0x38)) = rax;
    rax = rsp + 0x1a8;
    *((rsp + 0x40)) = rbx;
    *((rsp + 0x48)) = rax;
label_32:
    rax = *((rsp + 0x60));
    rax = *(rax);
    rdi = *(rax);
    *((rsp + 8)) = rax;
    rax = fcn_00407cd0 (*(rdi), 0x4168fa);
    *(rsp) = rax;
    if (rax == 0) {
        goto label_141;
    }
    *((rsp + 0x58)) = 0x30;
    if (*((rsp + 0x50)) > 1) {
        goto label_142;
    }
label_34:
    r12 = *((rsp + 0xd8));
    rax = rsp + 0xc0;
    *((rsp + 0x18)) = rax;
    if (r12 == 0) {
        goto label_143;
    }
label_39:
    *((rsp + 0xf0)) = 0;
    al = fcn_004074d0 (*((rsp + 0x18)), *(rsp), *((rsp + 8)));
    if (al == 0) {
        goto label_144;
    }
    r12d = *((rsp + 0xf0));
    rbx = *((rsp + 0xd8));
    if (r12b == 0) {
        goto label_145;
    }
    if (*((rsp + 0x30)) == 0) {
invalid_funccall(); //        void (*0x404968)() ();
    }
label_145:
    *(0x0061cb80) = 0;
    rbx += *((rsp + 0xc0));
    r15++;
    r12d = 0;
    fcn_004090c0 (rsp + 0x90, 0);
    rbp = rax + 0xd;
    if (*((rsp + 0xd0)) > 1) {
invalid_funccall(); //        void (*0x4047a0)() ();
    }
label_113:
    r15d = 1;
    free (r13);
    rax = fcn_00411210 (8);
    r13 = rax;
    *(rax) = 0x41814a;
    goto label_26;
label_112:
    rax = getenv ("TMPDIR");
    if (rax == 0) {
        goto label_146;
    }
label_42:
    fcn_0040a010 (rax);
    goto label_27;
label_74:
    al = fcn_00405af0 (rsp + 0x150);
    if (al == 0) {
        goto label_147;
    }
    if (*(0x0061c740) == 0) {
        goto label_148;
    }
    r12d = 0;
    ebx = 0;
    goto label_28;
label_109:
    if (r12b == 0) {
        goto label_29;
    }
    if (*(0x0061c75a) != 0) {
        goto label_149;
    }
    if (*(0x0061c759) == 0) {
        goto label_30;
    }
    if (*(0x0061c750) == 0) {
        goto label_30;
    }
    rbp = rsp + 0xc0;
    eax = fcn_00405b50 (*((rsp + 8)), rbp);
    eax = 0;
    rdi = rbp;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    r8d = 5;
    edx = "options '-%s' are ignored";
    edi = 0;
    esi = "option '-%s' is ignored";
    rax = rcx;
    rax = ~rax;
    rcx = rax - 1;
    rax = dcngettext ();
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    *((rsp + 0x1d7)) = r12b;
    goto label_31;
label_144:
    eax = fcn_00407df0 (*(rsp), *((rsp + 8)));
    if (*((rsp + 0x30)) == 0) {
        goto label_150;
    }
    goto label_32;
label_38:
    while (eax != 0) {
        eax = 0;
        goto label_33;
        eax = fcn_00411f80 (*(obj.stdin));
        eax++;
    }
    edx = 5;
    rax = dcgettext (0, "close failed");
    fcn_00405dd0 (rax, 0x41814a);
label_142:
    rcx = *((rsp + 0x28));
    edx = 1;
    eax = 1;
    do {
        rax += rax;
        rdx++;
    } while (rcx > rax);
    rdx <<= 5;
    *((rsp + 0x58)) = rdx;
    goto label_34;
label_143:
    rax = *((rsp + 0x58));
    r13 = *((rsp + 0x30));
    *((rsp + 0x18)) = r15;
    r15 = r12;
    rbp = rax + 1;
    rbx = rax + 2;
    goto label_151;
label_35:
    rcx = rbp;
    edx = 0;
    rsi = imp.__libc_start_main;
    rcx *= r12;
    rcx++;
    rax = rcx;
    rax = rdx_rax / rbp;
    rdx = rdx_rax % rbp;
    if (r12 != rax) {
        goto label_152;
    }
    rax = rsi;
    rax -= rbx;
    if (rcx >= rax) {
        goto label_152;
    }
    r15++;
    rbx += rcx;
    if (r15 >= r13) {
        goto label_153;
    }
label_151:
    if (r15 == 0) {
        goto label_154;
    }
    rax = *((rsp + 0x60));
    rdi = *((rsp + 0x68));
    ecx = 2;
    rdx = rsp + 0x1a0;
    r9 = *((rax + r15*8));
    rsi = *((rax + r15*8));
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (r15 > 0) ? 1 : 0;
    if (al != 0) {
        goto label_155;
    }
    esi = 0;
    edi = 1;
    eax = fxstat ();
    al = (eax != 0) ? 1 : 0;
label_36:
    if (al != 0) {
invalid_funccall(); //        void (*0x40540a)() ();
    }
label_45:
    eax = *(0x0061c420);
    rax *= 0x22;
    if (rax < r14) {
        rax = r14;
    }
    *(0x0061c5e0) = rax;
    goto label_35;
label_155:
    rsi = r9;
    edi = 1;
    eax = xstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_36;
label_154:
    eax = fileno (*(rsp));
    rdx = rsp + 0x1a0;
    edi = 1;
    esi = eax;
    eax = fxstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_36;
label_123:
    rdi += *((rsp + 0x1a0));
    rdi -= r15;
    rdi >>= 5;
    rdi += *((rsp + 0x10));
    rax = fcn_0040d370 (*((rsp + 0x1b8)), rsp + 0x90, rdx);
    rbp = imp.__libc_start_main;
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "%s: %s:%s: disorder: ");
    r9 = r12;
    r8 = r13;
    rcx = rbp;
    rdi = stderr;
    rdx = rax;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    edx = 5;
    rax = dcgettext (0, "standard error");
    fcn_00407e70 (r15, *(obj.stderr), rax);
    goto label_37;
label_139:
    rax = fcn_004113e0 (r14, 0x10);
    edx = 0;
    while (rdx != rbx) {
        rdx = rcx;
        rsi = *((r13 + rdx*8));
        rcx = rdx;
        rcx <<= 4;
        *((rax + rcx)) = rsi;
        rcx = rdx + 1;
    }
    fcn_00409330 (rax, 0, r14, *((rsp + 0x20)));
    goto label_38;
label_150:
    free (*((rsp + 0xc0)));
    edx = 0x10;
    rbx = imp.__libc_start_main;
    rax = rdx;
    rdx_rax = rax * r15;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_67;
    }
label_152:
    r15 = *((rsp + 0x18));
    rbx = rsi;
label_51:
    rax = rsp + 0xc0;
    rdi = rax;
    *((rsp + 0x18)) = rax;
    fcn_00405e30 (rdi, *((rsp + 0x58)), rbx);
    goto label_39;
label_148:
    eax = *((rsp + 0x187));
    *(0x0061c75b) = al;
    goto label_25;
label_147:
    rax = fcn_00411410 (rsp + 0x150, 0x48);
    rdx = imp.__libc_start_main;
    ecx = 0x61c750;
    do {
        if (rdx == 0) {
            goto label_156;
        }
        rcx = rdx + 0x40;
        rdx = *((rdx + 0x40));
    } while (1);
label_156:
    *(rcx) = rax;
    rcx = imp.__libc_start_main;
    r12d = 1;
    *((rax + 0x40)) = 0;
    ebx = *((rsp + 0x183));
    if (rcx != 0) {
        goto label_40;
    }
    goto label_41;
label_146:
    eax = "/tmp";
    goto label_42;
label_104:
    rax = fcn_00407c00 (rax + 1, *((rsp + 0x40)), "invalid number after ','");
    rdx = *((rsp + 0x110));
    rcx = rdx - 1;
    *((rsp + 0x110)) = rcx;
    if (rdx == 0) {
        goto label_101;
    }
    if (*(rax) == 0x2e) {
        goto label_157;
    }
label_49:
    fcn_00405c00 (rax, rsp + 0x100, 1);
    goto label_43;
label_102:
    fcn_00407c00 (rax + 1, rsp + 0x108, "invalid number after '.'");
    rdx = *((rsp + 0x108));
    rcx = rdx - 1;
    *((rsp + 0x108)) = rcx;
    if (rdx != 0) {
        goto label_44;
    }
    fcn_00405d30 (*(0x0061cd60), "character offset is zero");
    __asm ("cvttsd2si r14, xmm1");
    goto label_45;
label_149:
    if (*(0x0061c750) == 0) {
        goto label_29;
    }
    rbp = rsp + 0xc0;
    eax = fcn_00405b50 (*((rsp + 8)), rbp);
    eax = 0;
    rdi = rbp;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    r8d = 5;
    edx = "options '-%s' are ignored";
    edi = 0;
    esi = "option '-%s' is ignored";
    rax = rcx;
    rax = ~rax;
    rcx = rax - 1;
    rax = dcngettext ();
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    *((rsp + 0x1d7)) = 1;
    goto label_31;
label_53:
    eax = 1;
    goto label_46;
label_126:
    eax = *((rax + 1));
    eax -= 0x30;
    al = (eax <= 9) ? 1 : 0;
    eax = (int32_t) al;
    *((rsp + 0x48)) = eax;
    goto label_47;
label_97:
    rdx++;
    goto label_48;
label_157:
    fcn_00407c00 (rax + 1, rsp + 0x118, "invalid number after '.'");
    goto label_49;
    fcn_0040a0d0 (0);
label_140:
    rax = fcn_0040d6f0 (2);
    edx = 8;
    if (rax <= 8) {
        rdx = rax;
    }
    *((rsp + 0x50)) = rdx;
    goto label_50;
label_91:
    *((rsp + 0x50)) = 0xffffffffffffffff;
    goto label_8;
label_118:
    ebx = 1;
    goto label_37;
label_125:
    *((rsp + 0x48)) = 0;
    goto label_47;
label_153:
    r15 = *((rsp + 0x18));
    goto label_51;
label_124:
    edx = *(rdx);
    if (dl == 0x25) {
        goto label_158;
    }
    if (dl == 0x62) {
        goto label_52;
    }
    goto label_46;
label_127:
    rax = *((rsp + 0x100));
    rax |= *((rsp + 0x108));
    rdx = imp.__libc_start_main;
    if (rax != 0) {
        goto label_19;
    }
    *((rsp + 0x100)) = rcx;
    goto label_19;
label_129:
    rdx = imp.__libc_start_main;
    goto label_19;
label_158:
    fcn_0040d840 ();
    rax = *((rsp + 0x1a0));
    if (rax < 0) {
        goto label_159;
    }
    xmm1 = 0;
    __asm ("cvtsi2sd xmm1, rax");
label_56:
    __asm ("mulsd xmm0, xmm1");
    xmm1 = *(0x00416a40);
    __asm ("divsd xmm0, qword [0x00416a38]");
    __asm ("comisd xmm1, xmm0");
    if (rax <= 0) {
        goto label_53;
    }
    xmm1 = *(0x00416a48);
    __asm ("comisd xmm0, xmm1");
    if (rax >= 0) {
        goto label_160;
    }
    __asm ("cvttsd2si rax, xmm0");
    *((rsp + 0x1a0)) = rax;
    goto label_52;
label_128:
    fcn_00407c00 (rax + 1, rsp + 0x108, 0);
    rdx = *((rsp + 0x100));
    rdx |= *((rsp + 0x108));
    if (rdx == 0) {
        goto label_54;
    }
    goto label_55;
label_59:
    rax = fcn_0040f630 (4, *(r13));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "extra operand %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    edx = 5;
    rax = dcgettext (0, "file operands cannot be combined with --files0-from");
    edx = 0x4179cf;
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
label_72:
    fcn_0040a0d0 (2);
label_78:
    *((rcx + 0x37)) = 0;
    *((rcx + 0x30)) = 0;
    fcn_00405b50 (rcx, rsp + 0x1a0);
    rax = fcn_00405d00 (rsp + 0x1a0);
label_160:
    __asm ("subsd xmm0, xmm1");
    __asm ("cvttsd2si rax, xmm0");
    *((rsp + 0x1a0)) = rax;
    eax = 1;
    rax <<= 0x3f;
    goto label_52;
label_159:
    rdx = rax;
    eax &= 1;
    xmm1 = 0;
    rdx >>= 1;
    rdx |= rax;
    __asm ("cvtsi2sd xmm1, rdx");
    __asm ("addsd xmm1, xmm1");
    goto label_56;
label_98:
    edx = 5;
    rax = dcgettext (0, "empty tab");
    eax = 0;
    error (2, 0, rax);
label_131:
    fcn_00407c00 (rax + 1, rsp + 0x118, "invalid number after '.'");
    goto label_57;
label_130:
    assert_fail (0x416abd, "src/sort.c", 0x110d, "main");
    do {
        rax = dcgettext (0, rsi);
        fcn_00405dd0 (rax, rbx);
label_135:
        edx = 5;
label_134:
        rax = dcgettext (0, "close failed");
        fcn_00405dd0 (rax, *((rsp + 0x18)));
label_99:
        rax = fcn_0040f880 (rdx);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "multi-character tab %s");
        rcx = rbx;
        eax = 0;
        error (2, 0, rax);
label_100:
        edx = 5;
        rax = dcgettext (0, "incompatible tabs");
        eax = 0;
        error (2, 0, rax);
label_93:
        edx = 5;
        rax = dcgettext (0, "multiple random sources specified");
        eax = 0;
        error (2, 0, rax);
label_96:
        edx = 5;
        rax = dcgettext (0, "multiple compress programs specified");
        eax = 0;
        error (2, 0, rax);
label_106:
        edx = 5;
        rax = dcgettext (0, "multiple output files specified");
        eax = 0;
        error (2, 0, rax);
label_79:
        if (*(rsp) == 0) {
            *(rsp) = 0x6f;
        }
        eax = *(rsp);
        *(str_X___debug) = "X --debug";
        fcn_00405d00 ("X --debug");
label_101:
        fcn_00405d30 (*(0x0061cd60), "field number is zero");
label_73:
        fcn_00405d00 (0x41667f);
        fcn_00407dd0 (*((rsp + 0x20)));
label_133:
        fcn_00405d30 (*((rsp + 0x48)), "stray character in field spec");
label_141:
        fcn_00407dd0 (*((rsp + 8)));
label_95:
        rax = fcn_0040f880 (r10);
        edx = 5;
        rax = *((rsp + 0x60));
        rax <<= 5;
        rbx = *((rax + 0x414b40));
        rax = dcgettext (0, "invalid --%s argument %s");
        r8 = rbp;
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        rax = fcn_0040f880 (0x41671b);
        edx = 5;
        rax = dcgettext (0, "minimum --%s argument is %s");
        r8 = rbp;
        rcx = rbx;
        eax = 0;
        error (2, 0, rax);
label_137:
        edx = 5;
        rax = dcgettext (0, "open failed");
        fcn_00405dd0 (rax, *((rsp + 0x20)));
label_136:
        rbx = *(rbp);
        edx = 5;
        esi = "cannot read";
    } while (1);
label_115:
    rax = fcn_0040f630 (4, *((r13 + 8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "extra operand %s not allowed with -%c");
    r8d = *(rsp);
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
label_71:
    if (*((rsp + 0x10)) == 0) {
        goto label_58;
    }
    if (r15 != 0) {
        goto label_59;
    }
    rax = fcn_00407cd0 (*((rsp + 0x10)), 0x4168fa);
    rbx = rax;
    if (rax == 0) {
        goto label_161;
    }
    fcn_004103a0 (rsp + 0x230);
    al = fcn_00410440 (rbx, rsp + 0x230);
    rsi = *((rsp + 0x10));
    if (al == 0) {
        goto label_162;
    }
    fcn_00407df0 (rbx, rsi);
    rbx = *((rsp + 0x230));
    if (rbx == 0) {
        goto label_163;
    }
    free (r13);
    r13 = *((rsp + 0x238));
    r8d = 0x41814a;
    goto label_164;
label_60:
    r15++;
    if (*(rdx) == 0) {
        goto label_165;
    }
    if (rbx == r15) {
        goto label_58;
    }
label_164:
    rdx = *((r13 + r15*8));
    ecx = 2;
    rdi = r8;
    rsi = rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rbx > r15) ? 1 : 0;
    if (al != 0) {
        goto label_60;
    }
    rax = fcn_0040f630 (4, rdx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "when reading file names from stdin, no file name of %s allowed");
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
label_165:
    rdx = *((rsp + 0x10));
    rax = fcn_0040f700 (0, 3);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s:%lu: invalid zero-length file name");
    r8 = r15;
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
label_161:
    fcn_00407dd0 (*((rsp + 0x10)));
label_163:
    rax = fcn_0040f630 (4, *((rsp + 0x10)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "no input from %s");
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
label_162:
    rax = fcn_0040f630 (4, rsi);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot read file names from %s");
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
label_67:
    eax = fcn_00411460 ();
label_92:
    r8 = *((rsp + 0x48));
    fcn_00411ab0 (eax, *((rsp + 0x50)), 0xffffff87, 0x414b40);
label_116:
    eax = *(rsp);
    *(0x0061c400) = al;
    fcn_00405d00 (0x61c400);
label_117:
    fcn_00407dd0 (r13);
label_105:
    rax = fcn_00405d30 (*(0x0061cd60), "stray character in field spec");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40585b */
#include <stdint.h>
 
int32_t fcn_0040585b (void) {
    eax = 0x61c588;
    if (rax != 0x61c588) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x61c588;
invalid_funccall(); //        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4058b1 */
#include <stdint.h>
 
int64_t fcn_004058b1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0061c5c8) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x61be38;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0061c5d0) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040585b ();
    *(0x0061c5c8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405908 */
#include <stdint.h>
 
int64_t fcn_00405908 (void) {
    do {
        esi = 0x61c588;
        ecx = 2;
        rsi -= 0x61c588;
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
            edi = 0x61c588;
invalid_funccall(); //            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405930 */
#include <stdint.h>
 
int32_t fcn_00405930 (int64_t arg1) {
    rdi = arg1;
    rcx = *(rdi);
    r11d = imp.__libc_start_main;
    r10d = 0;
    eax = 0;
    edx = *(rcx);
    while (r9d <= 9) {
        r8d = *((rcx + 1));
        if (al < dl) {
            eax = edx;
        }
        r10d = 0;
        edx = r8d;
        if (r8d == r11d) {
            edx = *((rcx + 2));
            rsi = rcx + 2;
            r10d = 1;
        }
        rcx = rsi;
        r8d = (int32_t) dl;
        rsi = rcx + 1;
        r9d = r8 - 0x30;
    }
    if (r10b != 0) {
        goto label_0;
    }
    while (1) {
        *(rdi) = rcx;
        return eax;
        r8d = *((rcx + 1));
        rcx += 2;
        edx = r8d;
        r8d -= 0x30;
        if (r8d <= 9) {
            goto label_1;
        }
        rcx = rsi;
    }
    do {
        rcx = r8;
label_1:
        r8 = rcx + 1;
        esi = *((r8 - 1));
        if (al < dl) {
            eax = edx;
        }
        edx = esi;
        esi -= 0x30;
    } while (esi <= 9);
    *(rdi) = rcx;
    return eax;
label_0:
    rcx--;
    *(rdi) = rcx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4059f0 */
#include <stdint.h>
 
int64_t fcn_004059f0 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    eax = 0;
    ebx = *(rdi);
    al = (bl == 0x2d) ? 1 : 0;
    rdi += rax;
    *((rsp + 8)) = rdi;
    al = fcn_00405930 (rsp + 8);
    edx = 0;
    if (al > 0x30) {
        rax = *((rsp + 8));
        eax = *(rax);
        edx = *((rax + 0x4149c0));
        eax = edx;
        eax = -eax;
        if (bl != 0x2d) {
            edx = eax;
            goto label_0;
        }
    }
label_0:
    eax = edx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405a40 */
#include <stdint.h>
 
uint64_t fcn_00405a40 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    while (*((rax + 0x61ca80)) != 0) {
        rdi++;
        eax = *(rdi);
    }
    r11d = 0xc;
    r10d = 0;
label_0:
    r9 = r10 + r11;
    r9 >>= 1;
    rax = r9;
    rax <<= 4;
    rax = *((rax + 0x61c440));
    edx = *(rax);
    if (dl == 0) {
        goto label_3;
    }
    ecx = *(rdi);
    if (*((rcx + 0x61c780)) < dl) {
        goto label_4;
    }
    if (*((rcx + 0x61c780)) > dl) {
        goto label_5;
    }
    rdx = rdi;
    while (cl != 0) {
        r8d = *(rdx);
        if (*((r8 + 0x61c780)) < cl) {
            goto label_4;
        }
        if (*((r8 + 0x61c780)) > cl) {
            goto label_5;
        }
        rax++;
        ecx = *(rax);
        rdx++;
    }
label_2:
    if (rsi != 0) {
        *(rsi) = rdx;
    }
    r9 <<= 4;
    eax = *((r9 + 0x61c448));
    return rax;
label_4:
    r11 = r9;
label_1:
    if (r10 < r11) {
        goto label_0;
    }
    eax = 0;
    return rax;
label_5:
    r10 = r9 + 1;
    goto label_1;
label_3:
    rdx = rdi;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405af0 */
#include <stdint.h>
 
int32_t fcn_00405af0 (char * arg1) {
    rdi = arg1;
    eax = 0;
    while (*((rdi + 0x28)) != 0) {
label_0:
        return eax;
    }
    eax = *((rdi + 0x30));
    if (al != 0) {
        goto label_1;
    }
    if (*((rdi + 0x31)) != 0) {
        goto label_0;
    }
    rdx = 0xffff00ff0000;
    if ((*((rdi + 0x30)) & rdx) != 0) {
        goto label_0;
    }
    eax = *((rdi + 0x36));
    if (al != 0) {
        goto label_1;
    }
    if (*((rdi + 0x38)) != 0) {
        goto label_0;
    }
    eax = *((rdi + 0x33));
    eax ^= 1;
    return eax;
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405b50 */
#include <stdint.h>
 
int64_t fcn_00405b50 (char * arg1, void * arg2) {
    rdi = arg1;
    rsi = arg2;
    if (*((rdi + 0x30)) != 0) {
        *(rsi) = 0x62;
        rsi++;
    }
    while (1) {
        rax = rsi;
        if (*((rdi + 0x28)) != 0) {
            *(rsi) = 0x66;
            rax++;
        }
        if (*((rdi + 0x34)) != 0) {
            *(rax) = 0x67;
            rax++;
        }
        if (*((rdi + 0x35)) != 0) {
            *(rax) = 0x68;
            rax++;
        }
        if (*((rdi + 0x20)) == 0x61c980) {
            goto label_1;
        }
label_0:
        if (*((rdi + 0x36)) != 0) {
            *(rax) = 0x4d;
            rax++;
        }
        if (*((rdi + 0x32)) != 0) {
            *(rax) = 0x6e;
            rax++;
        }
        if (*((rdi + 0x33)) != 0) {
            *(rax) = 0x52;
            rax++;
        }
        if (*((rdi + 0x37)) != 0) {
            *(rax) = 0x72;
            rax++;
        }
        if (*((rdi + 0x38)) != 0) {
            *(rax) = 0x56;
            rax++;
        }
        *(rax) = 0;
        return rax;
        *(rsi) = 0x64;
        rsi++;
    }
label_1:
    *(rax) = 0x69;
    rax++;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405c00 */
#include <stdint.h>
 
int64_t fcn_00405c00 (int64_t arg1, uint32_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = *(rdi);
    if (cl == 0) {
        goto label_1;
    }
    eax = edx;
    edx--;
    eax &= 0xfffffffd;
    do {
        ecx -= 0x4d;
        if (cl > 0x25) {
            goto label_1;
        }
        ecx = (int32_t) cl;
        /* switch table (38 cases) at 0x413fa0 */
        *((rsi + 0x37)) = 1;
label_0:
        rdi++;
        ecx = *(rdi);
    } while (cl != 0);
label_1:
    rax = rdi;
    return rax;
    *((rsi + 0x32)) = 1;
    goto label_0;
    if (*((rsi + 0x20)) != 0) {
        goto label_0;
    }
    *((rsi + 0x20)) = 0x61c980;
    goto label_0;
    *((rsi + 0x35)) = 1;
    goto label_0;
    *((rsi + 0x34)) = 1;
    goto label_0;
    *((rsi + 0x28)) = 0x61c780;
    goto label_0;
    *((rsi + 0x20)) = 0x61c880;
    goto label_0;
    if (eax == 0) {
        *((rsi + 0x30)) = 1;
    }
    if (edx > 1) {
        goto label_0;
    }
    *((rsi + 0x31)) = 1;
    goto label_0;
    *((rsi + 0x38)) = 1;
    goto label_0;
    *((rsi + 0x36)) = 1;
    goto label_0;
    *((rsi + 0x33)) = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405d00 */
#include <stdint.h>
 
uint64_t fcn_00405d00 (void * arg1) {
    rdi = arg1;
    edx = 5;
    rbx = rdi;
    rax = dcgettext (0, "options '-%s' are incompatible");
    rcx = rbx;
    eax = 0;
    rax = error (2, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405d30 */
#include <stdint.h>
 
uint64_t fcn_00405d30 (char * arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    rax = fcn_0040f880 (rdi);
    edx = 5;
    rax = dcgettext (0, rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: invalid field specification %s");
    r8 = rbp;
    rcx = rbx;
    eax = 0;
    rax = error (2, 0, rax);
    rbx = imp.__libc_start_main;
    if (rbx == 0) {
        goto label_0;
    }
    do {
        unlink (rbx + 0xd);
        rbx = *(rbx);
    } while (rbx != 0);
label_0:
    *(0x0061c6a8) = 0;
    esi = 0;
    signal (ebp);
    edi = ebp;
    return raise ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405dd0 */
#include <stdint.h>
 
uint64_t fcn_00405dd0 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    rbx = rdi;
    while (1) {
        rax = fcn_0040f700 (0, 3);
        rax = errno_location ();
        r8 = rbp;
        rcx = rbx;
        eax = 0;
        error (2, *(rax), "%s: %s");
        edx = 5;
        rax = dcgettext (0, "standard output");
        rdx = rax;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405e30 */
#include <stdint.h>
 
uint64_t fcn_00405e30 (int64_t arg1, char * arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rsi;
    r12 = rsi + 1;
    rbx = rdx;
    while (rax == 0) {
        rbx >>= 1;
        if (r12 >= rbx) {
            goto label_0;
        }
        rbx &= 0xffffffffffffffe0;
        rbx += 0x20;
        rax = malloc (rbx);
        *(rbp) = rax;
    }
    *((rbp + 0x28)) = r13;
    *((rbp + 0x18)) = rbx;
    *((rbp + 0x10)) = 0;
    *((rbp + 0x20)) = 0;
    *((rbp + 8)) = 0;
    *((rbp + 0x30)) = 0;
    return rax;
label_0:
    return fcn_00411460 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405eb0 */
#include <stdint.h>
 
uint64_t fcn_00405eb0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = 0;
    rsi -= rdi;
    rbx = rdi;
    rax = fcn_0040d3c0 (rdi, rsi);
    rax = (int64_t) eax;
    if (rbp <= rbx) {
        goto label_0;
    }
    do {
        rbx++;
        edx = 0;
        dl = (*((rbx - 1)) == 9) ? 1 : 0;
        rax += rdx;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405ef0 */
#include <stdint.h>
 
int64_t fcn_00405ef0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdx;
    r12 = rdi;
    errno_location ();
    *(rax) = 0;
    rbx = rax;
    strxfrm (r12, rbp, r13);
    edx = *(rbx);
    if (edx == 0) {
        return rax;
    }
    edx = 5;
    rax = dcgettext (0, "string transformation failed");
    eax = 0;
    error (0, *(rbx), rax);
    edx = 5;
    rax = dcgettext (0, "set LC_ALL='C' to work around the problem");
    eax = 0;
    error (0, 0, rax);
    rax = fcn_0040f550 (0, 8, rbp);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "the untransformed string was %s");
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x405fb0 */
#include <stdint.h>
 
uint64_t fcn_00405fb0 (int64_t arg1) {
    int64_t wstatus;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    edx = 0;
    ebx = edi;
    edi = 0xffffffff;
    if (edi != 0) {
        edi = ebx;
    }
    dl = (edi == 0) ? 1 : 0;
    eax = waitpid (rdi, rsp + 0xc, rdx);
    if (eax < 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_2;
    }
    if (ebx <= 0) {
        goto label_3;
    }
label_0:
    eax = *((rsp + 0xc));
    edx = (int32_t) ah;
    eax &= 0x7f;
    edx |= eax;
    if (edx != 0) {
        goto label_4;
    }
    *(0x0061c69c)--;
    do {
label_2:
        eax = ebp;
        return eax;
label_3:
        rsi = rsp + 0x10;
        *((rsp + 0x18)) = eax;
        rax = fcn_0040cde0 (*(0x0061c6a0));
    } while (rax == 0);
    *((rax + 0xc)) = 2;
    goto label_0;
label_4:
    rax = fcn_0040f630 (4, *(0x0061c748));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s [-d] terminated abnormally");
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
label_1:
    rax = fcn_0040f630 (4, *(0x0061c748));
    edx = 5;
    rax = dcgettext (0, "waiting for %s [-d]");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (2, *(rax), rbx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4060a0 */
#include <stdint.h>
 
uint64_t fcn_004060a0 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    ebx = edi;
    *((rsp + 8)) = edi;
    rsi = rsp;
    rax = fcn_0040cde0 (*(0x0061c6a0));
    if (rax != 0) {
        *((rax + 0xc)) = 2;
        fcn_00405fb0 (ebx);
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4060d0 */
#include <stdint.h>
 
uint64_t fcn_004060d0 (int64_t arg1, size_t nbytes) {
    int64_t var_4h;
    rdi = arg1;
    rsi = nbytes;
    rdx = rsi;
    ebx = edi;
    do {
        ecx = *(rdx);
        rdx += 4;
        eax = rcx - 0x1010101;
        ecx = ~ecx;
        eax &= ecx;
        eax &= 0x80808080;
    } while (eax == 0);
    ecx = eax;
    ecx >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = ecx;
    }
    rcx = rdx + 2;
    if ((eax & 0x8080) == 0) {
        rdx = rcx;
    }
    edi = eax;
    dil += al;
    rdx -= 3;
    rdx -= rsi;
    write (2, rsi, rdx);
    while (1) {
        write (2, 0x416570, 1);
        exit (2);
        rax = fcn_0040d2b0 (ebx, rsp + 4, rdx);
        rbx = rax;
        eax = write (2, ": errno ", 8);
        rdi = rbx;
        rcx |= 0xffffffffffffffff;
        eax = 0;
        __asm ("repne scasb al, byte [rdi]");
        rsi = rcx;
        rsi = ~rsi;
        write (2, rbx, rsi - 1);
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x406190 */
#include <stdint.h>
 
uint64_t fcn_00406190 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rdi = imp.__libc_start_main;
    while (rax != 0) {
        *((rbx + 0xc)) = 1;
        rsi = rbx;
        rax = fcn_0040cda0 (rdi);
        if (rax == 0) {
            goto label_0;
        }
        return rax;
        rax = fcn_0040c600 (0x2f, 0, 0x405910, 0x405920, 0);
        rdi = rax;
        *(0x0061c6a0) = rax;
    }
label_0:
    return fcn_00411460 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4061f0 */
#include <stdint.h>
 
int64_t fcn_004061f0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_0:
    rax = r8;
    rax <<= 5;
    rdx -= rax;
    r13 = rcx;
    r12 = r8;
    rbx = rsi;
    if (r9b == 0) {
        goto label_1;
    }
    rax = *((rdi + 0x28));
    r14 = rbp;
    rdx = rax;
    rdx >>= 1;
    rcx = rdx;
    rax -= rdx;
    rcx <<= 5;
    r14 -= rcx;
    rcx = rdi + 0x10;
    do {
        *((rbx + 0x30)) = rax;
        eax = *((rdi + 0x50));
        esi = 0;
        r15 = rbx + 0x80;
        *((rbx + 0x38)) = rdi;
        rdi = rbx + 0x58;
        eax++;
        *((rbx + 0x10)) = rbp;
        *(rbx) = rbp;
        *((rbx + 0x18)) = r14;
        *((rbx + 8)) = r14;
        *((rbx + 0x20)) = rcx;
        *((rbx + 0x28)) = rdx;
        *((rbx + 0x50)) = eax;
        *((rbx + 0x54)) = 0;
        pthread_mutex_init ();
        if (r13 > 1) {
            goto label_2;
        }
        *((rbx + 0x40)) = 0;
        rax = r15;
        *((rbx + 0x48)) = 0;
        return rax;
label_1:
        rax = *((rdi + 0x30));
        r14 = rbp;
        rdx = rax;
        rdx >>= 1;
        rcx = rdx;
        rax -= rdx;
        rcx <<= 5;
        r14 -= rcx;
        rcx = rdi + 0x18;
    } while (1);
label_2:
    *((rbx + 0x40)) = r15;
    rcx >>= 1;
    r9d = 1;
    r13 -= rcx;
    rax = fcn_004061f0 (rbx, r15, rbp, r13, r12);
    goto label_0;
    r8 = r12;
    rcx = r13;
    rdx = r14;
    *((rbx + 0x48)) = rax;
    rdi = rbx;
    r9d = 0;
    rsi = rax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x406320 */
#include <stdint.h>
 
void fcn_00406320 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rsi;
    rbp = rdi + 8;
    rbx = rdi;
    rdi = rbp;
    pthread_mutex_lock ();
    fcn_0040d070 (*(rbx), r12);
    *((r12 + 0x54)) = 1;
    rdi = rbx + 0x30;
    pthread_cond_signal ();
    rdi = rbp;
    return pthread_mutex_unlock ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x406360 */
#include <stdint.h>
 
uint64_t fcn_00406360 (uint32_t arg1, uint32_t arg3) {
    rdi = arg1;
    rdx = arg3;
    rax = rdi + rsi - 1;
    esi = *(0x0061c424);
    rcx = *(rdx);
    r9 = *((rdx + 8));
    if (esi == 0x80) {
        goto label_5;
    }
    if (rax <= rdi) {
        goto label_0;
    }
    r8 = rcx - 1;
    if (rcx == 0) {
        goto label_3;
    }
    do {
label_1:
        ecx = *(rdi);
        if (esi == ecx) {
            goto label_6;
        }
        rdi++;
    } while (rax > rdi);
    do {
label_0:
        rdi += r9;
        if (rax > rdi) {
            rax = rdi;
        }
        return rax;
INVALID_JUMP;
    } while (rax <= rdi);
    rdi++;
    if (rax <= rdi) {
        goto label_0;
    }
    r8--;
    if (r8 != -1) {
        goto label_1;
    }
label_3:
    if (*((rdx + 0x30)) != 0) {
        goto label_7;
    }
    goto label_0;
label_2:
    rdi++;
    if (rax <= rdi) {
        goto label_0;
    }
label_7:
    edx = *(rdi);
    if (*((rdx + 0x61ca80)) != 0) {
        goto label_2;
    }
    rdi += r9;
    if (rax > rdi) {
        rax = rdi;
    }
    return rax;
label_5:
    if (rax <= rdi) {
        goto label_0;
    }
    rsi = rcx - 1;
    if (rcx == 0) {
        goto label_3;
    }
    do {
        ecx = *(rdi);
        ecx = *((rcx + 0x61ca80));
label_4:
        if (cl == 0) {
            goto label_8;
        }
        rdi++;
    } while (rax > rdi);
    rdi += r9;
    if (rax > rdi) {
        rax = rdi;
    }
    return rax;
label_8:
    if (rax > rdi) {
        goto label_9;
    }
    goto label_0;
    do {
        ecx = *(rdi);
        ecx = *((rcx + 0x61ca80));
        if (cl != 0) {
            goto label_10;
        }
label_9:
        rdi++;
    } while (rax != rdi);
    rdi = rax;
    goto label_0;
label_10:
    rsi--;
    if (rsi != -1) {
        goto label_4;
    }
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x406470 */
#include <stdint.h>
 
int64_t fcn_00406470 (int64_t arg1, uint32_t arg3) {
    rdi = arg1;
    rdx = arg3;
    r9 = *((rdx + 0x18));
    rcx = rdi + rsi - 1;
    rax = rdi;
    rsi = *((rdx + 0x10));
    edi = *(0x0061c424);
    rsi += 0;
    if (edi == 0x80) {
        goto label_3;
    }
    if (rcx <= rax) {
        goto label_0;
    }
    r8 = rsi - 1;
    if (rsi == 0) {
        goto label_0;
    }
    do {
label_1:
        esi = *(rax);
        if (edi == esi) {
            goto label_4;
        }
        rax++;
    } while (rcx > rax);
label_0:
    if (r9 == 0) {
        goto label_5;
    }
    if (*((rdx + 0x31)) == 0) {
        goto label_6;
    }
    if (rcx > rax) {
        goto label_7;
    }
    goto label_6;
    do {
        rax++;
        if (rcx == rax) {
            goto label_8;
        }
label_7:
        edx = *(rax);
    } while (*((rdx + 0x61ca80)) != 0);
label_6:
    rax += r9;
    if (rcx <= rax) {
        rax = rcx;
    }
    return rax;
label_4:
    if (rcx <= rax) {
        goto label_0;
    }
    rsi = r9;
    rsi |= r8;
    if (rsi == 0) {
        goto label_5;
    }
    rax++;
    if (rcx <= rax) {
        goto label_0;
    }
    r8--;
    if (r8 != -1) {
        goto label_1;
    }
    goto label_0;
label_5:
    return rax;
label_3:
    if (rcx <= rax) {
        goto label_0;
    }
    rdi = rsi - 1;
    if (rsi == 0) {
        goto label_0;
    }
    do {
        esi = *(rax);
        esi = *((rsi + 0x61ca80));
label_2:
        if (sil == 0) {
            goto label_9;
        }
        rax++;
    } while (rcx > rax);
    goto label_0;
label_9:
    if (rcx > rax) {
        goto label_10;
    }
    goto label_0;
    do {
        esi = *(rax);
        esi = *((rsi + 0x61ca80));
        if (sil != 0) {
            goto label_11;
        }
label_10:
        rax++;
    } while (rcx != rax);
    rax = rcx;
    goto label_0;
label_11:
    rdi--;
    if (rdi != -1) {
        goto label_2;
    }
    goto label_0;
label_8:
    rax = rcx;
    rax += r9;
    if (rcx <= rax) {
        rax = rcx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4065b0 */
#include <stdint.h>
 
uint64_t fcn_004065b0 (char * arg_30h, int64_t arg_38h, int64_t arg_40h, char * arg_48h, void * arg_50h, char * s2, void * ptr, uint32_t arg_68h, int64_t arg_70h, int64_t arg_78h, int64_t arg_80h, int64_t arg_88h, int64_t arg_90h, int64_t arg_98h, char * * endptr, char * * s1, int64_t arg_c0h, void * arg_d0h, int64_t arg_e0h, int64_t arg_f0h, int64_t arg_100h, int64_t arg_110h, int64_t arg_120h, int64_t arg_130h, int64_t arg_140h, int64_t arg_150h, int64_t arg_160h, int64_t arg_168h, int64_t arg_16ch, int64_t arg_17ch, int64_t arg_18ch, int64_t arg_19ch, int64_t arg_1ach, int64_t arg_1bch, int64_t arg_1cch, int64_t arg_1dch, int64_t arg_1ech, int64_t arg_1fch, int64_t arg_204h, int64_t arg_210h, void * arg_11b0h, int64_t arg1, int64_t arg2) {
    uint32_t var_18h;
    int64_t var_26h;
    int64_t var_27h;
    char * n;
    rdi = arg1;
    rsi = arg2;
    rbp = *((rdi + 0x10));
    r15 = *((rsi + 0x10));
    rax = rsp + 0x16c;
    r14 = imp.__libc_start_main;
    *((rsp + 0x38)) = rdi;
    rbx = *((rdi + 0x18));
    r10 = *((rsi + 0x18));
    *((rsp + 0x40)) = rsi;
    *((rsp + 0x70)) = rax;
    r12 = r14;
    r14 = rbp;
    do {
label_1:
        rax = r10;
        r13 = *((r12 + 0x28));
        rbp = *((r12 + 0x20));
        if (r14 >= rbx) {
            rbx = r14;
        }
        if (r15 >= r10) {
            rax = r15;
        }
        r11 = rbx;
        r10 = rax;
        r11 -= r14;
        r10 -= r15;
        if (*(0x0061cba1) == 0) {
            rcx = 0xffffffffff0000;
            if ((*((r12 + 0x30)) & rcx) == 0) {
                goto label_31;
            }
        }
label_9:
        rcx = r13;
        rcx |= rbp;
        *((rsp + 0x18)) = rcx;
        if (rcx != 0) {
            goto label_32;
        }
        ecx = *(rbx);
        *(rbx) = 0;
        *((rsp + 0x26)) = cl;
        ecx = *(rax);
        *(rax) = 0;
        *((rsp + 0x27)) = cl;
label_7:
        if (*((r12 + 0x32)) != 0) {
            goto label_33;
        }
        if (*((r12 + 0x34)) != 0) {
            goto label_34;
        }
        if (*((r12 + 0x35)) != 0) {
            goto label_35;
        }
        if (*((r12 + 0x36)) != 0) {
            goto label_36;
        }
        if (*((r12 + 0x33)) != 0) {
            goto label_37;
        }
        if (*((r12 + 0x38)) == 0) {
            goto label_38;
        }
        *((rsp + 0x30)) = r10;
        *((rsp + 0x28)) = r11;
        eax = fcn_0040b900 (r14, r15);
        r11 = *((rsp + 0x28));
        r10 = *((rsp + 0x30));
        *(rsp) = eax;
        goto label_4;
label_8:
        fp_stack++;
        fp_stack++;
label_4:
        if (*((rsp + 0x18)) != 0) {
            goto label_39;
        }
        eax = *((rsp + 0x26));
        *((r14 + r11)) = al;
        eax = *((rsp + 0x27));
        *((r15 + r10)) = al;
label_12:
        eax = *(rsp);
        if (eax != 0) {
            goto label_29;
        }
label_3:
        r12 = *((r12 + 0x40));
        if (r12 == 0) {
            goto label_25;
        }
        rax = *((rsp + 0x38));
        r14 = *(rax);
        rbp = *((rax + 8));
        rax = *((rsp + 0x40));
        r15 = *(rax);
        r11 = *((rax + 8));
        if (*((r12 + 0x10)) == -1) {
            goto label_40;
        }
        rdx = r12;
        rax = fcn_00406470 (r14, rbp);
        rdx = r12;
        rbx = rax;
        rax = fcn_00406470 (r15, r11);
        r10 = rax;
        if (*(r12) == -1) {
            goto label_41;
        }
label_0:
        rdx = r12;
        rax = fcn_00406360 (r14, rbp);
        rdx = r12;
        r14 = rax;
        rax = fcn_00406360 (r15, r11);
        r15 = rax;
    } while (1);
label_40:
    rbx = r14 + rbp - 1;
    r10 = r15 + r11 - 1;
    if (*(r12) != -1) {
        goto label_0;
    }
label_41:
    if (*((r12 + 0x30)) == 0) {
        goto label_1;
    }
    if (rbx > r14) {
        goto label_42;
    }
    goto label_24;
    do {
        r14++;
        if (rbx == r14) {
            goto label_43;
        }
label_42:
        eax = *(r14);
    } while (*((rax + 0x61ca80)) != 0);
label_24:
    if (r10 <= r15) {
        goto label_1;
    }
label_2:
    eax = *(r15);
    if (*((rax + 0x61ca80)) == 0) {
        goto label_1;
    }
    r15++;
    if (r10 != r15) {
        goto label_2;
    }
    r15 = r10;
    goto label_1;
label_39:
    free (*((rsp + 0x60)));
    eax = *(rsp);
    if (eax == 0) {
        goto label_3;
    }
label_29:
    r14 = r12;
    if (*((r14 + 0x37)) != 0) {
        goto label_44;
    }
label_25:
    eax = *(rsp);
    return rax;
label_33:
    eax = *(r14);
    rdi = r14;
    if (*((rax + 0x61ca80)) == 0) {
        goto label_45;
    }
    do {
        rdi++;
        eax = *(rdi);
    } while (*((rax + 0x61ca80)) != 0);
label_45:
    eax = *(r15);
    rsi = r15;
    if (*((rax + 0x61ca80)) == 0) {
        goto label_46;
    }
    do {
        rsi++;
        eax = *(rsi);
    } while (*((rax + 0x61ca80)) != 0);
label_46:
    *((rsp + 0x30)) = r10;
    *((rsp + 0x28)) = r11;
    eax = fcn_004106a0 (rdi, rsi, *(0x0061cba8), *(0x0061cba4));
    r11 = *((rsp + 0x28));
    r10 = *((rsp + 0x30));
    *(rsp) = eax;
    goto label_4;
label_32:
    rdi = r11 + r10 + 2;
    if (rdi > 0xfa0) {
        goto label_47;
    }
    rcx = rsp + 0x210;
    *((rsp + 0x60)) = 0;
    rsi = rcx + r11 + 1;
    if (r11 == 0) {
        goto label_48;
    }
label_13:
    rdi = r14 + r11;
    r8 = r14;
    r11d = 0;
    while (rbp != 0) {
        if (*((rbp + rdx)) == 0) {
            if (r13 != 0) {
                goto label_49;
            }
label_5:
            *((rcx + r11)) = al;
            r11++;
        }
        r8++;
        if (rdi == r8) {
            goto label_50;
        }
        eax = *(r8);
        edx = (int32_t) al;
    }
label_49:
    eax = *((r13 + rdx));
    goto label_5;
label_50:
    rax = rcx + r11;
    *(rax) = 0;
    if (r10 == 0) {
        goto label_51;
    }
label_14:
    rdi = r15 + r10;
    r10d = 0;
    while (rbp != 0) {
        if (*((rbp + rdx)) == 0) {
            if (r13 != 0) {
                goto label_52;
            }
label_6:
            *((rsi + r10)) = al;
            r10++;
        }
        r15++;
        if (rdi == r15) {
            goto label_53;
        }
        eax = *(r15);
        edx = (int32_t) al;
    }
label_52:
    eax = *((r13 + rdx));
    goto label_6;
label_53:
    rax = rsi + r10;
label_15:
    *(rax) = 0;
    r15 = rsi;
    r14 = rcx;
    goto label_7;
label_34:
    *((rsp + 0x30)) = r10;
    *((rsp + 0x28)) = r11;
    strtold (r14, rsp + 0xa8);
    unknown = fp_stack[0];
    fp_stack--;
    rax = strtold (r15, rsp + 0xb0);
    r11 = *((rsp + 0x28));
    *(fp_stack--) = fp_stack[unknown];
    r10 = *((rsp + 0x30));
    if (r14 == *((rsp + 0xa8))) {
        goto label_54;
    }
    if (r15 == *((rsp + 0xb0))) {
        goto label_55;
    }
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    if (fp_stack[0] > fp_stack[1]) {
        goto label_56;
    }
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *(rsp) = 1;
    if (fp_stack[0] > fp_stack[1]) {
        goto label_8;
    }
    if (fp_stack[0] != fp_stack[1]) {
        if (fp_stack[0] == fp_stack[1]) {
            goto label_57;
        }
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
    } else {
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
    }
    __asm ("fucompi st(0)");
    if (fp_stack[0] != fp_stack[1]) {
        if (fp_stack[0] == fp_stack[1]) {
            goto label_58;
        }
    }
    __asm ("fucompi st(0)");
    if (fp_stack[0] == fp_stack[1]) {
        goto label_59;
    }
    if (fp_stack[0] != fp_stack[1]) {
        goto label_59;
    }
    goto label_60;
label_55:
    fp_stack++;
    fp_stack++;
label_60:
    *(rsp) = 1;
    goto label_4;
label_35:
    eax = *(r14);
    rbx = r14;
    if (*((rax + 0x61ca80)) == 0) {
        goto label_61;
    }
    do {
        rbx++;
        eax = *(rbx);
    } while (*((rax + 0x61ca80)) != 0);
label_61:
    eax = *(r15);
    if (*((rax + 0x61ca80)) == 0) {
        goto label_62;
    }
    do {
        rbp++;
        eax = *(rbp);
    } while (*((rax + 0x61ca80)) != 0);
label_62:
    *((rsp + 0x30)) = r10;
    *((rsp + 0x28)) = r11;
    eax = fcn_004059f0 (rbx);
    r13d = eax;
    eax = fcn_004059f0 (rbp);
    r11 = *((rsp + 0x28));
    r10 = *((rsp + 0x30));
    r13d -= eax;
    *(rsp) = r13d;
    if (r13d != 0) {
        goto label_4;
    }
    eax = fcn_004106a0 (rbx, rbp, *(0x0061cba8), *(0x0061cba4));
    r11 = *((rsp + 0x28));
    r10 = *((rsp + 0x30));
    *(rsp) = eax;
    goto label_4;
label_31:
    if (*((r12 + 0x38)) != 0) {
        goto label_9;
    }
    if (rbp == 0) {
        goto label_63;
    }
    rcx = r14;
    r8 = r14;
    if (r13 == 0) {
        goto label_64;
    }
label_10:
    if (rcx < rbx) {
        edx = *(rcx);
        if (*((rbp + rdx)) != 0) {
            goto label_65;
        }
    }
    if (r15 < rax) {
        goto label_66;
    }
    goto label_67;
    do {
        r15++;
        if (rax == r15) {
            goto label_68;
        }
label_66:
        edx = *(r15);
    } while (*((rbp + rdx)) != 0);
    if (rbx <= rcx) {
        goto label_67;
    }
    if (rax <= r15) {
        goto label_67;
    }
    edx = *(rcx);
    esi = *(r15);
    edx = *((r13 + rdx));
    esi = *((r13 + rsi));
    edx -= esi;
    if (edx != 0) {
        goto label_69;
    }
    r15++;
label_65:
    rcx++;
    goto label_10;
label_11:
    if (rbx <= r8) {
        goto label_70;
    }
    if (rax <= r15) {
        goto label_70;
    }
    edx = *(r8);
    ecx = *(r15);
    edx -= ecx;
    if (edx != 0) {
        goto label_69;
    }
    r15++;
    do {
        r8++;
label_64:
        if (r8 >= rbx) {
            goto label_71;
        }
        edx = *(r8);
    } while (*((rbp + rdx)) != 0);
label_71:
    if (r15 < rax) {
        goto label_72;
    }
    goto label_70;
    do {
        r15++;
        if (rax == r15) {
            goto label_73;
        }
label_72:
        edx = *(r15);
    } while (*((rbp + rdx)) != 0);
    goto label_11;
label_68:
    r15 = rax;
label_67:
label_23:
    dl = (rcx < rbx) ? 1 : 0;
    al = (rax > r15) ? 1 : 0;
    edx = (int32_t) dl;
    eax = (int32_t) al;
    edx -= eax;
    *(rsp) = edx;
    goto label_12;
label_36:
    *((rsp + 0x30)) = r10;
    *((rsp + 0x28)) = r11;
    eax = fcn_00405a40 (r14, 0);
    ebx = eax;
    eax = fcn_00405a40 (r15, 0);
    r11 = *((rsp + 0x28));
    r10 = *((rsp + 0x30));
    ebx -= eax;
    *(rsp) = ebx;
    goto label_4;
label_47:
    *((rsp + 0x28)) = r10;
    *(rsp) = r11;
    rax = fcn_00411210 (rdi);
    r11 = *(rsp);
    r10 = *((rsp + 0x28));
    rcx = rax;
    *((rsp + 0x60)) = rax;
    rsi = rcx + r11 + 1;
    if (r11 != 0) {
        goto label_13;
    }
label_48:
    rax = rcx;
    *(rax) = 0;
    if (r10 != 0) {
        goto label_14;
    }
label_51:
    rax = rsi;
    goto label_15;
label_38:
    if (r11 != 0) {
        goto label_74;
    }
    eax = 0;
    al = (r10 != 0) ? 1 : 0;
    eax = -eax;
    *(rsp) = eax;
    goto label_4;
label_37:
    __asm ("movdqa xmm8, xmmword [0x0061c600]");
    __asm ("movdqa xmm7, xmmword [0x0061c610]");
    __asm ("movdqa xmm6, xmmword [0x0061c620]");
    __asm ("movdqa xmm5, xmmword [0x0061c630]");
    __asm ("movdqa xmm4, xmmword [0x0061c640]");
    __asm ("movdqa xmm3, xmmword [0x0061c650]");
    __asm ("movups xmmword [rsp + 0x16c], xmm8");
    __asm ("movdqa xmm2, xmmword [0x0061c660]");
    __asm ("movdqa xmm1, xmmword [0x0061c670]");
    __asm ("movups xmmword [rsp + 0x17c], xmm7");
    __asm ("movdqa xmm0, xmmword [0x0061c680]");
    rdx = imp.__libc_start_main;
    __asm ("movups xmmword [rsp + 0x18c], xmm6");
    eax = imp.__libc_start_main;
    __asm ("movups xmmword [rsp + 0x19c], xmm5");
    __asm ("movups xmmword [rsp + 0x1ac], xmm4");
    __asm ("movups xmmword [rsp + 0x1bc], xmm3");
    __asm ("movups xmmword [rsp + 0x1cc], xmm2");
    __asm ("movups xmmword [rsp + 0x1dc], xmm1");
    __asm ("movups xmmword [rsp + 0x1ec], xmm0");
    *((rsp + 0x1fc)) = rdx;
    *((rsp + 0x204)) = eax;
    *((rsp + 0xd0)) = xmm8;
    *((rsp + 0xe0)) = xmm7;
    *((rsp + 0xf0)) = xmm6;
    *((rsp + 0x100)) = xmm5;
    *((rsp + 0x110)) = xmm4;
    *((rsp + 0x120)) = xmm3;
    *((rsp + 0x130)) = xmm2;
    *((rsp + 0x140)) = xmm1;
    *((rsp + 0x150)) = xmm0;
    *((rsp + 0x160)) = rdx;
    *((rsp + 0x168)) = eax;
    if (*(0x0061cba1) == 0) {
        goto label_75;
    }
    rax = r14 + r11;
    *(rsp) = 0;
    r13 = rsp + 0x11b0;
    *((rsp + 0x30)) = rax;
    rax = r15 + r10;
    *((rsp + 0x48)) = rax;
    rax = r11 + r10;
    rax *= 3;
    *((rsp + 0x78)) = r14;
    *((rsp + 0x50)) = 0;
    *((rsp + 0x80)) = r12;
    *((rsp + 0x90)) = r11;
    *((rsp + 0x98)) = r10;
    *((rsp + 0x68)) = rax;
    eax = 0xfa0;
    *((rsp + 0x28)) = r15;
    *((rsp + 0x88)) = r15;
    r15 = rax;
    do {
label_16:
        if (*((rsp + 0x68)) > r15) {
            goto label_76;
        }
label_17:
        if (*((rsp + 0x30)) > rbp) {
            goto label_77;
        }
label_18:
        rcx = *((rsp + 0x28));
        if (*((rsp + 0x48)) > rcx) {
            goto label_78;
        }
        r12d = 0;
        ebx = 0;
label_27:
        rax = r13 + rbx;
        *((rsp + 0x58)) = rax;
        if (*((rsp + 0x30)) <= rbp) {
            goto label_79;
        }
        rax = strlen (rbp);
        rcx = *((rsp + 0x28));
        rbp = rbp + rax + 1;
        if (*((rsp + 0x48)) > rcx) {
            goto label_80;
        }
label_19:
        if (*((rsp + 0x30)) <= rbp) {
            rcx = *((rsp + 0x28));
            if (*((rsp + 0x48)) <= rcx) {
                goto label_81;
            }
        }
        fcn_0040b360 (r13, rbx, rsp + 0xd0);
        r14 = *((rsp + 0x58));
        fcn_0040b360 (r14, r12, *((rsp + 0x70)));
        ecx = *(rsp);
    } while (ecx != 0);
    rdx = r12;
    rsi = r14;
    rdi = r13;
    if (rbx <= r12) {
        rdx = rbx;
    }
    eax = memcmp (rdi, rsi, rdx);
    *(rsp) = eax;
    if (eax != 0) {
        goto label_16;
    }
    eax = 0;
    al = (rbx > r12) ? 1 : 0;
    *(rsp) = eax;
    if (*((rsp + 0x68)) <= r15) {
        goto label_17;
    }
label_76:
    rcx = *((rsp + 0x68));
    rax = r15 * 3;
    rdi = *((rsp + 0x50));
    r13 = rsp + 0x11b0;
    rax >>= 1;
    if (rcx >= rax) {
        rax = rcx;
    }
    r15 = rax;
    free (rdi);
    rax = malloc (r15);
    rcx = rax;
    *((rsp + 0x50)) = rax;
    eax = 0xfa0;
    if (rax == 0) {
        r15 = rax;
    }
    if (rax != 0) {
        r13 = rcx;
    }
    if (*((rsp + 0x30)) <= rbp) {
        goto label_18;
    }
label_77:
    fcn_00405ef0 (r13, rbp, r15);
    rcx = *((rsp + 0x28));
    rbx = rax + 1;
    if (*((rsp + 0x48)) <= rcx) {
        goto label_82;
    }
    if (r15 >= rbx) {
        goto label_83;
    }
label_21:
    fcn_00405ef0 (0, *((rsp + 0x28)), 0);
    r12 = rax + 1;
    r14 = r12 + rbx;
    if (r15 >= rbx) {
        goto label_84;
    }
label_26:
    rax = 0x5555555555555554;
    if (r14 <= rax) {
        r14 *= 3;
        r14 >>= 1;
    }
    free (*((rsp + 0x50)));
    rax = fcn_00411210 (r14);
    r13 = rax;
    if (*((rsp + 0x30)) > rbp) {
        goto label_85;
    }
label_22:
    rax = r13 + rbx;
    rcx = *((rsp + 0x28));
    *((rsp + 0x58)) = rax;
    if (*((rsp + 0x48)) <= rcx) {
        if (*((rsp + 0x30)) > rbp) {
            goto label_86;
        }
        *((rsp + 0x50)) = r13;
        r14 = *((rsp + 0x78));
        *((rsp + 0x28)) = r12;
        r15 = *((rsp + 0x88));
        r11 = *((rsp + 0x90));
        r10 = *((rsp + 0x98));
        r12 = *((rsp + 0x80));
label_20:
        *((rsp + 0x48)) = r10;
        *((rsp + 0x30)) = r11;
        rbp = rsp + 0xc0;
        fcn_0040b360 (r13, rbx, rsp + 0xd0);
        fcn_0040b250 (rsp + 0xd0, rsp + 0xb0, rdx, rcx);
        fcn_0040b360 (*((rsp + 0x58)), *((rsp + 0x28)), *((rsp + 0x70)));
        fcn_0040b250 (*((rsp + 0x70)), rbp, rdx, rcx);
        eax = memcmp (rsp + 0xb0, rbp, 0x10);
        r11 = *((rsp + 0x30));
        r10 = *((rsp + 0x48));
        if (eax != 0) {
            goto label_87;
        }
        edx = *(rsp);
        if (edx != 0) {
            goto label_88;
        }
        goto label_89;
    }
    strxfrm (rax, rcx, r12);
    if (*((rsp + 0x30)) > rbp) {
        strlen (rbp);
        rbp = rbp + rax + 1;
    }
    *((rsp + 0x50)) = r13;
    r15 = r14;
    do {
label_80:
        r14 = *((rsp + 0x28));
        strlen (*((rsp + 0x28)));
        rax = r14 + rax + 1;
        *((rsp + 0x28)) = rax;
        goto label_19;
label_79:
        rsi = *((rsp + 0x28));
    } while (*((rsp + 0x48)) > rsi);
label_81:
    *((rsp + 0x28)) = r12;
    r14 = *((rsp + 0x78));
    r15 = *((rsp + 0x88));
    r11 = *((rsp + 0x90));
    r10 = *((rsp + 0x98));
    r12 = *((rsp + 0x80));
    goto label_20;
label_86:
    r15 = r14;
    rax = strlen (rbp);
    *((rsp + 0x50)) = r13;
    rbp = rbp + rax + 1;
    goto label_19;
label_78:
    rdi = r13;
    rdx = r15;
    ebx = 0;
    goto label_21;
label_85:
    rax = strxfrm (rax, rbp, rbx);
    goto label_22;
label_73:
    r15 = rax;
label_70:
    goto label_23;
label_43:
    r14 = rbx;
    goto label_24;
label_54:
    fp_stack++;
    fp_stack++;
    eax = 0;
    al = (*((rsp + 0xb0)) != r15) ? 1 : 0;
    eax = -eax;
    *(rsp) = eax;
    goto label_4;
label_57:
    fp_stack++;
    fp_stack++;
    *(rsp) = 0;
    goto label_4;
label_74:
    *(rsp) = 1;
    if (r10 == 0) {
        goto label_4;
    }
    *((rsp + 0x30)) = r10;
    *((rsp + 0x28)) = r11;
    eax = fcn_004115c0 (r14, r11 + 1, r15, r10 + 1);
    r10 = *((rsp + 0x30));
    r11 = *((rsp + 0x28));
    *(rsp) = eax;
    goto label_4;
label_75:
    rsi = r11;
    *(rsp) = r10;
    *((rsp + 0x30)) = r11;
    rbx = rsp + 0xc0;
    fcn_0040b360 (r14, rsi, rsp + 0xd0);
    fcn_0040b250 (rsp + 0xd0, rsp + 0xb0, rdx, rcx);
    r10 = *(rsp);
    rbp = *((rsp + 0x70));
    rsi = r10;
    *((rsp + 0x28)) = r10;
    fcn_0040b360 (r15, rsi, rbp);
    fcn_0040b250 (rbp, rbx, rdx, rcx);
    eax = memcmp (rsp + 0xb0, rbx, 0x10);
    r10 = *((rsp + 0x28));
    r11 = *((rsp + 0x30));
    *(rsp) = eax;
    if (eax != 0) {
        goto label_90;
    }
    *((rsp + 0x28)) = r10;
    rbx = r11;
    r13 = r14;
    *((rsp + 0x58)) = r15;
    *((rsp + 0x50)) = 0;
label_89:
    rbp = *((rsp + 0x28));
    rsi = *((rsp + 0x58));
    rdi = r13;
    *((rsp + 0x48)) = r10;
    *((rsp + 0x30)) = r11;
    rdx = rbp;
    if (rbx <= rbp) {
        rdx = rbx;
    }
    eax = memcmp (rdi, rsi, rdx);
    r11 = *((rsp + 0x30));
    r10 = *((rsp + 0x48));
    *(rsp) = eax;
    if (eax != 0) {
        goto label_88;
    }
    eax = 0;
    al = (rbx > rbp) ? 1 : 0;
label_87:
    *(rsp) = eax;
    do {
label_88:
        *((rsp + 0x30)) = r10;
        *((rsp + 0x28)) = r11;
        rax = free (*((rsp + 0x50)));
        r11 = *((rsp + 0x28));
        r10 = *((rsp + 0x30));
        goto label_4;
label_90:
        *((rsp + 0x50)) = 0;
    } while (1);
    do {
label_28:
        if (r14 >= rbx) {
            goto label_91;
        }
        if (r15 >= rax) {
            goto label_91;
        }
        r14++;
        r15++;
        edx = *((r14 - 1));
        ecx = *((r15 - 1));
        edx = *((r13 + rdx));
        ecx = *((r13 + rcx));
        edx -= ecx;
    } while (edx == 0);
label_69:
    *(rsp) = edx;
    r14 = r12;
label_30:
    if (*((r14 + 0x37)) == 0) {
        goto label_25;
    }
label_44:
    rsp = -rsp;
    goto label_25;
label_82:
    r14 = rbx;
    r12d = 0;
    if (r15 < rbx) {
        goto label_26;
    }
label_84:
    if (r15 < r14) {
        goto label_26;
    }
    goto label_27;
label_63:
    if (r11 == 0) {
        goto label_92;
    }
    if (r10 == 0) {
        goto label_93;
    }
    if (r13 != 0) {
        goto label_28;
    }
    rdx = r10;
    rsi = r15;
    rdi = r14;
    if (r11 <= r10) {
        rdx = r11;
    }
    *((rsp + 0x28)) = r10;
    *((rsp + 0x18)) = r11;
    eax = memcmp (rdi, rsi, rdx);
    *(rsp) = eax;
    if (eax != 0) {
        goto label_29;
    }
    r11 = *((rsp + 0x18));
    r10 = *((rsp + 0x28));
label_91:
    if (r11 >= r10) {
        al = (r11 != r10) ? 1 : 0;
        eax = (int32_t) al;
        *(rsp) = eax;
        goto label_12;
label_59:
        *((rsp + 0x30)) = r10;
        *((rsp + 0x28)) = r11;
        strtold (r14, 0);
        unknown = fp_stack[0];
        fp_stack--;
        strtold (r15, 0);
        unknown = fp_stack[0];
        fp_stack--;
        eax = memcmp (rsp + 0xd0, rsp + 0x11b0, 0x10);
        r11 = *((rsp + 0x28));
        r10 = *((rsp + 0x30));
        *(rsp) = eax;
        goto label_4;
label_92:
        eax = 0;
        al = (r10 != 0) ? 1 : 0;
        eax = -eax;
        *(rsp) = eax;
        goto label_12;
    }
    r14 = r12;
    *(rsp) = 0xffffffff;
    goto label_30;
label_56:
    fp_stack++;
    fp_stack++;
    goto label_94;
label_58:
    fp_stack++;
label_94:
    *(rsp) = 0xffffffff;
    goto label_4;
label_93:
    r14 = r12;
    *(rsp) = 1;
    goto label_30;
label_83:
    rdx = r15;
    rdi = r13 + rbx;
    rdx -= rbx;
    goto label_21;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4074d0 */
#include <stdint.h>
 
int64_t fcn_004074d0 (char * arg1, int64_t arg2, char * arg3) {
    int64_t var_8h;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    char * var_28h;
    int64_t var_30h;
    int64_t var_37h;
    char * var_38h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (*((rdi + 0x30)) != 0) {
        goto label_8;
    }
    r9 = *((rdi + 8));
    rbx = imp.__libc_start_main;
    rbp = *(0x0061c428);
    r15 = *(rdi);
    *((rsp + 0x20)) = rsi;
    esi = *(0x0061c500);
    *((rsp + 0x38)) = rdx;
    rdx = *((rdi + 0x20));
    *((rsp + 0x28)) = rdi;
    *((rsp + 0x37)) = sil;
    rsi = *((rdi + 0x28));
    *(rsp) = rsi;
    if (r9 != rdx) {
        goto label_9;
    }
    rax = *((rdi + 0x10));
label_3:
    rsi = *(rsp);
    rbp -= 0x22;
    rsi++;
    *((rsp + 0x10)) = rsi;
    rsi = *((rsp + 0x28));
    r12 = *((rsi + 0x18));
    esi = *((rsp + 0x37));
    *((rsp + 0x30)) = esi;
label_5:
    r12 += r15;
    rdx = rax;
    r14 = r15 + r9;
    rdx <<= 5;
    r13 = r12;
    r13 -= rdx;
    rdx = *(rsp);
    rdx *= rax;
    r12 -= rdx;
    r12 -= r14;
    if (rax == 0) {
        goto label_10;
    }
    r8 = *((r13 + 8));
    r8 += *(r13);
    r15 = r14;
    r14 = r13;
    r13 = r8;
label_4:
    if (r12 <= *((rsp + 0x10))) {
        goto label_11;
    }
    rax = r12 - 1;
    edx = 0;
    rcx = *((rsp + 0x20));
    rdi = r15;
    rax = *(rdx_rax) / rsp + 0x10;
    rdx = *(rdx_rax) % rsp + 0x10;
    esi = 1;
    rdx = rax;
    *((rsp + 0x18)) = rax;
    rax = fread_unlocked ();
    r11 = *((rsp + 0x18));
    rsi = r15 + rax;
    r12 -= rax;
    *((rsp + 8)) = rsi;
    if (r11 == rax) {
        goto label_12;
    }
    rax = *((rsp + 0x20));
    eax = *(rax);
    if ((al & 0x20) != 0) {
        goto label_13;
    }
    if ((al & 0x10) == 0) {
        goto label_12;
    }
    rax = *((rsp + 0x28));
    rdi = *((rsp + 0x28));
    *((rax + 0x30)) = 1;
    rax = *((rsp + 8));
    if (*(rdi) == rax) {
        goto label_14;
    }
    if (r13 == rax) {
        goto label_12;
    }
    edi = *((rsp + 0x37));
    if (*((rax - 1)) == dil) {
        goto label_12;
    }
    *(rax) = dil;
    rax++;
    r10 = r15;
    *((rsp + 8)) = rax;
    r15 = rax;
    goto label_6;
label_0:
    rdx = rbx;
    rax = fcn_00406360 (r13, r11);
    *((r14 + 0x10)) = rax;
    do {
label_1:
        r13 = r10;
label_6:
        rdx -= r10;
        rax = fcn_00413030 (r10, *((rsp + 0x30)), r15);
        if (rax == 0) {
            goto label_15;
        }
        r10 = rax + 1;
        r14 -= 0x20;
        *(rax) = 0;
        r11 = r10;
        *(r14) = r13;
        r11 -= r13;
        *((r14 + 8)) = r11;
        if (rbp < r11) {
        }
        r12 -= *(rsp);
    } while (rbx == 0);
    if (*((rbx + 0x10)) != -1) {
        rdx = rbx;
        rax = fcn_00406470 (r13, r11);
    }
    *((r14 + 0x18)) = rax;
    if (*(rbx) != -1) {
        goto label_0;
    }
    if (*((rbx + 0x30)) != 0) {
        goto label_16;
    }
label_2:
    *((r14 + 0x10)) = r13;
    goto label_1;
    do {
        r13++;
label_16:
        eax = *(r13);
    } while (*((rax + 0x61ca80)) != 0);
    goto label_2;
label_9:
    r9 -= rdx;
    memmove (r15, r15 + r9, rdx);
    rax = *((rsp + 0x28));
    r9 = *((rax + 0x20));
    r15 = *(rax);
    *((rax + 0x10)) = 0;
    *((rax + 8)) = r9;
    eax = 0;
    goto label_3;
label_15:
    rax = *((rsp + 0x28));
    r15 = *((rsp + 8));
    if (*((rax + 0x30)) == 0) {
        goto label_4;
    }
label_11:
    rcx = *((rsp + 0x28));
    rax = r13;
    r13 = r14;
    r14 = r15;
    r15 = rax;
    rax = r14;
    rdi = *(rcx);
    rdx = *((rcx + 0x18));
    rax -= rdi;
    *((rcx + 8)) = rax;
    rax = rdi + rdx;
    rax -= r13;
    rax >>= 5;
    *((rcx + 0x10)) = rax;
    if (rax != 0) {
        goto label_17;
    }
    rax = rdx;
    rax >>= 5;
    if (rdi == 0) {
        goto label_18;
    }
    rsi = 0x555555555555553f;
    if (rdx > rsi) {
        goto label_19;
    }
    rdx >>= 6;
    r12 = rax + rdx + 1;
    r12 <<= 5;
    do {
label_7:
        rax = fcn_00411270 (rdi, r12);
        r15 = rax;
        rax = *((rsp + 0x28));
        *(rax) = r15;
        r9 = *((rax + 8));
        *((rax + 0x18)) = r12;
        rax = *((rax + 0x10));
        goto label_5;
label_12:
        r10 = r15;
        r15 = *((rsp + 8));
        goto label_6;
label_10:
        rax = r15;
        r15 = r14;
        r14 = r13;
        r13 = rax;
        goto label_4;
label_18:
        if (rdx <= 0x1f) {
            goto label_20;
        }
        rax <<= 5;
        if (rax < 0) {
            goto label_19;
        }
        r12 = rax;
    } while (1);
label_14:
    eax = 0;
    return rax;
label_20:
    r12d = 0x80;
    goto label_7;
label_8:
    eax = 0;
    return rax;
label_17:
    r9 = r14;
    rbp += 0x22;
    eax = 1;
    r9 -= r15;
    *(0x0061c428) = rbp;
    *((rcx + 0x20)) = r9;
    return rax;
label_13:
    edx = 5;
    rax = dcgettext (0, "read failed");
    fcn_00405dd0 (rax, *((rsp + 0x38)));
label_19:
    return fcn_00411460 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407880 */
#include <stdint.h>
 
void fcn_00407880 (uint32_t arg1) {
    rdi = arg1;
    rsi = rdi + 8;
    edx = 0;
    edi = 2;
    return pthread_sigmask ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407920 */
#include <stdint.h>
 
uint64_t fcn_00407920 (uint32_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    r13d = 0x61c6a8;
    rbx = imp.__libc_start_main;
    rax = rbx + 0xd;
    if (rdi == rax) {
        goto label_2;
    }
    rax = *(rbx);
    rdx = rax + 0xd;
    if (rdx == rbp) {
        goto label_3;
    }
    do {
        rbx = rax;
        rax = *(rbx);
        rdx = rax + 0xd;
    } while (rdx != rbp);
label_3:
    r13 = rbx;
    rbx = rax;
label_2:
    if (*((rbx + 0xc)) == 1) {
        goto label_4;
    }
label_1:
    rdx = rsp + 8;
    esi = 0x61c6c0;
    edi = 0;
    r12 = *(rbx);
    eax = pthread_sigmask ();
    rsp = (eax == 0) ? 1 : 0;
    eax = unlink (rbp);
    r14d = eax;
    rax = errno_location ();
    r15d = *(rax);
    *(r13) = r12;
    if (*(rsp) != 0) {
        goto label_5;
    }
    if (r14d != 0) {
        goto label_6;
    }
    do {
        if (r12 == 0) {
            goto label_7;
        }
label_0:
        free (rbx);
        return rax;
label_5:
        fcn_00407880 (rsp);
    } while (r14d == 0);
label_6:
    rdx = rbp;
    rax = fcn_0040f700 (0, 3);
    edx = 5;
    rax = dcgettext (0, "warning: cannot remove: %s");
    rcx = rbp;
    eax = 0;
    error (0, r15d, rax);
    if (r12 != 0) {
        goto label_0;
    }
label_7:
    *(0x0061c418) = r13;
    goto label_0;
label_4:
    fcn_004060a0 (*((rbx + 8)));
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407a30 */
#include <stdint.h>
 
uint64_t fcn_00407a30 (uint32_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_14h;
    uint32_t fildes;
    uint32_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    *((rsp + 0x18)) = rdi;
    eax = fcn_0040da00 (rdi, 0x80000);
    if (eax < 0) {
        goto label_5;
    }
    eax = *(0x0061c420);
    eax++;
    if (eax < *(0x0061c69c)) {
        goto label_6;
    }
label_3:
    rax = errno_location ();
    rbx--;
    r14 = rsp + 0x28;
    xmm3 = *(0x00416a30);
    *((rsp + 8)) = xmm3;
    goto label_7;
label_0:
    *(0x0061c6a8) = r12;
    if (*((rsp + 0x20)) != 0) {
        goto label_8;
    }
label_1:
    *(rbp) = r15d;
    if (eax >= 0) {
        goto label_9;
    }
    if (r15d != 0xb) {
        goto label_10;
    }
    xmm0 = *((rsp + 8));
    fcn_00411620 ();
    xmm2 = *((rsp + 8));
    __asm ("movapd xmm1, xmm2");
    __asm ("addsd xmm1, xmm2");
    *((rsp + 8)) = xmm1;
    do {
        eax = imp.__libc_start_main;
        if (eax <= 0) {
            goto label_11;
        }
        eax = fcn_00405fb0 (0);
    } while (eax != 0);
label_11:
    rbx--;
    if (rbx == -1) {
        goto label_12;
    }
label_7:
    edi = 0;
    rdx = r14;
    esi = 0x61c6c0;
    eax = pthread_sigmask ();
    r12 = imp.__libc_start_main;
    *(0x0061c6a8) = 0;
    *(rsp + 0x20) = (eax == 0) ? 1 : 0;
    eax = fork ();
    r15d = *(rbp);
    r13d = eax;
    if (eax != 0) {
        goto label_0;
    }
    if (*((rsp + 0x20)) == 0) {
        goto label_13;
    }
label_8:
    *((rsp + 0x14)) = eax;
    fcn_00407880 (rsp + 0x20);
    eax = *((rsp + 0x14));
    goto label_1;
    if (*((rsp + 0x20)) == 0) {
label_9:
        goto label_13;
    }
    *(0x0061c69c)++;
    do {
label_2:
        eax = r13d;
        return rax;
label_12:
        r15d = *(rbp);
label_10:
        rbx = *((rsp + 0x18));
        close (*(rbx));
        close (*((rbx + 4)));
        *(rbp) = r15d;
    } while (1);
label_13:
    r13d = 0;
    close (0);
    close (1);
    goto label_2;
label_6:
    fcn_00405fb0 (0xffffffff);
label_4:
    edx = imp.__libc_start_main;
    if (edx <= 0) {
        goto label_3;
    }
    eax = fcn_00405fb0 (0);
    if (eax == 0) {
        goto label_3;
    }
    goto label_4;
label_5:
    r13d = 0xffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407c00 */
#include <stdint.h>
 
uint64_t fcn_00407c00 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdx;
    rbx = rdi;
    eax = fcn_00411b40 (rdi, rsp, 0xa, rsp + 8, 0x416571);
    if (eax > 4) {
        goto label_0;
    }
    /* switch table (5 cases) at 0x4140d0 */
    rax = *((rsp + 8));
    *(rbp) = rax;
    do {
label_0:
        rax = *(rsp);
        return rax;
        *(rbp) = 0xffffffffffffffff;
    } while (1);
    if (r12 == 0) {
        eax = 0;
        return rax;
    }
    rax = fcn_0040f880 (rbx);
    edx = 5;
    rax = dcgettext (0, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: invalid count at start of %s");
    r8 = rbp;
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407cd0 */
#include <stdint.h>
 
uint64_t fcn_00407cd0 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    eax = *(rsi);
    if (al != 0x72) {
        if (al != 0x77) {
            goto label_1;
        }
        if (rdi != 0) {
            esi = 0;
            edi = 1;
            eax = ftruncate ();
            if (eax != 0) {
                goto label_2;
            }
        }
        rbx = stdout;
        rax = rbx;
        return rax;
    }
    edi = 0x41814a;
    ecx = 2;
    rsi = rbx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (eax > 0) ? 1 : 0;
    if (al != 0) {
        goto label_3;
    }
    *(0x0061c758) = 1;
    rbx = stdin;
    do {
label_0:
        fcn_0040b800 (*(obj.stdin), 2);
        rax = rbx;
        return rax;
label_3:
        eax = 0;
        ebx = 0;
        eax = open (rbx, 0x80000, rdx);
    } while (eax < 0);
    rsi = rbp;
    edi = eax;
    rax = fdopen ();
    rbx = rax;
    goto label_0;
label_2:
    rdx = rbx;
    rax = fcn_0040f700 (0, 3);
    edx = 5;
    rax = dcgettext (0, "%s: error truncating");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (2, *(rax), rbx);
label_1:
    return assert_fail ("!\"unexpected mode passed to stream_open\"", "src/sort.c", 0x3cc, "stream_open");}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407dd0 */
#include <stdint.h>
 
uint64_t fcn_00407dd0 (char * arg1) {
    rdi = arg1;
    rbx = rdi;
    edx = 5;
    rax = dcgettext (0, "open failed");
    return fcn_00405dd0 (rax, rbx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407df0 */
#include <stdint.h>
 
uint64_t fcn_00407df0 (int64_t arg1, char * arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    eax = fileno (rdi);
    if (eax == 0) {
        goto label_1;
    }
    if (eax == 1) {
        goto label_2;
    }
    eax = fcn_00411f80 (rbx);
    if (eax != 0) {
        goto label_3;
    }
    do {
label_0:
        return eax;
INVALID_JUMP;
    } while ((*(rbx) & 0x10) == 0);
    rdi = rbx;
invalid_funccall(); //    void (*0x402900)() ();
label_2:
    rdi = rbx;
    eax = fflush_unlocked ();
    if (eax == 0) {
        goto label_0;
    }
    edx = 5;
    esi = "fflush failed";
    goto label_4;
label_3:
    edx = 5;
label_4:
    rax = dcgettext (0, "close failed");
    rax = fcn_00405dd0 (rax, rbp);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x407e70 */
#include <stdint.h>
 
uint64_t fcn_00407e70 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = rdx;
    rbx = *(rdi);
    r15 = *((rdi + 8));
    r12 = rbx + r15;
    while (*(0x0061c740) == 0) {
        eax = *(0x0061c500);
        rcx = rbp;
        rdx = r15;
        rdi = rbx;
        esi = 1;
        *((r12 - 1)) = al;
        rax = fwrite_unlocked ();
        if (r15 != rax) {
            goto label_13;
        }
        *((r12 - 1)) = 0;
label_3:
        return rax;
    }
    r13 = rdi;
    if (rbx < r12) {
        goto label_14;
    }
    goto label_15;
    do {
        esi = (int32_t) al;
        if (r12 == rbx) {
            goto label_16;
        }
label_2:
        rdx = *((rbp + 0x28));
        if (*((rbp + 0x30)) <= rdx) {
            goto label_17;
        }
label_0:
        rcx = rdx + 1;
        *((rbp + 0x28)) = rcx;
        *(rdx) = al;
label_1:
        if (r12 == rbx) {
            goto label_18;
        }
label_14:
        rbx++;
        eax = *((rbx - 1));
    } while (al != 9);
    esi = 0x3e;
    eax = 0x3e;
    rdx = *((rbp + 0x28));
    if (*((rbp + 0x30)) > rdx) {
        goto label_0;
    }
label_17:
    esi = (int32_t) sil;
    rdi = rbp;
    eax = overflow ();
    if (eax != 0xffffffff) {
        goto label_1;
    }
    edx = 5;
    rax = dcgettext (0, "write failed");
    rax = fcn_00405dd0 (rax, 0);
label_16:
    esi = 0xa;
    eax = 0xa;
    goto label_2;
label_18:
    rbx = *(r13);
    r15 = *((r13 + 8));
label_15:
    r12 = imp.__libc_start_main;
    r14 = rbx + r15 - 1;
    if (r12 == 0) {
        goto label_19;
    }
label_4:
    r10 = *(r12);
    r11 = *((r12 + 0x10));
    if (r10 == -1) {
        goto label_20;
    }
    rdx = r12;
    rax = fcn_00406360 (rbx, r15);
    if (r11 != -1) {
label_10:
        rdx = r12;
        rax = fcn_00406470 (rbx, r15);
        r14 = rax;
label_11:
        if (*((r12 + 0x30)) == 0) {
            goto label_21;
        }
        if (r10 == -1) {
            goto label_22;
        }
    }
label_21:
    if (*((r12 + 0x36)) == 0) {
        rax = 0xffff00ff0000;
        if ((*((r12 + 0x30)) & rax) == 0) {
            goto label_5;
        }
    }
label_22:
    r15d = *(r14);
    *(r14) = 0;
    eax = *(rbp);
    if (*((rax + 0x61ca80)) == 0) {
        goto label_23;
    }
    do {
        rbp++;
        eax = *(rbp);
    } while (*((rax + 0x61ca80)) != 0);
label_23:
    *(rsp) = rbp;
    if (rbp > r14) {
        goto label_24;
    }
    if (*((r12 + 0x36)) != 0) {
        goto label_25;
    }
    if (*((r12 + 0x34)) != 0) {
        goto label_26;
    }
    rax = 0xff0000ff0000;
    if ((*((r12 + 0x30)) & rax) == 0) {
        goto label_24;
    }
    rax = rbp;
    if (rbp < r14) {
        eax = 0;
        al = (*(rbp) == 0x2d) ? 1 : 0;
        rax += rbp;
    }
    *((rsp + 8)) = rax;
    al = fcn_00405930 (rsp + 8);
    if (al > 0x2f) {
        rax = *((rsp + 8));
        if (*((r12 + 0x35)) != 0) {
            goto label_27;
        }
label_12:
        *(rsp) = rax;
    }
label_8:
    *(r14) = r15b;
    r14 = *(rsp);
label_5:
    rax = fcn_00405eb0 (rbx, rbp);
    r15 = rax;
    rax = fcn_00405eb0 (rbp, r14);
    rbx = rax;
    while (r15 != -1) {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_28;
        }
        rcx = rax + 1;
        *((rdi + 0x28)) = rcx;
        *(rax) = 0x20;
label_6:
        r15--;
    }
    if (rbx == 0) {
        goto label_29;
    }
    do {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_30;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0x5f;
label_7:
        rbx--;
    } while (rbx != 0);
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_31;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0xa;
label_9:
    if (r12 == 0) {
        goto label_3;
    }
    r12 = *((r12 + 0x40));
    if (r12 == 0) {
        goto label_32;
    }
    rbx = *(r13);
    r15 = *((r13 + 8));
    r14 = rbx + r15 - 1;
    if (r12 != 0) {
        goto label_4;
    }
label_19:
    goto label_5;
label_28:
    esi = 0x20;
    overflow ();
    goto label_6;
label_30:
    esi = 0x5f;
    overflow ();
    goto label_7;
label_24:
    *(rsp) = r14;
    goto label_8;
label_29:
    edx = 5;
    rax = dcgettext (0, "^ no match for key\n");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_9;
label_32:
    if (*(0x0061c759) != 0) {
        goto label_3;
    }
    if (*(0x0061c75a) != 0) {
        goto label_3;
    }
    rbp = *(r13);
    rax = *((r13 + 8));
    rbx = rbp;
    r14 = rbp + rax - 1;
    goto label_5;
label_20:
    if (r11 != -1) {
        goto label_10;
    }
    goto label_11;
label_25:
    fcn_00405a40 (rbp, rsp);
    goto label_8;
label_31:
    esi = 0xa;
    overflow ();
    goto label_9;
label_26:
    rax = strtold (rbp, rsp);
    fp_stack++;
    goto label_8;
label_27:
    esi = *(rax);
    rax -= 0xffffffffffffffff;
    goto label_12;
label_13:
    edx = 5;
    rax = dcgettext (0, "write failed");
    fcn_00405dd0 (rax, r14);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4082a0 */
#include <stdint.h>
 
uint32_t fcn_004082a0 (void * arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    if (*(0x0061c750) != 0) {
        eax = fcn_004065b0 (rdi, rsi, rdx, rcx, r8, r9);
        if (eax != 0) {
            goto label_1;
        }
        if (*(0x0061c759) != 0) {
            goto label_1;
        }
        if (*(0x0061c75a) != 0) {
            goto label_1;
        }
    }
    r12 = *((rbx + 8));
    r14 = *((rbp + 8));
    r15 = r12;
    r13 = r14 - 1;
    r15--;
    if (r15 != 0) {
        goto label_2;
    }
    eax = 0;
    al = (r13 != 0) ? 1 : 0;
    eax = -eax;
    do {
label_0:
        edx = eax;
        edx = -edx;
        if (*(0x0061c75b) != 0) {
            eax = edx;
        }
label_1:
        return eax;
label_2:
        eax = 1;
    } while (r13 == 0);
    rsi = *(rbp);
    rdi = *(rbx);
    if (*(0x0061cba1) != 0) {
        goto label_3;
    }
    rdx = r13;
    if (r15 <= r13) {
        rdx = r15;
    }
    eax = memcmp (rdi, rsi, rdx);
    if (eax != 0) {
        goto label_0;
    }
    eax = 0xffffffff;
    if (r15 < r13) {
        goto label_0;
    }
    eax = 0;
    al = (r12 != r14) ? 1 : 0;
    goto label_0;
label_3:
    fcn_004115c0 (rdi, r12, rsi, r14);
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x408370 */
#include <stdint.h>
 
uint64_t fcn_00408370 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    do {
label_0:
        rbx = rdx;
        if (rsi == 2) {
            goto label_3;
        }
        r12 = rsi;
        r15 = rsi;
        r14 = rsi;
        r12 >>= 1;
        r13 = r12;
        r15 -= r12;
        r13 <<= 5;
        r13 = -r13;
        rax = rdi + r13;
        if (cl != 0) {
            goto label_4;
        }
        rdi = rax;
        *((rsp + 8)) = rax;
        fcn_00408370 (rdi, r15, rdx, 0);
    } while (1);
    rax = *((rsp + 8));
    if (r14 > 3) {
        goto label_5;
    }
    __asm ("movdqu xmm0, xmmword [rbp - 0x20]");
    __asm ("movdqu xmm1, xmmword [rbp - 0x10]");
    r13 = rax;
    rax = rbx;
    __asm ("movups xmmword [rbx - 0x20], xmm0");
    __asm ("movups xmmword [rbx - 0x10], xmm1");
    rbx = rbp;
label_1:
    rdx = rbp - 0x20;
    r14 = r13 - 0x20;
    do {
label_2:
        rdi = rdx;
        *((rsp + 8)) = rdx;
        rbx -= 0x20;
        eax = fcn_004082a0 (rdi, r14);
        rdx = *((rsp + 8));
        if (eax <= 0) {
            goto label_6;
        }
        __asm ("movdqu xmm4, xmmword [r13 - 0x20]");
        __asm ("movups xmmword [rbx], xmm4");
        __asm ("movdqu xmm5, xmmword [r13 - 0x10]");
        __asm ("movups xmmword [rbx + 0x10], xmm5");
        r15--;
        if (r15 == 0) {
            goto label_7;
        }
        r13 = r14;
        r14 -= 0x20;
    } while (1);
label_4:
    r13 += rdx;
    fcn_00408370 (rax, r15, r13, 1);
    goto label_0;
    if (r14 <= 3) {
        goto label_1;
    }
    fcn_00408370 (rbp, r12, rbx, 0);
    goto label_0;
    goto label_1;
label_6:
    __asm ("movdqu xmm2, xmmword [rbp - 0x20]");
    __asm ("movups xmmword [rbx], xmm2");
    __asm ("movdqu xmm3, xmmword [rbp - 0x10]");
    __asm ("movups xmmword [rbx + 0x10], xmm3");
    r12--;
    if (r12 != 0) {
        rdx -= 0x20;
        goto label_2;
label_3:
        *((rsp + 8)) = ecx;
        eax = fcn_004082a0 (rdi - 0x20, rdi - 0x40);
        ecx = *((rsp + 8));
        if (cl != 0) {
            goto label_8;
        }
        if (eax <= 0) {
            goto label_9;
        }
        __asm ("movdqu xmm1, xmmword [rbp - 0x20]");
        __asm ("movdqu xmm0, xmmword [rbp - 0x10]");
        __asm ("movdqu xmm2, xmmword [rbp - 0x40]");
        __asm ("movdqu xmm3, xmmword [rbp - 0x30]");
        __asm ("movups xmmword [rbx - 0x20], xmm1");
        __asm ("movups xmmword [rbx - 0x10], xmm0");
        __asm ("movups xmmword [rbp - 0x20], xmm2");
        __asm ("movups xmmword [rbp - 0x10], xmm3");
        __asm ("movups xmmword [rbp - 0x40], xmm1");
        __asm ("movups xmmword [rbp - 0x30], xmm0");
    }
label_9:
    return rax;
label_7:
    rax = 0xffffffffffffffe0;
    do {
        __asm ("movdqu xmm6, xmmword [rbp + rax]");
        __asm ("movups xmmword [rbx + rax], xmm6");
        __asm ("movdqu xmm7, xmmword [rbp + rax + 0x10]");
        __asm ("movups xmmword [rbx + rax + 0x10], xmm7");
        rax -= 0x20;
        r12--;
    } while (r12 != 0);
    return rax;
label_8:
    al = (eax > 0) ? 1 : 0;
    eax = (int32_t) al;
    edx = eax;
    eax -= 2;
    edx = ~edx;
    rax = (int64_t) eax;
    rdx = (int64_t) edx;
    rax <<= 5;
    rdx <<= 5;
    rdx += rbp;
    rbp += rax;
    __asm ("movdqu xmm0, xmmword [rdx]");
    __asm ("movdqu xmm1, xmmword [rdx + 0x10]");
    __asm ("movups xmmword [rbx - 0x20], xmm0");
    __asm ("movdqu xmm0, xmmword [rbp]");
    __asm ("movups xmmword [rbx - 0x10], xmm1");
    __asm ("movdqu xmm1, xmmword [rbp + 0x10]");
    __asm ("movups xmmword [rbx - 0x40], xmm0");
    __asm ("movups xmmword [rbx - 0x30], xmm1");
    return rax;
label_5:
    *((rsp + 8)) = rax;
    fcn_00408370 (rbp, r12, rbx, 1);
    goto label_0;
    rax = *((rsp + 8));
    r13 = *((rsp + 8));
    rax = rbx;
    rbx = rbp;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4085d0 */
#include <stdint.h>
 
uint32_t fcn_004085d0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg7, int64_t arg8) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    xmm0 = arg7;
    xmm1 = arg8;
    rbx = rdi;
    if (*(0x0061c759) != 0) {
        if (*(0x0061cb80) != 0) {
            *((rsp + 8)) = rdx;
            eax = fcn_004082a0 (rdi, 0x61cb80);
            rdx = *((rsp + 8));
            if (eax == 0) {
                goto label_0;
            }
        }
        __asm ("movdqu xmm0, xmmword [rbx]");
        *(0x0061cb80) = xmm0;
        __asm ("movdqu xmm1, xmmword [rbx + 0x10]");
        *(0x0061cb90) = xmm1;
    }
    rsi = rbp;
    rdi = rbx;
invalid_funccall(); //    void (*0x407e70)() ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x408640 */
#include <stdint.h>
 
int64_t fcn_00408640 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_18h;
    int64_t var_28h;
    int64_t var_40h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    *((rsp + 0x28)) = rdi;
    rdi = rdx;
    *((rsp + 0x18)) = rdx;
    edx = 0x38;
    rax = rdx;
    *((rsp + 0x68)) = rsi;
    rdx_rax = rax * rdi;
    *((rsp + 0x58)) = rcx;
    *((rsp + 0x60)) = r8;
    *((rsp + 0x40)) = r9;
    __asm ("seto dl");
    if (rax < 0) {
invalid_funccall(); //        void (*0x408e03)() ();
    }
    *(rax) += al;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x408687 */
#include <stdint.h>
 
int64_t fcn_00408640 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_18h;
    int64_t var_28h;
    int64_t var_40h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    *((rsp + 0x28)) = rdi;
    rdi = rdx;
    *((rsp + 0x18)) = rdx;
    edx = 0x38;
    rax = rdx;
    *((rsp + 0x68)) = rsi;
    rdx_rax = rax * rdi;
    *((rsp + 0x58)) = rcx;
    *((rsp + 0x60)) = r8;
    *((rsp + 0x40)) = r9;
    __asm ("seto dl");
    if (rax < 0) {
invalid_funccall(); //        void (*0x408e03)() ();
    }
    *(rax) += al;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x408e10 */
#include <stdint.h>
 
void fcn_00408e10 (int64_t arg1) {
    rdi = arg1;
    ebx = edi;
    dup2 ();
    edi = ebx;
    return close ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x408e20 */
#include <stdint.h>
 
int64_t fcn_00408e20 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    int64_t var_8h_2;
    int64_t fildes;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    rdi = rsi;
    rax >>= 0x3d;
    al = (rax != 0) ? 1 : 0;
    rdi <<= 3;
    if (rdi < 0) {
        goto label_3;
    }
    eax = (int32_t) al;
    if (rax != 0) {
        goto label_3;
    }
    rbx = rdx;
    r13 = rsi;
    rax = fcn_00411210 (rdi);
    *(rbx) = rax;
    r14 = rax;
    ebx = 0;
    if (r13 != 0) {
        goto label_4;
    }
    goto label_2;
    do {
label_0:
        rax = fcn_00407cd0 (*(rbp), 0x4168fa);
        *((r14 + rbx*8)) = rax;
        if (rax == 0) {
            goto label_2;
        }
label_1:
        rbx++;
        rbp += 0x10;
        if (r13 == rbx) {
            goto label_2;
        }
label_4:
        r12 = *((rbp + 8));
    } while (r12 == 0);
    eax = *((r12 + 0xc));
    if (al == 0) {
        goto label_0;
    }
    while (1) {
        eax = 0;
        eax = open (r12 + 0xd, 0, rdx);
        r15d = eax;
        if (eax >= 0) {
            eax = fcn_00407a30 (rsp + 8, 9);
            if (eax != 0xffffffff) {
                goto label_5;
            }
            rax = errno_location ();
            if (*(rax) != 0x18) {
                goto label_6;
            }
            close (r15d);
            *(rbp) = 0x18;
        }
        *((r14 + rbx*8)) = 0;
label_2:
        rax = rbx;
        return rax;
label_5:
        if (eax == 0) {
            goto label_7;
        }
        *((r12 + 8)) = eax;
        r12 = r14 + rbx*8;
        fcn_00406190 (r12);
        close (r15d);
        close (*((rsp + 0xc)));
        edi = *((rsp + 8));
        esi = 0x4168fa;
        rax = fdopen ();
        if (rax == 0) {
            goto label_8;
        }
        *((r14 + rbx*8)) = rax;
        goto label_1;
        fcn_004060a0 (*((r12 + 8)));
    }
label_8:
    rax = errno_location ();
    r13d = *(rax);
    close (*((rsp + 8)));
    *(r12) = 0;
    *(rbp) = r13d;
    goto label_2;
label_7:
    close (*((rsp + 8)));
    if (r15d != 0) {
        esi = 0;
        fcn_00408e10 (r15d);
    }
    edi = *((rsp + 0xc));
    if (edi != 1) {
        esi = 1;
        eax = fcn_00408e10 (rdi);
    }
    rdi = imp.__libc_start_main;
    ecx = 0;
    edx = 0x416559;
    eax = 0;
    rsi = rdi;
    execlp ();
    rax = errno_location ();
    fcn_004060d0 (*(rax), "couldn't execute compress program (with -d)");
label_3:
    fcn_00411460 ();
label_6:
    rax = fcn_0040f630 (4, *(0x0061c748));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "couldn't create process for %s -d");
    rcx = rbx;
    eax = 0;
    error (2, *(rbp), rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x409030 */
#include <stdint.h>
 
uint64_t fcn_00409030 (int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r15 = r8;
    r14 = rcx;
    r13 = rsi;
    r12 = rdx;
    rax = fcn_00408e20 (rdi, r12, rsp + 8);
    rbx = rax;
    if (r12 > rax) {
        if (rax <= 1) {
            goto label_0;
        }
    }
    fcn_00408640 (rbp, r13, rbx, r14, r15, *((rsp + 8)));
    rax = rbx;
    return rax;
label_0:
    rbx <<= 4;
    edx = 5;
    rbx = *((rbp + rbx));
    rax = dcgettext (0, "open failed");
    fcn_00405dd0 (rax, rbx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4090c0 */
#include <stdint.h>
 
int64_t fcn_004090c0 (uint32_t arg1, uint32_t arg2) {
    uint32_t var_ch;
    uint32_t fildes;
    int64_t var_14h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    rdx = imp.__libc_start_main;
    rax = imp.__libc_start_main;
    *((rsp + 0xc)) = esi;
    r13 = *((rax + rdx*8));
    rax = strlen (*((rax + rdx*8)));
    r12 = rax;
    rdi &= 0xfffffffffffffff8;
    rax = fcn_00411210 (rax + 0x20);
    rbp = rax + 0xd;
    rbx = rax;
    memcpy (rbp, r13, r12);
    rax = "/sortXXXXXX";
    *((rbx + r12 + 0xd)) = rax;
    eax = *(0x00414958);
    *((rbp + r12 + 8)) = eax;
    rax = imp.__libc_start_main;
    *(rbx) = 0;
    rax++;
    *(0x0061c5e8) = rax;
    if (rax == *(0x0061c768)) {
        *(0x0061c5e8) = 0;
    }
    rdx = rsp + 0x18;
    edi = 0;
    esi = 0x61c6c0;
    eax = pthread_sigmask ();
    esi = 0x80000;
    *(rsp + 0x10) = (eax == 0) ? 1 : 0;
    eax = fcn_00410680 (rbp);
    r12d = eax;
    rax = errno_location ();
    r14 = rax;
    if (r12d < 0) {
        goto label_2;
    }
    rax = *(0x0061c418);
    *(0x0061c418) = rbx;
    *(rax) = rbx;
    if (*((rsp + 0x10)) != 0) {
        goto label_3;
    }
label_1:
    *((rbx + 0xc)) = 0;
    if (*(0x0061c748) == 0) {
        goto label_4;
    }
    eax = fcn_00407a30 (rsp + 0x10, 4);
    *((rbx + 8)) = eax;
    if (eax > 0) {
        goto label_5;
    }
    if (eax == 0) {
        goto label_6;
    }
    do {
label_4:
        esi = 0x41655c;
        edi = r12d;
        rax = fdopen ();
        *(r15) = rax;
        if (rax == 0) {
            goto label_7;
        }
label_0:
        rax = rbx;
        return rax;
label_5:
        close (r12d);
        close (*((rsp + 0x10)));
        r12d = *((rsp + 0x14));
        rax = fcn_00406190 (rbx);
    } while (1);
label_2:
    ebp = *(rax);
    while (1) {
        if (ebp != 0x18) {
            goto label_8;
        }
        if (*((rsp + 0xc)) != 1) {
            goto label_8;
        }
        ebx = 0;
        free (rbx);
        goto label_0;
label_3:
        r13d = *(r14);
        fcn_00407880 (rsp + 0x10);
        *(r14) = r13d;
        goto label_1;
        fcn_00407880 (rsp + 0x10);
        *(r14) = ebp;
    }
label_6:
    close (*((rsp + 0x14)));
    if (r12d != 1) {
        esi = 1;
        fcn_00408e10 (r12d);
    }
    edi = *((rsp + 0x10));
    if (edi != 0) {
        esi = 0;
        eax = fcn_00408e10 (rdi);
    }
    rdi = imp.__libc_start_main;
    edx = 0;
    eax = 0;
    rsi = rdi;
    execlp ();
    fcn_004060d0 (*(r14), "couldn't execute compress program");
label_7:
    edx = 5;
    rax = dcgettext (0, "couldn't create temporary file");
    fcn_00405dd0 (rax, rbp);
label_8:
    rax = fcn_0040f630 (4, r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot create temporary file in %s");
    rcx = rbx;
    eax = 0;
    error (2, *(r14), rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x409330 */
#include <stdint.h>
 
uint64_t fcn_00409330 (int64_t arg1, int64_t arg2, uint32_t arg3, uint32_t arg4) {
    int64_t var_8h;
    int64_t var_10h_2;
    uint32_t var_18h_2;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    uint32_t var_d0h;
    uint32_t var_d8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdi;
    r13 = rdx;
    r12 = rsi;
    *((rsp + 0x18)) = rcx;
    ecx = *(0x0061c420);
    if (rcx >= rdx) {
        goto label_11;
    }
    *(rsp) = rdx;
label_0:
    ebp = 0;
    ebx = 0;
    if (rcx > *(rsp)) {
        goto label_12;
    }
    do {
        rax = fcn_004090c0 (rsp + 0xd0, 0);
        edx = *(0x0061c420);
        rsi = r12;
        rdi = rbx;
        r13 = rax + 0xd;
        rcx = *((rsp + 0xd0));
        r15 = rax;
        r8 = r13;
        if (rdx <= r12) {
            rsi = rdx;
        }
        rdi <<= 4;
        rdi += r14;
        rax = fcn_00409030 (rdi, rsi, rdx, rcx, r8);
        rdx = r12;
        rsi = *(rsp);
        ecx = *(0x0061c420);
        if (rax <= r12) {
            rdx = rax;
        }
        rbx += rax;
        rsi -= rbx;
        r12 -= rdx;
        rdx = rbp;
        rbp++;
        rdx <<= 4;
        *((r14 + rdx)) = r13;
        *((r14 + rdx + 8)) = r15;
    } while (rcx <= rsi);
    rax = rbp;
    edx = 0;
    r15 = rbp;
    r9 = rbx;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    r15 <<= 4;
    r9 <<= 4;
    rax = rcx;
    r15 += r14;
    r9 += r14;
    rax -= rdx;
label_10:
    if (rsi > rax) {
        goto label_13;
    }
label_8:
    r13 = *(rsp);
    r12 += rbp;
    rbp -= rbx;
    r13 += rbp;
    rdx -= rbx;
    rdx <<= 4;
    memmove (r15, r9, r13);
    ecx = *(0x0061c420);
    *(rsp) = r13;
    if (rcx < r13) {
        goto label_0;
    }
    r13 = *(rsp);
label_11:
    if (r13 <= r12) {
        goto label_14;
    }
    r9 = r12;
    r10d = 0;
    rax = rsp + 0x40;
    rbx = r12;
    r9 <<= 4;
    *((rsp + 8)) = r14;
    r15d = 0;
    rbp = r14 + r9;
    *((rsp + 0x20)) = r12;
    r12d = r10d;
    r14 = rbp;
    *((rsp + 0x10)) = rax;
    rbp = *((rsp + 0x18));
    *(rsp) = r13;
    while (r13d == 0) {
        rdx = rsp + 0xd0;
        esi = 0;
        edi = 1;
        r12d = 1;
        eax = fxstat ();
        if (eax == 0) {
label_1:
            rax = *((rsp + 0x48));
            r12d = 1;
            if (*((rsp + 0xd8)) == rax) {
                goto label_15;
            }
        }
label_4:
        rbx++;
        r14 += 0x10;
        if (rbx == *(rsp)) {
            goto label_6;
        }
label_2:
        rax = *(r14);
        ecx = 2;
        edi = 0x41814a;
        rsi = rax;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        cl = (rbx > *(rsp)) ? 1 : 0;
        r13d = (int32_t) cl;
        if (rbp != 0) {
            eax = strcmp (rbp, rax);
            if (r13d == 0) {
                goto label_16;
            }
            if (eax == 0) {
                goto label_17;
            }
        }
label_16:
        if (r12b == 0) {
            goto label_18;
        }
INVALID_JUMP;
    }
    rsi = *(r14);
    rdx = rsp + 0xd0;
    edi = 1;
    r12d = 1;
    eax = xstat ();
    if (eax == 0) {
        goto label_1;
    }
    rbx++;
    r14 += 0x10;
    if (rbx != *(rsp)) {
        goto label_2;
    }
label_6:
    r14 = *((rsp + 8));
    r12 = *((rsp + 0x20));
    r13 = *(rsp);
label_3:
    rax = fcn_00408e20 (r14, r13, *((rsp + 0x10)));
    rbx = rax;
    if (r13 == rax) {
        goto label_19;
    }
    if (rax <= 2) {
        goto label_20;
    }
label_7:
    rax = rbx;
    rax <<= 4;
    r15 = r14 + rax - 0x10;
    do {
        rax = *((rsp + 0x40));
        rbx--;
        rsi = *(r15);
        fcn_00407df0 (*((rax + rbx*8)), *(rsi));
        sil = (rbx > 2) ? 1 : 0;
        r15 -= 0x10;
        rax = fcn_004090c0 (rsp + 0xd0, 0);
    } while (rax == 0);
    r15 = rbx;
    r11 = rax + 0xd;
    r9 = *((rsp + 0x40));
    if (r12 <= rbx) {
        r15 = r12;
    }
    r8 = r11;
    *((rsp + 8)) = rax;
    r13 -= rbx;
    *(rsp) = r11;
    r12 -= r15;
    fcn_00408640 (r14, r15, rbx, *((rsp + 0xd0)), r8, r9);
    r11 = *(rsp);
    rax = *((rsp + 8));
    rdx <<= 4;
    r12++;
    *(r14) = r11;
    r13++;
    *((r14 + 8)) = rax;
    memmove (r14 + 0x10, rbp, r13);
    goto label_3;
label_15:
    rax = *((rsp + 0x40));
    if (*((rsp + 0xd0)) != rax) {
        goto label_4;
    }
label_17:
    if (r15 == 0) {
        goto label_21;
    }
    r11 = r15 + 0xd;
label_9:
    *(r14) = r11;
    *((r14 + 8)) = r15;
    goto label_4;
label_18:
    rdx = *((rsp + 0x10));
    esi = 1;
    edi = 1;
    eax = fxstat ();
    if (eax == 0) {
        goto label_5;
    }
    goto label_6;
label_19:
    rax = fcn_00407cd0 (*((rsp + 0x18)), 0x41655c);
    if (rax != 0) {
        goto label_22;
    }
    rax = errno_location ();
    if (*(rax) != 0x18) {
        goto label_23;
    }
    if (r13 > 2) {
        goto label_7;
    }
label_23:
    edx = 5;
    rax = dcgettext (0, "open failed");
    fcn_00405dd0 (rax, *((rsp + 0x18)));
label_13:
    rdx = rsi + rdx + 1;
    *((rsp + 0x20)) = r9;
    rdx -= rcx;
    *((rsp + 8)) = rdx;
    rax = fcn_004090c0 (rsp + 0xd0, 0);
    rdx = *((rsp + 8));
    rsi = r12;
    r9 = *((rsp + 0x20));
    r11 = rax + 0xd;
    rcx = *((rsp + 0xd0));
    *((rsp + 0x10)) = rax;
    r8 = r11;
    rdi = r9;
    *((rsp + 8)) = r11;
    if (rdx <= r12) {
        rsi = rdx;
    }
    rax = fcn_00409030 (rdi, rsi, rdx, rcx, r8);
    rdx = r12;
    r11 = *((rsp + 8));
    r10 = *((rsp + 0x10));
    if (rax <= r12) {
        rdx = rax;
    }
    rbp++;
    rbx += rax;
    *(r15) = r11;
    *((r15 + 8)) = r10;
    r9 = rbx;
    r15 = rbp;
    r9 <<= 4;
    r15 <<= 4;
    r12 -= rdx;
    r9 += r14;
    r15 += r14;
    goto label_8;
label_21:
    rax = fcn_004090c0 (rsp + 0x38, 0);
    r11 = rax + 0xd;
    r15 = rax;
    r8 = r11;
    *((rsp + 0x28)) = r11;
    fcn_00409030 (r14, 0, 1, *((rsp + 0x38)), r8);
    r11 = *((rsp + 0x28));
    goto label_9;
label_12:
    rax = rcx;
    r15 = r14;
    r9 = r14;
    rsi = *(rsp);
    edx = 0;
    goto label_10;
label_22:
    fcn_00408640 (r14, r12, r13, rax, *((rsp + 0x18)), *((rsp + 0x40)));
    return rax;
label_14:
    rax = rsp + 0x40;
    *((rsp + 0x10)) = rax;
    goto label_3;
label_20:
    rbx <<= 4;
    edx = 5;
    rbx = *((r14 + rbx));
    rax = dcgettext (0, "open failed");
    fcn_00405dd0 (rax, rbx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x409830 */
#include <stdint.h>
 
int64_t fcn_00409830 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = *((rsi + 8));
    rax = *((rsi + 0x18));
    rcx = *((rsi + 0x10));
    if (*(rsi) == rcx) {
        goto label_1;
    }
    while (*((rsi + 0x30)) == 0) {
invalid_funccall(); //        void (*0x406320)() ();
    }
    do {
label_0:
        return rax;
INVALID_JUMP;
    } while (rdx == rax);
    if (*((rsi + 0x28)) != 0) {
        goto label_0;
    }
invalid_funccall(); //    return void (*0x406320)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x409880 */
#include <stdint.h>
 
void fcn_00409880 (int64_t arg_c8h, int64_t arg_c0h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
label_13:
    r14 = r9;
    r9 = rsi;
    r13 = r8;
    r9 >>= 1;
    rbx = rcx;
    r8 = *((rcx + 0x28));
    rax = *((rcx + 0x30));
    *((rsp + 0x10)) = rdx;
    *((rsp + 0x50)) = rdx;
    rdx = *((rcx + 0x40));
    rcx = *((rsp + 0xc0));
    *((rsp + 0x40)) = rdi;
    *((rsp + 0x58)) = rdx;
    rdx = r8 + rax;
    *((rsp + 0x48)) = r9;
    *((rsp + 8)) = r9;
    *((rsp + 0x60)) = r13;
    *((rsp + 0x68)) = r14;
    *((rsp + 0x70)) = rcx;
    if (rdx > 0x1ffff) {
        r12 = rsi;
        if (rsi > 1) {
            goto label_14;
        }
    }
label_11:
    rdx = *((rsp + 0x10));
    r12 = r8;
    r10 = rbp;
    r12 <<= 5;
    rdx <<= 5;
    r12 = -r12;
    r10 -= rdx;
    r9 = rbp + r12;
    if (rax > 1) {
        rdx = r8;
        rcx = r10;
        rsi = rax;
        rdi = r9;
        rdx >>= 1;
        *((rsp + 0x28)) = r8;
        rdx <<= 5;
        *((rsp + 0x20)) = r10;
        rcx -= rdx;
        *((rsp + 0x18)) = rax;
        *((rsp + 8)) = r9;
        fcn_00408370 (rdi, rsi, rcx, 0);
        r8 = *((rsp + 0x28));
        r10 = *((rsp + 0x20));
        rax = *((rsp + 0x18));
        r9 = *((rsp + 8));
    }
    if (r8 > 1) {
        *((rsp + 0x18)) = r9;
        *((rsp + 8)) = rax;
        fcn_00408370 (rbp, r8, r10, 0);
        r9 = *((rsp + 0x18));
        rax = *((rsp + 8));
    }
    rax <<= 5;
    *(rbx) = rbp;
    r12 -= rax;
    *((rbx + 8)) = r9;
    rbp += r12;
    *((rbx + 0x10)) = r9;
    *((rbx + 0x18)) = rbp;
    fcn_00406320 (r13, rbx);
    rax = r13 + 8;
    *((rsp + 8)) = rax;
    rax = r13 + 0x30;
    *((rsp + 0x28)) = rax;
label_1:
    rdi = *((rsp + 8));
    pthread_mutex_lock ();
    while (rax == 0) {
        rsi = *((rsp + 8));
        rdi = *((rsp + 0x28));
        pthread_cond_wait ();
        rax = fcn_0040d190 (*(r13));
    }
    rdi = *((rsp + 8));
    rbx = rax;
    pthread_mutex_unlock ();
    rax = rbx + 0x58;
    rdi = rax;
    *((rsp + 0x18)) = rax;
    pthread_mutex_lock ();
    eax = *((rbx + 0x50));
    *((rbx + 0x54)) = 0;
    if (eax == 0) {
        goto label_15;
    }
    rdx = *((rsp + 0x10));
    ecx = rax + rax + 2;
    r12 = *(rbx);
    rbp = *((rbx + 8));
    rdx >>= cl;
    r15 = rdx + 1;
    if (eax <= 1) {
        goto label_16;
    }
    rax = *((rbx + 0x20));
    rsi = rbp;
    rdi = r12;
    r8 = *(rax);
    while (eax > 0) {
        rax = *((rbx + 8));
        rdi = *(rbx);
        __asm ("movdqu xmm2, xmmword [rax - 0x20]");
        rsi = rax - 0x20;
        *((rbx + 8)) = rsi;
        __asm ("movups xmmword [r8], xmm2");
        __asm ("movdqu xmm3, xmmword [rax - 0x10]");
        __asm ("movups xmmword [r8 + 0x10], xmm3");
label_0:
        r15--;
        r11 = *((rbx + 0x10));
        if (r11 == rdi) {
            goto label_17;
        }
        if (*((rbx + 0x18)) == rsi) {
            goto label_18;
        }
        if (r15 == 0) {
            goto label_19;
        }
        rsi -= 0x20;
        rdi -= 0x20;
        *((rsp + 0x20)) = r8;
        eax = fcn_004082a0 (rdi, rsi);
        r8 = *((rsp + 0x20));
        r8 -= 0x20;
    }
    rax = *(rbx);
    rsi = *((rbx + 8));
    __asm ("movdqu xmm0, xmmword [rax - 0x20]");
    rdi = rax - 0x20;
    *(rbx) = rdi;
    __asm ("movups xmmword [r8], xmm0");
    __asm ("movdqu xmm1, xmmword [rax - 0x10]");
    __asm ("movups xmmword [r8 + 0x10], xmm1");
    goto label_0;
label_19:
    rdx = rbp;
    rax = r12;
    r9 = *((rbx + 0x30));
    r10 = *((rbx + 0x28));
    rdx -= rsi;
    rax -= rdi;
    r15 = 0xffffffffffffffff;
    rdx >>= 5;
    rax >>= 5;
    if (r9 != rdx) {
        goto label_3;
    }
    rsi = 0xfffffffffffffffe;
label_4:
    rdi -= 0x20;
    while (r11 != rdi) {
        rsi--;
        rdi -= 0x20;
        if (rsi == -1) {
            goto label_20;
        }
        __asm ("movdqu xmm4, xmmword [rdi]");
        r8 -= 0x20;
        *(rbx) = rdi;
        rax = rdi;
        __asm ("movups xmmword [r8], xmm4");
        __asm ("movdqu xmm5, xmmword [rdi + 0x10]");
        __asm ("movups xmmword [r8 + 0x10], xmm5");
    }
    r12 -= r11;
    r9 = rdx;
    rax = r12;
    rax >>= 5;
    do {
label_5:
        rcx = *((rbx + 0x20));
        *(rcx) = r8;
label_7:
        r10 -= rax;
        r9 -= rdx;
        *((rbx + 0x28)) = r10;
        *((rbx + 0x30)) = r9;
        if (*((rbx + 0x54)) == 0) {
            fcn_00409830 (r13, rbx);
        }
        if (*((rbx + 0x50)) > 1) {
            goto label_21;
        }
        rax = *((rbx + 0x30));
        rax += *((rbx + 0x28));
        if (rax == 0) {
            goto label_22;
        }
label_2:
        rdi = *((rsp + 0x18));
        pthread_mutex_unlock ();
        goto label_1;
label_17:
        rdx = rbp;
        r12 -= rdi;
        r9 = *((rbx + 0x30));
        r10 = *((rbx + 0x28));
        rdx -= rsi;
        rax = r12;
        rdx >>= 5;
        rax >>= 5;
        if (rdx == r9) {
            goto label_23;
        }
label_3:
        if (rax == r10) {
            goto label_24;
        }
label_9:
        rbp -= rsi;
        rdx = rbp;
        rdx >>= 5;
    } while (1);
label_22:
    fcn_00406320 (r13, *((rbx + 0x38)));
    goto label_2;
label_21:
    rax = *((rbx + 0x38));
    rdi = rax + 0x58;
    pthread_mutex_lock ();
    rsi = *((rbx + 0x38));
    if (*((rsi + 0x54)) == 0) {
        fcn_00409830 (r13, rsi);
        rsi = *((rbx + 0x38));
    }
    rdi = rsi + 0x58;
    pthread_mutex_unlock ();
    goto label_2;
label_18:
    rdx = rbp;
    rax = r12;
    r9 = *((rbx + 0x30));
    r10 = *((rbx + 0x28));
    rdx -= rsi;
    rax -= rdi;
    rdx >>= 5;
    rax >>= 5;
    if (r9 != rdx) {
        goto label_3;
    }
    rsi = r15 - 1;
    if (r15 != 0) {
        goto label_4;
    }
    goto label_5;
label_16:
    rsi = rbp;
    rdi = r12;
    while (eax > 0) {
        rax = *((rbx + 8));
        *((rbx + 8)) = rdi;
        fcn_004085d0 (rax - 0x20, r14, *((rsp + 0xc0)), rcx, r8);
label_6:
        rdi = *(rbx);
        rsi = *((rbx + 8));
        r15--;
        if (*((rbx + 0x10)) == rdi) {
            goto label_25;
        }
        if (*((rbx + 0x18)) == rsi) {
            goto label_26;
        }
        if (r15 == 0) {
            goto label_27;
        }
        rsi -= 0x20;
        rdi -= 0x20;
        eax = fcn_004082a0 (rdi, rsi);
    }
    rax = *(rbx);
    *(rbx) = rdi;
    fcn_004085d0 (rax - 0x20, r14, *((rsp + 0xc0)), rcx, r8);
    goto label_6;
label_25:
    rax = r12;
    rdx = *((rbx + 0x30));
    r10 = *((rbx + 0x28));
    rax -= rdi;
    rdi = rbp;
    rdi -= rsi;
    rax >>= 5;
    rdi >>= 5;
    if (rdi == rdx) {
        goto label_28;
    }
    if (rax == r10) {
        goto label_29;
    }
    do {
label_8:
        rbp -= rsi;
        r9 = *((rbx + 0x30));
        rdx = rbp;
        rdx >>= 5;
        goto label_7;
label_26:
        r8 = rbp;
        rax = r12;
        rdx = *((rbx + 0x30));
        r8 -= rsi;
        rax -= rdi;
        r8 >>= 5;
        rax >>= 5;
        if (r8 == rdx) {
            goto label_30;
        }
label_10:
        r10 = *((rbx + 0x28));
    } while (rax != r10);
label_29:
    if (*((rbx + 0x18)) == rsi) {
        goto label_8;
    }
    r8 = r15 - 1;
    if (r15 == 0) {
        goto label_8;
    }
    r15 = r8;
    while (rsi != *((rbx + 0x18))) {
        r15--;
        if (r15 == -1) {
            goto label_31;
        }
        *((rbx + 8)) = rdi;
        fcn_004085d0 (rsi - 0x20, r14, *((rsp + 0xc0)), rcx, r8);
        rsi = *((rbx + 8));
    }
label_31:
    r12 -= *(rbx);
    rbp -= rsi;
    r10 = *((rbx + 0x28));
    rax = r12;
    rdx = rbp;
    r9 = *((rbx + 0x30));
    rax >>= 5;
    rdx >>= 5;
    goto label_7;
label_24:
    r11 = *((rbx + 0x18));
    if (r11 == rsi) {
        goto label_9;
    }
    rdi = r15 - 1;
    rdx = rsi - 0x20;
    if (r15 != 0) {
        goto label_32;
    }
    goto label_9;
    do {
        rdi--;
        rdx -= 0x20;
        if (rdi == -1) {
            goto label_33;
        }
label_32:
        __asm ("movdqu xmm6, xmmword [rdx]");
        r8 -= 0x20;
        *((rbx + 8)) = rdx;
        rcx = rdx;
        __asm ("movups xmmword [r8], xmm6");
        __asm ("movdqu xmm7, xmmword [rdx + 0x10]");
        __asm ("movups xmmword [r8 + 0x10], xmm7");
    } while (rdx != r11);
    rbp -= rdx;
    rdx = rbp;
    rdx >>= 5;
    goto label_5;
label_27:
    rax = r12;
    rdx = rbp;
    r15 = 0xffffffffffffffff;
    rax -= rdi;
    rdx -= rsi;
    rax >>= 5;
    rdx >>= 5;
    if (*((rbx + 0x30)) != rdx) {
        goto label_10;
    }
    r8 = 0xfffffffffffffffe;
    r15 = 0xfffffffffffffffe;
    while (rdi != *((rbx + 0x10))) {
        r15--;
        if (r15 == -1) {
            goto label_34;
        }
label_12:
        rdi -= 0x20;
        *(rbx) = rdi;
        fcn_004085d0 (rdi, r14, *((rsp + 0xc0)), rcx, r8);
        rdi = *(rbx);
    }
label_34:
    r12 -= rdi;
    rbp -= *((rbx + 8));
    r10 = *((rbx + 0x28));
    rax = r12;
    rdx = rbp;
    r9 = *((rbx + 0x30));
    rax >>= 5;
    rdx >>= 5;
    goto label_7;
label_15:
    rdi = *((rsp + 0x18));
    pthread_mutex_unlock ();
    rax = fcn_00406320 (r13, rbx);
    do {
        return rax;
label_20:
        r12 -= rax;
        r9 = rdx;
        rax = r12;
        rax >>= 5;
        goto label_5;
label_14:
        eax = pthread_create (rsp + 0x38, 0, 0x409fe0, rsp + 0x40);
        r9 = *((rsp + 8));
        if (eax != 0) {
            r8 = *((rbx + 0x28));
            rax = *((rbx + 0x30));
            goto label_11;
label_30:
            r8 = r15 - 1;
            if (r15 == 0) {
                goto label_35;
            }
            r15 = r8;
            goto label_12;
label_33:
            rbp -= rcx;
            rdx = rbp;
            rdx >>= 5;
            goto label_5;
label_23:
            rdx = r9;
            goto label_5;
        }
        rax = *((rbx + 0x28));
        rsi -= r9;
        rax <<= 5;
        rdi -= rax;
        fcn_00409880 (rbp, r12, *((rsp + 0x20)), *((rbx + 0x48)), r13, r14);
        goto label_13;
        pthread_join (*((rsp + 0x48)), 0);
    } while (1);
label_28:
    r9 = rdx;
    goto label_7;
label_35:
    r10 = *((rbx + 0x28));
    r9 = rdx;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40a010 */
#include <stdint.h>
 
int64_t fcn_0040a010 (int64_t arg1) {
    rdi = arg1;
    rdx = imp.__libc_start_main;
    rcx = imp.__libc_start_main;
    rbx = rdi;
    rax = imp.__libc_start_main;
    while (1) {
        rcx = rdx + 1;
        *((rax + rdx*8)) = rbx;
        *(0x0061c768) = rcx;
        return rax;
        if (rax == 0) {
            goto label_1;
        }
        rdx = 0xaaaaaaaaaaaaaa9;
        if (rcx > rdx) {
            goto label_2;
        }
        rdx = rcx;
        rdx >>= 1;
        rcx = rcx + rdx + 1;
label_0:
        *(0x0061c760) = rcx;
        rax = fcn_00411270 (rax, rcx*8);
        rdx = imp.__libc_start_main;
        *(0x0061c770) = rax;
    }
label_1:
    if (rcx == 0) {
        goto label_3;
    }
    rsi = rcx;
    edx = 0;
    rsi >>= 0x3d;
    rsi = rcx;
    dl = (rsi != 0) ? 1 : 0;
    rsi <<= 3;
    if (rsi < 0) {
        goto label_2;
    }
    if (rdx == 0) {
        goto label_0;
    }
label_2:
    fcn_00411460 ();
label_3:
    esi = 0x80;
    ecx = 0x10;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40a0d0 */
#include <stdint.h>
 
uint64_t fcn_0040a0d0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION].. [FILE]..\n  or:  %s [OPTION].. --files0-from=F\n");
    rcx = rbp;
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Write sorted concatenation of all FILE(s) to standard output.\n");
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
    rax = dcgettext (0, "Ordering options:\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -b, --ignore-leading-blanks  ignore leading blanks\n  -d, --dictionary-order      consider only blanks and alphanumeric characters\n  -f, --ignore-case           fold lower case to upper case characters\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -g, --general-numeric-sort  compare according to general numerical value\n  -i, --ignore-nonprinting    consider only printable characters\n  -M, --month-sort            compare (unknown) < 'JAN' < .. < 'DEC'\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -h, --human-numeric-sort    compare human readable numbers (e.g., 2K 1G)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -n, --numeric-sort          compare according to string numerical value\n  -R, --random-sort           shuffle, but group identical keys.  See shuf(1)\n      --random-source=FILE    get random bytes from FILE\n  -r, --reverse               reverse the result of comparisons\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --sort=WORD             sort according to WORD:\n                                general-numeric -g, human-numeric -h, month -M,\n                                numeric -n, random -R, version -V\n  -V, --version-sort          natural sort of (version) numbers within text\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Other options:\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --batch-size=NMERGE   merge at most NMERGE inputs at once;\n                            for more use temp files\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -c, --check, --check=diagnose-first  check for sorted input; do not sort\n  -C, --check=quiet, --check=silent  like -c, but do not report first bad line\n      --compress-program=PROG  compress temporaries with PROG;\n                              decompress them with PROG -d\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --debug               annotate the part of the line used to sort,\n                              and warn about questionable usage to stderr\n      --files0-from=F       read input from the files specified by\n                            NUL-terminated names in file F;\n                            If F is - then read names from standard input\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -k, --key=KEYDEF          sort via a key; KEYDEF gives location and type\n  -m, --merge               merge already sorted files; do not sort\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -o, --output=FILE         write result to FILE instead of standard output\n  -s, --stable              stabilize sort by disabling last-resort comparison\n  -S, --buffer-size=SIZE    use SIZE for main memory buffer\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "  -t, --field-separator=SEP  use SEP instead of non-blank to blank transition\n  -T, --temporary-directory=DIR  use DIR for temporaries, not $TMPDIR or %s;\n                              multiple options specify multiple directories\n      --parallel=N          change the number of sorts run concurrently to N\n  -u, --unique              with -c, check for strict ordering;\n                              without -c, output only the first of an equal run\n");
    edx = "/tmp";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -z, --zero-terminated     line delimiter is NUL, not newline\n");
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
    rax = dcgettext (0, "\nKEYDEF is F[.C][OPTS][,F[.C][OPTS]] for start and stop position, where F is a\nfield number and C a character position in the field; both are origin 1, and\nthe stop position defaults to the line's end.  If neither -t nor -b is in\neffect, characters in a field are counted from the beginning of the preceding\nwhitespace.  OPTS is one or more single-letter ordering options [bdfgiMhnRrV],\nwhich override global ordering options for that key.  If no key is given, use\nthe entire line as the key.  Use --debug to diagnose incorrect key usage.\n\nSIZE may be followed by the following multiplicative suffixes:\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "% 1% of memory, b 1, K 1024 (default), and so on for M, G, T, P, E, Z, Y.\n\n*** WARNING ***\nThe locale specified by the environment affects sort order.\nSet LC_ALL=C to get the traditional sort order that uses\nnative byte values.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x416588;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x416602;
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
        esi = 0x416672;
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
        eax = strncmp (rax, 0x41660c, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x4165a4;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x416672;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x416571;
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
            eax = strncmp (rax, 0x41660c, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x416672;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x4165a4;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x416672;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40a650 */
#include <stdint.h>
 
uint64_t fcn_0040a650 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40a770 */
#include <stdint.h>
 
uint64_t fcn_0040a770 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_0040f860 (1, rbp);
        rax = fcn_0040f550 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x402d20)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40a7f0 */
#include <stdint.h>
 
uint64_t fcn_0040a7f0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_0040f880 (r12);
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
    rax = fcn_0040f880 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40a910 */
#include <stdint.h>
 
uint64_t fcn_0040a910 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_0040a650 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_0040a770 (r14, r12, rax);
        fcn_0040a7f0 (rbx, rbp, r15);
invalid_funccall(); //        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40a9f0 */
#include <stdint.h>
 
uint64_t fcn_0040a9f0 (void) {
    eax = fcn_00413520 (*(obj.stdout));
    if (eax != 0) {
        rax = errno_location ();
        rbx = rax;
        if (*(0x0061cbb0) == 0) {
            goto label_0;
        }
        if (*(rax) != 0x20) {
            goto label_0;
        }
    }
    eax = fcn_00413520 (*(obj.stderr));
    if (eax != 0) {
        goto label_1;
    }
    return rax;
label_0:
    edx = 5;
    rax = dcgettext (0, "write error");
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_2;
    }
    rax = fcn_0040f6d0 (rdi, rsi, rdx, rcx);
    r8 = rbp;
    rcx = rax;
    eax = 0;
    error (0, *(rbx), "%s: %s");
    do {
label_1:
        rax = exit (*(0x0061c518));
label_2:
        rcx = rax;
        eax = 0;
        error (0, *(rbx), 0x416abc);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40aa90 */
#include <stdint.h>
 
int64_t fcn_0040aa90 (int64_t arg1) {
    rdi = arg1;
    rax = 0xefcdab8967452301;
    *((rdi + 0x10)) = 0;
    *(rdi) = rax;
    rax = 0x1032547698badcfe;
    *((rdi + 8)) = rax;
    *((rdi + 0x18)) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40aae0 */
#include <stdint.h>
 
 
int64_t fcn_0040aae0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    rax &= 0xfffffffffffffffc;
    rbx = rdi;
    rdi = rdx;
    r11d = *((rdx + 4));
    rcx = rbx + rax;
    eax = *(rdx);
    r10d = *((rdx + 8));
    *((rsp - 0x18)) = eax;
    eax = *((rdx + 0xc));
    *((rsp - 8)) = rdx;
    edx = esi;
    *((rsp - 0x20)) = eax;
    eax = 0;
    edx += *((rdi + 0x10));
    al = (edx < 0) ? 1 : 0;
    rsi >>= 0x20;
    esi += *((rdi + 0x14));
    *((rsp - 0x10)) = rcx;
    esi += eax;
    *((rdi + 0x10)) = edx;
    *((rdi + 0x14)) = esi;
    if (rbx >= rcx) {
        goto label_0;
    }
    r15d = r10d;
    do {
        r14d = *(rbx);
        edi = *((rsp - 0x20));
        eax = *((rsp - 0x18));
        esi = *((rbx + 4));
        r8d = *((rbx + 0xc));
        r10d = *((rbx + 0x14));
        edx = r14 + rax - 0x28955b88;
        eax = edi;
        ecx = rsi + rdi - 0x173848aa;
        *((rsp - 0x44)) = esi;
        eax ^= r15d;
        ebp = *((rbx + 0x18));
        r13d = *((rbx + 0x1c));
        *((rsp - 0x34)) = r10d;
        eax &= r11d;
        r12d = *((rbx + 0x24));
        *((rsp - 0x3c)) = r8d;
        eax ^= edi;
        edi = r8 + r11 - 0x3e423112;
        r8d = *((rbx + 0x2c));
        eax += edx;
        edx = r11d;
        *((rsp - 0x2c)) = r12d;
        eax = rotate_left32 (eax, 7);
        edx ^= r15d;
        *((rsp - 0x24)) = r8d;
        eax += r11d;
        edx &= eax;
        r9d = eax;
        edx ^= r15d;
        r9d ^= r11d;
        edx += ecx;
        ecx = *((rbx + 8));
        edx = rotate_left32 (edx, 0xc);
        edx += eax;
        esi = rcx + r15 + 0x242070db;
        *((rsp - 0x40)) = ecx;
        ecx = r9d;
        ecx &= edx;
        r9d = eax;
        ecx ^= r11d;
        r9d ^= edx;
        ecx += esi;
        esi = r9d;
        r9d = *((rbx + 0x10));
        ecx = rotate_right32 (ecx, 0xf);
        ecx += edx;
        *((rsp - 0x38)) = r9d;
        esi &= ecx;
        esi ^= eax;
        esi += edi;
        edi = r9 + rax - 0xa83f051;
        eax = edx;
        r9d = *((rbx + 0x3c));
        esi = rotate_right32 (esi, 0xa);
        eax ^= ecx;
        esi += ecx;
        eax &= esi;
        eax ^= edx;
        eax += edi;
        edi = r10 + rdx + 0x4787c62a;
        edx = ecx;
        r10d = ebp;
        eax = rotate_left32 (eax, 7);
        edx ^= esi;
        *((rsp - 0x1c)) = r10d;
        eax += esi;
        edx &= eax;
        edx ^= ecx;
        edx += edi;
        edi = rbp + rcx - 0x57cfb9ed;
        ebp ^= eax;
        edx = rotate_left32 (edx, 0xc);
        edx += eax;
        ecx = ebp;
        ecx &= edx;
        ebp ^= edx;
        ecx ^= esi;
        ecx += edi;
        edi = r13 + rsi - 0x2b96aff;
        esi = ebp;
        ebp = *((rbx + 0x20));
        ecx = rotate_right32 (ecx, 0xf);
        ecx += edx;
        *((rsp - 0x30)) = ebp;
        esi &= ecx;
        esi ^= eax;
        esi += edi;
        edi = rbp + rax + 0x698098d8;
        eax = edx;
        ebp = *((rbx + 0x30));
        esi = rotate_right32 (esi, 0xa);
        eax ^= ecx;
        esi += ecx;
        eax &= esi;
        eax ^= edx;
        eax += edi;
        edi = r12 + rdx - 0x74bb0851;
        edx = ecx;
        r12d = *((rbx + 0x38));
        eax = rotate_left32 (eax, 7);
        edx ^= esi;
        eax += esi;
        edx &= eax;
        edx ^= ecx;
        edx += edi;
        edi = *((rbx + 0x28));
        edx = rotate_left32 (edx, 0xc);
        *((rsp - 0x28)) = edi;
        edi = rdi + rcx - 0xa44f;
        ecx = esi;
        edx += eax;
        ecx ^= eax;
        ecx &= edx;
        ecx ^= esi;
        ecx += edi;
        edi = r8 + rsi - 0x76a32842;
        esi = eax;
        r8d = *((rbx + 0x34));
        ecx = rotate_right32 (ecx, 0xf);
        esi ^= edx;
        rbx += 0x40;
        ecx += edx;
        esi &= ecx;
        esi ^= eax;
        esi += edi;
        edi = rbp + rax + 0x6b901122;
        eax = edx;
        esi = rotate_right32 (esi, 0xa);
        eax ^= ecx;
        esi += ecx;
        eax &= esi;
        eax ^= edx;
        eax += edi;
        edi = r8 + rdx - 0x2678e6d;
        edx = ecx;
        eax = rotate_left32 (eax, 7);
        edx ^= esi;
        eax += esi;
        edx &= eax;
        edx ^= ecx;
        edx += edi;
        edi = r12 + rcx - 0x5986bc72;
        ecx = esi;
        edx = rotate_left32 (edx, 0xc);
        ecx ^= eax;
        edx += eax;
        ecx &= edx;
        ecx ^= esi;
        ecx += edi;
        edi = r9 + rsi + 0x49b40821;
        esi = eax;
        ecx = rotate_right32 (ecx, 0xf);
        esi ^= edx;
        ecx += edx;
        esi &= ecx;
        esi ^= eax;
        esi += edi;
        edi = *((rsp - 0x44));
        esi = rotate_right32 (esi, 0xa);
        esi += ecx;
        edi = rdi + rax - 0x9e1da9e;
        eax = ecx;
        eax ^= esi;
        eax &= edx;
        eax ^= ecx;
        eax += edi;
        edi = r10 + rdx - 0x3fbf4cc0;
        edx = esi;
        eax = rotate_left32 (eax, 5);
        eax += esi;
        edx ^= eax;
        edx &= ecx;
        edx ^= esi;
        edx += edi;
        edi = *((rsp - 0x24));
        edx = rotate_left32 (edx, 9);
        edx += eax;
        edi = rdi + rcx + 0x265e5a51;
        ecx = eax;
        ecx ^= edx;
        ecx &= esi;
        ecx ^= eax;
        ecx += edi;
        edi = r14 + rsi - 0x16493856;
        esi = edx;
        ecx = rotate_left32 (ecx, 0xe);
        ecx += edx;
        esi ^= ecx;
        esi &= eax;
        esi ^= edx;
        esi += edi;
        edi = *((rsp - 0x34));
        esi = rotate_right32 (esi, 0xc);
        esi += ecx;
        edi = rdi + rax - 0x29d0efa3;
        eax = ecx;
        eax ^= esi;
        eax &= edx;
        eax ^= ecx;
        eax += edi;
        edi = *((rsp - 0x28));
        eax = rotate_left32 (eax, 5);
        eax += esi;
        edi = rdi + rdx + 0x2441453;
        edx = esi;
        edx ^= eax;
        edx &= ecx;
        edx ^= esi;
        edx += edi;
        edi = r9 + rcx - 0x275e197f;
        ecx = eax;
        edx = rotate_left32 (edx, 9);
        edx += eax;
        ecx ^= edx;
        ecx &= esi;
        ecx ^= eax;
        ecx += edi;
        edi = *((rsp - 0x38));
        r10d = *((rsp - 0x2c));
        ecx = rotate_left32 (ecx, 0xe);
        ecx += edx;
        edi = rdi + rsi - 0x182c0438;
        esi = edx;
        esi ^= ecx;
        esi &= eax;
        esi ^= edx;
        esi += edi;
        edi = r10 + rax + 0x21e1cde6;
        eax = ecx;
        r10d = *((rsp - 0x30));
        esi = rotate_right32 (esi, 0xc);
        esi += ecx;
        eax ^= esi;
        eax &= edx;
        eax ^= ecx;
        eax += edi;
        edi = r12 + rdx - 0x3cc8f82a;
        edx = esi;
        eax = rotate_left32 (eax, 5);
        eax += esi;
        edx ^= eax;
        edx &= ecx;
        edx ^= esi;
        edx += edi;
        edi = *((rsp - 0x3c));
        edx = rotate_left32 (edx, 9);
        edx += eax;
        edi = rdi + rcx - 0xb2af279;
        ecx = eax;
        ecx ^= edx;
        ecx &= esi;
        esi = r10 + rsi + 0x455a14ed;
        r10d = edx;
        ecx ^= eax;
        ecx += edi;
        ecx = rotate_left32 (ecx, 0xe);
        ecx += edx;
        r10d ^= ecx;
        edi = r10d;
        edi &= eax;
        edi ^= edx;
        edi += esi;
        esi = r8 + rax - 0x561c16fb;
        eax = ecx;
        edi = rotate_right32 (edi, 0xc);
        edi += ecx;
        eax ^= edi;
        r10d = rbp + rdi - 0x72d5b376;
        eax &= edx;
        *((rsp - 0x14)) = r10d;
        eax ^= ecx;
        eax += esi;
        esi = *((rsp - 0x40));
        eax = rotate_left32 (eax, 5);
        eax += edi;
        esi = rsi + rdx - 0x3105c08;
        edx = edi;
        edx ^= eax;
        edx &= ecx;
        ecx = r13 + rcx + 0x676f02d9;
        edx ^= edi;
        edx += esi;
        esi = eax;
        edx = rotate_left32 (edx, 9);
        edx += eax;
        esi ^= edx;
        esi &= edi;
        esi ^= eax;
        esi += ecx;
        ecx = edx;
        esi = rotate_left32 (esi, 0xe);
        esi += edx;
        ecx ^= esi;
        r10d = ecx;
        r10d &= eax;
        edi = r10d;
        r10d = *((rsp - 0x34));
        edi ^= edx;
        edi += *((rsp - 0x14));
        edi = rotate_right32 (edi, 0xc);
        eax = r10 + rax - 0x5c6be;
        edi += esi;
        ecx ^= edi;
        ecx += eax;
        eax = *((rsp - 0x30));
        ecx = rotate_left32 (ecx, 4);
        eax = rax + rdx - 0x788e097f;
        edx = esi;
        ecx += edi;
        edx ^= edi;
        edx ^= ecx;
        edx += eax;
        eax = *((rsp - 0x24));
        edx = rotate_left32 (edx, 0xb);
        eax = rax + rsi + 0x6d9d6122;
        esi = edi;
        edx += ecx;
        esi ^= ecx;
        edi = r12 + rdi - 0x21ac7f4;
        esi ^= edx;
        esi += eax;
        eax = ecx;
        esi = rotate_left32 (esi, 0x10);
        eax ^= edx;
        esi += edx;
        eax ^= esi;
        r10d = esi;
        eax += edi;
        edi = *((rsp - 0x44));
        eax = rotate_right32 (eax, 9);
        edi = rdi + rcx - 0x5b4115bc;
        ecx = edx;
        eax += esi;
        ecx ^= esi;
        r10d ^= eax;
        esi = r13 + rsi - 0x944b4a0;
        ecx ^= eax;
        ecx += edi;
        edi = *((rsp - 0x38));
        ecx = rotate_left32 (ecx, 4);
        ecx += eax;
        edx = rdi + rdx + 0x4bdecfa9;
        edi = r10d;
        edi ^= ecx;
        edi += edx;
        edx = eax;
        edi = rotate_left32 (edi, 0xb);
        edx ^= ecx;
        edi += ecx;
        edx ^= edi;
        edx += esi;
        esi = *((rsp - 0x28));
        edx = rotate_left32 (edx, 0x10);
        eax = rsi + rax - 0x41404390;
        esi = ecx;
        edx += edi;
        esi ^= edi;
        esi ^= edx;
        esi += eax;
        eax = r8 + rcx + 0x289b7ec6;
        ecx = edi;
        esi = rotate_right32 (esi, 9);
        ecx ^= edx;
        edi = r14 + rdi - 0x155ed806;
        esi += edx;
        ecx ^= esi;
        r10d = esi;
        ecx += eax;
        eax = edx;
        ecx = rotate_left32 (ecx, 4);
        eax ^= esi;
        ecx += esi;
        eax ^= ecx;
        r10d ^= ecx;
        eax += edi;
        edi = *((rsp - 0x3c));
        eax = rotate_left32 (eax, 0xb);
        eax += ecx;
        edx = rdi + rdx - 0x2b10cf7b;
        edi = r10d;
        edi ^= eax;
        edi += edx;
        edx = *((rsp - 0x1c));
        edi = rotate_left32 (edi, 0x10);
        edx = rdx + rsi + 0x4881d05;
        esi = ecx;
        edi += eax;
        esi ^= eax;
        esi ^= edi;
        esi += edx;
        edx = *((rsp - 0x2c));
        esi = rotate_right32 (esi, 9);
        ecx = rdx + rcx - 0x262b2fc7;
        edx = eax;
        esi += edi;
        edx ^= edi;
        eax = rbp + rax - 0x1924661b;
        r10d = esi;
        edx ^= esi;
        edx += ecx;
        ecx = edi;
        edx = rotate_left32 (edx, 4);
        edx += esi;
        ecx ^= esi;
        ecx ^= edx;
        r10d ^= edx;
        ecx += eax;
        eax = r9 + rdi + 0x1fa27cf8;
        edi = r10d;
        r10d = *((rsp - 0x34));
        ecx = rotate_left32 (ecx, 0xb);
        ecx += edx;
        edi ^= ecx;
        edi += eax;
        eax = *((rsp - 0x40));
        edi = rotate_left32 (edi, 0x10);
        esi = rax + rsi - 0x3b53a99b;
        eax = edx;
        edi += ecx;
        eax ^= ecx;
        eax ^= edi;
        eax += esi;
        esi = r14 + rdx - 0xbd6ddbc;
        edx = ecx;
        r14d = *((rsp - 0x44));
        eax = rotate_right32 (eax, 9);
        edx = ~edx;
        eax += edi;
        edx |= eax;
        edx ^= edi;
        edx += esi;
        esi = r13 + rcx + 0x432aff97;
        r13d = edi;
        edx = rotate_left32 (edx, 6);
        r13d = ~r13d;
        edi = r12 + rdi - 0x546bdc59;
        edx += eax;
        ecx = r13d;
        ecx |= edx;
        r13d = edx;
        ecx ^= eax;
        r13d = ~r13d;
        ecx += esi;
        esi = eax;
        ecx = rotate_left32 (ecx, 0xa);
        esi = ~esi;
        ecx += edx;
        esi |= ecx;
        r12d = ecx;
        esi ^= edx;
        r12d = ~r12d;
        esi += edi;
        edi = r10 + rax - 0x36c5fc7;
        eax = r13d;
        r10d = *((rsp - 0x1c));
        esi = rotate_left32 (esi, 0xf);
        esi += ecx;
        eax |= esi;
        eax ^= ecx;
        eax += edi;
        edi = rbp + rdx + 0x655b59c3;
        edx = r12d;
        ebp = *((rsp - 0x3c));
        eax = rotate_right32 (eax, 0xb);
        eax += esi;
        edx |= eax;
        edx ^= esi;
        edx += edi;
        edi = rbp + rcx - 0x70f3336e;
        edx = rotate_left32 (edx, 6);
        ebp = ~ebp;
        edx += eax;
        ecx = ebp;
        ecx |= edx;
        ecx ^= eax;
        ebp = ~ebp;
        ecx += edi;
        edi = *((rsp - 0x28));
        ecx = rotate_left32 (ecx, 0xa);
        edi = rdi + rsi - 0x100b83;
        esi = eax;
        ecx += edx;
        esi = ~esi;
        esi |= ecx;
        esi ^= edx;
        esi += edi;
        edi = r14 + rax - 0x7a7ba22f;
        eax = ebp;
        r14d = *((rsp - 0x30));
        esi = rotate_left32 (esi, 0xf);
        esi += ecx;
        ebp = ~ebp;
        eax |= esi;
        eax ^= ecx;
        eax += edi;
        edi = r14 + rdx + 0x6fa87e4f;
        edx = ebp;
        eax = rotate_right32 (eax, 0xb);
        ebp = ~ebp;
        r14d = *((rsp - 0x24));
        eax += esi;
        edx |= eax;
        edx ^= esi;
        edx += edi;
        edi = r9 + rcx - 0x1d31920;
        ecx = ebp;
        r9d = *((rsp - 0x38));
        edx = rotate_left32 (edx, 6);
        edx += eax;
        ecx |= edx;
        ecx ^= eax;
        ecx += edi;
        edi = r10 + rsi - 0x5cfebcec;
        esi = eax;
        r10d = *((rsp - 0x2c));
        ecx = rotate_left32 (ecx, 0xa);
        esi = ~esi;
        eax = r8 + rax + 0x4e0811a1;
        r8d = edx;
        ecx += edx;
        r8d = ~r8d;
        esi |= ecx;
        esi ^= edx;
        edx = r9 + rdx - 0x8ac817e;
        r9d = ecx;
        esi += edi;
        edi = r8d;
        r9d = ~r9d;
        esi = rotate_left32 (esi, 0xf);
        esi += ecx;
        edi |= esi;
        edi ^= ecx;
        ecx = r14 + rcx - 0x42c50dcb;
        edi += eax;
        eax = r9d;
        edi = rotate_right32 (edi, 0xb);
        edi += esi;
        eax |= edi;
        eax ^= esi;
        eax += edx;
        edx = esi;
        eax = rotate_left32 (eax, 6);
        edx = ~edx;
        eax += edi;
        edx |= eax;
        edx ^= edi;
        edx += ecx;
        ecx = *((rsp - 0x40));
        edx = rotate_left32 (edx, 0xa);
        esi = rcx + rsi + 0x2ad7d2bb;
        ecx = edi;
        edx += eax;
        ecx = ~ecx;
        edi = r10 + rdi - 0x14792c6f;
        ecx |= edx;
        ecx ^= eax;
        ecx += esi;
        esi = eax;
        ecx = rotate_left32 (ecx, 0xf);
        esi = ~esi;
        ecx += edx;
        esi |= ecx;
        esi ^= edx;
        esi += edi;
        esi = rotate_right32 (esi, 0xb);
        esi += ecx;
        r15d += ecx;
        r11d += esi;
    } while (*((rsp - 0x10)) > rbx);
    r10d = r15d;
label_0:
    rax = *((rsp - 8));
    ebx = *((rsp - 0x18));
    *(rax) = ebx;
    ebx = *((rsp - 0x20));
    *((rax + 4)) = r11d;
    *((rax + 8)) = r10d;
    *((rax + 0xc)) = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40b250 */
#include <stdint.h>
 
int64_t fcn_0040b250 (int64_t arg1, char * * arg2, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
label_0:
    edx = *(rdi);
    rax = rsi;
    *(rsi) = edx;
    edx = *((rdi + 4));
    *((rsi + 4)) = edx;
    edx = *((rdi + 8));
    *((rsi + 8)) = edx;
    edx = *((rdi + 0xc));
    *((rsi + 0xc)) = edx;
    return rax;
    eax = *((rdi + 0x18));
    rbx = rdi;
    edx = *((rbx + 0x14));
    esi = eax;
    r8 -= r8;
    r8 &= 0xffffffffffffffc0;
    r8 -= 0xffffffffffffff80;
    rcx -= rcx;
    rcx &= 0xfffffffffffffff0;
    rcx += 0x1f;
    rdi -= rdi;
    rdi &= 0xfffffffffffffff0;
    rdi += 0x1e;
    esi += *((rbx + 0x10));
    *((rbx + 0x10)) = esi;
    if (esi < 0) {
        edx++;
        *((rbx + 0x14)) = edx;
    }
    r9d = rsi*8;
    edx <<= 3;
    esi >>= 0x1d;
    *((rbx + rdi*4 + 0x1c)) = r9d;
    rdi = r8;
    edx |= esi;
    r9 = rbx + 0x1c;
    rdi -= rax;
    *((rbx + rcx*4 + 0x1c)) = edx;
    rdx = r9 + rax;
    rcx = rdi - 8;
    if (rcx < 8) {
        if ((cl & 4) != 0) {
            goto label_1;
        }
        if (rcx == 0) {
            goto label_2;
        }
        eax = *(0x00416ae0);
        *(rdx) = al;
        if ((cl & 2) == 0) {
            goto label_2;
        }
        eax = *((rcx + 0x416ade));
        *((rdx + rcx - 2)) = ax;
        goto label_2;
    }
    rax = *(0x00416ae0);
    rdi = rdx + 8;
    esi = 0x416ae0;
    rdi &= 0xfffffffffffffff8;
    *(rdx) = rax;
    rax = *((rcx + 0x416ad8));
    *((rdx + rcx - 8)) = rax;
    rdx -= rdi;
    rcx += rdx;
    rsi -= rdx;
    rcx >>= 3;
    do {
        *(rdi) = *(rsi);
        rcx--;
        rsi += 8;
        rdi += 8;
    } while (rcx != 0);
    do {
label_2:
        fcn_0040aae0 (r9, r8, rbx);
        rsi = rbp;
        rdi = rbx;
        goto label_0;
label_1:
        eax = *(0x00416ae0);
        *(rdx) = eax;
        eax = *((rcx + 0x416adc));
        *((rdx + rcx - 4)) = eax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40b360 */
#include <stdint.h>
 
uint64_t fcn_0040b360 (char * arg1, int64_t arg3, size_t n) {
    rdi = arg1;
    rdx = arg3;
    rsi = n;
    r13 = rsi;
    r12 = rdx;
    rbx = rdi;
    eax = *((rdx + 0x18));
    if (eax != 0) {
        goto label_4;
    }
label_0:
    if (r13 <= 0x3f) {
        goto label_5;
    }
    if ((bl & 3) == 0) {
        goto label_6;
    }
    rbp = r12 + 0x1c;
    if (r13 == 0x40) {
        goto label_7;
    }
    rax = r13 - 0x41;
    rax >>= 6;
    r14 = rax + 1;
    r15 = rax;
    r14 <<= 6;
    r14 += rbx;
    do {
        __asm ("movdqu xmm0, xmmword [rbx]");
        rbx += 0x40;
        __asm ("movups xmmword [rbp], xmm0");
        __asm ("movdqu xmm1, xmmword [rbx - 0x30]");
        __asm ("movups xmmword [rbp + 0x10], xmm1");
        __asm ("movdqu xmm2, xmmword [rbx - 0x20]");
        __asm ("movups xmmword [rbp + 0x20], xmm2");
        __asm ("movdqu xmm3, xmmword [rbx - 0x10]");
        __asm ("movups xmmword [rbp + 0x30], xmm3");
        fcn_0040aae0 (rbp, 0x40, r12);
    } while (rbx != r14);
    rax = r15;
    rax = -rax;
    rax <<= 6;
    r13 = r13 + rax - 0x40;
label_3:
    ecx = *((r12 + 0x18));
    eax = r13d;
    rsi = rbp + rcx;
    if (r13d >= 8) {
        goto label_8;
    }
    if ((r13b & 4) != 0) {
        goto label_9;
    }
    if (r13d == 0) {
        goto label_1;
    }
    edx = *(r14);
    *(rsi) = dl;
    if ((al & 2) != 0) {
        goto label_10;
    }
    do {
label_1:
        r13 += rcx;
        if (r13 > 0x3f) {
            r13 -= 0x40;
            fcn_0040aae0 (rbp, 0x40, r12);
            memcpy (rbp, r12 + 0x5c, r13);
        }
        *((r12 + 0x18)) = r13d;
        return rax;
label_6:
        r13d &= 0x3f;
        rbp &= 0xffffffffffffffc0;
        rbx += rbp;
        eax = fcn_0040aae0 (rbx, rbp, r12);
label_5:
        if (r13 != 0) {
            goto label_11;
        }
        return rax;
label_4:
        edx = 0x80;
        r15 = r12 + 0x1c;
        rdx -= rbp;
        rdi = r15 + rbp;
        if (rdx > rsi) {
            rdx = rsi;
        }
        r14 = rdx;
        memcpy (rdi, rbx, rdx);
        esi = *((r12 + 0x18));
        esi += r14d;
        *((r12 + 0x18)) = esi;
        if (esi > 0x40) {
            goto label_12;
        }
label_2:
        rbx += r14;
        r13 -= r14;
        goto label_0;
label_8:
        rax = *(r14);
        edx = r13d;
        rdi = rsi + 8;
        rdi &= 0xfffffffffffffff8;
        *(rsi) = rax;
        rax = *((r14 + rdx - 8));
        *((rsi + rdx - 8)) = rax;
        rax = rsi;
        rax -= rdi;
        r14 -= rax;
        eax += r13d;
        eax &= 0xfffffff8;
    } while (eax < 8);
    eax &= 0xfffffff8;
    edx = 0;
    do {
        esi = edx;
        edx += 8;
        r8 = *((r14 + rsi));
        *((rdi + rsi)) = r8;
    } while (edx < eax);
    goto label_1;
label_12:
    esi &= 0xffffffc0;
    fcn_0040aae0 (r15, rsi, r12);
    ecx = *((r12 + 0x18));
    rax = rbp + r14;
    rax &= 0xffffffffffffffc0;
    edx = ecx;
    rax += r15;
    edx &= 0x3f;
    *((r12 + 0x18)) = edx;
    if (edx >= 8) {
        goto label_13;
    }
    if ((cl & 4) != 0) {
        goto label_14;
    }
    if (edx == 0) {
        goto label_2;
    }
    esi = *(rax);
    ecx &= 2;
    *((r12 + 0x1c)) = sil;
    if (ecx == 0) {
        goto label_2;
    }
    eax = *((rax + rdx - 2));
    *((r15 + rdx - 2)) = ax;
    goto label_2;
label_13:
    rcx = *(rax);
    *((r12 + 0x1c)) = rcx;
    ecx = edx;
    rsi = *((rax + rcx - 8));
    *((r15 + rcx - 8)) = rsi;
    rsi = r12 + 0x24;
    rsi &= 0xfffffffffffffff8;
    r15 -= rsi;
    rax -= r15;
    r15d += edx;
    r15d &= 0xfffffff8;
    if (r15d < 8) {
        goto label_2;
    }
    r15d &= 0xfffffff8;
    edx = 0;
    do {
        ecx = edx;
        edx += 8;
        rdi = *((rax + rcx));
        *((rsi + rcx)) = rdi;
    } while (edx < r15d);
    goto label_2;
label_14:
    ecx = *(rax);
    *((r12 + 0x1c)) = ecx;
    eax = *((rax + rdx - 4));
    *((r15 + rdx - 4)) = eax;
    goto label_2;
label_7:
    r14 = rbx;
    goto label_3;
label_9:
    edx = *(r14);
    *(rsi) = edx;
    edx = r13d;
    eax = *((r14 + rdx - 4));
    *((rsi + rdx - 4)) = eax;
    goto label_1;
label_10:
    edx = r13d;
    eax = *((r14 + rdx - 2));
    *((rsi + rdx - 2)) = ax;
    goto label_1;
label_11:
    rbp = r12 + 0x1c;
    r14 = rbx;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40b800 */
#include <stdint.h>
 
uint32_t fcn_0040b800 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rdi != 0) {
        ebx = esi;
        eax = fileno (rdi);
        ecx = ebx;
        edx = 0;
        esi = 0;
        edi = eax;
invalid_funccall(); //        void (*0x402af0)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40b830 */
#include <stdint.h>
 
int64_t fcn_0040b830 (int64_t arg1) {
    rdi = arg1;
    rsi = *(rdi);
    edx = *(rsi);
    if (dl == 0) {
        goto label_3;
    }
    ecx = 0;
    eax = 0;
    r9d = 0;
    r11d = 1;
    r10 = 0x3ffffff03ffffff;
    while (cl != 0) {
        ecx = (int32_t) dl;
        ecx -= 0x41;
        if (ecx <= 0x39) {
            r8 = r11;
            r8 <<= cl;
            ecx = 0;
            if ((r8 & r10) != 0) {
                goto label_0;
            }
        }
        ecx = 0;
        if (dl != 0x7e) {
            rax = r9;
        }
label_0:
        rsi++;
        *(rdi) = rsi;
        edx = *(rsi);
        if (dl == 0) {
            goto label_4;
        }
INVALID_JUMP;
    }
    if (dl == 0x2e) {
        goto label_5;
    }
    if (dl > 0x5a) {
        goto label_6;
    }
    if (dl >= 0x41) {
        goto label_0;
    }
    r8d = rdx - 0x30;
    if (r8b <= 9) {
        goto label_0;
    }
label_2:
    if (dl != 0x7e) {
        rax = r9;
    }
    rsi++;
    *(rdi) = rsi;
    edx = *(rsi);
    if (dl != 0) {
        goto label_1;
    }
label_4:
    return rax;
label_6:
    r8d = rdx - 0x61;
    if (r8b > 0x19) {
        goto label_2;
    }
    goto label_0;
label_5:
    ecx = 1;
    if (rax == 0) {
        rax = rsi;
    }
    goto label_0;
label_3:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40b900 */
#include <stdint.h>
 
uint64_t fcn_0040b900 (int64_t arg1, int64_t arg2) {
    uint32_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    eax = strcmp (rdi, rsi);
    r12d = eax;
    if (eax == 0) {
        goto label_4;
    }
    r8d = *(rbx);
    if (r8b == 0) {
        goto label_7;
    }
    r9d = *(rbp);
    if (r9b == 0) {
        goto label_11;
    }
    edx = 0x416b21;
    ecx = 2;
    rdi = rbx;
    rsi = rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (r9b > 0) ? 1 : 0;
    if (al == 0) {
        goto label_7;
    }
    ecx = 2;
    rsi = rdx;
    rdi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_11;
    }
    edx = 0x416b20;
    ecx = 3;
    rdi = rbx;
    rsi = rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_7;
    }
    ecx = 3;
    rsi = rdx;
    rdi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_11;
    }
    dl = (r8b == 0x2e) ? 1 : 0;
    if (r9b != 0x2e) {
        if (dl != 0) {
            goto label_7;
        }
    }
    al = (r9b == 0x2e) ? 1 : 0;
    if (r8b == 0x2e) {
        goto label_16;
    }
    if (al != 0) {
        goto label_11;
    }
label_6:
    *((rsp + 0x10)) = rbx;
    *((rsp + 0x18)) = rbp;
    rax = fcn_0040b830 (rsp + 0x10);
    r13 = rax;
    rax = fcn_0040b830 (rsp + 0x18);
    if (r13 == 0) {
        goto label_17;
    }
    r13 -= rbx;
    if (rax == 0) {
        goto label_18;
    }
label_9:
    rax -= rbp;
    r14 = rax;
label_15:
    if (r13 == r14) {
        goto label_19;
    }
label_10:
    esi = 0;
    edx = 0;
    r8d = 1;
    r15 = 0x3ffffff03ffffff;
label_3:
    if (r13 <= rdx) {
        if (r14 <= rsi) {
            goto label_4;
        }
    }
    r9 = rsi;
    r9 -= rdx;
    if (r13 <= rdx) {
        goto label_20;
    }
    do {
        eax = *((rbx + rdx));
        ecx = (int32_t) al;
        ecx -= 0x30;
        if (ecx <= 9) {
            goto label_20;
        }
        r10d = (int32_t) al;
        ecx = r10 - 0x30;
        if (ecx <= 9) {
            goto label_21;
        }
        ecx = r10d;
label_0:
        ecx -= 0x41;
        if (ecx <= 0x39) {
            rdi = r8;
            rdi <<= cl;
            if ((rdi & r15) != 0) {
                goto label_22;
            }
        }
        if (al == 0x7e) {
            goto label_23;
        }
        r10d += 0x100;
label_14:
        rax = rdx + r9;
        if (r14 == rax) {
            goto label_24;
        }
label_8:
        edi = *((rbp + rsi));
        eax = (int32_t) dil;
        ecx = rax - 0x30;
        if (ecx > 9) {
            goto label_25;
        }
        eax = 0;
label_2:
        if (eax != r10d) {
            goto label_26;
        }
label_1:
        rdx++;
        rsi++;
    } while (r13 > rdx);
label_20:
    edi = *((rbp + rsi));
    ecx = (int32_t) dil;
    if (r14 <= rsi) {
        goto label_27;
    }
    eax = (int32_t) dil;
    eax -= 0x30;
    if (eax <= 9) {
        goto label_27;
    }
    if (r13 == rdx) {
        goto label_5;
    }
    ecx = *((rbx + rdx));
    r11d = rcx - 0x30;
    eax = ecx;
    r10d = ecx;
    if (r11d > 9) {
        goto label_0;
    }
label_5:
    eax = (int32_t) dil;
    r10d = 0;
    ecx = rax - 0x30;
    if (ecx <= 9) {
        goto label_1;
    }
label_25:
    ecx = (int32_t) dil;
    ecx -= 0x41;
    if (ecx > 0x39) {
        goto label_28;
    }
    r11 = r8;
    r11 <<= cl;
    if ((r11 & r15) != 0) {
        goto label_2;
    }
label_28:
    if (dil == 0x7e) {
        goto label_29;
    }
    eax += 0x100;
    goto label_2;
    do {
        rdx++;
label_27:
        eax = *((rbx + rdx));
    } while (al == 0x30);
    if (dil != 0x30) {
        goto label_30;
    }
    do {
        rsi++;
        ecx = *((rbp + rsi));
    } while (cl == 0x30);
label_30:
    edi = rax - 0x30;
    r9d = rcx - 0x30;
    if (edi <= 9) {
        if (r9d <= 9) {
            goto label_31;
        }
label_11:
        r12d = 1;
label_4:
        eax = r12d;
        return rax;
    }
    if (r9d > 9) {
        goto label_3;
    }
label_7:
    r12d = 0xffffffff;
    goto label_4;
label_21:
    if (r14 == rsi) {
        goto label_1;
    }
    edi = *((rbp + rsi));
    goto label_5;
label_16:
    if (al == 0) {
        goto label_6;
    }
    if (dl == 0) {
        goto label_6;
    }
    rbx++;
    rbp++;
    goto label_6;
label_31:
    r10 = rsi;
    rdi = rdx;
    r9d = 0;
    r10 -= rdx;
    r10 += rbp;
label_12:
    eax -= ecx;
    if (r9d == 0) {
        r9d = eax;
    }
    rdi++;
    rax = rdi;
    ecx = *((r10 + rdi));
    rax -= rdx;
    rax += rsi;
    r11d = rcx - 0x30;
    *((rsp + 8)) = rax;
    eax = *((rbx + rdi));
    *((rsp + 4)) = r11d;
    r11d = rax - 0x30;
    if (r11d <= 9) {
        goto label_32;
    }
    if (*((rsp + 4)) <= 9) {
        goto label_7;
    }
    if (r9d != 0) {
        goto label_33;
    }
    rsi = *((rsp + 8));
    rdx = rdi;
    goto label_3;
label_22:
    rcx = rdx + r9;
    eax = 0;
    if (r14 != rcx) {
        goto label_8;
    }
    goto label_2;
label_17:
    r13 = *((rsp + 0x10));
    r13 -= rbx;
    if (rax != 0) {
        goto label_9;
    }
label_13:
    r14 = *((rsp + 0x18));
    r14 -= rbp;
    goto label_10;
label_32:
    if (*((rsp + 4)) > 9) {
        goto label_11;
    }
    goto label_12;
label_19:
    eax = strncmp (rbx, rbp, r13);
    if (eax != 0) {
        goto label_10;
    }
    r13 = *((rsp + 0x10));
    r13 -= rbx;
    goto label_13;
label_24:
    r12d = r10d;
    goto label_4;
label_23:
    r10d = 0xffffffff;
    goto label_14;
label_29:
    eax = 0xffffffff;
    goto label_2;
label_26:
    r10d -= eax;
    r12d = r10d;
    goto label_4;
label_33:
    r12d = r9d;
    goto label_4;
label_18:
    r14 = *((rsp + 0x18));
    r14 -= rbp;
    goto label_15;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40bd10 */
#include <stdint.h>
 
uint64_t fcn_0040bd10 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x416a04;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40bd70 */
#include <stdint.h>
 
int64_t fcn_0040bd70 (uint32_t arg1, int64_t arg3) {
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
    rdx_rax = rax * r9;
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
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40be30 */
#include <stdint.h>
 
uint64_t fcn_0040be30 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        /* [13] -r-x section size 69720 named .text */
        abort ();
        rbx = rdi;
        rdi = rsi;
        rsi = *((rbx + 0x10));
invalid_funccall(); //        rax = uint64_t (*rbx + 0x30)(uint64_t) (rbx);
    } while (*((rbx + 0x10)) <= rax);
    rax <<= 4;
    rax += *(rbx);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40be60 */
#include <stdint.h>
 
uint64_t fcn_0040be60 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_0040be30 (rdi, rsi);
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
invalid_funccall(); //    al = uint64_t (*r12 + 0x38)() ();
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
invalid_funccall(); //        al = uint64_t (*r12 + 0x38)() ();
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
INVALID_JUMP;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40bf80 */
#include <stdint.h>
 
int64_t fcn_0040bf80 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x416ba0) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x00416bb4]");
        if (rax > 0x416ba0) {
            xmm1 = *(0x00416bb8);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x416ba0) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x00416bbc]");
            if (rax <= 0x416ba0) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x00416bc0]");
            if (rax < 0x416ba0) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x00416bb4]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x416ba0) {
                goto label_0;
            }
            xmm3 = *(0x00416bc4);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x416ba0) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x416ba0) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x416ba0;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40c000 */
#include <stdint.h>
 
uint64_t fcn_0040c000 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
        rax = fcn_0040be30 (rbp, r15);
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
    rax = fcn_0040be30 (rbp, r15);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40c600 */
#include <stdint.h>
 
uint64_t fcn_0040c600 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x40be10;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x40be20;
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
    al = fcn_0040bf80 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_0040bd70 (rbp, rsi);
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
        *((rax + 0x28)) = 0x416ba0;
        al = fcn_0040bf80 (rdi);
        xmm1 = *(0x00416bc8);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x00416bcc]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x00416bd0]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x00416bd0]");
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40c920 */
#include <stdint.h>
 
uint64_t fcn_0040c920 (int64_t arg1, uint32_t arg2) {
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
            __asm ("comiss xmm0, dword [0x00416bcc]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x00416bd0]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x00416bd0]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_0040bd70 (rsi, rsi);
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
        eax = fcn_0040c000 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_0040c000 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_0040c000 (rbp, rsp, 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40cb20 */
#include <stdint.h>
 
uint64_t fcn_0040cb20 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    rax = fcn_0040be60 (rdi, rsi, rsp + 8, 0);
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
    fcn_0040bf80 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x00416bcc]");
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
    __asm ("comiss xmm0, dword [0x00416bd0]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_0040c920 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_0040be60 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x00416bd0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40cda0 */
#include <stdint.h>
 
uint64_t fcn_0040cda0 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_0040cb20 (rdi, rsi, rsp + 8);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40cde0 */
#include <stdint.h>
 
uint64_t fcn_0040cde0 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040be60 (rdi, rsi, rsp + 8, 1);
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
    fcn_0040bf80 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x00416bd0]");
    if (*((rdx + 0x10)) >= 0) {
        goto label_10;
    }
    __asm ("cvttss2si rsi, xmm0");
label_5:
    al = fcn_0040c920 (rbx, rsi);
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
    __asm ("subss xmm0, dword [0x00416bd0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40cfd0 */
#include <stdint.h>
 
uint64_t fcn_0040cfd0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_00411210 (0x20);
    rbx = rax;
    if (rbp != 0) {
        rax = rbp;
        rdi = rbp;
        rax >>= 0x3d;
        al = (rax != 0) ? 1 : 0;
        rdi <<= 3;
        eax = (int32_t) al;
        if (rdi >= 0) {
            if (rax == 0) {
                goto label_0;
            }
        }
        fcn_00411460 ();
    }
label_0:
    fcn_00411210 (8);
    *((rbx + 8)) = rbp;
    *(rax) = 0;
    *(rbx) = rax;
    eax = 0x40cfc0;
    if (r12 == 0) {
        r12 = rax;
    }
    *((rbx + 0x10)) = 0;
    rax = rbx;
    *((rbx + 0x18)) = r12;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d070 */
#include <stdint.h>
 
int64_t fcn_0040d070 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rsi;
    rdx = *((rdi + 8));
    rbx = *((rdi + 0x10));
    rax = *(rdi);
    rcx = rdx - 1;
    if (rcx <= rbx) {
        goto label_2;
    }
label_0:
    rbx++;
    *((rbp + 0x10)) = rbx;
    *((rax + rbx*8)) = r12;
    r13 = *((rbp + 0x18));
    rbp = *(rbp);
    r15 = *((rbp + rbx*8));
    if (rbx != 1) {
        goto label_3;
    }
    goto label_4;
    do {
        rax = *(r12);
        rbx = r14;
        *(rdx) = rax;
        if (r14 == 1) {
            goto label_4;
        }
label_3:
        r14 = rbx;
        rsi = r15;
        r14 >>= 1;
        r12 = rbp + r14*8;
        rdi = *(r12);
invalid_funccall(); //        eax = void (*r13)() ();
        rdx = rbp + rbx*8;
    } while (eax <= 0);
    do {
        *(rdx) = r15;
        eax = 0;
        return rax;
label_4:
        rdx = rbp + 8;
    } while (1);
label_2:
    if (rax == 0) {
        goto label_5;
    }
    rcx = 0xaaaaaaaaaaaaaa9;
    if (rdx > rcx) {
        goto label_6;
    }
    rcx = rdx;
    rcx >>= 1;
    rdx = rdx + rcx + 1;
    do {
label_1:
        *((rbp + 8)) = rdx;
        rax = fcn_00411270 (rax, rdx*8);
        rbx = *((rbp + 0x10));
        *(rbp) = rax;
        goto label_0;
label_5:
        if (rdx == 0) {
            goto label_7;
        }
        rdi = rdx;
        ecx = 0;
        rsi = rdx;
        rdi >>= 0x3d;
        cl = (rdi != 0) ? 1 : 0;
        rsi <<= 3;
        if (rsi < 0) {
            goto label_6;
        }
    } while (rcx == 0);
label_6:
    fcn_00411460 ();
label_7:
    esi = 0x80;
    edx = 0x10;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d190 */
#include <stdint.h>
 
int64_t fcn_0040d190 (int64_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_28h;
    rdi = arg1;
    rax = *((rdi + 0x10));
    *((rsp + 8)) = 0;
    if (rax == 0) {
        goto label_1;
    }
    rdx = *(rdi);
    rbp = rax - 1;
    rax = *((rdx + rax*8));
    rcx = *((rdx + 8));
    *((rdi + 0x10)) = rbp;
    *((rdx + 8)) = rax;
    r15 = *(rdi);
    *((rsp + 8)) = rcx;
    r13 = *((rdi + 0x18));
    rax = *((r15 + 8));
    *((rsp + 0x10)) = rax;
    rax = rbp;
    rax >>= 1;
    *((rsp + 0x28)) = rax;
    if (rax == 0) {
        goto label_2;
    }
    r14d = 1;
    while (rbp <= r12) {
        rbx = r14;
        rbx <<= 4;
        rbx += r15;
label_0:
        rsi = *((rsp + 0x10));
        rdi = *(rbx);
invalid_funccall(); //        eax = void (*r13)() ();
        rdx = r15 + r14*8;
        if (eax <= 0) {
            goto label_3;
        }
        rax = *(rbx);
        r14 = r12;
        *(rdx) = rax;
        if (r12 > *((rsp + 0x28))) {
            goto label_4;
        }
        r12 = r14 + r14;
    }
    rbx = r14;
    r9 = r12 + 1;
    rbx <<= 4;
    r10 = r15 + r9*8;
    rbx += r15;
    rsi = *(r10);
    rdi = *(rbx);
invalid_funccall(); //    eax = void (*r13)(uint64_t) (r9);
    r10 = *((rsp + 0x18));
    r9 = *((rsp + 0x20));
    __asm ("cmovs rbx, r10");
    __asm ("cmovs r12, r9");
    goto label_0;
label_2:
    rdx = r15 + 8;
label_3:
    rax = *((rsp + 0x10));
    *(rdx) = rax;
    do {
label_1:
        rax = *((rsp + 8));
        return rax;
label_4:
        rax = *((rsp + 0x10));
        rdx = rbx;
        *(rdx) = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d2b0 */
#include <stdint.h>
 
int64_t fcn_0040d2b0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rsi + 0xb;
    *((rsi + 0xb)) = 0;
    r9d = 0x66666667;
    esi = 0xcccccccd;
    r8d = 0x30;
    if (edi < 0) {
        goto label_0;
    }
    do {
        eax = edi;
        rcx--;
        edx_eax = eax * esi;
        edx >>= 3;
        eax = rdx * 5;
        eax += eax;
        edi -= eax;
        edi += 0x30;
        *(rcx) = dil;
        edi = edx;
    } while (edx != 0);
    rax = rcx;
    return rax;
    do {
        rcx = rsi;
label_0:
        eax = edi;
        rsi = rcx - 1;
        edx_eax = eax * r9d;
        eax = edi;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        eax = r8 + rax*2;
        eax -= edi;
        edi = edx;
        *((rcx - 1)) = al;
    } while (edx != 0);
    rcx -= 2;
    *((rsi - 1)) = 0x2d;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d330 */
#include <stdint.h>
 
int64_t fcn_0040d330 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rsi + 0xa;
    *((rsi + 0xa)) = 0;
    esi = 0xcccccccd;
    while (edi > 9) {
        edi = edx;
        eax = edx;
        r8d = edi;
        rcx--;
        edx_eax = eax * esi;
        edx >>= 3;
        eax = rdx * 5;
        eax += eax;
        r8d -= eax;
        eax = r8d;
        eax += 0x30;
        *(rcx) = al;
    }
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d370 */
#include <stdint.h>
 
int64_t fcn_0040d370 (void * arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d3c0 */
#include <stdint.h>
 
uint64_t fcn_0040d3c0 (int64_t arg1, int64_t arg3) {
    wint_t wc;
    mbstate_t * ps;
    rdi = arg1;
    rdx = arg3;
    r15d = edx;
    r13 = rdi + rsi;
    rbx = rdi;
    rax = ctype_get_mb_cur_max ();
    if (rax <= 1) {
        goto label_7;
    }
    r12d = 0;
    if (rbx >= r13) {
        goto label_5;
    }
    r14d = 1;
    while (al <= 0x3f) {
        if (al < 0x25) {
            eax -= 0x20;
            if (al > 3) {
                goto label_8;
            }
        }
label_0:
        rbx++;
        r12d++;
label_1:
        if (rbx >= r13) {
            goto label_5;
        }
        eax = *(rbx);
    }
    if (al < 0x41) {
        goto label_8;
    }
    if (al <= 0x5f) {
        goto label_0;
    }
    eax -= 0x61;
    if (al <= 0x1d) {
        goto label_0;
    }
label_8:
    *((rsp + 8)) = 0;
    goto label_9;
label_2:
    edx = 0x7fffffff;
    edx -= r12d;
    if (edx < eax) {
        goto label_10;
    }
    r12d += eax;
label_3:
    rbx += rbp;
    eax = mbsinit (rsp + 8);
    if (eax != 0) {
        goto label_1;
    }
label_9:
    rdx -= rbx;
    rax = fcn_00412fb0 (rsp + 4, rbx, r13, rsp + 8);
    if (rax == -1) {
        goto label_11;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_12;
    }
    edi = *((rsp + 4));
    if (rax == 0) {
    }
    eax = wcwidth ();
    if (eax >= 0) {
        goto label_2;
    }
    if ((r15b & 2) != 0) {
        goto label_4;
    }
    eax = iswcntrl (*((rsp + 4)));
    if (eax != 0) {
        goto label_3;
    }
    if (r12d == 0x7fffffff) {
        goto label_10;
    }
    r12d++;
    goto label_3;
label_11:
    if ((r15b & 1) == 0) {
        goto label_0;
    }
label_4:
    r12d = 0xffffffff;
    do {
label_5:
        eax = r12d;
        return rax;
label_7:
        r12d = 0;
    } while (rbx >= r13);
    rax = ctype_b_loc ();
    r12d = 0;
    r15d &= 2;
    rdx = *(rax);
label_6:
    rbx++;
    eax = *((rbx - 1));
    eax = *((rdx + rax*2));
    if ((ah & 0x40) != 0) {
        goto label_13;
    }
    if (r15d != 0) {
        goto label_4;
    }
    if ((al & 2) != 0) {
        goto label_14;
    }
label_13:
    if (r12d == 0x7fffffff) {
        goto label_5;
    }
    r12d++;
label_14:
    if (r13 != rbx) {
        goto label_6;
    }
    goto label_5;
label_12:
    if ((r15b & 1) != 0) {
        goto label_4;
    }
    r12d++;
    rbx = r13;
    goto label_1;
label_10:
    r12d = 0x7fffffff;
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d5b0 */
#include <stdint.h>
 
uint64_t fcn_0040d5b0 (void) {
    edi = 0;
    esi = 0x80;
    rdx = rsp;
    eax = sched_getaffinity ();
    while (rax == 0) {
        eax = 0;
        return eax;
        rsi = rsp;
        edi = 0x80;
        rax = sched_cpucount ();
        rax = (int64_t) eax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d600 */
#include <stdint.h>
 
int32_t fcn_0040d600 (int64_t arg1) {
    char * * endptr;
    rdi = arg1;
    ecx = *(rdi);
    if (cl == 0) {
        goto label_0;
    }
    eax = (int32_t) cl;
    if (eax > 0x20) {
        goto label_1;
    }
    rdx = 0x100003e00;
    esi = 1;
    if (((rdx >> rcx) & 1) >= 0) {
        goto label_1;
    }
    do {
        rdi++;
        ecx = *(rdi);
        if (cl == 0) {
            goto label_0;
        }
        eax = (int32_t) cl;
        if (eax > 0x20) {
            goto label_1;
        }
        r9 = rsi;
        r9 <<= cl;
    } while ((r9 & rdx) != 0);
label_1:
    edx = rax - 0x30;
    eax = 0;
    if (edx > 9) {
        goto label_2;
    }
    *((rsp + 8)) = 0;
    eax = strtoul (rdi, rsp + 8, 0xa);
    rdx = *((rsp + 8));
    if (rdx == 0) {
        goto label_3;
    }
    ecx = *(rdx);
    if (cl == 0) {
        goto label_4;
    }
    esi = (int32_t) cl;
    if (esi > 0x20) {
        goto label_5;
    }
    rsi = 0x100003e00;
    if (((rsi >> rcx) & 1) >= 0) {
        goto label_5;
    }
    rdx++;
    r8d = 1;
    do {
        *((rsp + 8)) = rdx;
        ecx = *(rdx);
        if (cl == 0) {
            goto label_4;
        }
        edi = (int32_t) cl;
        if (edi > 0x20) {
            goto label_5;
        }
        rdi = r8;
        rdx++;
        rdi <<= cl;
    } while ((rdi & rsi) != 0);
label_5:
    if (cl != 0x2c) {
label_3:
        eax = 0;
    }
label_4:
    return eax;
label_2:
    return eax;
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d6f0 */
#include <stdint.h>
 
uint64_t fcn_0040d6f0 (uint32_t arg1) {
    rdi = arg1;
    if (edi == 2) {
        goto label_3;
    }
    if (edi == 1) {
        goto label_4;
    }
    edi = 0x53;
    rax = sysconf ();
    if (rax == 1) {
        goto label_5;
    }
label_1:
    edx = 1;
    rax = rdx;
    while (rdx <= 0) {
label_0:
        return rax;
label_3:
        rax = getenv (0x416bd4);
        if (rax == 0) {
            goto label_6;
        }
        rax = fcn_0040d600 (rax);
        rbx = rax;
        rax = getenv ("OMP_THREAD_LIMIT");
        if (rax != 0) {
            rax = fcn_0040d600 (rax);
            rax = 0xffffffffffffffff;
            if (rax != 0) {
                goto label_7;
            }
        }
label_7:
        if (rbx != 0) {
            goto label_8;
        }
label_2:
        rax = fcn_0040d5b0 ();
        if (rax != 0) {
            if (rax > rbp) {
                rax = rbp;
            }
            return rax;
        }
        edi = 0x54;
        rax = sysconf ();
        rdx = rax;
        eax = 1;
    }
    rax = rbp;
    if (rdx <= rbp) {
        rax = rdx;
    }
    goto label_0;
label_5:
    rax = fcn_0040d5b0 ();
    rdx = rax;
    eax = 1;
    if (rdx == 0) {
        goto label_0;
    }
    rax = rdx;
    goto label_1;
label_8:
    rax = rbx;
    if (rbp <= rbx) {
        rax = rbp;
    }
    return rax;
label_6:
    rax = getenv ("OMP_THREAD_LIMIT");
    if (rax == 0) {
        goto label_4;
    }
    rax = fcn_0040d600 (rax);
    if (rax != 0) {
        goto label_2;
    }
label_4:
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d840 */
#include <stdint.h>
 
uint64_t fcn_0040d840 (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_30h;
    int64_t var_78h;
    edi = 0x55;
    rax = sysconf ();
    xmm0 = 0;
    edi = 0x1e;
    __asm ("cvtsi2sd xmm0, rax");
    *((rsp + 8)) = xmm0;
    rax = sysconf ();
    xmm0 = *((rsp + 8));
    xmm2 = 0;
    __asm ("comisd xmm0, xmm2");
    if (unknown >= unknown) {
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
        __asm ("comisd xmm1, xmm2");
        if (unknown >= unknown) {
            goto label_0;
        }
    }
    rdi = rsp + 0x10;
    eax = sysinfo ();
    xmm0 = *(0x00416bf8);
    if (eax != 0) {
        return rax;
    }
    rax = *((rsp + 0x30));
    if (rax < 0) {
        goto label_1;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rax");
    do {
        eax = *((rsp + 0x78));
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
label_0:
        __asm ("mulsd xmm0, xmm1");
        return rax;
label_1:
        rdx = rax;
        eax &= 1;
        xmm0 = 0;
        rdx >>= 1;
        rdx |= rax;
        __asm ("cvtsi2sd xmm0, rdx");
        __asm ("addsd xmm0, xmm0");
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40d900 */
#include <stdint.h>
 
uint64_t fcn_0040d900 (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_38h;
    int64_t var_48h;
    int64_t var_78h;
    edi = 0x56;
    rax = sysconf ();
    xmm0 = 0;
    edi = 0x1e;
    __asm ("cvtsi2sd xmm0, rax");
    *((rsp + 8)) = xmm0;
    rax = sysconf ();
    xmm0 = *((rsp + 8));
    xmm2 = 0;
    __asm ("comisd xmm0, xmm2");
    if (unknown >= unknown) {
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
        __asm ("comisd xmm1, xmm2");
        if (unknown >= unknown) {
            goto label_1;
        }
    }
    rdi = rsp + 0x10;
    eax = sysinfo ();
    if (eax != 0) {
        goto label_2;
    }
    rax = *((rsp + 0x38));
    if (rax < 0) {
        goto label_3;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rax");
    rax = *((rsp + 0x48));
    if (rax < 0) {
        goto label_4;
    }
    do {
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
label_0:
        eax = *((rsp + 0x78));
        __asm ("addsd xmm0, xmm1");
        xmm1 = 0;
        __asm ("cvtsi2sd xmm1, rax");
label_1:
        __asm ("mulsd xmm0, xmm1");
        return rax;
label_2:
        rax = fcn_0040d840 ();
        __asm ("mulsd xmm0, qword [0x00416a30]");
        return rax;
label_3:
        rdx = rax;
        eax &= 1;
        xmm0 = 0;
        rdx >>= 1;
        rdx |= rax;
        rax = *((rsp + 0x48));
        __asm ("cvtsi2sd xmm0, rdx");
        __asm ("addsd xmm0, xmm0");
    } while (rax >= 0);
label_4:
    rdx = rax;
    eax &= 1;
    xmm1 = 0;
    rdx >>= 1;
    rdx |= rax;
    __asm ("cvtsi2sd xmm1, rdx");
    __asm ("addsd xmm1, xmm1");
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40da00 */
#include <stdint.h>
 
uint64_t fcn_0040da00 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    eax = imp.__libc_start_main;
    r13 = *(rdi);
    if (eax >= 0) {
        goto label_3;
    }
label_2:
    r12d = ebp;
    r12d &= 0xfff7f7ff;
    if (r12d != 0) {
        goto label_4;
    }
    rdi = rbx;
    eax = pipe ();
    if (eax < 0) {
        goto label_5;
    }
    while (eax != 0xffffffff) {
        ebp &= 0x80000;
        if (ebp != 0) {
            goto label_6;
        }
label_0:
        eax = r12d;
        return eax;
        eax = 0;
        eax = fcn_00412000 (*((rbx + 4)), 3, 0, rcx, r8);
        if (eax < 0) {
            goto label_1;
        }
        ah |= 8;
        edx = eax;
        eax = 0;
        eax = fcn_00412000 (*((rbx + 4)), 4, edx, rcx, r8);
        if (eax == 0xffffffff) {
            goto label_1;
        }
        eax = 0;
        eax = fcn_00412000 (*(rbx), 3, 0, rcx, r8);
        if (eax < 0) {
            goto label_1;
        }
        ah |= 8;
        edx = eax;
        eax = 0;
        eax = fcn_00412000 (*(rbx), 4, edx, rcx, r8);
    }
    do {
label_1:
        rax = errno_location ();
        r12d = *(rax);
        close (*(rbx));
        eax = close (*((rbx + 4)));
        *(rbx) = r13;
        *(rbp) = r12d;
        r12d = 0xffffffff;
        goto label_0;
label_6:
        eax = 0;
        eax = fcn_00412000 (*((rbx + 4)), 1, 0, rcx, r8);
    } while (eax < 0);
    eax |= 1;
    edx = eax;
    eax = 0;
    eax = fcn_00412000 (*((rbx + 4)), 2, edx, rcx, r8);
    if (eax == 0xffffffff) {
        goto label_1;
    }
    eax = 0;
    eax = fcn_00412000 (*(rbx), 1, 0, rcx, r8);
    if (eax < 0) {
        goto label_1;
    }
    eax |= 1;
    edx = eax;
    eax = 0;
    eax = fcn_00412000 (*(rbx), 2, edx, rcx, r8);
    if (eax == 0xffffffff) {
        goto label_1;
    }
    eax = r12d;
    return rax;
label_3:
    eax = pipe2 ();
    r12d = eax;
    if (eax < 0) {
        rax = errno_location ();
        if (*(rax) == 0x26) {
            goto label_7;
        }
    }
    *(0x0061cbc0) = 1;
    eax = r12d;
    return rax;
label_7:
    *(0x0061cbc0) = 0xffffffff;
    goto label_2;
label_4:
    errno_location ();
    r12d = 0xffffffff;
    *(rax) = 0x16;
    goto label_0;
label_5:
    r12d = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40dbe0 */
#include <stdint.h>
 
uint64_t fcn_0040dbe0 (void) {
    char * * endptr;
    ebx = 0x31069;
    rax = getenv (0x416c00);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40dc60 */
#include <stdint.h>
 
uint64_t fcn_0040dc60 (int64_t arg1) {
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
            edi = 0x416c50;
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
        *(0x0061cbc8) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40dd00 */
#include <stdint.h>
 
uint64_t fcn_0040dd00 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00413750 ();
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
        eax = 0x416c56;
        ebx = 0x416c61;
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
        eax = 0x416c5a;
        ebx = 0x416c5d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x4166e5;
    ebx = 0x416c54;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40de00 */
#include <stdint.h>
 
uint64_t fcn_0040de00 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
    /* switch table (11 cases) at 0x416cc0 */
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
    *((rsp + 0x50)) = 0x4166e5;
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
        /* switch table (127 cases) at 0x416d18 */
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
    rax = fcn_0040de00 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x417110 */
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
    /* switch table (127 cases) at 0x417508 */
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
    *((rsp + 0x50)) = 0x4166e5;
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
        rax = fcn_00412fb0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x4166e5;
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
        *((rsp + 0x50)) = 0x416c54;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_0040dd00 (0x416c65, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_0040dd00 (0x4166e5, r13d);
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
        *((rsp + 0x50)) = 0x416c54;
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
        *((rsp + 0x50)) = 0x4166e5;
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
    *((rsp + 0x50)) = 0x416c54;
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
    rax = fcn_0040de00 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x4166e5;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f030 */
#include <stdint.h>
 
uint64_t fcn_0040f030 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0061c558);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0061c570) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x61c560) {
        goto label_2;
    }
    rax = fcn_00411270 (rbx, rsi);
    *(0x0061c558) = rax;
    rbx = rax;
    do {
        rdi = *(0x0061c570);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0061c570) = r12d;
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
        rax = fcn_0040de00 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x61cbe0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00411210 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_0040de00 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00411270 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0061c560]");
        rbx = rax;
        *(0x0061c558) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00411460 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f550 */
#include <stdint.h>
 
int64_t fcn_0040f550 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_0040f030 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f5c0 */
#include <stdint.h>
 
int64_t fcn_0040f5c0 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
    fcn_0040f030 (rdi, rax, rcx, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f630 */
#include <stdint.h>
 
void fcn_0040f630 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
invalid_funccall(); //    return void (*0x40f550)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f6d0 */
#include <stdint.h>
 
int64_t fcn_0040f6d0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0061cce0]");
        __asm ("movdqa xmm1, xmmword [0x0061ccf0]");
        __asm ("movdqa xmm2, xmmword [0x0061cd00]");
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
        fcn_0040f030 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f700 */
#include <stdint.h>
 
int64_t fcn_0040f700 (uint32_t arg2, int64_t arg3) {
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
    fcn_0040f030 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f860 */
#include <stdint.h>
 
void fcn_0040f860 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x61c520;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x40f030)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f880 */
#include <stdint.h>
 
void fcn_0040f880 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x61c520;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x40f030)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40f900 */
#include <stdint.h>
 
uint64_t fcn_0040f900 (uint32_t arg1, int64_t arg2) {
    int64_t var_8h;
    uid_t var_10h;
    rdi = arg1;
    rsi = arg2;
    if (rsi == 0) {
        goto label_3;
    }
    r12 = rdi;
    if (rdi == 0) {
        goto label_4;
    }
    rax = fcn_004136b0 (rdi, 0x4179c4);
    r13 = rax;
    if (rax == 0) {
        goto label_5;
    }
    fcn_00411210 (0x1038);
    ecx = 0x1000;
    rdi = r13;
    *(rax) = r13;
    if (rbp <= 0x1000) {
        rcx = rbp;
    }
    *((rax + 8)) = 0x40f8a0;
    rbx = rax;
    *((rax + 0x10)) = r12;
    setvbuf (rdi, rax + 0x18, 0, rcx);
    do {
label_0:
        rax = rbx;
        return rax;
label_4:
        fcn_00411210 (0x1038);
        *(rax) = 0;
        rbx = rax;
        r13 = rax + 0x20;
        *((rax + 8)) = 0x40f8a0;
        *((rax + 0x10)) = 0;
        *((rax + 0x18)) = 0;
        eax = 0;
        eax = open ("/dev/urandom", 0, rdx);
        r15d = eax;
        if (eax < 0) {
            goto label_6;
        }
        rdx = rbp;
        edi = eax;
        rsi = r13;
        r14d = 0x800;
        ecx = 0x1018;
        if (rbp > 0x800) {
            rdx = r14;
        }
        rax = read_chk ();
        close (r15d);
        if (rbp <= 0x7ff) {
            goto label_7;
        }
label_1:
        fcn_00410070 (r13);
    } while (1);
label_3:
    rax = fcn_00411210 (0x1038);
    rbx = rax;
    *(rax) = 0;
    *((rax + 8)) = 0x40f8a0;
    *((rax + 0x10)) = 0;
    goto label_0;
label_6:
    r12 = rsp + 0x10;
    esi = 0;
    r14d = 0x14;
    rdi = r12;
    gettimeofday ();
    __asm ("movdqa xmm0, xmmword [rsp + 0x10]");
    __asm ("movups xmmword [rbx + 0x20], xmm0");
    eax = getpid ();
    *((rsp + 0x10)) = eax;
    *((rbx + 0x30)) = eax;
label_2:
    eax = 4;
    rbp -= r14;
    if (rbp > 4) {
    }
    eax = getppid ();
    rsi = r13 + r14;
    *((rsp + 0x10)) = eax;
    edi = ebp;
    if (ebp == 0) {
        goto label_8;
    }
    eax = 0;
    do {
        edx = eax;
        eax++;
        ecx = *((r12 + rdx));
        *((rsi + rdx)) = cl;
    } while (eax < edi);
label_8:
    rbp += r14;
    if (rbp > 0x7ff) {
        goto label_1;
    }
    r14d = 0x800;
    eax = 4;
    r14 -= rbp;
    if (r14 > 4) {
        r14 = rax;
    }
    eax = getuid ();
    rsi = r13 + rbp;
    *((rsp + 0x10)) = eax;
    edi = r14d;
    if (r14d == 0) {
        goto label_9;
    }
    eax = 0;
    do {
        edx = eax;
        eax++;
        ecx = *((r12 + rdx));
        *((rsi + rdx)) = cl;
    } while (eax < edi);
label_9:
    rbp += r14;
    if (rbp > 0x7ff) {
        goto label_1;
    }
    eax = getgid ();
    edx = 4;
    rsi = r13 + rbp;
    *((rsp + 0x10)) = eax;
    eax = 0x800;
    rax -= rbp;
    if (rax > 4) {
        rax = rdx;
    }
    edi = eax;
    if (eax == 0) {
        goto label_1;
    }
    eax = 0;
    do {
        edx = eax;
        eax++;
        ecx = *((r12 + rdx));
        *((rsi + rdx)) = cl;
    } while (eax < edi);
    goto label_1;
label_5:
    ebx = 0;
    goto label_0;
label_7:
    rcx = r14;
    eax = 0x10;
    __asm ("cmovs rbp, r12");
    r12 = rsp + 0x10;
    rdi = r12;
    rcx -= rbp;
    r15 = r13 + rbp;
    if (rcx > 0x10) {
        rcx = rax;
    }
    esi = 0;
    rbp += rcx;
    *((rsp + 8)) = rcx;
    gettimeofday ();
    rcx = *((rsp + 8));
    rdi = r15;
    rsi = r12;
    *(rdi) = *(rsi);
    rcx--;
    rsi++;
    rdi++;
    if (rbp > 0x7ff) {
        goto label_1;
    }
    r14 -= rbp;
    eax = 4;
    if (r14 > 4) {
        r14 = rax;
    }
    eax = getpid ();
    rsi = r12;
    *((rsp + 0x10)) = eax;
    ecx = r14d;
    rax = r13 + rbp;
    r14 += rbp;
    rdi = rax;
    *(rdi) = *(rsi);
    rcx--;
    rsi++;
    rdi++;
    if (r14 <= 0x7ff) {
        goto label_2;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40fc10 */
#include <stdint.h>
 
uint64_t fcn_0040fc10 (int64_t arg1, void * arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdi;
    rbx = rdx;
    r13 = *(rdi);
    if (r13 == 0) {
        goto label_1;
    }
    rax = errno_location ();
    r15d = 0;
    r14 = rax;
    while (rbx != 0) {
        rax = *(r12);
        rdi = *((r12 + 0x10));
        if ((*(rax) & 0x20) == 0) {
            edx = r15d;
        }
        *(r14) = edx;
invalid_funccall(); //        uint64_t (*r12 + 8)() ();
        r13 = *(r12);
        rdx = rbx;
        rdi = rbp;
        rcx = r13;
        esi = 1;
        rax = fread_unlocked ();
        edx = *(r14);
        rbp += rax;
        rbx -= rax;
    }
label_0:
    return rax;
label_1:
    r15 = *((rdi + 0x18));
    r13 = rdi + 0x838;
    r14 = rdi + 0x20;
    if (rdx <= r15) {
        goto label_2;
    }
    do {
        rbp += r15;
        rsi -= r15;
        rbx -= r15;
        rsi += r13;
        memcpy (rbp, 0x800, r15);
        if ((bpl & 7) == 0) {
            goto label_3;
        }
        r15d = 0x800;
        fcn_0040fdc0 (r14, r13);
    } while (rbx > 0x800);
    goto label_4;
    do {
        rbp += 0x800;
        fcn_0040fdc0 (r14, rbp);
        rbx -= 0x800;
        if (rbx == 0) {
            goto label_5;
        }
INVALID_JUMP;
    } while (rbx > 0x7ff);
    fcn_0040fdc0 (r14, r13);
label_4:
    r15d = 0x800;
    do {
        memcpy (rbp, r13, rbx);
        rcx = r15;
        rcx -= rbx;
        *((r12 + 0x18)) = rcx;
        goto label_0;
label_5:
        *((r12 + 0x18)) = 0;
        return rax;
label_2:
        r13 -= r15;
        r13 += 0x800;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40fd70 */
#include <stdint.h>
 
uint32_t fcn_0040fd70 (int64_t arg1) {
    rdi = arg1;
    rdx = 0xffffffffffffffff;
    esi = 0x1038;
    rbx = rdi;
    rbp = *(rdi);
    explicit_bzero_chk ();
    eax = free (rbx);
    if (rbp != 0) {
        rdi = rbp;
invalid_funccall(); //        void (*0x411f80)() ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x40fdc0 */
#include <stdint.h>
 
int64_t fcn_0040fdc0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x810));
    r11 = *((rdi + 0x808));
    r10 = rdi + 0x400;
    rdx = *((rdi + 0x800));
    r9 = rsi;
    r8 = rax + 1;
    rax = rdi;
    *((rdi + 0x810)) = r8;
    r11 += r8;
    do {
        rcx = rdx;
        rcx <<= 0x15;
        rdx ^= rcx;
        rcx = *(rax);
        rdx = ~rdx;
        rdx += *((rax + 0x400));
        r8 = rcx;
        r8d &= 0x7f8;
        rbx = *((rdi + r8));
        rbx += rdx;
        r8 = rbx;
        r8 += r11;
        r11 = rdx;
        *(rax) = r8;
        r8 >>= 8;
        r11 >>= 5;
        r8d &= 0x7f8;
        rdx ^= r11;
        rbx = *((rdi + r8));
        rbx += rcx;
        *(r9) = rbx;
        r8 = *((rax + 8));
        rdx += *((rax + 0x408));
        r11 = rdx;
        rdx = r8;
        edx &= 0x7f8;
        rcx = *((rdi + rdx));
        rdx = r11;
        rdx <<= 0xc;
        rcx += r11;
        rdx ^= r11;
        rcx += rbx;
        *((rax + 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        rbx = *((rdi + rcx));
        rbx += r8;
        *((r9 + 8)) = rbx;
        rcx = *((rax + 0x10));
        rdx += *((rax + 0x410));
        r8 = rcx;
        r8d &= 0x7f8;
        r11 = *((rdi + r8));
        r11 += rdx;
        r8 = r11;
        r8 += rbx;
        *((rax + 0x10)) = r8;
        r8 >>= 8;
        r8d &= 0x7f8;
        rcx += *((rdi + r8));
        *((r9 + 0x10)) = rcx;
        r11 = rcx;
        r8 = *((rax + 0x18));
        rcx = rdx;
        rcx >>= 0x21;
        rdx ^= rcx;
        rcx = r8;
        rdx += *((rax + 0x418));
        ecx &= 0x7f8;
        rbx = *((rdi + rcx));
        rbx += rdx;
        rcx = rbx;
        rcx += r11;
        rax += 0x20;
        r9 += 0x20;
        *((rax - 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        r11 = *((rdi + rcx));
        r11 += r8;
        *((r9 - 8)) = r11;
    } while (rax != r10);
    rsi += 0x400;
    r9 = rdi + 0x800;
    do {
        rcx = rdx;
        rcx <<= 0x15;
        rdx ^= rcx;
        rcx = *(rax);
        rdx = ~rdx;
        rdx += *((rax - 0x400));
        r8 = rcx;
        r10 = rdx;
        r8d &= 0x7f8;
        r10 >>= 5;
        rbx = *((rdi + r8));
        rbx += rdx;
        rdx ^= r10;
        r8 = rbx;
        r8 += r11;
        *(rax) = r8;
        r8 >>= 8;
        r8d &= 0x7f8;
        rcx += *((rdi + r8));
        *(rsi) = rcx;
        r8 = *((rax + 8));
        r11 = rcx;
        rdx += *((rax - 0x3f8));
        r10 = rdx;
        rdx = r8;
        edx &= 0x7f8;
        rcx = *((rdi + rdx));
        rdx = r10;
        rdx <<= 0xc;
        rcx += r10;
        rdx ^= r10;
        rcx += r11;
        *((rax + 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        r11 = *((rdi + rcx));
        r11 += r8;
        *((rsi + 8)) = r11;
        rcx = *((rax + 0x10));
        rdx += *((rax - 0x3f0));
        r8 = rcx;
        r8d &= 0x7f8;
        rbx = *((rdi + r8));
        rbx += rdx;
        r8 = rbx;
        r8 += r11;
        *((rax + 0x10)) = r8;
        r8 >>= 8;
        r8d &= 0x7f8;
        rcx += *((rdi + r8));
        *((rsi + 0x10)) = rcx;
        r10 = rcx;
        r8 = *((rax + 0x18));
        rcx = rdx;
        rcx >>= 0x21;
        rdx ^= rcx;
        rcx = r8;
        rdx += *((rax - 0x3e8));
        ecx &= 0x7f8;
        rbx = *((rdi + rcx));
        rbx += rdx;
        rcx = rbx;
        rcx += r10;
        rax += 0x20;
        rsi += 0x20;
        *((rax - 8)) = rcx;
        rcx >>= 8;
        ecx &= 0x7f8;
        r11 = *((rdi + rcx));
        r11 += r8;
        *((rsi - 8)) = r11;
    } while (rax != r9);
    *((rdi + 0x800)) = rdx;
    *((rdi + 0x808)) = r11;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x410070 */
#include <stdint.h>
 
int64_t fcn_00410070 (int64_t arg1) {
    rdi = arg1;
    rdx = rdi;
    rax = rdi;
    rcx = 0x98f5704f6c44c0ab;
    rsi = 0x82f053db8355e0ce;
    r11 = 0xb29b2e824a595524;
    r12 = 0xae985bf2cbfc89ed;
    r10 = 0x8c0ea5053d4712a0;
    r9 = 0xb9f8b322c73ac862;
    rbp = rdi + 0x800;
    r8 = 0x647c4677a2884b7c;
    rbx = 0x48fe4a0fa5a09315;
    do {
        r13 = *(rax);
        rsi += *((rax + 0x20));
        rcx += *((rax + 0x38));
        rbx += *((rax + 0x28));
        r13 -= rsi;
        r12 += *((rax + 0x30));
        r8 += r13;
        r13 = rcx;
        r13 >>= 9;
        rcx += r8;
        rbx ^= r13;
        r13 = *((rax + 8));
        r13 -= rbx;
        r9 += r13;
        r13 = r8;
        r13 <<= 9;
        r8 += r9;
        r12 ^= r13;
        r13 = *((rax + 0x10));
        r13 -= r12;
        r10 += r13;
        r13 = r9;
        r13 >>= 0x17;
        r9 += r10;
        rcx ^= r13;
        r13 = *((rax + 0x18));
        r13 -= rcx;
        r11 += r13;
        r13 = r10;
        r13 <<= 0xf;
        r10 += r11;
        r8 ^= r13;
        r13 = r11;
        rsi -= r8;
        r13 >>= 0xe;
        *(rax) = r8;
        r9 ^= r13;
        r13 = rsi;
        r11 += rsi;
        rbx -= r9;
        r13 <<= 0x14;
        *((rax + 8)) = r9;
        r10 ^= r13;
        r13 = rsi + rbx;
        rsi = rbx;
        r12 -= r10;
        rsi >>= 0x11;
        *((rax + 0x10)) = r10;
        rax += 0x40;
        r11 ^= rsi;
        rsi = r12;
        rbx += r12;
        rcx -= r11;
        rsi <<= 0xe;
        *((rax - 0x28)) = r11;
        rsi ^= r13;
        r12 += rcx;
        *((rax - 0x18)) = rbx;
        *((rax - 0x20)) = rsi;
        *((rax - 0x10)) = r12;
        *((rax - 8)) = rcx;
    } while (rbp != rax);
    do {
        rcx += *((rdx + 0x38));
        rsi += *((rdx + 0x20));
        r8 += *(rdx);
        rax = rcx;
        rbx += *((rdx + 0x28));
        r8 -= rsi;
        rax >>= 9;
        r9 += *((rdx + 8));
        r12 += *((rdx + 0x30));
        rbx ^= rax;
        rax = r8;
        r10 += *((rdx + 0x10));
        rcx += r8;
        r9 -= rbx;
        rax <<= 9;
        r11 += *((rdx + 0x18));
        r12 ^= rax;
        rax = r9;
        r8 += r9;
        r10 -= r12;
        rax >>= 0x17;
        rcx ^= rax;
        rax = r10;
        r9 += r10;
        r11 -= rcx;
        rax <<= 0xf;
        r8 ^= rax;
        rax = r11;
        r10 += r11;
        rsi -= r8;
        rax >>= 0xe;
        *(rdx) = r8;
        r9 ^= rax;
        rax = rsi;
        r11 += rsi;
        rbx -= r9;
        rax <<= 0x14;
        *((rdx + 8)) = r9;
        r10 ^= rax;
        rax = rsi + rbx;
        rsi = rbx;
        r12 -= r10;
        rsi >>= 0x11;
        *((rdx + 0x10)) = r10;
        rdx += 0x40;
        r11 ^= rsi;
        rsi = r12;
        rbx += r12;
        rcx -= r11;
        rsi <<= 0xe;
        *((rdx - 0x28)) = r11;
        rsi ^= rax;
        r12 += rcx;
        *((rdx - 0x18)) = rbx;
        *((rdx - 0x20)) = rsi;
        *((rdx - 0x10)) = r12;
        *((rdx - 8)) = rcx;
    } while (rbp != rdx);
    *((rdi + 0x810)) = 0;
    *((rdi + 0x808)) = 0;
    *((rdi + 0x800)) = 0;
    r12 = rbx;
    r13 = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4102b0 */
#include <stdint.h>
 
uint64_t fcn_004102b0 (int64_t arg1) {
    rdi = arg1;
    rdx = *((rdi + 0x30));
    rbx = rdi;
    r12 = *((rdi + 0x28));
    rbp -= r12;
    rbp--;
    if (rdx == r12) {
        goto label_2;
    }
label_1:
    rcx = *((rbx + 0x48));
    rax = rdx + rcx;
    rcx = ~rcx;
    rdx = *((rbx + 0x38));
    rax &= rcx;
    rcx = *((rbx + 0x20));
    rsi = rax;
    rdi = rdx;
    *((rbx + 0x30)) = rax;
    rsi -= rcx;
    rdi -= rcx;
    if (rsi > rdi) {
        *((rbx + 0x30)) = rdx;
        rax = rdx;
    }
    *((rbx + 0x28)) = rax;
    rdx = *((rbx + 0x88));
    rax = *((rbx + 0x90));
    rax -= rdx;
    while (1) {
        *(rdx) = r12;
        rdx = *((rbx + 0xe0));
        rax = *((rbx + 0xe8));
        *((rbx + 0x88)) += 8;
        rax -= rdx;
        if (rax <= 7) {
            goto label_3;
        }
label_0:
        *(rdx) = rbp;
        *((rbx + 0xe0)) += 8;
        *(rbx)++;
        r12 = rbx;
        return rax;
        rdi = rbx + 0x70;
        esi = 8;
        _obstack_newchunk ();
        rdx = *((rbx + 0x88));
    }
label_3:
    rdi = rbx + 0xc8;
    esi = 8;
    _obstack_newchunk ();
    rdx = *((rbx + 0xe0));
    goto label_0;
label_2:
    *((rdi + 0x68)) |= 2;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4103a0 */
#include <stdint.h>
 
void fcn_004103a0 (struct sigaction * arg1) {
    rdi = arg1;
    r8d = imp.free;
    rbx = rdi;
    ecx = imp.malloc;
    *(rdi) = 0;
    edx = 0;
    rdi = rdi + 0x18;
    esi = 0;
    *((rdi - 0x10)) = 0;
    *((rdi - 8)) = 0;
    _obstack_begin ();
    rdi = rbx + 0x70;
    ecx = imp.malloc;
    edx = 0;
    r8d = imp.free;
    esi = 0;
    _obstack_begin ();
    rdi = rbx + 0xc8;
    edx = 0;
    esi = 0;
    r8d = imp.free;
    ecx = imp.malloc;
    return obstack_begin ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x410440 */
#include <stdint.h>
 
uint64_t fcn_00410440 (int64_t arg1, struct sigaction * arg2) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    r12 = rsi + 0x18;
    rbx = rsi;
    while (*((rbx + 0x38)) != rdx) {
        rcx = rdx + 1;
        *((rbx + 0x30)) = rcx;
        *(rdx) = al;
        if (eax == 0) {
            goto label_6;
        }
label_0:
        eax = fgetc (rbp);
        if (eax == 0xffffffff) {
            goto label_7;
        }
label_1:
        rdx = *((rbx + 0x30));
    }
    esi = 1;
    rdi = r12;
    *((rsp + 0xc)) = eax;
    _obstack_newchunk ();
    rdx = *((rbx + 0x30));
    eax = *((rsp + 0xc));
    rcx = rdx + 1;
    *((rbx + 0x30)) = rcx;
    *(rdx) = al;
    if (eax != 0) {
        goto label_0;
    }
label_6:
    fcn_004102b0 (rbx);
    eax = fgetc (rbp);
    if (eax != 0xffffffff) {
        goto label_1;
    }
label_7:
    rax = *((rbx + 0x30));
    if (rax != *((rbx + 0x28))) {
        if (rax == *((rbx + 0x38))) {
            goto label_8;
        }
label_5:
        rdx = rax + 1;
        *((rbx + 0x30)) = rdx;
        *(rax) = 0;
        fcn_004102b0 (rbx);
    }
    rdx = *((rbx + 0x88));
    rax = *((rbx + 0x90));
    rax -= rdx;
    if (rax <= 7) {
        goto label_9;
    }
label_2:
    *(rdx) = 0;
    rax = *((rbx + 0x88));
    rsi = *((rbx + 0x80));
    rdx = rax + 8;
    *((rbx + 0x88)) = rdx;
    if (rdx == rsi) {
        goto label_10;
    }
label_4:
    rcx = *((rbx + 0xa0));
    rax = rdx + rcx;
    rcx = ~rcx;
    rdx = *((rbx + 0x78));
    rax &= rcx;
    rcx = *((rbx + 0x90));
    rdi = rax;
    *((rbx + 0x88)) = rax;
    r8 = rcx;
    rdi -= rdx;
    r8 -= rdx;
    while (1) {
        *((rbx + 8)) = rsi;
        rdx = *((rbx + 0xe0));
        rsi = *((rbx + 0xd8));
        *((rbx + 0x80)) = rax;
        if (rdx == rsi) {
            goto label_11;
        }
label_3:
        rcx = *((rbx + 0xf8));
        rax = rdx + rcx;
        rcx = ~rcx;
        rdx = *((rbx + 0xd0));
        rax &= rcx;
        rcx = *((rbx + 0xe8));
        rdi = rax;
        *((rbx + 0xe0)) = rax;
        r9 = rcx;
        rdi -= rdx;
        r9 -= rdx;
        if (rdi > r9) {
            *((rbx + 0xe0)) = rcx;
            rax = rcx;
        }
        *((rbx + 0xd8)) = rax;
        *((rbx + 0x10)) = rsi;
        eax = ferror (rbp);
        al = (eax == 0) ? 1 : 0;
        return rax;
        *((rbx + 0x88)) = rcx;
        rax = rcx;
    }
label_9:
    rdi = rbx + 0x70;
    esi = 8;
    _obstack_newchunk ();
    rdx = *((rbx + 0x88));
    goto label_2;
label_11:
    *((rbx + 0x118)) |= 2;
    goto label_3;
label_10:
    *((rbx + 0xc0)) |= 2;
    goto label_4;
label_8:
    rdi = rbx + 0x18;
    esi = 1;
    _obstack_newchunk ();
    rax = *((rbx + 0x30));
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x410680 */
#include <stdint.h>
 
uint64_t fcn_00410680 (int64_t arg2) {
    rsi = arg2;
    ebx = esi;
    eax = mkostemp ();
    esi = ebx;
    edi = eax;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_00413690 (rdi, rsi, rdx);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4106a0 */
#include <stdint.h>
 
uint64_t fcn_004106a0 (uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9d = *(rdi);
    r8d = *(rsi);
    if (r9b == 0x2d) {
        goto label_1;
    }
    if (r8b != 0x2d) {
        goto label_37;
    }
    do {
label_0:
        rsi++;
        eax = *(rsi);
    } while (al == 0x30);
    if (ecx == eax) {
        goto label_0;
    }
    if (edx == eax) {
        goto label_12;
    }
label_11:
    esi = rax - 0x30;
    eax = 1;
    if (esi > 9) {
        goto label_38;
    }
label_21:
    return eax;
    do {
label_1:
        rdi++;
        eax = *(rdi);
    } while (al == 0x30);
    r9d = (int32_t) al;
    if (ecx == r9d) {
        goto label_1;
    }
    if (r8b == 0x2d) {
        goto label_7;
    }
    if (edx == r9d) {
        goto label_39;
    }
label_10:
    r9d -= 0x30;
    if (r9d > 9) {
        goto label_40;
    }
    goto label_41;
    do {
label_2:
        rsi++;
        r8d = *(rsi);
INVALID_JUMP;
    } while (r8b == 0x30);
    r10d = (int32_t) r8b;
    if (ecx == r10d) {
        goto label_2;
    }
    if (edx == r10d) {
        goto label_42;
    }
label_14:
    r10d -= 0x30;
    eax = 0;
    al = (r10d <= 9) ? 1 : 0;
    eax = -eax;
    return eax;
    do {
label_3:
        rdi++;
        r9d = *(rdi);
INVALID_JUMP;
    } while (r9b == 0x30);
    eax = (int32_t) r9b;
    if (ecx == eax) {
        goto label_3;
    }
    if (r8b != 0x30) {
        goto label_43;
    }
    do {
label_4:
        rsi++;
        r8d = *(rsi);
    } while (r8b == 0x30);
label_43:
    r10d = (int32_t) r8b;
    if (ecx == r10d) {
        goto label_4;
    }
label_5:
    if (r9b != r8b) {
        goto label_44;
    }
    r8d = r10 - 0x30;
    if (r8d > 9) {
        goto label_44;
    }
    do {
        rdi++;
        eax = *(rdi);
        r9d = eax;
    } while (ecx == eax);
label_6:
    rsi++;
    r10d = *(rsi);
    r8d = r10d;
    if (ecx != r10d) {
        goto label_5;
    }
    rsi++;
    r10d = *(rsi);
    r8d = r10d;
    if (ecx == r10d) {
        goto label_6;
    }
    goto label_5;
    do {
label_7:
        rsi++;
        r8d = *(rsi);
    } while (r8b == 0x30);
    r10d = (int32_t) r8b;
    if (ecx == r10d) {
        goto label_7;
    }
label_8:
    if (al != r8b) {
        goto label_45;
    }
    eax = r10 - 0x30;
    if (eax > 9) {
        goto label_45;
    }
    do {
        rdi++;
        r9d = *(rdi);
        eax = r9d;
    } while (ecx == r9d);
label_9:
    rsi++;
    r10d = *(rsi);
    r8d = r10d;
    if (ecx != r10d) {
        goto label_8;
    }
    rsi++;
    r10d = *(rsi);
    r8d = r10d;
    if (ecx == r10d) {
        goto label_9;
    }
    goto label_8;
    do {
label_39:
        rdi++;
        eax = *(rdi);
    } while (al == 0x30);
    r9d = (int32_t) al;
    goto label_10;
label_12:
    rsi++;
    eax = *(rsi);
    if (al != 0x30) {
        goto label_11;
    }
    rsi++;
    eax = *(rsi);
    if (al == 0x30) {
        goto label_12;
    }
    goto label_11;
    do {
label_13:
        rdi++;
        r9d = *(rdi);
INVALID_JUMP;
    } while (r9b == 0x30);
    eax = (int32_t) r9b;
    if (ecx == eax) {
        goto label_13;
    }
    if (edx == eax) {
        goto label_46;
    }
label_19:
    eax -= 0x30;
    al = (eax <= 9) ? 1 : 0;
    eax = (int32_t) al;
    return eax;
    do {
label_42:
        rsi++;
        r8d = *(rsi);
    } while (r8b == 0x30);
    r10d = (int32_t) r8b;
    goto label_14;
label_44:
    if (edx == eax) {
        goto label_47;
    }
label_20:
    r8d = rax - 0x30;
    if (edx == r10d) {
        goto label_48;
    }
    eax -= r10d;
    r10d -= 0x30;
    if (r8d > 9) {
        goto label_49;
    }
label_23:
    r8d = 0;
    do {
label_15:
        rdi++;
        edx = *(rdi);
    } while (ecx == edx);
    edx -= 0x30;
    r8++;
    if (edx <= 9) {
        goto label_15;
    }
    if (r10d > 9) {
        goto label_50;
    }
label_26:
    edi = 0;
    do {
label_16:
        rsi++;
        edx = *(rsi);
    } while (ecx == edx);
    edx -= 0x30;
    rdi++;
    if (edx <= 9) {
        goto label_16;
    }
    if (rdi == r8) {
        goto label_51;
    }
    eax -= eax;
    eax |= 1;
    return eax;
label_45:
    if (edx == r9d) {
        goto label_52;
    }
label_24:
    r8d = r9 - 0x30;
    if (edx == r10d) {
        goto label_53;
    }
    eax = r10d;
    r10d -= 0x30;
    eax -= r9d;
    if (r8d > 9) {
        goto label_54;
    }
label_28:
    r8d = 0;
    do {
label_17:
        rdi++;
        edx = *(rdi);
    } while (ecx == edx);
    edx -= 0x30;
    r8++;
    if (edx <= 9) {
        goto label_17;
    }
    if (r10d > 9) {
        goto label_55;
    }
label_32:
    edi = 0;
    do {
label_18:
        rsi++;
        edx = *(rsi);
    } while (ecx == edx);
    edx -= 0x30;
    rdi++;
    if (edx <= 9) {
        goto label_18;
    }
    if (rdi != r8) {
        goto label_56;
    }
label_51:
    edx = 0;
    if (rdi == 0) {
        eax = edx;
    }
    return eax;
    do {
label_46:
        rdi++;
        r9d = *(rdi);
    } while (r9b == 0x30);
    eax = (int32_t) r9b;
    goto label_19;
label_47:
    r8d = r10 - 0x30;
    if (r8d <= 9) {
        goto label_20;
    }
label_22:
    r8d = *(rsi);
    if (dl == *(rdi)) {
        goto label_57;
    }
    eax = 0;
    if (dl != r8b) {
        goto label_21;
    }
    rax = rsi + 1;
    edx = *((rsi + 1));
    while (dl == 0x30) {
        rax++;
        edx = *(rax);
INVALID_JUMP;
    }
    eax = (int32_t) dl;
label_25:
    eax -= 0x30;
    al = (eax <= 9) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    return rax;
label_48:
    if (r8d > 9) {
        goto label_22;
    }
    eax -= edx;
    r10d = rdx - 0x30;
    goto label_23;
label_56:
    eax -= eax;
    eax &= 2;
    eax--;
    return rax;
label_50:
    eax = 0;
    al = (r8 != 0) ? 1 : 0;
    return rax;
label_55:
    eax = 0;
    al = (r8 != 0) ? 1 : 0;
    eax = -eax;
    return rax;
label_52:
    eax = r10 - 0x30;
    if (eax <= 9) {
        goto label_24;
    }
label_27:
    ecx = *(rdi);
    if (dl == *(rsi)) {
        goto label_58;
    }
    eax = 0;
    if (dl != cl) {
        goto label_21;
    }
    do {
        rdi++;
label_36:
        eax = *(rdi);
    } while (al == 0x30);
    goto label_25;
label_49:
    r8d = 0;
    if (r10d <= 9) {
        goto label_26;
    }
label_29:
    eax = 0;
    return rax;
label_53:
    if (r8d > 9) {
        goto label_27;
    }
    eax = edx;
    r10d = rdx - 0x30;
    eax -= r9d;
    goto label_28;
label_57:
    ecx = *((rdi + 1));
    if (dl == r8b) {
        goto label_59;
    }
    rdi++;
    while (cl == 0x30) {
        rdi++;
        ecx = *(rdi);
INVALID_JUMP;
    }
    ecx -= 0x30;
    eax = 0;
    al = (ecx <= 9) ? 1 : 0;
    return rax;
label_30:
    if (r8d > 9) {
        goto label_29;
    }
    ecx = *((rdi + 1));
label_59:
    rsi++;
    edx = *(rsi);
    eax = (int32_t) cl;
    rdi++;
    r8d = rax - 0x30;
    if (dl == cl) {
        goto label_30;
    }
    r9d = (int32_t) dl;
    r10d = r9 - 0x30;
    if (r8d > 9) {
        goto label_60;
    }
    if (r10d > 9) {
        goto label_31;
    }
    eax -= r9d;
    return rax;
label_54:
    r8d = 0;
    if (r10d <= 9) {
        goto label_32;
    }
    goto label_29;
label_58:
    if (dl == cl) {
        goto label_61;
    }
    do {
        rsi++;
label_34:
        eax = *(rsi);
    } while (al == 0x30);
    goto label_19;
label_33:
    if (r8d > 9) {
        goto label_29;
    }
label_61:
    rsi++;
    rdi++;
    eax = *(rsi);
    ecx = *(rdi);
    r8d = rax - 0x30;
    if (al == cl) {
        goto label_33;
    }
    edx = rcx - 0x30;
    if (r8d > 9) {
        goto label_62;
    }
    if (edx > 9) {
        goto label_34;
    }
    eax -= ecx;
    return rax;
label_41:
    eax = 0xffffffff;
    return rax;
label_60:
    eax = 0;
    if (r10d > 9) {
        goto label_21;
    }
    rax = rsi;
    goto label_35;
label_62:
    eax = 0;
    if (edx <= 9) {
        goto label_36;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x410c70 */
#include <stdint.h>
 
void fcn_00410c70 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x4179da);
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
        /* switch table (10 cases) at 0x417cc0 */
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
invalid_funccall(); //    void (*0x402e40)() ();
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
invalid_funccall(); //    void (*0x402e40)() ();
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
invalid_funccall(); //    void (*0x402e40)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4110d0 */
#include <stdint.h>
 
uint64_t fcn_004110d0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00410c70 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411210 */
#include <stdint.h>
 
uint64_t fcn_00411210 (int64_t arg1) {
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
    return fcn_00411460 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411270 */
#include <stdint.h>
 
uint64_t fcn_00411270 (int64_t arg1, int64_t arg2) {
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
    return fcn_00411460 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4113e0 */
#include <stdint.h>
 
int64_t fcn_004113e0 (int64_t arg1, size_t size) {
    rdi = arg1;
    rsi = size;
    rax = rdi;
    rdx_rax = rax * rsi;
    __asm ("seto dl");
    if (rax >= 0) {
        edx = (int32_t) dl;
        if (rdx != 0) {
            goto label_0;
        }
        rax = calloc (rdi, rsi);
        if (rax == 0) {
            goto label_0;
        }
        return rax;
    }
label_0:
    return fcn_00411460 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411410 */
#include <stdint.h>
 
uint64_t fcn_00411410 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00411210 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411460 */
#include <stdint.h>
 
uint64_t fcn_00411460 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0061c518), 0, 0x416abc);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4114a0 */
#include <stdint.h>
 
uint64_t fcn_004114a0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r14d = edi;
    r13 = r8;
    r12 = rdx;
    edx = 5;
    rbx = rsi;
    rax = dcgettext (0, "string comparison failed");
    eax = 0;
    error (0, r14d, rax);
    edx = 5;
    rax = dcgettext (0, "Set LC_ALL='C' to work around the problem.");
    eax = 0;
    error (0, 0, rax);
    rax = fcn_0040f5c0 (1, 8, rbp, r13);
    rax = fcn_0040f5c0 (0, 8, rbx, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "The strings compared were %s and %s.");
    edi = *(0x0061c518);
    r8 = rbp;
    esi = 0;
    rcx = rbx;
    rdx = rax;
    eax = 0;
    return error ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4115c0 */
#include <stdint.h>
 
uint64_t fcn_004115c0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rcx;
    r12 = rdx;
    rbx = rsi;
    eax = fcn_00413e30 (rdi, rsi, rdx, rcx);
    r13d = eax;
    rax = errno_location ();
    edi = *(rax);
    if (edi == 0) {
        eax = r13d;
        return rax;
    }
    fcn_004114a0 (rdi, rbp, rbx - 1, r12, r14 - 1);
    eax = r13d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411620 */
#include <stdint.h>
 
uint64_t fcn_00411620 (void) {
    int64_t var_8h;
    rax = fcn_00413580 (rdi);
    *(rsp) = rax;
    *((rsp + 8)) = rdx;
    rax = errno_location ();
    rbx = rax;
    while (eax != 0) {
        if ((*(rbx) & 0xfffffffb) != 0) {
            goto label_0;
        }
        *(rbx) = 0;
        eax = fcn_00413140 (rsp, 0);
    }
    return rax;
label_0:
    eax = 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411680 */
#include <stdint.h>
 
uint64_t fcn_00411680 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x417e10 */
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
    /* switch table (54 cases) at 0x417f90 */
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
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtoul");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411ab0 */
#include <stdint.h>
 
int64_t fcn_00411ab0 (uint32_t arg1, char * arg2, int64_t arg4, int64_t arg5) {
    int64_t var_eh;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
    do {
        abort ();
        edi--;
        ebx = *(0x0061c518);
    } while (edi > 3);
    r10d = esi;
    rsi = *((rdi*8 + 0x4181c0));
    rax = (int64_t) r10d;
    if (r10d < 0) {
        goto label_0;
    }
    rax <<= 5;
    r12d = 0x418149;
    r13 = *((rcx + rax));
    do {
        edx = 5;
        rax = dcgettext (0, rsi);
        r9 = rbp;
        r8 = r13;
        rcx = r12;
        eax = 0;
        error (ebx, 0, rax);
        rax = abort ();
label_0:
        r12d = 0x418149;
        *((rsp + 0xe)) = dl;
        r13 = rsp + 0xe;
        r12 -= rax;
        *((rsp + 0xf)) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411b40 */
#include <stdint.h>
 
uint64_t fcn_00411b40 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x4181e0 */
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
    /* switch table (54 cases) at 0x418360 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x411f80 */
#include <stdint.h>
 
uint64_t fcn_00411f80 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00412140 (rbx);
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
invalid_funccall(); //    void (*0x402960)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x412000 */
#include <stdint.h>
 
uint64_t fcn_00412000 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x0061cd18) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_00412000 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0061cd18) != 0xffffffff) {
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
    eax = fcn_00412000 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0061cd18) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x412140 */
#include <stdint.h>
 
uint32_t fcn_00412140 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x402c30)() ();
label_1:
    fcn_00412180 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x412180 */
#include <stdint.h>
 
int64_t fcn_00412180 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x402d60)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4121e0 */
#include <stdint.h>
 
uint64_t fcn_004121e0 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4122c0 */
#include <stdint.h>
 
int64_t fcn_004122c0 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4128e0 */
#include <stdint.h>
 
uint64_t fcn_004128e0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x418149;
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
            fcn_004121e0 (r12, rbx);
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
        fcn_004121e0 (r12, rbx);
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
    eax = fcn_004122c0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_004122c0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x412eb0 */
#include <stdint.h>
 
int32_t fcn_00412eb0 (int64_t arg_10h) {
    eax = *(0x0061c57c);
    *(0x0061cd20) = eax;
    eax = *(0x0061c578);
    *(0x0061cd24) = eax;
    eax = *((rsp + 0x10));
    fcn_004128e0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061c57c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0061cd60) = rdx;
    edx = imp.__libc_start_main;
    *(0x0061c574) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x412f30 */
#include <stdint.h>
 
void fcn_00412f30 (void) {
    r9d = 0;
    fcn_00412eb0 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x412fb0 */
#include <stdint.h>
 
uint64_t fcn_00412fb0 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040bd10 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413030 */
#include <stdint.h>
 
int64_t fcn_00413030 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413140 */
#include <stdint.h>
 
int64_t fcn_00413140 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 8));
    if (rax > 0x3b9ac9ff) {
        goto label_0;
    }
    rbx = *(rdi);
    *((rsp + 8)) = rax;
    r12 = rsp;
    if (rbx > 0x1fa400) {
        goto label_1;
    }
    goto label_2;
    do {
        *((rsp + 8)) = 0;
        if (rbx <= 0x1fa400) {
            goto label_2;
        }
label_1:
        *(rsp) = 0x1fa400;
        rbx -= 0x1fa400;
        eax = nanosleep (r12, rbp);
    } while (eax == 0);
    if (rbp == 0) {
        goto label_3;
    }
    *(rbp) += rbx;
    return rax;
label_2:
    *(rsp) = rbx;
    nanosleep (r12, rbp);
    do {
label_3:
        return rax;
label_0:
        errno_location ();
        *(rax) = 0x16;
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413230 */
#include <stdint.h>
 
int64_t fcn_00413230 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x38));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
invalid_funccall(); //        rax = void (*rax)() ();
    }
    rdi = rsi;
invalid_funccall(); //    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413250 */
#include <stdint.h>
 
int64_t fcn_00413250 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x40));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
invalid_funccall(); //        rax = void (*rax)() ();
    }
    rdi = rsi;
invalid_funccall(); //    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413300 */
#include <stdint.h>
 
uint64_t obstack_begin (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_0:
    rbx = rdi;
    if (rdx == 0) {
        goto label_1;
    }
    r12 = rdx - 1;
    do {
        eax = 0xfe0;
        *((rbx + 0x30)) = r12;
        rdi = rbx;
        if (rsi == 0) {
            rsi = rax;
        }
        *(rbx) = rsi;
        rax = fcn_00413230 (rdi, rsi);
        *((rbx + 8)) = rax;
        if (rax == 0) {
            goto label_2;
        }
        rdx = rax + r12 + 0x10;
        rbp = -rbp;
        rbp &= rdx;
        rdx = *(rbx);
        *((rbx + 0x10)) = rbp;
        rdx += rax;
        *((rbx + 0x18)) = rbp;
        *(rax) = rdx;
        *((rbx + 0x20)) = rdx;
        *((rax + 8)) = 0;
        eax = 1;
        *((rbx + 0x50)) &= 0xf9;
        return rax;
label_1:
        r12d = 0xf;
    } while (1);
label_2:
invalid_funccall(); //    rax = uint64_t (*obstack_alloc_failed_handler)() ();
    *((rdi + 0x50)) &= 0xfe;
    *((rdi + 0x38)) = rcx;
    *((rdi + 0x40)) = r8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413320 */
#include <stdint.h>
 
void obstack_begin_1 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    *((rdi + 0x50)) |= 1;
    *((rdi + 0x38)) = rcx;
    *((rdi + 0x40)) = r8;
    *((rdi + 0x48)) = r9;
invalid_funccall(); //    return void (*0x413270)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413340 */
#include <stdint.h>
 
uint64_t obstack_newchunk (int64_t arg_8h, int64_t arg_10h, uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0;
    r13 = *((rdi + 0x18));
    r13 -= *((rdi + 0x10));
    rbp = *((rdi + 8));
    rsi += r13;
    rdx = r13;
    al = (rsi < 0) ? 1 : 0;
    rsi += *((rdi + 0x30));
    cl = (rsi < 0) ? 1 : 0;
    rdx >>= 3;
    rbx = rsi + rdx + 0x64;
    if (*(rdi) >= rsi) {
        rsi = *(rdi);
    }
    if (rsi >= rbx) {
        rbx = rsi;
    }
    if (rax != 0) {
        goto label_0;
    }
    ecx = (int32_t) cl;
    if (rcx != 0) {
        goto label_0;
    }
    r12 = rdi;
    rax = fcn_00413230 (rdi, rbx);
    r14 = rax;
    if (rax == 0) {
        goto label_0;
    }
    rsi = rax + rbx;
    *((r12 + 8)) = rax;
    *((rax + 8)) = rbp;
    *((r12 + 0x20)) = rsi;
    *(rax) = rsi;
    rax = *((r12 + 0x30));
    rbx = r14 + rax + 0x10;
    rax = ~rax;
    rbx &= rax;
    memcpy (rbx, *((r12 + 0x10)), r13);
    if ((*((r12 + 0x50)) & 2) != 0) {
        goto label_1;
    }
    rax = *((r12 + 0x30));
    rdx = rbp + rax + 0x10;
    rax = ~rax;
    rax &= rdx;
    while (1) {
label_1:
        r13 += rbx;
        *((r12 + 0x10)) = rbx;
        *((r12 + 0x18)) = r13;
        *((r12 + 0x50)) &= 0xfd;
        return rax;
        rax = *((rbp + 8));
        *((r14 + 8)) = rax;
        fcn_00413250 (r12, rbp);
    }
label_0:
invalid_funccall(); //    uint64_t (*obstack_alloc_failed_handler)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413440 */
#include <stdint.h>
 
int64_t obstack_allocated_p (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 8));
    if (rax == 0) {
        goto label_0;
    }
    do {
        if (rsi > rax) {
            if (*(rax) >= rsi) {
                goto label_1;
            }
        }
        rax = *((rax + 8));
    } while (rax != 0);
    eax = 0;
    return rax;
label_1:
    eax = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413480 */
#include <stdint.h>
 
int64_t obstack_free (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
label_0:
    abort ();
    rsi = *((rdi + 8));
    rbx = rdi;
    if (rsi == 0) {
        goto label_1;
    }
    do {
        if (rsi < rbp) {
            rax = *(rsi);
            if (rax >= rbp) {
                goto label_2;
            }
        }
        r12 = *((rsi + 8));
        rax = fcn_00413250 (rbx, rsi);
        *((rbx + 0x50)) |= 2;
        rsi = r12;
    } while (r12 != 0);
label_1:
    if (rbp != 0) {
        goto label_0;
    }
    return rax;
label_2:
    *((rbx + 0x18)) = rbp;
    *((rbx + 0x10)) = rbp;
    *((rbx + 0x20)) = rax;
    *((rbx + 8)) = rsi;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4134f0 */
#include <stdint.h>
 
int64_t obstack_memory_used (int64_t arg1) {
    rdi = arg1;
    rdx = *((rdi + 8));
    eax = 0;
    if (rdx == 0) {
        goto label_0;
    }
    do {
        rcx = *(rdx);
        rcx -= rdx;
        rdx = *((rdx + 8));
        rax += rcx;
    } while (rdx != 0);
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413520 */
#include <stdint.h>
 
uint64_t fcn_00413520 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00411f80 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413580 */
#include <stdint.h>
 
int64_t fcn_00413580 (int64_t arg3) {
    rdx = arg3;
    __asm ("comisd xmm0, xmmword [0x00418640]");
    if (unknown > unknown) {
        xmm1 = *(0x00416a48);
        __asm ("comisd xmm1, xmm0");
        if (unknown <= unknown) {
            rax = 0x7fffffffffffffff;
            edx = 0x3b9ac9ff;
            return rax;
        }
        __asm ("cvttsd2si rsi, xmm0");
        xmm1 = 0;
        ecx = 0;
        __asm ("cvtsi2sd xmm1, rsi");
        __asm ("subsd xmm0, xmm1");
        __asm ("mulsd xmm0, qword [0x00418648]");
        xmm1 = 0;
        __asm ("cvttsd2si rdx, xmm0");
        __asm ("cvtsi2sd xmm1, rdx");
        __asm ("comisd xmm0, xmm1");
        cl = (unknown > unknown) ? 1 : 0;
        rcx += rdx;
        rdx = 0x112e0be826d694b3;
        rax = rcx;
        rdx_rax = rax * rdx;
        rax = rcx;
        rax >>= 0x3f;
        rdx >>= 0x1a;
        rdx -= rax;
        rax = rdx + rsi;
        rdx *= 0x3b9aca00;
        rcx -= rdx;
        rdx = rcx;
        if (rcx < 0) {
            goto label_0;
        }
        return rax;
    }
    rax = 0x8000000000000000;
    edx = 0;
    return rax;
label_0:
    rax--;
    rdx += 0x3b9aca00;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413690 */
#include <stdint.h>
 
int32_t fcn_00413690 (int64_t arg1, int64_t arg2, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    esi &= 0x80000;
    eax = 0x406;
    edx = 3;
    if (esi != 0) {
        esi = eax;
    }
    eax = 0;
invalid_funccall(); //    return void (*0x412000)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x4136b0 */
#include <stdint.h>
 
uint64_t fcn_004136b0 (int64_t arg2, const char * filename) {
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
        eax = fcn_00413ea0 (eax, rsi);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_00411f80 (rbx);
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
    fcn_00411f80 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413750 */
#include <stdint.h>
 
uint64_t fcn_00413750 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x416571;
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
    eax = 0x418650;
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
        r15d = 0x416571;
label_2:
        *(0x0061cd58) = r15;
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
        r15d = 0x416571;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x4168fa;
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
    fcn_00411f80 (rbx);
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
        r15d = 0x416571;
        rbx = rax;
        free (r15);
        fcn_00411f80 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413cc0 */
#include <stdint.h>
 
uint64_t fcn_00413cc0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rsi;
    r13 = rcx;
    r12 = rdi;
    rax = errno_location ();
    r15 = rax;
    while (eax == 0) {
        strlen (r12);
        rbx = rax + 1;
        rax = strlen (rbp);
        r12 += rbx;
        rax++;
        rbp += rax;
        r13 -= rax;
        r14 -= rbx;
        if (r14 == 0) {
            goto label_0;
        }
        if (r13 == 0) {
            goto label_1;
        }
        *(r15) = 0;
        eax = strcoll (r12, rbp);
    }
    return rax;
label_0:
    eax = 0;
    al = (r13 != 0) ? 1 : 0;
    eax = -eax;
    return rax;
label_1:
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413d80 */
#include <stdint.h>
 
uint64_t fcn_00413d80 (int64_t arg1, int64_t arg3, int64_t arg4, size_t n) {
    int64_t var_8h;
    int64_t var_fh;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    rsi = n;
    r13 = rdx;
    r12 = rdi;
    rbx = rsi;
    if (rsi == rcx) {
        eax = memcmp (rdi, r13, rsi);
        *((rsp + 8)) = eax;
        if (eax == 0) {
            goto label_0;
        }
    }
    r15 = r12 + rbx;
    r14 = r13 + rbp;
    r9d = *(r15);
    r8d = *(r14);
    *(r15) = 0;
    *(r14) = 0;
    *((rsp + 0xf)) = r9b;
    *((rsp + 8)) = r8b;
    eax = fcn_00413cc0 (r12, rbx + 1, r13, rbp + 1);
    r9d = *((rsp + 0xf));
    r8d = *((rsp + 8));
    edx = eax;
    *(r15) = r9b;
    *(r14) = r8b;
    do {
        eax = edx;
        return eax;
label_0:
        errno_location ();
        edx = *((rsp + 8));
        *(rax) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413e30 */
#include <stdint.h>
 
uint64_t fcn_00413e30 (int64_t arg1, int64_t arg3, int64_t arg4, size_t n) {
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    rsi = n;
    r13 = rdx;
    r12 = rdi;
    rbx = rsi;
    if (rsi == rcx) {
        eax = memcmp (rdi, r13, rsi);
        if (eax != 0) {
            goto label_0;
        }
        errno_location ();
        *(rax) = 0;
        eax = 0;
        return rax;
    }
label_0:
    rcx = rbp;
    rdx = r13;
    rsi = rbx;
    rdi = r12;
invalid_funccall(); //    return void (*0x413cc0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413ea0 */
#include <stdint.h>
 
int32_t fcn_00413ea0 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
invalid_funccall(); //    return void (*0x412000)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413f20 */
#include <stdint.h>
 
int64_t fcn_00413f20 (void) {
    rax = 0x61c3e8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sort.elf @ 0x413f38 */
#include <stdint.h>
 
void fcn_00413f38 (int64_t arg3) {
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
