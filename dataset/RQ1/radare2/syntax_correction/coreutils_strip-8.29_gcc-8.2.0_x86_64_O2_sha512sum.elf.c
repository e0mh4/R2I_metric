#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x401940 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    char * s;
    uint32_t var_13h;
    uint32_t var_14h;
    uint32_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    uint32_t var_40h;
    int64_t var_48h;
    uint32_t var_49h;
    uint32_t var_4ah;
    int64_t var_4bh;
    int64_t var_4ch;
    uint32_t var_5fh;
    void * ptr;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_c0h;
    rdi = argc;
    rsi = argv;
    r14d = 0;
    r13d = 0;
    r12d = 0xffffffff;
    rbx = rsi;
    fcn_00407930 (*(rsi));
    setlocale (6, 0x40d547);
    bindtextdomain (0x40b5f6, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40b5f6, rsi);
    edi = 0x403080;
    fcn_0040b500 ();
    rax = setvbuf (*(obj.stdout), 0, 1, 0);
    do {
label_0:
        r8d = 0;
        ecx = 0x40c0c0;
        edx = "bctw";
        rsi = rbx;
        edi = ebp;
        eax = fcn_0040ad60 ();
        if (eax == 0xffffffff) {
            goto label_43;
        }
        if (eax == 0x77) {
            goto label_44;
        }
        if (eax <= 0x77) {
            goto label_45;
        }
        if (eax == 0x82) {
            goto label_46;
        }
        if (eax > 0x82) {
            goto label_47;
        }
        if (eax != 0x80) {
            goto label_48;
        }
        *(0x0060f2da) = 1;
    } while (1);
label_45:
    if (eax == 0x62) {
        goto label_49;
    }
    if (eax <= 0x62) {
        goto label_50;
    }
    if (eax != 0x63) {
        goto label_51;
    }
    r13d = 1;
    goto label_0;
    do {
        if (eax != 0x84) {
            goto label_52;
        }
        r14d = 1;
label_49:
        r12d = 1;
        goto label_0;
label_51:
        if (eax != 0x74) {
            goto label_52;
        }
        r12d = 0;
        goto label_0;
label_50:
        if (eax != 0xffffff7d) {
            goto label_53;
        }
        eax = 0;
        rcx = *(str_8_29);
        r9d = "Scott Miller";
        r8d = "Ulrich Drepper";
        fcn_004099e0 (*(obj.stdout), "sha512sum", "GNU coreutils");
        eax = exit (0);
label_48:
        if (eax != 0x81) {
            goto label_52;
        }
        *(0x0060f2dc) = 1;
        *(0x0060f2db) = 0;
        *(0x0060f2d9) = 0;
        goto label_0;
INVALID_JUMP;
    } while (eax != 0x83);
    *(0x0060f2d8) = 1;
    goto label_0;
label_53:
    if (eax != 0xffffff7e) {
        goto label_52;
    }
    fcn_00402c90 (0);
label_46:
    *(0x0060f2dc) = 0;
    *(0x0060f2db) = 0;
    *(0x0060f2d9) = 1;
    goto label_0;
label_44:
    *(0x0060f2dc) = 0;
    *(0x0060f2db) = 1;
    *(0x0060f2d9) = 0;
    goto label_0;
label_43:
    *(0x0060f2e8) = 0x82;
    *(0x0060f2e0) = 0x80;
    if (r12d == 0) {
        if (r14b != 0) {
            goto label_54;
        }
    }
    if (r13b != 0) {
        edx = 5;
        esi = "the --tag option is meaningless when verifying checksums";
        if (r14b != 0) {
            goto label_55;
        }
    }
    eax = r12d;
    edx = 5;
    esi = "the --binary and --text options are meaningless when verifying checksums";
    eax = ~eax;
    eax >>= 0x1f;
    if ((r13b & al) != 0) {
        goto label_55;
    }
    if (*(0x0060f2da) != 0) {
        goto label_56;
    }
    if (*(0x0060f2dc) == 0) {
        goto label_57;
    }
    edx = 5;
    esi = "the --status option is meaningful only when verifying checksums";
    if (r13b == 0) {
        goto label_55;
    }
label_3:
    if (*(0x0060f2db) == 0) {
label_31:
        if (*(0x0060f2d8) == 0) {
            goto label_26;
        }
        edx = 5;
        esi = "the --strict option is meaningful only when verifying checksums";
        if (r13b == 0) {
            goto label_55;
        }
    }
label_26:
    if (r12d == 0xffffffff) {
        r12d = 0;
    }
    rax = (int64_t) ebp;
    rax = rbx + rax*8;
    *((rsp + 0x38)) = rax;
    rax = *(0x0060f29c);
    if (eax == ebp) {
        rdi = *((rsp + 0x38));
        *(rdi) = 0x40d52a;
        rdi += 8;
        *((rsp + 0x38)) = rdi;
    }
    rax = rbx + rax*8;
    *(rsp) = rax;
    if (*((rsp + 0x38)) <= rax) {
        goto label_58;
    }
    *((rsp + 0x48)) = 1;
    eax -= eax;
    *((rsp + 0x13)) = r13b;
    eax &= 0xfffffff6;
    *((rsp + 0x4a)) = r14b;
    eax += 0x2a;
    *((rsp + 0x4c)) = eax;
    *((rsp + 0x4b)) = al;
label_9:
    rax = *(rsp);
    rdi = *(rax);
    *((rsp + 8)) = rdi;
    if (*((rsp + 0x13)) == 0) {
        goto label_59;
    }
    eax = strcmp (rdi, 0x40d52a);
    *((rsp + 0x14)) = eax;
    if (eax != 0) {
        goto label_60;
    }
    edx = 5;
    *(0x0060f2f0) = 1;
    rax = dcgettext (0, "standard input");
    rbp = stdin;
    *((rsp + 8)) = rax;
label_10:
    *((rsp + 0x49)) = 0;
    r14d = 0;
    r12d = 0;
    ebx = 1;
    *((rsp + 0x60)) = 0;
    *((rsp + 0x68)) = 0;
    *((rsp + 0x40)) = 0;
    *((rsp + 0x18)) = 0;
label_2:
    rcx = rbp;
    edx = 0xa;
    rsi = rsp + 0x68;
    rdi = rsp + 0x60;
    rax = getdelim ();
    if (rax <= 0) {
        goto label_61;
    }
    r15 = *((rsp + 0x60));
    ecx = *(r15);
    if (cl == 0x23) {
        goto label_6;
    }
    r8 = rax;
    if (*((r15 + rax - 1)) == 0xa) {
        r8--;
        *((r15 + r8)) = 0;
        r15 = *((rsp + 0x60));
        ecx = *(r15);
    }
    edx = 0;
    if (cl != 0x20) {
        goto label_62;
    }
    do {
label_1:
        rdx++;
        ecx = *((r15 + rdx));
    } while (cl == 0x20);
label_62:
    if (cl == 9) {
        goto label_1;
    }
    r10d = 0;
    if (cl == 0x5c) {
        r10d = *((rsp + 0x13));
        rdx++;
    }
    r13 = r15 + rdx;
    edi = "SHA512";
    ecx = 6;
    rsi = r13;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rdx > 0) ? 1 : 0;
    if (al != 0) {
        goto label_63;
    }
    eax = *((r15 + rdx + 6));
    rcx = rdx + 6;
    if (al == 0x20) {
        eax = *((r15 + rdx + 7));
        rcx = rdx + 7;
    }
    if (al == 0x28) {
        goto label_64;
    }
label_4:
    r12++;
    if (*(0x0060f2db) != 0) {
        goto label_65;
    }
label_6:
    if ((*(rbp) & 0x30) != 0) {
        goto label_61;
    }
label_5:
    rbx++;
    if (rbx != 0) {
        goto label_2;
    }
    rdx = *((rsp + 8));
    rax = fcn_004093d0 (0, 3);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: too many checksum lines");
    rcx = rbx;
    eax = 0;
    eax = error (1, 0, rax);
label_56:
    edx = 5;
    esi = "the --ignore-missing option is meaningful only when verifying checksums";
    if (r13b != 0) {
        goto label_3;
    }
    goto label_55;
label_63:
    rcx = r8;
    eax = 0;
    rcx -= rdx;
    al = (*(r13) == 0x5c) ? 1 : 0;
    rax += *(0x0060f2e8);
    if (rcx < rax) {
        goto label_4;
    }
    rdx += *(0x0060f2e0);
    rcx = r15 + rdx;
    eax = *(rcx);
    if (al == 0x20) {
        goto label_66;
    }
    if (al != 9) {
        goto label_4;
    }
label_66:
    *(rcx) = 0;
    *((rsp + 0x30)) = rdx;
    *((rsp + 0x28)) = r10b;
    *((rsp + 0x20)) = r8;
    al = fcn_00402950 (r13);
    if (al == 0) {
        goto label_4;
    }
    rdx = *((rsp + 0x30));
    r8 = *((rsp + 0x20));
    ecx = *(0x0060f210);
    r10d = *((rsp + 0x28));
    rax = rdx + 1;
    rsi = r8;
    rsi -= rax;
    if (rsi != 1) {
        esi = *((r15 + rdx + 1));
        if (sil == 0x20) {
            goto label_67;
        }
        if (sil == 0x2a) {
            goto label_67;
        }
    }
    if (ecx == 0) {
        goto label_4;
    }
    *(0x0060f210) = 1;
label_12:
    r15 += rax;
    if (r10b != 0) {
        goto label_68;
    }
label_20:
    eax = *((rsp + 0x14));
    if (eax != 0) {
        goto label_69;
    }
    edi = 0x40d52a;
    ecx = 2;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (eax > 0) ? 1 : 0;
    if (al == 0) {
        goto label_4;
    }
label_69:
    r14d = 0;
    if (*(0x0060f2dc) == 0) {
        r14d = 0;
        rax = strchr (r15, 0xa);
        r14b = (rax != 0) ? 1 : 0;
    }
    eax = fcn_00402af0 (r15, rsp + 0xc0, rsp + 0x5f);
    r8d = eax;
    if (al != 0) {
        goto label_70;
    }
    if (*(0x0060f2dc) == 0) {
        if (r14d != 0) {
            rdi = stdout;
            rax = *((rdi + 0x28));
            if (rax >= *((rdi + 0x30))) {
                goto label_71;
            }
            rdx = rax + 1;
            *((rdi + 0x28)) = rdx;
            *(rax) = 0x5c;
        }
label_36:
        esi = r14d;
        fcn_00402a40 (r15);
        edx = 5;
label_8:
        rax = dcgettext (0, "FAILED open or read");
        esi = 0x40d0e1;
        edi = 1;
        rdx = rax;
        eax = 0;
        printf_chk ();
    }
label_7:
    r14d = *((rsp + 0x13));
    if ((*(rbp) & 0x30) == 0) {
        goto label_5;
    }
label_61:
    free (*((rsp + 0x60)));
    ebx = *(rbp);
    ebx &= 0x20;
    if (ebx != 0) {
        goto label_72;
    }
    if (*((rsp + 0x14)) != 0) {
        goto label_73;
    }
label_21:
    if (r14b == 0) {
        goto label_74;
    }
    if (*(0x0060f2dc) != 0) {
        goto label_75;
    }
    if (r12 != 0) {
        goto label_76;
    }
label_34:
    if (*((rsp + 0x18)) != 0) {
        goto label_77;
    }
label_33:
    if (*((rsp + 0x40)) != 0) {
        goto label_78;
    }
label_32:
    if (*(0x0060f2da) == 0) {
        goto label_75;
    }
    if (*((rsp + 0x49)) == 0) {
        goto label_79;
    }
label_13:
    rax = *((rsp + 0x18));
    rax |= *((rsp + 0x40));
    if (rax == 0) {
        eax = *(0x0060f2d8);
        eax ^= 1;
        bl = (r12 == 0) ? 1 : 0;
        eax |= ebx;
        ebx = (int32_t) al;
    }
label_14:
    eax = ebx;
    eax &= 1;
label_11:
    goto label_15;
label_65:
    rdx = *((rsp + 8));
    rax = fcn_004093d0 (0, 3);
    edx = 5;
    r15 = rax;
    rax = dcgettext (0, "%s: %lu: improperly formatted %s checksum line");
    r9d = "SHA512";
    r8 = rbx;
    rcx = r15;
    eax = 0;
    error (0, 0, rax);
    goto label_6;
label_70:
    if (*(0x0060f2da) == 0) {
        goto label_80;
    }
    if (*((rsp + 0x5f)) != 0) {
        goto label_7;
    }
label_80:
    rcx = imp.__libc_start_main;
    rcx >>= 1;
    if (rcx == 0) {
        goto label_81;
    }
    *((rsp + 0x28)) = rcx;
    *((rsp + 0x20)) = r8b;
    rax = ctype_tolower_loc ();
    edx = 0;
    r8d = *((rsp + 0x20));
    rcx = *((rsp + 0x28));
    rdi = *(rax);
    while (*((rdi + r9*4)) == esi) {
        esi = *((r13 + rdx*2 + 1));
        eax &= 0xf;
        eax = *((rax + str_0123456789abcdef));
        if (*((rdi + rsi*4)) != eax) {
            goto label_82;
        }
        rdx++;
        if (rcx == rdx) {
            goto label_83;
        }
        eax = *((rsp + rdx + 0xc0));
        r9d = *((r13 + rdx*2));
        esi = eax;
        sil >>= 4;
        esi &= 0xf;
        esi = *((rsi + str_0123456789abcdef));
    }
label_82:
    if (*(0x0060f2dc) != 0) {
        goto label_7;
    }
    if (r14d != 0) {
label_23:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_84;
        }
        rsi = rax + 1;
        *((rdi + 0x28)) = rsi;
        *(rax) = 0x5c;
    }
label_39:
    esi = r14d;
    *((rsp + 0x28)) = rdx;
    *((rsp + 0x20)) = rcx;
    fcn_00402a40 (r15);
    rcx = *((rsp + 0x20));
    rdx = *((rsp + 0x28));
    if (rcx == rdx) {
        goto label_85;
    }
    edx = 5;
    esi = "FAILED";
    goto label_8;
label_59:
    al = fcn_00402af0 (*((rsp + 8)), rsp + 0x70, rsp + 0xc0);
    if (al != 0) {
        goto label_86;
    }
    *((rsp + 0x48)) = 0;
label_15:
    rax = *(rsp);
    if (*((rsp + 0x38)) > rax) {
        goto label_9;
    }
label_37:
    if (*(0x0060f2f0) != 0) {
        goto label_87;
    }
label_30:
    eax = *((rsp + 0x48));
    eax ^= 1;
    eax = (int32_t) al;
    return rax;
label_64:
    rcx++;
    r8 -= rcx;
    if (r8 == 0) {
        goto label_4;
    }
    r11 = r8;
    r15 += rcx;
    r11--;
    if (r11 == 0) {
        goto label_88;
    }
    if (*((r15 + r8 - 1)) != 0x29) {
        goto label_89;
    }
    goto label_90;
    do {
        if (*((r15 + r11)) == 0x29) {
            goto label_90;
        }
label_89:
        r11--;
    } while (r11 != 0);
label_88:
    if (*(r15) != 0x29) {
        goto label_4;
    }
    rdx = r15;
    r11d = 0;
    goto label_91;
label_60:
    rax = fcn_00407890 (*((rsp + 8)), 0x40b60f);
    if (rax != 0) {
        goto label_10;
    }
label_22:
    rdx = *((rsp + 8));
    rax = fcn_004093d0 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    eax = error (0, *(rax), 0x40c255);
    eax = 0;
    goto label_11;
label_67:
    ecx--;
    if (ecx == 0) {
        goto label_12;
    }
    *(0x0060f210) = 0;
    rax = rdx + 2;
    goto label_12;
label_75:
    if (*((rsp + 0x49)) != 0) {
        goto label_13;
    }
    goto label_14;
label_86:
    rax = strchr (*((rsp + 8)), 0x5c);
    if (rax == 0) {
        goto label_92;
    }
label_27:
    if (*((rsp + 0x4a)) != 0) {
        goto label_93;
    }
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_94;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x5c;
label_40:
    rax = imp.__libc_start_main;
    ebx = 1;
    rax >>= 1;
    if (rax == 0) {
        goto label_95;
    }
label_16:
    ebp = 0;
    do {
        edx = *((rsp + rbp + 0x70));
        esi = "%02x";
        edi = 1;
        eax = 0;
        rbp++;
        printf_chk ();
        rax = imp.__libc_start_main;
        rax >>= 1;
    } while (rax > rbp);
label_29:
    if (*((rsp + 0x4a)) == 0) {
        goto label_95;
    }
label_17:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_96;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0xa;
    goto label_15;
label_28:
    rax = imp.__libc_start_main;
    rax >>= 1;
    if (rax != 0) {
        goto label_16;
    }
label_95:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_97;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x20;
label_42:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_98;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    edi = *((rsp + 0x4b));
    *(rax) = dil;
label_41:
    esi = ebx;
    fcn_00402a40 (*((rsp + 8)));
    goto label_17;
label_90:
    rdx = r15 + r11;
label_91:
    if (r10b != 0) {
        goto label_99;
    }
label_25:
    *(rdx) = 0;
    edx = *((r15 + r11 + 1));
    rax = r11 + 1;
    if (dl == 9) {
        goto label_18;
    }
    if (dl != 0x20) {
        goto label_100;
    }
    do {
label_18:
        rax++;
        edx = *((r15 + rax));
    } while (dl == 0x20);
    if (dl == 9) {
        goto label_18;
    }
label_100:
    if (dl != 0x3d) {
        goto label_4;
    }
    r13 = r15 + rax + 1;
    edx = *(r13);
    if (dl != 0x20) {
        if (dl != 9) {
            goto label_101;
        }
    }
    rax = r15 + rax + 2;
    do {
label_19:
        edx = *(rax);
        r13 = rax;
        rax++;
    } while (dl == 0x20);
    if (dl == 9) {
        goto label_19;
    }
label_101:
    al = fcn_00402950 (r13);
label_24:
    if (al != 0) {
        goto label_20;
    }
    goto label_4;
label_73:
    eax = fcn_00409db0 (rbp);
    if (eax == 0) {
        goto label_21;
    }
    goto label_22;
label_83:
    rdx = rcx;
label_38:
    eax = *(0x0060f2dc);
    *((rsp + 0x49)) = al;
    if (al != 0) {
        goto label_7;
    }
    eax = *(0x0060f2d9);
    *((rsp + 0x49)) = al;
    if (al != 0) {
        goto label_7;
    }
    if (r14d != 0) {
        *((rsp + 0x49)) = r8b;
        goto label_23;
label_74:
        rdx = *((rsp + 8));
        rax = fcn_004093d0 (0, 3);
        edx = 5;
        rax = dcgettext (0, "%s: no properly formatted %s checksum lines found");
        r8d = "SHA512";
        rcx = rbp;
        eax = 0;
        rax = error (0, 0, rax);
        goto label_14;
label_68:
        rsi -= rax;
        rax = fcn_004029b0 (r15, r8);
        al = (rax != 0) ? 1 : 0;
        goto label_24;
label_72:
        rdx = *((rsp + 8));
        rax = fcn_004093d0 (0, 3);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "%s: read error");
        rcx = rbx;
        eax = 0;
        eax = error (0, 0, rax);
        eax = 0;
        goto label_11;
    }
    esi = 0;
    *((rsp + 0x20)) = r8b;
    fcn_00402a40 (r15);
    r8d = *((rsp + 0x20));
    *((rsp + 0x49)) = r8b;
label_85:
    if (*(0x0060f2d9) != 0) {
        goto label_7;
    }
    edx = 5;
    esi = 0x40b678;
    goto label_8;
label_99:
    *((rsp + 0x20)) = rdx;
    rax = fcn_004029b0 (r15, r11);
    rdx = *((rsp + 0x20));
    if (rax != 0) {
        goto label_25;
    }
    goto label_4;
label_57:
    if (*(0x0060f2db) == 0) {
        goto label_102;
    }
    edx = 5;
    esi = "the --warn option is meaningful only when verifying checksums";
    if (r13b != 0) {
        goto label_26;
    }
    goto label_55;
label_92:
    rax = strchr (*((rsp + 8)), 0xa);
    if (rax != 0) {
        goto label_27;
    }
    ebx = 0;
    if (*((rsp + 0x4a)) == 0) {
        goto label_28;
    }
label_35:
    edx = 6;
    esi = 1;
    edi = "SHA512";
    rcx = stdout;
    fwrite_unlocked ();
    edx = 2;
    esi = 1;
    rcx = stdout;
    edi = 0x40b6a8;
    fwrite_unlocked ();
    esi = ebx;
    fcn_00402a40 (*((rsp + 8)));
    edx = 4;
    esi = 1;
    rcx = stdout;
    edi = ") = ";
    fwrite_unlocked ();
    rax = imp.__libc_start_main;
    rax >>= 1;
    if (rax != 0) {
        goto label_16;
    }
    goto label_29;
