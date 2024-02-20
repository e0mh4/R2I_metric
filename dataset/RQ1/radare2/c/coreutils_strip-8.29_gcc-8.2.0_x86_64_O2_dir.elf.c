/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x402e90 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h;
    char * s1;
    int64_t var_16h;
    int64_t var_17h;
    char * var_18h;
    int64_t var_20h;
    int64_t var_22h;
    int64_t var_28h;
    rdi = argc;
    rsi = argv;
    rbx = rsi;
    fcn_00410670 (*(rsi));
    setlocale (6, 0x41b08a);
    bindtextdomain (0x41b1b1, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x41b1b1, rsi);
    edi = 0x40b710;
    *(0x006245c0) = 2;
    fcn_00418780 ();
    *(0x00625678) = 1;
    rax = 0x8000000000000000;
    *(0x00625730) = rax;
    eax = *(0x006245ac);
    *(0x006255d0) = 0;
    *(0x00625740) = 0;
    *(0x00625738) = 0xffffffffffffffff;
    *(0x00625698) = 0;
    if (eax == 2) {
        goto label_45;
    }
    if (eax != 3) {
        goto label_46;
    }
    *(0x006256f8) = 0;
    fcn_00411c30 (0, 7);
label_7:
    *(0x006256ef) = 0;
    *(0x006256f4) = 0;
    *(0x006256f0) = 0;
    *(0x006256ed) = 0;
    *(0x006256ec) = 0;
    *(0x006256d4) = 0;
    *(0x006256bc) = 0;
    *(0x006256b8) = 1;
    *(0x006256b6) = 0;
    *(0x006256b5) = 0;
    *(0x006256b0) = 0;
    *(0x006256a8) = 0;
    *(0x006256a0) = 0;
    *(0x00625725) = 0;
    rax = getenv ("QUOTING_STYLE");
    r12 = rax;
    if (rax != 0) {
        eax = fcn_0040acf0 (rax, 0x41ea00, 0x41e9c0, 4);
        if (eax < 0) {
            goto label_47;
        }
        rax = (int64_t) eax;
        fcn_00411c30 (0, *((rax*4 + 0x41e9c0)));
    }
label_2:
    *(0x00625670) = 0x50;
    rax = getenv ("COLUMNS");
    r12 = rax;
    if (rax != 0) {
        if (*(rax) != 0) {
            goto label_48;
        }
    }
label_3:
    eax = 0;
    rdx = rsp + 0x20;
    eax = ioctl (1, 0x5413);
    if (eax != 0xffffffff) {
        eax = *((rsp + 0x22));
        if (ax != 0) {
            goto label_49;
        }
    }
label_1:
    rax = getenv ("TABSIZE");
    *(0x00625680) = 8;
    r12 = rax;
    if (rax != 0) {
        eax = fcn_00412df0 (rax, 0, 0, rsp + 0x20, 0);
        if (eax != 0) {
            goto label_50;
        }
        rax = *((rsp + 0x20));
        *(0x00625680) = rax;
    }
label_9:
    r15d = 0;
    r14d = 0;
    r12d = 0;
    r13d = 1;
    do {
label_0:
        r8 = rsp + 0x20;
        ecx = 0x419900;
        rsi = rbx;
        edi = ebp;
        edx = "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1";
        *((rsp + 0x20)) = 0xffffffff;
        eax = fcn_00416e00 ();
        if (eax == 0xffffffff) {
            goto label_51;
        }
        eax += 0x83;
        if (eax > 0x113) {
            goto label_52;
        }
        /* switch table (276 cases) at 0x418bf0 */
label_46:
        if (eax == 1) {
            goto label_53;
        }
        abort ();
        *(0x006256ed) = r13b;
        *(0x006256f8) = 0;
    } while (1);
label_51:
    if (*(0x006256e0) == 0) {
        goto label_54;
    }
label_10:
    rax = imp.__libc_start_main;
    ecx = 3;
    edx = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    dl = (rdx != 0) ? 1 : 0;
    edx = (int32_t) dl;
    rax += rdx;
    *(0x006255c0) = rax;
    eax = fcn_00411c20 (0);
    edx = imp.__libc_start_main;
    r13d = eax;
    if (edx == 4) {
        goto label_55;
    }
    if (edx == 1) {
        goto label_55;
    }
    if (*(0x00625670) == 0) {
        eax = 0;
        if (edx != 0) {
            goto label_56;
        }
    }
    eax = r13d;
    eax &= 0xfffffffd;
    eax--;
    al = (eax == 0) ? 1 : 0;
    dl = (r13d == 6) ? 1 : 0;
    eax |= edx;
    eax = (int32_t) al;
    goto label_56;
    r12 = imp.__libc_start_main;
    goto label_0;
    fcn_0040afb0 ("--time", *(0x00625970), 0x419800, 0x4197d0, 4, *(0x006245b8));
    eax = *((rax*4 + 0x4197d0));
    *(0x006256f4) = eax;
    goto label_0;
    r14d = 1;
    fcn_0040afb0 ("--sort", *(0x00625970), 0x419860, 0x419830, 4, *(0x006245b8));
    eax = *((rax*4 + 0x419830));
    *(0x006256f0) = eax;
    goto label_0;
    *(0x006256e8) = 0x90;
    *(0x006256dc) = 0x90;
    *(0x006256e0) = 1;
    *(0x006245a0) = 1;
    goto label_0;
    *(0x00625698) = 0;
    goto label_0;
    fcn_0040afb0 ("--quoting-style", *(0x00625970), 0x41ea00, 0x41e9c0, 4, *(0x006245b8));
    fcn_00411c30 (0, *((rax*4 + 0x41e9c0)));
    goto label_0;
    fcn_0040afb0 ("--indicator-style", *(0x00625970), 0x419f60, 0x419f50, 4, *(0x006245b8));
    eax = *((rax*4 + 0x419f50));
    *(0x006256d4) = eax;
    goto label_0;
    rsi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_57;
    }
    eax = fcn_0040afb0 ("--hyperlink", rsi, 0x419780, 0x419740, 4, *(0x006245b8));
    edx = *((rax*4 + 0x419740));
    if (edx == 1) {
        goto label_57;
    }
    eax = 0;
    if (edx != 2) {
        goto label_58;
    }
    eax = isatty (1);
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_58;
    fcn_00412980 (0x10);
    rdx = imp.__libc_start_main;
    *(rax) = rdx;
    rdx = imp.__libc_start_main;
    *(0x006256a0) = rax;
    *((rax + 8)) = rdx;
    goto label_0;
    *(0x006256b4) = r13b;
    goto label_0;
    *(0x006256f8) = 0;
    r12d = "full-iso";
    goto label_0;
    fcn_0040afb0 ("--format", *(0x00625970), 0x4198c0, 0x419890, 4, *(0x006245b8));
    eax = *((rax*4 + 0x419890));
    *(0x006256f8) = eax;
    goto label_0;
    *(0x006256d4) = 2;
    goto label_0;
    *(0x006256b8) = 4;
    goto label_0;
    rsi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_59;
    }
    fcn_0040afb0 ("--color", rsi, 0x419780, 0x419740, 4, *(0x006245b8));
    eax = *((rax*4 + 0x419740));
    if (eax == 1) {
        goto label_59;
    }
    if (eax == 2) {
        goto label_60;
    }
label_6:
    *(0x006256d2) = 0;
    goto label_0;
    eax = fcn_0040dfa0 (*(0x00625970), 0x6256e8, 0x6256e0);
    if (eax != 0) {
        goto label_61;
    }
    eax = imp.__libc_start_main;
    *(0x006256dc) = eax;
    rax = imp.__libc_start_main;
    *(0x006245a0) = rax;
    goto label_0;
    rdi = imp.__libc_start_main;
    al = fcn_00404b40 ();
    if (al != 0) {
        goto label_0;
    }
    rax = fcn_00412290 (*(0x00625970));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid line width");
    r8 = rbx;
    rcx = rax;
    eax = 0;
    error (2, 0, "%s: %s");
    *(0x006256f0) = 3;
    r14d = 1;
    goto label_0;
    *(0x006256f4) = 2;
    goto label_0;
    *(0x006256f0) = 4;
    r14d = 1;
    goto label_0;
    *(0x006256ee) = r13b;
    goto label_0;
    *(0x006256f8) = 3;
    goto label_0;
    *(0x006256ec) = r13b;
    goto label_0;
    *(0x006256ef) = r13b;
    goto label_0;
    *(0x00625698) = r13b;
    goto label_0;
    *(0x006256d4) = 1;
    goto label_0;
    *(0x006256f8) = 0;
    *(0x006245a8) = 0;
    goto label_0;
    *(0x006256f8) = 4;
    goto label_0;
    r15d = 1;
    goto label_0;
    *(0x006256bc) = r13b;
    goto label_0;
    *(0x006256e8) = 0xb0;
    *(0x006256dc) = 0xb0;
    *(0x006256e0) = 1;
    *(0x006245a0) = 1;
    goto label_0;
    *(0x006256f8) = 0;
    *(0x006245a9) = 0;
    goto label_0;
    *(0x006256b0) = 2;
    *(0x006256f0) = 0xffffffff;
    if (*(0x006256f8) == 0) {
        goto label_62;
    }
label_30:
    *(0x006256ec) = 0;
    r14d = 1;
    *(0x006256d2) = 0;
    *(0x006256d1) = 0;
    goto label_0;
    *(0x006256b5) = r13b;
    goto label_0;
    *(0x006256f4) = 1;
    goto label_0;
    fcn_00411c30 (0, 7);
    goto label_0;
    *(0x006256b0) = 2;
    goto label_0;
    *(0x00625725) = r13b;
    goto label_0;
    *(0x006256f0) = 1;
    r14d = 1;
    goto label_0;
    *(0x006256f0) = 0xffffffff;
    r14d = 1;
    goto label_0;
    edx = 5;
    rax = dcgettext (0, "invalid tab size");
    rcx |= 0xffffffffffffffff;
    rax = fcn_00412c10 (*(0x00625970), 0, 0, rcx, 0x41b08a, rax);
    *(0x00625680) = rax;
    goto label_0;
    *(0x006256f0) = 2;
    r14d = 1;
    goto label_0;
    *(0x006256b6) = r13b;
    goto label_0;
    fcn_00411c30 (0, 5);
    goto label_0;
    fcn_00411c30 (0, 0);
    goto label_0;
    *(0x006256b8) = 5;
    goto label_0;
    rdx = imp.__libc_start_main;
    *((rsp + 8)) = rdx;
    fcn_00412980 (0x10);
    rdx = *((rsp + 8));
    *(rax) = rdx;
    rdx = imp.__libc_start_main;
    *((rax + 8)) = rdx;
    *(0x006256a8) = rax;
    goto label_0;
    *(0x006256b8) = 3;
    goto label_0;
    *(0x006245a8) = 0;
    goto label_0;
    *(0x006256d4) = 3;
    goto label_0;
    *(0x006256d8) = r13b;
    goto label_0;
    *(0x006256f8) = 2;
    goto label_0;
    fcn_00412980 (0x10);
    rdx = imp.__libc_start_main;
    *(rax) = 0x41b204;
    *((rax + 8)) = rdx;
    *(0x006256a8) = rax;
    fcn_00412980 (0x10);
    rdx = imp.__libc_start_main;
    *(rax) = 0x41b203;
    *((rax + 8)) = rdx;
    *(0x006256a8) = rax;
    goto label_0;
    if (*(0x006256b0) != 0) {
        goto label_0;
    }
    *(0x006256b0) = 1;
    goto label_0;
    if (*(0x006256f8) == 0) {
        goto label_0;
    }
    *(0x006256f8) = 1;
    goto label_0;
    eax = *(0x006245ac);
    rcx = *(str.8.29);
    if (eax == 1) {
        goto label_63;
    }
    esi = 0x41b135;
    eax = "vdir";
    if (eax != 2) {
        rsi = rax;
    }
label_29:
    eax = 0;
    r9d = "David MacKenzie";
    r8d = "Richard M. Stallman";
    fcn_00412840 (*(obj.stdout), rsi, "GNU coreutils");
    rax = exit (0);
label_49:
    *(0x00625670) = rax;
    goto label_1;
label_47:
    rax = fcn_00412290 (r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "ignoring invalid value of environment variable QUOTING_STYLE: %s");
    rcx = r12;
    eax = 0;
    rax = error (0, 0, rax);
    goto label_2;
label_48:
    rdi = rax;
    al = fcn_00404b40 ();
    if (al != 0) {
        goto label_3;
    }
    rax = fcn_00412290 (r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "ignoring invalid width in environment variable COLUMNS: %s");
    rcx = r12;
    eax = 0;
    eax = error (0, 0, rax);
    goto label_3;
label_55:
    eax = 0;
label_56:
    *(0x00625768) = al;
    *(0x00625768) &= 1;
    rax = fcn_00411be0 (0);
    *(0x00625690) = rax;
    if (r13d == 7) {
        goto label_64;
    }
label_31:
    eax = imp.__libc_start_main;
    if (eax <= 1) {
        goto label_65;
    }
    eax -= 2;
    esi = *((rax + str.__));
    r13 = rax + str___;
    if (sil == 0) {
        goto label_65;
    }
    do {
        r13++;
        fcn_00411c40 (*(0x00625690), rsi, 1);
        esi = *(r13);
    } while (sil != 0);
label_65:
    rax = fcn_00411be0 (0);
    rdi = rax;
    *(0x00625688) = rax;
    fcn_00411c40 (rdi, 0x3a, 1);
    if (*(0x006256d8) != 0) {
        if (*(0x006256f8) == 0) {
            goto label_66;
        }
label_13:
        *(0x006256d8) = 0;
    }
    eax = imp.__libc_start_main;
    edx = imp.__libc_start_main;
    eax--;
    if (eax <= 1) {
        if (r14b == 0) {
            goto label_67;
        }
    }
    if (edx != 0) {
        goto label_17;
    }
label_12:
    if (r12 != 0) {
        goto label_39;
    }
    goto label_68;
    do {
        r12 += 6;
label_39:
        eax = strncmp (r12, "posix-", 6);
        if (eax != 0) {
            goto label_69;
        }
        al = fcn_0040c190 (2);
    } while (al != 0);
label_17:
    r12 = *(0x0062463c);
    if (*(0x006256d2) != 0) {
        goto label_70;
    }
label_20:
    if (*(0x006256b8) == 1) {
        goto label_71;
    }
label_18:
    if (*(0x006256b6) != 0) {
        rax = fcn_0040ca80 (0x1e, 0, 0x404800, 0x404810, 0x404850);
        *(0x00625788) = rax;
        if (rax == 0) {
            goto label_72;
        }
        r8d = imp.free;
        ecx = imp.malloc;
        edx = 0;
        esi = 0;
        edi = 0x6254a0;
        _obstack_begin ();
    }
    rax = getenv (0x41b360);
    rax = fcn_00417410 (rax);
    *(0x00625668) = rax;
    eax = imp.__libc_start_main;
    eax -= 2;
    eax &= 0xfffffffd;
    if (eax != 0) {
        if (*(0x006256f8) != 0) {
            goto label_73;
        }
    }
label_14:
    *(0x00625661) = 1;
    eax = 0;
label_15:
    *(0x00625660) = al;
    *(0x00625660) &= 1;
    if (*(0x006256d8) != 0) {
        goto label_74;
    }
label_22:
    if (*(0x006256d1) != 0) {
        goto label_75;
    }
label_27:
    r13d = ebp;
    *(0x00625778) = 0x64;
    rax = fcn_00412980 (0x4e20);
    r13d -= r12d;
    *(0x00625770) = 0;
    *(0x00625780) = rax;
    fcn_004084b0 ();
    if (r13d <= 0) {
        goto label_76;
    }
    do {
        r12++;
        fcn_00408580 (*((rbx + r12*8)), 0, 1, 0x41b08a);
    } while (ebp > r12d);
    if (*(0x00625770) != 0) {
        goto label_77;
    }
label_23:
    r13d--;
    rbx = imp.__libc_start_main;
    if (r13d > 0) {
        goto label_8;
    }
    goto label_78;
    do {
label_4:
        edx = *((rbx + 0x10));
        fcn_004092a0 (rdi, *((rbx + 8)), rdx);
        free (*(rbx));
        free (*((rbx + 8)));
        free (rbx);
        *(0x00625678) = 1;
label_5:
        rbx = imp.__libc_start_main;
label_8:
        if (rbx == 0) {
            goto label_24;
        }
        rax = *((rbx + 0x18));
        rdi = *(rbx);
        *(0x00625740) = rax;
        rax = imp.__libc_start_main;
    } while (rax == 0);
    if (rdi != 0) {
        goto label_4;
    }
    rdx = imp.__libc_start_main;
    rcx = imp.__libc_start_main;
    rcx -= *(0x006254b0);
    if (rcx <= 0xf) {
        goto label_79;
    }
    rcx = rdx - 0x10;
    rsi = rsp + 0x20;
    *(0x006254b8) = rcx;
    rcx = *((rdx - 0x10));
    rdx = *((rdx - 8));
    *((rsp + 0x20)) = rcx;
    *((rsp + 0x28)) = rdx;
    rax = fcn_0040d260 (rax);
    if (rax == 0) {
        goto label_80;
    }
    free (rax);
    free (*(rbx));
    free (*((rbx + 8)));
    free (rbx);
    goto label_5;
label_60:
    eax = isatty (1);
    if (eax == 0) {
        goto label_6;
    }
label_59:
    *(0x006256d2) = r13b;
    *(0x00625680) = 0;
    goto label_0;
label_57:
    eax = 1;
label_58:
    *(0x006256d1) = al;
    *(0x006256d1) &= 1;
    goto label_0;
    do {
label_24:
        if (*(0x006256d2) != 0) {
            if (*(0x006256d0) != 0) {
                goto label_81;
            }
        }
label_11:
        if (*(0x006256d8) != 0) {
            goto label_82;
        }
label_28:
        rbx = imp.__libc_start_main;
        if (rbx != 0) {
            rax = fcn_0040c5f0 (rbx);
            if (rax != 0) {
                goto label_83;
            }
            fcn_0040ccc0 (rbx);
        }
        eax = imp.__libc_start_main;
        return rax;
label_53:
        eax = isatty (1);
        if (eax != 0) {
            goto label_84;
        }
        *(0x006256f8) = 1;
        goto label_7;
label_45:
        *(0x006256f8) = 2;
        fcn_00411c30 (0, 7);
        goto label_7;
label_76:
        if (*(0x006256b5) == 0) {
            goto label_85;
        }
        fcn_00408580 (0x41d794, 3, 1, 0x41b08a);
label_16:
        if (*(0x00625770) != 0) {
            goto label_77;
        }
label_78:
        rbx = imp.__libc_start_main;
    } while (rbx == 0);
    if (*((rbx + 0x18)) != 0) {
        goto label_8;
    }
    *(0x00625678) = 0;
    goto label_8;
label_50:
    rax = fcn_00412290 (r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "ignoring invalid tab size in environment variable TABSIZE: %s");
    rcx = r12;
    eax = 0;
    error (0, 0, rax);
    goto label_9;
label_54:
    rax = getenv ("LS_BLOCK_SIZE");
    r13 = rax;
    fcn_0040dfa0 (rax, 0x6256e8, 0x6256e0);
    if (r13 == 0) {
        goto label_86;
    }
label_41:
    eax = imp.__libc_start_main;
    *(0x006256dc) = eax;
    rax = imp.__libc_start_main;
    *(0x006245a0) = rax;
label_42:
    if (r15b == 0) {
        goto label_10;
    }
    *(0x006256e8) = 0;
    *(0x006256e0) = 0x400;
    goto label_10;
label_81:
    if (*(0x00624420) == 2) {
        rax = *(0x00624428);
        if (*(rax) == 0x5b1b) {
            goto label_87;
        }
    }
label_36:
    fcn_00405d40 ();
label_37:
    rdi = stdout;
    fflush_unlocked ();
    edi = 0;
    rax = fcn_00405af0 ();
    ebx = imp.__libc_start_main;
    if (ebx == 0) {
        goto label_88;
    }
    do {
        raise (0x13);
        ebx--;
    } while (ebx != 0);
label_88:
    edi = imp.__libc_start_main;
    if (edi == 0) {
        goto label_11;
    }
    raise (rdi);
    goto label_11;
label_66:
    if (*(0x006256d1) == 0) {
        goto label_12;
    }
    goto label_13;
label_73:
    if (*(0x00625725) != 0) {
        goto label_14;
    }
    if (*(0x006256ec) != 0) {
        goto label_14;
    }
    *(0x00625661) = 0;
    eax = 1;
    if (*(0x006256b6) != 0) {
        goto label_15;
    }
    if (*(0x006256d2) != 0) {
        goto label_15;
    }
    if (*(0x006256d4) != 0) {
        goto label_15;
    }
    eax = *(0x006256b4);
    goto label_15;
label_85:
    fcn_00404d90 (0x41d794, 0, 1);
    goto label_16;
label_67:
    if (edx == 0) {
        goto label_12;
    }
    *(0x006256f0) = 4;
    goto label_17;
label_71:
    eax = 2;
    if (*(0x006256b5) == 0) {
        if (*(0x006256d4) == 3) {
            goto label_89;
        }
        eax -= eax;
        eax &= 0xfffffffe;
        eax += 4;
    }
label_89:
    *(0x006256b8) = eax;
    goto label_18;
label_70:
    rax = getenv ("LS_COLORS");
    *((rsp + 0x18)) = rax;
    if (rax == 0) {
        goto label_90;
    }
    if (*(rax) == 0) {
        goto label_90;
    }
    *((rsp + 0x15)) = 0x3f3f;
    *((rsp + 0x17)) = 0;
    rax = fcn_00412bb0 (rax);
    *(0x006256c0) = rax;
    *((rsp + 0x20)) = rax;
label_19:
    rax = *((rsp + 0x18));
    edx = *(rax);
    if (dl == 0x2a) {
        goto label_91;
    }
    if (dl == 0x3a) {
        goto label_92;
    }
    if (dl == 0) {
        goto label_93;
    }
    rdx = rax + 1;
    *((rsp + 0x18)) = rdx;
    edx = *(rax);
    *((rsp + 0x15)) = dl;
    if (*((rax + 1)) == 0) {
        goto label_38;
    }
    rdx = rax + 2;
    *((rsp + 0x18)) = rdx;
    edx = *((rax + 1));
    *((rsp + 0x16)) = dl;
    rdx = rax + 3;
    *((rsp + 0x18)) = rdx;
    if (*((rax + 2)) != 0x3d) {
        goto label_38;
    }
    r13d = 0;
    esi = 0x41b1c8;
    while (eax != 0) {
        r13++;
        rsi = *((r13*8 + 0x419e80));
        if (rsi == 0) {
            goto label_94;
        }
        eax = strcmp (rsp + 0x15, rsi);
    }
    rcx = (int64_t) r13d;
    rax = *((rsp + 0x20));
    rcx <<= 4;
    rcx += 0x624420;
    *((rcx + 8)) = rax;
    al = fcn_00404860 (rsp + 0x20, rsp + 0x18, 0, rcx);
    if (al != 0) {
        goto label_19;
    }
label_94:
    rax = fcn_00412290 (rsp + 0x15);
    edx = 5;
    r13 = rax;
    rax = dcgettext (0, "unrecognized prefix: %s");
    rcx = r13;
    eax = 0;
    error (0, 0, rax);
label_38:
    edx = 5;
    rax = dcgettext (0, "unparsable value for LS_COLORS environment variable");
    eax = 0;
    error (0, 0, rax);
    free (*(0x006256c0));
    rdi = imp.__libc_start_main;
    while (rdi != 0) {
        r13 = *((rdi + 0x20));
        free (rdi);
        rdi = r13;
    }
    *(0x006256d2) = 0;
label_93:
    if (*(0x00624490) == 6) {
        goto label_95;
    }
label_32:
    if (*(0x006256d2) == 0) {
        goto label_20;
    }
    al = fcn_00404ae0 (0xd);
    if (al == 0) {
        al = fcn_00404ae0 (0xe);
        if (al == 0) {
            goto label_96;
        }
        if (*(0x00625750) == 0) {
            goto label_96;
        }
    }
label_21:
    *(0x006256bd) = 1;
    goto label_20;
label_96:
    al = fcn_00404ae0 (0xc);
    if (al == 0) {
        goto label_20;
    }
    if (*(0x006256f8) != 0) {
        goto label_20;
    }
    goto label_21;
label_74:
    edx = 0;
    esi = 0;
    r8d = imp.free;
    ecx = imp.malloc;
    edi = 0x625560;
    _obstack_begin ();
    r8d = imp.free;
    edx = 0;
    esi = 0;
    ecx = imp.malloc;
    edi = 0x625500;
    _obstack_begin ();
    goto label_22;
label_77:
    fcn_00404f40 ();
    if (*(0x006256b5) == 0) {
        goto label_97;
    }
label_35:
    if (*(0x00625770) == 0) {
        goto label_23;
    }
    fcn_00407ca0 ();
    if (*(0x00625740) == 0) {
        goto label_24;
    }
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (*((rdi + 0x30)) <= rax) {
        goto label_98;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0xa;
label_44:
    *(0x006255b8)++;
    rbx = imp.__libc_start_main;
    goto label_8;
label_75:
    eax = 0;
    while (eax <= 0x5a) {
        edx = 1;
        if (eax < 0x41) {
            esi = rax - 0x30;
            if (esi <= 9) {
                goto label_25;
            }
            ecx -= 0x2d;
            if (ecx <= 1) {
                goto label_99;
            }
label_26:
            if (eax == 0x7e) {
                goto label_99;
            }
            dl = (eax == 0x5f) ? 1 : 0;
        }
label_25:
        *((rax + 0x6253a0)) |= dl;
        rax++;
        if (rax == 0x100) {
            goto label_100;
        }
        ecx = eax;
    }
    esi = rax - 0x61;
    edx = 1;
    if (esi <= 0x19) {
        goto label_25;
    }
    ecx -= 0x2d;
    if (ecx > 1) {
        goto label_26;
    }
label_99:
    edx = 1;
    goto label_25;
label_100:
    rax = fcn_00412d40 ();
    edx = 0x41b08a;
    if (rax == 0) {
        rax = rdx;
    }
    *(0x00625748) = rax;
    goto label_27;
label_82:
    esi = 0x625560;
    fcn_00405390 ("//DIRED//");
    esi = 0x625500;
    fcn_00405390 ("//SUBDIRED//");
    eax = fcn_00411c20 (*(0x00625690));
    esi = "//DIRED-OPTIONS// --quoting-style=%s\n";
    edi = 1;
    rdx = *((rax*8 + 0x41ea00));
    eax = 0;
    printf_chk ();
    goto label_28;
label_63:
    esi = 0x41b1b8;
    goto label_29;
label_62:
    eax = isatty (1);
    eax -= eax;
    eax += 2;
    *(0x006256f8) = eax;
    goto label_30;
label_69:
    if (*(r12) == 0x2b) {
        goto label_101;
    }
label_40:
    rax = fcn_0040acf0 (r12, 0x419fa0, 0x419f90, 4);
    if (rax < 0) {
        goto label_102;
    }
    if (rax == 1) {
        goto label_103;
    }
    if (rax <= 1) {
        goto label_104;
    }
    if (rax == 2) {
        goto label_105;
    }
    if (rax == 3) {
        al = fcn_0040c190 (2);
        if (al == 0) {
            goto label_34;
        }
        edx = 2;
        rax = dcgettext (0, *(str._b__e___Y));
        edx = 2;
        *(str._b__e___Y) = rax;
        rax = dcgettext (0, *(str._b__e__H:_M));
        *(str._b__e__H:_M) = rax;
    }
label_34:
    fcn_00404bb0 ();
    goto label_17;
label_84:
    *(0x006256f8) = 2;
    rax = fcn_00411c30 (0, 3);
    *(0x00625698) = 1;
    goto label_7;
label_64:
    fcn_00411c40 (rax, 0x20, 1);
    goto label_31;
label_90:
    rax = getenv ("COLORTERM");
    if (rax == 0) {
        goto label_106;
    }
    if (*(rax) != 0) {
        goto label_32;
    }
label_106:
    rax = getenv (0x41b336);
    r14 = rax;
    if (rax == 0) {
        goto label_107;
    }
    if (*(rax) == 0) {
        goto label_107;
    }
    r15d = "# Configuration file for dircolors, a utility to help you set the";
    r13 |= 0xffffffffffffffff;
    while (eax != 0) {
label_33:
        eax = 0;
        rdi = r15;
        rcx = r13;
        __asm ("repne scasb al, byte [rdi]");
        rax = rcx;
        rax = ~rax;
        r15 += rax;
        rax = r15;
        rax -= str._Configuration_file_for_dircolors__a_utility_to_help_you_set_the;
        if (rax > 0x104c) {
            goto label_107;
        }
        eax = strncmp (r15, "TERM ", 5);
    }
    eax = fcn_004159a0 (r15 + 5, r14, 0);
    if (eax != 0) {
        goto label_33;
    }
    goto label_32;
label_104:
    if (rax != 0) {
        goto label_34;
    }
    *(str._b__e__H:_M) = 0x41b2f6;
    *(str._b__e___Y) = 0x41b2f6;
    goto label_34;
label_97:
    esi = 1;
    fcn_00405140 (0);
    goto label_35;
label_87:
    if (*(0x00624430) != 1) {
        goto label_36;
    }
    rax = *(0x00624438);
    if (*(rax) != 0x6d) {
        goto label_36;
    }
    goto label_37;
label_95:
    eax = strncmp (*(str.01_36), "target", 6);
    if (eax != 0) {
        goto label_32;
    }
    *(0x00625750) = 1;
    goto label_32;
label_92:
    rax++;
    *((rsp + 0x18)) = rax;
    goto label_19;
label_91:
    rax = fcn_00412980 (0x28);
    rdi = rsp + 0x20;
    r13 = rax;
    rax = imp.__libc_start_main;
    rcx = r13;
    *(0x006256c8) = r13;
    *((r13 + 0x20)) = rax;
    rax = *((rsp + 0x20));
    *((r13 + 8)) = rax;
    al = fcn_00404860 (rdi, rsp + 0x18, 1, rcx);
    if (al == 0) {
        goto label_38;
    }
    rax = *((rsp + 0x18));
    rdx = rax + 1;
    *((rsp + 0x18)) = rdx;
    if (*(rax) != 0x3d) {
        goto label_38;
    }
    rax = *((rsp + 0x20));
    *((r13 + 0x18)) = rax;
    al = fcn_00404860 (rsp + 0x20, rsp + 0x18, 0, r13 + 0x10);
    if (al != 0) {
        goto label_19;
    }
    goto label_38;
    rax = fcn_0040a530 (0);
label_107:
    *(0x006256d2) = 0;
    goto label_32;
label_102:
    fcn_0040ae10 ("time style", r12, rax);
    rbx = stderr;
    edx = 5;
    rax = dcgettext (0, "Valid arguments are:\n");
    rsi = rbx;
    ebx = 0x419fa0;
    rdi = rax;
    eax = fputs_unlocked ();
    ecx = "full-iso";
    do {
        rbx += 8;
        edx = "  - [posix-]%s\n";
        esi = 1;
        eax = 0;
        rdi = stderr;
        fprintf_chk ();
        rcx = *(rbx);
    } while (rcx != 0);
    rbx = stderr;
    edx = 5;
    rax = dcgettext (0, "  - +FORMAT (e.g., +%H:%M) for a 'date'-style format\n");
    rdi = rax;
    rsi = rbx;
    fputs_unlocked ();
label_52:
    fcn_0040a530 (2);
label_101:
    r12++;
    rax = strchr (r12, 0xa);
    r13 = rax;
    if (rax == 0) {
        goto label_108;
    }
    r14 = rax + 1;
    rax = strchr (r14, 0xa);
    if (rax != 0) {
        goto label_109;
    }
    *(r13) = 0;
label_43:
    *(str._b__e___Y) = r12;
    *(str._b__e__H:_M) = r14;
    goto label_34;
label_68:
    rax = getenv ("TIME_STYLE");
    r12 = rax;
    if (rax != 0) {
        goto label_39;
    }
    r12d = 0x41dd6c;
    goto label_40;
label_86:
    rax = getenv (0x41b28c);
    if (rax != 0) {
        goto label_41;
    }
    goto label_42;
label_105:
    *(str._b__e___Y) = 0x41b31d;
    *(str._b__e__H:_M) = 0x41b311;
    goto label_34;
label_103:
    *(str._b__e__H:_M) = 0x41b30e;
    *(str._b__e___Y) = 0x41b30e;
    goto label_34;
label_108:
    r14 = r12;
    goto label_43;
label_98:
    esi = 0xa;
    overflow ();
    goto label_44;
label_109:
    rax = fcn_00412290 (r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid time style format %s");
    rcx = rbx;
    eax = 0;
    error (2, 0, rax);
label_80:
    eax = assert_fail ("found", "src/ls.c", 0x638, "main");
label_61:
    r8 = imp.__libc_start_main;
    fcn_00413220 (eax, *((rsp + 0x20)), 0, 0x419900);
label_79:
    assert_fail ("dev_ino_size <= obstack_object_size (&dev_ino_obstack)", "src/ls.c", 0x402, "dev_ino_pop");
label_83:
    assert_fail ("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", 0x66c, "main");
label_72:
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40474b */
#include <stdint.h>
 
int32_t fcn_0040474b (void) {
    eax = 0x624648;
    if (rax != 0x624648) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x624648;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4047a1 */
#include <stdint.h>
 
int64_t fcn_004047a1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00624688) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x623e48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00624690) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040474b ();
    *(0x00624688) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4047f8 */
#include <stdint.h>
 
int64_t fcn_004047f8 (void) {
    do {
        esi = 0x624648;
        ecx = 2;
        rsi -= 0x624648;
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
            edi = 0x624648;
            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404860 */
#include <stdint.h>
 
int32_t fcn_00404860 (int64_t arg1, char * arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r11 = rcx;
    r8 = *(rsi);
    r10d = 0;
    r9 = *(rdi);
    eax = 1;
    rbx = 0x7e000000000000;
    while (r12b <= 0x3e) {
        r8 += 2;
        ecx &= 0x1f;
label_0:
        *(r9) = cl;
        r10++;
        r9++;
label_4:
        ecx = *(r8);
        if (cl == 0x3d) {
            goto label_6;
        }
        if (cl <= 0x3d) {
label_1:
            goto label_7;
        }
        if (cl == 0x5c) {
            goto label_8;
        }
        if (cl != 0x5e) {
            goto label_2;
        }
        ecx = *((r8 + 1));
        r13 = r8 + 1;
        r12d = rcx - 0x40;
    }
    if (cl == 0x3f) {
        goto label_9;
    }
    r8 = r13;
    eax = 0;
label_3:
    *(rdi) = r9;
    r12 = rbx;
    r13 = rbx;
    *(rsi) = r8;
    r14 = rbx;
    *(r11) = r10;
    return eax;
label_8:
    ecx = *((r8 + 1));
    r8 += 2;
    if (cl > 0x78) {
        goto label_0;
    }
    r12d = (int32_t) cl;
    /* switch table (121 cases) at 0x418800 */
label_7:
    if (cl == 0) {
        goto label_10;
    }
    if (cl == 0x3a) {
        goto label_10;
    }
label_2:
    r8++;
    *(r9) = cl;
    r10++;
    r9++;
    ecx = *(r8);
    if (cl != 0x3d) {
        goto label_1;
    }
label_6:
    if (bpl == 0) {
        goto label_2;
    }
    eax = edx;
    goto label_3;
label_10:
    eax = 1;
    goto label_3;
label_9:
    *(r9) = 0x7f;
    r10++;
    r9++;
    r8 = r13;
    goto label_4;
    r12d = *(r8);
    ecx -= 0x30;
    r13d = r12 - 0x30;
    if (r13b > 7) {
        goto label_0;
    }
    do {
        r8++;
        ecx = r12 + rcx*8 - 0x30;
        r12d = *(r8);
        r13d = r12 - 0x30;
    } while (r13b <= 7);
    goto label_0;
    r13d = 0;
label_5:
    r12d = *(r8);
    ecx = r12 - 0x30;
    if (cl > 0x36) {
        goto label_11;
    }
    do {
        r14 = rax;
        r14 <<= cl;
        if ((r14d & 0x7e0000) != 0) {
            goto label_12;
        }
        if ((r14 & rbx) != 0) {
            goto label_13;
        }
        if ((r14d & 0x3ff) == 0) {
            goto label_11;
        }
        r8++;
        r13d <<= 4;
        r13d = r12 + r13 - 0x30;
        r12d = *(r8);
        ecx = r12 - 0x30;
    } while (cl <= 0x36);
label_11:
    *(r9) = r13b;
    r10++;
    r9++;
    goto label_4;
    ecx = 7;
    goto label_0;
    ecx = 0x7f;
    goto label_0;
    ecx = 0x20;
    goto label_0;
    ecx = 0xc;
    goto label_0;
    ecx = 0x1b;
    goto label_0;
    ecx = 0xb;
    goto label_0;
    ecx = 9;
    goto label_0;
    ecx = 0xd;
    goto label_0;
    ecx = 0xa;
    goto label_0;
    ecx = 8;
    goto label_0;
label_12:
    r13d <<= 4;
    r8++;
    r13d = r12 + r13 - 0x37;
    goto label_5;
label_13:
    r13d <<= 4;
    r8++;
    r13d = r12 + r13 - 0x57;
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404ae0 */
#include <stdint.h>
 
int32_t fcn_00404ae0 (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    rdi <<= 4;
    rdx = *((rdi + 0x624420));
    if (rdx != 0) {
        rsi = *((rdi + 0x624428));
        if (rdx == 1) {
            goto label_0;
        }
        eax = 1;
        if (rdx == 2) {
            goto label_1;
        }
    }
    return eax;
label_0:
    al = (*(rsi) != 0x30) ? 1 : 0;
    return eax;
label_1:
    edi = 0x41b02d;
    ecx = 2;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(rsi) > 0x30) ? 1 : 0;
    al = (al != 0) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404b40 */
#include <stdint.h>
 
uint64_t fcn_00404b40 (void) {
    int64_t var_8h;
    eax = fcn_004132b0 (rdi, 0, 0, rsp + 8, 0x41b08a);
    if (eax != 0) {
        if (eax == 1) {
            *(0x00625670) = 0xffffffffffffffff;
            eax = 1;
            return eax;
        }
        eax = 0;
        return eax;
    }
    rax = *((rsp + 8));
    *(0x00625670) = rax;
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404bb0 */
#include <stdint.h>
 
int64_t fcn_00404bb0 (void) {
    int64_t var_8h;
    uint32_t var_10h;
    uint32_t var_18h;
    int64_t var_20h;
    int64_t var_620h;
    esi = 0;
label_1:
    rax = *((rsi + 0x624410));
    edx = *(rax);
    if (dl == 0) {
        goto label_8;
    }
    do {
        ecx = *((rax + 1));
        if (dl == 0x25) {
            goto label_9;
        }
label_0:
        edx = ecx;
label_3:
        rax++;
    } while (dl != 0);
label_8:
    eax = 0;
    goto label_10;
label_9:
    if (cl == 0x25) {
        goto label_11;
    }
    if (cl != 0x62) {
        goto label_0;
    }
label_10:
    *((rsp + rsi + 0x10)) = rax;
    rsi += 8;
    if (rsi != 0x10) {
        goto label_1;
    }
    r15d = 5;
    if (*((rsp + 0x10)) == 0) {
        goto label_12;
    }
label_2:
    r14 = rsp + 0x620;
    rbx = rsp + 0x20;
    r12d = 0x2000e;
    ebp = 0;
    do {
        *((rsp + 8)) = r15;
        rax = nl_langinfo (r12d);
        rdi = rax;
        r13 = rax;
        rax = strchr (rdi, 0x25);
        if (rax != 0) {
            goto label_4;
        }
        rax = fcn_0040e570 (r13, rbx, 0x80, rsp + 8, 0, 0);
        if (rax > 0x7f) {
            goto label_4;
        }
        rax = *((rsp + 8));
        if (rbp < rax) {
        }
        rbx -= 0xffffffffffffff80;
        r12d++;
    } while (rbx != r14);
    if (r15 <= rbp) {
        goto label_13;
    }
    r15 = rbp;
    goto label_2;
label_11:
    edx = *((rax + 2));
    rax++;
    goto label_3;
label_5:
    r12 += 8;
    rbx += 8;
    if (r12 != 0x10) {
        goto label_14;
    }
    *(0x00624788) = 1;
label_4:
    return rax;
label_12:
    if (*((rsp + 0x18)) != 0) {
        goto label_2;
    }
    goto label_4;
label_13:
    rbx = rsp + 0x10;
    r12d = 0;
label_14:
    r10 = r12 * 0xc0;
    rbp = *((r12 + 0x624410));
    r15 = rsp + 0x20;
    r13 = r10 + 0x6247a0;
    goto label_15;
label_6:
    r9 = rax;
    r9 -= rbp;
    if (r9 > 0x80) {
        goto label_4;
    }
    rax += 2;
    edx = 1;
    rdi = r13;
    r8d = "%.*s%s%s";
    rcx = 0xffffffffffffffff;
    eax = 0;
    esi = 0x80;
    eax = snprintf_chk ();
label_7:
    if (eax > 0x7f) {
        goto label_4;
    }
    r15 -= 0xffffffffffffff80;
    r13 -= 0xffffffffffffff80;
    if (r15 == r14) {
        goto label_5;
    }
label_15:
    rax = *(rbx);
    if (rax != 0) {
        goto label_6;
    }
    snprintf (r13, 0x80, 0x41d784, rbp);
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404d90 */
#include <stdint.h>
 
uint64_t fcn_00404d90 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13d = edx;
    r12 = rsi;
    rax = fcn_00412980 (0x20);
    rbx = rax;
    eax = 0;
    if (r12 != 0) {
        rax = fcn_00412bb0 (r12);
    }
    *((rbx + 8)) = rax;
    eax = 0;
    if (rbp != 0) {
        rax = fcn_00412bb0 (rbp);
    }
    *(rbx) = rax;
    rax = imp.__libc_start_main;
    *((rbx + 0x10)) = r13b;
    *((rbx + 0x18)) = rax;
    *(0x00625740) = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404e20 */
#include <stdint.h>
 
uint64_t fcn_00404e20 (int64_t arg1) {
    int64_t var_eh;
    rdi = arg1;
    rdx = rdi;
    rbx = rdi;
    fcn_00411cd0 (rsp + 0xe, 2, rdx, 0xffffffffffffffff, *(0x00625690));
    edx = *((rsp + 0xe));
    if (*(rbx) != dl) {
        eax = 1;
        return eax;
    }
    rax = strlen (rbx);
    al = (rax != rbp) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404e80 */
#include <stdint.h>
 
uint64_t fcn_00404e80 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12d = esi;
    rbx = rdi;
    strlen (rdi);
    rcx = rax + 1;
    eax = 3;
    rdx:rax = rax * rcx;
    __asm ("seto dl");
    if (rax < 0) {
        goto label_1;
    }
    edx = (int32_t) dl;
    if (rdx != 0) {
        goto label_1;
    }
    r13 = 0xffffffffffffffff;
    rax = fcn_00412980 (rcx + rcx*2);
    r14 = rax;
label_0:
    eax = *(rbx);
    if (al == 0) {
        goto label_2;
    }
    do {
        rbx++;
        if (al == 0x2f) {
            if (r12b != 0) {
                goto label_3;
            }
        }
        edx = (int32_t) al;
        r8 = rdx;
        if (*((rdx + 0x6253a0)) == 0) {
            goto label_4;
        }
        *(rbp) = al;
        eax = *(rbx);
        rbp++;
    } while (al != 0);
label_2:
    *(rbp) = 0;
    rax = r14;
    return rax;
label_4:
    rdi = rbp;
    ecx = "%%%02x";
    rdx = r13;
    esi = 1;
    eax = 0;
    rbp += 3;
    sprintf_chk ();
    goto label_0;
label_3:
    *(rbp) = 0x2f;
    rbp++;
    goto label_0;
label_1:
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x404f40 */
#include <stdint.h>
 
int64_t fcn_00404f40 (void) {
    rbx = imp.__libc_start_main;
    rax = imp.__libc_start_main;
    rax >>= 1;
    rax += rbx;
    if (rax > *(0x00625758)) {
        goto label_1;
    }
label_0:
    if (rbx == 0) {
        goto label_2;
    }
    rax = imp.__libc_start_main;
    rdx = imp.__libc_start_main;
    rcx = rax + rbx*8;
    do {
        *(rax) = rdx;
        rax += 8;
        rdx += 0xc8;
    } while (rcx != rax);
label_2:
    if (*(0x006256f0) == 0xffffffff) {
        goto label_3;
    }
    eax = setjmp (0x6246c0);
    r8d = imp.__libc_start_main;
    if (eax == 0) {
        goto label_4;
    }
    if (r8d == 3) {
        goto label_5;
    }
    rsi = imp.__libc_start_main;
    rdi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_6;
    }
    rdx = imp.__libc_start_main;
    rax = rdi;
    rcx = rdi + rsi*8;
    do {
        *(rax) = rdx;
        rax += 8;
        rdx += 0xc8;
    } while (rax != rcx);
label_6:
    eax = 1;
    do {
        edx = 0;
        rax = (int64_t) eax;
        if (r8d == 4) {
            edx = imp.__libc_start_main;
        }
        ecx = *(0x006256b4);
        edx += r8d;
        rdx = rax + rdx*2;
        eax = *(0x006256ef);
        rax = rax + rdx*2;
        rax = rcx + rax*2;
        fcn_0040edd0 (rdi, rsi, *((rax*8 + 0x419580)));
label_3:
        return rax;
label_4:
        rsi = imp.__libc_start_main;
        rdi = imp.__libc_start_main;
    } while (1);
label_1:
    free (*(0x00625760));
    edx = 0x18;
    rax = rdx;
    rdx:rax = rax * rbx;
    __asm ("seto dl");
    eax = 1;
    edx = (int32_t) dl;
    __asm ("cmovs rdx, rax");
    if (rdx == 0) {
        rdi <<= 3;
        rax = fcn_00412980 (rbx + rbx*2);
        rbx = imp.__libc_start_main;
        *(0x00625760) = rax;
        rax = rbx * 3;
        *(0x00625758) = rax;
        goto label_0;
    }
    fcn_00412bd0 ();
label_5:
    return assert_fail ("sort_type != sort_version", "src/ls.c", 0xee5, "sort_files");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4050d0 */
#include <stdint.h>
 
int64_t fcn_004050d0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    errno_location ();
    rsi = rbp;
    rdi = rbx;
    *(rax) = 0;
    return strcoll ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405140 */
#include <stdint.h>
 
uint64_t fcn_00405140 (int64_t arg1) {
    rdi = arg1;
    r13 = rdi;
    r12d = (int32_t) sil;
    if (rdi != 0) {
        if (*(0x00625788) == 0) {
            goto label_4;
        }
        rax = fcn_00404d90 (0, rdi, 0);
    }
label_4:
    rbx = imp.__libc_start_main;
    do {
label_0:
        rbx--;
        if (rbx == -1) {
            goto label_5;
        }
label_1:
        rax = imp.__libc_start_main;
        rbp = *((rax + rbx*8));
        eax = *((rbp + 0xa8));
        if (eax == 3) {
            goto label_6;
        }
    } while (eax != 9);
label_6:
    r14 = *(rbp);
    if (r13 == 0) {
        goto label_7;
    }
    rax = fcn_0040b870 (r14);
    if (*(rax) == 0x2e) {
        goto label_8;
    }
label_3:
    if (*(r14) == 0x2f) {
        goto label_7;
    }
    rsi = r14;
    edx = 0;
    rdi = r13;
    rax = fcn_0040bb70 ();
    r14 = rax;
    fcn_00404d90 (rax, *((rbp + 8)), r12d);
    free (r14);
label_2:
    if (*((rbp + 0xa8)) != 9) {
        goto label_0;
    }
    rbx--;
    free (*(rbp));
    free (*((rbp + 8)));
    free (*((rbp + 0x10)));
    if (rbx != -1) {
        goto label_1;
    }
label_5:
    rdx = imp.__libc_start_main;
    if (rdx == 0) {
        goto label_9;
    }
    rsi = imp.__libc_start_main;
    rdi = rsi + rdx*8;
    rax = rsi;
    edx = 0;
    do {
        rcx = *(rax);
        *((rsi + rdx*8)) = rcx;
        cl = (*((rcx + 0xa8)) != 9) ? 1 : 0;
        rax += 8;
        ecx = (int32_t) cl;
        rdx += rcx;
    } while (rdi != rax);
label_9:
    *(0x00625770) = rdx;
    return rax;
label_7:
    fcn_00404d90 (r14, *((rbp + 8)), r12d);
    goto label_2;
label_8:
    edx = 0;
    dl = (*((rax + 1)) == 0x2e) ? 1 : 0;
    eax = *((rax + rdx + 1));
    if (al == 0) {
        goto label_0;
    }
    if (al == 0x2f) {
        goto label_0;
    }
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4052c0 */
#include <stdint.h>
 
int64_t fcn_004052c0 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rdi >= rsi) {
        goto label_3;
    }
    r12 = rsi;
    rbx = rdi;
    while (rcx != 0) {
        rax = r12;
        edx = 0;
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        edx = 0;
        r9 = rax;
        rax = rbp;
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        if (r9 <= rax) {
            goto label_4;
        }
        if (rsi >= r8) {
            goto label_5;
        }
        rax = rsi + 1;
        *((rdi + 0x28)) = rax;
        *(rsi) = 9;
label_2:
        rax = rbx;
        edx = 0;
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        rcx += rbx;
        rbx = rcx;
        rbx -= rdx;
        if (rbx >= r12) {
            goto label_6;
        }
label_0:
        rdi = stdout;
        rcx = imp.__libc_start_main;
        rbp = rbx + 1;
        rsi = *((rdi + 0x28));
        r8 = *((rdi + 0x30));
    }
label_4:
    if (rsi >= r8) {
        goto label_7;
    }
    rax = rsi + 1;
    *((rdi + 0x28)) = rax;
    *(rsi) = 0x20;
label_1:
    rbx = rbp;
    if (rbx < r12) {
        goto label_0;
    }
label_6:
    r12 = rbx;
    return rax;
label_7:
    esi = 0x20;
    overflow ();
    goto label_1;
label_5:
    esi = 9;
    overflow ();
    rcx = imp.__libc_start_main;
    goto label_2;
label_3:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405390 */
#include <stdint.h>
 
void fcn_00405390 (int64_t arg2) {
    rsi = arg2;
    rax = *((rsi + 0x18));
    rbx = *((rsi + 0x10));
    rbp -= rbx;
    if (rbp <= 7) {
        goto label_1;
    }
    if (rax == rbx) {
        goto label_2;
    }
label_0:
    rdx = *((rsi + 0x30));
    rcx = *((rsi + 8));
    rax += rdx;
    rdx = ~rdx;
    rax &= rdx;
    rdx = *((rsi + 0x20));
    r8 = rax;
    r9 = rdx;
    r8 -= rcx;
    r9 -= rcx;
    if (r8 > r9) {
        rax = rdx;
    }
    rbp &= 0xfffffffffffffff8;
    rbp += rbx;
    *((rsi + 0x18)) = rax;
    *((rsi + 0x10)) = rax;
    rsi = stdout;
    eax = fputs_unlocked ();
    do {
        rdx = *(rbx);
        esi = " %lu";
        edi = 1;
        eax = 0;
        rbx += 8;
        printf_chk ();
    } while (rbp != rbx);
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax < *((rdi + 0x30))) {
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
label_1:
        return rax;
label_2:
        *((rsi + 0x50)) |= 2;
        goto label_0;
    }
    esi = 0xa;
    return overflow ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405460 */
#include <stdint.h>
 
uint64_t fcn_00405460 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ebx = edx;
    if (rdi == 0) {
        goto label_1;
    }
    eax = fcn_0040eb70 (rdi, 0);
    rsi = stdout;
    rdi = rbp;
    ebx -= eax;
    eax = 0;
    __asm ("cmovs ebx, eax");
    fputs_unlocked ();
    rax = strlen (rbp);
    rbp = (int64_t) ebx;
    rbp += rax;
    do {
        rdi = stdout;
        rdx = *((rdi + 0x28));
        if (rdx >= *((rdi + 0x30))) {
            goto label_2;
        }
        rcx = rdx + 1;
        *((rdi + 0x28)) = rcx;
        *(rdx) = 0x20;
label_0:
        ebx--;
    } while (ebx != 0xffffffff);
    do {
        rax = imp.__libc_start_main;
        rax = rbp + rax + 1;
        *(0x006255b8) = rax;
        return rax;
label_2:
        esi = 0x20;
        eax = overflow ();
        goto label_0;
label_1:
        rcx = rsi;
        edi = 1;
        esi = "%*lu ";
        eax = 0;
        printf_chk ();
        rbp = (int64_t) ebx;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405520 */
#include <stdint.h>
 
int32_t fcn_00405520 (int64_t arg1, int64_t arg2) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    eax = 0x41b06e;
    ebx = edi;
    if (dl == 0) {
        goto label_0;
    }
    eax = 0;
    while (1) {
label_0:
        edx = esi;
        rdi = rax;
        rsi = rbx;
        void (*0x405460)() ();
        *((rsp + 0xc)) = esi;
        fcn_0040e160 (rdi);
        esi = *((rsp + 0xc));
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405580 */
#include <stdint.h>
 
uint64_t fcn_00405580 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ebx = edi;
    rax = fcn_00412040 (4, rdx);
    r12 = rax;
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbp);
    if (bl == 0) {
        goto label_0;
    }
    *(0x006255d0) = 2;
    do {
        return rax;
label_0:
        eax = imp.__libc_start_main;
    } while (eax != 0);
    *(0x006255d0) = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4057b0 */
#include <stdint.h>
 
int32_t fcn_004057b0 (uint32_t arg2, uint32_t arg3, int64_t arg4) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    if (dil == 0) {
        goto label_3;
    }
    eax = esi;
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_4;
    }
    cl = (eax == 0x4000) ? 1 : 0;
label_1:
    eax = 0x2f;
    if (cl != 0) {
        goto label_0;
    }
    eax = 0;
    if (*(0x006256d4) == 1) {
        goto label_0;
    }
    if (dil == 0) {
        goto label_5;
    }
    esi &= 0xf000;
    eax = 0x40;
    if (esi == 0xa000) {
        goto label_6;
    }
    eax = 0x7c;
    if (esi == 0x1000) {
        goto label_7;
    }
    al = (esi == 0xc000) ? 1 : 0;
label_2:
    eax = -eax;
    eax &= 0x3d;
    do {
label_0:
        return eax;
label_4:
        eax = 0;
    } while (*(0x006256d4) != 3);
    esi &= 0x49;
    eax -= eax;
    eax = ~eax;
    eax &= 0x2a;
    return eax;
label_3:
    eax = 0;
    if (edx == 5) {
        goto label_0;
    }
    cl = (edx == 3) ? 1 : 0;
    al = (edx == 9) ? 1 : 0;
    ecx |= eax;
    goto label_1;
label_5:
    eax = 0x40;
    if (edx != 6) {
        eax = 0x7c;
        if (edx != 1) {
            al = (edx == 7) ? 1 : 0;
            goto label_2;
label_7:
            return eax;
        }
        return eax;
label_6:
        return eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4058a0 */
#include <stdint.h>
 
uint64_t fcn_004058a0 (int64_t arg2, int64_t arg3) {
    rsi = arg2;
    rdx = arg3;
    edi = (int32_t) dil;
    eax = fcn_004057b0 (rdi, rsi, rdx);
    ebx = eax;
    if (al == 0) {
        goto label_0;
    }
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_1;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = bl;
    do {
        *(0x006255b8)++;
label_0:
        al = (bl != 0) ? 1 : 0;
        return rax;
label_1:
        esi = (int32_t) bl;
        overflow ();
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405af0 */
#include <stdint.h>
 
uint64_t fcn_00405af0 (void) {
    int64_t var_8h;
    int64_t var_18h;
    int64_t var_28h;
    int64_t var_38h;
    int64_t var_48h;
    int64_t var_58h;
    int64_t var_68h;
    int64_t var_78h;
    int64_t var_88h;
    if (dil != 0) {
        goto label_1;
    }
    ebx = 0x419504;
    while (eax == 0) {
        if (rbx == 0x419530) {
            goto label_2;
        }
label_0:
        ebp = *(rbx);
        rbx += 4;
        esi = ebp;
        edi = 0x6255e0;
        eax = sigismember ();
    }
    esi = 0;
    signal (ebp);
    if (rbx != 0x419530) {
        goto label_0;
    }
label_2:
    return eax;
label_1:
    edi = 0x6255e0;
    ebx = 0x419504;
    r12d = 0x14;
    sigemptyset ();
    while (rbp != 0x419530) {
        r12d = *(rbp);
        rbp += 4;
        sigaction (r12d, 0, rsp);
        if (*(rsp) != 1) {
            esi = r12d;
            edi = 0x6255e0;
            sigaddset ();
        }
    }
    __asm ("movdqa xmm0, xmmword [0x006255e0]");
    __asm ("movdqa xmm1, xmmword [0x006255f0]");
    *((rsp + 0x88)) = 0x10000000;
    __asm ("movdqa xmm2, xmmword [0x00625600]");
    __asm ("movdqa xmm3, xmmword [0x00625610]");
    r12d = 0x405560;
    __asm ("movdqa xmm4, xmmword [0x00625620]");
    __asm ("movdqa xmm5, xmmword [0x00625630]");
    __asm ("movups xmmword [rsp + 8], xmm0");
    __asm ("movdqa xmm6, xmmword [0x00625640]");
    __asm ("movdqa xmm7, xmmword [0x00625650]");
    __asm ("movups xmmword [rsp + 0x18], xmm1");
    __asm ("movups xmmword [rsp + 0x28], xmm2");
    __asm ("movups xmmword [rsp + 0x38], xmm3");
    __asm ("movups xmmword [rsp + 0x48], xmm4");
    __asm ("movups xmmword [rsp + 0x58], xmm5");
    __asm ("movups xmmword [rsp + 0x68], xmm6");
    __asm ("movups xmmword [rsp + 0x78], xmm7");
    while (rbx != 0x419530) {
        ebp = *(rbx);
        rbx += 4;
        esi = ebp;
        edi = 0x6255e0;
        eax = sigismember ();
        if (eax != 0) {
            eax = 0x404830;
            rsi = rsp;
            edi = ebp;
            if (ebp == 0x14) {
                rax = r12;
            }
            *(rsp) = rax;
            sigaction (rdi, rsi, 0);
        }
    }
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405c70 */
#include <stdint.h>
 
void fcn_00405c70 (void) {
    if (*(0x00624448) != 0) {
        esi = 0x624448;
        edi = 0x624440;
        void (*0x405cd0)() ();
    }
    fcn_00405cd0 (0x624420, 0x624428);
    fcn_00405cd0 (0x624450, 0x624458);
    esi = 0x624438;
    edi = 0x624430;
    return void (*0x405cd0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405cd0 */
#include <stdint.h>
 
uint32_t fcn_00405cd0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    while (1) {
label_0:
        rsi = *(rbp);
        rdi = *(rbx);
        edx = 1;
        rcx = stdout;
        void (*0x402c30)() ();
        edi = 1;
        *(0x006256d0) = 1;
        eax = tcgetpgrp ();
        if (eax >= 0) {
            goto label_1;
        }
        fcn_00405c70 ();
    }
label_1:
    edi = 1;
    fcn_00405af0 ();
    fcn_00405c70 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405d40 */
#include <stdint.h>
 
void fcn_00405d40 (void) {
    fcn_00405cd0 (0x624420, 0x624428);
    esi = 0x624438;
    edi = 0x624430;
    return void (*0x405cd0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405d70 */
#include <stdint.h>
 
int32_t fcn_00405d70 (void) {
    eax = imp.__libc_start_main;
    if (eax == 0) {
        eax = imp.__libc_start_main;
        if (eax == 0) {
            goto label_3;
        }
    }
    do {
label_0:
        if (*(0x006256d0) != 0) {
            goto label_4;
        }
label_2:
        rdi = stdout;
        fflush_unlocked ();
        rdx = rsp;
        esi = 0x6255e0;
        edi = 0;
        sigprocmask ();
        ebx = imp.__libc_start_main;
        eax = imp.__libc_start_main;
        if (eax == 0) {
            goto label_5;
        }
        eax--;
        ebx = 0x13;
        *(0x006255d4) = eax;
label_1:
        raise (ebx);
        edx = 0;
        rsi = rsp;
        edi = 2;
        sigprocmask ();
        eax = imp.__libc_start_main;
    } while (eax != 0);
    eax = imp.__libc_start_main;
    if (eax != 0) {
        goto label_0;
    }
    return eax;
label_5:
    esi = 0;
    signal (ebx);
    goto label_1;
label_4:
    fcn_00405d40 ();
    goto label_2;
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405e30 */
#include <stdint.h>
 
uint8_t fcn_00405e30 (void) {
    if (*(0x006256d2) == 0) {
        return;
    }
    al = fcn_00404ae0 (4);
    if (al == 0) {
        return al;
    }
    fcn_00405cd0 (0x624420, 0x624428);
    fcn_00405cd0 (0x624460, 0x624468);
    esi = 0x624438;
    edi = 0x624430;
    return void (*0x405cd0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x405ea0 */
#include <stdint.h>
 
uint64_t fcn_00405ea0 (int64_t arg1, int64_t arg2, int64_t arg3, size_t arg4, uint32_t arg5, int64_t arg6) {
    size_t var_8h;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_34h;
    mbstate_t * ps;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r12 = rdx;
    r13 = *(rdi);
    *((rsp + 0x20)) = rdi;
    *((rsp + 8)) = ecx;
    *((rsp + 0x10)) = r8;
    *((rsp + 0x28)) = r9;
    eax = fcn_00411c20 (rdx);
    ecx = *((rsp + 8));
    al = (eax <= 2) ? 1 : 0;
    al &= *(0x00625698);
    *((rsp + 0x18)) = al;
    if (al != 0) {
        goto label_11;
    }
    r10d = 0;
    if (ecx != 0) {
label_10:
        *((rsp + 8)) = r10d;
        rax = fcn_00411cd0 (r13, 0x2000, rbp, 0xffffffffffffffff, r12);
        r10d = *((rsp + 8));
        r9 = rax;
        if (rax > 0x1fff) {
            goto label_12;
        }
label_9:
        *((rsp + 0x18)) = 1;
        eax = *(r13);
        if (*(rbp) == al) {
            *((rsp + 0x18)) = r9;
            *((rsp + 8)) = r10d;
            rax = strlen (rbp);
            r9 = *((rsp + 0x18));
            r10d = *((rsp + 8));
            rsp + 0x18 = (r9 != rax) ? 1 : 0;
        }
        if (r10d == 0) {
            goto label_13;
        }
        rbx = r9;
        goto label_14;
    }
    rdi = rbp;
    r13 = rbp;
    rax = strlen (rdi);
    r9 = rax;
label_13:
    if (*((rsp + 0x10)) == 0) {
        goto label_15;
    }
    *((rsp + 8)) = r9;
    rax = ctype_get_mb_cur_max ();
    r9 = *((rsp + 8));
    if (rax > 1) {
        goto label_16;
    }
    rbp = r13 + r9;
    if (rbp <= r13) {
        goto label_17;
    }
    *((rsp + 8)) = r9;
    ebx = 0;
    rax = ctype_b_loc ();
    r9 = *((rsp + 8));
    rcx = *(rax);
    rax = r13;
    do {
        edx = *(rax);
        edx = *((rcx + rdx*2));
        dx &= 0x4000;
        rbx -= 0xffffffffffffffff;
        rax++;
    } while (rbp != rax);
label_7:
    if (*(0x00625768) != 0) {
        goto label_18;
    }
    rax = *((rsp + 0x28));
    *(rax) = 0;
    goto label_19;
label_15:
    if (*(0x00625768) != 0) {
        goto label_18;
    }
    rax = *((rsp + 0x28));
    *(rax) = 0;
    goto label_20;
label_11:
    if (ecx != 0) {
        goto label_21;
    }
    rax = strlen (rbp);
    rbx = rax;
    r12 = rax + 1;
    if (rax > 0x1fff) {
        goto label_22;
    }
label_8:
    memcpy (r13, rbp, r12);
    *((rsp + 0x18)) = 0;
label_14:
    rax = ctype_get_mb_cur_max ();
    rbp = r13 + rbx;
    if (rax > 1) {
        goto label_23;
    }
    if (rbp <= r13) {
        goto label_24;
    }
    rax = ctype_b_loc ();
    rdx = r13;
    do {
        esi = *(rdx);
        rcx = *(rax);
        if ((*((rcx + rsi*2 + 1)) & 0x40) == 0) {
            *(rdx) = 0x3f;
        }
        rdx++;
    } while (rdx != rbp);
label_24:
    r9 = rbx;
label_6:
    eax = *(0x00625768);
    if (al != 0) {
label_18:
        eax = *(0x00625769);
        eax ^= 1;
        al |= *((rsp + 0x18));
        eax ^= 1;
    }
    rsi = *((rsp + 0x28));
    *(rsi) = al;
    if (*((rsp + 0x10)) != 0) {
label_19:
        rax = *((rsp + 0x10));
        *(rax) = rbx;
    }
label_20:
    rax = *((rsp + 0x20));
    *(rax) = r13;
    rax = r9;
    return rax;
label_23:
    if (rbp <= r13) {
        goto label_25;
    }
    r15 = r13;
    r14 = r13;
    ebx = 0;
    while (al <= 0x3f) {
        if (al < 0x25) {
            edx = rax - 0x20;
            if (dl > 3) {
                goto label_26;
            }
        }
label_0:
        *(r15) = al;
        r14++;
        rbx++;
        r15++;
label_1:
        if (rbp <= r14) {
            goto label_27;
        }
        eax = *(r14);
    }
    if (al < 0x41) {
        goto label_26;
    }
    if (al <= 0x5f) {
        goto label_0;
    }
    edx = rax - 0x61;
    if (dl <= 0x1d) {
        goto label_0;
    }
label_26:
    *((rsp + 0x38)) = 0;
    goto label_28;
label_2:
    eax = wcwidth ();
    rcx = *((rsp + 8));
    rdx = r14 + rcx;
    if (eax >= 0) {
        goto label_29;
    }
label_3:
    *(r15) = 0x3f;
    rbx++;
    r15 = r12;
    r14 = rdx;
label_4:
    eax = mbsinit (rsp + 0x38);
    if (eax != 0) {
        goto label_1;
    }
label_28:
    rdx -= r14;
    r12 = r15 + 1;
    rax = fcn_00416e80 (rsp + 0x34, r14, rbp, rsp + 0x38);
    if (rax == -1) {
        goto label_30;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_31;
    }
    edi = *((rsp + 0x34));
    *((rsp + 8)) = rax;
    if (rax != 0) {
        goto label_2;
    }
    eax = wcwidth ();
    rdx = r14 + 1;
    if (eax < 0) {
        goto label_3;
    }
    ecx = *(r14);
    r14 = rdx;
    *(r15) = cl;
    r15 = r12;
label_5:
    rax = (int64_t) eax;
    rbx += rax;
    goto label_4;
label_29:
    edx = 0;
    do {
        esi = *((r14 + rdx));
        *((r15 + rdx)) = sil;
        rdx++;
    } while (rcx != rdx);
    r14 += rcx;
    r15 += rcx;
    goto label_5;
label_27:
    r9 = r15;
    r9 -= r13;
    goto label_6;
label_16:
    edx = 0;
    eax = fcn_0040e9b0 (r13, r9);
    r9 = *((rsp + 8));
    rbx = (int64_t) eax;
    goto label_7;
label_30:
    *(r15) = 0x3f;
    r14++;
    rbx++;
    do {
        r15 = r12;
        goto label_1;
label_31:
        *(r15) = 0x3f;
        rbx++;
        r14 = rbp;
    } while (1);
label_22:
    rax = fcn_00412980 (r12);
    r13 = rax;
    goto label_8;
label_12:
    r14 = rax + 1;
    *((rsp + 0x18)) = r10d;
    *((rsp + 8)) = rax;
    rax = fcn_00412980 (r14);
    rdi = rax;
    r13 = rax;
    fcn_00411cd0 (rdi, r14, rbp, 0xffffffffffffffff, r12);
    r10d = *((rsp + 0x18));
    r9 = *((rsp + 8));
    goto label_9;
label_17:
    ebx = 0;
    goto label_7;
label_25:
    r9d = 0;
    ebx = 0;
    goto label_6;
label_21:
    r10d = 1;
    goto label_10;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4062d0 */
#include <stdint.h>
 
uint64_t fcn_004062d0 (int64_t arg_30h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    void * ptr;
    int64_t var_10h;
    int64_t var_18h;
    uint32_t var_27h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15d = r8d;
    r14 = rdi;
    r12 = rcx;
    rbx = r9;
    r13 = rsp + 0x30;
    *((rsp + 0x28)) = r13;
    rax = fcn_00405ea0 (rsp + 0x28, rdi, rsi, edx, 0, rsp + 0x27);
    if (*((rsp + 0x27)) != 0) {
        if (r15b != 0) {
            goto label_9;
        }
    }
label_1:
    if (r12 != 0) {
        al = fcn_00404ae0 (4);
        if (al != 0) {
            goto label_10;
        }
label_4:
        fcn_00405cd0 (0x624420, 0x624428);
        fcn_00405cd0 (r12, r12 + 8);
        fcn_00405cd0 (0x624430, 0x624438);
    }
    if (*((rsp + 0x2070)) == 0) {
        goto label_11;
    }
    r12d = *(0x00625768);
    while (r12b == 0) {
        r10 = rbp;
        r9d = 0;
label_0:
        *((rsp + 0x18)) = r10;
        *((rsp + 0x10)) = r9;
        rax = fcn_00404e80 (*(0x00625748), 0);
        r15 = rax;
        rax = fcn_00404e80 (*((rsp + 0x2070)), 1);
        ecx = 0x41b08a;
        rdx = r15;
        esi = "\e]8;;file://%s%s%s\a";
        r11 = rax;
        eax = 0x41b371;
        edi = 1;
        if (*(rax) != 0x2f) {
            rcx = rax;
        }
        r8 = r11;
        eax = 0;
        *((rsp + 8)) = r11;
        printf_chk ();
        free (r15);
        r11 = *((rsp + 8));
        free (*((rsp + 8)));
        r9 = *((rsp + 0x10));
        r10 = *((rsp + 0x18));
        if (rbx == 0) {
            goto label_12;
        }
label_2:
        if (*(0x006256d8) != 0) {
            rdx = *((rbx + 0x18));
            rax = *((rbx + 0x20));
            rax -= rdx;
            if (rax <= 7) {
                goto label_13;
            }
label_5:
            rax = imp.__libc_start_main;
            *(rdx) = rax;
            *((rbx + 0x18)) += 8;
        }
        rdi = *((rsp + 0x28));
        rcx = stdout;
        rdx = r10;
        esi = 1;
        rdi += r9;
        fwrite_unlocked ();
        rax = imp.__libc_start_main;
        rax += rbp;
        *(0x006255b8) = rax;
        if (*(0x006256d8) != 0) {
            rcx = *((rbx + 0x18));
            rdx = *((rbx + 0x20));
            rdx -= rcx;
            if (rdx <= 7) {
                goto label_14;
            }
label_6:
            *(rcx) = rax;
            *((rbx + 0x18)) += 8;
        }
label_3:
        if (*((rsp + 0x2070)) != 0) {
            edx = 6;
            esi = 1;
            edi = "\e]8;;\a";
            rcx = stdout;
            fwrite_unlocked ();
            if (r12b == 0) {
                goto label_7;
            }
            rax = *((rsp + 0x28));
            rdi = stdout;
            edx = *((rax + rbp - 1));
            rax = *((rdi + 0x28));
            if (rax >= *((rdi + 0x30))) {
                goto label_15;
            }
            rcx = rax + 1;
            *((rdi + 0x28)) = rcx;
            *(rax) = dl;
        }
label_7:
        rdi = *((rsp + 0x28));
        if (rdi != r13) {
            if (rdi == r14) {
                goto label_16;
            }
            free (rdi);
        }
label_16:
        eax = *((rsp + 0x27));
        rax += rbp;
        return rax;
        r12d = *(0x00625769);
    }
    if (*((rsp + 0x27)) != 0) {
        goto label_17;
    }
    rax = *((rsp + 0x28));
    rdi = stdout;
    r10 = rbp - 2;
    edx = *(rax);
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_18;
    }
    rcx = rax + 1;
    r9d = 1;
    *((rdi + 0x28)) = rcx;
    *(rax) = dl;
    goto label_0;
label_9:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_19;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x20;
label_8:
    *(0x006255b8)++;
    goto label_1;
label_11:
    r10 = rbp;
    r9d = 0;
    r12d = 0;
    if (rbx != 0) {
        goto label_2;
    }
label_12:
    rdi = *((rsp + 0x28));
    rcx = stdout;
    rdx = r10;
    esi = 1;
    rdi += r9;
    fwrite_unlocked ();
    *(0x006255b8) += rbp;
    goto label_3;
label_10:
    fcn_00405d40 ();
    goto label_4;
label_13:
    esi = 8;
    rdi = rbx;
    *((rsp + 0x10)) = r10;
    *((rsp + 8)) = r9;
    _obstack_newchunk ();
    rdx = *((rbx + 0x18));
    r10 = *((rsp + 0x10));
    r9 = *((rsp + 8));
    goto label_5;
label_14:
    esi = 8;
    rdi = rbx;
    _obstack_newchunk ();
    rcx = *((rbx + 0x18));
    rax = imp.__libc_start_main;
    goto label_6;
label_17:
    r10 = rbp;
    r9d = 0;
    r12d = 0;
    goto label_0;
label_15:
    esi = (int32_t) dl;
    overflow ();
    goto label_7;
label_19:
    esi = 0x20;
    overflow ();
    goto label_8;
label_18:
    esi = (int32_t) dl;
    *((rsp + 8)) = r10;
    overflow ();
    r9d = 1;
    r10 = *((rsp + 8));
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x406690 */
#include <stdint.h>
 
void fcn_00406690 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15d = esi;
    r14 = rdi;
    r13 = rcx;
    r12 = rdx;
    eax = *(0x006256d2);
    if (sil == 0) {
        goto label_10;
    }
    rbp = *((rdi + 8));
    while (al == 0) {
label_0:
        r15d ^= 1;
        r8d = (int32_t) r15b;
        rax = fcn_004062d0 (rbp, *(0x00625690), *((r14 + 0xc4)), 0, r8, r12);
        rbx = rax;
        fcn_00405d70 ();
label_1:
        rax = rbx;
        return;
        r8d = *((rdi + 0xac));
        if (*((rdi + 0xb9)) != 0) {
            goto label_11;
        }
        al = fcn_00404ae0 (0xc);
        edx = 0xffffffff;
        if (al == 0) {
            goto label_5;
        }
        ecx = 0xc0;
        goto label_3;
label_10:
        rbp = *(rdi);
    }
    edx = *((rdi + 0xb9));
    if (*(0x00625750) != 0) {
        goto label_12;
    }
label_4:
    r8d = *((r14 + 0x30));
label_5:
    ecx = *((r14 + 0xb8));
    if (cl != 0) {
        goto label_13;
    }
label_2:
    eax = *((r14 + 0xa8));
    eax = *((rax*4 + 0x419540));
    cl = (eax == 7) ? 1 : 0;
    if (eax == 5) {
        goto label_8;
    }
label_7:
    if (edx != 0) {
        goto label_14;
    }
    if (cl == 0) {
        goto label_14;
    }
    ecx = 0xd0;
    if (*(0x00625750) == 0) {
        al = fcn_00404ae0 (0xd);
        rcx -= rcx;
        rcx &= 0xffffffffffffffa0;
        rcx += 0xd0;
    }
label_3:
    rcx += 0x624420;
label_6:
    if (*((rcx + 8)) != 0) {
        goto label_15;
    }
    al = fcn_00404ae0 (4);
    if (al == 0) {
        goto label_0;
    }
label_15:
    r15d ^= 1;
    r8d = (int32_t) r15b;
    rax = fcn_004062d0 (rbp, *(0x00625690), *((r14 + 0xc4)), 0, r8, r12);
    rbx = rax;
    fcn_00405d70 ();
    fcn_00405c70 ();
    rcx = imp.__libc_start_main;
    if (rcx == 0) {
        goto label_1;
    }
    rax = r13;
    edx = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    edx = 0;
    rsi = rax;
    rax = rbx + r13 - 1;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    if (rsi == rax) {
        goto label_1;
    }
    fcn_00405cd0 (0x624590, 0x624598);
    goto label_1;
label_11:
    ecx = *((r14 + 0xb8));
    edx = 0;
    if (cl == 0) {
        goto label_2;
    }
label_13:
    eax = r8d;
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_16;
    }
    if (eax == 0x4000) {
        goto label_17;
    }
    if (eax == 0xa000) {
        goto label_18;
    }
    ecx = 0x80;
    if (eax == 0x1000) {
        goto label_3;
    }
    ecx = 0x90;
    if (eax == 0xc000) {
        goto label_3;
    }
    ecx = 0xa0;
    if (eax == 0x6000) {
        goto label_3;
    }
    ecx = 0xb0;
    ebx = 0xd0;
    if (eax != 0x2000) {
        rcx = rbx;
    }
    goto label_3;
label_12:
    if (dl == 0) {
        goto label_4;
    }
    r8d = *((r14 + 0xac));
    goto label_5;
label_8:
    rax = strlen (rbp);
    rbx = imp.__libc_start_main;
    rcx = rax;
    if (rbx == 0) {
        goto label_19;
    }
    do {
        rdx = *(rbx);
        if (rcx >= rdx) {
            rdi = rcx;
            *((rsp + 8)) = rcx;
            rdi -= rdx;
            rdi += rbp;
            eax = strncmp (rdi, *((rbx + 8)), rdx);
            rcx = *((rsp + 8));
            if (eax == 0) {
                goto label_20;
            }
        }
        rbx = *((rbx + 0x20));
    } while (rbx != 0);
label_19:
    ecx = 0x50;
    goto label_3;
label_20:
    rcx = rbx + 0x10;
    goto label_6;
label_16:
    if ((r8d & 0x800) != 0) {
        al = fcn_00404ae0 (0x10);
        if (al == 0) {
            goto label_21;
        }
        ecx = 0x100;
        goto label_3;
    }
label_21:
    while (al == 0) {
        al = fcn_00404ae0 (0x15);
        if (al == 0) {
            goto label_22;
        }
        if (*((r14 + 0xc0)) == 0) {
            goto label_22;
        }
        ecx = 0x150;
        goto label_3;
        al = fcn_00404ae0 (0x11);
    }
    ecx = 0x110;
    goto label_3;
label_17:
    eax = r8d;
    eax &= 0x202;
    if (eax == 0x202) {
        goto label_23;
    }
label_9:
    if ((r8b & 2) == 0) {
        goto label_24;
    }
    al = fcn_00404ae0 (0x13);
    ecx = 0x130;
    if (al != 0) {
        goto label_3;
    }
label_24:
    r8d &= 0x200;
    ecx = 0x60;
    if (r8d == 0) {
        goto label_3;
    }
    al = fcn_00404ae0 (0x12);
    rcx -= rcx;
    cl &= 0x40;
    rcx += 0x120;
    goto label_3;
label_18:
    eax = 7;
    goto label_7;
label_22:
    r8d &= 0x49;
    if (r8d != 0) {
        al = fcn_00404ae0 (0xe);
        if (al == 0) {
            goto label_25;
        }
        ecx = 0xe0;
        goto label_3;
    }
label_25:
    if (*((r14 + 0x28)) <= 1) {
        goto label_8;
    }
    al = fcn_00404ae0 (0x16);
    if (al == 0) {
        goto label_8;
    }
    ecx = 0x160;
    goto label_3;
label_23:
    al = fcn_00404ae0 (0x14);
    ecx = 0x140;
    if (al != 0) {
        goto label_3;
    }
    goto label_9;
label_14:
    rax <<= 4;
    rcx = rax;
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x406af0 */
#include <stdint.h>
 
uint64_t fcn_00406af0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    eax = fcn_00405e30 ();
    if (*(0x006256bc) != 0) {
        ecx = 0x41b06e;
        if (*((rbx + 0xb8)) != 0) {
            rdi = *((rbx + 0x20));
            if (rdi != 0) {
                goto label_1;
            }
        }
label_0:
        edx = 0;
        esi = 0x41b09b;
        edi = 1;
        if (*(0x006256f8) != 4) {
            edx = imp.__libc_start_main;
        }
        eax = 0;
        eax = printf_chk ();
    }
    if (*(0x006256ec) == 0) {
        goto label_2;
    }
    ecx = 0x41b06e;
    while (1) {
        edx = 0;
        esi = 0x41b09b;
        edi = 1;
        if (*(0x006256f8) != 4) {
            edx = imp.__libc_start_main;
        }
        eax = 0;
        eax = printf_chk ();
label_2:
        if (*(0x00625725) != 0) {
            edx = 0;
            esi = 0x41b09b;
            edi = 1;
            rcx = *((rbx + 0xb0));
            if (*(0x006256f8) != 4) {
                edx = imp.__libc_start_main;
            }
            eax = 0;
            printf_chk ();
        }
        rax = fcn_00406690 (rbx, 0, 0, rbp);
        eax = imp.__libc_start_main;
        if (eax == 0) {
            rax = rbp;
            return rax;
        }
        edx = *((rbx + 0xa8));
        edi = *((rbx + 0xb8));
        al = fcn_004058a0 (rdi, *((rbx + 0x30)));
        eax = (int32_t) al;
        rbp += rax;
        rax = rbp;
        return rax;
        rax = fcn_0040d5d0 (*((rbx + 0x58)), rsp, *(0x006256e8), 0x200, *(0x006256e0));
        rcx = rax;
    }
label_1:
    rax = fcn_0040e520 (rdi, rsp, rdx);
    rcx = rax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x406c60 */
#include <stdint.h>
 
int64_t fcn_00406c60 (uint32_t arg1) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_18h;
    int64_t var_24h;
    int64_t var_25h;
    int64_t var_2eh;
    int64_t var_2fh;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_e0h;
    int64_t var_4d0h;
    rdi = arg1;
    if (*((rdi + 0xb8)) == 0) {
        goto label_27;
    }
    r13 = rsp + 0x24;
    fcn_0040bb60 (rdi + 0x18, r13);
label_3:
    if (*(0x00625724) != 0) {
        goto label_28;
    }
    *((rsp + 0x2e)) = 0;
label_1:
    eax = imp.__libc_start_main;
    if (eax == 1) {
        goto label_29;
    }
label_2:
    if (eax != 0) {
        goto label_30;
    }
    rdx = *((rbp + 0x70));
    rax = *((rbp + 0x78));
    *((rsp + 0x30)) = rdx;
    edx = *((rbp + 0xb8));
    *((rsp + 0x38)) = rax;
    if (*(0x006256bc) != 0) {
        goto label_31;
    }
label_0:
    r12 = rsp + 0x4d0;
    rbx = r12;
label_4:
    if (*(0x006256ec) == 0) {
        goto label_32;
    }
    r15d = 0x41b06e;
    if (dl != 0) {
        goto label_33;
    }
label_19:
    r14d = imp.__libc_start_main;
    eax = fcn_0040eb70 (r15, 0);
    r14d -= eax;
    eax = r14d;
    if (r14d <= 0) {
        goto label_34;
    }
    eax--;
    rdx = rax;
    rcx = rbx + rax + 1;
    rax = rbx;
    do {
        rax++;
        *((rax - 1)) = 0x20;
    } while (rax != rcx);
    rax = (int64_t) edx;
    rbx = rbx + rax + 1;
    do {
label_34:
        r15++;
        eax = *((r15 - 1));
        rbx++;
        *((rbx - 1)) = al;
    } while (al != 0);
    *((rbx - 1)) = 0x20;
    edx = *((rbp + 0xb8));
label_32:
    eax = 0x41b06e;
    if (dl != 0) {
        goto label_35;
    }
label_9:
    r8 = r13;
    rdi = rbx;
    ecx = "%s %*s ";
    r9d = imp.__libc_start_main;
    rdx = 0xffffffffffffffff;
    eax = 0;
    esi = 1;
    sprintf_chk ();
    rax = strlen (rbx);
    rbx += rax;
    if (*(0x006256d8) != 0) {
        goto label_36;
    }
label_8:
    if (*(0x006245a9) == 0) {
        if (*(0x006245a8) != 0) {
            goto label_14;
        }
        if (*(0x006256ee) == 0) {
            goto label_37;
        }
    }
label_14:
    rsi = stdout;
    rdi = r12;
    rbx -= r12;
    fputs_unlocked ();
    *(0x006255b8) += rbx;
    if (*(0x006245a9) != 0) {
        goto label_38;
    }
label_13:
    if (*(0x006245a8) != 0) {
        goto label_39;
    }
label_12:
    if (*(0x006256ee) != 0) {
        goto label_40;
    }
label_11:
    rbx = r12;
    if (*(0x00625725) != 0) {
        goto label_41;
    }
label_10:
    if (*((rbp + 0xb8)) == 0) {
        goto label_42;
    }
    eax = *((rbp + 0x30));
    eax &= 0xb000;
    if (eax == 0x2000) {
        goto label_43;
    }
    rax = fcn_0040d5d0 (*((rbp + 0x48)), rsp + 0xe0, *(0x006256dc), 1, *(0x006245a0));
    r14 = rax;
label_5:
    r13d = imp.__libc_start_main;
    eax = fcn_0040eb70 (r14, 0);
    r13d -= eax;
    eax = r13d;
    if (r13d <= 0) {
        goto label_44;
    }
    eax--;
    rdx = rax;
    rcx = rbx + rax + 1;
    rax = rbx;
    do {
        rax++;
        *((rax - 1)) = 0x20;
    } while (rax != rcx);
    rax = (int64_t) edx;
    rbx = rbx + rax + 1;
    do {
label_44:
        r14++;
        eax = *((r14 - 1));
        rbx++;
        *((rbx - 1)) = al;
    } while (al != 0);
    *((rbx - 1)) = 0x20;
label_18:
    *(rbx) = 1;
    r13d = 0x41b06e;
    if (*((rbp + 0xb8)) != 0) {
        goto label_45;
    }
label_26:
    r8d = *(0x00624404);
    if (r8d < 0) {
        goto label_46;
    }
label_20:
    r9 = r13;
    ecx = 0x41b09b;
    esi = 1;
    rdi = rbx;
    rdx = 0xffffffffffffffff;
    eax = 0;
    sprintf_chk ();
    strlen (rbx);
    r13 = rbx + rax;
label_7:
    rsi = stdout;
    rdi = r12;
    r13 -= r12;
    fputs_unlocked ();
    *(0x006255b8) += r13;
    rax = fcn_00406690 (rbp, 0, 0x625560, r13);
    edx = *((rbp + 0xa8));
    r12 = rax;
    if (edx == 6) {
        goto label_47;
    }
    eax = imp.__libc_start_main;
    if (eax != 0) {
        goto label_48;
    }
label_6:
    return rax;
label_30:
    if (eax != 2) {
        goto label_49;
    }
    rdx = *((rbp + 0x60));
    rax = *((rbp + 0x68));
    *((rsp + 0x30)) = rdx;
    edx = *((rbp + 0xb8));
    *((rsp + 0x38)) = rax;
    if (*(0x006256bc) == 0) {
        goto label_0;
    }
    goto label_31;
label_28:
    eax = *((rbp + 0xbc));
    if (eax == 1) {
        goto label_50;
    }
    if (eax != 2) {
        goto label_1;
    }
    eax = imp.__libc_start_main;
    *((rsp + 0x2e)) = 0x2b;
    if (eax != 1) {
        goto label_2;
    }
label_29:
    rdx = *((rbp + 0x80));
    rax = *((rbp + 0x88));
    *((rsp + 0x30)) = rdx;
    edx = *((rbp + 0xb8));
    *((rsp + 0x38)) = rax;
    if (*(0x006256bc) == 0) {
        goto label_0;
    }
    goto label_31;
label_27:
    eax = *((rdi + 0xa8));
    r13 = rsp + 0x24;
    r10d = 0x3f3f;
    eax = *((rax + str._pcdb_lswd));
    *((rsp + 0x24)) = al;
    rax = 0x3f3f3f3f3f3f3f3f;
    *((rsp + 0x25)) = rax;
    *((r13 + 9)) = r10w;
    *((rsp + 0x2f)) = 0;
    goto label_3;
label_31:
    r9d = 0x41b06e;
    if (dl != 0) {
        rdi = *((rbp + 0x20));
        if (rdi != 0) {
            goto label_51;
        }
    }
label_16:
    r12 = rsp + 0x4d0;
    r8d = imp.__libc_start_main;
    ecx = 0x41b09b;
    eax = 0;
    edx = 0xe3b;
    esi = 1;
    rdi = r12;
    rbx = r12;
    sprintf_chk ();
    do {
        eax = *(rbx);
        rbx += 4;
        edx = rax - 0x1010101;
        eax = ~eax;
        edx &= eax;
        edx &= 0x80808080;
    } while (edx == 0);
    eax = edx;
    eax >>= 0x10;
    if ((edx & 0x8080) == 0) {
        edx = eax;
    }
    rax = rbx + 2;
    if ((edx & 0x8080) == 0) {
        rbx = rax;
    }
    eax = edx;
    al += dl;
    edx = *((rbp + 0xb8));
    rbx -= 3;
    goto label_4;
label_42:
    r14d = 0x41b06e;
    goto label_5;
label_47:
    if (*((rbp + 8)) == 0) {
        goto label_6;
    }
    edx = 4;
    esi = 1;
    edi = " -> ";
    rcx = stdout;
    fwrite_unlocked ();
    *(0x006255b8) += 4;
    fcn_00406690 (rbp, 1, 0, r13 + r12 + 4);
    edx = imp.__libc_start_main;
    if (edx == 0) {
        goto label_6;
    }
    edx = 0;
    fcn_004058a0 (1, *((rbp + 0xac)));
    goto label_6;
label_45:
    rax = fcn_004176f0 (*(0x00625668), rsp + 0x30, rsp + 0x60);
    if (rax != 0) {
        rdx = imp.__libc_start_main;
        rcx = *((rsp + 0x30));
        rsi = imp.__libc_start_main;
        r9 = *((rsp + 0x38));
        if (rdx < rcx) {
            goto label_52;
        }
        if (rdx > rcx) {
            goto label_53;
        }
        edi = esi;
        eax = r9d;
        if (esi < r9d) {
            goto label_52;
        }
        rdx -= 0xf0c2ac;
        if (rdx < rcx) {
            goto label_54;
        }
        eax = 0;
label_17:
        r8 = imp.__libc_start_main;
        if (*(0x00624788) == 0) {
            goto label_55;
        }
        rdx = rax + rax;
        rax += rdx;
        rdx = *((rsp + 0x70));
        rdx = rdx + rax*4;
        rdx <<= 7;
        rdx += 0x6247a0;
label_21:
        rcx = rsp + 0x60;
        rax = fcn_00410650 (rbx, 0x3e9);
        if (rax != 0) {
            rbx += rax;
        }
    } else {
        if (*(rbx) != 0) {
            goto label_56;
        }
    }
    ecx = 0x20;
    r13 = rbx + 1;
    *(rbx) = cx;
    goto label_7;
label_36:
    edx = 2;
    esi = 1;
    edi = 0x41b093;
    rcx = stdout;
    fwrite_unlocked ();
    *(0x006255b8) += 2;
    goto label_8;
label_35:
    fcn_0040e520 (*((rbp + 0x28)), rsp + 0xe0, rdx);
    goto label_9;
label_41:
    fcn_00405460 (*((rbp + 0xb0)), 0, *(0x00625714));
    goto label_10;
label_40:
    edx = *((rbp + 0xb8));
    fcn_00405520 (*((rbp + 0x34)), *(0x00625708));
    goto label_11;
label_39:
    edx = imp.__libc_start_main;
    edi = 0x41b06e;
    esi = *((rbp + 0x38));
    if (*((rbp + 0xb8)) != 0) {
        goto label_57;
    }
label_15:
    fcn_00405460 (rdi, rsi, rdx);
    goto label_12;
label_38:
    edx = *((rbp + 0xb8));
    fcn_00405520 (*((rbp + 0x34)), *(0x00625710));
    goto label_13;
label_48:
    edi = *((rbp + 0xb8));
    fcn_004058a0 (rdi, *((rbp + 0x30)));
    goto label_6;
label_50:
    *((rsp + 0x2e)) = 0x2e;
    goto label_1;
label_37:
    if (*(0x00625725) == 0) {
        goto label_10;
    }
    goto label_14;
label_57:
    edi = 0;
    if (*(0x006256ed) != 0) {
        goto label_15;
    }
    *((rsp + 8)) = rsi;
    *((rsp + 4)) = edx;
    rax = fcn_0040e2f0 (esi);
    rsi = *((rsp + 8));
    edx = *((rsp + 4));
    rdi = rax;
    goto label_15;
label_51:
    rax = fcn_0040e520 (rdi, rsp + 0xe0, rdx);
    r9 = rax;
    goto label_16;
label_53:
    rdi = rdx - 0xf0c2ac;
    if (rdi < rcx) {
        goto label_58;
    }
label_22:
    eax = 0;
    if (rdi > rcx) {
        goto label_17;
    }
    if (esi >= r9d) {
        goto label_17;
    }
label_23:
    if (rcx < rdx) {
        goto label_58;
    }
    eax = 0;
    if (rcx > rdx) {
        goto label_17;
    }
    eax = r9d;
    edi = esi;
label_54:
    eax -= edi;
    eax >>= 0x1f;
    goto label_17;
label_43:
    eax = imp.__libc_start_main;
    r13d = imp.__libc_start_main;
    eax = rdx + rax + 2;
    r13d -= eax;
    rax = *((rbp + 0x40));
    edx = (int32_t) al;
    rax >>= 0xc;
    dil = 0;
    edi |= edx;
    rax = fcn_0040e520 (rax, rsp + 0xe0, *(0x00625704));
    r14d = imp.__libc_start_main;
    r15 = rax;
    rax = *((rbp + 0x40));
    rdi = *((rbp + 0x40));
    rax >>= 0x20;
    rdi >>= 8;
    edx &= 0xfff;
    edi &= 0xfffff000;
    edi |= edx;
    rax = fcn_0040e520 (rax, rsp + 0xa0, edi);
    r8d = 0;
    __asm ("cmovns r8d, r13d");
    rdi = rbx;
    r9 = rax;
    esi = 1;
    r8d += *(0x00625704);
    ecx = "%*s, %*s ";
    rdx = 0xffffffffffffffff;
    eax = 0;
    sprintf_chk ();
    rax = *(0x006256fc);
    rbx = rbx + rax + 1;
    goto label_18;
label_33:
    rax = fcn_0040d5d0 (*((rbp + 0x58)), rsp + 0xe0, *(0x006256e8), 0x200, *(0x006256e0));
    r15 = rax;
    goto label_19;
label_56:
    if (*((rbp + 0xb8)) == 0) {
        goto label_59;
    }
    rax = fcn_0040e480 (*((rsp + 0x30)), rsp + 0x40, rdx);
    r8d = *(0x00624404);
    r13 = rax;
    if (r8d >= 0) {
        goto label_20;
    }
label_46:
    *((rsp + 0x18)) = 0;
    rax = fcn_004176f0 (*(0x00625668), rsp + 0x18, rsp + 0xa0);
    if (rax != 0) {
        r8 = imp.__libc_start_main;
        rdx = *(str._b__e___Y);
        if (*(0x00624788) != 0) {
            goto label_60;
        }
label_24:
        r9d = 0;
        rcx = rsp + 0xa0;
        rax = fcn_00410650 (rsp + 0xe0, 0x3e9);
        if (rax != 0) {
            goto label_61;
        }
    }
    r8d = *(0x00624404);
label_25:
    if (r8d >= 0) {
        goto label_20;
    }
    *(0x00624404) = 0;
    r8d = 0;
    goto label_20;
label_55:
    rdx = *((rax*8 + 0x624410));
    goto label_21;
label_52:
    rax = fcn_0040c150 (0x625730);
    rcx = *((rsp + 0x30));
    r9 = *((rsp + 0x38));
    rdx = imp.__libc_start_main;
    rsi = imp.__libc_start_main;
    rdi = rdx - 0xf0c2ac;
    if (rdi >= rcx) {
        goto label_22;
    }
    goto label_23;
label_60:
    rdx = *((rsp + 0xb0));
    rdx <<= 7;
    rdx += 0x6247a0;
    goto label_24;
label_61:
    edx = 0;
    eax = fcn_0040e9b0 (rsp + 0xe0, rax);
    r8d = eax;
    *(0x00624404) = eax;
    goto label_25;
label_58:
    eax = 1;
    goto label_17;
label_59:
    r13d = 0x41b06e;
    goto label_26;
label_49:
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x407630 */
#include <stdint.h>
 
uint64_t fcn_00407630 (int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rsp + 0x20;
    *((rsp + 0x10)) = rbx;
    fcn_00405ea0 (rsp + 0x10, rdi, rsi, edx, rsp + 0x18, rsp + 0xf);
    rdi = *((rsp + 0x10));
    if (rdi != rbx) {
        if (rdi == rbp) {
            goto label_0;
        }
        free (rdi);
    }
label_0:
    eax = *((rsp + 0xf));
    rax += *((rsp + 0x18));
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x407690 */
#include <stdint.h>
 
int64_t fcn_00407690 (int64_t arg1) {
    rdi = arg1;
    if (*(0x006256bc) == 0) {
        goto label_6;
    }
    if (*(0x006256f8) == 4) {
        goto label_7;
    }
    rbx = *(0x00625720);
    rbx++;
    if (*(0x006256ec) == 0) {
        goto label_8;
    }
label_0:
    rax = *(0x0062571c);
    rax++;
label_1:
    rbx += rax;
    do {
        if (*(0x00625725) != 0) {
            if (*(0x006256f8) == 4) {
                goto label_9;
            }
label_2:
            rax = *(0x00625714);
            rax++;
label_5:
            rbx += rax;
        }
label_3:
        rax = fcn_00407630 (*(rbp), *(0x00625690), *((rbp + 0xc4)), rcx, r8, r9);
        rbx += rax;
        eax = imp.__libc_start_main;
        if (eax != 0) {
            edi = *((rbp + 0xb8));
            al = fcn_004057b0 (rdi, *((rbp + 0x30)), *((rbp + 0xa8)));
            al = (al != 0) ? 1 : 0;
            eax = (int32_t) al;
            rbx += rax;
        }
        rax = rbx;
        return rax;
label_6:
        ebx = 0;
label_4:
    } while (*(0x006256ec) == 0);
    if (*(0x006256f8) != 4) {
        goto label_0;
    }
    eax = 2;
    if (*((rbp + 0xb8)) == 0) {
        goto label_1;
    }
    rax = fcn_0040d5d0 (*((rbp + 0x58)), rsp, *(0x006256e8), 0x200, *(0x006256e0));
    rax = strlen (rax);
    rax++;
    goto label_1;
label_8:
    if (*(0x00625725) != 0) {
        goto label_2;
    }
    goto label_3;
label_7:
    rax = fcn_0040e520 (*((rdi + 0x20)), rsp, rdx);
    strlen (rax);
    rbx = rax + 1;
    goto label_4;
label_9:
    rax = strlen (*((rbp + 0xb0)));
    rax++;
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x407800 */
#include <stdint.h>
 
int64_t fcn_00407800 (int64_t arg1) {
    rdi = arg1;
    r12d = edi;
    r9 = imp.__libc_start_main;
    rcx = imp.__libc_start_main;
    rbx = rcx;
    if (r9 <= rcx) {
        rbx = r9;
    }
    if (rbx <= *(0x006246a0)) {
        goto label_5;
    }
    rax = rcx;
    rdi = imp.__libc_start_main;
    rax >>= 1;
    if (rbx < rax) {
        goto label_6;
    }
    edx = 0x18;
    rax = rdx;
    rdx:rax = rax * rcx;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_7;
    }
    if (rdx != 0) {
        goto label_7;
    }
    rsi <<= 3;
    rax = fcn_004129e0 (rdi, rcx + rcx*2);
    rbp = imp.__libc_start_main;
    *(0x006255c8) = rax;
label_4:
    rax = imp.__libc_start_main;
    rdi = rbp;
    rdi -= rax;
    rax++;
    rax += rbp;
    rsi = rdi;
    rcx = rax;
    al = (rax < 0) ? 1 : 0;
    eax = (int32_t) al;
    rsi *= rcx;
    if (rax != 0) {
        goto label_7;
    }
    rax = rsi;
    edx = 0;
    rax = rdx:rax / rdi;
    rdx = rdx:rax % rdi;
    if (rcx != rax) {
        goto label_7;
    }
    rdi = rsi;
    eax = 0;
    rdi >>= 1;
    rsi >>= 0x3e;
    al = (rsi != 0) ? 1 : 0;
    rdi <<= 3;
    if (rdi < 0) {
        goto label_7;
    }
    if (rax != 0) {
        goto label_7;
    }
    rax = fcn_00412980 (rdi);
    rdx = imp.__libc_start_main;
    if (rbp <= rdx) {
        goto label_8;
    }
    rdi = imp.__libc_start_main;
    rdx = rdx*8 + 8;
    rsi = rbp*8 + 8;
    do {
        rcx = rdx * 3;
        *((rdi + rcx - 8)) = rax;
        rax += rdx;
        rdx += 8;
    } while (rsi != rdx);
label_8:
    *(0x006246a0) = rbp;
    r9 = imp.__libc_start_main;
label_5:
    if (rbx == 0) {
        goto label_9;
    }
    rdi = imp.__libc_start_main;
    r8 = rbx * 3;
    esi = 0;
    ecx = 3;
label_0:
    rax = *((rdi + rcx*8 - 8));
    *((rdi + rcx*8 - 0x18)) = 1;
    rsi += 8;
    *((rdi + rcx*8 - 0x10)) = rcx;
    rdx = rax + rsi;
    do {
        *(rax) = 3;
        rax += 8;
    } while (rdx != rax);
    rcx += 3;
    if (rcx != r8) {
        goto label_0;
    }
label_9:
    ebp = 0;
    if (r9 == 0) {
        goto label_10;
    }
label_3:
    rax = imp.__libc_start_main;
    rax = fcn_00407690 (*((rax + rbp*8)));
    r10 = imp.__libc_start_main;
    r9 = rax;
    if (rbx == 0) {
        goto label_11;
    }
    r11 = imp.__libc_start_main;
    rcx = imp.__libc_start_main;
    esi = 0;
    rdi = rax + 2;
    goto label_12;
label_1:
    rax = r10 + r8 - 1;
    edx = 0;
    rax = rdx:rax / r8;
    rdx = rdx:rax % r8;
    edx = 0;
    r13 = rax;
    rax = rbp;
    rax = rdx:rax / r13;
    rdx = rdx:rax % r13;
    r13 = rax;
label_2:
    rdx = *((rcx + 0x10));
    rax = r9;
    if (r13 != rsi) {
        rax = rdi;
    }
    rsi = rdx + r13*8;
    rdx = *(rsi);
    if (rdx >= rax) {
        goto label_13;
    }
    r13 = *((rcx + 8));
    r13 -= rdx;
    rdx = r13;
    rdx += rax;
    *((rcx + 8)) = rdx;
    *(rsi) = rax;
    rcx = (*((rcx + 8)) < r11) ? 1 : 0;
    do {
label_13:
        rcx += 0x18;
        rsi = r8;
        if (rbx == r8) {
            goto label_11;
        }
label_12:
        r8 = rsi + 1;
    } while (*(rcx) == 0);
    if (r12b != 0) {
        goto label_1;
    }
    rax = rbp;
    edx = 0;
    rax = rdx:rax / r8;
    rdx = rdx:rax % r8;
    r13 = rdx;
    goto label_2;
label_11:
    rbp++;
    if (rbp < r10) {
        goto label_3;
    }
label_10:
    if (rbx <= 1) {
        goto label_14;
    }
    rdx = imp.__libc_start_main;
    rax = rbx * 3;
    rax <<= 3;
    if (*((rdx + rax - 0x18)) != 0) {
        goto label_14;
    }
    rax = rdx + rax - 0x30;
    while (rbx != 1) {
        rax -= 0x18;
        if (*((rax + 0x18)) != 0) {
            goto label_14;
        }
        rbx--;
    }
label_14:
    rax = rbx;
    return rax;
label_6:
    edx = 0x30;
    rax = rdx;
    rdx:rax = rax * rbx;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax >= 0) {
        if (rdx != 0) {
            goto label_7;
        }
        rbp = rbx + rbx;
        rsi <<= 4;
        rax = fcn_004129e0 (rdi, rbp + rbx);
        *(0x006255c8) = rax;
        goto label_4;
    }
label_7:
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x407ca0 */
#include <stdint.h>
 
int64_t fcn_00407ca0 (void) {
    int64_t var_8h;
    int64_t var_10h;
    uint32_t var_18h;
    int64_t var_bh;
    int64_t var_ch;
label_4:
    if (*(0x00625770) == 0) {
        goto label_10;
    }
    r14d = edi;
    r13d = 0;
    ebx = 0;
    r15 = 0xfffffffffffffffd;
    while (*(0x00625670) == 0) {
        if (rbx != 0) {
            goto label_11;
        }
label_0:
        rbx++;
        fcn_00406af0 (r12, rbp);
        if (*(0x00625770) <= rbx) {
            goto label_10;
        }
        rax = imp.__libc_start_main;
        r12 = *((rax + rbx*8));
    }
    rax = fcn_00407690 (r12);
    if (rbx == 0) {
        goto label_12;
    }
    rdx = imp.__libc_start_main;
    rbp = r13 + 2;
    rcx = rax + rbp;
    if (rdx != 0) {
        if (rdx <= rcx) {
            goto label_13;
        }
        rdx = r15;
        rdx -= rax;
        if (rdx < r13) {
            goto label_13;
        }
    }
    r13 = rcx;
    do {
        ecx = 0x20;
        edx = 0x20;
label_1:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_14;
        }
        rsi = rax + 1;
        *((rdi + 0x28)) = rsi;
        *(rax) = r14b;
label_2:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_15;
        }
        rcx = rax + 1;
        *((rdi + 0x28)) = rcx;
        *(rax) = dl;
        goto label_0;
label_11:
        rbp = r13 + 2;
        r13 = rbp;
    } while (1);
label_13:
    r13 = rax;
    ecx = 0xa;
    edx = 0xa;
    ebp = 0;
    goto label_1;
label_10:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax < *((rdi + 0x30))) {
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
        return rax;
label_12:
        r13 += rax;
        goto label_0;
label_14:
        esi = (int32_t) r14b;
        *((rsp + 0xc)) = ecx;
        *((rsp + 0xb)) = dl;
        overflow ();
        edx = *((rsp + 0xb));
        ecx = *((rsp + 0xc));
        goto label_2;
label_15:
        esi = ecx;
        overflow ();
        goto label_0;
    }
    esi = 0xa;
    void (*0x402980)() ();
    if (*(0x006256f8) > 4) {
        goto label_16;
    }
    eax = imp.__libc_start_main;
    /* switch table (5 cases) at 0x418bc8 */
    if (*(0x00625670) == 0) {
        goto label_17;
    }
    rax = fcn_00407800 (0);
    rdx = rax * 3;
    r14 = rax;
    rax = imp.__libc_start_main;
    r15 = rax + rdx*8 - 0x18;
    rax = imp.__libc_start_main;
    rbx = *(rax);
    rax = fcn_00407690 (*(rax));
    *((rsp + 8)) = rax;
    rax = *((r15 + 0x10));
    r12 = *(rax);
    fcn_00406af0 (rbx, 0);
    if (*(0x00625770) <= 1) {
        goto label_18;
    }
    r13d = 0;
    ebx = 1;
    rcx = *((rsp + 8));
    while (rdx == 0) {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_19;
        }
        rdx = rax + 1;
        r13d = 0;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
label_3:
        rax = imp.__libc_start_main;
        r12 = *((rax + rbx*8));
        rbx++;
        fcn_00406af0 (r12, r13);
        rax = fcn_00407690 (r12);
        rcx = rax;
        rax = *((r15 + 0x10));
        r12 = *((rax + rbp*8));
        if (rbx >= *(0x00625770)) {
            goto label_18;
        }
        rax = rbx;
        edx = 0;
        rax = rdx:rax / r14;
        rdx = rdx:rax % r14;
    }
    r12 += r13;
    rsi = r12;
    r13 = r12;
    fcn_004052c0 (r13 + rcx, rsi);
    goto label_3;
    edi = 0x2c;
label_6:
    goto label_4;
    ebx = 0;
    if (*(0x00625770) == 0) {
        goto label_20;
    }
    do {
        fcn_00405e30 ();
        rax = imp.__libc_start_main;
        fcn_00406c60 (*((rax + rbx*8)));
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_21;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
label_8:
        *(0x006255b8)++;
        rbx++;
    } while (*(0x00625770) > rbx);
    goto label_20;
    ebx = 0;
    if (*(0x00625770) == 0) {
        goto label_20;
    }
    do {
        rax = imp.__libc_start_main;
        fcn_00406af0 (*((rax + rbx*8)), 0);
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_22;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
label_7:
        rbx++;
    } while (*(0x00625770) > rbx);
    goto label_20;
    if (*(0x00625670) == 0) {
        goto label_17;
    }
    rax = fcn_00407800 (1);
    *((rsp + 0x10)) = 0;
    rdx = rax * 3;
    rcx = rax;
    rax = imp.__libc_start_main;
    r15 = rax + rdx*8 - 0x18;
    rax = imp.__libc_start_main;
    edx = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    dl = (rdx != 0) ? 1 : 0;
    edx = (int32_t) dl;
    rdx += rax;
    *((rsp + 0x18)) = rdx;
    if (rdx == 0) {
        goto label_20;
    }
label_5:
    r14 = *((rsp + 0x10));
    r13d = 0;
    ebp = 0;
    while (r14 < *(0x00625770)) {
        rbx += rbp;
        rsi = rbx;
        rdi += rbp;
        fcn_004052c0 (*((rsp + 8)), rsi);
        rax = imp.__libc_start_main;
        r12 = *((rax + r14*8));
        rax = fcn_00407690 (*((rax + r14*8)));
        *((rsp + 8)) = rax;
        rax = *((r15 + 0x10));
        rbx = *((rax + r13));
        r13 += 8;
        fcn_00406af0 (r12, rbp);
        r14 += *((rsp + 0x18));
    }
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_23;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0xa;
label_9:
    rax = *((rsp + 0x10));
    if (*((rsp + 0x18)) != rax) {
        goto label_5;
    }
    do {
label_20:
        return rax;
label_17:
        edi = 0x20;
        goto label_6;
label_22:
        esi = 0xa;
        overflow ();
        goto label_7;
label_21:
        esi = 0xa;
        overflow ();
        goto label_8;
label_16:
        return rax;
label_18:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_24;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
    } while (1);
label_23:
    esi = 0xa;
    overflow ();
    goto label_9;
label_19:
    esi = 0xa;
    r13d = 0;
    overflow ();
    goto label_3;
label_24:
    esi = 0xa;
    return overflow ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x408410 */
#include <stdint.h>
 
int64_t fcn_00408410 (int64_t arg1) {
    rdi = arg1;
    if (*(0x006256ed) == 0) {
        goto label_1;
    }
label_0:
    rbx = rsp;
    r8d = ebp;
    ecx = 0x41b064;
    edx = 0x15;
    esi = 1;
    rdi = rbx;
    eax = 0;
    sprintf_chk ();
    rax = rbx;
    do {
        ecx = *(rax);
        rax += 4;
        edx = rcx - 0x1010101;
        ecx = ~ecx;
        edx &= ecx;
        edx &= 0x80808080;
    } while (edx == 0);
    ecx = edx;
    ecx >>= 0x10;
    if ((edx & 0x8080) == 0) {
        edx = ecx;
    }
    rcx = rax + 2;
    if ((edx & 0x8080) == 0) {
        rax = rcx;
    }
    esi = edx;
    sil += dl;
    rax -= 3;
    eax -= ebx;
    return rax;
label_1:
    rax = fcn_0040e160 (rdi);
    rdi = rax;
    if (rax == 0) {
        goto label_0;
    }
    eax = fcn_0040eb70 (rdi, 0);
    edx = 0;
    __asm ("cmovs eax, edx");
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4084b0 */
#include <stdint.h>
 
int64_t fcn_004084b0 (void) {
    rax = imp.__libc_start_main;
    rbx = imp.__libc_start_main;
    r12 = rbx + rax*8;
    if (rax == 0) {
        goto label_0;
    }
    do {
        rbp = *(rbx);
        rbx += 8;
        free (*(rbp));
        free (*((rbp + 8)));
        free (*((rbp + 0x10)));
    } while (rbx != r12);
label_0:
    *(0x00625769) = 0;
    *(0x00625770) = 0;
    *(0x00625724) = 0;
    *(0x00625720) = 0;
    *(0x0062571c) = 0;
    *(0x00625718) = 0;
    *(0x00625710) = 0;
    *(0x0062570c) = 0;
    *(0x00625708) = 0;
    *(0x00625714) = 0;
    *(0x00625704) = 0;
    *(0x00625700) = 0;
    *(0x006256fc) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x408580 */
#include <stdint.h>
 
int64_t fcn_00408580 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rcx;
    r14d = esi;
    r13d = edx;
    rcx = imp.__libc_start_main;
    *((rbp - 0x2e8)) = rdi;
    rdi = imp.__libc_start_main;
    if (rcx == *(0x00625778)) {
        edx = 0x190;
        rax = rdx;
        rdx:rax = rax * rcx;
        __asm ("seto dl");
        edx = (int32_t) dl;
        if (rax < 0) {
            goto label_31;
        }
        if (rdx != 0) {
            goto label_31;
        }
        rax = rcx * 5;
        rsi <<= 4;
        rax = fcn_004129e0 (rdi, rax + rax*4);
        rcx = imp.__libc_start_main;
        *(0x00625778) <<= 1;
        *(0x00625780) = rax;
        rdi = rax;
    }
    rax = rcx * 5;
    rax *= 5;
    rbx = rdi + rax*8;
    eax = 0;
    rdi = rbx + 8;
    rcx = rbx;
    *(rbx) = 0;
    *((rbx + 0xbc)) = 0;
    rdi &= 0xfffffffffffffff8;
    rcx -= rdi;
    ecx += 0xc4;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    *((rbx + 0x20)) = 0;
    *((rbx + 0xa8)) = r14d;
    *((rbx + 0xc4)) = 0xffffffff;
    if (*(0x00625769) == 0) {
        if (*(0x00625768) != 0) {
            goto label_32;
        }
    }
label_11:
    r8d = *(0x006256d1);
    if (r13b == 0) {
        goto label_33;
    }
    rax = *((rbp - 0x2e8));
    edx = *(rax);
    r12 = rax;
    if (dl != 0x2f) {
        ecx = *(r15);
        if (cl != 0) {
            goto label_34;
        }
    }
label_10:
    if (r8b != 0) {
        goto label_9;
    }
label_7:
    ecx = imp.__libc_start_main;
    r15 = rbx + 0x18;
    if (ecx < 3) {
        goto label_8;
    }
    if (ecx <= 4) {
        goto label_35;
    }
    if (ecx != 5) {
        goto label_8;
    }
label_1:
    rdx = r15;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_36;
    }
label_2:
    *((rbx + 0xb8)) = 1;
    if (r14d == 5) {
        goto label_37;
    }
    eax = *((rbx + 0x30));
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_37;
    }
label_6:
    r10d = imp.__libc_start_main;
    if (r10d != 0) {
        if (*(0x00625725) == 0) {
            goto label_38;
        }
    }
    rax = errno_location ();
    r14 = *((rbx + 0x18));
    r8 = rax;
    *(rax) = 0x5f;
    if (r14 != *(0x006246b0)) {
        *(0x006246b0) = r14;
    }
    r9d = imp.__libc_start_main;
    *((rbx + 0xb0)) = 0x6245aa;
    if (r9d == 0) {
        goto label_39;
    }
    *((rbx + 0xbc)) = 0;
label_38:
    eax = *((rbx + 0x30));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_40;
    }
label_15:
    if (eax == 0x4000) {
        goto label_41;
    }
    *((rbx + 0xa8)) = 5;
label_16:
    ecx = imp.__libc_start_main;
    r12 = *((rbx + 0x58));
    if (ecx == 0) {
        goto label_42;
    }
    if (*(0x006256ec) != 0) {
        goto label_42;
    }
label_4:
    if (*(0x00625725) != 0) {
        goto label_43;
    }
label_5:
    eax = *(0x006256bc);
    if (al != 0) {
        goto label_44;
    }
    do {
label_0:
        rax = fcn_00412bb0 (*((rbp - 0x2e8)));
        *(0x00625770)++;
        *(rbx) = rax;
label_3:
        rsp = rbp - 0x28;
        rax = r12;
        return rax;
label_33:
        if (r8b != 0) {
            goto label_45;
        }
        if (*(0x00625661) != 0) {
            goto label_22;
        }
        if (r14d == 3) {
            goto label_46;
        }
label_26:
        eax = *(0x006256bc);
        if (al != 0) {
            goto label_47;
        }
        if (*(0x00625660) == 0) {
            goto label_48;
        }
        cl = (r14d == 0) ? 1 : 0;
        edx = ecx;
        if (r14d == 6) {
            goto label_49;
        }
        if (cl != 0) {
            goto label_49;
        }
        if (*(0x00625660) == 0) {
            goto label_48;
        }
label_23:
        r12d = 0;
    } while (r14d != 5);
    if (*(0x006256d4) == 3) {
        goto label_22;
    }
    *((rbp - 0x2f0)) = r8b;
    if (*(0x006256d2) == 0) {
        goto label_0;
    }
    al = fcn_00404ae0 (0xe);
    r8d = *((rbp - 0x2f0));
    if (al != 0) {
        goto label_22;
    }
    al = fcn_00404ae0 (0x10);
    r8d = *((rbp - 0x2f0));
    if (al != 0) {
        goto label_22;
    }
    al = fcn_00404ae0 (0x11);
    r8d = *((rbp - 0x2f0));
    if (al != 0) {
        goto label_22;
    }
    al = fcn_00404ae0 (0x15);
    r8d = *((rbp - 0x2f0));
    if (al == 0) {
        goto label_0;
    }
label_22:
    rax = *((rbp - 0x2e8));
    edx = *(rax);
    if (dl != 0x2f) {
        ecx = *(r15);
        if (cl != 0) {
            goto label_34;
        }
    }
    eax = imp.__libc_start_main;
    r15 = rbx + 0x18;
    r12 = *((rbp - 0x2e8));
    if (eax < 3) {
        goto label_8;
    }
    if (eax <= 4) {
        goto label_8;
    }
    if (eax == 5) {
        goto label_1;
    }
label_8:
    rdx = r15;
    rsi = r12;
    edi = 1;
    eax = lxstat ();
    if (eax == 0) {
        goto label_2;
    }
label_36:
    edx = 5;
    rax = dcgettext (0, "cannot access %s");
    edi = (int32_t) r13b;
    r12d = 0;
    fcn_00405580 (rdi, rax, r12);
    if (r13b != 0) {
        goto label_3;
    }
    goto label_0;
label_42:
    r13 = rbp - 0x2c0;
    rax = fcn_0040d5d0 (r12, r13, *(0x006256e8), 0x200, *(0x006256e0));
    eax = fcn_0040eb70 (rax, 0);
    if (eax > *(0x0062571c)) {
        *(0x0062571c) = eax;
    }
    edx = imp.__libc_start_main;
    if (edx != 0) {
        goto label_4;
    }
    if (*(0x006245a9) != 0) {
        goto label_50;
    }
label_18:
    if (*(0x006245a8) != 0) {
        goto label_51;
    }
label_20:
    if (*(0x006256ee) != 0) {
        goto label_52;
    }
label_19:
    if (*(0x00625725) != 0) {
label_43:
        eax = strlen (*((rbx + 0xb0)));
        if (eax > *(0x00625714)) {
            goto label_53;
        }
    }
label_12:
    eax = imp.__libc_start_main;
    if (eax != 0) {
        goto label_5;
    }
    rax = fcn_0040e520 (*((rbx + 0x28)), rbp - 0x2e0, rdx);
    eax = strlen (rax);
    if (eax > *(0x00625718)) {
        *(0x00625718) = eax;
    }
    eax = *((rbx + 0x30));
    eax &= 0xb000;
    if (eax != 0x2000) {
        goto label_54;
    }
    rax = *((rbx + 0x40));
    r13 = rbp - 0x2c0;
    rdi = rax;
    rax >>= 0x20;
    rdi >>= 8;
    edx &= 0xfff;
    edi &= 0xfffff000;
    edi |= edx;
    rax = fcn_0040e520 (rax, r13, edi);
    eax = strlen (rax);
    if (eax > *(0x00625704)) {
        *(0x00625704) = eax;
    }
    rax = *((rbx + 0x40));
    edx = (int32_t) al;
    rax >>= 0xc;
    dil = 0;
    edi |= edx;
    rax = fcn_0040e520 (rax, r13, rdx);
    eax = strlen (rax);
    edx = imp.__libc_start_main;
    if (eax > edx) {
        *(0x00625700) = eax;
        edx = eax;
    }
    eax = imp.__libc_start_main;
    eax = rdx + rax + 2;
    if (eax <= *(0x006256fc)) {
        goto label_5;
    }
    goto label_55;
label_37:
    if (*(0x006256d2) == 0) {
        goto label_6;
    }
    al = fcn_00404ae0 (0x15);
    if (al == 0) {
        goto label_6;
    }
    errno_location ();
    r14 = *((rbx + 0x18));
    *(rax) = 0x5f;
    if (r14 != *(0x006246b8)) {
        *(0x006246b8) = r14;
    }
    *((rbx + 0xc0)) = 0;
    goto label_6;
label_45:
    rax = *((rbp - 0x2e8));
    edx = *(rax);
    if (dl != 0x2f) {
        goto label_56;
    }
    r12 = *((rbp - 0x2e8));
label_9:
    rax = fcn_0040b070 (r12, 2);
    *((rbx + 0x10)) = rax;
    if (rax != 0) {
        goto label_7;
    }
    edx = 5;
    rax = dcgettext (0, "error canonicalizing %s");
    edi = (int32_t) r13b;
    fcn_00405580 (rdi, rax, r12);
    goto label_7;
label_35:
    if (r13b == 0) {
        goto label_8;
    }
    rdx = r15;
    rsi = r12;
    edi = 1;
    *((rbp - 0x2f0)) = ecx;
    eax = xstat ();
    ecx = *((rbp - 0x2f0));
    if (ecx == 3) {
        goto label_57;
    }
    if (eax < 0) {
        goto label_58;
    }
    edx = *((rbx + 0x30));
    edx &= 0xf000;
    if (edx != 0x4000) {
        goto label_8;
    }
label_57:
    if (eax == 0) {
        goto label_2;
    }
    goto label_59;
label_44:
    rax = fcn_0040e520 (*((rbx + 0x20)), rbp - 0x2c0, rdx);
    eax = strlen (rax);
    if (eax <= *(0x00625720)) {
        goto label_0;
    }
    *(0x00625720) = eax;
    goto label_0;
label_56:
    ecx = *(r15);
    r12 = *((rbp - 0x2e8));
    if (cl == 0) {
        goto label_9;
    }
label_34:
    *((rbp - 0x2f2)) = r8b;
    *((rbp - 0x2f1)) = dl;
    *((rbp - 0x2f0)) = cl;
    rax = strlen (*((rbp - 0x2e8)));
    r12 = rax;
    strlen (r15);
    ecx = *((rbp - 0x2f0));
    r10d = *((r15 + 1));
    rax = r12 + rax + 0x19;
    edx = *((rbp - 0x2f1));
    r8d = *((rbp - 0x2f2));
    rax &= 0xfffffffffffffff0;
    rdi = rsp + 0xf;
    rdi &= 0xfffffffffffffff0;
    r12 = rdi;
    if (cl == 0x2e) {
        goto label_60;
    }
label_14:
    rsi = r15;
    while (r10b != 0) {
        ecx = r10d;
        r10d = *((rsi + 1));
        rdi = rax;
        rax = rdi + 1;
        rsi++;
        *((rax - 1)) = cl;
    }
    if (r15 < rsi) {
        if (*((rsi - 1)) == 0x2f) {
            goto label_13;
        }
        *(rax) = 0x2f;
        rax = rdi + 2;
    }
label_13:
    if (dl == 0) {
        goto label_61;
    }
    rcx = *((rbp - 0x2e8));
    do {
        rcx++;
        rax++;
        *((rax - 1)) = dl;
        edx = *(rcx);
    } while (dl != 0);
label_61:
    *(rax) = 0;
    goto label_10;
label_32:
    al = fcn_00404e20 (*((rbp - 0x2e8)));
    edx = (int32_t) al;
    *((rbx + 0xc4)) = edx;
    if (al == 0) {
        goto label_11;
    }
    *(0x00625769) = 1;
    goto label_11;
label_53:
    *(0x00625714) = eax;
    goto label_12;
label_54:
    rax = fcn_0040d5d0 (*((rbx + 0x48)), rbp - 0x2c0, *(0x006256dc), 1, *(0x006245a0));
    eax = fcn_0040eb70 (rax, 0);
    if (eax <= *(0x006256fc)) {
        goto label_5;
    }
label_55:
    *(0x006256fc) = eax;
    goto label_5;
label_60:
    rax = rdi;
    if (r10b == 0) {
        goto label_13;
    }
    goto label_14;
label_39:
    if (r14 == *(0x006246a8)) {
        goto label_62;
    }
    *(r8) = 0;
    rsi = r15;
    rdi = r12;
    *((rbp - 0x2f0)) = r8;
    eax = fcn_0040b900 ();
    if (eax <= 0) {
        goto label_63;
    }
    *((rbx + 0xbc)) = 2;
    *(0x00625724) = 1;
label_24:
    eax = *((rbx + 0x30));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_15;
    }
    r8d = imp.__libc_start_main;
    if (r8d != 0) {
label_40:
        if (*(0x006256bd) == 0) {
            goto label_64;
        }
    }
label_30:
    rax = fcn_0040abf0 (r12, *((rbx + 0x48)));
    r14 = rax;
    *((rbx + 8)) = rax;
    if (rax == 0) {
        goto label_65;
    }
label_25:
    if (*(r14) == 0x2f) {
        goto label_66;
    }
    rax = fcn_0040b7b0 (r12);
    if (rax == 0) {
        goto label_66;
    }
    *((rbp - 0x2f0)) = rax;
    strlen (r14);
    rdx = *((rbp - 0x2f0));
    rax = fcn_00412980 (rdx + rax + 2);
    rdx = *((rbp - 0x2f0));
    r15 = rax;
    if (*((r12 + rdx - 1)) != 0x2f) {
        rdx++;
    }
    rsi = r12;
    rdi = r15;
    rax = stpncpy ();
    strcpy (rax, r14);
label_21:
    if (r15 == 0) {
        goto label_67;
    }
    edi = *((rbx + 0xc4));
    if (edi == 0) {
        goto label_68;
    }
label_29:
    if (*(0x006256d4) > 1) {
        goto label_69;
    }
    if (*(0x006256bd) != 0) {
        goto label_69;
    }
label_17:
    free (r15);
    eax = *((rbx + 0x30));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_15;
    }
label_64:
    *((rbx + 0xa8)) = 6;
    goto label_16;
label_69:
    rdx = rbp - 0x2c0;
    rsi = r15;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_17;
    }
    *((rbx + 0xb9)) = 1;
    eax = *((rbp - 0x2a8));
    if (r13b == 0) {
        goto label_70;
    }
    esi = imp.__libc_start_main;
    if (esi == 0) {
        goto label_70;
    }
    edx = eax;
    edx &= 0xf000;
    if (edx == 0x4000) {
        goto label_17;
    }
label_70:
    *((rbx + 0xac)) = eax;
    goto label_17;
label_41:
    if (r13b != 0) {
        if (*(0x006256b5) != 0) {
            goto label_71;
        }
        *((rbx + 0xa8)) = 9;
        goto label_16;
    }
label_71:
    *((rbx + 0xa8)) = 3;
    goto label_16;
label_50:
    eax = fcn_00408410 (*((rbx + 0x34)));
    if (eax <= *(0x00625710)) {
        goto label_18;
    }
    *(0x00625710) = eax;
    goto label_18;
label_52:
    eax = fcn_00408410 (*((rbx + 0x34)));
    if (eax <= *(0x00625708)) {
        goto label_19;
    }
    *(0x00625708) = eax;
    goto label_19;
label_51:
    r14d = *((rbx + 0x38));
    if (*(0x006256ed) == 0) {
        goto label_72;
    }
label_27:
    r8d = r14d;
    ecx = 0x41b064;
    edx = 0x15;
    rdi = r13;
    esi = 1;
    eax = 0;
    sprintf_chk ();
    rax = r13;
    do {
        ecx = *(rax);
        rax += 4;
        edx = rcx - 0x1010101;
        ecx = ~ecx;
        edx &= ecx;
        edx &= 0x80808080;
    } while (edx == 0);
    ecx = edx;
    ecx >>= 0x10;
    if ((edx & 0x8080) == 0) {
        edx = ecx;
    }
    rcx = rax + 2;
    if ((edx & 0x8080) == 0) {
        rax = rcx;
    }
    esi = edx;
    sil += dl;
    rax -= 3;
    eax -= r13d;
label_28:
    if (*(0x0062570c) >= eax) {
        goto label_20;
    }
    *(0x0062570c) = eax;
    goto label_20;
label_66:
    rax = fcn_00412bb0 (r14);
    r15 = rax;
    goto label_21;
label_47:
    dl = (r14d == 0) ? 1 : 0;
    if (r14d == 6) {
        goto label_49;
    }
    if (dl == 0) {
        goto label_22;
    }
label_49:
    if (*(0x006256b8) == 5) {
        goto label_22;
    }
    if (*(0x00625750) != 0) {
        goto label_22;
    }
    if (*(0x006256bd) != 0) {
        goto label_22;
    }
    if (al != 0) {
        goto label_22;
    }
    if (*(0x00625660) == 0) {
        goto label_48;
    }
    if (dl != 0) {
        goto label_22;
    }
    goto label_23;
label_58:
    rax = errno_location ();
    if (*(rax) == 2) {
        goto label_8;
    }
label_59:
    edx = 5;
    rax = dcgettext (0, "cannot access %s");
    r12d = 0;
    eax = fcn_00405580 (1, rax, r12);
    goto label_3;
label_48:
    r12d = 0;
    goto label_0;
label_63:
    r8 = *((rbp - 0x2f0));
    edx = *(r8);
    ecx = rdx - 0x16;
    ecx &= 0xffffffef;
    if (ecx != 0) {
        if (edx != 0x5f) {
            goto label_73;
        }
    }
    rdx = *((rbx + 0x18));
    *(0x006246a8) = rdx;
label_73:
    *((rbx + 0xbc)) = 0;
    if (eax >= 0) {
        goto label_24;
    }
    *((rbp - 0x2f0)) = r8;
    rax = fcn_00412110 (0, 3, r12);
    r8 = *((rbp - 0x2f0));
    rcx = rax;
    eax = 0;
    error (0, *(r8), 0x41d784);
    goto label_24;
label_65:
    edx = 5;
    rax = dcgettext (0, "cannot read symbolic link %s");
    edi = (int32_t) r13b;
    fcn_00405580 (rdi, rax, r12);
    r14 = *((rbx + 8));
    if (r14 != 0) {
        goto label_25;
    }
label_67:
    r15d = 0;
    goto label_17;
label_46:
    if (*(0x006256d2) == 0) {
        goto label_26;
    }
    *((rbp - 0x2f0)) = r8b;
    al = fcn_00404ae0 (0x13);
    r8d = *((rbp - 0x2f0));
    if (al != 0) {
        goto label_22;
    }
    al = fcn_00404ae0 (0x12);
    r8d = *((rbp - 0x2f0));
    if (al != 0) {
        goto label_22;
    }
    al = fcn_00404ae0 (0x14);
    r8d = *((rbp - 0x2f0));
    if (al != 0) {
        goto label_22;
    }
    goto label_26;
label_72:
    rax = fcn_0040e2f0 (r14d);
    rdi = rax;
    if (rax == 0) {
        goto label_27;
    }
    eax = fcn_0040eb70 (rdi, 0);
    edx = 0;
    __asm ("cmovs eax, edx");
    goto label_28;
label_68:
    al = fcn_00404e20 (*((rbx + 8)));
    if (al == 0) {
        goto label_29;
    }
    *((rbx + 0xc4)) = 0xffffffff;
    goto label_29;
label_62:
    *(r8) = 0x5f;
    eax = *((rbx + 0x30));
    *((rbx + 0xbc)) = 0;
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_15;
    }
    goto label_30;
label_31:
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4092a0 */
#include <stdint.h>
 
int64_t fcn_004092a0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_sp_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = rdi;
    ebx = edx;
    *((rsp + 0x1c)) = edx;
    errno_location ();
    rdi = r14;
    *(rax) = 0;
    r12 = rax;
    rax = opendir ();
    if (rax == 0) {
        goto label_13;
    }
    r13 = rax;
    if (*(0x00625788) != 0) {
        rdi = rax;
        eax = dirfd ();
        rdx = rsp + 0x20;
        if (eax < 0) {
            goto label_14;
        }
        esi = eax;
        edi = 1;
        eax = fxstat ();
        eax >>= 0x1f;
        if (al != 0) {
            goto label_15;
        }
label_3:
        rcx = *((rsp + 0x28));
        rdx = *((rsp + 0x20));
        *((rsp + 0x10)) = rcx;
        *((rsp + 8)) = rdx;
        rax = fcn_00412980 (0x10);
        rcx = *((rsp + 0x10));
        rdx = *((rsp + 8));
        rsi = rax;
        r15 = rax;
        *(rax) = rcx;
        *((rax + 8)) = rdx;
        rax = fcn_0040d220 (*(0x00625788));
        if (rax == 0) {
            goto label_16;
        }
        if (r15 != rax) {
            free (r15);
            rax = fcn_00412110 (0, 3, r14);
            edx = 5;
            rbx = rax;
            rax = dcgettext (0, "%s: not listing already-listed directory");
            rcx = rbx;
            eax = 0;
            error (0, 0, rax);
            rdi = r13;
            closedir ();
            *(0x006255d0) = 2;
label_4:
            return rax;
        }
        rax = imp.__libc_start_main;
        rdx = imp.__libc_start_main;
        r15 = *((rsp + 0x28));
        rcx = *((rsp + 0x20));
        rdx -= rax;
        if (rdx <= 0xf) {
            esi = 0x10;
            edi = 0x6254a0;
            *((rsp + 8)) = rcx;
            _obstack_newchunk ();
            rax = imp.__libc_start_main;
            rcx = *((rsp + 8));
        }
        rdx = rax + 0x10;
        *(0x006254b8) = rdx;
        *((rax + 8)) = rcx;
        *(rax) = r15;
    }
    fcn_004084b0 ();
    if (*(0x006256b6) == 0) {
        goto label_17;
    }
label_2:
    if (*(0x00624400) == 0) {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_18;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
label_10:
        *(0x006255b8)++;
    }
    *(0x00624400) = 0;
    if (*(0x006256d8) != 0) {
        goto label_19;
    }
    r15d = 0;
    if (*(0x006256d1) != 0) {
        goto label_20;
    }
label_9:
    rsi = imp.__libc_start_main;
    edx = 0xffffffff;
    r9d = 0x625500;
    if (rbp == 0) {
    }
    fcn_004062d0 (rbp, rsi, rdx, 0, 1, r9);
    free (r15);
    esi = 1;
    edx = 2;
    rcx = stdout;
    edi = 0x41b2e3;
    fwrite_unlocked ();
    *(0x006255b8) += 2;
label_1:
    *((rsp + 0x10)) = 0;
    eax = (int32_t) bl;
    *((rsp + 8)) = eax;
label_0:
    *(r12) = 0;
    rdi = r13;
    rax = readdir ();
    rbx = rax;
    if (rax == 0) {
        goto label_21;
    }
    rbp = rax + 0x13;
    eax = imp.__libc_start_main;
    if (eax == 2) {
        goto label_22;
    }
    if (*((rbx + 0x13)) == 0x2e) {
        goto label_23;
    }
    if (eax != 0) {
        goto label_22;
    }
    r15 = imp.__libc_start_main;
    if (r15 != 0) {
        goto label_24;
    }
    goto label_22;
    do {
        r15 = *((r15 + 8));
        if (r15 == 0) {
            goto label_22;
        }
label_24:
        eax = fcn_004159a0 (*(r15), rbp, 4);
    } while (eax != 0);
label_5:
    fcn_00405d70 ();
    goto label_0;
label_17:
    if (*(0x00625678) == 0) {
        goto label_1;
    }
    goto label_2;
label_14:
    rsi = r14;
    edi = 1;
    eax = xstat ();
    eax >>= 0x1f;
    if (al == 0) {
        goto label_3;
    }
label_15:
    edx = 5;
    rax = dcgettext (0, "cannot determine device and inode of %s");
    edi = *((rsp + 0x1c));
    fcn_00405580 (rdi, rax, r14);
    rdi = r13;
    closedir ();
    goto label_4;
label_21:
    edx = *(r12);
    if (edx == 0) {
        goto label_25;
    }
    edx = 5;
    rax = dcgettext (0, "reading directory %s");
    fcn_00405580 (*((rsp + 8)), rax, r14);
    if (*(r12) == 0x4b) {
        goto label_5;
    }
label_25:
    rdi = r13;
    eax = closedir ();
    if (eax != 0) {
        goto label_26;
    }
label_7:
    fcn_00404f40 ();
    if (*(0x006256b6) != 0) {
        goto label_27;
    }
label_6:
    eax = imp.__libc_start_main;
    if (eax != 0) {
        if (*(0x006256ec) == 0) {
            goto label_28;
        }
    }
    if (*(0x006256d8) != 0) {
        goto label_29;
    }
label_8:
    edx = 5;
    rax = dcgettext (0, "total");
    rsi = stdout;
    rbx = rax;
    rdi = rax;
    fputs_unlocked ();
    rax = strlen (rbx);
    rdi = stdout;
    *(0x006255b8) += rax;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_30;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x20;
label_11:
    *(0x006255b8)++;
    rax = fcn_0040d5d0 (*((rsp + 0x10)), rsp + 0x20, *(0x006256e8), 0x200, *(0x006256e0));
    rsi = stdout;
    rbx = rax;
    rdi = rax;
    fputs_unlocked ();
    rax = strlen (rbx);
    rdi = stdout;
    *(0x006255b8) += rax;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_31;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0xa;
label_12:
    *(0x006255b8)++;
label_28:
    if (*(0x00625770) == 0) {
        goto label_4;
    }
    eax = fcn_00407ca0 ();
    goto label_4;
label_23:
    if (eax == 0) {
        goto label_5;
    }
    eax = 0;
    al = (*((rbx + 0x14)) == 0x2e) ? 1 : 0;
    if (*((rbx + rax + 0x14)) == 0) {
        goto label_5;
    }
label_22:
    r15 = imp.__libc_start_main;
    if (r15 != 0) {
        goto label_32;
    }
    goto label_33;
    do {
        r15 = *((r15 + 8));
        if (r15 == 0) {
            goto label_33;
        }
label_32:
        eax = fcn_004159a0 (*(r15), rbp, 4);
    } while (eax != 0);
    goto label_5;
label_33:
    eax = *((rbx + 0x12));
    esi = 0;
    eax--;
    if (al <= 0xd) {
        eax = (int32_t) al;
    }
    rax = fcn_00408580 (rbp, *((rax*4 + 0x4194a0)), 0, r14);
    if (*(0x006256f8) != 1) {
        goto label_5;
    }
    if (*(0x006256f0) != 0xffffffff) {
        goto label_5;
    }
    if (*(0x006256ec) != 0) {
        goto label_5;
    }
    if (*(0x006256b6) != 0) {
        goto label_5;
    }
    fcn_00404f40 ();
    fcn_00407ca0 ();
    fcn_004084b0 ();
    goto label_5;
label_27:
    esi = 0;
    fcn_00405140 (r14);
    goto label_6;
label_26:
    edx = 5;
    rax = dcgettext (0, "closing directory %s");
    edi = *((rsp + 0x1c));
    fcn_00405580 (rdi, rax, r14);
    goto label_7;
label_29:
    edx = 2;
    esi = 1;
    edi = 0x41b093;
    rcx = stdout;
    fwrite_unlocked ();
    *(0x006255b8) += 2;
    goto label_8;
label_19:
    rcx = stdout;
    edx = 2;
    esi = 1;
    r15d = 0;
    edi = 0x41b093;
    fwrite_unlocked ();
    *(0x006255b8) += 2;
    if (*(0x006256d1) == 0) {
        goto label_9;
    }
label_20:
    rax = fcn_0040b070 (r14, 2);
    r15 = rax;
    if (rax != 0) {
        goto label_9;
    }
    edx = 5;
    rax = dcgettext (0, "error canonicalizing %s");
    edi = *((rsp + 0x1c));
    fcn_00405580 (rdi, rax, r14);
    goto label_9;
label_13:
    edx = 5;
    rax = dcgettext (0, "cannot open directory %s");
    edi = *((rsp + 0x1c));
    fcn_00405580 (rdi, rax, r14);
    goto label_4;
label_18:
    esi = 0xa;
    overflow ();
    goto label_10;
label_30:
    esi = 0x20;
    overflow ();
    goto label_11;
label_31:
    esi = 0xa;
    overflow ();
    goto label_12;
label_16:
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40a530 */
#include <stdint.h>
 
uint64_t fcn_0040a530 (int64_t arg1) {
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
    r12d = edi;
    rbx = imp.__libc_start_main;
    if (edi != 0) {
        rax = dcgettext (0, "Try '%s --help' for more information.\n");
        rdi = stderr;
        rcx = rbx;
        esi = 1;
        rdx = rax;
        eax = 0;
        fprintf_chk ();
label_0:
        exit (r12d);
    }
    rax = dcgettext (0, "Usage: %s [OPTION]... [FILE]...\n");
    rdx = rbx;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "\nMandatory arguments to long options are mandatory for short options too.\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --block-size=SIZE      with -l, scale sizes by SIZE when printing them;\n                               e.g., '--block-size=M'; see SIZE format below\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information);\n                               with -l: show ctime and sort by name;\n                               otherwise: sort by ctime, newest first\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -C                         list entries by columns\n      --color[=WHEN]         colorize the output; WHEN can be 'always' (default\n                               if omitted), 'auto', or 'never'; more info below\n  -d, --directory            list directories themselves, not their contents\n  -D, --dired                generate output designed for Emacs' dired mode\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append '*'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -g                         like -l, but do not list owner\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --group-directories-first\n                             group directories before files;\n                               can be augmented with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -G, --no-group             in a long listing, don't print group names\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -h, --human-readable       with -l and -s, print sizes like 1K 234M 2G etc.\n      --si                   likewise, but use powers of 1000 not 1024\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                               that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --hyperlink[=WHEN]     hyperlink file names; WHEN can be 'always'\n                               (default if omitted), 'auto', or 'never'\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -k, --kibibytes            default to 1024-byte blocks for disk usage;\n                               used only with -s and per directory totals\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print entry names without quoting\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -q, --hide-control-chars   print ? instead of nongraphic characters\n      --show-control-chars   show nongraphic characters as-is (the default,\n                               unless program is 'ls' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always,\n                               shell-escape, shell-escape-always, c, escape\n                               (overrides QUOTING_STYLE environment variable)\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -S                         sort by file size, largest first\n      --sort=WORD            sort by WORD instead of name: none (-U), size (-S),\n                               time (-t), version (-v), extension (-X)\n      --time=WORD            with -l, show time as WORD instead of default\n                               modification time: atime or access or use (-u);\n                               ctime or status (-c); also use specified time\n                               as sort key if --sort=time (newest first)\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rbx = stdout;
    rax = dcgettext (0, "      --time-style=TIME_STYLE  time/date format with -l; see TIME_STYLE below\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -u                         with -lt: sort by, and show, access time;\n                               with -l: show access time and sort by name;\n                               otherwise: sort by access time, newest first\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n  -1                         list one file per line.  Avoid '\\n' with -q or -b\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --help     display this help and exit\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --version  output version information and exit\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\nFORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\nthen FORMAT1 applies to non-recent files and FORMAT2 to recent files.\nTIME_STYLE prefixed with 'posix-' takes effect only outside the POSIX locale.\nAlso the TIME_STYLE environment variable sets the default style to use.\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    eax = *(0x006245ac);
    if (eax == 1) {
        goto label_4;
    }
    eax = "vdir";
    if (eax != 2) {
    }
label_1:
    *(rsp) = 0x41b568;
    esi = 0x41b568;
    rbx = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x41b1b1;
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
    while (eax != 0) {
        rbx += 0x10;
        rsi = *(rbx);
        if (rsi == 0) {
            goto label_5;
        }
        eax = strcmp (rbp, rsi);
    }
label_5:
    rbx = *((rbx + 8));
    edx = 5;
    esi = "\n%s online help: <%s>\n";
    edi = 0;
    if (rbx == 0) {
        goto label_6;
    }
    rax = dcgettext (rdi, rsi);
    edi = 1;
    ecx = "https://www.gnu.org/software/coreutils/";
    edx = "GNU coreutils";
    rsi = rax;
    eax = 0;
    printf_chk ();
    rax = setlocale (5, 0);
    if (rax == 0) {
        goto label_7;
    }
    eax = strncmp (rax, 0x41b1bb, 3);
    while (1) {
label_7:
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        rcx = rbp;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        ecx = 0x41b08a;
        if (rbp != rbx) {
        }
label_3:
        edx = 5;
        rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
        rcx = rbp;
        rdx = rbx;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        goto label_0;
label_4:
        goto label_1;
label_2:
        rbx = rbp;
        edx = 5;
        rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
        rdx = rbp;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
    }
label_6:
    rax = dcgettext (rdi, rsi);
    edi = 1;
    ecx = "https://www.gnu.org/software/coreutils/";
    edx = "GNU coreutils";
    rsi = rax;
    eax = 0;
    printf_chk ();
    rax = setlocale (5, 0);
    if (rax == 0) {
        goto label_8;
    }
    eax = strncmp (rax, 0x41b1bb, 3);
    if (eax != 0) {
        goto label_2;
    }
label_8:
    edx = 5;
    rbx = rbp;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    rcx = rbp;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40abf0 */
#include <stdint.h>
 
uint64_t fcn_0040abf0 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0x401;
    r15 = 0x7ffffffffffffffe;
    r14 = 0x3fffffffffffffff;
    r13 = rdi;
    rbx = rsi + 1;
    if (rsi >= 0x401) {
        rbx = rax;
    }
label_0:
    rax = malloc (rbx);
    if (rax == 0) {
        goto label_2;
    }
    do {
        rdx = rbx;
        rsi = rax;
        rdi = r13;
        rax = readlink ();
        r12 = rax;
        if (rax < 0) {
            goto label_3;
        }
label_1:
        if (rbx > r12) {
            goto label_4;
        }
        free (rbp);
        if (rbx > r14) {
            goto label_5;
        }
        rbx += rbx;
        rax = malloc (rbx);
    } while (rax != 0);
label_2:
    rax = rbp;
    return rax;
label_5:
    if (rbx > r15) {
        goto label_6;
    }
    rbx = 0x7fffffffffffffff;
    goto label_0;
label_3:
    rax = errno_location ();
    if (*(rax) == 0x22) {
        goto label_1;
    }
    ebp = 0;
    free (rbp);
    goto label_2;
label_4:
    *((rbp + r12)) = 0;
    goto label_2;
label_6:
    errno_location ();
    ebp = 0;
    *(rax) = 0xc;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40acf0 */
#include <stdint.h>
 
uint64_t fcn_0040acf0 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40ae10 */
#include <stdint.h>
 
uint64_t fcn_0040ae10 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_00412270 (1, rbp);
        rdx = r12;
        rax = fcn_00411f60 (0, 8);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
        void (*0x402cd0)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40ae90 */
#include <stdint.h>
 
uint64_t fcn_0040ae90 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00412290 (r12);
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
label_1:
    } while (rbx == 0);
    eax = memcmp (r14, rbp, r13);
    if (eax != 0) {
        goto label_0;
    }
    rbx++;
    rbp += r13;
    rax = fcn_00412290 (r12);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40afb0 */
#include <stdint.h>
 
uint64_t fcn_0040afb0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_0040acf0 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_0040ae10 (r14, r12, rax);
        fcn_0040ae90 (rbx, rbp, r15);
        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b070 */
#include <stdint.h>
 
uint64_t fcn_0040b070 (int64_t arg1, int64_t arg2) {
    uint32_t var_8h;
    uint32_t var_14h;
    uint32_t var_18h;
    uint32_t var_20h;
    void * ptr;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_58h;
    int64_t var_70h;
    rdi = arg1;
    rsi = arg2;
    ecx = esi;
    ecx &= 3;
    eax = rcx - 1;
    *((rsp + 0x14)) = ecx;
    if ((ecx & eax) != 0) {
        goto label_18;
    }
    r15 = rdi;
    if (rdi == 0) {
        goto label_18;
    }
    eax = *(rdi);
    if (al == 0) {
        goto label_19;
    }
    r14d = esi;
    if (al == 0x2f) {
        goto label_20;
    }
    rax = fcn_00412d10 ();
    r12 = rax;
    if (rax == 0) {
        goto label_7;
    }
    rax = strlen (rax);
    rbx = rax;
    if (rax <= 0xfff) {
        goto label_21;
    }
    rbx += r12;
label_1:
    r14d &= 4;
    *((rsp + 0x20)) = r15;
    eax = *(r15);
    *((rsp + 0x38)) = r14d;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x30)) = 0;
    *((rsp + 0x28)) = 0;
label_0:
    if (al == 0) {
        goto label_22;
    }
    edx = eax;
    if (al != 0x2f) {
        goto label_23;
    }
    do {
        r15++;
        edx = *(r15);
    } while (dl == 0x2f);
    if (dl == 0) {
        goto label_22;
    }
label_23:
    r13 = r15;
    while (al != 0x2f) {
        r13 = r14;
        eax = *((r13 + 1));
        r14 = r13 + 1;
        if (al == 0) {
            goto label_24;
        }
    }
label_24:
    if (r14 == r15) {
        goto label_22;
    }
    r8 = r14;
    r8 -= r15;
    if (r8 == 1) {
        goto label_25;
    }
    if (dl == 0x2e) {
        if (r8 == 2) {
            goto label_26;
        }
    }
label_4:
    if (*((rbx - 1)) != 0x2f) {
        *(rbx) = 0x2f;
        rbx++;
    }
    rax = rbx + r8;
    if (rbp <= rax) {
        rbp -= r12;
        rbx -= r12;
        rdi = r12;
        *((rsp + 8)) = r8;
        rax = r8 + rbp + 1;
        rbp += 0x1000;
        if (r8 >= 0x1000) {
        }
        rax = fcn_004129e0 (rdi, rbp);
        r8 = *((rsp + 8));
        r12 = rax;
        rbp += rax;
        rbx += rax;
    }
    rdx = r8;
    *((rsp + 8)) = r8;
    memcpy (rbx, r15, rdx);
    r8 = *((rsp + 8));
    rbx = rbx + r8;
    *(rbx) = 0;
    if (*((rsp + 0x14)) != 2) {
        goto label_27;
    }
    edx = *((rsp + 0x38));
    while (eax != 1) {
        *((rsp + 0x58)) = 0;
label_3:
        if (*(r14) != 0) {
            if (*((rsp + 0x14)) != 2) {
                goto label_28;
            }
        }
label_2:
        eax = *(r14);
        r15 = r14;
        goto label_0;
label_20:
        rax = fcn_00412980 (0x1000);
        r12 = rax;
        rbp = rax + 0x1000;
        rbx = rax + 1;
        *(rax) = 0x2f;
        goto label_1;
label_27:
        eax = *((rsp + 0x38));
        rdx = rsp + 0x40;
        rsi = r12;
        edi = 1;
        if (eax == 0) {
            goto label_29;
        }
        eax = xstat ();
        al = (eax != 0) ? 1 : 0;
label_5:
        if (al == 0) {
            goto label_30;
        }
        rax = errno_location ();
        rdx = rax;
        ecx = *(rax);
        eax = *((rsp + 0x14));
        if (eax == 0) {
            goto label_31;
        }
    }
    *((rsp + 0x3c)) = ecx;
    *((rsp + 8)) = rdx;
    strspn (r14, 0x41b371);
    rdx = *((rsp + 8));
    ecx = *((rsp + 0x3c));
    if (*((r14 + rax)) != 0) {
        goto label_31;
    }
    if (ecx != 2) {
        goto label_31;
    }
label_6:
    eax = *((r13 + 1));
    r15 = r14;
    goto label_0;
label_30:
    eax = *((rsp + 0x58));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_32;
    }
    if (eax == 0x4000) {
        goto label_2;
    }
    goto label_3;
label_25:
    if (dl != 0x2e) {
        goto label_4;
    }
label_14:
    r15 = r14;
    goto label_0;
label_22:
    rax = r12 + 1;
    if (rbx > rax) {
        if (*((rbx - 1)) == 0x2f) {
            goto label_33;
        }
    }
    rax = rbx + 1;
label_16:
    *(rbx) = 0;
    if (rbp != rax) {
        rbx -= r12;
        rax = fcn_004129e0 (r12, rbx + 1);
        r12 = rax;
    }
    free (*((rsp + 0x28)));
    rax = *((rsp + 0x18));
    if (rax != 0) {
        fcn_0040ccc0 (rax);
    }
label_7:
    rax = r12;
    return rax;
label_29:
    eax = lxstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_5;
label_32:
    if (*((rsp + 0x18)) == 0) {
        goto label_34;
    }
label_8:
    al = fcn_0040b9a0 (*((rsp + 0x18)), *((rsp + 0x20)), rsp + 0x40);
    if (al == 0) {
        fcn_0040b910 (*((rsp + 0x18)), *((rsp + 0x20)), rsp + 0x40);
        rax = fcn_0040abf0 (r12, *((rsp + 0x70)));
        r15 = rax;
        if (rax == 0) {
            goto label_35;
        }
        rax = strlen (rax);
        r13 = rax;
        rax = strlen (r14);
        rdx = rax;
        r8 = r13 + rax + 1;
        if (*((rsp + 0x30)) == 0) {
            goto label_36;
        }
        if (r8 > *((rsp + 0x30))) {
            goto label_37;
        }
label_11:
        rax = *((rsp + 0x28));
        rdx++;
        memmove (rax + r13, r14, rdx);
        rax = memcpy (*((rsp + 0x28)), r15, r13);
        rdx = r12 + 1;
        r14 = rax;
        *((rsp + 0x20)) = rax;
        if (*(r15) == 0x2f) {
            goto label_38;
        }
        if (rbx > rdx) {
            goto label_39;
        }
label_13:
        free (r15);
        goto label_2;
    }
    if (*((rsp + 0x14)) == 2) {
        goto label_6;
    }
    rax = errno_location ();
    ecx = 0x28;
    rdx = rax;
label_12:
    *((rsp + 0x14)) = ecx;
    *((rsp + 8)) = rdx;
    free (*((rsp + 0x28)));
    free (r12);
    rdx = *((rsp + 8));
    ecx = *((rsp + 0x14));
label_10:
    *((rsp + 0x14)) = ecx;
    *((rsp + 8)) = rdx;
    fcn_0040ccc0 (*((rsp + 0x18)));
    ecx = *((rsp + 0x14));
    rdx = *((rsp + 8));
label_9:
    *(rdx) = ecx;
    r12d = 0;
    goto label_7;
label_26:
    if (*((r15 + 1)) != 0x2e) {
        goto label_4;
    }
    rdx = r12 + 1;
    r15 = r14;
    if (rbx <= rdx) {
        goto label_0;
    }
    rdx = rbx - 1;
    if (r12 < rdx) {
        if (*((rbx - 2)) != 0x2f) {
            goto label_40;
        }
    }
    rbx = rdx;
    goto label_0;
label_18:
    errno_location ();
    r12d = 0;
    *(rax) = 0x16;
    goto label_7;
label_34:
    rax = fcn_0040ca80 (7, 0, 0x40d440, 0x40d4b0, 0x40d4f0);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        goto label_8;
    }
    fcn_00412bd0 ();
label_28:
    rax = errno_location ();
    ecx = 0x14;
    rdx = rax;
label_31:
    *((rsp + 0x14)) = ecx;
    *((rsp + 8)) = rdx;
    free (*((rsp + 0x28)));
    rax = free (r12);
    rdx = *((rsp + 8));
    ecx = *((rsp + 0x14));
    if (*((rsp + 0x18)) == 0) {
        goto label_9;
    }
    goto label_10;
label_36:
    *((rsp + 8)) = rax;
    eax = 0x1000;
    if (r8 >= 0x1000) {
        rax = r8;
    }
    rdi = rax;
    *((rsp + 0x30)) = rax;
    rax = fcn_00412980 (rdi);
    rdx = *((rsp + 8));
    *((rsp + 0x28)) = rax;
    goto label_11;
label_19:
    errno_location ();
    r12d = 0;
    *(rax) = 2;
    goto label_7;
label_21:
    rax = fcn_004129e0 (r12, 0x1000);
    r12 = rax;
    rbx += rax;
    rbp = rax + 0x1000;
    goto label_1;
label_35:
    rax = errno_location ();
    rdx = rax;
    ecx = *(rax);
    if (*((rsp + 0x14)) != 2) {
        goto label_12;
    }
    if (ecx != 0xc) {
        goto label_6;
    }
    goto label_12;
label_38:
    *(r12) = 0x2f;
    rbx = rdx;
    goto label_13;
label_40:
    rbx = rdx - 1;
    if (r12 == rbx) {
        goto label_14;
    }
label_15:
    if (*((rbx - 1)) == 0x2f) {
        goto label_14;
    }
    rdx = rbx;
    rbx = rdx - 1;
    if (r12 != rbx) {
        goto label_15;
    }
    goto label_14;
label_37:
    rsi = r8;
    *((rsp + 8)) = r8;
    *((rsp + 0x20)) = rax;
    rax = fcn_004129e0 (*((rsp + 0x28)), rsi);
    r8 = *((rsp + 8));
    rdx = *((rsp + 0x20));
    *((rsp + 0x28)) = rax;
    *((rsp + 0x30)) = r8;
    goto label_11;
label_33:
    rax = rbx;
    rbx--;
    goto label_16;
label_39:
    rdx = rbx - 1;
    if (r12 >= rdx) {
        goto label_41;
    }
    rbx = rdx;
    if (*((rbx - 2)) == 0x2f) {
        goto label_13;
    }
label_17:
    rbx--;
    if (r12 == rbx) {
        goto label_13;
    }
    if (*((rbx - 1)) == 0x2f) {
        goto label_13;
    }
    goto label_17;
label_41:
    rbx = rdx;
    goto label_13;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b7b0 */
#include <stdint.h>
 
uint64_t fcn_0040b7b0 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_0040b870 (rdi);
    rcx = rax;
    rcx -= rbx;
    if (rcx <= rbp) {
        goto label_0;
    }
    rdx = rcx - 1;
    if (*((rax - 1)) == 0x2f) {
        goto label_1;
    }
    goto label_0;
    do {
        rax = rdx - 1;
        if (*((rbx + rdx - 1)) != 0x2f) {
            goto label_2;
        }
        rdx = rax;
label_1:
    } while (rbp != rdx);
label_2:
    rax = rdx;
    return rax;
label_0:
    rdx = rcx;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b810 */
#include <stdint.h>
 
uint64_t fcn_0040b810 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_0040b7b0 (rdi);
    rbx = rax;
    al = (rax == 0) ? 1 : 0;
    eax = (int32_t) al;
    rax = malloc (rbx + rax + 1);
    rcx = rax;
    if (rax == 0) {
        goto label_0;
    }
    rax = memcpy (rax, rbp, rbx);
    rcx = rax;
    while (1) {
        *((rcx + rbx)) = 0;
label_0:
        rax = rcx;
        return rax;
        *(rax) = 0x2e;
        ebx = 1;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b870 */
#include <stdint.h>
 
int64_t fcn_0040b870 (int64_t arg1) {
    rdi = arg1;
    edx = *(rdi);
    rax = rdi;
    if (dl != 0x2f) {
        goto label_1;
    }
    do {
        rax++;
        edx = *(rax);
    } while (dl == 0x2f);
label_1:
    if (dl == 0) {
        goto label_2;
    }
    rcx = rax;
    esi = 0;
    while (dl != 0x2f) {
        if (sil != 0) {
            rax = rcx;
            esi = 0;
        }
        rcx++;
        edx = *(rcx);
        if (dl == 0) {
            goto label_2;
        }
label_0:
    }
    rcx++;
    edx = *(rcx);
    esi = 1;
    if (dl != 0) {
        goto label_0;
    }
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b8d0 */
#include <stdint.h>
 
uint64_t fcn_0040b8d0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = strlen (rdi);
    while (rdx != 1) {
        rdx = rax - 1;
        if (*((rbx + rax - 1)) != 0x2f) {
            return rax;
        }
        rax = rdx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b900 */
#include <stdint.h>
 
int32_t fcn_0040b900 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b910 */
#include <stdint.h>
 
uint64_t fcn_0040b910 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdi != 0) {
        r13 = rdi;
        r12 = rsi;
        rax = fcn_00412980 (0x18);
        rbx = rax;
        rax = fcn_00412bb0 (r12);
        rsi = rbx;
        *(rbx) = rax;
        rax = *((rbp + 8));
        *((rbx + 8)) = rax;
        rax = *(rbp);
        *((rbx + 0x10)) = rax;
        rax = fcn_0040d220 (r13);
        if (rax == 0) {
            goto label_0;
        }
        if (rbx != rax) {
            rdi = rbx;
            goto label_1;
        }
        return rax;
    }
    return rax;
label_0:
    fcn_00412bd0 ();
label_1:
    rbx = rdi;
    free (*(rdi));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40b9a0 */
#include <stdint.h>
 
int64_t fcn_0040b9a0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdi != 0) {
        rax = *((rdx + 8));
        *(rsp) = rsi;
        *((rsp + 8)) = rax;
        rax = *(rdx);
        *((rsp + 0x10)) = rax;
        rax = fcn_0040c810 (rdi, rsp);
        al = (rax != 0) ? 1 : 0;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40bb60 */
#include <stdint.h>
 
int32_t fcn_0040bb60 (uint32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
label_1:
    edx = edi;
    eax = 0x2d;
    edx &= 0xf000;
    if (edx != 0x8000) {
        eax = 0x64;
        if (edx == 0x4000) {
            goto label_2;
        }
        eax = 0x62;
        if (edx == 0x6000) {
            goto label_2;
        }
        eax = 0x63;
        if (edx == 0x2000) {
            goto label_2;
        }
        eax = 0x6c;
        if (edx == 0xa000) {
            goto label_2;
        }
        eax = 0x70;
        if (edx == 0x1000) {
            goto label_2;
        }
        eax = 0x73;
        edx = 0x3f;
        if (edx == 0xc000) {
            eax = edx;
            goto label_2;
        }
    }
label_2:
    *(rsi) = al;
    eax = edi;
    eax &= 0x100;
    eax -= eax;
    eax &= 0xffffffbb;
    eax += 0x72;
    *((rsi + 1)) = al;
    eax = edi;
    eax &= 0x80;
    eax -= eax;
    eax &= 0xffffffb6;
    eax += 0x77;
    *((rsi + 2)) = al;
    eax = edi;
    eax &= 0x40;
    eax -= eax;
    if ((edi & 0x800) == 0) {
        goto label_3;
    }
    eax &= 0xffffffe0;
    eax += 0x73;
    do {
        *((rsi + 3)) = al;
        eax = edi;
        eax &= 0x20;
        eax -= eax;
        eax &= 0xffffffbb;
        eax += 0x72;
        *((rsi + 4)) = al;
        eax = edi;
        eax &= 0x10;
        eax -= eax;
        eax &= 0xffffffb6;
        eax += 0x77;
        *((rsi + 5)) = al;
        eax = edi;
        eax &= 8;
        eax -= eax;
        if ((edi & 0x400) == 0) {
            goto label_4;
        }
        eax &= 0xffffffe0;
        eax += 0x73;
label_0:
        *((rsi + 6)) = al;
        eax = edi;
        eax &= 4;
        eax -= eax;
        eax &= 0xffffffbb;
        eax += 0x72;
        *((rsi + 7)) = al;
        eax = edi;
        eax &= 2;
        eax -= eax;
        eax &= 0xffffffb6;
        eax += 0x77;
        *((rsi + 8)) = al;
        eax = edi;
        eax &= 1;
        eax -= eax;
        edi &= 0x200;
        if (edi == 0) {
            goto label_5;
        }
        eax &= 0xffffffe0;
        eax += 0x74;
        *((rsi + 9)) = al;
        eax = 0x20;
        *((rsi + 0xa)) = ax;
        return eax;
label_3:
        eax &= 0xffffffb5;
        eax += 0x78;
    } while (1);
label_4:
    eax &= 0xffffffb5;
    eax += 0x78;
    goto label_0;
label_5:
    eax &= 0xffffffb5;
    eax += 0x78;
    *((rsi + 9)) = al;
    eax = 0x20;
    *((rsi + 0xa)) = ax;
    return eax;
    edi = *((rdi + 0x18));
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40bb70 */
#include <stdint.h>
 
uint64_t fcn_0040bb70 (void) {
    uint32_t var_fh;
    rax = void (*0x40bb90)() ();
    if (rax != 0) {
        return rax;
    }
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40bc70 */
#include <stdint.h>
 
int64_t fcn_0040bc70 (int64_t arg1) {
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
label_1:
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c150 */
#include <stdint.h>
 
uint64_t fcn_0040c150 (int64_t arg1) {
    signed int64_t var_8h;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c190 */
#include <stdint.h>
 
uint64_t fcn_0040c190 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x41d796;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c1f0 */
#include <stdint.h>
 
int64_t fcn_0040c1f0 (uint32_t arg1, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c2b0 */
#include <stdint.h>
 
uint64_t fcn_0040c2b0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        /* [13] -r-x section size 88424 named .text */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c2e0 */
#include <stdint.h>
 
uint64_t fcn_0040c2e0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_0040c2b0 (rdi, rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c400 */
#include <stdint.h>
 
int64_t fcn_0040c400 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x41d810) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x0041d824]");
        if (rax > 0x41d810) {
            xmm1 = *(0x0041d828);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x41d810) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x0041d82c]");
            if (rax <= 0x41d810) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x0041d830]");
            if (rax < 0x41d810) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x0041d824]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x41d810) {
                goto label_0;
            }
            xmm3 = *(0x0041d834);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x41d810) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x41d810) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x41d810;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c480 */
#include <stdint.h>
 
uint64_t fcn_0040c480 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
        rax = fcn_0040c2b0 (rbp, r15);
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
    rax = fcn_0040c2b0 (rbp, r15);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c5f0 */
#include <stdint.h>
 
int64_t fcn_0040c5f0 (int64_t arg1) {
    rdi = arg1;
    rax = *((rdi + 0x20));
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40c810 */
#include <stdint.h>
 
uint64_t fcn_0040c810 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_0040c2b0 (rdi, rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40ca80 */
#include <stdint.h>
 
uint64_t fcn_0040ca80 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x40c290;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x40c2a0;
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
    al = fcn_0040c400 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_0040c1f0 (rbp, rsi);
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
        *((rax + 0x28)) = 0x41d810;
        al = fcn_0040c400 (rdi);
        xmm1 = *(0x0041d838);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x0041d83c]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x0041d840]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x0041d840]");
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40ccc0 */
#include <stdint.h>
 
int64_t fcn_0040ccc0 (uint32_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40cda0 */
#include <stdint.h>
 
uint64_t fcn_0040cda0 (int64_t arg1, uint32_t arg2) {
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
            __asm ("comiss xmm0, dword [0x0041d83c]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x0041d840]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x0041d840]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_0040c1f0 (rsi, rsi);
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
        eax = fcn_0040c480 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_0040c480 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_0040c480 (rbp, rsp, 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40cfa0 */
#include <stdint.h>
 
uint64_t fcn_0040cfa0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    rax = fcn_0040c2e0 (rdi, rsi, rsp + 8, 0);
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
    fcn_0040c400 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x0041d83c]");
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
    __asm ("comiss xmm0, dword [0x0041d840]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_0040cda0 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_0040c2e0 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x0041d840]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40d220 */
#include <stdint.h>
 
uint64_t fcn_0040d220 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_0040cfa0 (rdi, rsi, rsp + 8);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40d260 */
#include <stdint.h>
 
uint64_t fcn_0040d260 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040c2e0 (rdi, rsi, rsp + 8, 1);
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
    fcn_0040c400 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x0041d840]");
    if (*((rdx + 0x10)) >= 0) {
        goto label_10;
    }
    __asm ("cvttss2si rsi, xmm0");
label_5:
    al = fcn_0040cda0 (rbx, rsi);
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
    __asm ("subss xmm0, dword [0x0041d840]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_5;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40d510 */
#include <stdint.h>
 
uint64_t fcn_0040d510 (int64_t arg1) {
    rdi = arg1;
    *(fp_stack--) = *(0x0041d840);
    *(fp_stack--) = fp_stack[?];
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
            fp_stack[0] += *(0x0041d83c);
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
    fp_stack[0] += *(0x0041d83c);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40d5d0 */
#include <stdint.h>
 
void fcn_0040d5d0 (int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
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
    eax = 0x41d794;
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
    eax = 0x41b08a;
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
    rax = rdx:rax / rbp;
    rdx = rdx:rax % rbp;
    rcx = rax;
    if (rdx == 0) {
        rsi = rax;
        edx = 0;
        rsi *= rbx;
        rax = rsi;
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    *(fp_stack--) = fp_stack[?];
    __asm ("fcompi st(1)");
    if (edi > 1) {
        goto label_38;
    }
    *(fp_stack--) = fp_stack[0];
label_12:
    ? = fp_stack[0];
    fp_stack--;
    esi = 1;
    eax = 0;
    rbp = *((rsp + 0x18));
    ecx = "%.1Lf";
    rdx = 0xffffffffffffffff;
    rdi = rbp;
    ? = fp_stack[0];
    fp_stack--;
    sprintf_chk ();
    rax = strlen (rbp);
    *(fp_stack--) = fp_stack[?];
    if (rax <= r15) {
        goto label_39;
    }
    *(fp_stack--) = *(0x0041d8c4);
    fp_stack[1] *= fp_stack[0];
label_26:
    *(fp_stack--) = fp_stack[?];
    __asm ("fcompi st(2)");
    if (rax > r15) {
        *((rsp + 0x20)) = fp_stack[0];
        fp_stack--;
        ? = fp_stack[0];
        fp_stack--;
        fcn_0040d510 (*((rsp + 0x24)));
        *(fp_stack--) = *((rsp + 0x20));
    }
label_15:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ecx = 0x41d850;
    esi = 1;
    r15 = *((rsp + 0x18));
    rdx = 0xffffffffffffffff;
    eax = 0;
    rdi = r15;
    ? = fp_stack[0];
    fp_stack--;
    sprintf_chk ();
    rax = strlen (r15);
    r14 = rax;
    goto label_14;
label_1:
    edi = *((rsp + 0x14));
    if (edi != 1) {
        *(fp_stack--) = fp_stack[?];
        __asm ("fcompi st(1)");
        if (edi > 1) {
            goto label_40;
        }
    }
label_11:
    esi = 1;
    ecx = 0x41d850;
    eax = 0;
    rbx = *((rsp + 0x18));
    rdx = 0xffffffffffffffff;
    ? = fp_stack[0];
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
    fp_stack[0] += *(0x0041d83c);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    if ((*((rsp + 0x10)) & 0x10) != 0) {
        goto label_0;
    }
    goto label_1;
label_34:
    fp_stack[0] += *(0x0041d83c);
    *((rsp + 0x20)) = rbx;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((rsp + 0x20));
    if (rbx >= 0) {
        goto label_2;
    }
    goto label_3;
label_33:
    fp_stack[0] += *(0x0041d83c);
    goto label_4;
label_31:
    if (r14 == 0) {
        goto label_5;
    }
    rax = *((rsp + 0x18));
    edx = 0;
    rax = rdx:rax / r14;
    rdx = rdx:rax % r14;
    rcx = rax;
    if (rdx != 0) {
        goto label_5;
    }
    rax = rbx;
    edx = 0;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    rbx = rax;
    rax = rdx * 5;
    edx = 0;
    rax += rax;
    rsi = rbx;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
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
        rdx:rax = rax * rcx;
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
    ecx = *((rbx + 0x41d8b8));
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
    rax = rdx:rax / r10;
    rdx = rdx:rax % r10;
    esi >>= 1;
    r11 = rax;
    eax = rdx * 5;
    edx = 0;
    eax = r9 + rax*2;
    eax = edx:eax / ebp;
    edx = edx:eax % ebp;
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
    ? = fp_stack[0];
    fp_stack--;
    fcn_0040d510 (rdi);
    goto label_11;
label_38:
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    ? = fp_stack[0];
    fp_stack--;
    fcn_0040d510 (rdi);
    *(fp_stack--) = fp_stack[?];
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
        ? = fp_stack[0];
        fp_stack--;
        rbp = *((rsp + 0x18));
        rdx = 0xffffffffffffffff;
        rdi = rbp;
        ? = fp_stack[0];
        fp_stack--;
        sprintf_chk ();
        rax = strlen (rbp);
        *(fp_stack--) = fp_stack[?];
    } while (rax <= r15);
    *(fp_stack--) = *(0x0041d8c4);
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
    *(fp_stack--) = *(0x0041d8c4);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40dfa0 */
#include <stdint.h>
 
int64_t fcn_0040dfa0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rsi;
    r12 = rdx;
    rbx = rdi;
    if (rdi == 0) {
        goto label_4;
    }
label_1:
    ebp = 0;
    if (*(rbx) == 0x27) {
        rbx++;
    }
    eax = fcn_0040acf0 (rbx, 0x41d8a0, 0x41d890, 4);
    if (eax >= 0) {
        rax = (int64_t) eax;
        *(r12) = 1;
        ebp |= *((rax*4 + 0x41d890));
        eax = 0;
        *(r13) = ebp;
label_0:
        return rax;
    }
    eax = fcn_004132b0 (rbx, rsp + 8, 0, r12, "eEgGkKmMpPtTyYzZ0");
    if (eax != 0) {
        goto label_5;
    }
    edi = *(rbx);
    edx = rdi - 0x30;
    if (dl <= 9) {
        goto label_2;
    }
    rcx = *((rsp + 8));
    if (rbx != rcx) {
        goto label_6;
    }
    goto label_7;
    do {
        if (rbx == rcx) {
            goto label_7;
        }
label_6:
        rbx++;
        esi = *(rbx);
        edx = rsi - 0x30;
    } while (dl > 9);
label_2:
    rdx = *(r12);
    *(r13) = ebp;
    goto label_8;
label_5:
    *(r13) = 0;
    rdx = *(r12);
label_8:
    if (rdx != 0) {
        goto label_0;
    }
    rax = getenv ("POSIXLY_CORRECT");
    rax -= rax;
    eax &= 0x200;
    rax += 0x200;
    *(r12) = rax;
    eax = 4;
    return rax;
label_4:
    rax = getenv (0x41b28c);
    rbx = rax;
    if (rax != 0) {
        goto label_1;
    }
    rax = getenv ("BLOCKSIZE");
    rbx = rax;
    if (rax != 0) {
        goto label_1;
    }
    rax = getenv ("POSIXLY_CORRECT");
    if (rax == 0) {
        goto label_9;
    }
    *(r12) = 0x200;
    eax = 0;
    *(r13) = 0;
    goto label_0;
label_7:
    if (*((rcx - 1)) != 0x42) {
        bpl |= 0x80;
label_3:
        ebp |= 0x20;
        goto label_2;
    }
    ebp |= 0x180;
    if (*((rcx - 2)) != 0x69) {
        goto label_2;
    }
    goto label_3;
label_9:
    *(r12) = 0x400;
    *(r13) = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40e160 */
#include <stdint.h>
 
uint64_t fcn_0040e160 (uint32_t arg1) {
    rdi = arg1;
    rbx = imp.__libc_start_main;
    if (rbx == 0) {
        goto label_0;
    }
    if (edi != *(rbx)) {
        goto label_1;
    }
    goto label_2;
    do {
        if (*(rbx) == edi) {
            goto label_2;
        }
label_1:
        rbx = *((rbx + 8));
    } while (rbx != 0);
label_0:
    r12d = 0x41b08a;
    rax = getpwuid ();
    edi = 0x18;
    if (rax != 0) {
        r12 = *(rax);
        strlen (*(rax));
        rdi &= 0xfffffffffffffff8;
    }
    fcn_00412980 (rax + 0x18);
    *(rax) = ebp;
    rbx = rax;
    strcpy (rax + 0x10, r12);
    rax = imp.__libc_start_main;
    *(0x006257b8) = rbx;
    *((rbx + 8)) = rax;
label_2:
    eax = 0;
    if (*((rbx + 0x10)) != 0) {
        rax = rbx + 0x10;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40e2f0 */
#include <stdint.h>
 
uint64_t fcn_0040e2f0 (uint32_t arg1) {
    rdi = arg1;
    rbx = imp.__libc_start_main;
    if (rbx == 0) {
        goto label_0;
    }
    if (edi != *(rbx)) {
        goto label_1;
    }
    goto label_2;
    do {
        if (*(rbx) == edi) {
            goto label_2;
        }
label_1:
        rbx = *((rbx + 8));
    } while (rbx != 0);
label_0:
    r12d = 0x41b08a;
    rax = getgrgid ();
    edi = 0x18;
    if (rax != 0) {
        r12 = *(rax);
        strlen (*(rax));
        rdi &= 0xfffffffffffffff8;
    }
    fcn_00412980 (rax + 0x18);
    *(rax) = ebp;
    rbx = rax;
    strcpy (rax + 0x10, r12);
    rax = imp.__libc_start_main;
    *(0x006257a8) = rbx;
    *((rbx + 8)) = rax;
label_2:
    eax = 0;
    if (*((rbx + 0x10)) != 0) {
        rax = rbx + 0x10;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40e480 */
#include <stdint.h>
 
int64_t fcn_0040e480 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40e520 */
#include <stdint.h>
 
int64_t fcn_0040e520 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40e570 */
#include <stdint.h>
 
uint64_t fcn_0040e570 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_14h;
    char * s;
    size_t size;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r13 = rcx;
    rbx = rsi;
    *((rsp + 0x18)) = rdi;
    *((rsp + 8)) = rdx;
    *((rsp + 0x14)) = r8d;
    rax = strlen (rdi);
    r14 = rax;
    if ((bpl & 2) == 0) {
        goto label_10;
    }
label_2:
    *(rsp) = 0;
    r15 = r14;
    r12d = 0;
label_5:
    rdx = *(r13);
    if (rdx >= r15) {
        goto label_11;
    }
    r14 = rdx;
    eax = 0;
label_9:
    esi = *((rsp + 0x14));
    *(r13) = rdx;
    if (esi == 0) {
        goto label_12;
    }
label_0:
    r13d = 0;
    if (esi != 1) {
        r13 = rax;
        eax &= 1;
        r13 >>= 1;
        rax += r13;
    }
label_1:
    r15 = rax + r14;
    if ((bpl & 4) != 0) {
        r15 = r14;
        eax = 0;
    }
    rsi = *((rsp + 8));
    ebp &= 8;
    edx = 0;
    if (ebp != 0) {
        r13 = rdx;
    }
    if (rsi == 0) {
        goto label_13;
    }
    rbp = rbx + rsi - 1;
    rdi = rbx;
    if (rbx >= rbp) {
        goto label_14;
    }
    if (rax != 0) {
        goto label_15;
    }
    goto label_14;
    do {
        if (rbp <= rdi) {
            goto label_14;
        }
label_15:
        rdi++;
        rdx = rbx;
        *((rdi - 1)) = 0x20;
        rdx -= rdi;
        rdx += rax;
    } while (rdx != 0);
label_14:
    rdx = rbp;
    *(rdi) = 0;
    rsi = *((rsp + 0x18));
    rdx -= rdi;
    if (rdx > r14) {
        rdx = r14;
    }
    rax = mempcpy ();
    rdx = rax;
    if (rbp <= rax) {
        goto label_16;
    }
    if (r13 != 0) {
        goto label_17;
    }
    goto label_16;
    do {
        if (rbp <= rdx) {
            goto label_16;
        }
label_17:
        rdx++;
        rcx = r13;
        *((rdx - 1)) = 0x20;
        rcx -= rdx;
        rcx += rax;
    } while (rcx != 0);
label_16:
    *(rdx) = 0;
label_13:
    r13 += r15;
label_3:
    free (*(rsp));
    free (r12);
    rax = r13;
    return rax;
label_7:
    r12d = 0;
label_11:
    if (r15 >= rdx) {
        goto label_18;
    }
    esi = *((rsp + 0x14));
    rax = rdx;
    rdx = r15;
    rax -= r15;
    *(r13) = rdx;
    if (esi != 0) {
        goto label_0;
    }
label_12:
    r13 = rax;
    eax = 0;
    goto label_1;
label_10:
    r12 = rax;
    rax = ctype_get_mb_cur_max ();
    if (rax <= 1) {
        goto label_2;
    }
    rax = mbstowcs (0, *((rsp + 0x18)), 0);
    if (rax != -1) {
        goto label_19;
    }
    if ((bpl & 1) != 0) {
        goto label_2;
    }
label_6:
    *(rsp) = 0;
    r12d = 0;
    r13 = 0xffffffffffffffff;
    goto label_3;
label_19:
    r15 = rax + 1;
    rax = r15*4;
    rdi = rax;
    *((rsp + 0x20)) = rax;
    rax = malloc (rdi);
    *(rsp) = rax;
    if (rax == 0) {
        goto label_20;
    }
    rax = mbstowcs (*(rsp), *((rsp + 0x18)), r15);
    if (rax == 0) {
        goto label_21;
    }
    rax = *(rsp);
    rsi = *((rsp + 0x20));
    *((rax + rsi - 4)) = 0;
    edi = *(rax);
    rdx = rax;
    if (edi == 0) {
        goto label_22;
    }
    *((rsp + 0x20)) = 0;
    do {
        *((rsp + 0x28)) = rdx;
        eax = iswprint (rdi);
        rdx = *((rsp + 0x28));
        if (eax == 0) {
            *(rdx) = 0xfffd;
            *((rsp + 0x20)) = 1;
        }
        rdx += 4;
        edi = *(rdx);
    } while (edi != 0);
    rdi = *(rsp);
    rsi = r15;
    eax = wcswidth ();
    r15 = (int64_t) eax;
    if (*((rsp + 0x20)) == 0) {
        goto label_23;
    }
    rax = wcstombs (0, *(rsp), 0);
    rax++;
    *((rsp + 0x20)) = rax;
label_8:
    rax = malloc (*((rsp + 0x20)));
    r12 = rax;
    if (rax == 0) {
        goto label_24;
    }
    r14 = *(rsp);
    rax = *(r13);
    edi = *(r14);
    *((rsp + 0x18)) = rax;
    if (edi == 0) {
        goto label_25;
    }
    r15d = 0;
    while (eax != 0xffffffff) {
        rax = (int64_t) eax;
label_4:
        rax += r15;
        if (*((rsp + 0x18)) < rax) {
            goto label_26;
        }
        r14 += 4;
        edi = *(r14);
        r15 = rax;
        if (edi == 0) {
            goto label_26;
        }
        eax = wcwidth ();
    }
    *(r14) = 0xfffd;
    eax = 1;
    goto label_4;
label_20:
    r15 = r14;
    r12d = 0;
    if ((bpl & 1) != 0) {
        goto label_5;
    }
    goto label_6;
label_22:
    rdi = *(rsp);
    rsi = r15;
    eax = wcswidth ();
    r15 = (int64_t) eax;
label_23:
    rdx = *(r13);
    if (rdx >= r15) {
        goto label_7;
    }
    rax = r12 + 1;
    *((rsp + 0x20)) = rax;
    goto label_8;
label_25:
    r14 = *(rsp);
    r15d = 0;
label_26:
    *(r14) = 0;
    rax = wcstombs (r12, *(rsp), *((rsp + 0x20)));
    *((rsp + 0x18)) = r12;
    r14 = rax;
    goto label_5;
label_24:
    if ((bpl & 1) != 0) {
        goto label_5;
    }
    r13 = 0xffffffffffffffff;
    goto label_3;
label_21:
    r15 = r14;
    r12d = 0;
    goto label_5;
label_18:
    rdx = r15;
    eax = 0;
    goto label_9;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40e9b0 */
#include <stdint.h>
 
uint64_t fcn_0040e9b0 (int64_t arg1, int64_t arg3) {
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
    rax = fcn_00416e80 (rsp + 4, rbx, r13, rsp + 8);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40eb70 */
#include <stdint.h>
 
uint64_t fcn_0040eb70 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    rax = strlen (rdi);
    edx = ebp;
    rdi = rbx;
    rsi = rax;
    return void (*0x40e9b0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40edd0 */
#include <stdint.h>
 
uint64_t fcn_0040edd0 (int64_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t var_8h;
    uint32_t var_10h;
    uint32_t var_18h;
    size_t n;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
label_0:
    r13 = rcx;
    rbx = rdi;
    *((rsp + 8)) = rsi;
    *((rsp + 0x18)) = rdx;
    if (rsi > 2) {
        goto label_5;
    }
    while (eax <= 0) {
label_1:
        return;
        r12 = *((rdi + 8));
        rbp = *(rdi);
        rsi = r12;
        rdi = rbp;
        eax = void (*rcx)() ();
    }
    *(rbx) = r12;
    *((rbx + 8)) = rbp;
    return eax;
label_5:
    r14 = *((rsp + 8));
    r15 = *((rsp + 0x18));
    rcx = r14;
    rcx >>= 1;
    rsi -= rcx;
    *((rsp + 0x10)) = rcx;
    rcx = r13;
    *((rsp + 0x28)) = rdi;
    void (*0x40eba0)(uint64_t, uint64_t, uint64_t) (rdi + rcx*8, r14, r15);
    goto label_0;
    if (r14 != 3) {
        goto label_6;
    }
    rbp = *(rbx);
    *(r15) = rbp;
label_4:
    rax = *((rsp + 0x28));
    r15d = 0;
    r14 = *((rsp + 0x10));
    r12 = *(rax);
    do {
label_2:
        rsi = r12;
        rdi = rbp;
        r15++;
        eax = void (*r13)(uint64_t) (0);
        if (eax <= 0) {
            goto label_7;
        }
        *((rbx + r15*8 - 8)) = r12;
        r14++;
        if (*((rsp + 8)) == r14) {
            goto label_8;
        }
        r12 = *((rbx + r14*8));
    } while (1);
label_7:
    rax = *(rsp);
    *((rbx + r15*8 - 8)) = rbp;
    if (*((rsp + 0x10)) == rax) {
        goto label_1;
    }
    rdx = *((rsp + 0x18));
    rbp = *((rdx + rax*8));
    goto label_2;
label_8:
    rax = *(rsp);
    rdi = rbx + r15*8;
    r15 = *((rsp + 0x10));
    rcx = *((rsp + 0x18));
    r15 -= rax;
    rdx = r15*8;
    rsi = rcx + rax*8;
    void (*0x402b40)() ();
label_6:
    r14 = *((rsp + 8));
    r15 = *((rsp + 0x18));
    rcx = r13;
    r14 >>= 2;
    r12 = rbx + r14*8;
    rsi -= r14;
    *((rsp + 0x20)) = r14;
    void (*0x40eba0)(uint64_t, uint64_t*, uint64_t) (r12, *((rsp + 0x10)), r15);
    goto label_0;
    rcx = r13;
    rax = void (*0x40eba0)(uint64_t, uint64_t, uint64_t) (rbx, r14, r15);
    goto label_0;
    rbp = *(rbx);
    r12 = *(r12);
    do {
label_3:
        rsi = r12;
        rdi = rbp;
        r15 += 8;
        eax = void (*r13)(uint64_t) (0);
        if (eax <= 0) {
            goto label_9;
        }
        *((r15 - 8)) = r12;
        r14++;
        if (*((rsp + 0x10)) == r14) {
            goto label_10;
        }
        r12 = *((rbx + r14*8));
    } while (1);
label_9:
    rax = *(rsp);
    *((r15 - 8)) = rbp;
    if (*((rsp + 0x20)) != rax) {
        rbp = *((rbx + rax*8));
        goto label_3;
    }
    rax = *((rsp + 0x10));
    *(rsp) = r14;
    *((rsp + 0x20)) = rax;
label_10:
    rax = *(rsp);
    rdx -= rax;
    rdx <<= 3;
    memcpy (r15, rbx + rax*8, *((rsp + 0x20)));
    rax = *((rsp + 0x18));
    rbp = *(rax);
    goto label_4;
    rax = rdi + rsi*8;
    rcx = rdx;
    rdx = rax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40ede0 */
#include <stdint.h>
 
uint64_t fcn_0040ede0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rsi;
    rbx = rdx - 1;
    rax = ctype_tolower_loc ();
    do {
        ecx = *((r12 + rbx));
        rdx = *(rax);
        edx = *((rdx + rcx*4));
        *((rbp + rbx)) = dl;
        rbx--;
    } while (rbx != -1);
label_0:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40ee30 */
#include <stdint.h>
 
uint64_t fcn_0040ee30 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rsi;
    rbx = rdx - 1;
    rax = ctype_toupper_loc ();
    do {
        ecx = *((r12 + rbx));
        rdx = *(rax);
        edx = *((rdx + rcx*4));
        *((rbp + rbx)) = dl;
        rbx--;
    } while (rbx != -1);
label_0:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x40ee80 */
#include <stdint.h>
 
void fcn_0040ee80 (int64_t arg_4d8h_2, tm * arg_4d0h, int64_t arg_4d8h, int64_t arg1, char * arg11, int64_t arg2, char * arg3, tm * arg4, int64_t arg6, char * arg7, int64_t arg9) {
    tm * timeptr;
    int64_t var_10h;
    int64_t var_18h;
    char * var_20h;
    int64_t var_2bh;
    int64_t var_2ch;
    char * var_30h;
    char * var_40h;
    char * var_48h;
    char * var_50h;
    char * var_58h;
    char * var_60h;
    char * var_68h;
    char * format;
    int64_t var_72h;
    int64_t var_73h;
    int64_t var_87h;
    char * s;
    int64_t var_91h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    rdi = arg1;
    xmm4 = arg11;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    xmm0 = arg7;
    xmm2 = arg9;
label_12:
    eax = 0x41b08a;
    r15 = rdi;
    rbx = rdx;
    r12 = *((rcx + 0x30));
    r11d = *((rcx + 8));
    *(rsp) = rsi;
    *((rsp + 8)) = rcx;
    *((rsp + 0x18)) = r9;
    if (r12 == 0) {
        r12 = rax;
    }
    *((rsp + 0x2b)) = r8b;
    if (r11d <= 0xc) {
        goto label_52;
    }
    r11d -= 0xc;
label_0:
    eax = *(rbx);
    r14d = 0;
    if (al == 0) {
        goto label_53;
    }
    rdi = rsp + 0x72;
    *((rsp + 0x2c)) = r11d;
    *((rsp + 0x10)) = rdi;
    *((rsp + 0x20)) = r12;
    do {
        if (al == 0x25) {
            goto label_54;
        }
        rdx = *(rsp);
        rdx -= r14;
        if (rdx <= 1) {
            goto label_8;
        }
        if (r15 != 0) {
            *(r15) = al;
            r15++;
        }
        r14++;
        r8 = rbx;
label_7:
        eax = *((r8 + 1));
        rbx = r8 + 1;
    } while (al != 0);
label_53:
    if (r15 != 0) {
        if (*(rsp) == 0) {
            goto label_55;
        }
        *(r15) = 0;
        goto label_55;
label_8:
        r14d = 0;
    }
label_55:
    rax = r14;
    return rax;
label_52:
    eax = 0xc;
    if (r11d == 0) {
        r11d = eax;
    }
    goto label_0;
label_54:
    r11d = *((rsp + 0x2b));
    r8d = 0;
    r12d = 0;
label_1:
    rbx++;
    eax = *(rbx);
    ecx = eax;
    r9d = eax;
    if (al == 0x30) {
        goto label_2;
    }
    do {
        if (al > 0x30) {
            goto label_56;
        }
        if (al != 0x23) {
            goto label_57;
        }
        rbx++;
        eax = *(rbx);
        r8d = 1;
        ecx = eax;
        r9d = eax;
    } while (al != 0x30);
    do {
label_2:
        r12d = eax;
        goto label_1;
label_57:
    } while (al == 0x2d);
    eax -= 0x30;
    if (eax <= 9) {
        goto label_58;
    }
label_3:
    if (cl == 0x45) {
        goto label_59;
    }
    if (cl == 0x4f) {
        goto label_59;
    }
    r9d = 0;
label_4:
    if (cl > 0x7a) {
        goto label_25;
    }
    eax = (int32_t) cl;
    /* switch table (123 cases) at 0x41d900 */
label_56:
    if (al == 0x5e) {
        r11d = 1;
        goto label_1;
    }
    if (al == 0x5f) {
        goto label_2;
    }
    eax -= 0x30;
    if (eax > 9) {
        goto label_3;
    }
label_58:
    ebp = 0;
    do {
        eax = *((rbx + 1));
        rsi = rbx + 1;
        ecx = eax;
        edx = rax - 0x30;
        if (ebp > 0xccccccc) {
            goto label_60;
        }
        edi = *(rbx);
        if (ebp == 0xccccccc) {
            goto label_61;
        }
label_5:
        r9d = rbp + rbp*4;
        rbx = rsi;
        ebp = rdi + r9*2 - 0x30;
label_6:
    } while (edx <= 9);
    r9d = eax;
    goto label_3;
label_59:
    ecx = *((rbx + 1));
    rbx++;
    goto label_4;
label_61:
    if (dil <= 0x37) {
        goto label_5;
    }
label_60:
    if (edx <= 9) {
        eax = *((rbx + 2));
        rbx += 2;
        ecx = eax;
        edx = rax - 0x30;
        goto label_6;
    }
    r9d = eax;
    rbx = rsi;
    goto label_3;
    if (r9d != 0) {
        goto label_25;
    }
    if (r8b != 0) {
        r11d = r8d;
    }
label_23:
    edx = 0x2520;
    rax = *((rsp + 0x10));
    r8 = rbx;
    r13d = 0;
    *((rsp + 0x70)) = dx;
    r9d = 0;
label_9:
    *(rax) = cl;
    *((rax + 1)) = 0;
    *((rsp + 0x30)) = r8;
    *((rsp + 0x48)) = r9d;
    *((rsp + 0x40)) = r11b;
    rax = strftime (rsp + 0x90, 0x400, rsp + 0x70, *((rsp + 8)));
    r8 = *((rsp + 0x30));
    if (rax == 0) {
        goto label_7;
    }
    rcx = rax - 1;
    eax = 0;
    rdx = *(rsp);
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    rbx = rax;
    if (rcx >= rax) {
        rbx = rcx;
    }
    rdx -= r14;
    if (rdx <= rbx) {
        goto label_8;
    }
    if (r15 != 0) {
        r9d = *((rsp + 0x48));
        r11d = *((rsp + 0x40));
        if (r9d == 0) {
            if (rcx >= rax) {
                goto label_34;
            }
            rdx = (int64_t) ebp;
            *((rsp + 0x48)) = rcx;
            rdx -= rcx;
            *((rsp + 0x40)) = r8;
            rbp = r15 + rdx;
            *((rsp + 0x30)) = r11b;
            if (r12d == 0x30) {
                goto label_62;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
            rcx = *((rsp + 0x48));
            r8 = *((rsp + 0x40));
            r11d = *((rsp + 0x30));
        }
label_34:
        *((rsp + 0x40)) = r8;
        rsi = rsp + 0x91;
        rdx = rcx;
        rdi = r15;
        *((rsp + 0x30)) = rcx;
        if (r13b != 0) {
            goto label_63;
        }
label_11:
        if (r11b == 0) {
            goto label_64;
        }
        fcn_0040ee30 (rdi, rsi, rdx);
        rcx = *((rsp + 0x30));
        r8 = *((rsp + 0x40));
label_31:
        r15 += rcx;
    }
label_10:
    r14 += rbx;
    goto label_7;
    if (r9d == 0x4f) {
        goto label_25;
    }
    r13d = 0;
label_15:
    edi = 0x2520;
    *((rsp + 0x70)) = di;
    if (r9d != 0) {
        goto label_65;
    }
    r8 = rbx;
    rax = *((rsp + 0x10));
    goto label_9;
    rax = *((rsp + 8));
    *((rsp + 0x40)) = r11b;
    r13 = rsp + 0x87;
    __asm ("movdqu xmm4, xmmword [rax + 0x20]");
    __asm ("movdqu xmm0, xmmword [rax]");
    __asm ("movdqu xmm2, xmmword [rax + 0x10]");
    rax = *((rax + 0x30));
    *((rsp + 0x90)) = xmm0;
    *((rsp + 0xa0)) = xmm2;
    *((rsp + 0x30)) = xmm4;
    *((rsp + 0xb0)) = xmm4;
    *((rsp + 0xc0)) = rax;
    rax = fcn_004177a0 (*((rsp + 0x4d0)), rsp + 0x90);
    r11d = *((rsp + 0x40));
    edi = 0x30;
    rsi = rax;
    rcx = rax;
    do {
        rax = 0x6666666666666667;
        rdx:rax = rax * rcx;
        rax = rcx;
        rax >>= 0x3f;
        rdx >>= 2;
        rdx -= rax;
        rax = rdx;
        rdx *= 5;
        rdx += rdx;
        rcx -= rdx;
        rdx = rcx;
        rcx = rax;
        eax = edi;
        eax -= edx;
        edx += 0x30;
        __asm ("cmovs edx, eax");
        r13--;
        *(r13) = dl;
    } while (rcx != 0);
    r10d = 1;
    if (ebp > 0) {
        r10d = ebp;
    }
    if (rsi < 0) {
        goto label_66;
    }
label_19:
    rax = *(rsp);
    rcx = rsp + 0x87;
    rcx -= r13;
    rax -= r14;
    if (r12d != 0x2d) {
        r9d = r10d;
        r9d -= ecx;
        if (r9d > 0) {
            goto label_67;
        }
    }
    r9d = 0;
    r8 = rbx;
    __asm ("cmovns r9d, ebp");
    r9 = (int64_t) r9d;
label_20:
    rbx = r9;
    if (rcx >= r9) {
        rbx = rcx;
    }
    if (rbx >= rax) {
        goto label_8;
    }
    if (r15 == 0) {
        goto label_10;
    }
    if (r10d == 0) {
        if (rcx >= r9) {
            goto label_35;
        }
        rdx = (int64_t) ebp;
        *((rsp + 0x48)) = rcx;
        rdx -= rcx;
        *((rsp + 0x40)) = r8;
        rbp = r15 + rdx;
        *((rsp + 0x30)) = r11b;
        if (r12d == 0x30) {
            goto label_68;
        }
        r15 = rbp;
        memset (r15, 0x20, rdx);
        rcx = *((rsp + 0x48));
        r8 = *((rsp + 0x40));
        r11d = *((rsp + 0x30));
    }
label_35:
    *((rsp + 0x40)) = r8;
    rdx = rcx;
    rsi = r13;
    rdi = r15;
    *((rsp + 0x30)) = rcx;
    goto label_11;
    if (r9d != 0) {
        goto label_25;
    }
    *((rsp + 0x30)) = "%m/%d/%y";
label_13:
    eax = *((rsp + 0x4d8));
    r13d = (int32_t) r11b;
    rax = fcn_0040ee80 (0, 0xffffffffffffffff, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
    goto label_12;
    r10 = rax;
    eax = 0;
    r11 = *(rsp);
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    rsi = rax;
    if (r10 >= rax) {
        rsi = r10;
    }
    r11 -= r14;
    *((rsp + 0x40)) = rsi;
    if (r11 <= rsi) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10 < rax) {
            rdx = (int64_t) ebp;
            *((rsp + 0x50)) = r10;
            rdx -= r10;
            *((rsp + 0x48)) = r11;
            rbp = r15 + rdx;
            if (r12d == 0x30) {
                goto label_69;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
            r10 = *((rsp + 0x50));
            r11 = *((rsp + 0x48));
        }
label_38:
        eax = *((rsp + 0x4d8));
        *((rsp + 0x48)) = r10;
        fcn_0040ee80 (r15, r11, *((rsp + 0x40)), *((rsp + 0x18)), r13d, *((rsp + 0x28)));
        goto label_12;
        r10 = *((rsp + 0x58));
        r15 += r10;
    }
    r14 += *((rsp + 0x40));
    r8 = rbx;
    goto label_7;
    if (r9d != 0) {
        goto label_25;
    }
    *((rsp + 0x30)) = "%Y-%m-%d";
    goto label_13;
    if (r9d == 0x45) {
        goto label_25;
    }
    rdx = *((rsp + 8));
    esi = *((rdx + 0x14));
    r10d = *((rdx + 0x1c));
    r13d = *((rdx + 0x18));
    edx = 0x92492493;
    eax = esi;
    *((rsp + 0x30)) = esi;
    eax >>= 0x1f;
    eax &= 0x190;
    edi = rsi + rax - 0x64;
    esi = r10d;
    esi -= r13d;
    esi += 0x17e;
    eax = esi;
    edx:eax = eax * edx;
    eax = rdx + rsi;
    edx = esi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    eax = edx;
    edx = r10d;
    edx -= esi;
    r8d = rdx + rax + 3;
    if (r8d < 0) {
        goto label_70;
    }
    eax = 0x16d;
    if ((dil & 3) == 0) {
        esi = 0x51eb851f;
        eax = edi;
        edx:eax = eax * esi;
        eax = edi;
        eax >>= 0x1f;
        *((rsp + 0x40)) = eax;
        esi = edx;
        edx >>= 5;
        edx -= eax;
        eax = 0x16e;
        edx *= 0x64;
        if (edi != edx) {
            goto label_71;
        }
        esi >>= 7;
        eax = esi;
        eax -= *((rsp + 0x40));
        eax *= 0x190;
        al = (edi == eax) ? 1 : 0;
        eax = (int32_t) al;
        eax += 0x16d;
    }
label_71:
    esi = r10d;
    edx = 0x92492493;
    esi -= eax;
    edi = esi;
    edi -= r13d;
    edi += 0x17e;
    eax = edi;
    esi -= edi;
    edx:eax = eax * edx;
    eax = rdx + rdi;
    edx = edi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    r13d = rsi + rdx + 3;
    __asm ("cmovns r8d, r13d");
    r13d >>= 0x1f;
    r13d++;
label_39:
    if (cl == 0x47) {
        goto label_72;
    }
    if (cl != 0x67) {
        goto label_73;
    }
    eax = *((rsp + 0x30));
    esi = 0x51eb851f;
    r8d = *((rsp + 0x30));
    r10d = 2;
    edx:eax = eax * esi;
    edi = r8d;
    edx >>= 5;
    eax = edx;
    edx = r8d;
    edx >>= 0x1f;
    eax -= edx;
    eax *= 0x64;
    edi -= eax;
    edi += r13d;
    eax = edi;
    edx:eax = eax * esi;
    eax = edi;
    eax >>= 0x1f;
    esi = edx;
    esi >>= 5;
    esi -= eax;
    esi *= 0x64;
    edi -= esi;
    esi = edi;
    if (edi < 0) {
        eax = 0xfffff894;
        edx = edi;
        esi += 0x64;
        eax -= r13d;
        edx = -edx;
        if (r8d < eax) {
            esi = edx;
        }
    }
label_14:
    eax = esi;
    *((rsp + 0x30)) = 0;
    edi = 0;
    eax >>= 0x1f;
    r8d = eax;
label_17:
    if (r9d != 0x4f) {
        goto label_74;
    }
    if (r8b != 0) {
        goto label_75;
    }
label_18:
    eax = 0x2520;
    r13d = 0;
    *((rsp + 0x70)) = ax;
label_51:
    *((rsp + 0x72)) = r9b;
    r8 = rbx;
    r9d = r10d;
    rax = rsp + 0x73;
    goto label_9;
    eax = 0;
    rdi = *((rsp + 0x20));
    *((rsp + 0x48)) = r8b;
    if (r8b != 0) {
        r11d = eax;
    }
    *((rsp + 0x40)) = r11b;
    rax = strlen (rdi);
    rdx = *(rsp);
    r13 = rax;
    eax = 0;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    rsi = rax;
    if (r13 >= rax) {
        rsi = r13;
    }
    rdx -= r14;
    *((rsp + 0x30)) = rsi;
    if (rdx <= rsi) {
        goto label_8;
    }
    if (r15 != 0) {
        r11d = *((rsp + 0x40));
        r8d = *((rsp + 0x48));
        if (r13 < rax) {
            rdx = (int64_t) ebp;
            rdx -= r13;
            rbp = r15 + rdx;
            if (r12d == 0x30) {
                goto label_76;
            }
            *((rsp + 0x48)) = r8b;
            r15 = rbp;
            *((rsp + 0x40)) = r11b;
            memset (r15, 0x20, rdx);
            r8d = *((rsp + 0x48));
            r11d = *((rsp + 0x40));
        }
label_48:
        rdx = r13;
        rsi = *((rsp + 0x20));
        rdi = r15;
        if (r8b != 0) {
            goto label_77;
        }
        if (r11b == 0) {
            goto label_78;
        }
        fcn_0040ee30 (rdi, rsi, rdx);
label_42:
        r15 += r13;
    }
    r14 += *((rsp + 0x30));
    r8 = rbx;
    goto label_7;
    *((rsp + 0x30)) = 0x41b317;
    goto label_13;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *((rax + 8));
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    esi = *((rsp + 0x2c));
    r10d = 2;
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *((rax + 4));
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    if (ebp != 0xffffffff) {
        goto label_79;
    }
    esi = *((rsp + 0x4d8));
    r10d = 9;
    goto label_14;
    r13d = 1;
label_28:
    eax = 0;
    ecx = 0x70;
    if (r8b != 0) {
        r13d = r8d;
    }
    if (r8b != 0) {
        r11d = eax;
    }
    goto label_15;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    esi = *((rax + 8));
label_16:
    r10d = 2;
    if (r12d == 0x30) {
        goto label_14;
    }
    if (r12d == 0x2d) {
        goto label_14;
    }
    r12d = 0x5f;
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    esi = *((rsp + 0x2c));
    goto label_16;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    *((rsp + 0x30)) = 0;
    r10d = 2;
    esi = *((rax + 0x10));
    r8b = (esi < 0xffffffff) ? 1 : 0;
    esi++;
    edi = 0;
    goto label_17;
    r13d = 0;
    eax = 1;
    __asm ("cmovns r13d, ebp");
    r13 = (int64_t) r13d;
    if (r13 == 0) {
        r13 = rax;
    }
    rax = *(rsp);
    rax -= r14;
    if (rax <= r13) {
        goto label_8;
    }
    if (r15 != 0) {
        if (ebp > 1) {
            rdx = (int64_t) ebp;
            rdx--;
            rbp = r15 + rdx;
            if (r12d == 0x30) {
                goto label_80;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
        }
label_44:
        *(r15) = 0xa;
        r15++;
    }
label_21:
    r14 += r13;
    r8 = rbx;
    goto label_7;
    rax = *((rsp + 8));
    r10d = 1;
    eax = *((rax + 0x10));
    if (r9d == 0x4f) {
        goto label_18;
    }
    edx = rax * 5;
    *((rsp + 0x30)) = 0;
    r8d = 0;
    edi = 0;
    esi = rax + rdx*2;
    esi >>= 5;
    esi++;
label_22:
    *((rsp + 0x40)) = r8b;
    rcx = rsp + 0x87;
    r9d = 0xcccccccd;
    do {
        r13 = rcx - 1;
        if ((dil & 1) != 0) {
            rax = rcx - 2;
            *((rcx - 1)) = 0x3a;
            rcx = r13;
            r13 = rax;
        }
        eax = esi;
        r8d = esi;
        edi >>= 1;
        edx:eax = eax * r9d;
        edx >>= 3;
        eax = rdx * 5;
        eax += eax;
        r8d -= eax;
        eax = r8d;
        eax += 0x30;
        *((rcx - 1)) = al;
        rcx = r13;
        if (esi <= 9) {
            if (edi == 0) {
                goto label_81;
            }
        }
        esi = edx;
    } while (1);
label_81:
    r8d = *((rsp + 0x40));
    if (r10d < ebp) {
        r10d = ebp;
    }
    if (r8b != 0) {
        goto label_66;
    }
    if (*((rsp + 0x30)) == 0) {
        goto label_19;
    }
    if (r12d == 0x2d) {
        goto label_82;
    }
    *((rsp + 0x30)) = 0x2b;
label_32:
    rcx = rsp + 0x87;
    r9d = r10 - 1;
    rax = *(rsp);
    rcx -= r13;
    r9d -= ecx;
    rax -= r14;
    if (r9d <= 0) {
        goto label_83;
    }
    if (r12d == 0x5f) {
        goto label_84;
    }
    rdx = (int64_t) r10d;
    if (rdx >= rax) {
        goto label_8;
    }
    edx = 0;
    esi = 1;
    __asm ("cmovns edx, ebp");
    rdx = (int64_t) edx;
    if (rdx != 0) {
        rsi = rdx;
    }
    if (rsi >= rax) {
        goto label_8;
    }
    r14 += rsi;
    r9 = (int64_t) r9d;
    r8 = rbx;
    if (r15 != 0) {
        if (r10d == 0) {
            if (rdx <= 1) {
                goto label_49;
            }
            rdx = (int64_t) ebp;
            *((rsp + 0x58)) = r9;
            rdx--;
            *((rsp + 0x50)) = rcx;
            rbp = r15 + rdx;
            *((rsp + 0x48)) = r10d;
            *((rsp + 0x40)) = r11b;
            if (r12d == 0x30) {
                goto label_85;
            }
            r15 = rbp;
            memset (r15, 0x20, rdx);
            r9 = *((rsp + 0x58));
            rcx = *((rsp + 0x50));
            r10d = *((rsp + 0x48));
            r11d = *((rsp + 0x40));
        }
label_49:
        eax = *((rsp + 0x30));
        r15++;
        r8 = rbx;
        *((r15 - 1)) = al;
label_41:
        if (r15 == 0) {
            goto label_86;
        }
        rdx = r9;
        *((rsp + 0x58)) = rcx;
        *((rsp + 0x50)) = r10d;
        *((rsp + 0x48)) = r8;
        *((rsp + 0x40)) = r11b;
        *((rsp + 0x30)) = r9;
        memset (r15, 0x30, rdx);
        r9 = *((rsp + 0x30));
        rcx = *((rsp + 0x58));
        r10d = *((rsp + 0x50));
        r8 = *((rsp + 0x48));
        r11d = *((rsp + 0x40));
        r15 += r9;
    }
label_86:
    rax = *(rsp);
    r14 += r9;
    ebp = 0;
    r9d = 0;
    rax -= r14;
    goto label_20;
    r13d = 0;
    eax = 1;
    __asm ("cmovns r13d, ebp");
    r13 = (int64_t) r13d;
    if (r13 == 0) {
        r13 = rax;
    }
    rax = *(rsp);
    rax -= r14;
    if (rax <= r13) {
        goto label_8;
    }
    if (r15 == 0) {
        goto label_21;
    }
    if (ebp > 1) {
        rdx = (int64_t) ebp;
        rdx--;
        rbp = r15 + rdx;
        if (r12d == 0x30) {
            goto label_87;
        }
        r15 = rbp;
        memset (r15, 0x20, rdx);
    }
label_45:
    *(r15) = 9;
    r15++;
    goto label_21;
    rax = *((rsp + 8));
    edx = 0x92492493;
    r10d = 1;
    eax = *((rax + 0x18));
    esi = rax + 6;
    *((rsp + 0x30)) = eax;
    eax = esi;
    edx:eax = eax * edx;
    eax = rdx + rsi;
    edx = esi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    esi -= edx;
    esi++;
    goto label_14;
    if (r9d == 0x45) {
        goto label_88;
    }
    if (r9d == 0x4f) {
        goto label_25;
    }
    rax = *((rsp + 8));
    *((rsp + 0x30)) = 0;
    r10d = 4;
    esi = *((rax + 0x14));
    r8b = (esi < 0xfffff894) ? 1 : 0;
    esi += 0x76c;
    edi = 0;
label_74:
    if (r8b == 0) {
        goto label_22;
    }
label_75:
    esi = -esi;
    goto label_22;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *(rax);
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    edx = 0x92492493;
    edi = *((rax + 0x1c));
    edi -= *((rax + 0x18));
    edi += 7;
    eax = edi;
    edx:eax = eax * edx;
    do {
        esi = rdx + rdi;
        edi >>= 0x1f;
        r10d = 2;
        esi >>= 2;
        esi -= edi;
        goto label_14;
        if (r9d == 0x45) {
            goto label_88;
        }
        rax = *((rsp + 8));
        edx = 0x51eb851f;
        *((rsp + 0x30)) = 0;
        r10d = 2;
        edi = *((rax + 0x14));
        eax = *((rax + 0x14));
        edx:eax = eax * edx;
        eax = edx;
        edx = edi;
        edx >>= 0x1f;
        eax >>= 5;
        eax -= edx;
        edx = edi;
        esi = rax + 0x13;
        eax *= 0x64;
        edx -= eax;
        eax = edx;
        eax >>= 0x1f;
        dl = (esi > 0) ? 1 : 0;
        eax &= edx;
        r8b = (edi < 0xfffff894) ? 1 : 0;
        esi -= eax;
        edi = 0;
        goto label_17;
        if (r9d == 0x45) {
            goto label_25;
        }
        r10 = *((rsp + 8));
        esi = 0x92492493;
        eax = *((r10 + 0x18));
        edi = rax + 6;
        *((rsp + 0x30)) = eax;
        eax = edi;
        edx:eax = eax * esi;
        eax = rdx + rdi;
        edx = edi;
        edx >>= 0x1f;
        eax >>= 2;
        eax -= edx;
        edx = rax*8;
        edx -= eax;
        eax = edx;
        edx = *((r10 + 0x1c));
        eax -= edi;
        edi = rax + rdx + 7;
        eax = edi;
        edx:eax = eax * esi;
    } while (1);
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 1;
    esi = *((rax + 0x18));
    goto label_14;
    if (r8b != 0) {
        r11d = r8d;
    }
    if (r9d == 0) {
        goto label_23;
    }
label_25:
    rax = rbx - 1;
    edx = rax + 2;
    do {
        ecx = edx;
        r9 = rax;
        ecx -= eax;
        rax = rax - 1;
    } while (*((rax + 1)) != 0x25);
    rdx = *(rsp);
    eax = 0;
    rcx = (int64_t) ecx;
    r8 = rbx;
    rdx -= r14;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    r13 = rax;
    if (rcx >= rax) {
        r13 = rcx;
    }
label_24:
    if (rdx <= r13) {
        goto label_8;
    }
    if (r15 != 0) {
        if (rcx < rax) {
            rdx = (int64_t) ebp;
            *((rsp + 0x50)) = rcx;
            rdx -= rcx;
            *((rsp + 0x48)) = r8;
            rbx = r15 + rdx;
            *((rsp + 0x40)) = r9;
            *((rsp + 0x30)) = r11b;
            if (r12d == 0x30) {
                goto label_89;
            }
            r15 = rbx;
            memset (r15, 0x20, rdx);
            rcx = *((rsp + 0x50));
            r8 = *((rsp + 0x48));
            r9 = *((rsp + 0x40));
            r11d = *((rsp + 0x30));
        }
label_36:
        *((rsp + 0x40)) = r8;
        rdx = rcx;
        rsi = r9;
        rdi = r15;
        *((rsp + 0x30)) = rcx;
        if (r11b == 0) {
            goto label_90;
        }
        fcn_0040ee30 (rdi, rsi, rdx);
        rcx = *((rsp + 0x30));
        r8 = *((rsp + 0x40));
label_33:
        r15 += rcx;
    }
    r14 += r13;
    goto label_7;
    r13d = 0;
label_27:
    rax = *((rsp + 8));
    esi = *((rax + 0x20));
    if (esi < 0) {
        goto label_91;
    }
    rsi = *((rax + 0x28));
    r8d = 1;
    if (esi >= 0) {
        r8d = 0;
        if (esi != 0) {
            goto label_92;
        }
        rax = *((rsp + 0x20));
        r8b = (*(rax) == 0x2d) ? 1 : 0;
    }
label_92:
    eax = esi;
    edx = 0x91a2b3c5;
    edi = 0x88888889;
    edx:eax = eax * edx;
    eax = esi;
    eax >>= 0x1f;
    *((rsp + 0x40)) = eax;
    edx += esi;
    edx >>= 0xb;
    edx -= eax;
    eax = esi;
    *((rsp + 0x30)) = edx;
    edx:eax = eax * edi;
    r10d = rdx + rsi;
    r10d >>= 5;
    r10d -= *((rsp + 0x40));
    eax = r10d;
    edx:eax = eax * edi;
    eax = r10d;
    eax >>= 0x1f;
    edi = rdx + r10;
    edi >>= 5;
    edi -= eax;
    eax = r10d;
    edi *= 0x3c;
    r10d *= 0x3c;
    eax -= edi;
    edi = eax;
    esi -= r10d;
    if (r13 == 1) {
        goto label_43;
    }
    if (r13 == 0) {
        goto label_93;
    }
    if (r13 == 2) {
        goto label_94;
    }
    if (r13 == 3) {
        goto label_95;
    }
    ecx = *(rbx);
    r9 = rbx;
label_26:
    rdx = *(rsp);
    eax = 0;
    rdx -= r14;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    if (cl != 0x25) {
        goto label_96;
    }
    r13d = 1;
    r8 = r9;
    ecx = 1;
    if (rax != 0) {
        r13 = rax;
    }
    goto label_24;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    r10d = 2;
    esi = *((rax + 0xc));
    goto label_14;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    esi = *((rax + 0xc));
    goto label_16;
    if (r9d == 0x45) {
        goto label_25;
    }
    rax = *((rsp + 8));
    *((rsp + 0x30)) = 0;
    r10d = 3;
    esi = *((rax + 0x1c));
    r8b = (esi < 0xffffffff) ? 1 : 0;
    esi++;
    edi = 0;
    goto label_17;
    rdx = *(rsp);
    eax = 0;
    r13d = 1;
    rdx -= r14;
    __asm ("cmovns eax, ebp");
    rax = (int64_t) eax;
    if (rax != 0) {
        r13 = rax;
    }
    if (r9d != 0) {
        goto label_97;
    }
    if (r13 >= rdx) {
        goto label_8;
    }
    if (r15 == 0) {
        goto label_21;
    }
    if (ebp > 1) {
        rdx = (int64_t) ebp;
        rdx--;
        rbp = r15 + rdx;
        if (r12d == 0x30) {
            goto label_98;
        }
        r15 = rbp;
        memset (r15, 0x20, rdx);
        ecx = *(rbx);
    }
label_47:
    *(r15) = cl;
    r15++;
    goto label_21;
    r9 = rbx - 1;
    ecx = *((rbx - 1));
    goto label_26;
    if (r9d == 0x45) {
        goto label_88;
    }
    rax = *((rsp + 8));
    edx = 0x51eb851f;
    r10d = 2;
    edi = *((rax + 0x14));
    eax = *((rax + 0x14));
    edx:eax = eax * edx;
    eax = edi;
    eax >>= 0x1f;
    esi = edx;
    esi >>= 5;
    esi -= eax;
    eax = edi;
    esi *= 0x64;
    eax -= esi;
    esi = eax;
    if (eax >= 0) {
        goto label_14;
    }
    eax = -eax;
    esi += 0x64;
    if (edi <= 0xfffff893) {
        esi = eax;
    }
    goto label_14;
    eax = *((rbx + 1));
    rdx = rbx + 1;
    r13d = 1;
    if (al == 0x3a) {
        goto label_30;
    }
label_29:
    if (al != 0x7a) {
        goto label_25;
    }
    rbx = rdx;
    goto label_27;
    r13d = 0;
    goto label_28;
    *((rsp + 0x30)) = "%H:%M:%S";
    goto label_13;
label_30:
    r13++;
    eax = *((rbx + r13));
    rdx = rbx + r13;
    if (al != 0x3a) {
        goto label_29;
    }
    goto label_30;
label_64:
    memcpy (rdi, rsi, rdx);
    r8 = *((rsp + 0x40));
    rcx = *((rsp + 0x30));
    goto label_31;
label_66:
    *((rsp + 0x30)) = 0x2d;
    ecx = 0x2d;
    if (r12d != 0x2d) {
        goto label_32;
    }
label_37:
    r9d = 0;
    r12d = 1;
    rax = *(rsp);
    __asm ("cmovns r9d, ebp");
    r9 = (int64_t) r9d;
    if (r9 != 0) {
        r12 = r9;
    }
    rax -= r14;
    if (rax <= r12) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10d == 0) {
            if (r9 <= 1) {
                goto label_99;
            }
            r8 = (int64_t) ebp;
            *((rsp + 0x58)) = cl;
            r8--;
            *((rsp + 0x50)) = r9;
            rdx = r8;
            *((rsp + 0x48)) = r10d;
            *((rsp + 0x40)) = r11b;
            *((rsp + 0x30)) = r8;
            memset (r15, 0x20, rdx);
            r8 = *((rsp + 0x30));
            ecx = *((rsp + 0x58));
            r9 = *((rsp + 0x50));
            r10d = *((rsp + 0x48));
            r11d = *((rsp + 0x40));
            r15 += r8;
        }
label_99:
        *(r15) = cl;
        r15++;
    }
    rax = *(rsp);
    r14 += r12;
    r8 = rbx;
    r12d = 0x2d;
    rcx = rsp + 0x87;
    rcx -= r13;
    rax -= r14;
    goto label_20;
label_90:
    memcpy (rdi, rsi, rdx);
    r8 = *((rsp + 0x40));
    rcx = *((rsp + 0x30));
    goto label_33;
label_63:
    fcn_0040ede0 (rdi, rsi, rdx);
    rcx = *((rsp + 0x30));
    r8 = *((rsp + 0x40));
    goto label_31;
label_62:
    r15 = rbp;
    rax = memset (r15, 0x30, rdx);
    r11d = *((rsp + 0x30));
    r8 = *((rsp + 0x40));
    rcx = *((rsp + 0x48));
    goto label_34;
label_83:
    r9d = 0;
    r8d = 1;
    __asm ("cmovns r9d, ebp");
    r9 = (int64_t) r9d;
    if (r9 != 0) {
        r8 = r9;
    }
    if (r8 >= rax) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10d == 0) {
            if (r9 <= 1) {
                goto label_46;
            }
            rdx = (int64_t) ebp;
            *((rsp + 0x68)) = rcx;
            rdx--;
            *((rsp + 0x60)) = r8;
            rax = r15 + rdx;
            *((rsp + 0x58)) = r9;
            *((rsp + 0x40)) = rax;
            *((rsp + 0x50)) = r10d;
            *((rsp + 0x48)) = r11b;
            if (r12d == 0x30) {
                goto label_100;
            }
            memset (r15, 0x20, rdx);
            r15 = *((rsp + 0x40));
            rcx = *((rsp + 0x68));
            r8 = *((rsp + 0x60));
            r9 = *((rsp + 0x58));
            r10d = *((rsp + 0x50));
            r11d = *((rsp + 0x48));
        }
label_46:
        eax = *((rsp + 0x30));
        r15++;
        *((r15 - 1)) = al;
    }
    rax = *(rsp);
    r14 += r8;
    r8 = rbx;
    rax -= r14;
    goto label_20;
label_40:
    *((rsp + 0x30)) = 0;
label_84:
    r12 = (int64_t) r9d;
    if (r12 >= rax) {
        goto label_8;
    }
    if (r15 != 0) {
        *((rsp + 0x50)) = r9d;
        *((rsp + 0x48)) = r10d;
        r15 += r12;
        *((rsp + 0x40)) = r11b;
        memset (r15, 0x20, r12);
        r9d = *((rsp + 0x50));
        r10d = *((rsp + 0x48));
        r11d = *((rsp + 0x40));
    }
    eax = ebp;
    r14 += r12;
    eax -= r9d;
    if (r9d < ebp) {
    }
    rax = *(rsp);
    rax -= r14;
    if (*((rsp + 0x30)) == 0) {
        rcx = rsp + 0x87;
        r9 = (int64_t) ebp;
        r8 = rbx;
        r12d = 0x5f;
        rcx -= r13;
        goto label_20;
label_68:
        r15 = rbp;
        memset (r15, 0x30, rdx);
        r11d = *((rsp + 0x30));
        r8 = *((rsp + 0x40));
        rcx = *((rsp + 0x48));
        goto label_35;
label_88:
        r10d = 0;
        goto label_18;
label_89:
        r15 = rbx;
        rax = memset (r15, 0x30, rdx);
        r11d = *((rsp + 0x30));
        r9 = *((rsp + 0x40));
        r8 = *((rsp + 0x48));
        rcx = *((rsp + 0x50));
        goto label_36;
label_82:
        ecx = 0x2b;
        goto label_37;
label_91:
        r8 = rbx;
        goto label_7;
    }
    r9 = (int64_t) ebp;
    ecx = 1;
    if (r9 != 0) {
        rcx = r9;
    }
    if (rcx >= rax) {
        goto label_8;
    }
    if (r15 != 0) {
        if (r10d == 0) {
            if (r9 <= 1) {
                goto label_101;
            }
            r12 = r9 - 1;
            *((rsp + 0x58)) = rcx;
            *((rsp + 0x50)) = r10d;
            r15 += r12;
            *((rsp + 0x48)) = r11b;
            *((rsp + 0x40)) = r9;
            memset (r15, 0x20, r12);
            rcx = *((rsp + 0x58));
            r10d = *((rsp + 0x50));
            r11d = *((rsp + 0x48));
            r9 = *((rsp + 0x40));
        }
label_101:
        eax = *((rsp + 0x30));
        r15++;
        *((r15 - 1)) = al;
    }
    rax = *(rsp);
    r14 += rcx;
    r8 = rbx;
    r12d = 0x5f;
    rcx = rsp + 0x87;
    rcx -= r13;
    rax -= r14;
    goto label_20;
label_69:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    r11 = *((rsp + 0x48));
    r10 = *((rsp + 0x50));
    goto label_38;
label_70:
    esi = rdi - 1;
    edx = 0x16d;
    if ((sil & 3) == 0) {
        eax = esi;
        edx = 0x51eb851f;
        edx:eax = eax * edx;
        eax = edx;
        edx = esi;
        edx >>= 0x1f;
        eax >>= 5;
        eax -= edx;
        edx = 0x16e;
        eax *= 0x64;
        if (esi != eax) {
            goto label_102;
        }
        eax = esi;
        edi = 0x190;
        edx:eax = (int64_t) eax;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        edx -= edx;
        edx = ~edx;
        edx += 0x16e;
    }
label_102:
    r10d += edx;
    edx = 0x92492493;
    esi = r10d;
    esi -= r13d;
    r13d = 0xffffffff;
    esi += 0x17e;
    eax = esi;
    r10d -= esi;
    edx:eax = eax * edx;
    eax = rdx + rsi;
    edx = esi;
    edx >>= 0x1f;
    eax >>= 2;
    eax -= edx;
    edx = rax*8;
    edx -= eax;
    r8d = r10 + rdx + 3;
    goto label_39;
label_79:
    if (ebp > 8) {
        goto label_103;
    }
    esi = *((rsp + 0x4d8));
    edi = ebp;
    r8d = 0x66666667;
    do {
        eax = esi;
        esi >>= 0x1f;
        edi++;
        edx:eax = eax * r8d;
        edx >>= 2;
        edx -= esi;
        esi = edx;
    } while (edi != 9);
label_50:
    r10d = ebp;
    goto label_14;
label_73:
    eax = r8d;
    edx = 0x92492493;
    r10d = 2;
    edx:eax = eax * edx;
    esi = rdx + r8;
    r8d >>= 0x1f;
    esi >>= 2;
    esi -= r8d;
    esi++;
    goto label_14;
label_72:
    esi = *((rsp + 0x30));
    eax = 0xfffff894;
    *((rsp + 0x30)) = 0;
    r10d = 4;
    eax -= r13d;
    esi = rsi + r13 + 0x76c;
    r8b = (esi < eax) ? 1 : 0;
    edi = 0;
    goto label_17;
label_67:
    if (r12d == 0x5f) {
        goto label_40;
    }
    rdx = (int64_t) r10d;
    if (rdx >= rax) {
        goto label_8;
    }
    r9 = (int64_t) r9d;
    r8 = rbx;
    goto label_41;
    do {
label_94:
        eax = *((rsp + 0x30)) * 0x2710;
        r10d = 9;
        *((rsp + 0x30)) = 1;
        edi *= 0x64;
        eax += edi;
        edi = 0x14;
        esi += eax;
        goto label_17;
label_43:
        esi = *((rsp + 0x30)) * 0x64;
        r10d = 6;
        *((rsp + 0x30)) = 1;
        esi += edi;
        edi = 4;
        goto label_17;
label_78:
        memcpy (rdi, rsi, rdx);
        goto label_42;
label_77:
        fcn_0040ede0 (rdi, rsi, rdx);
        goto label_42;
label_93:
        esi = *((rsp + 0x30)) * 0x64;
        edi = 0;
        *((rsp + 0x30)) = 1;
        r10d = 5;
        esi += eax;
        goto label_17;
label_95:
    } while (esi != 0);
    if (eax != 0) {
        goto label_43;
    }
    esi = *((rsp + 0x30));
    r10d = 3;
    *((rsp + 0x30)) = 1;
    goto label_17;
label_97:
    r8 = rbx;
    r9 = rbx;
    ecx = 1;
    goto label_24;
label_80:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    goto label_44;
label_87:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    goto label_45;
label_100:
    memset (r15, 0x30, rdx);
    r15 = *((rsp + 0x40));
    r11d = *((rsp + 0x48));
    r10d = *((rsp + 0x50));
    r9 = *((rsp + 0x58));
    r8 = *((rsp + 0x60));
    rcx = *((rsp + 0x68));
    goto label_46;
label_98:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    ecx = *(rbx);
    goto label_47;
label_76:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    r11d = *((rsp + 0x40));
    r8d = *((rsp + 0x48));
    goto label_48;
label_85:
    r15 = rbp;
    memset (r15, 0x30, rdx);
    r11d = *((rsp + 0x40));
    r10d = *((rsp + 0x48));
    rcx = *((rsp + 0x50));
    r9 = *((rsp + 0x58));
    goto label_49;
label_103:
    esi = *((rsp + 0x4d8));
    goto label_50;
label_65:
    r10d = 0;
    goto label_51;
label_96:
    rbx = r9;
    goto label_25;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x410650 */
#include <stdint.h>
 
void fcn_00410650 (int64_t arg5, int64_t arg6) {
    int64_t var_fh;
    r8 = arg5;
    r9 = arg6;
    *((rsp + 0xf)) = 0;
    fcn_0040ee80 (rdi, rsi, rdx, rcx, 0, rsp + 0x1f);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x410670 */
#include <stdint.h>
 
uint64_t fcn_00410670 (char ** arg1) {
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
            edi = 0x41dd18;
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
        *(0x006257c0) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x410710 */
#include <stdint.h>
 
uint64_t fcn_00410710 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_004179a0 ();
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
        eax = 0x41dd1e;
        ebx = 0x41dd29;
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
        eax = 0x41dd22;
        ebx = 0x41dd25;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x41f1aa;
    ebx = 0x41dd1c;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x410810 */
#include <stdint.h>
 
uint64_t fcn_00410810 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        rsp + 0x6c = (ebp != 0) ? 1 : 0;
    } while (r13d > 0xa);
    eax = r13d;
    r11 = *((rsp + 8));
    /* switch table (11 cases) at 0x41dd80 */
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
    *((rsp + 0x50)) = 0x41f1aa;
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
        /* switch table (127 cases) at 0x41ddd8 */
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
    rax = fcn_00410810 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x41e1d0 */
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
    /* switch table (127 cases) at 0x41e5c8 */
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
    *((rsp + 0x50)) = 0x41f1aa;
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
        rax = fcn_00416e80 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x41f1aa;
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
        *((rsp + 0x50)) = 0x41dd1c;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00410710 (0x41dd2d, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00410710 (0x41f1aa, r13d);
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
        *((rsp + 0x50)) = 0x41dd1c;
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
        *((rsp + 0x50)) = 0x41f1aa;
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
    *((rsp + 0x50)) = 0x41dd1c;
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
    rax = fcn_00410810 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x41f1aa;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x411a40 */
#include <stdint.h>
 
uint64_t fcn_00411a40 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x00624618);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00624630) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x624620) {
        goto label_2;
    }
    rax = fcn_004129e0 (rbx, rsi);
    *(0x00624618) = rax;
    rbx = rax;
    do {
        rdi = *(0x00624630);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x00624630) = r12d;
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
        rax = fcn_00410810 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6257e0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00412980 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00410810 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_004129e0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00624620]");
        rbx = rax;
        *(0x00624618) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x411be0 */
#include <stdint.h>
 
uint64_t fcn_00411be0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = errno_location ();
    esi = 0x38;
    r12d = *(rax);
    eax = 0x6258e0;
    if (rbx == 0) {
        rbx = rax;
    }
    fcn_00412b80 (rbx, rsi);
    *(rbp) = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x411c20 */
#include <stdint.h>
 
int32_t fcn_00411c20 (int64_t arg1) {
    rdi = arg1;
    eax = 0x6258e0;
    if (rdi == 0) {
        rdi = rax;
    }
    eax = *(rdi);
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x411c30 */
#include <stdint.h>
 
int32_t fcn_00411c30 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0x6258e0;
    if (rdi == 0) {
        rdi = rax;
    }
    *(rdi) = esi;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x411c40 */
#include <stdint.h>
 
int32_t fcn_00411c40 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    eax = 0x6258e0;
    ecx = esi;
    if (rdi == 0) {
        rdi = rax;
    }
    eax = esi;
    ecx &= 0x1f;
    al >>= 5;
    eax = (int32_t) al;
    rdi = rdi + rax*4 + 8;
    esi = *(rdi);
    eax = *(rdi);
    eax >>= cl;
    edx ^= eax;
    eax &= 1;
    edx &= 1;
    edx <<= cl;
    edx ^= esi;
    *(rdi) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x411cd0 */
#include <stdint.h>
 
uint64_t fcn_00411cd0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x6258e0;
    r15 = rdx;
    r14 = rsi;
    r13 = rdi;
    rbx = r8;
    if (r8 == 0) {
        rbx = rax;
    }
    *((rsp + 8)) = rcx;
    rax = errno_location ();
    r12d = *(rax);
    rax = rbx + 8;
    fcn_00410810 (r13, r14, r15, *((rsp + 0x28)), *(rbx), *((rbx + 4)));
    *(rbp) = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x411f60 */
#include <stdint.h>
 
int64_t fcn_00411f60 (uint32_t arg2, int64_t arg3) {
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
    rax = rdx;
    *(rsp) = esi;
    *((rsp + 4)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x30)) = 0;
    fcn_00411a40 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412040 */
#include <stdint.h>
 
void fcn_00412040 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
    return void (*0x411f60)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4120e0 */
#include <stdint.h>
 
int64_t fcn_004120e0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006258e0]");
        __asm ("movdqa xmm1, xmmword [0x006258f0]");
        __asm ("movdqa xmm2, xmmword [0x00625900]");
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
        fcn_00411a40 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412110 */
#include <stdint.h>
 
int64_t fcn_00412110 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00411a40 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412270 */
#include <stdint.h>
 
void fcn_00412270 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x6245e0;
    rdx = 0xffffffffffffffff;
    return void (*0x411a40)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412290 */
#include <stdint.h>
 
void fcn_00412290 (char * arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x6245e0;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x411a40)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4123e0 */
#include <stdint.h>
 
void fcn_004123e0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x41ea6b);
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
        /* switch table (10 cases) at 0x41ed58 */
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
    void (*0x402db0)() ();
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
    void (*0x402db0)() ();
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
    void (*0x402db0)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412840 */
#include <stdint.h>
 
uint64_t fcn_00412840 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_004123e0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412980 */
#include <stdint.h>
 
uint64_t fcn_00412980 (int64_t arg1) {
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
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4129e0 */
#include <stdint.h>
 
uint64_t fcn_004129e0 (void * arg1, int64_t arg2) {
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
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412ae0 */
#include <stdint.h>
 
int64_t fcn_00412ae0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *(rsi);
    if (rdi == 0) {
        goto label_0;
    }
    rdx = 0x5555555555555553;
    if (rax > rdx) {
        goto label_1;
    }
    rdx = rax;
    rdx >>= 1;
    rax = rdx + rax + 1;
    do {
        *(rsi) = rax;
        rsi = rax;
        void (*0x4129e0)() ();
label_0:
        if (rax == 0) {
            eax = 0x80;
            *(rsi) = rax;
            rsi = rax;
            void (*0x4129e0)() ();
        }
    } while (rax >= 0);
label_1:
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412b80 */
#include <stdint.h>
 
uint64_t fcn_00412b80 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00412980 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412bb0 */
#include <stdint.h>
 
void fcn_00412bb0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
    return void (*0x412b80)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412bd0 */
#include <stdint.h>
 
uint64_t fcn_00412bd0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006245c0), 0, 0x41d784);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412c10 */
#include <stdint.h>
 
uint64_t fcn_00412c10 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
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
    eax = fcn_004132b0 (rdi, 0, edx, rsp + 8, r8);
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
        rax = fcn_00412290 (r12);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412d10 */
#include <stdint.h>
 
uint64_t fcn_00412d10 (void) {
    int64_t var_8h;
    rax = fcn_00415be0 (0, 0);
    rbx = rax;
    while (*(rax) != 0xc) {
        rax = rbx;
        return rax;
        rax = errno_location ();
    }
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412d40 */
#include <stdint.h>
 
uint64_t fcn_00412d40 (void) {
    int64_t var_8h;
    r13 = 0x1000401001;
    ebx = 0;
    *((rsp + 8)) = 0x22;
    rax = errno_location ();
    r12 = rax;
    do {
label_0:
        rax = fcn_00412ae0 (rbx, rsp + 8);
        rsi = *((rsp + 8));
        rdi = rax;
        rbx = rax;
        rbp = rax + rsi - 2;
        rsi--;
        *(rbp) = 0;
        *(r12) = 0;
        eax = gethostname ();
        if (eax != 0) {
            goto label_2;
        }
    } while (*(rbp) != 0);
    rax = rbx;
    return rax;
label_2:
    ebp = *(r12);
    if (ebp > 0x24) {
label_1:
        ebx = 0;
        free (rbx);
        *(r12) = ebp;
        rax = rbx;
        return rax;
    }
    if (((r13 >> rbp) & 1) < 0) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x412df0 */
#include <stdint.h>
 
uint64_t fcn_00412df0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x41ee38 */
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
    /* switch table (54 cases) at 0x41efb8 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x413220 */
#include <stdint.h>
 
int64_t fcn_00413220 (uint32_t arg1, int64_t arg2, int64_t arg4, int64_t arg5) {
    int64_t var_eh;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
    do {
        abort ();
        edi--;
        ebx = *(0x006245c0);
    } while (edi > 3);
    r10d = esi;
    rsi = *((rdi*8 + 0x41f1e0));
    rax = (int64_t) r10d;
    if (r10d < 0) {
        goto label_0;
    }
    rax <<= 5;
    r12d = 0x41f171;
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
        r12d = 0x41f171;
        *((rsp + 0xe)) = dl;
        r13 = rsp + 0xe;
        r12 -= rax;
        *((rsp + 0xf)) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4132b0 */
#include <stdint.h>
 
uint64_t fcn_004132b0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x41f200 */
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
    /* switch table (54 cases) at 0x41f380 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4136f0 */
#include <stdint.h>
 
int64_t fcn_004136f0 (int64_t arg1) {
    rdi = arg1;
label_3:
    r12d = 0xc0000601;
    rbx = rdi;
label_0:
    edx = *((rbx + 4));
    if (edx == 0) {
        goto label_2;
    }
    do {
        if (edx == 0x5b) {
            goto label_6;
        }
        ecx = rdx - 0x21;
        if (ecx <= 0x1f) {
            if (((r12 >> rcx) & 1) < 0) {
                if (*((rbx + 8)) == 0x28) {
                    goto label_7;
                }
            }
            if (edx == 0x29) {
                goto label_8;
            }
        }
        rbx += 4;
        edx = *((rbx + 4));
    } while (edx != 0);
label_2:
    rax = rbp;
    r12 = rbx;
    return rax;
label_6:
    edx = imp.__libc_start_main;
    if (edx == 0) {
        goto label_9;
    }
label_5:
    edx = *((rbx + 8));
    if (edx == 0x21) {
        goto label_10;
    }
    eax = imp.__libc_start_main;
    if (eax < 0) {
        if (edx == 0x5e) {
            goto label_10;
        }
    }
    rbx += 8;
label_4:
    if (edx == 0x5d) {
        edx = *((rbx + 4));
        rbx += 4;
        goto label_11;
label_1:
        edx = *(rcx);
        rbx = rcx;
    }
label_11:
    rcx = rbx + 4;
    if (edx == 0x5d) {
        goto label_0;
    }
    if (edx != 0) {
        goto label_1;
    }
    goto label_2;
label_7:
    rax = fcn_004136f0 (rbx + 8);
    goto label_3;
    rbx = rax;
    goto label_0;
label_10:
    edx = *((rbx + 0xc));
    rbx += 0xc;
    goto label_4;
label_9:
    rax = getenv ("POSIXLY_CORRECT");
    eax -= eax;
    eax |= 1;
    *(0x00625918) = eax;
    goto label_5;
label_8:
    rax = rbx + 8;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4137f0 */
#include <stdint.h>
 
int64_t fcn_004137f0 (int64_t arg1) {
    rdi = arg1;
label_3:
    r12d = 0xc0000601;
    rbx = rdi;
label_0:
    edx = *((rbx + 1));
    if (dl == 0) {
        goto label_2;
    }
    do {
        if (dl == 0x5b) {
            goto label_6;
        }
        ecx = rdx - 0x21;
        if (cl <= 0x1f) {
            if (((r12 >> rcx) & 1) < 0) {
                if (*((rbx + 2)) == 0x28) {
                    goto label_7;
                }
            }
            if (dl == 0x29) {
                goto label_8;
            }
        }
        rbx++;
        edx = *((rbx + 1));
    } while (dl != 0);
label_2:
    rax = rbp;
    r12 = rbx;
    return rax;
label_6:
    edx = imp.__libc_start_main;
    if (edx == 0) {
        goto label_9;
    }
label_5:
    edx = *((rbx + 2));
    if (dl == 0x21) {
        goto label_10;
    }
    eax = imp.__libc_start_main;
    if (eax < 0) {
        if (dl == 0x5e) {
            goto label_10;
        }
    }
    rbx += 2;
label_4:
    if (dl == 0x5d) {
        edx = *((rbx + 1));
        rbx++;
        goto label_11;
label_1:
        edx = *(rcx);
        rbx = rcx;
    }
label_11:
    rcx = rbx + 1;
    if (dl == 0x5d) {
        goto label_0;
    }
    if (dl != 0) {
        goto label_1;
    }
    goto label_2;
label_7:
    rax = fcn_004137f0 (rbx + 2);
    goto label_3;
    rbx = rax;
    goto label_0;
label_10:
    edx = *((rbx + 3));
    rbx += 3;
    goto label_4;
label_9:
    rax = getenv ("POSIXLY_CORRECT");
    eax -= eax;
    eax |= 1;
    *(0x00625918) = eax;
    goto label_5;
label_8:
    rax = rbx + 2;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4138f0 */
#include <stdint.h>
 
uint64_t fcn_004138f0 (int64_t arg1, uint32_t arg3, wchar_t* arg4, int64_t arg5, uint32_t arg6, wchar_t * s) {
    int64_t var_78h;
    size_t var_70h;
    uint32_t var_68h;
    int64_t var_5dh;
    uint32_t var_5ch;
    wchar_t* var_58h;
    int64_t var_50h;
    size_t var_48h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_fh;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rsi = s;
    r12d = r8d;
    rbx = rsi;
    *((rbp - 0x50)) = edi;
    *((rbp - 0x68)) = rdx;
    *((rbp - 0x58)) = rcx;
    *((rbp - 0x5c)) = r9d;
    *((rbp - 0x5d)) = r8b;
    *((rbp - 0x38)) = 0;
    rax = wcslen (rsi);
    *((rbp - 0x48)) = rax;
    eax = *((rbx + 4));
    if (eax == 0) {
        goto label_6;
    }
    r14 = rbx + 4;
    r13 = rbp - 0x38;
    r8d = 0;
    *((rbp - 0x70)) = rbx;
    rsi = r14;
    rbx = r13;
    r15d = 0xc0000601;
    r13 = r8;
    while (edx > 0x1f) {
        if (eax == 0x7c) {
            if (r13 == 0) {
                goto label_18;
            }
        }
label_0:
        eax = *((r14 + 4));
        r14 += 4;
label_4:
        if (eax == 0) {
            goto label_6;
        }
label_1:
        if (eax == 0x5b) {
            goto label_19;
        }
label_2:
        edx = rax - 0x21;
    }
    if (((r15 >> rdx) & 1) < 0) {
        if (*((r14 + 4)) == 0x28) {
            goto label_20;
        }
    }
    if (eax != 0x29) {
        goto label_0;
    }
    rdx = r13 - 1;
    if (r13 == 0) {
        goto label_21;
    }
    eax = *((r14 + 4));
    r13 = rdx;
    r14 += 4;
    if (eax != 0) {
        goto label_1;
    }
    do {
label_6:
        eax = 0xffffffff;
label_10:
        rsp = rbp - 0x28;
        return rax;
label_20:
        r13++;
        r14 += 4;
        eax = 0x28;
        goto label_2;
label_19:
        ecx = imp.__libc_start_main;
        if (ecx == 0) {
            goto label_22;
        }
label_7:
        eax = *((r14 + 4));
        if (eax == 0x21) {
            goto label_23;
        }
        edx = imp.__libc_start_main;
        if (edx < 0) {
            if (eax == 0x5e) {
                goto label_23;
            }
        }
        rdx = r14 + 4;
label_5:
        if (eax != 0x5d) {
            goto label_24;
        }
        eax = *((rdx + 4));
        rdx += 4;
        goto label_24;
label_3:
    } while (eax == 0);
    eax = *(r14);
    rdx = r14;
label_24:
    r14 = rdx + 4;
    if (eax != 0x5d) {
        goto label_3;
    }
    eax = *((rdx + 4));
    goto label_4;
label_23:
    rdx = r14 + 8;
    eax = *((r14 + 8));
    goto label_5;
label_18:
    eax = *((rbp - 0x50));
    rdx = *((rbp - 0x48));
    eax -= 0x3f;
    if (eax > 1) {
        rdx = r14;
        rdx -= rsi;
        rdx >>= 2;
        rdx++;
    }
    rax = rdx*4 + 0xf;
    rax &= 0xfffffffffffffff8;
    rdi = rax - 8;
    if (rdi > 0x1f37) {
        goto label_6;
    }
    rcx = 0x3fffffffffffffff;
    if (rdx > rcx) {
        goto label_6;
    }
    rax += 0x17;
    rdx = r14;
    rax &= 0xfffffffffffffff0;
    rdx -= rsi;
    rdx >>= 2;
    r13 = rsp + 0xf;
    r13 &= 0xfffffffffffffff0;
    rdi = r13 + 8;
    wmempcpy ();
    rsi = r14 + 4;
    *(rax) = 0;
    eax = *((r14 + 4));
    r14 = rsi;
    *(r13) = 0;
    *(rbx) = r13;
    rbx = r13;
    r13d = 0;
    goto label_4;
label_22:
    *((rbp - 0x78)) = rsi;
    rax = getenv ("POSIXLY_CORRECT");
    rsi = *((rbp - 0x78));
    eax -= eax;
    eax |= 1;
    *(0x00625918) = eax;
    goto label_7;
label_21:
    eax = *((rbp - 0x50));
    r13 = rbx;
    rbx = *((rbp - 0x70));
    eax -= 0x3f;
    if (eax > 1) {
        rax = r14;
        rax -= rsi;
        rax >>= 2;
        rax++;
        *((rbp - 0x48)) = rax;
    }
    rcx = *((rbp - 0x48));
    rax = rcx*4 + 0xf;
    rax &= 0xfffffffffffffff8;
    rdx = rax - 8;
    if (rdx > 0x1f37) {
        goto label_6;
    }
    rdx = 0x3fffffffffffffff;
    if (rcx > rdx) {
        goto label_6;
    }
    rax += 0x17;
    rdx = r14;
    rax &= 0xfffffffffffffff0;
    rdx -= rsi;
    rdx >>= 2;
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    rdi = rax + 8;
    r15 = rax;
    wmempcpy ();
    *(rax) = 0;
    *(r13) = r15;
    r13 = *((rbp - 0x38));
    *(r15) = 0;
    if (r13 == 0) {
        goto label_25;
    }
    if (*((r14 - 4)) != 0x29) {
        goto label_26;
    }
    r15d = *((rbp - 0x50));
    r15d -= 0x21;
    if (r15d > 0x1f) {
        goto label_27;
    }
    /* switch table (32 cases) at 0x41f5b0 */
    ecx = (int32_t) r12b;
    eax = fcn_00413e80 (r14, *((rbp - 0x68)), *((rbp - 0x58)), rcx, *((rbp - 0x5c)));
    if (eax == 0) {
        goto label_11;
    }
    eax = *((rbp - 0x5c));
    *((rbp - 0x70)) = r14;
    r14 = *((rbp - 0x68));
    r12d = eax;
    r15d = eax;
    r12d &= 0xfffffffb;
    r15d &= 1;
    if (r15d != 0) {
        r12d = eax;
    }
    rax = rbx - 4;
    *((rbp - 0x50)) = r15d;
    rbx = *((rbp - 0x58));
    *((rbp - 0x78)) = rax;
label_15:
    if (r14 > rbx) {
        goto label_28;
    }
    eax = *((rbp - 0x5d));
    r15 = r14;
    *((rbp - 0x48)) = eax;
    goto label_29;
label_8:
    ecx = 0;
    if (*((r15 - 4)) == 0x2f) {
        eax = *((rbp - 0x5c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00413e80 (*((rbp - 0x70)), r15, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
    ecx = 0;
    if (*((r15 - 4)) == 0x2f) {
        eax = *((rbp - 0x5c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00413e80 (*((rbp - 0x78)), r15, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
label_9:
    r13 = *((rbp - 0x38));
    do {
        r15 += 4;
        if (rbx < r15) {
            goto label_28;
        }
label_29:
        eax = fcn_00413e80 (r13 + 8, r14, r15, *((rbp - 0x48)), r12d);
    } while (eax != 0);
    if (r14 != r15) {
        goto label_8;
    }
    eax = fcn_00413e80 (*((rbp - 0x70)), r14, rbx, *((rbp - 0x48)), r12d);
    if (eax != 0) {
        goto label_9;
    }
label_11:
    eax = 0;
    goto label_10;
    rcx = *((rbp - 0x58));
    if (*((rbp - 0x68)) > rcx) {
        goto label_16;
    }
    eax = *((rbp - 0x5c));
    r15 = *((rbp - 0x68));
    *((rbp - 0x48)) = r13;
    r12d = (int32_t) r12b;
    *((rbp - 0x50)) = r14;
    ebx = eax;
    r14 = r15;
    ebx &= 0xfffffffb;
    if ((al & 1) != 0) {
        ebx = eax;
    }
label_12:
    r13 = *((rbp - 0x48));
    do {
        eax = fcn_00413e80 (r13 + 8, r15, r14, r12d, ebx);
        if (eax == 0) {
            goto label_30;
        }
        r13 = *(r13);
    } while (r13 != 0);
    if (r15 == r14) {
        goto label_31;
    }
    ecx = 0;
    if (*((r14 - 4)) == 0x2f) {
        eax = *((rbp - 0x5c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
label_17:
    eax = fcn_00413e80 (*((rbp - 0x50)), r14, *((rbp - 0x58)), 0, ebx);
    if (eax == 0) {
        goto label_11;
    }
label_30:
    r14 += 4;
    if (*((rbp - 0x58)) >= r14) {
        goto label_12;
    }
    do {
label_16:
        eax = 1;
        goto label_10;
        r12d = (int32_t) r12b;
label_14:
        eax = *((rbp - 0x5c));
        r15 = *((rbp - 0x68));
        ebx = eax;
        ebx &= 0xfffffffb;
        if ((al & 1) != 0) {
            ebx = eax;
        }
        goto label_32;
label_13:
        r13 = *(r13);
        *((rbp - 0x38)) = r13;
    } while (r13 == 0);
label_32:
    rax = wcscat (r13 + 8, r14);
    eax = fcn_00413e80 (rax, r15, *((rbp - 0x58)), r12d, ebx);
    if (eax != 0) {
        goto label_13;
    }
    eax = 0;
    goto label_10;
    r12d = (int32_t) r12b;
    eax = fcn_00413e80 (r14, *((rbp - 0x68)), *((rbp - 0x58)), r12d, *((rbp - 0x5c)));
    if (eax != 0) {
        goto label_14;
    }
    eax = 0;
    goto label_10;
label_28:
    r13 = *(r13);
    *((rbp - 0x38)) = r13;
    if (r13 != 0) {
        goto label_15;
    }
    goto label_16;
label_31:
    ecx = r12d;
    goto label_17;
label_27:
    assert_fail ("! \"Invalid extended matching operator\", "lib/fnmatch_loop.c", 0x4ad, "ext_wmatch");
label_26:
    assert_fail ("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455, "ext_wmatch");
label_25:
    return assert_fail ("list != NULL", "lib/fnmatch_loop.c", 0x454, "ext_wmatch");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x413e80 */
#include <stdint.h>
 
uint64_t fcn_00413e80 (size_t arg1, uint32_t arg2, wchar_t* arg3, int64_t arg4, uint32_t arg5) {
    wchar_t* var_8h;
    wchar_t* var_10h;
    uint32_t var_18h;
    wint_t * var_1ch;
    uint32_t var_20h;
    int64_t var_24h;
    int64_t var_28h;
    char * property;
    int64_t var_140h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_7:
    rax = rdi + 4;
    r14 = rdx;
    rbx = rsi;
    r15d = *(rdi);
    *((rsp + 0x18)) = r8d;
    *((rsp + 8)) = rax;
    if (r15d == 0) {
        goto label_44;
    }
    r12d = r8d;
    r8d &= 5;
    *((rsp + 0x10)) = rdx;
    *((rsp + 0x20)) = r8d;
    ebp &= 0x10;
    r10d = ecx;
    r12d &= 2;
    r13d = ebp;
label_1:
    if (r13d != 0) {
        *((rsp + 0x1c)) = r10b;
        eax = towlower (r15d);
        r10d = *((rsp + 0x1c));
        r15d = eax;
    }
    eax = r15 - 0x21;
    if (eax > 0x3b) {
        goto label_2;
    }
    /* switch table (60 cases) at 0x41f6b0 */
    if (r12d != 0) {
        goto label_45;
    }
    r15d = *((rbp + 4));
    rax = rbp + 8;
    *((rsp + 8)) = rax;
    if (r15d == 0) {
        goto label_4;
    }
    if (r13d == 0) {
        goto label_46;
    }
    eax = towlower (r15d);
    r15d = eax;
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
label_8:
    towlower (*(rbx));
    rbp = *((rsp + 8));
    goto label_47;
    r8d = imp.__libc_start_main;
    if (r8d == 0) {
        goto label_48;
    }
label_23:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    r8d = *(rbx);
    if (r8d == 0x2e) {
        goto label_49;
    }
    if (r8d == 0x2f) {
        if ((*((rsp + 0x18)) & 1) != 0) {
            goto label_4;
        }
    }
label_22:
    eax = *((rbp + 4));
    if (eax == 0x21) {
        goto label_50;
    }
    edi = imp.__libc_start_main;
    if (edi < 0) {
        if (eax == 0x5e) {
            goto label_50;
        }
    }
    *((rsp + 0x1c)) = 0;
    r14 = *((rsp + 8));
label_19:
    if (r13d != 0) {
        eax = towlower (r8d);
        r8d = eax;
    }
    *((rsp + 0x24)) = r15d;
    rbp = r14 + 4;
    r15 = rbx;
    eax = *(r14);
    ebx = r8d;
    while (r14d != 0x2d) {
        if (eax == ebx) {
            goto label_51;
        }
        eax = r14d;
label_0:
        if (eax == 0x5d) {
            goto label_52;
        }
label_13:
        if (r12d == 0) {
            if (eax == 0x5c) {
                goto label_53;
            }
        }
        if (eax == 0x5b) {
            goto label_54;
        }
        if (eax == 0) {
            goto label_55;
        }
        r14d = *(rbp);
label_11:
        if (r13d != 0) {
            eax = towlower (eax);
        }
label_15:
        rsi = rbp + 4;
    }
    edx = *((rbp + 4));
    if (edx == 0x5d) {
        goto label_56;
    }
    if (edx == 0) {
        goto label_56;
    }
label_14:
    rsi = rbp + 8;
    if (edx == 0x5c) {
        if (r12d == 0) {
            goto label_57;
        }
    }
label_20:
    if (edx == 0) {
        goto label_4;
    }
    r14d = *(rsi);
    rbp = rsi + 4;
    dil = (eax <= ebx) ? 1 : 0;
    dl = (edx >= ebx) ? 1 : 0;
    eax = r14d;
    if ((dil & dl) == 0) {
        goto label_0;
    }
    rbx = r15;
    rsi = rsi + 4;
    goto label_41;
    if ((*((rsp + 0x18)) & 0x20) != 0) {
        goto label_58;
    }
label_29:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    eax = *(rbx);
    if (eax == 0x2f) {
        goto label_59;
    }
    al = (eax == 0x2e) ? 1 : 0;
    r10b &= al;
    if (r10b != 0) {
        goto label_4;
    }
    rbp = *((rsp + 8));
    goto label_9;
    if (*((rsp + 0x20)) == 5) {
        goto label_60;
    }
label_2:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
label_35:
    eax = *(rbx);
    if (r13d != 0) {
        eax = towlower (eax);
    }
    if (eax != r15d) {
        goto label_4;
    }
label_21:
    rbp = *((rsp + 8));
    r10d = 0;
label_9:
    r15d = *(rbp);
    rax = rbp + 4;
    rbx += 4;
    *((rsp + 8)) = rax;
    if (r15d != 0) {
        goto label_1;
    }
    r14 = *((rsp + 0x10));
label_44:
    if (rbx == r14) {
        goto label_26;
    }
    if ((*((rsp + 0x18)) & 8) != 0) {
        goto label_61;
    }
label_4:
    eax = 1;
label_3:
    return rax;
    if ((*((rsp + 0x18)) & 0x20) == 0) {
        goto label_2;
    }
    if (*((rbp + 4)) != 0x28) {
        goto label_2;
    }
    r8d = (int32_t) r10b;
    eax = fcn_004138f0 (r15d, *((rsp + 8)), rbx, *((rsp + 0x10)), r8, *((rsp + 0x18)));
    if (eax == 0xffffffff) {
        goto label_2;
    }
    goto label_3;
    rax = rbp;
    r14 = *((rsp + 0x10));
    r13 = rax;
    eax = *((rsp + 0x18));
    eax &= 0x20;
    *((rsp + 0x20)) = eax;
    if (eax != 0) {
        goto label_62;
    }
label_28:
    if (r14 == rbx) {
        goto label_63;
    }
    if (*(rbx) != 0x2e) {
        goto label_63;
    }
    if (r10b != 0) {
        goto label_4;
    }
label_63:
    r11d = *((r13 + 4));
    r15 = r13 + 8;
    if (r11d != 0x2a) {
        if (r11d != 0x3f) {
            goto label_64;
        }
    }
    eax = *((rsp + 0x20));
    r13d = *((rsp + 0x18));
    dl = (eax != 0) ? 1 : 0;
    r13d &= 1;
    do {
label_5:
        if (*(r15) == 0x28) {
            if (dl != 0) {
                goto label_65;
            }
        }
label_17:
        if (r11d == 0x3f) {
            goto label_66;
        }
label_10:
        rax = r15;
label_16:
        r11d = *(rax);
        r15 = rax + 4;
    } while (r11d == 0x3f);
    if (r11d == 0x2a) {
        goto label_5;
    }
label_64:
    ecx = *((rsp + 0x18));
    ecx &= 1;
    if (r11d == 0) {
        goto label_67;
    }
    esi = ecx;
    *((rsp + 0x1c)) = r10b;
    rdx -= rbx;
    esi = -esi;
    *((rsp + 0x10)) = r11d;
    rdx >>= 2;
    esi &= 0x2f;
    *((rsp + 8)) = ecx;
    rax = wmemchr (rbx, esi, r14);
    r11d = *((rsp + 0x10));
    ecx = *((rsp + 8));
    r9 = rax;
    r10d = *((rsp + 0x1c));
    if (rax == 0) {
        r9 = r14;
    }
    if (r11d == 0x5b) {
        goto label_68;
    }
    r13d = *((rsp + 0x20));
    if (r13d != 0) {
        goto label_69;
    }
label_25:
    if (r11d == 0x2f) {
        goto label_70;
    }
    if (ecx == 0) {
        goto label_71;
    }
label_40:
    r13d = (int32_t) r10b;
    if (r11d == 0x5c) {
        goto label_72;
    }
label_43:
    if (ebp != 0) {
        *((rsp + 8)) = r9;
        eax = towlower (r11d);
        r9 = *((rsp + 8));
        r11d = eax;
    }
    r15 -= 4;
    if (r9 <= rbx) {
        goto label_4;
    }
    *((rsp + 8)) = r14;
    r12d = r11d;
    r14d = r13d;
    r13 = rbx;
    rbx = r9;
    goto label_73;
label_6:
    r13 += 4;
    r14d = 0;
    if (rbx <= r13) {
        goto label_4;
    }
label_73:
    eax = *(r13);
    if (ebp != 0) {
        eax = towlower (eax);
    }
    if (r12d != eax) {
        goto label_6;
    }
    eax = fcn_00413e80 (r15, r13, *((rsp + 8)), r14d, *((rsp + 0x18)));
    goto label_7;
    if (eax != 0) {
        goto label_6;
    }
label_26:
    eax = 0;
    goto label_3;
label_45:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    if (r13d != 0) {
        goto label_8;
    }
label_24:
    eax = *(rbx);
    rbp = *((rsp + 8));
label_47:
    if (eax != r15d) {
        goto label_4;
    }
label_34:
    r10d = 0;
    goto label_9;
label_66:
    if (rbx == r14) {
        goto label_4;
    }
    if (*(rbx) == 0x2f) {
        goto label_74;
    }
label_18:
    rbx += 4;
    goto label_10;
label_54:
    r14d = *(rbp);
    if (r14d != 0x3a) {
        goto label_11;
    }
    r14 = rbp;
    edx = 0;
    goto label_75;
label_12:
    ecx = rax - 0x61;
    if (ecx > 0x18) {
        goto label_76;
    }
    rdx++;
    r14 = r8;
    *((rsp + rdx*4 + 0x13c)) = eax;
    if (rdx == 0x100) {
        goto label_4;
    }
label_75:
    eax = *((r14 + 4));
    r8 = r14 + 4;
    if (eax != 0x3a) {
        goto label_12;
    }
    if (*((r8 + 4)) == 0x5d) {
        goto label_77;
    }
label_76:
    rsi = rbp + 4;
    if (ebx == 0x5b) {
        goto label_51;
    }
    eax = 0x3a;
    goto label_13;
label_56:
    if (eax == ebx) {
        goto label_78;
    }
    if (edx != 0x5d) {
        goto label_14;
    }
    r14d = 0x5d;
    eax = 0x2d;
    goto label_11;
label_53:
    eax = *(rbp);
    if (eax == 0) {
        goto label_4;
    }
    if (r13d != 0) {
        towlower (eax);
    }
    r14d = *((rbp + 4));
    rbp += 4;
    goto label_15;
label_65:
    *((rsp + 0x10)) = r10b;
    *((rsp + 8)) = dl;
    *((rsp + 0x1c)) = r11d;
    rax = fcn_004136f0 (r15);
    edx = *((rsp + 8));
    r10d = *((rsp + 0x10));
    if (rax != r15) {
        goto label_16;
    }
    r11d = *((rsp + 0x1c));
    goto label_17;
label_74:
    if (r13d == 0) {
        goto label_18;
    }
    goto label_4;
label_50:
    r14 = rbp + 8;
    *((rsp + 0x1c)) = 1;
    goto label_19;
label_57:
    rsi = rbp + 0xc;
    edx = *((rbp + 8));
    goto label_20;
label_60:
    if (*((rsp + 0x10)) == rbx) {
        goto label_4;
    }
    if (*(rbx) != 0x2f) {
        goto label_4;
    }
    rbp = *((rsp + 8));
    r10d = 1;
    goto label_9;
label_59:
    if ((*((rsp + 0x18)) & 1) == 0) {
        goto label_21;
    }
    goto label_4;
label_49:
    if (r10b == 0) {
        goto label_22;
    }
    goto label_4;
label_48:
    *((rsp + 0x1c)) = r10b;
    rax = getenv ("POSIXLY_CORRECT");
    r10d = *((rsp + 0x1c));
    eax -= eax;
    eax |= 1;
    *(0x00625918) = eax;
    goto label_23;
label_46:
    if (*((rsp + 0x10)) != rbx) {
        goto label_24;
    }
    goto label_4;
label_69:
    eax = r11 - 0x21;
    if (eax > 0x1f) {
        goto label_25;
    }
    edx = 0x80000401;
    if (((rdx >> rax) & 1) >= 0) {
        goto label_25;
    }
    if (*(r15) != 0x28) {
        goto label_25;
    }
label_68:
    edi = *((rsp + 0x18));
    eax = *((rsp + 0x18));
    eax &= 0xfffffffb;
    if (ecx != 0) {
        eax = edi;
    }
    r15 -= 4;
    if (r9 <= rbx) {
        goto label_4;
    }
    r12 = r9;
label_27:
    ecx = (int32_t) r10b;
    eax = fcn_00413e80 (r15, rbx, r14, rcx, ebp);
    goto label_7;
    if (eax == 0) {
        goto label_26;
    }
    rbx += 4;
    r10d = 0;
    if (r12 > rbx) {
        goto label_27;
    }
    goto label_4;
label_62:
    if (*((r13 + 4)) != 0x28) {
        goto label_28;
    }
    r8d = (int32_t) r10b;
    *((rsp + 0x10)) = r10b;
    eax = fcn_004138f0 (0x2a, *((rsp + 8)), rbx, r14, r8, *((rsp + 0x18)));
    if (eax != 0xffffffff) {
        goto label_3;
    }
    r10d = *((rsp + 0x10));
    goto label_28;
label_58:
    if (*((rbp + 4)) != 0x28) {
        goto label_29;
    }
    r8d = (int32_t) r10b;
    *((rsp + 0x1c)) = r10b;
    eax = fcn_004138f0 (0x3f, *((rsp + 8)), rbx, *((rsp + 0x10)), r8, *((rsp + 0x18)));
    r10d = *((rsp + 0x1c));
    if (eax == 0xffffffff) {
        goto label_29;
    }
    goto label_3;
label_51:
    rbx = r15;
    r14d = *(rbp);
    goto label_41;
label_30:
    if (edx == 0x5d) {
        goto label_79;
    }
    r14d = *(r8);
label_31:
    rsi = rbp + 4;
label_41:
    r8 = rsi;
    edx = r14d;
    if (r14d == 0) {
        goto label_4;
    }
    r10b = (r14d == 0x5c) ? 1 : 0;
    al = (r12d == 0) ? 1 : 0;
    r10b &= al;
    if (r10b != 0) {
        goto label_80;
    }
    if (r14d != 0x5b) {
        goto label_30;
    }
    r14d = *((rbp + 4));
    if (r14d == 0x3a) {
        goto label_81;
    }
    if (r14d == 0x3d) {
        goto label_82;
    }
    rbp += 8;
    if (r14d != 0x2e) {
label_37:
        goto label_31;
label_33:
        if (*((rdx + 4)) == 0x5d) {
            goto label_83;
        }
label_32:
    }
    eax = *((rbp + 4));
    rdx = rbp + 4;
    if (eax == 0) {
        goto label_4;
    }
    if (eax != 0x2e) {
        goto label_32;
    }
    goto label_33;
label_80:
    ecx = *((rbp + 4));
    if (ecx == 0) {
        goto label_4;
    }
    r14d = *((rbp + 8));
    rbp += 8;
    goto label_31;
label_82:
    edx = *((rbp + 8));
    if (edx == 0) {
        goto label_4;
    }
    if (*((rbp + 0xc)) != 0x3d) {
        goto label_4;
    }
    if (*((rbp + 0x10)) != 0x5d) {
        goto label_4;
    }
    r8 = rbp + 0x18;
    edx = *((rbp + 0x14));
    goto label_30;
label_52:
    esi = *((rsp + 0x1c));
    rbx = r15;
    if (esi != 0) {
        goto label_34;
    }
    goto label_4;
label_55:
    rbx = r15;
    r15d = *((rsp + 0x24));
    goto label_35;
label_67:
    if (ecx == 0) {
        goto label_26;
    }
    if ((*((rsp + 0x18)) & 8) != 0) {
        goto label_26;
    }
    rdx -= rbx;
    rdx >>= 2;
    rax = wmemchr (rbx, 0x2f, r14);
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_81:
    rax = rbp + 8;
    r14d = *((rbp + 8));
    rbp += 0x404;
    goto label_84;
label_36:
    r14d -= 0x61;
    if (r14d > 0x18) {
        goto label_85;
    }
    rax += 4;
    r14d = *(rax);
    if (rbp == rax) {
        goto label_4;
    }
label_84:
    if (r14d != 0x3a) {
        goto label_36;
    }
    if (*((rax + 4)) != 0x5d) {
        goto label_37;
    }
    r8 = rax + 0xc;
    edx = *((rax + 8));
    goto label_30;
label_77:
    *((rsp + rdx*4 + 0x140)) = 0;
    rsi = rsp + 0x30;
    rdx = rsp + 0x140;
    eax = *((rsp + 0x140));
    r9 = rdx + 0x400;
    goto label_86;
label_38:
    if (eax >= 0x25) {
        goto label_39;
    }
    ecx = rax - 0x20;
    if (ecx > 3) {
        goto label_4;
    }
label_39:
    if (rdx == r9) {
        goto label_4;
    }
    rdx += 4;
    rsi++;
    *((rsi - 1)) = al;
    eax = *(rdx);
    if (eax == 0) {
        goto label_87;
    }
label_86:
    if (eax <= 0x3f) {
        goto label_38;
    }
    if (eax < 0x41) {
        goto label_4;
    }
    if (eax <= 0x5f) {
        goto label_39;
    }
    ecx = rax - 0x61;
    if (ecx <= 0x1d) {
        goto label_39;
    }
    goto label_4;
    do {
label_71:
        goto label_40;
label_61:
        eax = 0;
        al = (*(rbx) != 0x2f) ? 1 : 0;
        goto label_3;
label_83:
        r8 = rbp + 0x10;
        edx = *((rbp + 0xc));
        goto label_30;
label_78:
        rbx = r15;
        goto label_41;
label_70:
    } while (ecx == 0);
    if (r14 > rbx) {
        goto label_88;
    }
    goto label_4;
label_42:
    rbx += 4;
    if (r14 <= rbx) {
        goto label_4;
    }
label_88:
    if (*(rbx) != 0x2f) {
        goto label_42;
    }
    ecx >>= 2;
    ecx &= 1;
    eax = fcn_00413e80 (r15, rbx + 4, r14, r8d, *((rsp + 0x18)));
    goto label_7;
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_72:
    if (r12d != 0) {
        goto label_43;
    }
    r11d = *(r15);
    goto label_43;
label_79:
    eax = *((rsp + 0x1c));
    if (eax != 0) {
        goto label_4;
    }
    goto label_9;
label_87:
    *(rsi) = 0;
    *((rsp + 0x28)) = r8;
    rax = wctype (rsp + 0x30);
    r8 = *((rsp + 0x28));
    rsi = rax;
    if (rax == 0) {
        goto label_4;
    }
    *((rsp + 0x28)) = r8;
    eax = iswctype (*(r15), rsi);
    r8 = *((rsp + 0x28));
    if (eax == 0) {
        rbp = r8 + 0xc;
        eax = *((r8 + 8));
        goto label_0;
    }
    r9 = r14;
    rbp = r14 + 0xc;
    rbx = r15;
    r14d = *((r14 + 0xc));
    rsi = r9 + 0x10;
    goto label_41;
label_85:
    r14d = 0x3a;
    goto label_31;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x414960 */
#include <stdint.h>
 
uint64_t fcn_00414960 (int64_t arg1, uint32_t arg3, size_t arg4, int64_t arg5, signed int64_t arg6, char * s) {
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_6dh;
    signed int64_t var_6ch;
    size_t var_68h;
    uint32_t var_60h;
    uint32_t var_58h;
    size_t var_50h;
    int64_t var_48h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_fh;
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rsi = s;
    r12d = r8d;
    rbx = rsi;
    *((rbp - 0x48)) = edi;
    *((rbp - 0x60)) = rdx;
    *((rbp - 0x68)) = rcx;
    *((rbp - 0x6c)) = r9d;
    *((rbp - 0x6d)) = r8b;
    *((rbp - 0x38)) = 0;
    rax = strlen (rsi);
    *((rbp - 0x50)) = rax;
    eax = *((rbx + 1));
    if (al == 0) {
        goto label_6;
    }
    edi = *((rbp - 0x48));
    r14 = rbx + 1;
    r15 = rbp - 0x38;
    edx = 0;
    *((rbp - 0x78)) = rbx;
    rsi = r14;
    rbx = r15;
    r13d = 0xc0000601;
    edi -= 0x3f;
    r15 = rdx;
    *((rbp - 0x58)) = edi;
    while (dl > 0x1f) {
        if (al == 0x7c) {
            if (r15 == 0) {
                goto label_18;
            }
        }
label_0:
        eax = *((r14 + 1));
        r14++;
label_4:
        if (al == 0) {
            goto label_6;
        }
label_1:
        if (al == 0x5b) {
            goto label_19;
        }
label_2:
        edx = rax - 0x21;
    }
    if (((r13 >> rdx) & 1) < 0) {
        if (*((r14 + 1)) == 0x28) {
            goto label_20;
        }
    }
    if (al != 0x29) {
        goto label_0;
    }
    rdx = r15 - 1;
    if (r15 == 0) {
        goto label_21;
    }
    eax = *((r14 + 1));
    r15 = rdx;
    r14++;
    if (al != 0) {
        goto label_1;
    }
    do {
label_6:
        eax = 0xffffffff;
label_10:
        rsp = rbp - 0x28;
        return rax;
label_20:
        r15++;
        r14++;
        eax = 0x28;
        goto label_2;
label_19:
        ecx = imp.__libc_start_main;
        if (ecx == 0) {
            goto label_22;
        }
label_7:
        eax = *((r14 + 1));
        if (al == 0x21) {
            goto label_23;
        }
        edx = imp.__libc_start_main;
        if (edx < 0) {
            if (al == 0x5e) {
                goto label_23;
            }
        }
        rcx = r14 + 1;
label_5:
        if (al != 0x5d) {
            goto label_24;
        }
        eax = *((rcx + 1));
        rcx++;
        r14 = rcx + 1;
        if (al == 0x5d) {
            goto label_25;
        }
label_3:
    } while (al == 0);
    eax = *(r14);
    rcx = r14;
label_24:
    r14 = rcx + 1;
    if (al != 0x5d) {
        goto label_3;
    }
label_25:
    eax = *((rcx + 1));
    goto label_4;
label_23:
    rcx = r14 + 2;
    eax = *((r14 + 2));
    goto label_5;
label_18:
    rdx = r14;
    rdx -= rsi;
    rax = rdx + 1;
    if (*((rbp - 0x58)) <= 1) {
        rax = *((rbp - 0x50));
    }
    rax += 0xf;
    rax &= 0xfffffffffffffff8;
    rcx = rax - 8;
    if (rcx > 0x1f37) {
        goto label_6;
    }
    rax += 0x17;
    rax &= 0xfffffffffffffff0;
    r15 = rsp + 0xf;
    r15 &= 0xfffffffffffffff0;
    rdi = r15 + 8;
    mempcpy ();
    rsi = r14 + 1;
    *(rax) = 0;
    eax = *((r14 + 1));
    r14 = rsi;
    *(r15) = 0;
    *(rbx) = r15;
    rbx = r15;
    r15d = 0;
    goto label_4;
label_22:
    *((rbp - 0x80)) = rsi;
    rax = getenv ("POSIXLY_CORRECT");
    rsi = *((rbp - 0x80));
    eax -= eax;
    eax |= 1;
    *(0x00625918) = eax;
    goto label_7;
label_21:
    eax = *((rbp - 0x48));
    rdx = r14;
    r15 = rbx;
    rbx = *((rbp - 0x78));
    rdx -= rsi;
    ecx = rax - 0x3f;
    rax = rdx + 1;
    if (ecx <= 1) {
        rax = *((rbp - 0x50));
    }
    rax += 0xf;
    rax &= 0xfffffffffffffff8;
    rcx = rax - 8;
    if (rcx > 0x1f37) {
        goto label_6;
    }
    rax += 0x17;
    rax &= 0xfffffffffffffff0;
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    rdi = rax + 8;
    r13 = rax;
    mempcpy ();
    *(r15) = r13;
    *(rax) = 0;
    rax = *((rbp - 0x38));
    *(r13) = 0;
    *((rbp - 0x50)) = rax;
    if (rax == 0) {
        goto label_26;
    }
    if (*((r14 - 1)) != 0x29) {
        goto label_27;
    }
    r13d = *((rbp - 0x48));
    r13d -= 0x21;
    if (r13d > 0x1f) {
        goto label_28;
    }
    /* switch table (32 cases) at 0x41f890 */
    ecx = (int32_t) r12b;
    eax = fcn_00414eb0 (r14, *((rbp - 0x60)), *((rbp - 0x68)), rcx, *((rbp - 0x6c)));
    if (eax == 0) {
        goto label_11;
    }
    eax = *((rbp - 0x6c));
    r15 = *((rbp - 0x60));
    *((rbp - 0x58)) = r14;
    r14 = *((rbp - 0x50));
    r12d = eax;
    r13d = eax;
    r12d &= 0xfffffffb;
    r13d &= 1;
    if (r13d != 0) {
        r12d = eax;
    }
    rax = rbx - 1;
    *((rbp - 0x50)) = r13d;
    rbx = *((rbp - 0x68));
    *((rbp - 0x78)) = rax;
label_15:
    if (r15 > rbx) {
        goto label_29;
    }
    eax = *((rbp - 0x6d));
    r13 = r15;
    *((rbp - 0x48)) = eax;
    goto label_30;
label_8:
    ecx = 0;
    if (*((r13 - 1)) == 0x2f) {
        eax = *((rbp - 0x6c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00414eb0 (*((rbp - 0x58)), r13, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
    ecx = 0;
    if (*((r13 - 1)) == 0x2f) {
        eax = *((rbp - 0x6c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
    eax = fcn_00414eb0 (*((rbp - 0x78)), r13, rbx, 0, r12d);
    if (eax == 0) {
        goto label_11;
    }
label_9:
    r14 = *((rbp - 0x38));
    do {
        r13++;
        if (rbx < r13) {
            goto label_29;
        }
label_30:
        eax = fcn_00414eb0 (r14 + 8, r15, r13, *((rbp - 0x48)), r12d);
    } while (eax != 0);
    if (r15 != r13) {
        goto label_8;
    }
    eax = fcn_00414eb0 (*((rbp - 0x58)), r15, rbx, *((rbp - 0x48)), r12d);
    if (eax != 0) {
        goto label_9;
    }
label_11:
    eax = 0;
    goto label_10;
    rdi = *((rbp - 0x68));
    if (*((rbp - 0x60)) > rdi) {
        goto label_16;
    }
    eax = *((rbp - 0x6c));
    r15 = *((rbp - 0x60));
    *((rbp - 0x48)) = r14;
    r12d = (int32_t) r12b;
    ebx = eax;
    r13 = r15;
    ebx &= 0xfffffffb;
    if ((al & 1) != 0) {
        ebx = eax;
    }
label_12:
    r14 = *((rbp - 0x50));
    do {
        eax = fcn_00414eb0 (r14 + 8, r15, r13, r12d, ebx);
        if (eax == 0) {
            goto label_31;
        }
        r14 = *(r14);
    } while (r14 != 0);
    if (r15 == r13) {
        goto label_32;
    }
    ecx = 0;
    if (*((r13 - 1)) == 0x2f) {
        eax = *((rbp - 0x6c));
        eax &= 5;
        cl = (eax == 5) ? 1 : 0;
    }
label_17:
    eax = fcn_00414eb0 (*((rbp - 0x48)), r13, *((rbp - 0x68)), 0, ebx);
    if (eax == 0) {
        goto label_11;
    }
label_31:
    r13++;
    if (*((rbp - 0x68)) >= r13) {
        goto label_12;
    }
    do {
label_16:
        eax = 1;
        goto label_10;
        r12d = (int32_t) r12b;
label_14:
        eax = *((rbp - 0x6c));
        r13 = *((rbp - 0x50));
        r15 = *((rbp - 0x68));
        ebx = eax;
        ebx &= 0xfffffffb;
        if ((al & 1) != 0) {
            ebx = eax;
        }
        goto label_33;
label_13:
        r13 = *(r13);
        *((rbp - 0x38)) = r13;
    } while (r13 == 0);
label_33:
    rax = strcat (r13 + 8, r14);
    eax = fcn_00414eb0 (rax, *((rbp - 0x60)), r15, r12d, ebx);
    if (eax != 0) {
        goto label_13;
    }
    eax = 0;
    goto label_10;
    r12d = (int32_t) r12b;
    eax = fcn_00414eb0 (r14, *((rbp - 0x60)), *((rbp - 0x68)), r12d, *((rbp - 0x6c)));
    if (eax != 0) {
        goto label_14;
    }
    eax = 0;
    goto label_10;
label_29:
    r14 = *(r14);
    *((rbp - 0x38)) = r14;
    if (r14 != 0) {
        goto label_15;
    }
    goto label_16;
label_32:
    ecx = r12d;
    goto label_17;
label_28:
    assert_fail ("! \"Invalid extended matching operator\", "lib/fnmatch_loop.c", 0x4ad, "ext_match");
label_27:
    assert_fail ("p[-1] == L_(')')", "lib/fnmatch_loop.c", 0x455, "ext_match");
label_26:
    return assert_fail ("list != NULL", "lib/fnmatch_loop.c", 0x454, "ext_match");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x414eb0 */
#include <stdint.h>
 
uint64_t fcn_00414eb0 (size_t arg1, uint32_t arg2, size_t arg3, int64_t arg4, signed int64_t arg5) {
    size_t var_8h;
    size_t var_10h;
    int64_t var_18h;
    signed int64_t var_20h;
    signed int64_t var_24h;
    uint32_t var_28h;
    int64_t var_2ch;
    char * property;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
label_7:
    rax = rdi + 1;
    r14 = rsi;
    r12d = *(rdi);
    *((rsp + 8)) = rdx;
    *((rsp + 0x20)) = r8d;
    *((rsp + 0x10)) = rax;
    if (r12b == 0) {
        goto label_43;
    }
    ebx = r8d;
    r8d &= 5;
    r13 = rdi;
    *((rsp + 0x28)) = r8d;
    r15d = ecx;
    ebp &= 2;
    ebx &= 0x10;
label_1:
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        r12d = *((rax + r12*4));
    }
    eax = r12 - 0x21;
    if (al > 0x3b) {
        goto label_2;
    }
    eax = (int32_t) al;
    /* switch table (60 cases) at 0x41f990 */
    if (ebp != 0) {
        goto label_44;
    }
    r12d = *((r13 + 1));
    r15 = r13 + 2;
    *((rsp + 0x10)) = r15;
    if (r12b == 0) {
        goto label_4;
    }
    if (ebx != 0) {
        goto label_45;
    }
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    eax = (int32_t) r12b;
label_29:
    edx = *(r14);
    r13 = *((rsp + 0x10));
label_8:
    if (edx != eax) {
        goto label_4;
    }
label_37:
    r15d = 0;
    goto label_25;
    esi = imp.__libc_start_main;
    if (esi == 0) {
        goto label_46;
    }
label_28:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    r12d = *(r14);
    if (r12b == 0x2e) {
        goto label_47;
    }
    if (r12b == 0x2f) {
        if ((*((rsp + 0x20)) & 1) != 0) {
            goto label_4;
        }
    }
label_26:
    eax = *((r13 + 1));
    if (al == 0x21) {
        goto label_48;
    }
    ecx = imp.__libc_start_main;
    if (ecx < 0) {
        if (al == 0x5e) {
            goto label_48;
        }
    }
    *((rsp + 0x2c)) = 0;
    r15 = *((rsp + 0x10));
label_24:
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        r12d = *((rax + r12*4));
    }
    eax = (int32_t) r12b;
    r13 = r15 + 1;
    r15d = *(r15);
    *((rsp + 0x24)) = eax;
    while (sil != 0x2d) {
        if (r12b == r15b) {
            goto label_49;
        }
        r15d = (int32_t) sil;
        r13 = rax;
label_0:
        if (r15b == 0x5d) {
            goto label_50;
        }
label_12:
        if (ebp == 0) {
            if (r15b == 0x5c) {
                goto label_51;
            }
        }
        if (r15b == 0x5b) {
            goto label_52;
        }
        if (r15b == 0) {
            goto label_53;
        }
        esi = *(r13);
label_10:
        if (ebx != 0) {
            *((rsp + 0x18)) = sil;
            rax = ctype_tolower_loc ();
            esi = *((rsp + 0x18));
            rax = *(rax);
            r15d = *((rax + r15*4));
        }
label_15:
        rax = r13 + 1;
    }
    edx = *((r13 + 1));
    if (dl == 0x5d) {
        goto label_54;
    }
    if (dl == 0) {
        goto label_54;
    }
    ecx = (int32_t) r15b;
label_14:
    rax = r13 + 2;
    if (ebp == 0) {
        if (dl == 0x5c) {
            goto label_55;
        }
    }
label_23:
    if (dl == 0) {
        goto label_4;
    }
    esi = *(rax);
    r13 = rax + 1;
    r15d = (int32_t) sil;
    if (ecx > *((rsp + 0x24))) {
        goto label_0;
    }
    if (r12b > dl) {
        goto label_0;
    }
label_19:
    r13 = rax;
label_22:
    rax = r13 + 1;
    do {
label_13:
        r8 = rax;
        ecx = esi;
        if (sil == 0) {
            goto label_4;
        }
        r15b = (sil == 0x5c) ? 1 : 0;
        dl = (ebp == 0) ? 1 : 0;
        r15b &= dl;
        if (r15b != 0) {
            goto label_56;
        }
        if (sil == 0x5b) {
            goto label_57;
        }
label_36:
        if (cl == 0x5d) {
            goto label_58;
        }
        r13 = r8;
        esi = *(r8);
        rax = r13 + 1;
    } while (1);
    if ((*((rsp + 0x20)) & 0x20) != 0) {
        goto label_59;
    }
label_34:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    eax = *(r14);
    if (al == 0x2f) {
        goto label_60;
    }
    al = (al == 0x2e) ? 1 : 0;
    r15b &= al;
    if (r15b != 0) {
        goto label_4;
    }
    r13 = *((rsp + 0x10));
    goto label_25;
    if (*((rsp + 0x28)) == 5) {
        goto label_61;
    }
label_2:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
label_38:
    eax = *(r14);
    r13 = rax;
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        eax = *((rax + r13*4));
    }
    if (eax != r12d) {
        goto label_4;
    }
label_27:
    r13 = *((rsp + 0x10));
    r15d = 0;
label_25:
    r12d = *(r13);
    rax = r13 + 1;
    r14++;
    *((rsp + 0x10)) = rax;
    if (r12b != 0) {
        goto label_1;
    }
label_43:
    if (*((rsp + 8)) == r14) {
        goto label_32;
    }
    if ((*((rsp + 0x20)) & 8) != 0) {
        goto label_62;
    }
label_4:
    eax = 1;
label_3:
    return rax;
    if ((*((rsp + 0x20)) & 0x20) == 0) {
        goto label_2;
    }
    if (*((r13 + 1)) != 0x28) {
        goto label_2;
    }
    edi = (int32_t) r12b;
    r8d = (int32_t) r15b;
    eax = fcn_00414960 (rdi, *((rsp + 0x10)), r14, *((rsp + 8)), r8, *((rsp + 0x20)));
    if (eax == 0xffffffff) {
        goto label_2;
    }
    goto label_3;
    eax = *((rsp + 0x20));
    eax &= 0x20;
    *((rsp + 0x24)) = eax;
    if (eax != 0) {
        goto label_63;
    }
label_35:
    if (r14 == *((rsp + 8))) {
        goto label_64;
    }
    if (*(r14) != 0x2e) {
        goto label_64;
    }
    if (r15b != 0) {
        goto label_4;
    }
label_64:
    r8d = *((r13 + 1));
    r9 = r13 + 2;
    if (r8b != 0x2a) {
        if (r8b != 0x3f) {
            goto label_65;
        }
    }
    r10d = *((rsp + 0x24));
    r13d = *((rsp + 0x20));
    r12b = (r10d != 0) ? 1 : 0;
    r13d &= 1;
    do {
label_5:
        if (*(r9) == 0x28) {
            if (r12b != 0) {
                goto label_66;
            }
        }
label_17:
        if (r8b == 0x3f) {
            goto label_67;
        }
label_9:
        rax = r9;
label_16:
        r8d = *(rax);
        r9 = rax + 1;
    } while (r8b == 0x3f);
    if (r8b == 0x2a) {
        goto label_5;
    }
label_65:
    ecx = *((rsp + 0x20));
    ecx &= 1;
    if (r8b == 0) {
        goto label_68;
    }
    r13 = *((rsp + 8));
    esi = ecx;
    *((rsp + 0x28)) = r8b;
    esi = -esi;
    *((rsp + 0x18)) = r9;
    esi &= 0x2f;
    *((rsp + 0x10)) = ecx;
    rdx -= r14;
    rax = fcn_00416f00 (r14, esi, r13);
    r8d = *((rsp + 0x28));
    ecx = *((rsp + 0x10));
    r12 = rax;
    r9 = *((rsp + 0x18));
    if (rax == 0) {
        r12 = r13;
    }
    if (r8b == 0x5b) {
        goto label_69;
    }
    edi = *((rsp + 0x24));
    if (edi != 0) {
        goto label_70;
    }
label_31:
    if (r8b == 0x2f) {
        goto label_71;
    }
    if (ecx == 0) {
        goto label_72;
    }
label_40:
    r15d = (int32_t) r15b;
    if (r8b == 0x5c) {
        goto label_73;
    }
label_42:
    if (ebx != 0) {
        *((rsp + 0x18)) = r8b;
        *((rsp + 0x10)) = r9;
        rax = ctype_tolower_loc ();
        r8d = *((rsp + 0x18));
        r9 = *((rsp + 0x10));
        rax = *(rax);
        r8d = *((rax + r8*4));
    }
    rax = r9 - 1;
    *((rsp + 0x10)) = rax;
    if (r12 <= r14) {
        goto label_4;
    }
    ebp = (int32_t) r8b;
    r13d = r15d;
    goto label_74;
label_6:
    r14++;
    r13d = 0;
    if (r12 == r14) {
        goto label_4;
    }
label_74:
    eax = *(r14);
    r15d = eax;
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        edx = (int32_t) r15b;
        rax = *(rax);
        eax = *((rax + rdx*4));
    }
    if (eax != ebp) {
        goto label_6;
    }
    eax = fcn_00414eb0 (*((rsp + 0x10)), r14, *((rsp + 8)), r13d, *((rsp + 0x20)));
    goto label_7;
    if (eax != 0) {
        goto label_6;
    }
label_32:
    eax = 0;
    goto label_3;
label_44:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    if (ebx == 0) {
        goto label_75;
    }
    rax = ctype_tolower_loc ();
    r13 = *((rsp + 0x10));
    rdx = *(rax);
    eax = 0x5c;
label_30:
    esi = *(r14);
    edx = *((rdx + rsi*4));
    goto label_8;
label_67:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    if (*(r14) == 0x2f) {
        goto label_76;
    }
label_18:
    r14++;
    goto label_9;
label_52:
    esi = *(r13);
    if (sil != 0x3a) {
        goto label_10;
    }
    r15 = r13;
    edx = 0;
    goto label_77;
label_11:
    esi = rax - 0x61;
    if (sil > 0x18) {
        goto label_78;
    }
    rdx++;
    r15 = rcx;
    *((rsp + rdx + 0x2f)) = al;
    if (rdx == 0x100) {
        goto label_4;
    }
label_77:
    eax = *((r15 + 1));
    rcx = r15 + 1;
    if (al != 0x3a) {
        goto label_11;
    }
    if (*((rcx + 1)) == 0x5d) {
        goto label_79;
    }
label_78:
    rax = r13 + 1;
    if (r12b == 0x5b) {
        goto label_49;
    }
    r13 = rax;
    r15d = 0x3a;
    goto label_12;
label_54:
    if (r12b == r15b) {
        goto label_13;
    }
    ecx = (int32_t) r15b;
    if (dl != 0x5d) {
        goto label_14;
    }
    esi = 0x5d;
    r13 = rax;
    r15d = 0x2d;
    goto label_10;
label_51:
    r15d = *(r13);
    if (r15b == 0) {
        goto label_4;
    }
    if (ebx != 0) {
        rax = ctype_tolower_loc ();
        rax = *(rax);
        r15d = *((rax + r15*4));
    }
    esi = *((r13 + 1));
    r13++;
    goto label_15;
label_66:
    rdi = r9;
    *((rsp + 0x10)) = r9;
    *((rsp + 0x18)) = r8b;
    rax = fcn_004137f0 (rdi);
    r9 = *((rsp + 0x10));
    if (rax != r9) {
        goto label_16;
    }
    r8d = *((rsp + 0x18));
    goto label_17;
label_76:
    if (r13d == 0) {
        goto label_18;
    }
    goto label_4;
label_57:
    esi = *((r13 + 1));
    if (sil == 0x3a) {
        goto label_80;
    }
    if (sil == 0x3d) {
        goto label_81;
    }
    r13 += 2;
    if (sil != 0x2e) {
        goto label_19;
    }
    goto label_82;
label_21:
    if (*((rdx + 1)) == 0x5d) {
        goto label_83;
    }
label_20:
    r13 = rdx;
label_82:
    eax = *((r13 + 1));
    rdx = r13 + 1;
    if (al == 0) {
        goto label_4;
    }
    if (al != 0x2e) {
        goto label_20;
    }
    goto label_21;
label_56:
    if (*((r13 + 1)) == 0) {
        goto label_4;
    }
    esi = *((r13 + 2));
    r13 += 2;
    goto label_22;
label_55:
    rax = r13 + 3;
    edx = *((r13 + 2));
    goto label_23;
label_48:
    r15 = r13 + 2;
    *((rsp + 0x2c)) = 1;
    goto label_24;
label_61:
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    if (*(r14) != 0x2f) {
        goto label_4;
    }
    r13 = *((rsp + 0x10));
    r15d = 1;
    goto label_25;
label_47:
    if (r15b == 0) {
        goto label_26;
    }
    goto label_4;
label_60:
    if ((*((rsp + 0x20)) & 1) == 0) {
        goto label_27;
    }
    goto label_4;
label_46:
    rax = getenv ("POSIXLY_CORRECT");
    eax -= eax;
    eax |= 1;
    *(0x00625918) = eax;
    goto label_28;
label_75:
    eax = 0x5c;
    goto label_29;
label_45:
    rax = ctype_tolower_loc ();
    rdx = *(rax);
    eax = (int32_t) r12b;
    eax = *((rdx + rax*4));
    if (r14 == *((rsp + 8))) {
        goto label_4;
    }
    eax = (int32_t) al;
    r13 = r15;
    goto label_30;
label_70:
    eax = r8 - 0x21;
    if (al > 0x1f) {
        goto label_31;
    }
    edx = 0x80000401;
    if (((rdx >> rax) & 1) >= 0) {
        goto label_31;
    }
    if (*(r9) != 0x28) {
        goto label_31;
    }
label_69:
    edi = *((rsp + 0x20));
    rbx = r9 - 1;
    eax = edi;
    eax &= 0xfffffffb;
    if (ecx != 0) {
        eax = edi;
    }
    r13d = eax;
    if (r12 <= r14) {
        goto label_4;
    }
    rbp = *((rsp + 8));
label_33:
    ecx = (int32_t) r15b;
    eax = fcn_00414eb0 (rbx, r14, rbp, rcx, r13d);
    goto label_7;
    if (eax == 0) {
        goto label_32;
    }
    r14++;
    r15d = 0;
    if (r12 != r14) {
        goto label_33;
    }
    goto label_4;
label_59:
    if (*((r13 + 1)) != 0x28) {
        goto label_34;
    }
    r8d = (int32_t) r15b;
    eax = fcn_00414960 (0x3f, *((rsp + 0x10)), r14, *((rsp + 8)), r8, *((rsp + 0x20)));
    if (eax == 0xffffffff) {
        goto label_34;
    }
    goto label_3;
label_63:
    if (*((r13 + 1)) != 0x28) {
        goto label_35;
    }
    r8d = (int32_t) r15b;
    eax = fcn_00414960 (0x2a, *((rsp + 0x10)), r14, *((rsp + 8)), r8, *((rsp + 0x20)));
    if (eax != 0xffffffff) {
        goto label_3;
    }
    goto label_35;
label_81:
    if (*((r13 + 2)) == 0) {
        goto label_4;
    }
    if (*((r13 + 3)) != 0x3d) {
        goto label_4;
    }
    if (*((r13 + 4)) != 0x5d) {
        goto label_4;
    }
    r8 = r13 + 6;
    ecx = *((r13 + 5));
    goto label_36;
label_50:
    edx = *((rsp + 0x2c));
    if (edx != 0) {
        goto label_37;
    }
    goto label_4;
label_53:
    r12d = 0x5b;
    goto label_38;
label_68:
    if (ecx == 0) {
        goto label_32;
    }
    if ((*((rsp + 0x20)) & 8) != 0) {
        goto label_32;
    }
    rdx -= r14;
    rax = fcn_00416f00 (r14, 0x2f, *((rsp + 8)));
    al = (rax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_49:
    esi = *(r13);
    goto label_13;
label_80:
    rdx = r13 + 2;
    esi = *((r13 + 2));
    r13 += 0x101;
    goto label_84;
label_39:
    esi -= 0x61;
    if (sil > 0x18) {
        goto label_85;
    }
    rdx++;
    esi = *(rdx);
    if (r13 == rdx) {
        goto label_4;
    }
label_84:
    if (sil != 0x3a) {
        goto label_39;
    }
    if (*((rdx + 1)) != 0x5d) {
        goto label_19;
    }
    r8 = rdx + 3;
    ecx = *((rdx + 2));
    goto label_36;
label_79:
    *((rsp + 0x18)) = rcx;
    *((rsp + rdx + 0x30)) = 0;
    rax = wctype (rsp + 0x30);
    rcx = *((rsp + 0x18));
    r13 = rax;
    if (rax == 0) {
        goto label_4;
    }
    edi = *(r14);
    *((rsp + 0x18)) = rcx;
    eax = btowc (rdi);
    eax = iswctype (eax, r13);
    rcx = *((rsp + 0x18));
    if (eax != 0) {
        goto label_86;
    }
    r13 = r15 + 4;
    r15d = *((rcx + 2));
    goto label_0;
    do {
label_72:
        goto label_40;
label_62:
        eax = 0;
        al = (*(r14) != 0x2f) ? 1 : 0;
        goto label_3;
label_83:
        r8 = r13 + 4;
        ecx = *((r13 + 3));
        goto label_36;
label_71:
    } while (ecx == 0);
    rax = *((rsp + 8));
    if (rax > r14) {
        goto label_87;
    }
    goto label_4;
label_41:
    r14++;
    if (rax == r14) {
        goto label_4;
    }
label_87:
    if (*(r14) != 0x2f) {
        goto label_41;
    }
    ecx >>= 2;
    ecx &= 1;
    eax = fcn_00414eb0 (r9, r14 + 1, *((rsp + 8)), r8d, *((rsp + 0x20)));
    goto label_7;
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    goto label_3;
label_73:
    if (ebp != 0) {
        goto label_42;
    }
    r8d = *(r9);
    goto label_42;
label_58:
    eax = *((rsp + 0x2c));
    if (eax != 0) {
        goto label_4;
    }
    r13 = r8;
    goto label_25;
label_86:
    r13 = r15 + 3;
    esi = *((r15 + 3));
    rax = r15 + 4;
    goto label_13;
label_85:
    esi = 0x3a;
    r13 = rax;
    goto label_22;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4159a0 */
#include <stdint.h>
 
uint64_t fcn_004159a0 (char * * arg1, char * arg2, int64_t arg3) {
    int64_t var_54h;
    char * s;
    char * * src;
    mbstate_t * ps;
    int64_t var_28h;
    wchar_t * dst;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12d = edx;
    *((rbp - 0x48)) = rdi;
    *((rbp - 0x50)) = rsi;
    rax = ctype_get_mb_cur_max ();
    while (rax == 0) {
label_0:
        rbx = *((rbp - 0x50));
        strlen (*((rbp - 0x50)));
        ecx = r12d;
        ecx >>= 2;
        ecx &= 1;
        fcn_00414eb0 (*((rbp - 0x48)), rbx, rbx + rax, ecx, r12d);
label_1:
        rsp = rbp - 0x28;
        return rax;
        *((rbp - 0x38)) = 0;
        rax = mbsrtowcs (0, rbp - 0x48, 0, rbp - 0x38);
        rax++;
        rbx = rax;
    }
    eax = mbsinit (rbp - 0x38);
    if (eax == 0) {
        goto label_2;
    }
    rax = mbsrtowcs (0, rbp - 0x50, 0, rbp - 0x38);
    rax++;
    r13 = rax;
    if (rax == 0) {
        goto label_0;
    }
    eax = mbsinit (rbp - 0x38);
    if (eax == 0) {
        goto label_3;
    }
    rax = rbx;
    rax += r13;
    if (rax < 0) {
        goto label_4;
    }
    rdx = 0x3fffffffffffffff;
    if (rax > rdx) {
        goto label_4;
    }
    rdi = rax*4;
    if (rax > 0x7cf) {
        goto label_5;
    }
    rdi += 0x17;
    rdi &= 0xfffffffffffffff0;
    r14 = rsp + 0xf;
    r14 &= 0xfffffffffffffff0;
    r15 = r14 + rbx*4;
    mbsrtowcs (r14, rbp - 0x48, rbx, rbp - 0x38);
    eax = mbsinit (rbp - 0x38);
    if (eax == 0) {
        goto label_6;
    }
    mbsrtowcs (r15, rbp - 0x50, r13, rbp - 0x38);
    ecx = r12d;
    ecx >>= 2;
    ecx &= 1;
    fcn_00413e80 (r14, r15, r15 + r13*4 - 4, ecx, r12d);
    goto label_1;
    do {
label_4:
        errno_location ();
        *(rax) = 0xc;
        eax = 0xffffffff;
        goto label_1;
label_5:
        rax = malloc (rdi);
        r14 = rax;
    } while (rax == 0);
    r15 = rax + rbx*4;
    mbsrtowcs (rax, rbp - 0x48, rbx, rbp - 0x38);
    eax = mbsinit (rbp - 0x38);
    if (eax != 0) {
        mbsrtowcs (r15, rbp - 0x50, r13, rbp - 0x38);
        ecx = r12d;
        ecx >>= 2;
        ecx &= 1;
        eax = fcn_00413e80 (r14, r15, r15 + r13*4 - 4, ecx, r12d);
        *((rbp - 0x54)) = eax;
        free (r14);
        eax = *((rbp - 0x54));
        goto label_1;
    }
label_6:
    assert_fail ("mbsinit (&ps)", "lib/fnmatch.c", 0x147, "gnu_fnmatch");
label_3:
    assert_fail ("mbsinit (&ps)", "lib/fnmatch.c", 0x12d, "gnu_fnmatch");
label_2:
    return assert_fail ("mbsinit (&ps)", "lib/fnmatch.c", 0x129, "gnu_fnmatch");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x415be0 */
#include <stdint.h>
 
uint64_t fcn_00415be0 (void * arg1, uint32_t arg2) {
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
    esi = 0x41d794;
    *((rbx - 1)) = 0;
    edi = 1;
    eax = lxstat ();
    if (eax < 0) {
        goto label_14;
    }
    r15 = *((rsp + 0x60));
    rdx = rsp + 0x60;
    esi = 0x41b371;
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
    eax = openat (r15d, 0x41d793, 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4160b0 */
#include <stdint.h>
 
uint64_t fcn_004160b0 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x416190 */
#include <stdint.h>
 
int64_t fcn_00416190 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4167b0 */
#include <stdint.h>
 
uint64_t fcn_004167b0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x41f171;
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
            fcn_004160b0 (r12, rbx);
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
        fcn_004160b0 (r12, rbx);
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
    eax = fcn_00416190 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00416190 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x416d80 */
#include <stdint.h>
 
int32_t fcn_00416d80 (int64_t arg_10h) {
    eax = *(0x0062463c);
    *(0x00625920) = eax;
    eax = *(0x00624638);
    *(0x00625924) = eax;
    eax = *((rsp + 0x10));
    fcn_004167b0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0062463c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00625970) = rdx;
    edx = imp.__libc_start_main;
    *(0x00624634) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x416e00 */
#include <stdint.h>
 
void fcn_00416e00 (void) {
    r9d = 0;
    fcn_00416d80 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x416e80 */
#include <stdint.h>
 
uint64_t fcn_00416e80 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040c190 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x416f00 */
#include <stdint.h>
 
int64_t fcn_00416f00 (uint32_t arg1, int64_t arg2, size_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417050 */
#include <stdint.h>
 
int64_t fcn_00417050 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x38));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
        rax = void (*rax)() ();
    }
    rdi = rsi;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417070 */
#include <stdint.h>
 
int64_t fcn_00417070 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = *((rdi + 0x40));
    if ((*((rdi + 0x50)) & 1) != 0) {
        rdi = *((rdi + 0x48));
        rax = void (*rax)() ();
    }
    rdi = rsi;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417120 */
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
        rax = fcn_00417050 (rdi, rsi);
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
    rax = uint64_t (*obstack_alloc_failed_handler)() ();
    *((rdi + 0x50)) &= 0xfe;
    *((rdi + 0x38)) = rcx;
    *((rdi + 0x40)) = r8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417140 */
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
    return void (*0x417090)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417160 */
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
    rax = fcn_00417050 (rdi, rbx);
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
        fcn_00417070 (r12, rbp);
    }
label_0:
    uint64_t (*obstack_alloc_failed_handler)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417260 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4172a0 */
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
        rax = fcn_00417070 (rbx, rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417310 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417340 */
#include <stdint.h>
 
uint32_t fcn_00417340 (char * value) {
    rdi = value;
    if (*((rdi + 8)) != 0) {
        goto label_0;
    }
    edi = 0x41b360;
    eax = unsetenv ();
    do {
        edx = 0;
        if (eax == 0) {
            tzset ();
            edx = 1;
        }
        eax = 1;
        return eax;
label_0:
        setenv (0x41b360, rdi + 9, 1);
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417390 */
#include <stdint.h>
 
void fcn_00417390 (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    do {
        rbx = *(rdi);
        free (rdi);
        rdi = rbx;
    } while (rbx != 0);
    return;
label_0:
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4173c0 */
#include <stdint.h>
 
uint64_t fcn_004173c0 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = errno_location ();
    rbx = rax;
    r13d = *(rax);
    eax = fcn_00417340 (r12);
    if (al == 0) {
        r13d = *(rbx);
    }
    fcn_00417390 (r12);
    *(rbx) = r13d;
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417410 */
#include <stdint.h>
 
uint64_t fcn_00417410 (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    r12 = rdi;
    strlen (rdi);
    edi = 0x76;
    rbp = rax + 1;
    if (rbp >= 0x76) {
        rdi = rbp;
    }
    rdi += 0x11;
    rdi &= 0xfffffffffffffff8;
    rax = malloc (rdi);
    rbx = rax;
    if (rax == 0) {
        goto label_1;
    }
    *(rax) = 0;
    eax = 1;
    *((rbx + 8)) = ax;
    memcpy (rbx + 9, r12, rbp);
    *((rbx + rbp + 9)) = 0;
    do {
label_1:
        rax = rbx;
        return rax;
label_0:
        rax = malloc (0x80);
        rbx = rax;
    } while (rax == 0);
    edx = 0;
    *(rbx) = 0;
    rax = rbx;
    *((rbx + 8)) = dx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4174a0 */
#include <stdint.h>
 
int64_t fcn_004174a0 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = *((rsi + 0x30));
    if (r12 == 0) {
        goto label_4;
    }
    r13 = rsi;
    if (rsi <= r12) {
        rdx = rsi + 0x38;
        eax = 1;
        if (r12 < rdx) {
            goto label_2;
        }
    }
    rbx = rbp + 9;
    if (*(r12) == 0) {
        goto label_5;
    }
    do {
label_0:
        eax = strcmp (rbx, r12);
        if (eax == 0) {
            goto label_3;
        }
label_1:
        if (*(rbx) == 0) {
            r14 = rbp + 9;
            if (r14 != rbx) {
                goto label_6;
            }
            if (*((rbp + 8)) == 0) {
                goto label_7;
            }
        }
        strlen (rbx);
        rbx = rbx + rax + 1;
    } while (*(rbx) != 0);
    rax = *(rbp);
    if (rax == 0) {
        goto label_0;
    }
    rbx = rax + 9;
    eax = strcmp (rbx, r12);
    if (eax != 0) {
        goto label_1;
    }
    do {
label_3:
        *((r13 + 0x30)) = rbx;
        eax = 1;
label_2:
        return rax;
label_5:
        ebx = 0x41b08a;
    } while (1);
label_4:
    eax = 1;
    return rax;
label_6:
    strlen (r12);
    r15 = rax + 1;
    rax = rbx;
    rax -= r14;
    rdx = rax;
    rdx = ~rdx;
    if (rdx < r15) {
        errno_location ();
        *(rax) = 0xc;
        eax = 0;
        goto label_2;
label_7:
        eax = strlen (r12);
        r15 = rax + 1;
        eax = 0;
    }
    rax += r15;
    if (rax <= 0x76) {
        memcpy (rbx, r12, r15);
        *((rbx + r15)) = 0;
        goto label_3;
    }
    rax = fcn_00417410 (r12);
    *(rbp) = rax;
    if (rax != 0) {
        *((rax + 8)) = 0;
        rbx = rax + 9;
        goto label_3;
    }
    eax = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417620 */
#include <stdint.h>
 
uint64_t fcn_00417620 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    rax = getenv (0x41b360);
    if (rax == 0) {
        goto label_1;
    }
    while (eax != 0) {
label_0:
        rax = fcn_00417410 (rbp);
        rbx = rax;
        if (rax != 0) {
            al = fcn_00417340 (r12);
            if (al == 0) {
                goto label_2;
            }
        }
        rax = rbx;
        return rax;
        ebx = 1;
        eax = strcmp (r12 + 9, rax);
    }
    rax = rbx;
    return rax;
label_1:
    ebx = 1;
    if (*((r12 + 8)) != 0) {
        goto label_0;
    }
    rax = rbx;
    return rax;
label_2:
    rax = errno_location ();
    r12d = *(rax);
    if (rbx != 1) {
        fcn_00417390 (rbx);
    }
    ebx = 0;
    *(rbp) = r12d;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4176f0 */
#include <stdint.h>
 
uint64_t fcn_004176f0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rsi;
    if (rdi == 0) {
        goto label_1;
    }
    rbx = rdx;
    rax = fcn_00417620 (rdi);
    r13 = rax;
    if (rax == 0) {
        goto label_0;
    }
    rsi = rbx;
    rdi = r12;
    rax = localtime_r ();
    if (rax == 0) {
        goto label_2;
    }
    al = fcn_004174a0 (rbp, rbx);
    if (al == 0) {
        goto label_2;
    }
    while (al != 0) {
        rax = rbx;
        return rax;
label_2:
        if (r13 != 1) {
            eax = fcn_004173c0 (r13);
        }
label_0:
        eax = 0;
        return rax;
        al = fcn_004173c0 (r13);
    }
    goto label_0;
label_1:
    rdi = r12;
    rsi = rdx;
    return gmtime_r ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4177a0 */
#include <stdint.h>
 
uint64_t fcn_004177a0 (tm * arg1, char * arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_24h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    if (rdi == 0) {
        goto label_3;
    }
    rax = fcn_00417620 (rdi);
    r12 = rax;
    if (rax == 0) {
        goto label_4;
    }
    rax = fcn_004186f0 (rbx);
    *((rsp + 8)) = rax;
    if (rax == -1) {
        goto label_5;
    }
label_1:
    al = fcn_004174a0 (rbp, rbx);
    if (al != 0) {
        goto label_0;
    }
    *((rsp + 8)) = 0xffffffffffffffff;
    do {
label_0:
        if (r12 != 1) {
            al = fcn_004173c0 (r12);
            if (al == 0) {
                goto label_4;
            }
        }
        rax = *((rsp + 8));
label_2:
        return rax;
label_5:
        rsi = rsp + 0x10;
        rdi = rsp + 8;
        rax = localtime_r ();
    } while (rax == 0);
    eax = *((rbx + 0x20));
    edx = *((rsp + 0x30));
    sil = (eax == 0) ? 1 : 0;
    cl = (edx == 0) ? 1 : 0;
    if (sil == cl) {
        goto label_6;
    }
    if (eax < 0) {
        goto label_6;
    }
    if (edx >= 0) {
        goto label_0;
    }
label_6:
    eax = *((rbx + 0x10));
    edx = *((rbx + 0x14));
    eax ^= *((rsp + 0x20));
    edx ^= *((rsp + 0x24));
    eax |= edx;
    edx = *((rbx + 0xc));
    edx ^= *((rsp + 0x1c));
    eax |= edx;
    edx = *((rbx + 8));
    edx ^= *((rsp + 0x18));
    eax |= edx;
    edx = *((rbx + 4));
    edx ^= *((rsp + 0x14));
    eax |= edx;
    edx = *(rbx);
    edx ^= *((rsp + 0x10));
    eax |= edx;
    if (eax == 0) {
        goto label_1;
    }
    goto label_0;
label_3:
    fcn_004178c0 (rsi);
    return rax;
label_4:
    rax = 0xffffffffffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4178c0 */
#include <stdint.h>
 
void fcn_004178c0 (int64_t arg1) {
    rdi = arg1;
    *((rdi + 0x20)) = 0;
    edx = 0x625958;
    esi = imp.gmtime_r;
    return void (*0x4182b0)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4178e0 */
#include <stdint.h>
 
uint64_t fcn_004178e0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00417f10 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417940 */
#include <stdint.h>
 
uint64_t fcn_00417940 (void) {
    rax = fcn_0040b810 (rdi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00412bd0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417960 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_00417960 (int64_t arg1) {
    rdi = arg1;
    rcx = *(rdi);
    if (cl == 0) {
        goto label_0;
    }
    eax = 0;
    do {
        rax = rotate_left64 (rax, 9);
        rdi++;
        rax += rcx;
        rcx = *(rdi);
    } while (cl != 0);
    edx = 0;
    rax = rdx:rax / rsi;
    rdx = rdx:rax % rsi;
    rax = rdx;
    return rax;
label_0:
    edx = 0;
    rax = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4179a0 */
#include <stdint.h>
 
uint64_t fcn_004179a0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x41b08a;
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
        r15d = 0x41b08a;
label_2:
        *(0x00625960) = r15;
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
        r15d = 0x41b08a;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x41b38e;
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
    fcn_00417f10 (rbx);
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
        r15d = 0x41b08a;
        rbx = rax;
        free (r15);
        fcn_00417f10 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417f10 */
#include <stdint.h>
 
uint64_t fcn_00417f10 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00417f90 (rbx);
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
    void (*0x402890)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417f90 */
#include <stdint.h>
 
uint32_t fcn_00417f90 (int64_t arg1) {
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
    void (*0x402bd0)() ();
label_1:
    fcn_00417fd0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x417fd0 */
#include <stdint.h>
 
int64_t fcn_00417fd0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x402cf0)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x418030 */
#include <stdint.h>
 
uint64_t fcn_00418030 (int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r10 = rdi;
    eax = 0;
    r11 = (int64_t) edx;
    r10 >>= 2;
    rcx = (int64_t) ecx;
    r8 = (int64_t) r8d;
    rbx = (int64_t) r9d;
    r10d += 0x1db;
    r12 = rbx;
    al = ((dil & 3) == 0) ? 1 : 0;
    r12 >>= 2;
    r10d -= eax;
    eax = 0;
    r12d += 0x1db;
    r9d &= 3;
    r9d = 0x51eb851f;
    al = (r9d == 0) ? 1 : 0;
    rdi -= rbx;
    r12d -= eax;
    eax = r10d;
    edx:eax = eax * r9d;
    eax = r10d;
    eax >>= 0x1f;
    edx >>= 3;
    edx = r10d;
    r10d -= r12d;
    ebp -= eax;
    eax = rbp + rbp*4;
    eax = rax * 5;
    edx -= eax;
    eax = edx;
    eax >>= 0x1f;
    ebp -= eax;
    eax = r12d;
    edx:eax = eax * r9d;
    eax = r12d;
    r9d = r12d;
    eax >>= 0x1f;
    edx >>= 3;
    edx -= eax;
    eax = rdx * 5;
    eax = rax * 5;
    r9d -= eax;
    eax = r9d;
    eax >>= 0x1f;
    edx -= eax;
    eax = ebp;
    eax -= edx;
    rdx = (int64_t) edx;
    r10d -= eax;
    rdx >>= 2;
    eax = r10d;
    r10 = (int64_t) ebp;
    r10 >>= 2;
    r10d -= edx;
    rdx = *((rsp + 0x28));
    r10d += eax;
    rax = rdi * 9;
    rax = rdi + rax*8;
    r10 = (int64_t) r10d;
    rax *= 5;
    rsi += rax;
    rax = *((rsp + 0x20));
    rsi -= rax;
    rsi += r10;
    rax = rsi * 3;
    rax = r11 + rax*8;
    rax -= rdx;
    rdx = rax;
    rdx <<= 4;
    rdx -= rax;
    rax = rcx + rdx*4;
    rdx = *((rsp + 0x30));
    rax -= rdx;
    rdx = rax;
    rdx <<= 4;
    rdx -= rax;
    rax = r8 + rdx*4;
    rdx = *((rsp + 0x38));
    r12 = rbx;
    rax -= rdx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x418150 */
#include <stdint.h>
 
int64_t fcn_00418150 (int64_t arg_10h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = *((rsp + 0x10));
    rbx = r9;
    if (rax != 0) {
        r9d = *(rax);
        r9d = *((rax + 4));
        r9d = *((rax + 8));
        r9d = *((rax + 0x1c));
        rax = fcn_00418030 (rdi, rsi, rdx, rcx, r8, *((rax + 0x14)));
        rax += rbx;
        if (rax overflow 0) {
            goto label_0;
        }
        return rax;
    }
label_0:
    if (rbx >= 0) {
        rcx = 0x7ffffffffffffffd;
        rdx = rbx - 1;
        rax = 0x7fffffffffffffff;
        if (rbx > rcx) {
            rax = rdx;
        }
        return rax;
    }
    rax = 0x8000000000000002;
    if (rbx < rax) {
        rax = rbx + 1;
        return rax;
    }
    rax = 0x8000000000000000;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4181f0 */
#include <stdint.h>
 
int64_t fcn_004181f0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdx;
    r12 = rdi;
    rbx = rsi;
    rax = *(rsi);
    rsi = rdx;
    rdi = rsp + 8;
    rax = void (*r12)(uint64_t, uint64_t, uint64_t, uint64_t) (rbx, rbp, r12, r13);
    while (1) {
label_1:
        return rax;
        r14 = *(rbx);
        ebp = 0;
        if (r14 != 0) {
            goto label_2;
        }
    }
    do {
label_0:
label_2:
        rdx = r14;
        rbx >>= 1;
        rdx >>= 1;
        rdx += rbx;
        rbx = rbp;
        rbx |= r14;
        ebx &= 1;
        rbx += rdx;
        if (rbp != rbx) {
            if (r14 != rbx) {
                goto label_3;
            }
        }
        rsi = r13;
        rdi = rsp + 8;
        rax = void (*r12)(uint64_t) (rbx);
    } while (rax != 0);
    r14 = rbx;
    rbx = rbp;
    goto label_0;
label_3:
    if (rax != 0) {
        goto label_1;
    }
    if (rbp == 0) {
        goto label_1;
    }
    rsi = r13;
    rdi = rsp + 8;
    void (*r12)(uint64_t) (rbp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x4186f0 */
#include <stdint.h>
 
int64_t fcn_004186f0 (int64_t arg1) {
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_44h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_c0h;
    rdi = arg1;
label_6:
    r14 = rdi;
    eax = *(rdi);
    *((rsp + 0x10)) = rsi;
    rsi = *((rdi + 0xc));
    *((rsp + 0x40)) = eax;
    eax = *((rdi + 4));
    *((rsp + 0x30)) = rdx;
    edx = 0x2aaaaaab;
    *((rsp + 0xc)) = eax;
    eax = *((rdi + 8));
    edi = *((rdi + 0x10));
    *((rsp + 0x18)) = eax;
    eax = *((r14 + 0x20));
    *((rsp + 0x28)) = eax;
    eax = edi;
    edx:eax = eax * edx;
    eax = edi;
    eax >>= 0x1f;
    edx >>= 1;
    ecx = edx;
    edx = 0;
    ecx -= eax;
    eax = rcx * 3;
    ebx = ecx;
    eax <<= 2;
    edi -= eax;
    eax = edi;
    ecx = edi;
    eax >>= 0x1f;
    ebx -= eax;
    rax = *((r14 + 0x14));
    rbx = (int64_t) ebx;
    rbx += rax;
    if ((bl & 3) == 0) {
        rdx = 0xa3d70a3d70a3d70b;
        rax = rbx;
        rdx:rax = rax * rdx;
        rax = rdx + rbx;
        rdx = rbx;
        rdx >>= 0x3f;
        rax >>= 6;
        rax -= rdx;
        rdx = rax * 5;
        rdi = rdx * 5;
        edx = 1;
        rdi <<= 2;
        if (rbx == rdi) {
            goto label_7;
        }
    }
label_1:
    eax = ecx;
    r12d = 0x3b;
    rdi = rbx;
    eax >>= 0x1f;
    r9d = 0x46;
    eax &= 0xc;
    ecx += eax;
    rax = (int64_t) edx;
    rdx = rax + rax;
    rcx = (int64_t) ecx;
    rdx += rax;
    rax = rax + rdx*4;
    rcx += rax;
    eax = *((rcx + rcx + 0x41fd60));
    eax--;
    rax = (int64_t) eax;
    rsi += rax;
    eax = *((rsp + 0x40));
    *((rsp + 0x20)) = rsi;
    if (eax <= 0x3b) {
        r12d = eax;
    }
    eax = 0;
    __asm ("cmovns eax, r12d");
    *((rsp + 0x1c)) = eax;
    r8d = eax;
    rax = *((rsp + 0x30));
    rax = *(rax);
    *((rsp + 0x38)) = rax;
    eax = *((rsp + 0x38));
    eax = -eax;
    *((rsp + 0x44)) = eax;
    rax = fcn_00418030 (rdi, rsi, *((rsp + 0x38)), *((rsp + 0x2c)), r8d, r9);
    r13 = rax;
    *((rsp + 0x38)) = rax;
    *((rsp + 0x50)) = rax;
    eax = 0;
    *((rsp + 0x48)) = r14;
    r12d = eax;
    r14 = r13;
    while (r15 != r13) {
label_0:
        ebp--;
        if (ebp == 0) {
            goto label_8;
        }
        r8d = *((rsp + 0x80));
        *((rsp + 0x50)) = rax;
        r12d = 0;
        r13 = r14;
        r14 = r15;
        r12b = (r8d != 0) ? 1 : 0;
        rax = fcn_004181f0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
        r15 = *((rsp + 0x50));
        rax = fcn_00418150 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), r15);
        if (r15 == rax) {
            goto label_9;
        }
    }
    if (r15 == r14) {
        goto label_0;
    }
    r10d = *((rsp + 0x80));
    if (r10d < 0) {
        goto label_2;
    }
    r9d = *((rsp + 0x28));
    dl = (r10d != 0) ? 1 : 0;
    if (r9d < 0) {
        goto label_10;
    }
    cl = (r9d != 0) ? 1 : 0;
    if (cl == dl) {
        goto label_0;
    }
label_2:
    r14 = *((rsp + 0x48));
    rax = r15;
label_3:
    rdx = *((rsp + 0x44));
    rcx = rax;
    rdx += *((rsp + 0x38));
    rcx -= rdx;
    esi = *((rsp + 0x60));
    edi = *((rsp + 0x40));
    rdx = rcx;
    rcx = *((rsp + 0x30));
    *(rcx) = rdx;
    if (esi != edi) {
        r12 = *((rsp + 0x1c));
        cl = (edi <= 0) ? 1 : 0;
        edx = 0;
        dl = (esi == 0x3c) ? 1 : 0;
        rdx &= rcx;
        rcx = rdx;
        rdx = (int64_t) edi;
        rcx -= r12;
        rdx += rcx;
        rax += rdx;
        *((rsp + 0x50)) = rax;
        if (rax overflow 0) {
            goto label_8;
        }
        rsi = rsp + 0x60;
        rdi = rsp + 0xa0;
        rax = *((rsp + 0x10));
        rax = void (*rax)(uint64_t) (rax);
        if (rax == 0) {
            goto label_8;
        }
        rax = *((rsp + 0x50));
    }
    __asm ("movdqa xmm0, xmmword [rsp + 0x60]");
    __asm ("movdqa xmm1, xmmword [rsp + 0x70]");
    __asm ("movdqa xmm2, xmmword [rsp + 0x80]");
    rdx = *((rsp + 0x90));
    __asm ("movups xmmword [r14], xmm0");
    __asm ("movups xmmword [r14 + 0x10], xmm1");
    __asm ("movups xmmword [r14 + 0x20], xmm2");
    *((r14 + 0x30)) = rdx;
    goto label_11;
label_8:
    rax = 0xffffffffffffffff;
label_11:
    return rax;
label_7:
    eax &= 3;
    edx = 0;
    dl = (rax == 1) ? 1 : 0;
    goto label_1;
label_10:
    edx = (int32_t) dl;
    if (edx < r12d) {
        goto label_0;
    }
    goto label_2;
label_9:
    esi = *((rsp + 0x28));
    edx = *((rsp + 0x80));
    r14 = *((rsp + 0x48));
    rsp + 0x28 = (esi == 0) ? 1 : 0;
    ebp = *((rsp + 0x28));
    cl = (edx == 0) ? 1 : 0;
    if (bpl == cl) {
        goto label_3;
    }
    if (esi < 0) {
        goto label_3;
    }
    if (edx < 0) {
        goto label_3;
    }
    r13d = 0x92c70;
    *((rsp + 0x28)) = rbx;
    goto label_12;
label_4:
    r13d += 0x92c70;
    if (r13d == 0x100dc400) {
        goto label_3;
    }
label_12:
    r15d = r13d;
    ebx = r13 + r13;
    r12d = 2;
    r15d = -r15d;
    rdx = (int64_t) r15d;
    rdx += rax;
    *((rsp + 0x58)) = rdx;
    if (rdx !overflow 0) {
        goto label_13;
    }
label_5:
    r15d += ebx;
    if (r12d == 1) {
        goto label_4;
    }
    rdx = (int64_t) r15d;
    r12d = 1;
    rdx += rax;
    *((rsp + 0x58)) = rdx;
    if (rdx overflow 0) {
        goto label_5;
    }
label_13:
    fcn_004181f0 (*((rsp + 0x10)), rsp + 0x58, rsp + 0xa0);
    eax = *((rsp + 0xc0));
    dl = (eax == 0) ? 1 : 0;
    if (bpl != dl) {
        if (eax >= 0) {
            goto label_14;
        }
    }
    rbx = *((rsp + 0x28));
    rax = rsp + 0xa8;
    rax = fcn_00418150 (rbx, *((rsp + 0x30)), *((rsp + 0x28)), *((rsp + 0x1c)), *((rsp + 0x2c)), *((rsp + 0x68)));
    *((rsp + 0x50)) = rax;
    fcn_004181f0 (*((rsp + 0x10)), rsp + 0x50, rsp + 0x60);
    rax = *((rsp + 0x50));
    goto label_3;
label_14:
    rax = *((rsp + 0x50));
    goto label_5;
    rbx = rdi;
    tzset ();
    rdi = rbx;
    edx = 0x625968;
    esi = imp.localtime_r;
    goto label_6;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x418780 */
#include <stdint.h>
 
int64_t fcn_00418780 (void) {
    rax = 0x6243e8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_dir.elf @ 0x418798 */
#include <stdint.h>
 
void fcn_00418798 (int64_t arg3) {
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