label_87:
    eax = fcn_00409db0 (*(obj.stdin));
    eax++;
    if (eax != 0) {
        goto label_30;
    }
    edx = 5;
    rax = dcgettext (0, "standard input");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_102:
    if (*(0x0060f2d9) != 1) {
        goto label_31;
    }
    edx = 5;
    esi = "the --quiet option is meaningful only when verifying checksums";
    if (r13b != 0) {
        goto label_31;
    }
    do {
label_55:
        rax = dcgettext (0, rsi);
        eax = 0;
        error (0, 0, rax);
label_52:
        fcn_00402c90 (1);
label_79:
        rdx = *((rsp + 8));
        rax = fcn_004093d0 (0, 3);
        edx = 5;
        rax = dcgettext (0, "%s: no file was verified");
        rcx = rbp;
        eax = 0;
        error (0, 0, rax);
        goto label_14;
label_78:
        r14 = *((rsp + 0x40));
        edi = 0;
        r8d = 5;
        edx = "WARNING: %lu computed checksums did NOT match";
        esi = "WARNING: %lu computed checksum did NOT match";
        rcx = r14;
        rax = dcngettext ();
        rcx = r14;
        eax = 0;
        error (0, 0, rax);
        goto label_32;
label_77:
        r14 = *((rsp + 0x18));
        edi = 0;
        r8d = 5;
        edx = "WARNING: %lu listed files could not be read";
        esi = "WARNING: %lu listed file could not be read";
        rcx = r14;
        rax = dcngettext ();
        rcx = r14;
        eax = 0;
        error (0, 0, rax);
        goto label_33;
label_76:
        rcx = r12;
        edi = 0;
        r8d = 5;
        edx = "WARNING: %lu lines are improperly formatted";
        esi = "WARNING: %lu line is improperly formatted";
        rax = dcngettext ();
        rcx = r12;
        eax = 0;
        error (0, 0, rax);
        goto label_34;
label_93:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (*((rdi + 0x30)) > rax) {
            rdx = rax + 1;
            ebx = 1;
            *((rdi + 0x28)) = rdx;
            *(rax) = 0x5c;
            goto label_35;
label_71:
            esi = 0x5c;
            overflow ();
            goto label_36;
label_58:
            *((rsp + 0x48)) = 1;
            goto label_37;
label_96:
            esi = 0xa;
            overflow ();
            goto label_15;
label_81:
            edx = 0;
            goto label_38;
label_84:
            esi = 0x5c;
            *((rsp + 0x28)) = rdx;
            *((rsp + 0x20)) = rcx;
            overflow ();
            rcx = *((rsp + 0x20));
            rdx = *((rsp + 0x28));
            goto label_39;
label_94:
            esi = 0x5c;
            overflow ();
            goto label_40;
label_98:
            esi = *((rsp + 0x4c));
            overflow ();
            goto label_41;
label_97:
            esi = 0x20;
            overflow ();
            goto label_42;
        }
        esi = 0x5c;
        ebx = 1;
        overflow ();
        goto label_35;
label_54:
        edx = 5;
        esi = "--tag does not support --text mode";
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40289b */
#include <stdint.h>
 
int32_t fcn_0040289b (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x4028f1 */
#include <stdint.h>
 
int64_t fcn_004028f1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060f2c8) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x60ee48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060f2d0) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040289b ();
    *(0x0060f2c8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x402948 */
#include <stdint.h>
 
int64_t fcn_00402948 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x402950 */
#include <stdint.h>
 
uint64_t fcn_00402950 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rbp = imp.__libc_start_main;
    if (rbp == 0) {
        goto label_0;
    }
    rax = ctype_b_loc ();
    rcx = *(rax);
    eax = 0;
    while ((*((rcx + rdx*2 + 1)) & 0x10) != 0) {
        edx = rax + 1;
        rbx++;
        rax = rdx;
        if (rdx >= rbp) {
            goto label_0;
        }
        edx = *(rbx);
    }
    eax = 0;
    return rax;
label_0:
    al = (*(rbx) == 0) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x4029b0 */
#include <stdint.h>
 
uint64_t fcn_004029b0 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rdi + 1;
    edx = 0;
    r8 = rsi - 1;
    if (rsi == 0) {
        goto label_1;
    }
    do {
        ecx = *((rdi + rdx));
        if (cl != 0) {
            if (cl != 0x5c) {
                goto label_2;
            }
            if (r8 == rdx) {
                goto label_3;
            }
            rdx++;
            ecx = *((rdi + rdx));
            if (cl == 0x5c) {
                goto label_4;
            }
            if (cl == 0x6e) {
                goto label_5;
            }
        }
label_3:
        eax = 0;
        return rax;
label_2:
        *((rax - 1)) = cl;
        r9 = rax;
label_0:
        rdx++;
        rax++;
    } while (rsi > rdx);
    rsi += rdi;
    if (r9 < rsi) {
        *(r9) = 0;
    }
label_1:
    rax = rdi;
    return rax;
label_5:
    r9 = rax;
    *((rax - 1)) = 0xa;
    goto label_0;
label_4:
    r9 = rax;
    *((rax - 1)) = 0x5c;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x402a40 */
#include <stdint.h>
 
int64_t fcn_00402a40 (char * arg1) {
    rdi = arg1;
    rbx = rdi;
    if (sil != 0) {
        goto label_1;
    }
    goto label_2;
    do {
        rax = *((rcx + 0x28));
        if (rax >= *((rcx + 0x30))) {
            goto label_3;
        }
        rdx = rax + 1;
        *((rcx + 0x28)) = rdx;
        *(rax) = sil;
label_0:
        rbx++;
label_1:
        esi = *(rbx);
        if (sil == 0) {
            goto label_4;
        }
        rcx = stdout;
        if (sil == 0xa) {
            goto label_5;
        }
    } while (sil != 0x5c);
    edx = 2;
    esi = 1;
    edi = 0x40b567;
    fwrite_unlocked ();
    goto label_0;
label_5:
    edx = 2;
    esi = 1;
    edi = 0x40b564;
    fwrite_unlocked ();
    goto label_0;
label_4:
    return rax;
label_3:
    rdi = rcx;
    overflow ();
    goto label_0;
label_2:
    rsi = stdout;
    return fputs_unlocked ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x402af0 */
#include <stdint.h>
 
uint64_t fcn_00402af0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = 2;
    r12 = rsi;
    edi = 0x40d52a;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    *(rdx) = 0;
    al = (unknown > unknown) ? 1 : 0;
    if (al != 0) {
        goto label_1;
    }
    rbx = stdin;
    *(0x0060f2f0) = 1;
    fcn_00407860 (rbx, 2);
    eax = fcn_00407510 (rbx, r12);
    if (eax != 0) {
        goto label_2;
    }
    do {
        r12d = 1;
label_0:
        eax = r12d;
        return eax;
label_1:
        r13 = rdx;
        rax = fcn_00407890 (rbp, 0x40b60f);
        rbx = rax;
        if (rax == 0) {
            goto label_3;
        }
        fcn_00407860 (rax, 2);
        eax = fcn_00407510 (rbx, r12);
        if (eax != 0) {
            goto label_2;
        }
        eax = fcn_00409db0 (rbx);
    } while (eax == 0);
    rdx = rbp;
    r12d = 0;
    rax = fcn_004093d0 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), 0x40c255);
    goto label_0;
label_2:
    rdx = rbp;
    r12d = 0;
    rax = fcn_004093d0 (0, 3);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x40c255);
    if (*(obj.stdin) == rbx) {
        goto label_0;
    }
    fcn_00409db0 (rbx);
    goto label_0;
label_3:
    rax = errno_location ();
    r12d = *(0x0060f2da);
    rbx = rax;
    if (r12b != 0) {
        if (*(rax) == 2) {
            goto label_4;
        }
    }
    rdx = rbp;
    r12d = 0;
    rax = fcn_004093d0 (0, 3);
    rcx = rax;
    eax = 0;
    error (0, *(rbx), 0x40c255);
    goto label_0;
label_4:
    *(r13) = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x402c90 */
#include <stdint.h>
 
uint64_t fcn_00402c90 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION].. [FILE]..\nPrint or check %s (%d-bit) checksums.\n");
    r8d = 0x200;
    ecx = "SHA512";
    rdx = rbp;
    rsi = rax;
    edi = 1;
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
    rax = dcgettext (0, "\n  -b, --binary         read in binary mode\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "  -c, --check          read %s sums from the FILEs and check them\n");
    edx = "SHA512";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --tag            create a BSD-style checksum\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -t, --text           read in text mode (default)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don't fail or report status for missing files\n      --quiet          don't print OK for each successfully verified file\n      --status         don't output anything, status code shows success\n      --strict         exit non-zero for improperly formatted checksum lines\n  -w, --warn           warn about improperly formatted checksum lines\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --help     display this help and exit\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rbp = stdout;
    rax = dcgettext (0, "      --version  output version information and exit\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "\nThe sums are computed as described in %s.  When checking, the input\nshould be a former output of this program.  The default mode is to print a\nline with checksum, a space, a character indicating input mode ('*' for binary,\n' ' for text or where binary is insignificant), and name for each FILE.\n");
    edx = "FIPS-180-2";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    *(rsp) = 0x40b586;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40b5f6;
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
        esi = "sha512sum";
        ecx = 0xa;
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
        eax = strncmp (rax, 0x40b600, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40b5a2;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "sha512sum";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40d547;
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
            eax = strncmp (rax, 0x40b600, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "sha512sum";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40b5a2;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "sha512sum";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x403240 */
#include <stdint.h>
 
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
 
int64_t fcn_00403240 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rsi;
    edx = 0;
    do {
        rcx = *((rdi + rdx));
        rcx = SWAP64 (rcx);
        *((rax + rdx)) = rcx;
        rdx += 8;
    } while (rdx != 0x40);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x403260 */
#include <stdint.h>
 
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
 
int64_t fcn_00403260 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rsi;
    edx = 0;
    do {
        rcx = *((rdi + rdx));
        rcx = SWAP64 (rcx);
        *((rax + rdx)) = rcx;
        rdx += 8;
    } while (rdx != 0x30);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x403280 */
#include <stdint.h>
 
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
 
int64_t fcn_00403280 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    uint32_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    int64_t var_b8h;
    int64_t var_c0h;
    int64_t var_c8h;
    int64_t var_d0h;
    int64_t var_d8h;
    int64_t var_e0h;
    int64_t var_e8h;
    int64_t var_f0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    r15 = rdi;
    rax &= 0xfffffffffffffff8;
    rax += rdi;
    rcx = rax;
    rsi += *((rdx + 0x40));
    r13 = *((rdx + 0x10));
    rbp = *((rdx + 0x18));
    r9 = *((rdx + 0x20));
    *((rsp + 0x18)) = rdi;
    r8 = *((rdx + 0x28));
    rdi = *((rdx + 8));
    *((rsp + 0x68)) = rax;
    r10 = *((rdx + 0x30));
    rax = *(rdx);
    *((rsp + 0x70)) = rdx;
    r11 = *((rdx + 0x38));
    *((rdx + 0x40)) = rsi;
    *((rdx + 0x48)) += 0;
    if (r15 >= rcx) {
        goto label_1;
    }
    *((rsp + 0x50)) = r11;
    rcx = r9;
    r14 = r8;
    *((rsp + 0x48)) = r10;
    *((rsp + 0x40)) = r8;
    *((rsp + 0x30)) = rbp;
    *((rsp + 0x28)) = r13;
    *((rsp + 0x20)) = rdi;
    *((rsp + 0x60)) = rax;
    *((rsp + 0x38)) = r9;
    r9 = r10;
label_0:
    r8 = *((rsp + 0x18));
    edx = 0;
    do {
        rsi = *((r8 + rdx));
        rsi = SWAP64 (rsi);
        *((rsp + rdx + 0x78)) = rsi;
        rdx += 8;
    } while (rdx != 0x80);
    rdx = rcx;
    rsi = rcx;
    r8 = rax;
    r10 = rax;
    rsi = rotate_right64 (rsi, 0x12);
    rdx = rotate_right64 (rdx, 0xe);
    r10 &= rdi;
    rdx ^= rsi;
    rsi = rcx;
    r8 = rotate_left64 (r8, 0x1e);
    r15 = *((rsp + 0x80));
    rsi = rotate_left64 (rsi, 0x17);
    rsi ^= rdx;
    rdx = 0x428a2f98d728ae22;
    rdx += *((rsp + 0x78));
    r11 += rdx;
    rdx = r14;
    rdx ^= r9;
    r11 += rsi;
    rdx &= rcx;
    rdx ^= r9;
    rsi = r11 + rdx;
    rdx = rax;
    rdx = rotate_right64 (rdx, 0x1c);
    r12 = rsi + rbp;
    r8 ^= rdx;
    rdx = rax;
    rdx = rotate_left64 (rdx, 0x19);
    r8 ^= rdx;
    rdx = rax;
    rdx |= rdi;
    rdx &= r13;
    rdx |= r10;
    r10 = rcx;
    rdx += r8;
    r10 ^= r14;
    rdx += rsi;
    r10 &= r12;
    rsi = 0x7137449123ef65cd;
    r8 = r15 + rsi;
    r10 ^= r14;
    rsi = r12;
    r11 = rdx;
    r8 += r9;
    rsi = rotate_right64 (rsi, 0x12);
    r9 = rdx;
    r8 += r10;
    r10 = r12;
    r10 = rotate_right64 (r10, 0xe);
    rsi ^= r10;
    r10 = r12;
    r10 = rotate_left64 (r10, 0x17);
    r10 ^= rsi;
    rsi = rdx;
    r11 = rotate_left64 (r11, 0x1e);
    r9 &= rax;
    rsi = rotate_right64 (rsi, 0x1c);
    r10 += r8;
    r8 = r12;
    r11 ^= rsi;
    rsi = rdx;
    rbp = r10 + r13;
    r8 ^= rcx;
    rsi = rotate_left64 (rsi, 0x19);
    r8 &= rbp;
    r11 ^= rsi;
    rsi = rdx;
    r8 ^= rcx;
    rsi |= rax;
    rsi &= rdi;
    rsi |= r9;
    r9 = 0xb5c0fbcfec4d3b2f;
    r9 += *((rsp + 0x88));
    rsi += r11;
    r9 += r14;
    rsi += r10;
    r10 = rbp;
    r9 += r8;
    r8 = rbp;
    r10 = rotate_right64 (r10, 0x12);
    r8 = rotate_right64 (r8, 0xe);
    rbx = r10;
    r10 = rsi;
    rbx ^= r8;
    r8 = rbp;
    r10 = rotate_right64 (r10, 0x1c);
    r8 = rotate_left64 (r8, 0x17);
    r8 ^= rbx;
    r8 += r9;
    r9 = rsi;
    r9 = rotate_left64 (r9, 0x1e);
    rdi += r8;
    r9 ^= r10;
    r10 = rsi;
    r11 = rdi;
    r10 = rotate_left64 (r10, 0x19);
    r9 ^= r10;
    r10 = rdx;
    r10 |= rsi;
    rbx = r10;
    r10 = rdx;
    rbx &= rax;
    r10 &= rsi;
    r11 = rotate_right64 (r11, 0x12);
    rbx |= r10;
    rbx += r9;
    r9 = 0xe9b5dba58189dbbc;
    r9 += *((rsp + 0x90));
    rbx += r8;
    r8 = r12;
    rcx += r9;
    r9 = rsi;
    r8 ^= rbp;
    r9 &= rbx;
    r8 &= rdi;
    r8 ^= r12;
    rcx += r8;
    r8 = rdi;
    r8 = rotate_right64 (r8, 0xe);
    r11 ^= r8;
    r8 = rdi;
    r8 = rotate_left64 (r8, 0x17);
    r8 ^= r11;
    r11 = rbx;
    r8 += rcx;
    r11 = rotate_right64 (r11, 0x1c);
    rcx = r8 + rax;
    rax = rbx;
    rax = rotate_left64 (rax, 0x1e);
    r10 = rcx;
    rax ^= r11;
    r11 = rbx;
    r11 = rotate_left64 (r11, 0x19);
    rax ^= r11;
    r11 = rsi;
    r11 |= rbx;
    r11 &= rdx;
    r11 |= r9;
    r9 = rbx;
    r11 += rax;
    rax = rbp;
    rax ^= rdi;
    r11 += r8;
    r8 = 0x3956c25bf348b538;
    r8 += *((rsp + 0x98));
    rax &= rcx;
    rax ^= rbp;
    r12 += r8;
    r10 = rotate_right64 (r10, 0x12);
    r8 = r11;
    r12 += rax;
    rax = rcx;
    r8 = rotate_left64 (r8, 0x1e);
    r9 &= r11;
    rax = rotate_right64 (rax, 0xe);
    r10 ^= rax;
    rax = rcx;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r10;
    r10 = r11;
    r10 = rotate_right64 (r10, 0x1c);
    rax += r12;
    r8 ^= r10;
    r10 = r11;
    rdx += rax;
    r10 = rotate_left64 (r10, 0x19);
    r8 ^= r10;
    r10 = rbx;
    r10 |= r11;
    r10 &= rsi;
    r10 |= r9;
    r10 += r8;
    r8 = rdi;
    r8 ^= rcx;
    r10 += rax;
    rax = 0x59f111f1b605d019;
    rax += *((rsp + 0xa0));
    r8 &= rdx;
    rbp += rax;
    rax = rdx;
    r8 ^= rdi;
    rax = rotate_right64 (rax, 0x12);
    rbp += r8;
    r8 = rdx;
    r8 = rotate_right64 (r8, 0xe);
    rax ^= r8;
    r8 = rdx;
    r8 = rotate_left64 (r8, 0x17);
    r8 ^= rax;
    rax = r10;
    r8 += rbp;
    rax = rotate_right64 (rax, 0x1c);
    r9 = rsi + r8;
    rsi = r10;
    rbp &= r10;
    rsi = rotate_left64 (rsi, 0x1e);
    rsi ^= rax;
    rax = r10;
    rax = rotate_left64 (rax, 0x19);
    rsi ^= rax;
    rax = r11;
    rax |= r10;
    rax &= rbx;
    rax |= rbp;
    rax += rsi;
    rsi = rcx;
    rsi ^= rdx;
    rax += r8;
    r8 = 0x923f82a4af194f9b;
    r8 += *((rsp + 0xa8));
    rsi &= r9;
    rdi += r8;
    r8 = r9;
    rbp &= rax;
    rsi ^= rcx;
    r8 = rotate_right64 (r8, 0x12);
    rdi += rsi;
    rsi = r9;
    rsi = rotate_right64 (rsi, 0xe);
    r8 ^= rsi;
    rsi = r9;
    rsi = rotate_left64 (rsi, 0x17);
    rsi ^= r8;
    r8 = rax;
    rsi += rdi;
    rdi = rax;
    r8 = rotate_right64 (r8, 0x1c);
    rdi = rotate_left64 (rdi, 0x1e);
    rbx += rsi;
    rdi ^= r8;
    r8 = rax;
    r8 = rotate_left64 (r8, 0x19);
    rdi ^= r8;
    r8 = r10;
    r8 |= rax;
    r8 &= r11;
    r8 |= rbp;
    r8 += rdi;
    rdi = 0xab1c5ed5da6d8118;
    rdi += *((rsp + 0xb0));
    r8 += rsi;
    rsi = rdx;
    rcx += rdi;
    rdi = rbx;
    rsi ^= r9;
    rdi = rotate_right64 (rdi, 0x12);
    rbp &= r8;
    rsi &= rbx;
    rsi ^= rdx;
    rsi += rcx;
    rcx = rbx;
    rcx = rotate_right64 (rcx, 0xe);
    rdi ^= rcx;
    rcx = rbx;
    rcx = rotate_left64 (rcx, 0x17);
    rcx ^= rdi;
    rdi = r8;
    rcx += rsi;
    rsi = r8;
    rdi = rotate_right64 (rdi, 0x1c);
    rsi = rotate_left64 (rsi, 0x1e);
    r11 += rcx;
    rsi ^= rdi;
    rdi = r8;
    rdi = rotate_left64 (rdi, 0x19);
    rsi ^= rdi;
    rdi = rax;
    rdi |= r8;
    rdi &= r10;
    rdi |= rbp;
    rdi += rsi;
    rsi = 0xd807aa98a3030242;
    rsi += *((rsp + 0xb8));
    rdi += rcx;
    rcx = r9;
    rdx += rsi;
    rsi = r11;
    rcx ^= rbx;
    rcx &= r11;
    rcx ^= r9;
    rcx += rdx;
    rdx = r11;
    rsi = rotate_right64 (rsi, 0x12);
    rbp &= rdi;
    rdx = rotate_right64 (rdx, 0xe);
    rsi ^= rdx;
    rdx = r11;
    rdx = rotate_left64 (rdx, 0x17);
    rdx ^= rsi;
    rsi = rdi;
    rdx += rcx;
    rcx = rdi;
    rsi = rotate_right64 (rsi, 0x1c);
    rcx = rotate_left64 (rcx, 0x1e);
    r10 += rdx;
    rcx ^= rsi;
    rsi = rdi;
    rsi = rotate_left64 (rsi, 0x19);
    rcx ^= rsi;
    rsi = r8;
    rsi |= rdi;
    rsi &= rax;
    rsi |= rbp;
    rsi += rcx;
    rcx = 0x12835b0145706fbe;
    rcx += *((rsp + 0xc0));
    rsi += rdx;
    rdx = rbx;
    r9 += rcx;
    rcx = r10;
    rdx ^= r11;
    rcx = rotate_right64 (rcx, 0x12);
    rdx &= r10;
    rdx ^= rbx;
    r9 += rdx;
    rdx = r10;
    rdx = rotate_right64 (rdx, 0xe);
    rcx ^= rdx;
    rdx = r10;
    rdx = rotate_left64 (rdx, 0x17);
    rdx ^= rcx;
    rcx = rsi;
    rdx += r9;
    r9 = rsi;
    rax += rdx;
    rcx = rotate_right64 (rcx, 0x1c);
    rbp &= rsi;
    r9 = rotate_left64 (r9, 0x1e);
    r9 ^= rcx;
    rcx = rsi;
    rcx = rotate_left64 (rcx, 0x19);
    r9 ^= rcx;
    rcx = rdi;
    rcx |= rsi;
    rcx &= r8;
    rcx |= rbp;
    rcx += r9;
    r9 = r11;
    r9 ^= r10;
    rcx += rdx;
    rdx = 0x243185be4ee4b28c;
    rdx += *((rsp + 0xc8));
    r9 &= rax;
    rbx += rdx;
    rdx = rax;
    r14 = rcx;
    rdx = rotate_right64 (rdx, 0x12);
    r9 ^= r11;
    r14 = rotate_left64 (r14, 0x1e);
    rbp &= rcx;
    rbx += r9;
    r9 = rax;
    r9 = rotate_right64 (r9, 0xe);
    rdx ^= r9;
    r9 = rax;
    r9 = rotate_left64 (r9, 0x17);
    r9 ^= rdx;
    rdx = rcx;
    r9 += rbx;
    rdx = rotate_right64 (rdx, 0x1c);
    rbx = r14;
    r14 = rcx;
    rbx ^= rdx;
    rdx = rcx;
    r8 += r9;
    rdx = rotate_left64 (rdx, 0x19);
    r13 = r8;
    rbx ^= rdx;
    rdx = rsi;
    rdx |= rcx;
    rdx &= rdi;
    rdx |= rbp;
    r13 = rotate_right64 (r13, 0x12);
    rdx += rbx;
    rbx = 0x550c7dc3d5ffb4e2;
    rbx += *((rsp + 0xd0));
    rdx += r9;
    r9 = r10;
    r11 += rbx;
    r9 ^= rax;
    r14 &= rdx;
    r9 &= r8;
    r9 ^= r10;
    r11 += r9;
    r9 = r8;
    r9 = rotate_right64 (r9, 0xe);
    r13 ^= r9;
    r9 = r8;
    r9 = rotate_left64 (r9, 0x17);
    r9 ^= r13;
    r13 = rdx;
    r9 += r11;
    r11 = rdx;
    r13 = rotate_right64 (r13, 0x1c);
    r11 = rotate_left64 (r11, 0x1e);
    rdi += r9;
    r11 ^= r13;
    r13 = rdx;
    r13 = rotate_left64 (r13, 0x19);
    r11 ^= r13;
    r13 = rcx;
    r13 |= rdx;
    r13 &= rsi;
    r13 |= r14;
    r14 = rdi;
    r13 += r11;
    r11 = 0x72be5d74f27b896f;
    r11 += *((rsp + 0xd8));
    r13 += r9;
    r9 = rax;
    r10 += r11;
    r11 = rdx;
    r9 ^= r8;
    r9 &= rdi;
    r9 ^= rax;
    r10 += r9;
    r9 = rdi;
    r14 = rotate_right64 (r14, 0x12);
    r11 &= r13;
    r9 = rotate_right64 (r9, 0xe);
    r14 ^= r9;
    r9 = rdi;
    r9 = rotate_left64 (r9, 0x17);
    r9 ^= r14;
    r14 = r13;
    r9 += r10;
    r10 = r13;
    r14 = rotate_right64 (r14, 0x1c);
    r10 = rotate_left64 (r10, 0x1e);
    rsi += r9;
    r10 ^= r14;
    r14 = r13;
    r12 = rsi;
    r14 = rotate_left64 (r14, 0x19);
    r12 = rotate_right64 (r12, 0x12);
    r10 ^= r14;
    r14 = rdx;
    r14 |= r13;
    r14 &= rcx;
    r14 |= r11;
    r11 = *((rsp + 0xf0));
    r14 += r10;
    r10 = 0x80deb1fe3b1696b1;
    r10 += *((rsp + 0xe0));
    r14 += r9;
    r9 = r8;
    rax += r10;
    r10 = r13;
    r9 ^= rdi;
    r9 &= rsi;
    r9 ^= r8;
    r9 = r9 + rax;
    rax = rsi;
    rax = rotate_right64 (rax, 0xe);
    r12 ^= rax;
    rax = rsi;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r12;
    r12 = r14;
    rax += r9;
    r9 = r14;
    r12 = rotate_right64 (r12, 0x1c);
    rcx += rax;
    r9 = rotate_left64 (r9, 0x1e);
    r10 &= r14;
    r9 ^= r12;
    r12 = r14;
    r12 = rotate_left64 (r12, 0x19);
    rbp = rotate_right64 (rbp, 0x12);
    r9 ^= r12;
    r12 = r13;
    r12 |= r14;
    r12 &= rdx;
    r12 |= r10;
    r10 = r15;
    r12 += r9;
    r9 = 0x9bdc06a725c71235;
    r9 += *((rsp + 0xe8));
    r12 += rax;
    rax = rdi;
    r8 += r9;
    r9 = r14;
    rax ^= rsi;
    r9 &= r12;
    rax &= rcx;
    rax ^= rdi;
    r8 += rax;
    rax = rcx;
    rax = rotate_right64 (rax, 0xe);
    rbp ^= rax;
    rax = rcx;
    rax = rotate_left64 (rax, 0x17);
    rax ^= rbp;
    rax += r8;
    r8 = r12;
    rbp = rotate_right64 (rbp, 0x1c);
    r8 = rotate_left64 (r8, 0x1e);
    rdx += rax;
    r8 ^= rbp;
    rbp = rotate_left64 (rbp, 0x19);
    r8 ^= rbp;
    rbp |= r12;
    rbp &= r13;
    rbp |= r9;
    r9 = r12;
    rbp += r8;
    r8 = 0xc19bf174cf692694;
    r8 += *((rsp + 0xf0));
    rbp += rax;
    rax = rsi;
    rdi += r8;
    r8 = rdx;
    rax ^= rcx;
    r8 = rotate_right64 (r8, 0x12);
    r9 &= rbp;
    rax &= rdx;
    rax ^= rsi;
    rdi += rax;
    rax = rdx;
    rax = rotate_right64 (rax, 0xe);
    r8 ^= rax;
    rax = rdx;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r8;
    r8 = rbp;
    rax += rdi;
    rdi = rbp;
    r8 = rotate_right64 (r8, 0x1c);
    rdi = rotate_left64 (rdi, 0x1e);
    r13 += rax;
    rdi ^= r8;
    r8 = rbp;
    r8 = rotate_left64 (r8, 0x19);
    rdi ^= r8;
    r8 = r12;
    r8 |= rbp;
    r8 &= r14;
    r8 |= r9;
    r9 = rbp;
    r8 += rdi;
    rdi = *((rsp + 0xe8));
    r8 += rax;
    rax = *((rsp + 0xe8));
    rdi >>= 6;
    rax = rotate_right64 (rax, 0x13);
    rbx = rax;
    rax = *((rsp + 0xe8));
    rax = rotate_left64 (rax, 3);
    rax ^= rbx;
    rbx = rdi;
    rdi = *((rsp + 0x78));
    rdi += *((rsp + 0xc0));
    rbx ^= rax;
    rax = rbx + rdi;
    rdi = r15;
    rdi = rotate_right64 (rdi, 1);
    r10 = rotate_right64 (r10, 8);
    r9 &= r8;
    rbx = r10;
    r11 = rotate_right64 (r11, 0x13);
    r10 = *((rsp + 0x90));
    rbx ^= rdi;
    rdi = r15;
    rdi >>= 7;
    rbx ^= rdi;
    rdi = 0xe49b69c19ef14ad2;
    rbx += rax;
    rax = rcx;
    rax ^= rdx;
    rdi += rbx;
    rax &= r13;
    rsi += rdi;
    rdi = r13;
    rax ^= rcx;
    rdi = rotate_right64 (rdi, 0x12);
    rsi += rax;
    rax = r13;
    rax = rotate_right64 (rax, 0xe);
    rdi ^= rax;
    rax = r13;
    rax = rotate_left64 (rax, 0x17);
    rax ^= rdi;
    rdi = r8;
    rax += rsi;
    rsi = r8;
    rdi = rotate_right64 (rdi, 0x1c);
    rsi = rotate_left64 (rsi, 0x1e);
    r14 += rax;
    rsi ^= rdi;
    rdi = r8;
    rdi = rotate_left64 (rdi, 0x19);
    rsi ^= rdi;
    rdi = rbp;
    rdi |= r8;
    rdi &= r12;
    rdi |= r9;
    r9 = r8;
    rdi += rsi;
    rsi = *((rsp + 0xc8));
    rdi += rax;
    rax = *((rsp + 0xf0));
    rax = rotate_left64 (rax, 3);
    rax ^= r11;
    r11 = *((rsp + 0xf0));
    rsi += r15;
    r9 &= rdi;
    r11 >>= 6;
    r11 ^= rax;
    rax = r11 + rsi;
    rsi = *((rsp + 0x88));
    r11 = *((rsp + 0x88));
    rsi = rotate_right64 (rsi, 1);
    r11 = rotate_right64 (r11, 8);
    r11 ^= rsi;
    rsi = *((rsp + 0x88));
    rsi >>= 7;
    r11 ^= rsi;
    rsi = 0xefbe4786384f25e3;
    r11 += rax;
    rax = rdx;
    rax ^= r13;
    rsi += r11;
    rax &= r14;
    rcx += rsi;
    rsi = r14;
    rax ^= rdx;
    rsi = rotate_right64 (rsi, 0x12);
    rcx += rax;
    rax = r14;
    rax = rotate_right64 (rax, 0xe);
    rsi ^= rax;
    rax = r14;
    rax = rotate_left64 (rax, 0x17);
    rax ^= rsi;
    rsi = rdi;
    rax += rcx;
    rcx = rdi;
    rsi = rotate_right64 (rsi, 0x1c);
    rcx = rotate_left64 (rcx, 0x1e);
    r12 += rax;
    rcx ^= rsi;
    rsi = rdi;
    rsi = rotate_left64 (rsi, 0x19);
    rcx ^= rsi;
    rsi = r8;
    rsi |= rdi;
    rsi &= rbp;
    rsi |= r9;
    r9 = rdi;
    rsi += rcx;
    r10 = rotate_right64 (r10, 1);
    rsi += rax;
    rax = *((rsp + 0x90));
    r15 = rsi;
    rax = rotate_right64 (rax, 8);
    rax ^= r10;
    r10 = *((rsp + 0x90));
    rcx = *((rsp + 0x88));
    rcx += *((rsp + 0xd0));
    r10 >>= 7;
    r10 ^= rax;
    rax = r10 + rcx;
    rcx = rbx;
    r10 = rbx;
    rcx = rotate_right64 (rcx, 0x13);
    r10 = rotate_left64 (r10, 3);
    r10 ^= rcx;
    rcx = rbx;
    rcx >>= 6;
    r10 ^= rcx;
    rcx = 0xfc19dc68b8cd5b5;
    r10 += rax;
    rax = r13;
    rax ^= r14;
    rcx += r10;
    rax &= r12;
    rdx += rcx;
    rcx = r12;
    rax ^= r13;
    rcx = rotate_right64 (rcx, 0x12);
    rdx += rax;
    rax = r12;
    rax = rotate_right64 (rax, 0xe);
    rcx ^= rax;
    rax = r12;
    rax = rotate_left64 (rax, 0x17);
    rax ^= rcx;
    rcx = rsi;
    rax += rdx;
    rdx = rsi;
    rcx = rotate_right64 (rcx, 0x1c);
    rdx = rotate_left64 (rdx, 0x1e);
    rbp += rax;
    rdx ^= rcx;
    rcx = rsi;
    rcx = rotate_left64 (rcx, 0x19);
    rdx ^= rcx;
    rcx = rdi;
    rcx |= rsi;
    r9 &= rsi;
    rcx &= r8;
    rcx |= r9;
    r9 = *((rsp + 0x98));
    rcx += rdx;
    rdx = *((rsp + 0x90));
    rdx += *((rsp + 0xd8));
    rcx += rax;
    rax = *((rsp + 0x98));
    r9 = rotate_right64 (r9, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r9;
    r9 = *((rsp + 0x98));
    r9 >>= 7;
    r9 ^= rax;
    rax = r9 + rdx;
    rdx = r11;
    r9 = r11;
    rdx = rotate_right64 (rdx, 0x13);
    r9 = rotate_left64 (r9, 3);
    r9 ^= rdx;
    rdx = r11;
    rdx >>= 6;
    r9 ^= rdx;
    rdx = r14;
    r9 += rax;
    rdx ^= r12;
    rax = 0x240ca1cc77ac9c65;
    rax += r9;
    rdx &= rbp;
    rdx ^= r14;
    r13 += rax;
    rax = rbp;
    r13 += rdx;
    rdx = rbp;
    rax = rotate_right64 (rax, 0x12);
    rdx = rotate_right64 (rdx, 0xe);
    rax ^= rdx;
    rdx = rbp;
    rdx = rotate_left64 (rdx, 0x17);
    rdx ^= rax;
    rax = rcx;
    rdx += r13;
    r13 = rcx;
    rax = rotate_right64 (rax, 0x1c);
    r8 += rdx;
    r13 = rotate_left64 (r13, 0x1e);
    r15 &= rcx;
    r13 ^= rax;
    rax = rcx;
    rax = rotate_left64 (rax, 0x19);
    r13 ^= rax;
    rax = rsi;
    rax |= rcx;
    rax &= rdi;
    rax |= r15;
    r15 = r10;
    rax += r13;
    r13 = *((rsp + 0xa0));
    r15 = rotate_right64 (r15, 0x13);
    rax += rdx;
    rdx = *((rsp + 0xa0));
    r13 = rotate_right64 (r13, 8);
    rdx = rotate_right64 (rdx, 1);
    rdx ^= r13;
    r13 = *((rsp + 0xa0));
    r13 >>= 7;
    r13 ^= rdx;
    rdx = *((rsp + 0x98));
    rdx += *((rsp + 0xe0));
    r13 += rdx;
    rdx = r10;
    rdx = rotate_left64 (rdx, 3);
    rdx ^= r15;
    r15 = r10;
    r15 >>= 6;
    rdx ^= r15;
    r15 = r13 + rdx;
    r13 = r12;
    rdx = 0x2de92c6f592b0275;
    r13 ^= rbp;
    rdx += r15;
    *((rsp - 0x30)) = r15;
    r15 = rcx;
    r13 &= r8;
    r14 += rdx;
    rdx = r8;
    r13 ^= r12;
    rdx = rotate_right64 (rdx, 0x12);
    r14 += r13;
    r13 = r8;
    r13 = rotate_right64 (r13, 0xe);
    rdx ^= r13;
    r13 = r8;
    r13 = rotate_left64 (r13, 0x17);
    r13 ^= rdx;
    rdx = rax;
    r15 &= rax;
    r13 += r14;
    r14 = rax;
    rdx = rotate_right64 (rdx, 0x1c);
    r14 = rotate_left64 (r14, 0x1e);
    rdi += r13;
    r14 ^= rdx;
    rdx = rax;
    rdx = rotate_left64 (rdx, 0x19);
    r14 ^= rdx;
    rdx = rcx;
    rdx |= rax;
    rdx &= rsi;
    rdx |= r15;
    rdx += r14;
    r14 = *((rsp + 0xa8));
    rdx += r13;
    r13 = *((rsp + 0xa8));
    r14 = rotate_right64 (r14, 8);
    r13 = rotate_right64 (r13, 1);
    r13 ^= r14;
    r14 = *((rsp + 0xa8));
    r14 >>= 7;
    r14 ^= r13;
    r13 = *((rsp + 0xa0));
    r13 += *((rsp + 0xe8));
    r14 += r13;
    r13 = r9;
    r13 = rotate_right64 (r13, 0x13);
    r15 = r13;
    r13 = r9;
    r13 = rotate_left64 (r13, 3);
    r13 ^= r15;
    r15 = r9;
    r15 >>= 6;
    r13 ^= r15;
    r15 = rax;
    r14 += r13;
    r13 = rbp;
    *((rsp - 0x48)) = r14;
    r13 ^= r8;
    r14 = 0x4a7484aa6ea6e483;
    r14 += *((rsp - 0x48));
    r12 += r14;
    r13 &= rdi;
    r14 = rdi;
    r13 ^= rbp;
    r14 = rotate_right64 (r14, 0xe);
    r15 &= rdx;
    r13 = r13 + r12;
    r12 = r14;
    r14 = rdi;
    r14 = rotate_right64 (r14, 0x12);
    r14 ^= r12;
    r12 = rdi;
    r12 = rotate_left64 (r12, 0x17);
    r12 ^= r14;
    r14 = rdx;
    r12 += r13;
    r13 = rdx;
    r14 = rotate_right64 (r14, 0x1c);
    r13 = rotate_left64 (r13, 0x1e);
    rsi += r12;
    r13 ^= r14;
    r14 = rdx;
    r14 = rotate_left64 (r14, 0x19);
    r13 ^= r14;
    r14 = rax;
    r14 |= rdx;
    r14 &= rcx;
    r14 |= r15;
    r14 += r13;
    r13 = *((rsp + 0xb0));
    r14 += r12;
    r13 = rotate_right64 (r13, 1);
    r12 = r13;
    r13 = *((rsp + 0xb0));
    r13 = rotate_right64 (r13, 8);
    r12 ^= r13;
    r13 = *((rsp + 0xb0));
    r13 >>= 7;
    r13 ^= r12;
    r12 = *((rsp + 0xa8));
    r12 += *((rsp + 0xf0));
    r13 += r12;
    r12 = *((rsp - 0x30));
    r15 = *((rsp - 0x30));
    r12 = rotate_left64 (r12, 3);
    r15 = rotate_right64 (r15, 0x13);
    r12 ^= r15;
    r15 = *((rsp - 0x30));
    r15 >>= 6;
    r12 ^= r15;
    r15 = r13 + r12;
    r13 = r8;
    r13 ^= rdi;
    *((rsp - 0x40)) = r15;
    r12 = r13;
    r13 = 0x5cb0a9dcbd41fbd4;
    r12 &= rsi;
    r15 = r12;
    r15 ^= r8;
    r13 += *((rsp - 0x40));
    rbp += r13;
    r13 = rsi;
    r12 = r15 + rbp;
    r13 = rotate_right64 (r13, 0x12);
    r15 = r14;
    rbp = rotate_right64 (rbp, 0xe);
    r15 = rotate_left64 (r15, 0x1e);
    r13 ^= rbp;
    rbp = rotate_left64 (rbp, 0x17);
    rbp ^= r13;
    r13 = r14;
    rbp += r12;
    r13 = rotate_right64 (r13, 0x1c);
    r12 = r15;
    r15 = rdx;
    r12 ^= r13;
    r13 = r14;
    r15 &= r14;
    rcx += rbp;
    r13 = rotate_left64 (r13, 0x19);
    r12 ^= r13;
    r13 = rdx;
    r13 |= r14;
    r13 &= rax;
    r13 |= r15;
    r15 = *((rsp + 0xb8));
    r13 += r12;
    r13 += rbp;
    rbp = *((rsp + 0xb8));
    r15 = rotate_right64 (r15, 1);
    rbp = rotate_right64 (rbp, 8);
    rbp ^= r15;
    r15 = *((rsp + 0xb8));
    r12 = *((rsp - 0x48));
    r15 >>= 7;
    rbp ^= r15;
    r15 = r12;
    r12 = rotate_left64 (r12, 3);
    rbp += *((rsp + 0xb0));
    r15 = rotate_right64 (r15, 0x13);
    rbp += rbx;
    r12 ^= r15;
    r15 = *((rsp - 0x48));
    r15 >>= 6;
    r12 ^= r15;
    rbp += r12;
    r12 = 0x76f988da831153b5;
    *((rsp - 0x70)) = rbp;
    r12 += *((rsp - 0x70));
    rbp ^= rsi;
    r8 += r12;
    rbp &= rcx;
    r15 = rbp;
    r15 ^= rdi;
    rbp = r15 + r8;
    r15 = rcx;
    r8 = rcx;
    r15 = rotate_right64 (r15, 0x12);
    r8 = rotate_right64 (r8, 0xe);
    r12 = r15;
    r15 = r13;
    r12 ^= r8;
    r8 = rcx;
    r15 = rotate_right64 (r15, 0x1c);
    r8 = rotate_left64 (r8, 0x17);
    r8 ^= r12;
    r8 += rbp;
    rbp = rotate_left64 (rbp, 0x1e);
    rax += r8;
    rbp ^= r15;
    r15 = r13;
    r15 = rotate_left64 (r15, 0x19);
    rbp ^= r15;
    r15 = r14;
    r15 |= r13;
    r12 = r15;
    r15 = r14;
    r15 &= r13;
    r12 &= rdx;
    r12 |= r15;
    r12 += rbp;
    r12 += r8;
    r8 = *((rsp + 0xc0));
    r8 = rotate_right64 (r8, 1);
    r8 = *((rsp + 0xc0));
    r8 = rotate_right64 (r8, 8);
    r8 ^= rbp;
    rbp = *((rsp + 0xc0));
    rbp >>= 7;
    r8 ^= rbp;
    rbp = *((rsp - 0x40));
    r8 += *((rsp + 0xb8));
    r8 += r11;
    r15 = rbp;
    r15 = rotate_right64 (r15, 0x13);
    rbp = rotate_left64 (rbp, 3);
    rbp ^= r15;
    r15 = *((rsp - 0x40));
    r15 >>= 6;
    rbp ^= r15;
    r15 = r13;
    r8 += rbp;
    r15 &= r12;
    *((rsp - 0x38)) = r8;
    r8 = rsi;
    rbp += *((rsp - 0x38));
    r8 ^= rcx;
    rdi += rbp;
    r8 &= rax;
    rbp = rotate_right64 (rbp, 0x12);
    r8 ^= rsi;
    r8 = r8 + rdi;
    rdi = rax;
    rdi = rotate_right64 (rdi, 0xe);
    rbp ^= rdi;
    rdi = rax;
    rdi = rotate_left64 (rdi, 0x17);
    rdi ^= rbp;
    rdi += r8;
    r8 = r12;
    rbp = rotate_right64 (rbp, 0x1c);
    r8 = rotate_left64 (r8, 0x1e);
    rdx += rdi;
    r8 ^= rbp;
    rbp = rotate_left64 (rbp, 0x19);
    r8 ^= rbp;
    rbp |= r12;
    rbp &= r14;
    rbp |= r15;
    rbp += r8;
    rbp += rdi;
    rdi = *((rsp + 0xc8));
    rdi = rotate_right64 (rdi, 1);
    r8 = rdi;
    rdi = *((rsp + 0xc8));
    rdi = rotate_right64 (rdi, 8);
    rdi ^= r8;
    r8 = *((rsp + 0xc8));
    r8 >>= 7;
    rdi ^= r8;
    r8 = *((rsp - 0x70));
    rdi += *((rsp + 0xc0));
    rdi += r10;
    r15 = r8;
    r8 = rotate_left64 (r8, 3);
    r15 = rotate_right64 (r15, 0x13);
    r8 ^= r15;
    r15 = *((rsp - 0x70));
    r15 >>= 6;
    r8 ^= r15;
    r15 = r12;
    rdi += r8;
    r15 &= rbp;
    r8 = 0xa831c66d2db43210;
    *((rsp - 0x68)) = rdi;
    rdi = rcx;
    r8 += *((rsp - 0x68));
    rdi ^= rax;
    rsi += r8;
    r8 = rdx;
    rdi &= rdx;
    r8 = rotate_right64 (r8, 0x12);
    rdi ^= rcx;
    rdi = rdi + rsi;
    rsi = rdx;
    rsi = rotate_right64 (rsi, 0xe);
    r8 ^= rsi;
    rsi = rdx;
    rsi = rotate_left64 (rsi, 0x17);
    rsi ^= r8;
    r8 = rbp;
    rsi += rdi;
    rdi = rbp;
    r8 = rotate_right64 (r8, 0x1c);
    rdi = rotate_left64 (rdi, 0x1e);
    r14 += rsi;
    rdi ^= r8;
    r8 = rbp;
    r8 = rotate_left64 (r8, 0x19);
    rdi ^= r8;
    r8 = r12;
    r8 |= rbp;
    r8 &= r13;
    r8 |= r15;
    r8 += rdi;
    r8 += rsi;
    rsi = *((rsp + 0xd0));
    rsi = rotate_right64 (rsi, 1);
    rdi = rsi;
    rsi = *((rsp + 0xd0));
    rsi = rotate_right64 (rsi, 8);
    rsi ^= rdi;
    rdi = *((rsp + 0xd0));
    rdi >>= 7;
    rsi ^= rdi;
    rdi = *((rsp - 0x38));
    rsi += *((rsp + 0xc8));
    rsi += r9;
    r15 = rdi;
    rdi = rotate_left64 (rdi, 3);
    r15 = rotate_right64 (r15, 0x13);
    rdi ^= r15;
    r15 = *((rsp - 0x38));
    r15 >>= 6;
    rdi ^= r15;
    r15 = rbp;
    rsi += rdi;
    rdi = 0xb00327c898fb213f;
    *((rsp - 0x60)) = rsi;
    rsi = rax;
    rdi += *((rsp - 0x60));
    rsi ^= rdx;
    rcx += rdi;
    rdi = r14;
    rsi &= r14;
    rdi = rotate_right64 (rdi, 0x12);
    rsi ^= rax;
    rsi = rsi + rcx;
    rcx = r14;
    rcx = rotate_right64 (rcx, 0xe);
    rdi ^= rcx;
    rcx = r14;
    rcx = rotate_left64 (rcx, 0x17);
    rcx ^= rdi;
    rdi = r8;
    rcx += rsi;
    rsi = r8;
    rdi = rotate_right64 (rdi, 0x1c);
    rsi = rotate_left64 (rsi, 0x1e);
    r13 += rcx;
    rsi ^= rdi;
    rdi = r8;
    rdi = rotate_left64 (rdi, 0x19);
    rsi ^= rdi;
    rdi = rbp;
    rdi |= r8;
    rdi &= r12;
    r15 &= r8;
    rdi |= r15;
    rdi += rsi;
    rdi += rcx;
    rcx = *((rsp + 0xd8));
    rcx = rotate_right64 (rcx, 1);
    rsi = rcx;
    rcx = *((rsp + 0xd8));
    rcx = rotate_right64 (rcx, 8);
    rcx ^= rsi;
    rsi = *((rsp + 0xd8));
    rsi >>= 7;
    rcx ^= rsi;
    rsi = *((rsp - 0x68));
    rcx += *((rsp + 0xd0));
    rcx += *((rsp - 0x30));
    r15 = rsi;
    rsi = rotate_left64 (rsi, 3);
    r15 = rotate_right64 (r15, 0x13);
    rsi ^= r15;
    r15 = *((rsp - 0x68));
    r15 >>= 6;
    rsi ^= r15;
    r15 = 0xbf597fc7beef0ee4;
    rcx += rsi;
    rsi = rcx;
    rcx = rdx;
    rcx ^= r14;
    r15 += rsi;
    *((rsp - 0x28)) = rsi;
    rcx &= r13;
    rax += r15;
    r15 = rdi;
    rcx ^= rdx;
    r15 = rotate_left64 (r15, 0x1e);
    rsi = rcx + rax;
    rax = r13;
    rax = rotate_right64 (rax, 0xe);
    rcx = rax;
    rax = r13;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rcx;
    rcx = r13;
    rcx = rotate_left64 (rcx, 0x17);
    rcx ^= rax;
    rax = rdi;
    rcx += rsi;
    rax = rotate_right64 (rax, 0x1c);
    rsi = r15;
    r15 = r8;
    r12 += rcx;
    rsi ^= rax;
    rax = rdi;
    r15 &= rdi;
    rax = rotate_left64 (rax, 0x19);
    rsi ^= rax;
    rax = r8;
    rax |= rdi;
    rax &= rbp;
    rax |= r15;
    r15 = *((rsp + 0xe0));
    rax += rsi;
    rax += rcx;
    rcx = *((rsp + 0xe0));
    r15 >>= 7;
    rcx = rotate_right64 (rcx, 1);
    rsi = rcx;
    rcx = *((rsp + 0xe0));
    rcx = rotate_right64 (rcx, 8);
    rcx ^= rsi;
    rsi = *((rsp - 0x60));
    rcx ^= r15;
    rcx += *((rsp + 0xd8));
    rcx += *((rsp - 0x48));
    r15 = rsi;
    rsi = rotate_left64 (rsi, 3);
    r15 = rotate_right64 (r15, 0x13);
    rsi ^= r15;
    r15 = *((rsp - 0x60));
    r15 >>= 6;
    rsi ^= r15;
    r15 = rdi;
    rcx += rsi;
    rsi = 0xc6e00bf33da88fc2;
    *((rsp - 0x58)) = rcx;
    rcx = r14;
    rsi += *((rsp - 0x58));
    rcx ^= r13;
    rdx += rsi;
    rsi = r12;
    rcx &= r12;
    rsi = rotate_right64 (rsi, 0x12);
    rcx ^= r14;
    rcx = rcx + rdx;
    rdx = r12;
    rdx = rotate_right64 (rdx, 0xe);
    rsi ^= rdx;
    rdx = r12;
    rdx = rotate_left64 (rdx, 0x17);
    rdx ^= rsi;
    rdx += rcx;
    rcx = rax;
    r15 &= rax;
    rcx = rotate_right64 (rcx, 0x1c);
    rbp += rdx;
    rsi = rcx;
    rcx = rax;
    rcx = rotate_left64 (rcx, 0x1e);
    rcx ^= rsi;
    rsi = rax;
    rsi = rotate_left64 (rsi, 0x19);
    rcx ^= rsi;
    rsi = rdi;
    rsi |= rax;
    rsi &= r8;
    rsi |= r15;
    rsi += rcx;
    rsi += rdx;
    rdx = *((rsp + 0xe8));
    rdx = rotate_right64 (rdx, 1);
    rcx = rdx;
    rdx = *((rsp + 0xe8));
    rdx = rotate_right64 (rdx, 8);
    rdx ^= rcx;
    rcx = *((rsp + 0xe8));
    rcx >>= 7;
    rdx ^= rcx;
    rcx = *((rsp - 0x28));
    rdx += *((rsp + 0xe0));
    rdx += *((rsp - 0x40));
    r15 = rcx;
    rcx = rotate_left64 (rcx, 3);
    r15 = rotate_right64 (r15, 0x13);
    rcx ^= r15;
    r15 = *((rsp - 0x28));
    r15 >>= 6;
    rcx ^= r15;
    rdx += rcx;
    rcx = 0xd5a79147930aa725;
    r15 = rdx;
    rdx = r13;
    rdx ^= r12;
    rcx += r15;
    *((rsp - 0x50)) = r15;
    r15 = rax;
    rdx &= rbp;
    r14 += rcx;
    rcx = rbp;
    rdx ^= r13;
    r14 += rdx;
    rdx = rbp;
    rdx = rotate_right64 (rdx, 0xe);
    rcx = rotate_right64 (rcx, 0x12);
    r15 &= rsi;
    rcx ^= rdx;
    rdx = rbp;
    rdx = rotate_left64 (rdx, 0x17);
    rdx ^= rcx;
    rdx += r14;
    r14 = rsi;
    r14 = rotate_right64 (r14, 0x1c);
    r8 += rdx;
    rcx = r14;
    r14 = rsi;
    r14 = rotate_left64 (r14, 0x1e);
    r14 ^= rcx;
    rcx = rsi;
    rcx = rotate_left64 (rcx, 0x19);
    r14 ^= rcx;
    rcx = rax;
    rcx |= rsi;
    rcx &= rdi;
    rcx |= r15;
    rcx += r14;
    rcx += rdx;
    rdx = *((rsp + 0xf0));
    rdx = rotate_right64 (rdx, 1);
    r14 = rdx;
    rdx = *((rsp + 0xf0));
    rdx = rotate_right64 (rdx, 8);
    rdx ^= r14;
    r14 = *((rsp + 0xf0));
    r14 >>= 7;
    rdx ^= r14;
    r14 = *((rsp - 0x58));
    rdx += *((rsp + 0xe8));
    rdx += *((rsp - 0x70));
    r15 = r14;
    r14 = rotate_left64 (r14, 3);
    r15 = rotate_right64 (r15, 0x13);
    r14 ^= r15;
    r15 = *((rsp - 0x58));
    r15 >>= 6;
    r14 ^= r15;
    rdx += r14;
    r15 = rdx;
    rdx = r12;
    rdx ^= rbp;
    *((rsp - 0x18)) = r15;
    r14 = rdx;
    rdx = 0x6ca6351e003826f;
    r14 &= r8;
    rdx += r15;
    r15 = rsi;
    r13 += rdx;
    rdx = r8;
    r14 ^= r12;
    r15 &= rcx;
    rdx = rotate_right64 (rdx, 0xe);
    r13 += r14;
    r14 = rdx;
    rdx = r8;
    rdx = rotate_right64 (rdx, 0x12);
    rdx ^= r14;
    r14 = r8;
    r14 = rotate_left64 (r14, 0x17);
    r14 ^= rdx;
    rdx = rcx;
    r14 += r13;
    rdx = rotate_right64 (rdx, 0x1c);
    r13 = rdi + r14;
    rdi = rcx;
    rdi = rotate_left64 (rdi, 0x1e);
    rdi ^= rdx;
    rdx = rcx;
    rdx = rotate_left64 (rdx, 0x19);
    rdi ^= rdx;
    rdx = rsi;
    rdx |= rcx;
    rdx &= rax;
    rdx |= r15;
    rdx += rdi;
    rdi = rbx;
    rdi = rotate_right64 (rdi, 1);
    rdx += r14;
    r14 = rdi;
    rdi = rbx;
    rdi = rotate_right64 (rdi, 8);
    rdi ^= r14;
    r14 = rbx;
    r14 >>= 7;
    rdi ^= r14;
    rdi += *((rsp + 0xf0));
    rdi += *((rsp - 0x38));
    r14 = *((rsp - 0x50));
    r15 = *((rsp - 0x50));
    r14 = rotate_left64 (r14, 3);
    r15 = rotate_right64 (r15, 0x13);
    r14 ^= r15;
    r15 = *((rsp - 0x50));
    r15 >>= 6;
    r14 ^= r15;
    r15 = rcx;
    rdi += r14;
    r15 &= rdx;
    r14 = 0x142929670a0e6e70;
    *((rsp - 0x20)) = rdi;
    rdi = rbp;
    r14 += *((rsp - 0x20));
    rdi ^= r8;
    r12 += r14;
    rdi &= r13;
    rdi ^= rbp;
    rdi = rdi + r12;
    r12 = r13;
    r12 = rotate_right64 (r12, 0xe);
    r14 = r12;
    r12 = r13;
    r12 = rotate_right64 (r12, 0x12);
    r12 ^= r14;
    r14 = r13;
    r14 = rotate_left64 (r14, 0x17);
    r12 ^= r14;
    r12 += rdi;
    rdi = rax + r12;
    rax = rdx;
    rax = rotate_right64 (rax, 0x1c);
    r14 = rax;
    rax = rdx;
    rax = rotate_left64 (rax, 0x1e);
    rax ^= r14;
    r14 = rdx;
    r14 = rotate_left64 (r14, 0x19);
    rax ^= r14;
    r14 = rcx;
    r14 |= rdx;
    r14 &= rsi;
    r14 |= r15;
    r15 = *((rsp - 0x18));
    r14 += rax;
    rax = r11;
    rax = rotate_right64 (rax, 1);
    r12 += r14;
    r14 = rax;
    rax = r11;
    rax = rotate_right64 (rax, 8);
    rax ^= r14;
    r14 = r11;
    r14 >>= 7;
    rax ^= r14;
    r14 = r15;
    rbx += rax;
    rax = r15;
    rbx += *((rsp - 0x68));
    r14 = rotate_right64 (r14, 0x13);
    rax = rotate_left64 (rax, 3);
    rax ^= r14;
    r14 = r15;
    r14 >>= 6;
    rax ^= r14;
    r14 = rdx;
    r15 = rbx + rax;
    rax = r8;
    r14 &= r12;
    rbx = 0x27b70a8546d22ffc;
    rax ^= r13;
    rbx += r15;
    rax &= rdi;
    rbp += rbx;
    rbx = rdi;
    rax ^= r8;
    rbx = rotate_right64 (rbx, 0xe);
    rbp += rax;
    rax = rdi;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rbx;
    rbx = rdi;
    rbx = rotate_left64 (rbx, 0x17);
    rax ^= rbx;
    rbx = r12;
    rax += rbp;
    rbx = rotate_left64 (rbx, 0x1e);
    rbp = rotate_right64 (rbp, 0x1c);
    rsi += rax;
    rbx ^= rbp;
    rbp = rotate_left64 (rbp, 0x19);
    rbx ^= rbp;
    rbp |= r12;
    rbp &= rcx;
    rbp |= r14;
    r14 = *((rsp - 0x20));
    rbx += rbp;
    rbx += rax;
    rax = r10;
    rbp = rotate_right64 (rbp, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rbp;
    rbp >>= 7;
    rax ^= rbp;
    r11 += rax;
    rax = r14;
    rbp = rotate_right64 (rbp, 0x13);
    r11 += *((rsp - 0x60));
    rax = rotate_left64 (rax, 3);
    rax ^= rbp;
    rbp >>= 6;
    rax ^= rbp;
    r14 = r11 + rax;
    rax = r13;
    rbp &= rbx;
    r11 = 0x2e1b21385c26c926;
    rax ^= rdi;
    r11 += r14;
    rax &= rsi;
    r8 += r11;
    r11 = rsi;
    rax ^= r13;
    r11 = rotate_right64 (r11, 0xe);
    r8 += rax;
    rax = rsi;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = rsi;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    r11 = rbx;
    rax += r8;
    r8 = rbx;
    r11 = rotate_right64 (r11, 0x1c);
    r8 = rotate_left64 (r8, 0x1e);
    rcx += rax;
    r8 ^= r11;
    r11 = rbx;
    r11 = rotate_left64 (r11, 0x19);
    r8 ^= r11;
    r11 = r12;
    r11 |= rbx;
    r11 &= rdx;
    r11 |= rbp;
    r8 += r11;
    r11 = r9;
    r8 += rax;
    rax = r9;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = r9;
    rbp = rotate_left64 (rbp, 0x19);
    r11 >>= 7;
    rax ^= r11;
    r11 = r15;
    r10 += rax;
    rax = r15;
    r11 = rotate_right64 (r11, 0x13);
    r10 += *((rsp - 0x28));
    rax = rotate_left64 (rax, 3);
    rax ^= r11;
    r11 = r15;
    r11 >>= 6;
    rax ^= r11;
    r10 += rax;
    rax = rdi;
    r11 = r10;
    rax ^= rsi;
    r10 = 0x4d2c6dfc5ac42aed;
    r10 += r11;
    rax &= rcx;
    *((rsp - 0x10)) = r11;
    rax ^= rdi;
    r13 += r10;
    r10 = rcx;
    r13 += rax;
    rax = rcx;
    r10 = rotate_right64 (r10, 0xe);
    rax = rotate_right64 (rax, 0x12);
    rax ^= r10;
    r10 = rcx;
    r10 = rotate_left64 (r10, 0x17);
    rax ^= r10;
    r10 = r8;
    r10 = rotate_right64 (r10, 0x1c);
    rax += r13;
    r13 = *((rsp - 0x30));
    r11 = r10;
    r10 = r8;
    rdx += rax;
    r10 = rotate_left64 (r10, 0x1e);
    r10 ^= r11;
    r10 ^= rbp;
    rbp |= r8;
    r11 = rbp;
    rbp &= r8;
    r11 &= r12;
    r11 |= rbp;
    r10 += r11;
    r11 = r13;
    rbp >>= 6;
    r10 += rax;
    rax = r13;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = r13;
    r11 >>= 7;
    rax ^= r11;
    r9 += rax;
    rax = r14;
    r9 += *((rsp - 0x58));
    rax = rotate_right64 (rax, 0x13);
    r11 = rax;
    rax = r14;
    rax = rotate_left64 (rax, 3);
    rax ^= r11;
    rax ^= rbp;
    r9 += rax;
    r9 = rsi;
    r9 ^= rcx;
    *((rsp - 0x30)) = rbp;
    rax = r9;
    r9 = 0x53380d139d95b3df;
    r9 += rbp;
    rax &= rdx;
    rax ^= rsi;
    rdi += r9;
    r9 = rdx;
    rdi += rax;
    rax = rdx;
    r9 = rotate_right64 (r9, 0xe);
    rax = rotate_right64 (rax, 0x12);
    rax ^= r9;
    r9 = rdx;
    r9 = rotate_left64 (r9, 0x17);
    rax ^= r9;
    rax += rdi;
    rdi = r10;
    rdi = rotate_right64 (rdi, 0x1c);
    r9 = r12 + rax;
    r12 = *((rsp - 0x48));
    r11 = rdi;
    rdi = r10;
    rdi = rotate_left64 (rdi, 0x1e);
    rbp &= r10;
    rdi ^= r11;
    r11 = r10;
    r11 = rotate_left64 (r11, 0x19);
    rdi ^= r11;
    r11 = r8;
    r11 |= r10;
    r11 &= rbx;
    r11 |= rbp;
    rdi += r11;
    r11 = r12;
    rdi += rax;
    rax = r12;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = r12;
    r11 >>= 7;
    rax ^= r11;
    rax += r13;
    r13 = *((rsp - 0x10));
    rax += *((rsp - 0x50));
    r11 = r13;
    rbp = rotate_right64 (rbp, 0x13);
    r11 = rotate_left64 (r11, 3);
    r11 ^= rbp;
    rbp >>= 6;
    r11 ^= rbp;
    rax += r11;
    r11 = 0x650a73548baf63de;
    r13 = rax;
    rax = rcx;
    rax ^= rdx;
    r11 += r13;
    *((rsp - 0x48)) = r13;
    r13 = *((rsp - 0x40));
    rax &= r9;
    rsi += r11;
    r11 = r9;
    rax ^= rcx;
    r11 = rotate_right64 (r11, 0xe);
    rsi += rax;
    rax = r9;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = r9;
    r11 = rotate_left64 (r11, 0x17);
    rbp &= rdi;
    rax ^= r11;
    r11 = rdi;
    rax += rsi;
    rsi = rdi;
    r11 = rotate_right64 (r11, 0x1c);
    rsi = rotate_left64 (rsi, 0x1e);
    rbx += rax;
    rsi ^= r11;
    r11 = rdi;
    r11 = rotate_left64 (r11, 0x19);
    rsi ^= r11;
    r11 = r10;
    r11 |= rdi;
    r11 &= r8;
    r11 |= rbp;
    rsi += r11;
    r11 = r13;
    rsi += rax;
    rax = r13;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = r13;
    r11 >>= 7;
    rax ^= r11;
    rax += r12;
    r12 = *((rsp - 0x30));
    rax += *((rsp - 0x18));
    r11 = r12;
    r11 = rotate_right64 (r11, 0x13);
    r11 = r12;
    r12 >>= 6;
    r11 = rotate_left64 (r11, 3);
    r11 ^= rbp;
    r11 ^= r12;
    rax += r11;
    r11 = 0x766a0abb3c77b2a8;
    r12 = rax;
    rax = rdx;
    rax ^= r9;
    r11 += r12;
    *((rsp - 0x40)) = r12;
    rax &= rbx;
    rax ^= rdx;
    rcx += r11;
    r11 = rbx;
    rbp &= rsi;
    rcx += rax;
    rax = rbx;
    r11 = rotate_right64 (r11, 0xe);
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = rbx;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    rax += rcx;
    rcx = rsi;
    rcx = rotate_right64 (rcx, 0x1c);
    r11 = r8 + rax;
    r8 = rcx;
    rcx = rsi;
    rcx = rotate_left64 (rcx, 0x1e);
    rcx ^= r8;
    r8 = rsi;
    r8 = rotate_left64 (r8, 0x19);
    rcx ^= r8;
    r8 = rdi;
    r8 |= rsi;
    r8 &= r10;
    r8 |= rbp;
    rbp = *((rsp - 0x48));
    rcx += r8;
    r8 = *((rsp - 0x70));
    rcx += rax;
    r12 = r8;
    rax = r8;
    rax = rotate_right64 (rax, 1);
    r12 = rotate_right64 (r12, 8);
    r12 ^= rax;
    rax = r8;
    r8 = rbp;
    rax >>= 7;
    r8 = rotate_right64 (r8, 0x13);
    r12 ^= rax;
    rax = rbp;
    rax = rotate_left64 (rax, 3);
    r12 += r13;
    r12 += *((rsp - 0x20));
    rax ^= r8;
    r8 = rbp;
    r8 >>= 6;
    rax ^= r8;
    r8 = 0x81c2c92e47edaee6;
    r13 = r12 + rax;
    rax = r9;
    rax ^= rbx;
    *((rsp - 8)) = r13;
    rax &= r11;
    r8 += r13;
    r13 = *((rsp - 0x38));
    rbp &= rcx;
    rax ^= r9;
    rdx += r8;
    r8 = r11;
    rdx += rax;
    rax = r11;
    r8 = rotate_right64 (r8, 0xe);
    r12 = r13;
    rax = rotate_right64 (rax, 0x12);
    r12 = rotate_right64 (r12, 8);
    rax ^= r8;
    r8 = r11;
    r8 = rotate_left64 (r8, 0x17);
    rax ^= r8;
    rax += rdx;
    rdx = rcx;
    rdx = rotate_right64 (rdx, 0x1c);
    r10 += rax;
    r8 = rdx;
    rdx = rcx;
    rdx = rotate_left64 (rdx, 0x1e);
    rdx ^= r8;
    r8 = rcx;
    r8 = rotate_left64 (r8, 0x19);
    rdx ^= r8;
    r8 = rsi;
    r8 |= rcx;
    r8 &= rdi;
    r8 |= rbp;
    rbp = rotate_right64 (rbp, 1);
    rdx += r8;
    r12 ^= rbp;
    rdx += rax;
    rbp >>= 7;
    r12 ^= rbp;
    rbp = *((rsp - 0x40));
    r12 += *((rsp - 0x70));
    r12 += r15;
    r8 = rbp;
    rax = rbp;
    r8 = rotate_right64 (r8, 0x13);
    rax = rotate_left64 (rax, 3);
    rax ^= r8;
    r8 = rbp;
    r8 >>= 6;
    rax ^= r8;
    rax += r12;
    r12 = 0x92722c851482353b;
    r8 = rax;
    rax = rbx;
    rax ^= r11;
    r12 += r8;
    *((rsp - 0x38)) = r8;
    rax &= r10;
    r9 += r12;
    r12 = r10;
    rax ^= rbx;
    r12 = rotate_left64 (r12, 0x17);
    r9 += rax;
    rax = r10;
    rax = rotate_right64 (rax, 0xe);
    r8 = rax;
    rax = r10;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r8;
    rax ^= r12;
    r12 = rdx;
    rax += r9;
    r12 = rotate_left64 (r12, 0x1e);
    r9 = rdi + rax;
    rdi = rdx;
    r8 = r12;
    r12 = rcx;
    rdi = rotate_right64 (rdi, 0x1c);
    r12 &= rdx;
    r8 ^= rdi;
    rdi = rdx;
    rdi = rotate_left64 (rdi, 0x19);
    r8 ^= rdi;
    rdi = rcx;
    rdi |= rdx;
    rdi &= rsi;
    rdi |= r12;
    rdi += r8;
    r12 = rdi + rax;
    rdi = *((rsp - 0x68));
    rax = *((rsp - 0x68));
    rax = rotate_right64 (rax, 1);
    rbp = rotate_right64 (rbp, 8);
    rbp ^= rax;
    rax = rdi;
    rax >>= 7;
    rbp ^= rax;
    rbp += r13;
    r13 = *((rsp - 8));
    rbp += r14;
    rdi = r13;
    rax = r13;
    rdi = rotate_right64 (rdi, 0x13);
    rax = rotate_left64 (rax, 3);
    rax ^= rdi;
    rdi = r13;
    rdi >>= 6;
    rax ^= rdi;
    rdi = 0xa2bfe8a14cf10364;
    r13 = rbp + rax;
    rax = r11;
    rax ^= r10;
    rdi += r13;
    *((rsp - 0x70)) = r13;
    r13 = rdx;
    rax &= r9;
    rbx += rdi;
    rdi = r9;
    r13 &= r12;
    rax ^= r11;
    rdi = rotate_right64 (rdi, 0xe);
    rbx += rax;
    rax = r9;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rdi;
    rdi = r9;
    rdi = rotate_left64 (rdi, 0x17);
    rax ^= rdi;
    rdi = r12;
    rax += rbx;
    rdi = rotate_left64 (rdi, 0x1e);
    rbx = rsi + rax;
    rsi = r12;
    rsi = rotate_right64 (rsi, 0x1c);
    rdi ^= rsi;
    rsi = r12;
    rsi = rotate_left64 (rsi, 0x19);
    rdi ^= rsi;
    rsi = rdx;
    rsi |= r12;
    rsi &= rcx;
    rsi |= r13;
    rsi += rdi;
    rdi = *((rsp - 0x38));
    rbp = rsi + rax;
    rsi = *((rsp - 0x60));
    r8 = *((rsp - 0x60));
    r13 = rsi;
    r8 = rotate_right64 (r8, 1);
    r13 >>= 7;
    rax = r8;
    r8 = rsi;
    rsi = rdi;
    r8 = rotate_right64 (r8, 8);
    r8 ^= rax;
    rax = rdi;
    r8 ^= r13;
    rsi = rotate_right64 (rsi, 0x13);
    r8 += *((rsp - 0x68));
    r8 += *((rsp - 0x10));
    rax = rotate_left64 (rax, 3);
    rax ^= rsi;
    rsi = rdi;
    rsi >>= 6;
    rax ^= rsi;
    rsi = 0xa81a664bbc423001;
    rax += r8;
    rdi = rax;
    rax = r10;
    rax ^= r9;
    rsi += rdi;
    *(rsp) = rdi;
    rdi = r12;
    rax &= rbx;
    r8 = rsi + r11;
    rdi &= rbp;
    rax ^= r10;
    r8 += rax;
    rax = rbx;
    rax = rotate_right64 (rax, 0xe);
    rsi = rax;
    rax = rbx;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rsi;
    rsi = rbx;
    rsi = rotate_left64 (rsi, 0x17);
    rax ^= rsi;
    rsi = rbp;
    rax += r8;
    rsi = rotate_left64 (rsi, 0x1e);
    r8 = *((rsp - 0x28));
    r11 = rcx + rax;
    rcx = rbp;
    rcx = rotate_right64 (rcx, 0x1c);
    rsi ^= rcx;
    rcx = rbp;
    rcx = rotate_left64 (rcx, 0x19);
    rsi ^= rcx;
    rcx = r12;
    rcx |= rbp;
    rcx &= rdx;
    rcx |= rdi;
    rdi = r8;
    rcx += rsi;
    rdi = rotate_right64 (rdi, 8);
    rsi = *((rsp - 0x70));
    r13 = rcx + rax;
    rax = r8;
    rax = rotate_right64 (rax, 1);
    rcx = rsi;
    rdi ^= rax;
    rax = r8;
    rcx = rotate_right64 (rcx, 0x13);
    rax >>= 7;
    rdi ^= rax;
    rax = rsi;
    rdi += *((rsp - 0x60));
    rdi += *((rsp - 0x30));
    rax = rotate_left64 (rax, 3);
    rax ^= rcx;
    rcx = rsi;
    rcx >>= 6;
    rax ^= rcx;
    rcx = 0xc24b8b70d0f89791;
    rax += rdi;
    rdi = *((rsp - 0x58));
    rsi = rax;
    rax = r9;
    rax ^= rbx;
    rcx += rsi;
    *((rsp - 0x60)) = rsi;
    rax &= r11;
    r10 += rcx;
    rax ^= r9;
    r10 += rax;
    rax = r11;
    rax = rotate_right64 (rax, 0xe);
    rcx = rax;
    rax = r11;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rcx;
    rcx = r11;
    rcx = rotate_left64 (rcx, 0x17);
    rax ^= rcx;
    rax += r10;
    r10 = r13;
    r10 = rotate_right64 (r10, 0x1c);
    rdx += rax;
    rsi = r10;
    r10 = r13;
    r10 = rotate_left64 (r10, 0x1e);
    rcx = r10;
    r10 = r13;
    rcx ^= rsi;
    r10 = rotate_left64 (r10, 0x19);
    rcx ^= r10;
    r10 = rbp;
    r10 |= r13;
    rsi = r10;
    r10 = rbp;
    r10 &= r13;
    rsi &= r12;
    rsi |= r10;
    rsi += rcx;
    r10 = rsi + rax;
    rax = rdi;
    rsi = rdi;
    rax = rotate_right64 (rax, 1);
    rsi = rotate_right64 (rsi, 8);
    rsi ^= rax;
    rax = rdi;
    rax >>= 7;
    rsi ^= rax;
    rsi += r8;
    r8 = *(rsp);
    rsi += *((rsp - 0x48));
    rcx = r8;
    rax = r8;
    rcx = rotate_right64 (rcx, 0x13);
    rax = rotate_left64 (rax, 3);
    rax ^= rcx;
    rcx = r8;
    rcx >>= 6;
    rax ^= rcx;
    rcx = 0xc76c51a30654be30;
    rax += rsi;
    r8 = rax;
    rax = rbx;
    rcx += r8;
    rax ^= r11;
    *((rsp - 0x28)) = r8;
    rdi = rcx + r9;
    r9 = rdx;
    rax &= rdx;
    r9 = rotate_right64 (r9, 0xe);
    rax ^= rbx;
    rcx = r9;
    r9 = rdx;
    rdi += rax;
    r9 = rotate_right64 (r9, 0x12);
    rax = r9;
    r9 = rdx;
    rax ^= rcx;
    r9 = rotate_left64 (r9, 0x17);
    rax ^= r9;
    r9 = r10;
    r9 = rotate_right64 (r9, 0x1c);
    rax += rdi;
    rcx = r9;
    r9 = r10;
    r12 += rax;
    r9 = rotate_left64 (r9, 0x1e);
    rsi = r9;
    r9 = r10;
    rsi ^= rcx;
    r9 = rotate_left64 (r9, 0x19);
    rsi ^= r9;
    r9 = r13;
    r9 |= r10;
    rcx = r9;
    r9 = r13;
    r9 &= r10;
    rcx &= rbp;
    rcx |= r9;
    rcx += rsi;
    r8 = rcx + rax;
    rcx = *((rsp - 0x50));
    rsi = *((rsp - 0x50));
    r9 = rcx;
    rsi = rotate_right64 (rsi, 1);
    r9 >>= 7;
    rax = rsi;
    rsi = rcx;
    rsi = rotate_right64 (rsi, 8);
    rsi ^= rax;
    rsi ^= r9;
    r9 = *((rsp - 0x60));
    rsi += *((rsp - 0x58));
    rsi += *((rsp - 0x40));
    rax = r9;
    rax = rotate_right64 (rax, 0x13);
    rcx = rax;
    rax = r9;
    r9 >>= 6;
    rax = rotate_left64 (rax, 3);
    rax ^= rcx;
    rcx = 0xd192e819d6ef5218;
    rax ^= r9;
    r9 = r10;
    rdi = rsi + rax;
    rax = r11;
    rax ^= rdx;
    rcx += rdi;
    *((rsp + 8)) = rdi;
    rax &= r12;
    rsi = rcx + rbx;
    rbx = *((rsp - 0x18));
    rax ^= r11;
    rsi += rax;
    rax = r12;
    rdi = rbx;
    rax = rotate_right64 (rax, 0xe);
    rcx = rax;
    rax = r12;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rcx;
    rcx = r12;
    rcx = rotate_left64 (rcx, 0x17);
    rax ^= rcx;
    rcx = r8;
    rax += rsi;
    rsi = r8;
    rcx = rotate_left64 (rcx, 0x1e);
    rsi = rotate_right64 (rsi, 0x1c);
    rbp += rax;
    rcx ^= rsi;
    rsi = r8;
    rsi = rotate_left64 (rsi, 0x19);
    r9 &= r8;
    rdi = rotate_right64 (rdi, 8);
    rcx ^= rsi;
    rsi = r10;
    rsi |= r8;
    rsi &= r13;
    rsi |= r9;
    rsi += rcx;
    rcx = rdi;
    rdi = *((rsp - 0x28));
    r9 = rsi + rax;
    rax = rbx;
    rax = rotate_right64 (rax, 1);
    rsi = rdi;
    rcx ^= rax;
    rax = rbx;
    rsi = rotate_right64 (rsi, 0x13);
    rax >>= 7;
    rcx ^= rax;
    rax = rdi;
    rcx += *((rsp - 0x50));
    rcx += *((rsp - 8));
    rax = rotate_left64 (rax, 3);
    rax ^= rsi;
    rsi = rdi;
    rsi >>= 6;
    rax ^= rsi;
    rax += rcx;
    rcx = 0xd69906245565a910;
    rsi = rax;
    rax = rdx;
    rax ^= r12;
    rcx += rsi;
    *((rsp - 0x18)) = rsi;
    rax &= rbp;
    rcx += r11;
    r11 = rbp;
    rax ^= rdx;
    r11 = rotate_left64 (r11, 0x17);
    rcx += rax;
    rax = rbp;
    rax = rotate_right64 (rax, 0xe);
    rsi = rax;
    rax = rbp;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rsi;
    rax ^= r11;
    r11 = r9;
    rax += rcx;
    rcx = r9;
    r13 += rax;
    r11 = rotate_left64 (r11, 0x1e);
    rcx = rotate_right64 (rcx, 0x1c);
    rdi = r11;
    r11 = r8;
    rdi ^= rcx;
    rcx = r9;
    r11 &= r9;
    rcx = rotate_left64 (rcx, 0x19);
    rdi ^= rcx;
    rcx = r8;
    rcx |= r9;
    rcx &= r10;
    rcx |= r11;
    r11 = *((rsp - 0x20));
    rdi += rcx;
    rdi += rax;
    rcx = r11;
    rax = r11;
    rcx = rotate_right64 (rcx, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rcx;
    rcx = r11;
    rcx >>= 7;
    rax ^= rcx;
    rax += rbx;
    rbx = *((rsp + 8));
    rax += *((rsp - 0x38));
    rsi = rbx;
    rcx = rbx;
    rbx >>= 6;
    rsi = rotate_right64 (rsi, 0x13);
    rcx = rotate_left64 (rcx, 3);
    rcx ^= rsi;
    rsi = r9;
    rcx ^= rbx;
    rax += rcx;
    rcx = 0xf40e35855771202a;
    rbx = rax;
    rax = r12;
    rax ^= rbp;
    rcx += rbx;
    *((rsp + 0x58)) = rbx;
    rax &= r13;
    rdx += rcx;
    rax ^= r12;
    rdx += rax;
    rax = r13;
    rax = rotate_right64 (rax, 0xe);
    rcx = rax;
    rax = r13;
    rax = rotate_right64 (rax, 0x12);
    rsi &= rdi;
    rax ^= rcx;
    rcx = r13;
    rcx = rotate_left64 (rcx, 0x17);
    rax ^= rcx;
    rax += rdx;
    rdx = rdi;
    rdx = rotate_right64 (rdx, 0x1c);
    r10 += rax;
    rcx = rdx;
    rdx = rdi;
    rdx = rotate_left64 (rdx, 0x1e);
    rdx ^= rcx;
    rcx = rdi;
    rcx = rotate_left64 (rcx, 0x19);
    rdx ^= rcx;
    rcx = r9;
    rcx |= rdi;
    rcx &= r8;
    rcx |= rsi;
    rdx += rcx;
    rdx += rax;
    rax = r15;
    rax = rotate_right64 (rax, 1);
    rcx = rax;
    rax = r15;
    rax = rotate_right64 (rax, 8);
    rax ^= rcx;
    rcx = r15;
    rcx >>= 7;
    rax ^= rcx;
    rax += r11;
    r11 = *((rsp - 0x18));
    rax += *((rsp - 0x70));
    rcx = r11;
    rcx = rotate_right64 (rcx, 0x13);
    rsi = rcx;
    rcx = r11;
    r11 >>= 6;
    rcx = rotate_left64 (rcx, 3);
    rcx ^= rsi;
    rcx ^= r11;
    rax += rcx;
    rcx = 0x106aa07032bbd1b8;
    r11 = rax;
    rax = rbp;
    rax ^= r13;
    *((rsp - 0x20)) = r11;
    rax &= r10;
    rax ^= rbp;
    rcx += r11;
    r11 = rdi;
    r12 += rcx;
    rcx = r10;
    r11 &= rdx;
    r12 += rax;
    rax = r10;
    rcx = rotate_right64 (rcx, 0xe);
    rax = rotate_right64 (rax, 0x12);
    rax ^= rcx;
    rcx = r10;
    rcx = rotate_left64 (rcx, 0x17);
    rax ^= rcx;
    rcx = rdx;
    rcx = rotate_right64 (rcx, 0x1c);
    rax += r12;
    rsi = rcx;
    rcx = rdx;
    r8 += rax;
    rcx = rotate_left64 (rcx, 0x1e);
    rcx ^= rsi;
    rsi = rdx;
    rsi = rotate_left64 (rsi, 0x19);
    rcx ^= rsi;
    rsi = rdi;
    rsi |= rdx;
    rsi &= r9;
    rsi |= r11;
    r11 = rbx;
    rcx += rsi;
    r11 = rotate_right64 (r11, 0x13);
    rcx += rax;
    rax = r14;
    rax = rotate_right64 (rax, 1);
    rsi = rax;
    rax = r14;
    rax = rotate_right64 (rax, 8);
    rax ^= rsi;
    rsi = r14;
    rsi >>= 7;
    rax ^= rsi;
    rsi = rbx;
    rsi = rotate_left64 (rsi, 3);
    rax += r15;
    rax += *(rsp);
    r12 = *((rsp - 0x10));
    rsi ^= r11;
    r11 = rbx;
    r11 >>= 6;
    rsi ^= r11;
    r15 = rax + rsi;
    rax = r13;
    rsi = 0x19a4c116b8d2d0c8;
    rax ^= r10;
    rsi += r15;
    rax &= r8;
    rbp += rsi;
    rax ^= r13;
    rbp += rax;
    rax = r8;
    rax = rotate_right64 (rax, 0xe);
    rsi = rax;
    rax = r8;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rsi;
    rsi = r8;
    rsi = rotate_left64 (rsi, 0x17);
    rax ^= rsi;
    rsi = rcx;
    rsi = rotate_right64 (rsi, 0x1c);
    rax += rbp;
    r11 = rsi;
    rsi = rcx;
    rbp = rotate_left64 (rbp, 0x19);
    r9 += rax;
    rsi = rotate_left64 (rsi, 0x1e);
    rsi ^= r11;
    rsi ^= rbp;
    rbp |= rcx;
    r11 = rbp;
    rbp &= rcx;
    r11 &= rdi;
    r11 |= rbp;
    rbp = *((rsp - 0x20));
    rsi += r11;
    r11 = r12;
    rsi += rax;
    rax = r12;
    r11 = rotate_right64 (r11, 1);
    rbx = rbp;
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = r12;
    r11 >>= 7;
    rax ^= r11;
    r11 = rbp;
    rax += r14;
    rax += *((rsp - 0x60));
    rbx = rotate_right64 (rbx, 0x13);
    r14 = *((rsp - 0x30));
    r11 = rotate_left64 (r11, 3);
    r11 ^= rbx;
    rbx = rbp;
    rbx >>= 6;
    r11 ^= rbx;
    rax += r11;
    r11 = 0x1e376c085141ab53;
    rbx = rax;
    rax = r10;
    rax ^= r8;
    r11 += rbx;
    *((rsp - 0x10)) = rbx;
    rax &= r9;
    r13 += r11;
    rax ^= r10;
    r13 += rax;
    rax = r9;
    rax = rotate_right64 (rax, 0xe);
    r11 = rax;
    rax = r9;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = r9;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    r11 = rsi;
    rax += r13;
    r13 = rsi;
    r11 = rotate_left64 (r11, 0x1e);
    r13 = rotate_right64 (r13, 0x1c);
    rdi += rax;
    r11 ^= r13;
    r13 = rsi;
    r13 = rotate_left64 (r13, 0x19);
    r11 ^= r13;
    r13 = rcx;
    r13 |= rsi;
    rbx = r13;
    r13 = rcx;
    r13 &= rsi;
    rbx &= rdx;
    rbx |= r13;
    r13 = r15;
    rbx += r11;
    r11 = r14;
    rbx += rax;
    rax = r14;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    r13 = rotate_right64 (r13, 0x13);
    rax ^= r11;
    r11 = r14;
    r13 = r15;
    r11 >>= 7;
    r13 = rotate_left64 (r13, 3);
    rax ^= r11;
    r11 = r13;
    r13 = r15;
    r11 ^= rbp;
    r13 >>= 6;
    rax += r12;
    rax += *((rsp - 0x28));
    r11 ^= r13;
    r12 = *((rsp - 0x48));
    rax += r11;
    r11 = 0x2748774cdf8eeb99;
    r13 = rax;
    rax = r8;
    rax ^= r9;
    r11 += r13;
    *((rsp - 0x30)) = r13;
    r13 = *((rsp - 0x10));
    rax &= rdi;
    r10 += r11;
    rax ^= r8;
    r10 += rax;
    rax = rdi;
    rax = rotate_right64 (rax, 0xe);
    r11 = rax;
    rax = rdi;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = rdi;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    rax += r10;
    r10 = rbx;
    r10 = rotate_right64 (r10, 0x1c);
    rdx += rax;
    r11 = r10;
    r10 = rbx;
    r10 = rotate_left64 (r10, 0x1e);
    r10 ^= r11;
    r11 = rbx;
    r11 = rotate_left64 (r11, 0x19);
    r10 ^= r11;
    r11 = rsi;
    r11 |= rbx;
    r11 &= rcx;
    rbp &= rbx;
    r11 |= rbp;
    r10 += r11;
    r11 = r12;
    rbp = rotate_right64 (rbp, 0x13);
    r10 += rax;
    rax = r12;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = r12;
    r11 >>= 7;
    rax ^= r11;
    r11 = r13;
    r11 = rotate_left64 (r11, 3);
    rax += r14;
    rax += *((rsp + 8));
    r14 = *((rsp - 0x40));
    r11 ^= rbp;
    rbp >>= 6;
    r11 ^= rbp;
    rax += r11;
    r11 = 0x34b0bcb5e19b48a8;
    r13 = rax;
    rax = r9;
    rax ^= rdi;
    r11 += r13;
    rax &= rdx;
    r8 += r11;
    rax ^= r9;
    r8 += rax;
    rax = rdx;
    rax = rotate_right64 (rax, 0xe);
    r11 = rax;
    rax = rdx;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = rdx;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    rax += r8;
    r8 = r10;
    r8 = rotate_right64 (r8, 0x1c);
    rcx += rax;
    r11 = r8;
    r8 = r10;
    r8 = rotate_left64 (r8, 0x1e);
    r8 ^= r11;
    r11 = r10;
    rbp &= r10;
    r11 = rotate_left64 (r11, 0x19);
    r8 ^= r11;
    r11 = rbx;
    r11 |= r10;
    r11 &= rsi;
    r11 |= rbp;
    r8 += r11;
    r11 = r14;
    r8 += rax;
    rax = r14;
    r11 = rotate_right64 (r11, 8);
    rax = rotate_right64 (rax, 1);
    r11 ^= rax;
    rax = r14;
    rax >>= 7;
    r11 ^= rax;
    rax = *((rsp - 0x30));
    r11 += r12;
    r11 += *((rsp - 0x18));
    r12 = rax;
    r12 = rotate_right64 (r12, 0x13);
    r12 = rax;
    rax = rotate_left64 (rax, 3);
    rax ^= rbp;
    r12 >>= 6;
    rax ^= r12;
    rax += r11;
    r11 = 0x391c0cb3c5c95a63;
    r12 = rax;
    rax = rdi;
    rax ^= rdx;
    r11 += r12;
    *((rsp + 0x10)) = r12;
    r12 = *((rsp - 8));
    rax &= rcx;
    r9 += r11;
    rax ^= rdi;
    r9 += rax;
    rax = rcx;
    rax = rotate_right64 (rax, 0xe);
    r11 = rax;
    rax = rcx;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = rcx;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    rbp &= r8;
    rax += r9;
    r9 = r8;
    r9 = rotate_right64 (r9, 0x1c);
    rsi += rax;
    r11 = r9;
    r9 = r8;
    r9 = rotate_left64 (r9, 0x1e);
    r9 ^= r11;
    r11 = r8;
    r11 = rotate_left64 (r11, 0x19);
    r9 ^= r11;
    r11 = r10;
    r11 |= r8;
    r11 &= rbx;
    r11 |= rbp;
    r9 += r11;
    r11 = r12;
    r9 += rax;
    rax = r12;
    r11 = rotate_right64 (r11, 8);
    rax = rotate_right64 (rax, 1);
    r11 ^= rax;
    rax = r12;
    rax >>= 7;
    r11 ^= rax;
    rax = r13;
    r13 = rotate_right64 (r13, 0x13);
    r13 = rax;
    rax = rotate_left64 (rax, 3);
    r11 += r14;
    rax ^= rbp;
    *((rsp - 8)) = r13;
    r13 >>= 6;
    r11 += *((rsp + 0x58));
    rax ^= r13;
    r14 = *((rsp - 0x38));
    rax += r11;
    r11 = 0x4ed8aa4ae3418acb;
    r13 = rax;
    rax = rdx;
    rax ^= rcx;
    r11 += r13;
    rax &= rsi;
    rdi += r11;
    rax ^= rdx;
    rdi += rax;
    rax = rsi;
    rbp &= r9;
    rax = rotate_right64 (rax, 0xe);
    r11 = rax;
    rax = rsi;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = rsi;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    rax += rdi;
    rdi = r9;
    rdi = rotate_right64 (rdi, 0x1c);
    rbx += rax;
    r11 = rdi;
    rdi = r9;
    rdi = rotate_left64 (rdi, 0x1e);
    rdi ^= r11;
    r11 = r9;
    r11 = rotate_left64 (r11, 0x19);
    rdi ^= r11;
    r11 = r8;
    r11 |= r9;
    r11 &= r10;
    r11 |= rbp;
    rdi += r11;
    r11 = r14;
    rdi += rax;
    rax = r14;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = r14;
    r11 >>= 7;
    rax ^= r11;
    r11 = *((rsp + 0x10));
    rax += r12;
    rax += *((rsp - 0x20));
    r12 = r11;
    r12 = rotate_right64 (r12, 0x13);
    r12 = r11;
    r11 = rotate_left64 (r11, 3);
    r11 ^= rbp;
    r12 >>= 6;
    r11 ^= r12;
    r12 = r9;
    rax += r11;
    r11 = 0x5b9cca4f7763e373;
    rax = rcx;
    rax ^= rsi;
    r11 += rbp;
    r12 &= rdi;
    *((rsp - 0x68)) = rbp;
    rax &= rbx;
    rdx += r11;
    r11 = rbx;
    rbp = *((rsp - 0x70));
    rax ^= rcx;
    r11 = rotate_right64 (r11, 0xe);
    rdx += rax;
    rax = rbx;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = rbx;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    rax += rdx;
    rdx = rdi;
    rdx = rotate_right64 (rdx, 0x1c);
    r10 += rax;
    r11 = rdx;
    rdx = rdi;
    rdx = rotate_left64 (rdx, 0x1e);
    rdx ^= r11;
    r11 = rdi;
    r11 = rotate_left64 (r11, 0x19);
    rdx ^= r11;
    r11 = r9;
    r11 |= rdi;
    r11 &= r8;
    r11 |= r12;
    rdx += r11;
    r11 = rbp;
    rdx += rax;
    rax = rbp;
    r11 = rotate_right64 (r11, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r11;
    r11 = rbp;
    rbp = *((rsp - 0x68));
    r11 >>= 7;
    rax ^= r11;
    r11 = r13;
    rax += r14;
    r11 = rotate_right64 (r11, 0x13);
    r14 = r13;
    rax += r15;
    r13 = rotate_left64 (r13, 3);
    *((rsp - 0x38)) = r14;
    r13 ^= r11;
    r11 = r14;
    r14 = rdi;
    r11 >>= 6;
    r14 &= rdx;
    r13 ^= r11;
    r11 = 0x682e6ff3d6b2b8a3;
    rax += r13;
    r13 = rax;
    rax = rsi;
    rax ^= rbx;
    r11 += r13;
    rax &= r10;
    rcx += r11;
    rax ^= rsi;
    rcx += rax;
    rax = r10;
    rax = rotate_right64 (rax, 0xe);
    r11 = rax;
    rax = r10;
    rax = rotate_right64 (rax, 0x12);
    rax ^= r11;
    r11 = r10;
    r11 = rotate_left64 (r11, 0x17);
    rax ^= r11;
    rax += rcx;
    rcx = rdx;
    rcx = rotate_right64 (rcx, 0x1c);
    r8 += rax;
    r11 = rcx;
    rcx = rdx;
    rcx = rotate_left64 (rcx, 0x1e);
    rcx ^= r11;
    r11 = rdx;
    r11 = rotate_left64 (r11, 0x19);
    rcx ^= r11;
    r11 = rdi;
    r11 |= rdx;
    r11 &= r9;
    r11 |= r14;
    r14 = *(rsp);
    *(rsp) = r13;
    r11 += rcx;
    r12 = r11 + rax;
    rcx = r14;
    rax = r14;
    r11 = rbp;
    rcx = rotate_right64 (rcx, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rcx;
    rcx = r14;
    rcx >>= 7;
    rax ^= rcx;
    rcx = *((rsp - 0x10));
    rax += *((rsp - 0x70));
    r11 = rotate_right64 (r11, 0x13);
    rcx += rax;
    rax = rbp;
    rax = rotate_left64 (rax, 3);
    rax ^= r11;
    r11 = rbp;
    rbp = *((rsp - 0x60));
    r11 >>= 6;
    rax ^= r11;
    rax += rcx;
    rcx = 0x748f82ee5defb2fc;
    r11 = rax;
    rax = rbx;
    rax ^= r10;
    rcx += r11;
    *((rsp - 0x70)) = r11;
    r11 = rdx;
    rax &= r8;
    rsi += rcx;
    rcx = r8;
    r11 &= r12;
    rax ^= rbx;
    rcx = rotate_right64 (rcx, 0x12);
    rsi += rax;
    rax = r8;
    rax = rotate_right64 (rax, 0xe);
    rcx ^= rax;
    rax = r8;
    rax = rotate_left64 (rax, 0x17);
    rax ^= rcx;
    rcx = r12;
    rax += rsi;
    rsi = r12;
    rcx = rotate_right64 (rcx, 0x1c);
    rsi = rotate_left64 (rsi, 0x1e);
    r9 += rax;
    rsi ^= rcx;
    rcx = r12;
    rcx = rotate_left64 (rcx, 0x19);
    rsi ^= rcx;
    rcx = rdx;
    rcx |= r12;
    rcx &= rdi;
    rcx |= r11;
    r11 = r13;
    rcx += rsi;
    rsi = rbp;
    rcx += rax;
    rax = rbp;
    rsi = rotate_right64 (rsi, 1);
    rax = rotate_right64 (rax, 8);
    r11 = rotate_right64 (r11, 0x13);
    rax ^= rsi;
    rsi = rbp;
    rsi >>= 7;
    rax ^= rsi;
    rsi = *((rsp - 0x30));
    rax += r14;
    r14 = rcx;
    rsi += rax;
    rax = r13;
    r14 = rotate_left64 (r14, 0x19);
    rax = rotate_left64 (rax, 3);
    rax ^= r11;
    r11 = r13;
    r11 >>= 6;
    rax ^= r11;
    rsi += rax;
    r13 = rsi;
    rsi = r10;
    rsi ^= r8;
    *((rsp - 0x60)) = r13;
    rax = rsi;
    rsi = 0x78a5636f43172f60;
    rsi += r13;
    rax &= r9;
    rbx += rsi;
    rsi = r9;
    rax ^= r10;
    rsi = rotate_right64 (rsi, 0xe);
    rbx += rax;
    rax = rsi;
    rsi = r9;
    rsi = rotate_right64 (rsi, 0x12);
    r11 = rsi;
    rsi = r9;
    rsi = rotate_left64 (rsi, 0x17);
    r11 ^= rax;
    rax = rsi;
    rsi = rcx;
    rsi = rotate_right64 (rsi, 0x1c);
    rax ^= r11;
    r11 = rsi;
    rsi = rcx;
    rax += rbx;
    rbx = r12;
    rsi = rotate_left64 (rsi, 0x1e);
    rdi += rax;
    rsi ^= r11;
    rsi ^= r14;
    r14 = r12;
    r14 |= rcx;
    rbx &= rcx;
    r11 = r14;
    r14 = *((rsp - 0x28));
    r13 = *((rsp + 8));
    r11 &= rdx;
    r11 |= rbx;
    r11 += rsi;
    rsi = r14;
    r11 += rax;
    rax = r14;
    rsi = rotate_right64 (rsi, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rsi;
    rsi = r14;
    rsi >>= 7;
    rax ^= rsi;
    rsi = *((rsp - 8));
    rax += rbp;
    rbp = *((rsp - 0x70));
    rsi += rax;
    rbx = rbp;
    rax = rbp;
    rbx = rotate_right64 (rbx, 0x13);
    rax = rotate_left64 (rax, 3);
    rax ^= rbx;
    rbx = rbp;
    rbx >>= 6;
    rax ^= rbx;
    rbx = 0x84c87814a1f0ab72;
    rsi += rax;
    rax = r8;
    rax ^= r9;
    rbx += rsi;
    *((rsp - 0x58)) = rsi;
    rax &= rdi;
    r10 += rbx;
    rax ^= r8;
    rsi = rax + r10;
    r10 = rdi;
    r10 = rotate_right64 (r10, 0xe);
    rax = r10;
    r10 = rdi;
    r10 = rotate_right64 (r10, 0x12);
    r10 ^= rax;
    rax = rdi;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r10;
    r10 = r11;
    rax += rsi;
    rsi = r11;
    r10 = rotate_right64 (r10, 0x1c);
    rdx += rax;
    rsi = rotate_left64 (rsi, 0x1e);
    rbp &= r11;
    rsi ^= r10;
    r10 = r11;
    r10 = rotate_left64 (r10, 0x19);
    rsi ^= r10;
    r10 = rcx;
    r10 |= r11;
    r10 &= r12;
    r10 |= rbp;
    r10 += rsi;
    rsi = r13;
    r10 += rax;
    rax = r13;
    rsi = rotate_right64 (rsi, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rsi;
    rsi = r13;
    rsi >>= 7;
    rax ^= rsi;
    rsi = *((rsp + 0x10));
    rax += r14;
    r14 = *((rsp - 0x60));
    rsi += rax;
    rbx = r14;
    rax = r14;
    rbx = rotate_right64 (rbx, 0x13);
    rax = rotate_left64 (rax, 3);
    rax ^= rbx;
    rbx = r14;
    r14 = *((rsp - 0x18));
    rbx >>= 6;
    rax ^= rbx;
    rax += rsi;
    rax = r9;
    rax ^= rdi;
    *((rsp - 0x50)) = rbp;
    rsi = rax;
    rax = 0x8cc702081a6439ec;
    rax += rbp;
    rsi &= rdx;
    r8 += rax;
    rax = rdx;
    rsi ^= r9;
    rax = rotate_right64 (rax, 0xe);
    r8 += rsi;
    rsi = rax;
    rax = rdx;
    rax = rotate_right64 (rax, 0x12);
    rbx = rax;
    rax = rdx;
    rbx ^= rsi;
    rax = rotate_left64 (rax, 0x17);
    rsi = rax;
    rax = r10;
    rax = rotate_right64 (rax, 0x1c);
    rsi ^= rbx;
    rbx = rax;
    rax = r10;
    rsi += r8;
    rax = rotate_left64 (rax, 0x1e);
    r8 = r12 + rsi;
    r12 = r11;
    rax = r10;
    r12 &= r10;
    rbp ^= rbx;
    rax = rotate_left64 (rax, 0x19);
    rbp ^= rax;
    rax = r11;
    rax |= r10;
    rax &= rcx;
    rax |= r12;
    r12 = *((rsp - 0x20));
    rax += rbp;
    rbx = rax + rsi;
    rsi = r14;
    rax = r14;
    rsi = rotate_right64 (rsi, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rsi;
    rsi = r14;
    rsi >>= 7;
    rax ^= rsi;
    rax += r13;
    r13 = *((rsp - 0x58));
    rax += *((rsp - 0x38));
    rsi = r13;
    rsi = rotate_right64 (rsi, 0x13);
    rsi = r13;
    r13 >>= 6;
    rsi = rotate_left64 (rsi, 3);
    rsi ^= rbp;
    rbp = *((rsp + 0x58));
    rsi ^= r13;
    rax += rsi;
    rsi = 0x90befffa23631e28;
    r13 = rax;
    rax = rdi;
    rax ^= rdx;
    rsi += r13;
    *((rsp - 0x28)) = r13;
    rax &= r8;
    r9 += rsi;
    rsi = r8;
    rax ^= rdi;
    r9 += rax;
    rax = r8;
    rax = rotate_right64 (rax, 0xe);
    rsi = rotate_right64 (rsi, 0x12);
    r13 = rsi;
    r13 ^= rax;
    rax = r8;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r13;
    rax += r9;
    r9 = rbx;
    r9 = rotate_right64 (r9, 0x1c);
    rcx += rax;
    r13 = r9;
    r9 = rbx;
    r9 = rotate_left64 (r9, 0x1e);
    rsi = r9;
    r9 = rbx;
    rsi ^= r13;
    r9 = rotate_left64 (r9, 0x19);
    rsi ^= r9;
    r9 = r10;
    r9 |= rbx;
    r13 = r9;
    r9 = r10;
    r9 &= rbx;
    r13 &= r11;
    r13 |= r9;
    r13 += rsi;
    rsi = rbp;
    r13 += rax;
    rax = rbp;
    rsi = rotate_right64 (rsi, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rsi;
    rsi = rbp;
    rsi >>= 7;
    rax ^= rsi;
    rax += r14;
    r14 = *((rsp - 0x50));
    rax += *((rsp - 0x68));
    r9 = r14;
    rsi = r14;
    r9 = rotate_right64 (r9, 0x13);
    rsi = rotate_left64 (rsi, 3);
    rsi ^= r9;
    r9 = r14;
    r9 >>= 6;
    rsi ^= r9;
    rax += rsi;
    rsi = 0xa4506cebde82bde9;
    r9 = rax;
    rax = rdx;
    rax ^= r8;
    *((rsp - 0x48)) = r9;
    rax &= rcx;
    rsi += r9;
    rax ^= rdx;
    rdi += rsi;
    rsi = rcx;
    rdi += rax;
    rsi = rotate_right64 (rsi, 0x12);
    rax = rcx;
    rax = rotate_right64 (rax, 0xe);
    r14 = rsi;
    r14 ^= rax;
    rax = rcx;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r14;
    rax += rdi;
    rdi = r13;
    rdi = rotate_right64 (rdi, 0x1c);
    r11 += rax;
    r14 = rdi;
    rdi = r13;
    rdi = rotate_left64 (rdi, 0x1e);
    rsi = rdi;
    rdi = r13;
    rsi ^= r14;
    rdi = rotate_left64 (rdi, 0x19);
    rsi ^= rdi;
    rdi = rbx;
    rdi |= r13;
    r14 = rdi;
    rdi = rbx;
    rdi &= r13;
    r14 &= r10;
    r14 |= rdi;
    r14 += rsi;
    rsi = r12;
    r14 += rax;
    rax = r12;
    rsi = rotate_right64 (rsi, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= rsi;
    rsi = r12;
    rsi >>= 7;
    rax ^= rsi;
    rax += rbp;
    rbp = *((rsp - 0x28));
    rax += *(rsp);
    rdi = rbp;
    rsi = rbp;
    rdi = rotate_right64 (rdi, 0x13);
    rsi = rotate_left64 (rsi, 3);
    rsi ^= rdi;
    rdi = rbp;
    rdi >>= 6;
    rsi ^= rdi;
    rdi = 0xbef9a3f7b2c67915;
    rax += rsi;
    rax = r8;
    rax ^= rcx;
    rdi += rbp;
    *((rsp - 0x20)) = rbp;
    rax &= r11;
    rdx += rdi;
    rdi = r14;
    rax ^= r8;
    rdi = rotate_left64 (rdi, 0x1e);
    rsi = rax + rdx;
    rax = r11;
    rdx = r11;
    rax = rotate_right64 (rax, 0xe);
    rdx = rotate_right64 (rdx, 0x12);
    rdx ^= rax;
    rax = r11;
    rax = rotate_left64 (rax, 0x17);
    rax ^= rdx;
    rdx = r14;
    rdx = rotate_right64 (rdx, 0x1c);
    rax += rsi;
    rdi ^= rdx;
    rdx = r14;
    rsi = r10 + rax;
    r10 = r13;
    rdx = rotate_left64 (rdx, 0x19);
    r10 &= r14;
    rdi ^= rdx;
    rdx = r13;
    rdx |= r14;
    rdx &= rbx;
    rdx |= r10;
    r10 = *((rsp - 0x48));
    rdx += rdi;
    rdx += rax;
    rax = r15;
    r9 = r10;
    rax = rotate_right64 (rax, 1);
    rdi = rax;
    rax = r15;
    rax = rotate_right64 (rax, 8);
    rax ^= rdi;
    rdi = r15;
    rdi >>= 7;
    rax ^= rdi;
    rdi = r10;
    rax += r12;
    rax += *((rsp - 0x70));
    r9 = rotate_right64 (r9, 0x13);
    rdi = rotate_left64 (rdi, 3);
    rdi ^= r9;
    r9 = r10;
    r9 >>= 6;
    rdi ^= r9;
    rax += rdi;
    rdi = 0xc67178f2e372532b;
    r10 = rax;
    rax = rcx;
    rax ^= r11;
    rdi += r10;
    *((rsp - 0x40)) = r10;
    r10 = r14;
    rax &= rsi;
    r8 += rdi;
    rdi = rsi;
    r10 &= rdx;
    rax ^= rcx;
    rdi = rotate_right64 (rdi, 0x12);
    r9 = rax;
    rax = r9 + r8;
    r8 = rsi;
    r9 = rdx;
    r8 = rotate_right64 (r8, 0xe);
    r9 = rotate_left64 (r9, 0x1e);
    rdi ^= r8;
    r8 = rsi;
    r8 = rotate_left64 (r8, 0x17);
    r8 ^= rdi;
    rdi = rdx;
    rdi = rotate_right64 (rdi, 0x1c);
    r8 += rax;
    r9 ^= rdi;
    rdi = rdx;
    rax = rbx + r8;
    rbx = *((rsp - 0x10));
    rdi = rotate_left64 (rdi, 0x19);
    r9 ^= rdi;
    rdi = r14;
    rdi |= rdx;
    rdi &= r13;
    rdi |= r10;
    rdi += r9;
    r9 = rbx;
    rdi += r8;
    r8 = rbx;
    r9 = rotate_right64 (r9, 1);
    r8 = rotate_right64 (r8, 8);
    r8 ^= r9;
    r9 = rbx;
    r9 >>= 7;
    r8 ^= r9;
    r15 += r8;
    r8 = rbp;
    r15 += *((rsp - 0x60));
    r8 = rotate_right64 (r8, 0x13);
    r9 = r8;
    r8 = rbp;
    rbp >>= 6;
    r8 = rotate_left64 (r8, 3);
    r8 ^= r9;
    r9 = 0xca273eceea26619c;
    r8 ^= rbp;
    r8 += r15;
    r15 = *((rsp - 0x30));
    r12 = r8;
    *((rsp + 0x78)) = r8;
    r8 = r11;
    r8 ^= rsi;
    r9 += r12;
    *((rsp - 0x18)) = r12;
    r12 = r15;
    r8 &= rax;
    rcx += r9;
    r9 = rdx;
    r8 ^= r11;
    r9 &= rdi;
    r10 = r8;
    r8 = r10 + rcx;
    rcx = rax;
    r10 = rax;
    rcx = rotate_right64 (rcx, 0xe);
    r10 = rotate_right64 (r10, 0x12);
    r10 ^= rcx;
    rcx = rax;
    rcx = rotate_left64 (rcx, 0x17);
    rcx ^= r10;
    r10 = rdi;
    rcx += r8;
    r8 = rdi;
    r10 = rotate_right64 (r10, 0x1c);
    r8 = rotate_left64 (r8, 0x1e);
    r13 += rcx;
    r8 ^= r10;
    r10 = rdi;
    r10 = rotate_left64 (r10, 0x19);
    r8 ^= r10;
    r10 = rdx;
    r10 |= rdi;
    r10 &= r14;
    r10 |= r9;
    r9 = r13;
    r10 += r8;
    r10 += rcx;
    rcx = r15;
    r12 = rotate_right64 (r12, 1);
    rcx = rotate_right64 (rcx, 8);
    r9 = rotate_right64 (r9, 0x12);
    rcx ^= r12;
    r12 = r15;
    r12 >>= 7;
    rcx ^= r12;
    rcx += rbx;
    rbx = *((rsp - 0x40));
    rcx += *((rsp - 0x58));
    r8 = rbx;
    r12 = rbx;
    r8 = rotate_right64 (r8, 0x13);
    r12 = rotate_left64 (r12, 3);
    r12 ^= r8;
    r8 = rbx;
    rbx = *((rsp - 8));
    r8 >>= 6;
    r12 ^= r8;
    r8 = 0xd186b8c721c0c207;
    r12 += rcx;
    rcx = rsi;
    rcx ^= rax;
    r8 += r12;
    *((rsp + 0x80)) = r12;
    rcx &= r13;
    r11 += r8;
    rcx ^= rsi;
    r11 += rcx;
    rcx = r13;
    rcx = rotate_right64 (rcx, 0xe);
    r9 ^= rcx;
    rcx = r13;
    rcx = rotate_left64 (rcx, 0x17);
    rcx ^= r9;
    rcx += r11;
    r11 = r10;
    r11 = rotate_right64 (r11, 0x1c);
    r14 += rcx;
    r9 = r11;
    r11 = r10;
    r11 = rotate_left64 (r11, 0x1e);
    r8 = r11;
    r11 = r10;
    r8 ^= r9;
    r11 = rotate_left64 (r11, 0x19);
    r8 ^= r11;
    r11 = rdi;
    r11 |= r10;
    rbp = rotate_right64 (rbp, 1);
    r9 = r11;
    r11 = rdi;
    r11 &= r10;
    r9 &= rdx;
    r9 |= r11;
    r11 = rbx;
    r11 = rotate_right64 (r11, 8);
    r9 += r8;
    r11 ^= rbp;
    r9 += rcx;
    rbp >>= 7;
    r11 ^= rbp;
    r11 += r15;
    r11 += *((rsp - 0x50));
    r8 = *((rsp - 0x18));
    r15 = *((rsp + 0x10));
    rbx = r8;
    rcx = r8;
    rbx = rotate_left64 (rbx, 3);
    rcx = rotate_right64 (rcx, 0x13);
    rbp ^= rcx;
    rcx = r8;
    r8 = 0xeada7dd6cde0eb1e;
    rcx >>= 6;
    rbp ^= rcx;
    rcx = rax;
    rbp += r11;
    rcx ^= r13;
    r11 = r14;
    r8 += rbp;
    rcx &= r14;
    r11 = rotate_right64 (r11, 0x12);
    *((rsp + 0x88)) = rbp;
    rcx ^= rax;
    rsi += r8;
    r8 = r11;
    r11 = r9;
    rsi += rcx;
    rcx = r14;
    rcx = rotate_right64 (rcx, 0xe);
    r8 ^= rcx;
    rcx = r14;
    rcx = rotate_left64 (rcx, 0x17);
    rcx ^= r8;
    rcx += rsi;
    rdx += rcx;
    r11 = rotate_right64 (r11, 0x1c);
    r8 = r11;
    r11 = r9;
    r11 = rotate_left64 (r11, 0x1e);
    rsi = r11;
    r11 = r9;
    rsi ^= r8;
    r11 = rotate_left64 (r11, 0x19);
    rsi ^= r11;
    r11 = r10;
    r11 |= r9;
    r8 = r11;
    r11 = r10;
    r11 &= r9;
    r8 &= rdi;
    r8 |= r11;
    r11 = r15;
    r8 += rsi;
    r11 = rotate_right64 (r11, 8);
    rsi = r12;
    r8 += rcx;
    rcx = r15;
    rsi = rotate_left64 (rsi, 3);
    rcx = rotate_right64 (rcx, 1);
    rbx = rsi;
    r11 ^= rcx;
    rcx = r15;
    rcx >>= 7;
    r11 ^= rcx;
    rcx = r12;
    r11 += *((rsp - 8));
    r11 += *((rsp - 0x28));
    rcx = rotate_right64 (rcx, 0x13);
    rbx ^= rcx;
    rcx = r12;
    rcx >>= 6;
    rbx ^= rcx;
    rcx = r13;
    rbx += r11;
    rcx ^= r14;
    r11 = 0xf57d4f7fee6ed178;
    r11 += rbx;
    rcx &= rdx;
    *((rsp + 0x90)) = rbx;
    rcx ^= r13;
    rax += r11;
    r11 = rdx;
    rsi = rcx + rax;
    r11 = rotate_right64 (r11, 0x12);
    rcx = rdx;
    rcx = rotate_right64 (rcx, 0xe);
    rax = r11;
    r11 = r8;
    rax ^= rcx;
    rcx = rdx;
    rcx = rotate_left64 (rcx, 0x17);
    r11 = rotate_right64 (r11, 0x1c);
    rcx ^= rax;
    rax = r11;
    r11 = r8;
    r11 = rotate_left64 (r11, 0x1e);
    rcx += rsi;
    rsi = r11;
    r11 = r8;
    rdi += rcx;
    rsi ^= rax;
    r11 = rotate_left64 (r11, 0x19);
    rsi ^= r11;
    r11 = r9;
    r11 |= r8;
    rax = r11;
    r11 = r9;
    r11 &= r8;
    rax &= r10;
    rax |= r11;
    rax += rsi;
    rsi = *((rsp - 0x38));
    rax += rcx;
    r11 = rsi;
    rcx = rsi;
    r11 = rotate_right64 (r11, 1);
    rcx = rotate_right64 (rcx, 8);
    rcx ^= r11;
    r11 = rsi;
    rsi = rbp;
    r11 >>= 7;
    rsi = rotate_right64 (rsi, 0x13);
    rcx ^= r11;
    r11 = rcx + r15;
    rcx = *((rsp - 0x48));
    r15 = r8;
    rcx += r11;
    r11 = rbp;
    r11 = rotate_left64 (r11, 3);
    r11 ^= rsi;
    rsi = rbp;
    rsi >>= 6;
    r11 ^= rsi;
    rsi = 0x6f067aa72176fba;
    r11 += rcx;
    rcx = r14;
    rcx ^= rdx;
    rsi += r11;
    *((rsp + 0x98)) = r11;
    rcx &= rdi;
    r13 += rsi;
    rsi = rdi;
    rcx ^= r14;
    r13 += rcx;
    rcx = rdi;
    rsi = rotate_right64 (rsi, 0x12);
    r15 &= rax;
    rcx = rotate_right64 (rcx, 0xe);
    rsi ^= rcx;
    rcx = rdi;
    rcx = rotate_left64 (rcx, 0x17);
    rcx ^= rsi;
    rsi = rax;
    rcx += r13;
    r13 = rax;
    rsi = rotate_right64 (rsi, 0x1c);
    r13 = rotate_left64 (r13, 0x1e);
    r10 += rcx;
    r13 ^= rsi;
    rsi = rax;
    rsi = rotate_left64 (rsi, 0x19);
    r13 ^= rsi;
    rsi = r8;
    rsi |= rax;
    rsi &= r9;
    rsi |= r15;
    r15 = *((rsp - 0x68));
    rsi += r13;
    rsi += rcx;
    r13 = r15;
    rcx = r15;
    r13 = rotate_right64 (r13, 1);
    rcx = rotate_right64 (rcx, 8);
    rcx ^= r13;
    r13 = r15;
    r15 = rbx;
    r13 >>= 7;
    r15 = rotate_right64 (r15, 0x13);
    rcx ^= r13;
    r13 = rbx;
    rcx += *((rsp - 0x38));
    rcx += *((rsp - 0x20));
    r13 = rotate_left64 (r13, 3);
    r13 ^= r15;
    r15 = rbx;
    r15 >>= 6;
    r13 ^= r15;
    r15 = rcx + r13;
    rcx = rdx;
    rcx ^= rdi;
    *((rsp - 0x38)) = r15;
    r13 = rcx;
    *((rsp + 0xa0)) = r15;
    rcx = 0xa637dc5a2c898a6;
    r13 &= r10;
    rcx += r15;
    r15 = rax;
    r14 += rcx;
    rcx = r10;
    r13 ^= rdx;
    r15 &= rsi;
    rcx = rotate_right64 (rcx, 0xe);
    r14 += r13;
    r13 = rcx;
    rcx = r10;
    rcx = rotate_right64 (rcx, 0x12);
    rcx ^= r13;
    r13 = r10;
    r13 = rotate_left64 (r13, 0x17);
    r13 ^= rcx;
    rcx = rsi;
    r13 += r14;
    r14 = rsi;
    rcx = rotate_right64 (rcx, 0x1c);
    r14 = rotate_left64 (r14, 0x1e);
    r9 += r13;
    r14 ^= rcx;
    rcx = rsi;
    rcx = rotate_left64 (rcx, 0x19);
    r14 ^= rcx;
    rcx = rax;
    rcx |= rsi;
    rcx &= r8;
    rcx |= r15;
    r15 = *(rsp);
    rcx += r14;
    rcx += r13;
    r14 = r15;
    r13 = r15;
    r14 = rotate_right64 (r14, 1);
    r13 = rotate_right64 (r13, 8);
    r13 ^= r14;
    r14 = r15;
    r15 = r11;
    r14 >>= 7;
    r15 = rotate_right64 (r15, 0x13);
    r13 ^= r14;
    r14 = r11;
    r13 += *((rsp - 0x68));
    r13 += *((rsp - 0x40));
    r14 = rotate_left64 (r14, 3);
    r14 ^= r15;
    r15 = r11;
    r15 >>= 6;
    r14 ^= r15;
    r15 = 0x113f9804bef90dae;
    r13 += r14;
    r14 = r13;
    *((rsp + 0xa8)) = r13;
    r13 = rdi;
    r13 ^= r10;
    r15 += r14;
    *((rsp - 0x68)) = r14;
    r13 &= r9;
    rdx += r15;
    r15 = rcx;
    r13 ^= rdi;
    r15 = rotate_left64 (r15, 0x1e);
    r14 = r13 + rdx;
    rdx = r9;
    rdx = rotate_right64 (rdx, 0xe);
    r13 = rdx;
    rdx = r9;
    rdx = rotate_right64 (rdx, 0x12);
    rdx ^= r13;
    r13 = r9;
    r13 = rotate_left64 (r13, 0x17);
    r13 ^= rdx;
    rdx = rcx;
    r13 += r14;
    rdx = rotate_right64 (rdx, 0x1c);
    r14 = r15;
    r15 = rsi;
    r14 ^= rdx;
    rdx = rcx;
    r15 &= rcx;
    r8 += r13;
    rdx = rotate_left64 (rdx, 0x19);
    r14 ^= rdx;
    rdx = rsi;
    rdx |= rcx;
    rdx &= rax;
    rdx |= r15;
    r15 = *((rsp - 0x70));
    rdx += r14;
    rdx += r13;
    r14 = r15;
    r13 = r15;
    r14 = rotate_right64 (r14, 1);
    r13 = rotate_right64 (r13, 8);
    r13 ^= r14;
    r14 = r15;
    r14 >>= 7;
    r13 ^= r14;
    r14 = *((rsp - 0x38));
    r13 += *(rsp);
    r13 += *((rsp - 0x18));
    r15 = r14;
    r14 = rotate_left64 (r14, 3);
    r15 = rotate_right64 (r15, 0x13);
    r14 ^= r15;
    r15 = *((rsp - 0x38));
    r15 >>= 6;
    r14 ^= r15;
    r13 += r14;
    r14 = 0x1b710b35131c471b;
    r15 = r13;
    *((rsp + 0xb0)) = r13;
    r13 = r10;
    r13 ^= r9;
    r14 += r15;
    *((rsp - 0x30)) = r15;
    r15 = r8;
    r13 &= r8;
    rdi += r14;
    r15 = rotate_left64 (r15, 0x17);
    r13 ^= r10;
    rdi += r13;
    r13 = r8;
    r13 = rotate_right64 (r13, 0xe);
    r14 = r13;
    r13 = r8;
    r13 = rotate_right64 (r13, 0x12);
    r13 ^= r14;
    r13 ^= r15;
    r15 = rdx;
    r13 += rdi;
    r15 = rotate_left64 (r15, 0x19);
    rdi = rax + r13;
    rax = rdx;
    rax = rotate_right64 (rax, 0x1c);
    r14 = rax;
    rax = rdx;
    rax = rotate_left64 (rax, 0x1e);
    rax ^= r14;
    rax ^= r15;
    r15 = rcx;
    r15 |= rdx;
    r14 = r15;
    r15 = rcx;
    r15 &= rdx;
    r14 &= rsi;
    r14 |= r15;
    r15 = *((rsp - 0x60));
    r14 += rax;
    r13 += r14;
    rax = r15;
    r14 = r15;
    r14 = rotate_right64 (r14, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r14;
    r14 = r15;
    r14 >>= 7;
    rax ^= r14;
    rax += *((rsp - 0x70));
    r12 += rax;
    rax = *((rsp - 0x68));
    r15 = *((rsp - 0x68));
    r15 = rotate_right64 (r15, 0x13);
    r14 = r15;
    r15 = rax;
    rax = rotate_left64 (rax, 3);
    rax ^= r14;
    r15 >>= 6;
    r14 = 0x28db77f523047d84;
    rax ^= r15;
    r15 = r12 + rax;
    r12 = r9;
    r12 ^= r8;
    r14 += r15;
    *((rsp + 0xb8)) = r15;
    rax = r12;
    r10 += r14;
    r14 = rdx;
    rax &= rdi;
    r14 &= r13;
    rax ^= r9;
    r12 = rax + r10;
    r10 = rdi;
    r10 = rotate_right64 (r10, 0xe);
    rax = r10;
    r10 = rdi;
    r10 = rotate_right64 (r10, 0x12);
    r10 ^= rax;
    rax = rdi;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r10;
    r10 = r13;
    rax += r12;
    r12 = r13;
    r10 = rotate_right64 (r10, 0x1c);
    r12 = rotate_left64 (r12, 0x1e);
    rsi += rax;
    r12 ^= r10;
    r10 = r13;
    r10 = rotate_left64 (r10, 0x19);
    r12 ^= r10;
    r10 = rdx;
    r10 |= r13;
    r10 &= rcx;
    r10 |= r14;
    r14 = *((rsp - 0x58));
    r10 += r12;
    r10 += rax;
    r12 = r14;
    rax = r14;
    r12 = rotate_right64 (r12, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r12;
    r12 = r14;
    r12 >>= 7;
    rax ^= r12;
    rax += *((rsp - 0x60));
    r14 = *((rsp - 0x30));
    rax += rbp;
    r12 = r14;
    r12 = rotate_right64 (r12, 0x13);
    rbp = rotate_left64 (rbp, 3);
    rbp ^= r12;
    r12 = r14;
    r14 = 0x32caab7b40c72493;
    r12 >>= 6;
    rbp ^= r12;
    rbp += rax;
    rax = r8;
    rax ^= rdi;
    r14 += rbp;
    *((rsp + 0xc0)) = rbp;
    rax &= rsi;
    r9 += r14;
    r14 = r13;
    rax ^= r8;
    r12 = rax + r9;
    r9 = rsi;
    r9 = rotate_right64 (r9, 0xe);
    rax = r9;
    r9 = rsi;
    r9 = rotate_right64 (r9, 0x12);
    r9 ^= rax;
    rax = rsi;
    rax = rotate_left64 (rax, 0x17);
    rax ^= r9;
    r9 = r10;
    rax += r12;
    r12 = r10;
    r9 = rotate_right64 (r9, 0x1c);
    r12 = rotate_left64 (r12, 0x1e);
    rcx += rax;
    r12 ^= r9;
    r9 = r10;
    r9 = rotate_left64 (r9, 0x19);
    r12 ^= r9;
    r9 = r13;
    r9 |= r10;
    r14 &= r10;
    r9 &= rdx;
    r9 |= r14;
    r14 = *((rsp - 0x50));
    r9 += r12;
    r9 += rax;
    r12 = r14;
    rax = r14;
    r12 = rotate_right64 (r12, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r12;
    r12 = r14;
    r14 = r10;
    r12 >>= 7;
    rax ^= r12;
    rax += *((rsp - 0x58));
    r12 = r15;
    rax += rbx;
    rbx = r15;
    r12 = rotate_right64 (r12, 0x13);
    rbx = rotate_left64 (rbx, 3);
    rbx ^= r12;
    r12 = r15;
    r12 >>= 6;
    rbx ^= r12;
    r12 = 0x3c9ebe0a15c9bebc;
    rbx += rax;
    rax = rdi;
    rax ^= rsi;
    r12 += rbx;
    *((rsp + 0xc8)) = rbx;
    rax &= rcx;
    r8 += r12;
    rax ^= rdi;
    rax = rax + r8;
    r8 = rcx;
    r8 = rotate_right64 (r8, 0xe);
    r12 = r8;
    r8 = rcx;
    r8 = rotate_right64 (r8, 0x12);
    r8 ^= r12;
    r12 = rcx;
    r12 = rotate_left64 (r12, 0x17);
    r8 ^= r12;
    r8 += rax;
    rax = r9;
    rax = rotate_right64 (rax, 0x1c);
    rdx += r8;
    r12 = rax;
    rax = r9;
    rax = rotate_left64 (rax, 0x1e);
    r14 &= r9;
    rax ^= r12;
    r12 = r9;
    r12 = rotate_left64 (r12, 0x19);
    rax ^= r12;
    r12 = r10;
    r12 |= r9;
    r12 &= r13;
    r12 |= r14;
    r14 = *((rsp - 0x28));
    r12 += rax;
    r8 += r12;
    rax = r14;
    r12 = r14;
    r12 = rotate_right64 (r12, 1);
    rax = rotate_right64 (rax, 8);
    rax ^= r12;
    r12 = r14;
    r12 >>= 7;
    rax ^= r12;
    rax += *((rsp - 0x50));
    rax += r11;
    r11 = rbp;
    r11 = rotate_right64 (r11, 0x13);
    r12 = r11;
    r11 = rbp;
    rbp >>= 6;
    r11 = rotate_left64 (r11, 3);
    r11 ^= r12;
    r12 = r9;
    r11 ^= rbp;
    r11 += rax;
    rax = rsi;
    rax ^= rcx;
    rbp += r11;
    *((rsp + 0xd0)) = r11;
    rax &= rdx;
    rdi += rbp;
    rax ^= rsi;
    rdi += rax;
    rax = rdx;
    rax = rotate_right64 (rax, 0xe);
    rax = rdx;
    rax = rotate_right64 (rax, 0x12);
    rax ^= rbp;
    rbp = rotate_left64 (rbp, 0x17);
    r12 &= r8;
    rax ^= rbp;
    rax += rdi;
    rdi = r8;
    rdi = rotate_right64 (rdi, 0x1c);
    r13 += rax;
    rdi = r8;
    rdi = rotate_left64 (rdi, 0x1e);
    rdi ^= rbp;
    rbp = rotate_left64 (rbp, 0x19);
    rdi ^= rbp;
    rbp |= r8;
    rbp &= r10;
    rbp |= r12;
    r12 = *((rsp - 0x48));
    rbp += rdi;
    rax += rbp;
    rdi = r12;
    rbp = rotate_right64 (rbp, 1);
    rdi = rotate_right64 (rdi, 8);
    rdi ^= rbp;
    rbp >>= 7;
    rdi ^= rbp;
    rdi += r14;
    r14 = *((rsp - 0x38));
    rbp = rdi + r14;
    rdi = rbx;
    rdi = rotate_right64 (rdi, 0x13);
    r12 = rdi;
    rdi = rbx;
    rbx >>= 6;
    rdi = rotate_left64 (rdi, 3);
    rdi ^= r12;
    r12 = r8;
    rdi ^= rbx;
    rbx = rcx;
    rdi += rbp;
    rbx ^= rdx;
    rbp += rdi;
    rbx &= r13;
    *((rsp + 0xd8)) = rdi;
    rbx ^= rcx;
    rsi += rbp;
    rsi += rbx;
    rbx = r13;
    r12 &= rax;
    rbx = rotate_right64 (rbx, 0xe);
    rbx = r13;
    rbx = rotate_right64 (rbx, 0x12);
    rbx ^= rbp;
    rbp = rotate_left64 (rbp, 0x17);
    rbx ^= rbp;
    rbx += rsi;
    rsi = rax;
    rsi = rotate_right64 (rsi, 0x1c);
    r10 += rbx;
    rsi = rax;
    rsi = rotate_left64 (rsi, 0x1e);
    rsi ^= rbp;
    rbp = rotate_left64 (rbp, 0x19);
    rsi ^= rbp;
    rbp |= rax;
    rbp &= r9;
    rbp |= r12;
    r12 = *((rsp - 0x20));
    rbp += rsi;
    r14 = r12;
    rsi = r12;
    rbx += rbp;
    rsi = rotate_right64 (rsi, 1);
    r14 = rotate_right64 (r14, 8);
    r14 ^= rsi;
    rsi = r12;
    rbp = rotate_right64 (rbp, 0x13);
    r12 = *((rsp - 0x18));
    rsi >>= 7;
    r14 ^= rsi;
    rsi = r11;
    r11 >>= 6;
    r14 += *((rsp - 0x48));
    rsi = rotate_left64 (rsi, 3);
    r14 += *((rsp - 0x68));
    rsi ^= rbp;
    r11 ^= rsi;
    rsi = rdx;
    r11 += r14;
    rsi ^= r13;
    r14 = rax;
    rbp += r11;
    rsi &= r10;
    r14 &= rbx;
    *((rsp + 0xe0)) = r11;
    rsi ^= rdx;
    rcx += rbp;
    rcx += rsi;
    rsi = r10;
    rbp = rotate_right64 (rbp, 0xe);
    rsi = rotate_right64 (rsi, 0x12);
    rsi ^= rbp;
    rbp = rotate_left64 (rbp, 0x17);
    rsi ^= rbp;
    rsi += rcx;
    rcx = rbx;
    rbp = rotate_right64 (rbp, 0x1c);
    rcx = rotate_left64 (rcx, 0x1e);
    r9 += rsi;
    rcx ^= rbp;
    rbp = rotate_left64 (rbp, 0x19);
    rcx ^= rbp;
    rbp |= rbx;
    rbp &= r8;
    rbp |= r14;
    r14 = *((rsp - 0x40));
    rbp += rcx;
    rsi += rbp;
    rcx = r14;
    rbp = rotate_right64 (rbp, 1);
    rcx = rotate_right64 (rcx, 8);
    rcx ^= rbp;
    rbp >>= 7;
    rcx ^= rbp;
    rbp = *((rsp - 0x30));
    rcx += *((rsp - 0x20));
    r14 = rcx + rbp;
    rcx = rdi;
    rcx = rotate_right64 (rcx, 0x13);
    rcx = rdi;
    rcx = rotate_left64 (rcx, 3);
    rcx ^= rbp;
    rdi >>= 6;
    rcx ^= rdi;
    rbp &= rsi;
    rdi = 0x5fcb6fab3ad6faec;
    r14 += rcx;
    rcx = r13;
    rcx ^= r10;
    *((rsp + 0xe8)) = r14;
    r14 += rdi;
    rdi = r9;
    rcx &= r9;
    rdx += r14;
    rdi = rotate_right64 (rdi, 0xe);
    rcx ^= r13;
    rcx += rdx;
    rdx = r9;
    rdx = rotate_right64 (rdx, 0x12);
    rdx ^= rdi;
    rdi = r9;
    rdi = rotate_left64 (rdi, 0x17);
    rdx ^= rdi;
    rdi = rsi;
    rdx += rcx;
    rcx = rsi;
    rdi = rotate_right64 (rdi, 0x1c);
    rcx = rotate_left64 (rcx, 0x1e);
    r8 += rdx;
    rcx ^= rdi;
    rdi = rsi;
    rdi = rotate_left64 (rdi, 0x19);
    rcx ^= rdi;
    rdi = rbx;
    rdi |= rsi;
    rdi &= rax;
    rdi |= rbp;
    rdi += rcx;
    rcx = r12;
    rdx += rdi;
    rdi = r12;
    rcx = rotate_right64 (rcx, 1);
    rdi = rotate_right64 (rdi, 8);
    rdi ^= rcx;
    rcx = r12;
    rcx >>= 7;
    rdi ^= rcx;
    rdi += *((rsp - 0x40));
    rcx = r11;
    rbp &= rdx;
    r12 = rdi + r15;
    r15 = r11;
    rcx = rotate_left64 (rcx, 3);
    r15 = rotate_right64 (r15, 0x13);
    r11 >>= 6;
    rdi = 0x6c44198c4a475817;
    rcx ^= r15;
    r15 = *((rsp + 0x20));
    rcx ^= r11;
    r11 = rdx;
    r12 += rcx;
    rcx = r10;
    r11 = rotate_right64 (r11, 0x1c);
    rcx ^= r9;
    *((rsp + 0xf0)) = r12;
    r12 += rdi;
    rdi = r8;
    rcx &= r8;
    r13 += r12;
    rdi = rotate_right64 (rdi, 0xe);
    rcx ^= r10;
    r13 += rcx;
    rcx = r8;
    rcx = rotate_right64 (rcx, 0x12);
    rcx ^= rdi;
    rdi = r8;
    rdi = rotate_left64 (rdi, 0x17);
    rcx ^= rdi;
    rdi = rdx;
    rdi = rotate_left64 (rdi, 0x1e);
    rcx += r13;
    rdi ^= r11;
    r11 = rdx;
    r11 = rotate_left64 (r11, 0x19);
    rdi ^= r11;
    r11 = rsi;
    r11 |= rdx;
    r11 &= rbx;
    r11 |= rbp;
    rdi += r11;
    rdi += *((rsp + 0x60));
    r12 = rdi + rcx;
    rdi = *((rsp + 0x70));
    *((rsp + 0x60)) = r12;
    rdx = rdi;
    *(rdi) = r12;
    rdi = r15;
    *((rdx + 8)) = r15;
    rax += rcx;
    r13 = *((rsp + 0x28));
    rbp = *((rsp + 0x30));
    rcx = *((rsp + 0x38));
    rax = r12;
    r14 = *((rsp + 0x40));
    r9 = *((rsp + 0x48));
    r11 = *((rsp + 0x50));
    *((rdx + 0x10)) = r13;
    rbx = *((rsp + 0x18));
    *((rdx + 0x18)) = rbp;
    *((rdx + 0x20)) = rcx;
    *((rdx + 0x28)) = r14;
    *((rdx + 0x30)) = r9;
    *((rdx + 0x38)) = r11;
    if (rbx < *((rsp + 0x68))) {
        goto label_0;
    }
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x406ed0 */
#include <stdint.h>
 
#define SWAP64(val) ((uint64_t) (((val & 0x00000000000000ffull) << 56) | \
                                 ((val & 0x000000000000ff00ull) << 40) | \
                                 ((val & 0x0000000000ff0000ull) << 24) | \
                                 ((val & 0x00000000ff000000ull) <<  8) | \
                                 ((val & 0x000000ff00000000ull) >>  8) | \
                                 ((val & 0x0000ff0000000000ull) >> 24) | \
                                 ((val & 0x00ff000000000000ull) >> 40) | \
                                 ((val & 0xff00000000000000ull) >> 56)))
 
int64_t fcn_00406ed0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rcx = *((rdi + 0x50));
    rbx = rdi;
    rax = *((rbx + 0x48));
    rdx = rcx;
    rbp -= rbp;
    rbp &= 0xffffffffffffff80;
    rbp += 0x100;
    rsi -= rsi;
    rsi &= 0xfffffffffffffff0;
    rsi += 0x1f;
    rdi -= rdi;
    rdi &= 0xfffffffffffffff0;
    rdi += 0x1e;
    rdx += *((rbx + 0x40));
    *((rbx + 0x40)) = rdx;
    if (rdx < 0) {
        rax++;
        *((rbx + 0x48)) = rax;
    }
    r8 = rdx;
    rax <<= 3;
    r12 = rbx + 0x58;
    r9 = 0xff0000000000;
    r8 >>= 0x3d;
    rax |= r8;
    r8 = 0xff000000000000;
    rax = SWAP64 (rax);
    *((rbx + rdi*8 + 0x58)) = rax;
    rax = rdx;
    rdi = rdx*8;
    rax <<= 0x2b;
    rax &= r8;
    r8 = rdx;
    r8 <<= 0x1b;
    r8 &= r9;
    rax |= r8;
    r8 = rdx;
    rdx <<= 0xb;
    r8 <<= 0x3b;
    rax |= r8;
    r8 = 0xff00000000;
    rdx &= r8;
    rax |= rdx;
    rdx = rdi;
    rdx >>= 0x38;
    rax |= rdx;
    rdx = rdi;
    rdx >>= 8;
    edx &= 0xff000000;
    rax |= rdx;
    rdx = rdi;
    rdi >>= 0x28;
    rdx >>= 0x18;
    edi &= 0xff00;
    edx &= 0xff0000;
    rax |= rdx;
    rax |= rdi;
    *((rbx + rsi*8 + 0x58)) = rax;
    rax = rbp;
    rax -= rcx;
    memcpy (r12 + rcx, 0x40c260, rax - 0x10);
    rdx = rbx;
    rsi = rbp;
    rdi = r12;
invalid_funccall(); //    return void (*0x403280)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x407060 */
#include <stdint.h>
 
uint64_t fcn_00407060 (int64_t arg1, int64_t arg3, size_t n) {
    rdi = arg1;
    rdx = arg3;
    rsi = n;
    r13 = rsi;
    r12 = rdx;
    rbx = rdi;
    rbp = *((rdx + 0x50));
    if (rbp != 0) {
        goto label_5;
    }
label_0:
    if (r13 <= 0x7f) {
        goto label_6;
    }
    if ((bl & 7) == 0) {
        goto label_7;
    }
    rbp = r12 + 0x58;
    if (r13 == 0x80) {
        goto label_8;
    }
    rax = r13 - 0x81;
    rax >>= 7;
    r14 = rax + 1;
    r15 = rax;
    r14 <<= 7;
    r14 += rbx;
    do {
        __asm ("movdqu xmm0, xmmword [rbx]");
        rbx -= 0xffffffffffffff80;
        __asm ("movups xmmword [rbp], xmm0");
        __asm ("movdqu xmm1, xmmword [rbx - 0x70]");
        __asm ("movups xmmword [rbp + 0x10], xmm1");
        __asm ("movdqu xmm2, xmmword [rbx - 0x60]");
        __asm ("movups xmmword [rbp + 0x20], xmm2");
        __asm ("movdqu xmm3, xmmword [rbx - 0x50]");
        __asm ("movups xmmword [rbp + 0x30], xmm3");
        __asm ("movdqu xmm4, xmmword [rbx - 0x40]");
        __asm ("movups xmmword [rbp + 0x40], xmm4");
        __asm ("movdqu xmm5, xmmword [rbx - 0x30]");
        __asm ("movups xmmword [rbp + 0x50], xmm5");
        __asm ("movdqu xmm6, xmmword [rbx - 0x20]");
        __asm ("movups xmmword [rbp + 0x60], xmm6");
        __asm ("movdqu xmm7, xmmword [rbx - 0x10]");
        __asm ("movups xmmword [rbp + 0x70], xmm7");
        fcn_00403280 (rbp, 0x80, r12);
    } while (rbx != r14);
    rax = r15;
    rax = -rax;
    rax <<= 7;
    r13 = r13 + rax - 0x80;
label_3:
    rdx = *((r12 + 0x50));
    rsi = rbp + rdx;
    if (r13d >= 8) {
        goto label_9;
    }
    if ((r13b & 4) != 0) {
        goto label_10;
    }
    if (r13d != 0) {
        eax = *(r14);
        *(rsi) = al;
        if ((r13b & 2) != 0) {
            goto label_11;
        }
    }
label_4:
    r13 += rdx;
    if (r13 > 0x7f) {
        goto label_12;
    }
    do {
label_1:
        *((r12 + 0x50)) = r13;
        return rax;
label_7:
        r13d &= 0x7f;
        rbp &= 0xffffffffffffff80;
        rbx += rbp;
        fcn_00403280 (rbx, rbp, r12);
label_6:
        if (r13 != 0) {
            goto label_13;
        }
        return rax;
label_5:
        r14d = 0x100;
        r15 = rdx + 0x58;
        r14 -= rbp;
        rdi = r15 + rbp;
        if (r14 > rsi) {
            r14 = rsi;
        }
        memcpy (rdi, rbx, r14);
        rsi = *((r12 + 0x50));
        rsi += r14;
        *((r12 + 0x50)) = rsi;
        if (rsi > 0x80) {
            goto label_14;
        }
label_2:
        rbx += r14;
        r13 -= r14;
        goto label_0;
label_9:
        rax = *(r14);
        rdi = rsi + 8;
        rdi &= 0xfffffffffffffff8;
        *(rsi) = rax;
        eax = r13d;
        rcx = *((r14 + rax - 8));
        *((rsi + rax - 8)) = rcx;
        rcx = rsi;
        rsi = r14;
        rcx -= rdi;
        rsi -= rcx;
        ecx += r13d;
        r13 += rdx;
        ecx >>= 3;
        *(rdi) = *(rsi);
        rcx--;
        rsi += 8;
        rdi += 8;
    } while (r13 <= 0x7f);
label_12:
    r13 += 0xffffffffffffff80;
    fcn_00403280 (rbp, 0x80, r12);
    memcpy (rbp, r12 + 0xd8, r13);
    goto label_1;
label_14:
    rsi &= 0xffffffffffffff80;
    rbp += r14;
    fcn_00403280 (r15, rsi, r12);
    rcx = *((r12 + 0x50));
    rbp &= 0xffffffffffffff80;
    rsi = r15 + rbp;
    ecx &= 0x7f;
    *((r12 + 0x50)) = rcx;
    if (ecx >= 8) {
        goto label_15;
    }
    if ((cl & 4) != 0) {
        goto label_16;
    }
    if (ecx == 0) {
        goto label_2;
    }
    eax = *(rsi);
    *((r12 + 0x58)) = al;
    if ((cl & 2) == 0) {
        goto label_2;
    }
    eax = *((rsi + rcx - 2));
    *((r15 + rcx - 2)) = ax;
    goto label_2;
label_15:
    rax = *(rsi);
    rdi = r12 + 0x60;
    rdi &= 0xfffffffffffffff8;
    *((r12 + 0x58)) = rax;
    eax = ecx;
    rdx = *((rsi + rax - 8));
    *((r15 + rax - 8)) = rdx;
    rax = r15;
    rax -= rdi;
    ecx += eax;
    rsi -= rax;
    eax = ecx;
    eax >>= 3;
    do {
        ecx = eax;
    } while (rcx != 0);
    *(rdi) = *(rsi);
    rcx--;
    rsi += 8;
    rdi += 8;
    goto label_2;
label_16:
    eax = *(rsi);
    *((r12 + 0x58)) = eax;
    eax = *((rsi + rcx - 4));
    *((r15 + rcx - 4)) = eax;
    goto label_2;
label_8:
    r14 = rbx;
    goto label_3;
label_10:
    eax = *(r14);
    *(rsi) = eax;
    eax = r13d;
    ecx = *((r14 + rax - 4));
    *((rsi + rax - 4)) = ecx;
    goto label_4;
label_11:
    eax = r13d;
    ecx = *((r14 + rax - 2));
    *((rsi + rax - 2)) = cx;
    goto label_4;
label_13:
    rbp = r12 + 0x58;
    r14 = rbx;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x407510 */
#include <stdint.h>
 
uint64_t fcn_00407510 (int64_t arg1, int64_t arg2) {
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
    rdi = arg1;
    rsi = arg2;
    r14 = rsi;
    rax = malloc (0x8048);
    if (rax != 0) {
        *((rsp + 0x48)) = 0;
        r12 = rax;
        rax = 0x6a09e667f3bcc908;
        *(rsp) = rax;
        rax = 0xbb67ae8584caa73b;
        *((rsp + 8)) = rax;
        rax = 0x3c6ef372fe94f82b;
        *((rsp + 0x10)) = rax;
        rax = 0xa54ff53a5f1d36f1;
        *((rsp + 0x18)) = rax;
        rax = 0x510e527fade682d1;
        *((rsp + 0x20)) = rax;
        rax = 0x9b05688c2b3e6c1f;
        *((rsp + 0x28)) = rax;
        rax = 0x1f83d9abfb41bd6b;
        *((rsp + 0x30)) = rax;
        rax = 0x5be0cd19137e2179;
        *((rsp + 0x38)) = rax;
        *((rsp + 0x40)) = 0;
        *((rsp + 0x50)) = 0;
    }
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x407616 */
#include <stdint.h>
 
uint64_t fcn_00407616 (void) {
label_0:
    ebx = 0;
    r13d = 0x8000;
    while (rbx != 0x8000) {
        edx = *(rbp);
        if (rax == 0) {
            goto label_1;
        }
        edx &= 0x10;
        if (edx != 0) {
            goto label_2;
        }
        rdx = r13;
        rdi = r12 + rbx;
        rcx = rbp;
        esi = 1;
        rdx -= rbx;
        rax = fread_unlocked ();
        rbx += rax;
    }
    *(rax) += al;
    fcn_00403280 (r12, 0x8000, rsp);
    goto label_0;
label_1:
    edx &= 0x20;
    if (edx != 0) {
        goto label_3;
    }
label_2:
    while (1) {
        fcn_00406ed0 (rsp, rsi);
        fcn_00403240 (rsp, r14);
        eax = free (r12);
        eax = 0;
        return rax;
        fcn_00407060 (r12, rbx, rsp);
    }
label_3:
    free (r12);
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x407860 */
#include <stdint.h>
 
uint32_t fcn_00407860 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rdi != 0) {
        ebx = esi;
        eax = fileno (rdi);
        ecx = ebx;
        edx = 0;
        esi = 0;
        edi = eax;
invalid_funccall(); //        void (*0x401710)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x407890 */
#include <stdint.h>
 
uint64_t fcn_00407890 (int64_t arg2, const char * filename) {
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
        eax = fcn_00409570 (eax, rsi, rdx);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_00409db0 (rbx);
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
    fcn_00409db0 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x407930 */
#include <stdint.h>
 
uint64_t fcn_00407930 (char ** arg1) {
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
            edi = 0x40c320;
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
        *(0x0060f308) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x4079d0 */
#include <stdint.h>
 
uint64_t fcn_004079d0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040af20 ();
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
        eax = 0x40c326;
        ebx = 0x40c331;
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
        eax = 0x40c32a;
        ebx = 0x40c32d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40d517;
    ebx = 0x40c324;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x407ad0 */
#include <stdint.h>
 
uint64_t fcn_00407ad0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 39960 named .text */
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
    /* switch table (11 cases) at 0x40c3a0 */
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
    *((rsp + 0x50)) = 0x40d517;
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
        /* switch table (127 cases) at 0x40c3f8 */
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
    rax = fcn_00407ad0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40c7f0 */
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
    /* switch table (127 cases) at 0x40cbe8 */
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
    *((rsp + 0x50)) = 0x40d517;
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
        rax = fcn_0040ade0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40d517;
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
        *((rsp + 0x50)) = 0x40c324;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_004079d0 (0x40c335, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_004079d0 (0x40d517, r13d);
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
        *((rsp + 0x50)) = 0x40c324;
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
        *((rsp + 0x50)) = 0x40d517;
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
    *((rsp + 0x50)) = 0x40c324;
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
    rax = fcn_00407ad0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40d517;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x408d00 */
#include <stdint.h>
 
uint64_t fcn_00408d00 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0060f278);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060f290) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60f280) {
        goto label_2;
    }
    rax = fcn_00409b80 (rbx, rsi);
    *(0x0060f278) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060f290);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060f290) = r12d;
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
        rax = fcn_00407ad0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60f320) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00409b20 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00407ad0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00409b80 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060f280]");
        rbx = rax;
        *(0x0060f278) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00409d70 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x4093a0 */
#include <stdint.h>
 
int64_t fcn_004093a0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0060f420]");
        __asm ("movdqa xmm1, xmmword [0x0060f430]");
        __asm ("movdqa xmm2, xmmword [0x0060f440]");
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
        fcn_00408d00 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x4093d0 */
#include <stdint.h>
 
int64_t fcn_004093d0 (uint32_t arg2, int64_t arg3) {
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
    fcn_00408d00 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409570 */
#include <stdint.h>
 
uint64_t fcn_00409570 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
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
            *(0x0060f458) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
invalid_funccall(); //        eax = void (*0x409e30)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0060f458) != 0xffffffff) {
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
invalid_funccall(); //    eax = void (*0x409e30)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0060f458) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409580 */
#include <stdint.h>
 
void fcn_00409580 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40d08b);
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
        /* switch table (10 cases) at 0x40d378 */
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
invalid_funccall(); //    void (*0x4018d0)() ();
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
invalid_funccall(); //    void (*0x4018d0)() ();
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
invalid_funccall(); //    void (*0x4018d0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x4099e0 */
#include <stdint.h>
 
uint64_t fcn_004099e0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00409580 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409b20 */
#include <stdint.h>
 
uint64_t fcn_00409b20 (int64_t arg1) {
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
    return fcn_00409d70 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409b80 */
#include <stdint.h>
 
uint64_t fcn_00409b80 (int64_t arg1, int64_t arg2) {
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
    return fcn_00409d70 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409d20 */
#include <stdint.h>
 
uint64_t fcn_00409d20 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00409b20 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409d70 */
#include <stdint.h>
 
uint64_t fcn_00409d70 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060f220), 0, 0x40c255);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409db0 */
#include <stdint.h>
 
uint64_t fcn_00409db0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00409f70 (rbx);
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
invalid_funccall(); //    void (*0x401630)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409f70 */
#include <stdint.h>
 
uint32_t fcn_00409f70 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x4017b0)() ();
label_1:
    fcn_00409fb0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x409fb0 */
#include <stdint.h>
 
int64_t fcn_00409fb0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401870)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40a010 */
#include <stdint.h>
 
uint64_t fcn_0040a010 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40a0f0 */
#include <stdint.h>
 
int64_t fcn_0040a0f0 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40a710 */
#include <stdint.h>
 
uint64_t fcn_0040a710 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40d529;
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
            fcn_0040a010 (r12, rbx);
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
        fcn_0040a010 (r12, rbx);
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
    eax = fcn_0040a0f0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_0040a0f0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40ace0 */
#include <stdint.h>
 
int32_t fcn_0040ace0 (int64_t arg_10h) {
    eax = *(0x0060f29c);
    *(0x0060f460) = eax;
    eax = *(0x0060f298);
    *(0x0060f464) = eax;
    eax = *((rsp + 0x10));
    fcn_0040a710 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060f29c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060f4a0) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060f294) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40ad60 */
#include <stdint.h>
 
void fcn_0040ad60 (void) {
    r9d = 0;
    fcn_0040ace0 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40ade0 */
#include <stdint.h>
 
uint64_t fcn_0040ade0 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040aec0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40ae60 */
#include <stdint.h>
 
uint64_t fcn_0040ae60 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00409db0 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40aec0 */
#include <stdint.h>
 
uint64_t fcn_0040aec0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40d54c;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40af20 */
#include <stdint.h>
 
uint64_t fcn_0040af20 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40d547;
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
        r15d = 0x40d547;
label_2:
        *(0x0060f498) = r15;
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
        r15d = 0x40d547;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40b60f;
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
    fcn_00409db0 (rbx);
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
        r15d = 0x40d547;
        rbx = rax;
        free (r15);
        fcn_00409db0 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40b500 */
#include <stdint.h>
 
int64_t fcn_0040b500 (void) {
    rax = 0x60f208;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha512sum.elf @ 0x40b518 */
#include <stdint.h>
 
void fcn_0040b518 (int64_t arg3) {
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
