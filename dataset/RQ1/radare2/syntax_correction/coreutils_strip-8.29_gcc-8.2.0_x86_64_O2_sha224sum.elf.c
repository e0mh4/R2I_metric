#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x401940 */
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
    int64_t var_90h;
    rdi = argc;
    rsi = argv;
    r14d = 0;
    r13d = 0;
    r12d = 0xffffffff;
    rbx = rsi;
    fcn_00406260 (*(rsi));
    setlocale (6, 0x40be27);
    bindtextdomain (0x409f14, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x409f14, rsi);
    edi = 0x403080;
    fcn_00409e30 ();
    rax = setvbuf (*(obj.stdout), 0, 1, 0);
    do {
label_0:
        r8d = 0;
        ecx = 0x40a9e0;
        edx = "bctw";
        rsi = rbx;
        edi = ebp;
        eax = fcn_00409690 ();
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
        *(0x0060e2da) = 1;
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
        fcn_00408310 (*(obj.stdout), "sha224sum", "GNU coreutils");
        eax = exit (0);
label_48:
        if (eax != 0x81) {
            goto label_52;
        }
        *(0x0060e2dc) = 1;
        *(0x0060e2db) = 0;
        *(0x0060e2d9) = 0;
        goto label_0;
INVALID_JUMP;
    } while (eax != 0x83);
    *(0x0060e2d8) = 1;
    goto label_0;
label_53:
    if (eax != 0xffffff7e) {
        goto label_52;
    }
    fcn_00402c90 (0);
label_46:
    *(0x0060e2dc) = 0;
    *(0x0060e2db) = 0;
    *(0x0060e2d9) = 1;
    goto label_0;
label_44:
    *(0x0060e2dc) = 0;
    *(0x0060e2db) = 1;
    *(0x0060e2d9) = 0;
    goto label_0;
label_43:
    *(0x0060e2e8) = 0x3a;
    *(0x0060e2e0) = 0x38;
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
    if (*(0x0060e2da) != 0) {
        goto label_56;
    }
    if (*(0x0060e2dc) == 0) {
        goto label_57;
    }
    edx = 5;
    esi = "the --status option is meaningful only when verifying checksums";
    if (r13b == 0) {
        goto label_55;
    }
label_3:
    if (*(0x0060e2db) == 0) {
label_31:
        if (*(0x0060e2d8) == 0) {
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
    rax = *(0x0060e29c);
    if (eax == ebp) {
        rdi = *((rsp + 0x38));
        *(rdi) = 0x40be0a;
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
    eax = strcmp (rdi, 0x40be0a);
    *((rsp + 0x14)) = eax;
    if (eax != 0) {
        goto label_60;
    }
    edx = 5;
    *(0x0060e2f0) = 1;
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
    edi = "SHA224";
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
    if (*(0x0060e2db) != 0) {
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
    rax = fcn_00407d00 (0, 3);
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
    rax += *(0x0060e2e8);
    if (rcx < rax) {
        goto label_4;
    }
    rdx += *(0x0060e2e0);
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
    ecx = *(0x0060e210);
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
    *(0x0060e210) = 1;
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
    edi = 0x40be0a;
    ecx = 2;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (eax > 0) ? 1 : 0;
    if (al == 0) {
        goto label_4;
    }
label_69:
    r14d = 0;
    if (*(0x0060e2dc) == 0) {
        r14d = 0;
        rax = strchr (r15, 0xa);
        r14b = (rax != 0) ? 1 : 0;
    }
    eax = fcn_00402af0 (r15, rsp + 0x90, rsp + 0x5f);
    r8d = eax;
    if (al != 0) {
        goto label_70;
    }
    if (*(0x0060e2dc) == 0) {
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
        esi = 0x40b9c1;
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
    if (*(0x0060e2dc) != 0) {
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
    if (*(0x0060e2da) == 0) {
        goto label_75;
    }
    if (*((rsp + 0x49)) == 0) {
        goto label_79;
    }
label_13:
    rax = *((rsp + 0x18));
    rax |= *((rsp + 0x40));
    if (rax == 0) {
        eax = *(0x0060e2d8);
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
    rax = fcn_00407d00 (0, 3);
    edx = 5;
    r15 = rax;
    rax = dcgettext (0, "%s: %lu: improperly formatted %s checksum line");
    r9d = "SHA224";
    r8 = rbx;
    rcx = r15;
    eax = 0;
    error (0, 0, rax);
    goto label_6;
label_70:
    if (*(0x0060e2da) == 0) {
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
        eax = *((rsp + rdx + 0x90));
        r9d = *((r13 + rdx*2));
        esi = eax;
        sil >>= 4;
        esi &= 0xf;
        esi = *((rsi + str_0123456789abcdef));
    }
label_82:
    if (*(0x0060e2dc) != 0) {
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
    al = fcn_00402af0 (*((rsp + 8)), rsp + 0x70, rsp + 0x90);
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
    if (*(0x0060e2f0) != 0) {
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
    rax = fcn_004061c0 (*((rsp + 8)), 0x409f2d);
    if (rax != 0) {
        goto label_10;
    }
label_22:
    rdx = *((rsp + 8));
    rax = fcn_00407d00 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    eax = error (0, *(rax), 0x40ab75);
    eax = 0;
    goto label_11;
label_67:
    ecx--;
    if (ecx == 0) {
        goto label_12;
    }
    *(0x0060e210) = 0;
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
    eax = fcn_004086e0 (rbp);
    if (eax == 0) {
        goto label_21;
    }
    goto label_22;
label_83:
    rdx = rcx;
label_38:
    eax = *(0x0060e2dc);
    *((rsp + 0x49)) = al;
    if (al != 0) {
        goto label_7;
    }
    eax = *(0x0060e2d9);
    *((rsp + 0x49)) = al;
    if (al != 0) {
        goto label_7;
    }
    if (r14d != 0) {
        *((rsp + 0x49)) = r8b;
        goto label_23;
label_74:
        rdx = *((rsp + 8));
        rax = fcn_00407d00 (0, 3);
        edx = 5;
        rax = dcgettext (0, "%s: no properly formatted %s checksum lines found");
        r8d = "SHA224";
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
        rax = fcn_00407d00 (0, 3);
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
    if (*(0x0060e2d9) != 0) {
        goto label_7;
    }
    edx = 5;
    esi = 0x409f96;
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
    if (*(0x0060e2db) == 0) {
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
    edi = "SHA224";
    rcx = stdout;
    fwrite_unlocked ();
    edx = 2;
    esi = 1;
    rcx = stdout;
    edi = 0x409fc6;
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
    eax = fcn_004086e0 (*(obj.stdin));
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
    if (*(0x0060e2d9) != 1) {
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
        rax = fcn_00407d00 (0, 3);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x40289b */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4028f1 */
#include <stdint.h>
 
int64_t fcn_004028f1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060e2c8) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x60de48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060e2d0) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040289b ();
    *(0x0060e2c8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x402948 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x402950 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4029b0 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x402a40 */
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
    edi = 0x409e87;
    fwrite_unlocked ();
    goto label_0;
label_5:
    edx = 2;
    esi = 1;
    edi = 0x409e84;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x402af0 */
#include <stdint.h>
 
uint64_t fcn_00402af0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = 2;
    r12 = rsi;
    edi = 0x40be0a;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    *(rdx) = 0;
    al = (unknown > unknown) ? 1 : 0;
    if (al != 0) {
        goto label_1;
    }
    rbx = stdin;
    *(0x0060e2f0) = 1;
    fcn_00406190 (rbx, 2);
    eax = fcn_00406020 (rbx, r12);
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
        rax = fcn_004061c0 (rbp, 0x409f2d);
        rbx = rax;
        if (rax == 0) {
            goto label_3;
        }
        fcn_00406190 (rax, 2);
        eax = fcn_00406020 (rbx, r12);
        if (eax != 0) {
            goto label_2;
        }
        eax = fcn_004086e0 (rbx);
    } while (eax == 0);
    rdx = rbp;
    r12d = 0;
    rax = fcn_00407d00 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), 0x40ab75);
    goto label_0;
label_2:
    rdx = rbp;
    r12d = 0;
    rax = fcn_00407d00 (0, 3);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x40ab75);
    if (*(obj.stdin) == rbx) {
        goto label_0;
    }
    fcn_004086e0 (rbx);
    goto label_0;
label_3:
    rax = errno_location ();
    r12d = *(0x0060e2da);
    rbx = rax;
    if (r12b != 0) {
        if (*(rax) == 2) {
            goto label_4;
        }
    }
    rdx = rbp;
    r12d = 0;
    rax = fcn_00407d00 (0, 3);
    rcx = rax;
    eax = 0;
    error (0, *(rbx), 0x40ab75);
    goto label_0;
label_4:
    *(r13) = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x402c90 */
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
    r8d = 0xe0;
    ecx = "SHA224";
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
    edx = "SHA224";
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
    edx = "RFC 3874";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    *(rsp) = 0x409ea4;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x409f14;
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
        esi = "sha224sum";
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
        eax = strncmp (rax, 0x409f1e, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x409ec0;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "sha224sum";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40be27;
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
            eax = strncmp (rax, 0x409f1e, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "sha224sum";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x409ec0;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "sha224sum";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4031c0 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int64_t fcn_004031c0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rsi;
    edx = 0;
    do {
        ecx = *((rdi + rdx));
        ecx = SWAP32 (ecx);
        *((rax + rdx)) = ecx;
        rdx += 4;
    } while (rdx != 0x20);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4031e0 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int64_t fcn_004031e0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rsi;
    edx = 0;
    do {
        ecx = *((rdi + rdx));
        ecx = SWAP32 (ecx);
        *((rax + rdx)) = ecx;
        rdx += 4;
    } while (rdx != 0x1c);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x403200 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int64_t fcn_00403200 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_44h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    ecx = esi;
    r15 = rdi;
    rax &= 0xfffffffffffffffc;
    rax += rdi;
    r11 = rax;
    rbx = rdx;
    r13d = *((rbx + 8));
    r12d = *((rbx + 0xc));
    r10d = *((rbx + 0x10));
    ebp = *((rbx + 0x14));
    *((rsp - 0x40)) = rdi;
    edi = 0;
    ecx += *((rbx + 0x20));
    r9d = *((rbx + 0x18));
    *(rsp) = rdx;
    edx = *(rdx);
    dil = (ecx < 0) ? 1 : 0;
    *((rbx + 0x20)) = ecx;
    rsi >>= 0x20;
    ecx = *((rbx + 0x24));
    r8d = *((rbx + 0x1c));
    *((rsp - 8)) = rax;
    eax = *((rbx + 4));
    ecx += esi;
    ecx += edi;
    *((rbx + 0x24)) = ecx;
    if (r15 >= r11) {
        goto label_1;
    }
    *((rsp - 0x1c)) = r8d;
    *((rsp - 0x20)) = r9d;
    *((rsp - 0x24)) = ebp;
    *((rsp - 0x28)) = r10d;
    *((rsp - 0x2c)) = r12d;
    *((rsp - 0x30)) = r13d;
    *((rsp - 0x34)) = eax;
    *((rsp - 0xc)) = edx;
label_0:
    rdi = *((rsp - 0x40));
    ecx = 0;
    do {
        esi = *((rdi + rcx));
        esi = SWAP32 (esi);
        *((rsp + rcx + 8)) = esi;
        rcx += 4;
    } while (rcx != 0x40);
    ecx = r10d;
    esi = r10d;
    edi = *((rsp + 8));
    ecx = rotate_right32 (ecx, 6);
    esi = rotate_right32 (esi, 0xb);
    r15d = *((rsp + 0x10));
    esi ^= ecx;
    ecx = r10d;
    edi = rdi + r8 + 0x428a2f98;
    r8d = edx;
    ecx = rotate_left32 (ecx, 7);
    r8d &= eax;
    ecx ^= esi;
    esi = ebp;
    esi ^= r9d;
    edi += ecx;
    esi &= r10d;
    esi ^= r9d;
    ecx = rdi + rsi;
    esi = edx;
    edi = edx;
    esi = rotate_right32 (esi, 2);
    edi = rotate_right32 (edi, 0xd);
    r14d = rcx + r12;
    r12d = *((rsp + 0xc));
    edi ^= esi;
    esi = edx;
    esi = rotate_left32 (esi, 0xa);
    edi ^= esi;
    esi = edx;
    esi |= eax;
    esi &= r13d;
    esi |= r8d;
    r8d = r14d;
    esi += edi;
    edi = r10d;
    r8d = rotate_right32 (r8d, 0xb);
    edi ^= ebp;
    esi += ecx;
    ecx = r12 + r9 + 0x71374491;
    edi &= r14d;
    r11d = esi;
    edi ^= ebp;
    ecx += edi;
    edi = r14d;
    edi = rotate_right32 (edi, 6);
    r8d ^= edi;
    edi = r14d;
    edi = rotate_left32 (edi, 7);
    edi ^= r8d;
    r8d = esi;
    edi += ecx;
    ecx = esi;
    r8d = rotate_right32 (r8d, 2);
    ecx = rotate_right32 (ecx, 0xd);
    r11d &= edx;
    r9d = rdi + r13;
    ecx ^= r8d;
    r8d = esi;
    r8d = rotate_left32 (r8d, 0xa);
    ecx ^= r8d;
    r8d = esi;
    r8d |= edx;
    r8d &= eax;
    r8d |= r11d;
    r11d = r15 + rbp - 0x4a3f0431;
    r8d += ecx;
    ecx = r9d;
    r8d += edi;
    edi = r14d;
    ecx = rotate_right32 (ecx, 0xb);
    edi ^= r10d;
    ebx = ecx;
    edi &= r9d;
    edi ^= r10d;
    r11d += edi;
    edi = r9d;
    edi = rotate_right32 (edi, 6);
    ebx ^= edi;
    edi = r9d;
    edi = rotate_left32 (edi, 7);
    edi ^= ebx;
    edi += r11d;
    r11d = r8d;
    ecx = rdi + rax;
    eax = r8d;
    r11d = rotate_left32 (r11d, 0xa);
    eax = rotate_right32 (eax, 2);
    ebx = eax;
    eax = r8d;
    eax = rotate_right32 (eax, 0xd);
    eax ^= ebx;
    eax ^= r11d;
    r11d = esi;
    r11d |= r8d;
    ebx = r11d;
    r11d = esi;
    r11d &= r8d;
    ebx &= edx;
    ebx |= r11d;
    r11d = r8d;
    ebx += eax;
    eax = r14d;
    ebx += edi;
    eax ^= r9d;
    edi = *((rsp + 0x14));
    eax &= ecx;
    r11d &= ebx;
    eax ^= r14d;
    r10d = r10 + rdi - 0x164a245b;
    edi = ecx;
    r10d += eax;
    eax = ecx;
    edi = rotate_right32 (edi, 0xb);
    eax = rotate_right32 (eax, 6);
    edi ^= eax;
    eax = ecx;
    eax = rotate_left32 (eax, 7);
    eax ^= edi;
    edi = ebx;
    eax += r10d;
    r10d = ebx;
    edi = rotate_right32 (edi, 2);
    r10d = rotate_right32 (r10d, 0xd);
    edx += eax;
    r10d ^= edi;
    edi = ebx;
    edi = rotate_left32 (edi, 0xa);
    r10d ^= edi;
    edi = r8d;
    edi |= ebx;
    edi &= esi;
    edi |= r11d;
    r11d = *((rsp + 0x18));
    edi += r10d;
    edi += eax;
    eax = r9d;
    r10d = r11 + r14 + 0x3956c25b;
    r11d = edx;
    eax ^= ecx;
    r11d = rotate_right32 (r11d, 0xb);
    eax &= edx;
    eax ^= r9d;
    r10d += eax;
    eax = edx;
    eax = rotate_right32 (eax, 6);
    r11d ^= eax;
    eax = edx;
    eax = rotate_left32 (eax, 7);
    eax ^= r11d;
    r11d = edi;
    eax += r10d;
    r10d = edi;
    esi += eax;
    r11d = rotate_right32 (r11d, 2);
    ebp &= edi;
    r10d = rotate_right32 (r10d, 0xd);
    r10d ^= r11d;
    r11d = edi;
    r11d = rotate_left32 (r11d, 0xa);
    r10d ^= r11d;
    r11d = ebx;
    r11d |= edi;
    r11d &= r8d;
    r11d |= ebp;
    r11d += r10d;
    r10d = ecx;
    r11d += eax;
    r10d ^= edx;
    eax = *((rsp + 0x1c));
    r10d &= esi;
    ebp &= r11d;
    r10d ^= ecx;
    r9d = rax + r9 + 0x59f111f1;
    eax = esi;
    r10d += r9d;
    r9d = esi;
    eax = rotate_right32 (eax, 0xb);
    r9d = rotate_right32 (r9d, 6);
    eax ^= r9d;
    r9d = esi;
    r9d = rotate_left32 (r9d, 7);
    r9d ^= eax;
    eax = r11d;
    r9d += r10d;
    r10d = r11d;
    eax = rotate_right32 (eax, 2);
    r10d = rotate_right32 (r10d, 0xd);
    r8d += r9d;
    r10d ^= eax;
    eax = r11d;
    eax = rotate_left32 (eax, 0xa);
    r10d ^= eax;
    eax = edi;
    eax |= r11d;
    eax &= ebx;
    eax |= ebp;
    eax += r10d;
    r10d = *((rsp + 0x20));
    eax += r9d;
    r9d = edx;
    r9d ^= esi;
    r10d = r10 + rcx - 0x6dc07d5c;
    ecx = r8d;
    ebp &= eax;
    r9d &= r8d;
    ecx = rotate_right32 (ecx, 0xb);
    r9d ^= edx;
    r10d += r9d;
    r9d = r8d;
    r9d = rotate_right32 (r9d, 6);
    ecx ^= r9d;
    r9d = r8d;
    r9d = rotate_left32 (r9d, 7);
    r9d ^= ecx;
    ecx = eax;
    r9d += r10d;
    r10d = eax;
    ecx = rotate_right32 (ecx, 2);
    r10d = rotate_right32 (r10d, 0xd);
    ebx += r9d;
    r10d ^= ecx;
    ecx = eax;
    ecx = rotate_left32 (ecx, 0xa);
    r10d ^= ecx;
    ecx = r11d;
    ecx |= eax;
    ecx &= edi;
    ecx |= ebp;
    ecx += r10d;
    r10d = *((rsp + 0x24));
    ecx += r9d;
    r9d = esi;
    r9d ^= r8d;
    r10d = r10 + rdx - 0x54e3a12b;
    edx = ebx;
    r9d &= ebx;
    edx = rotate_right32 (edx, 0xb);
    r9d ^= esi;
    r10d += r9d;
    r9d = ebx;
    r9d = rotate_right32 (r9d, 6);
    edx ^= r9d;
    r9d = ebx;
    r9d = rotate_left32 (r9d, 7);
    r9d ^= edx;
    edx = ecx;
    r9d += r10d;
    r10d = ecx;
    edx = rotate_right32 (edx, 2);
    ebp &= ecx;
    r10d = rotate_right32 (r10d, 0xd);
    edi += r9d;
    r10d ^= edx;
    edx = ecx;
    edx = rotate_left32 (edx, 0xa);
    r10d ^= edx;
    edx = eax;
    edx |= ecx;
    edx &= r11d;
    edx |= ebp;
    edx += r10d;
    r10d = *((rsp + 0x28));
    edx += r9d;
    r9d = r8d;
    r9d ^= ebx;
    esi = r10 + rsi - 0x27f85568;
    r10d = edi;
    ebp &= edx;
    r9d &= edi;
    r10d = rotate_right32 (r10d, 0xb);
    r9d ^= r8d;
    r9d += esi;
    esi = edi;
    esi = rotate_right32 (esi, 6);
    r10d ^= esi;
    esi = edi;
    esi = rotate_left32 (esi, 7);
    esi ^= r10d;
    r10d = edx;
    esi += r9d;
    r9d = edx;
    r10d = rotate_right32 (r10d, 2);
    r9d = rotate_right32 (r9d, 0xd);
    r11d += esi;
    r9d ^= r10d;
    r10d = edx;
    r10d = rotate_left32 (r10d, 0xa);
    r9d ^= r10d;
    r10d = ecx;
    r10d |= edx;
    r10d &= eax;
    r10d |= ebp;
    r10d += r9d;
    r9d = *((rsp + 0x2c));
    r10d += esi;
    esi = ebx;
    esi ^= edi;
    r8d = r9 + r8 + 0x12835b01;
    r9d = r11d;
    ebp &= r10d;
    esi &= r11d;
    r9d = rotate_right32 (r9d, 0xb);
    esi ^= ebx;
    r8d += esi;
    esi = r11d;
    esi = rotate_right32 (esi, 6);
    r9d ^= esi;
    esi = r11d;
    esi = rotate_left32 (esi, 7);
    esi ^= r9d;
    r9d = r10d;
    esi += r8d;
    r8d = r10d;
    r9d = rotate_right32 (r9d, 2);
    r8d = rotate_right32 (r8d, 0xd);
    eax += esi;
    r8d ^= r9d;
    r9d = r10d;
    r9d = rotate_left32 (r9d, 0xa);
    r8d ^= r9d;
    r9d = edx;
    r9d |= r10d;
    r9d &= ecx;
    r9d |= ebp;
    r9d += r8d;
    r8d = *((rsp + 0x30));
    r9d += esi;
    esi = edi;
    esi ^= r11d;
    ebx = r8 + rbx + 0x243185be;
    r8d = eax;
    r14d = r9d;
    esi &= eax;
    r8d = rotate_right32 (r8d, 0xb);
    esi ^= edi;
    ebx += esi;
    esi = eax;
    esi = rotate_right32 (esi, 6);
    r8d ^= esi;
    esi = eax;
    esi = rotate_left32 (esi, 7);
    r14d = rotate_right32 (r14d, 0xd);
    ebp &= r9d;
    esi ^= r8d;
    r8d = r9d;
    esi += ebx;
    r8d = rotate_right32 (r8d, 2);
    ebx = r14d;
    r14d = *((rsp + 0x34));
    ebx ^= r8d;
    r8d = r9d;
    ecx += esi;
    r8d = rotate_left32 (r8d, 0xa);
    edi = r14 + rdi + 0x550c7dc3;
    r14d = ecx;
    ebx ^= r8d;
    r8d = r10d;
    r14d = rotate_right32 (r14d, 0xb);
    r8d |= r9d;
    r8d &= edx;
    r8d |= ebp;
    r8d += ebx;
    ebx = r14d;
    r8d += esi;
    esi = r11d;
    esi ^= eax;
    r14d = r8d;
    esi &= ecx;
    r14d = rotate_left32 (r14d, 0xa);
    esi ^= r11d;
    edi += esi;
    esi = ecx;
    esi = rotate_right32 (esi, 6);
    ebx ^= esi;
    esi = ecx;
    esi = rotate_left32 (esi, 7);
    esi ^= ebx;
    esi += edi;
    edi = r8d;
    edi = rotate_right32 (edi, 2);
    edx += esi;
    ebx = edi;
    edi = r8d;
    edi = rotate_right32 (edi, 0xd);
    edi ^= ebx;
    edi ^= r14d;
    r14d = r9d;
    r14d |= r8d;
    ebx = r14d;
    ebx &= r10d;
    ebp &= r8d;
    ebx |= ebp;
    ebx += edi;
    edi = eax;
    ebx += esi;
    edi ^= ecx;
    esi = *((rsp + 0x38));
    edi &= edx;
    ebp &= ebx;
    edi ^= eax;
    r11d = rsi + r11 + 0x72be5d74;
    esi = edx;
    r11d += edi;
    edi = edx;
    esi = rotate_right32 (esi, 0xb);
    edi = rotate_right32 (edi, 6);
    esi ^= edi;
    edi = edx;
    edi = rotate_left32 (edi, 7);
    edi ^= esi;
    esi = ebx;
    edi += r11d;
    r11d = ebx;
    esi = rotate_right32 (esi, 2);
    r11d = rotate_right32 (r11d, 0xd);
    r10d += edi;
    r11d ^= esi;
    esi = ebx;
    esi = rotate_left32 (esi, 0xa);
    r11d ^= esi;
    esi = r8d;
    esi |= ebx;
    esi &= r9d;
    esi |= ebp;
    esi += r11d;
    r11d = ecx;
    esi += edi;
    r11d ^= edx;
    edi = *((rsp + 0x3c));
    r11d &= r10d;
    r11d ^= ecx;
    eax = rdi + rax - 0x7f214e02;
    edi = r10d;
    r11d += eax;
    eax = r10d;
    eax = rotate_right32 (eax, 6);
    edi = rotate_right32 (edi, 0xb);
    ebp &= esi;
    edi ^= eax;
    eax = r10d;
    eax = rotate_left32 (eax, 7);
    eax ^= edi;
    edi = esi;
    eax += r11d;
    r11d = esi;
    edi = rotate_right32 (edi, 2);
    r11d = rotate_right32 (r11d, 0xd);
    r9d += eax;
    r11d ^= edi;
    edi = esi;
    r14d = r9d;
    edi = rotate_left32 (edi, 0xa);
    r14d = rotate_right32 (r14d, 0xb);
    r11d ^= edi;
    edi = ebx;
    edi |= esi;
    edi &= r8d;
    edi |= ebp;
    edi += r11d;
    r11d = *((rsp + 0x40));
    edi += eax;
    eax = edx;
    eax ^= r10d;
    ecx = r11 + rcx - 0x6423f959;
    r11d = esi;
    eax &= r9d;
    eax ^= edx;
    ecx += eax;
    eax = r9d;
    eax = rotate_right32 (eax, 6);
    r14d ^= eax;
    eax = r9d;
    eax = rotate_left32 (eax, 7);
    eax ^= r14d;
    r14d = edi;
    eax += ecx;
    ecx = edi;
    r14d = rotate_right32 (r14d, 2);
    ecx = rotate_right32 (ecx, 0xd);
    r8d += eax;
    ecx ^= r14d;
    r14d = edi;
    r14d = rotate_left32 (r14d, 0xa);
    ecx ^= r14d;
    r14d = esi;
    r11d &= edi;
    r14d |= edi;
    r14d &= ebx;
    r14d |= r11d;
    r11d = edi;
    r14d += ecx;
    ecx = *((rsp + 0x44));
    r14d += eax;
    eax = r10d;
    eax ^= r9d;
    edx = rcx + rdx - 0x3e640e8c;
    ecx = r8d;
    r11d &= r14d;
    eax &= r8d;
    ecx = rotate_right32 (ecx, 0xb);
    eax ^= r10d;
    edx += eax;
    eax = r8d;
    eax = rotate_right32 (eax, 6);
    ecx ^= eax;
    eax = r8d;
    eax = rotate_left32 (eax, 7);
    eax ^= ecx;
    ecx = r14d;
    eax += edx;
    edx = r14d;
    ecx = rotate_right32 (ecx, 2);
    edx = rotate_right32 (edx, 0xd);
    ebx += eax;
    edx ^= ecx;
    ecx = r14d;
    ecx = rotate_left32 (ecx, 0xa);
    edx ^= ecx;
    ecx = edi;
    ecx |= r14d;
    ecx &= esi;
    ecx |= r11d;
    r11d = *((rsp + 0x40));
    ecx += edx;
    edx = *((rsp + 8));
    ecx += eax;
    eax = *((rsp + 0x40));
    r11d = rotate_left32 (r11d, 0xf);
    eax = rotate_left32 (eax, 0xd);
    eax ^= r11d;
    r11d = *((rsp + 0x40));
    r11d >>= 0xa;
    edx += *((rsp + 0x2c));
    ebp &= ecx;
    r11d ^= eax;
    eax = r11 + rdx;
    edx = r12d;
    r11d = r12d;
    edx = rotate_right32 (edx, 7);
    r11d = rotate_left32 (r11d, 0xe);
    r11d ^= edx;
    edx = r12d;
    edx >>= 3;
    r11d ^= edx;
    edx = ebx;
    r11d += eax;
    eax = r9d;
    edx = rotate_right32 (edx, 0xb);
    eax ^= r8d;
    r10d = r10 + r11 - 0x1b64963f;
    eax &= ebx;
    eax ^= r9d;
    r10d += eax;
    eax = ebx;
    eax = rotate_right32 (eax, 6);
    edx ^= eax;
    eax = ebx;
    eax = rotate_left32 (eax, 7);
    eax ^= edx;
    edx = ecx;
    eax += r10d;
    r10d = ecx;
    edx = rotate_right32 (edx, 2);
    r10d = rotate_right32 (r10d, 0xd);
    esi += eax;
    r10d ^= edx;
    edx = ecx;
    r13d = esi;
    edx = rotate_left32 (edx, 0xa);
    r10d ^= edx;
    edx = r14d;
    edx |= ecx;
    edx &= edi;
    edx |= ebp;
    ebp = *((rsp + 0x30));
    edx += r10d;
    r10d = *((rsp + 0x44));
    edx += eax;
    eax = *((rsp + 0x44));
    r10d = rotate_left32 (r10d, 0xf);
    eax = rotate_left32 (eax, 0xd);
    ebp += r12d;
    r13d = rotate_right32 (r13d, 0xb);
    eax ^= r10d;
    r10d = *((rsp + 0x44));
    r10d >>= 0xa;
    r10d ^= eax;
    eax = r10 + rbp;
    r10d = r15d;
    ebp = rotate_right32 (ebp, 7);
    r10d = rotate_left32 (r10d, 0xe);
    r10d ^= ebp;
    ebp >>= 3;
    r10d ^= ebp;
    r10d += eax;
    eax = r8d;
    ebp &= edx;
    eax ^= ebx;
    r9d = r9 + r10 - 0x1041b87a;
    eax &= esi;
    eax ^= r8d;
    r9d += eax;
    eax = esi;
    eax = rotate_right32 (eax, 6);
    r13d ^= eax;
    eax = esi;
    eax = rotate_left32 (eax, 7);
    eax ^= r13d;
    r13d = edx;
    eax += r9d;
    r9d = edx;
    r13d = rotate_right32 (r13d, 2);
    r9d = rotate_right32 (r9d, 0xd);
    edi += eax;
    r9d ^= r13d;
    r13d = edx;
    r12d = edi;
    r13d = rotate_left32 (r13d, 0xa);
    r9d ^= r13d;
    r13d = ecx;
    r13d |= edx;
    r13d &= r14d;
    r13d |= ebp;
    r13d += r9d;
    r9d = r11d;
    r13d += eax;
    ebp = rotate_left32 (ebp, 0xf);
    eax = *((rsp + 0x14));
    r9d = rotate_left32 (r9d, 0xd);
    r12d = rotate_right32 (r12d, 0xb);
    r9d ^= ebp;
    eax = rotate_right32 (eax, 7);
    ebp >>= 0xa;
    ebp ^= r9d;
    r9d = *((rsp + 0x14));
    r9d = rotate_left32 (r9d, 0xe);
    eax ^= r9d;
    r9d = *((rsp + 0x14));
    r9d >>= 3;
    r9d ^= eax;
    eax = *((rsp + 0x34));
    eax += r15d;
    r9d += eax;
    eax = ebx;
    eax ^= esi;
    r9d += ebp;
    eax &= edi;
    r8d = r8 + r9 + 0xfc19dc6;
    eax ^= ebx;
    r8d += eax;
    eax = edi;
    eax = rotate_right32 (eax, 6);
    r12d ^= eax;
    eax = edi;
    eax = rotate_left32 (eax, 7);
    eax ^= r12d;
    r12d = r13d;
    eax += r8d;
    r8d = r13d;
    r12d = rotate_right32 (r12d, 2);
    r8d = rotate_right32 (r8d, 0xd);
    r14d += eax;
    r8d ^= r12d;
    r12d = r13d;
    r12d = rotate_left32 (r12d, 0xa);
    r8d ^= r12d;
    r12d = edx;
    r12d |= r13d;
    r12d &= ecx;
    ebp &= r13d;
    r12d |= ebp;
    r12d += r8d;
    r8d = r10d;
    ebp = rotate_left32 (ebp, 0xf);
    r8d = rotate_left32 (r8d, 0xd);
    r12d += eax;
    eax = *((rsp + 0x18));
    r8d ^= ebp;
    r15d = r12d;
    ebp >>= 0xa;
    eax = rotate_right32 (eax, 7);
    ebp ^= r8d;
    r8d = *((rsp + 0x18));
    r15d = rotate_right32 (r15d, 0xd);
    r8d = rotate_left32 (r8d, 0xe);
    eax ^= r8d;
    r8d = *((rsp + 0x18));
    r8d >>= 3;
    r8d ^= eax;
    eax = *((rsp + 0x14));
    eax += *((rsp + 0x38));
    r8d += eax;
    eax = esi;
    eax ^= edi;
    r8d += ebp;
    eax &= r14d;
    ebx = rbx + r8 + 0x240ca1cc;
    ebp = rotate_right32 (ebp, 0xb);
    eax ^= esi;
    ebx += eax;
    eax = r14d;
    eax = rotate_right32 (eax, 6);
    ebp ^= eax;
    eax = r14d;
    eax = rotate_left32 (eax, 7);
    eax ^= ebp;
    eax += ebx;
    ebp = rotate_right32 (ebp, 2);
    ebx = r15d;
    r15d = r13d;
    ebx ^= ebp;
    ecx += eax;
    ebp = rotate_left32 (ebp, 0xa);
    ebx ^= ebp;
    r15d &= r12d;
    ebp |= r12d;
    ebp &= edx;
    ebp |= r15d;
    r15d = r9d;
    ebp += ebx;
    r15d = rotate_left32 (r15d, 0xd);
    ebp += eax;
    eax = r9d;
    ebx = r15d;
    r15d = *((rsp + 0x1c));
    eax = rotate_left32 (eax, 0xf);
    ebx ^= eax;
    eax = r9d;
    r15d = rotate_left32 (r15d, 0xe);
    eax >>= 0xa;
    ebx ^= eax;
    eax = *((rsp + 0x1c));
    eax = rotate_right32 (eax, 7);
    eax ^= r15d;
    r15d = *((rsp + 0x1c));
    r15d >>= 3;
    r15d ^= eax;
    eax = *((rsp + 0x18));
    eax += *((rsp + 0x3c));
    eax += r15d;
    r15d = r12d;
    ebx += eax;
    eax = edi;
    eax ^= r14d;
    esi = rsi + rbx + 0x2de92c6f;
    *((rsp - 0x78)) = ebx;
    ebx = ecx;
    eax &= ecx;
    ebx = rotate_right32 (ebx, 0xb);
    eax ^= edi;
    esi += eax;
    eax = ecx;
    eax = rotate_right32 (eax, 6);
    ebx ^= eax;
    eax = ecx;
    eax = rotate_left32 (eax, 7);
    eax ^= ebx;
    eax += esi;
    esi = ebp;
    esi = rotate_right32 (esi, 2);
    edx += eax;
    ebx = esi;
    esi = ebp;
    esi = rotate_right32 (esi, 0xd);
    r15d &= ebp;
    esi ^= ebx;
    ebx = ebp;
    ebx = rotate_left32 (ebx, 0xa);
    esi ^= ebx;
    ebx = r12d;
    ebx |= ebp;
    ebx &= r13d;
    ebx |= r15d;
    r15d = *((rsp + 0x20));
    ebx += esi;
    esi = r8d;
    esi = rotate_left32 (esi, 0xd);
    ebx += eax;
    eax = r8d;
    r15d = rotate_left32 (r15d, 0xe);
    eax = rotate_left32 (eax, 0xf);
    esi ^= eax;
    eax = r8d;
    eax >>= 0xa;
    esi ^= eax;
    eax = *((rsp + 0x20));
    eax = rotate_right32 (eax, 7);
    eax ^= r15d;
    r15d = *((rsp + 0x20));
    r15d >>= 3;
    r15d ^= eax;
    eax = *((rsp + 0x1c));
    eax += *((rsp + 0x40));
    eax += r15d;
    r15d = ebp;
    eax += esi;
    esi = r14d;
    esi ^= ecx;
    edi = rdi + rax + 0x4a7484aa;
    *((rsp - 0x74)) = eax;
    eax = edx;
    esi &= edx;
    eax = rotate_right32 (eax, 0xb);
    esi ^= r14d;
    edi += esi;
    esi = edx;
    esi = rotate_right32 (esi, 6);
    eax ^= esi;
    esi = edx;
    esi = rotate_left32 (esi, 7);
    esi ^= eax;
    esi += edi;
    edi = ebx;
    r15d &= ebx;
    edi = rotate_right32 (edi, 2);
    r13d += esi;
    eax = edi;
    edi = ebx;
    edi = rotate_right32 (edi, 0xd);
    edi ^= eax;
    eax = ebx;
    eax = rotate_left32 (eax, 0xa);
    edi ^= eax;
    eax = ebp;
    eax |= ebx;
    eax &= r12d;
    eax |= r15d;
    r15d = *((rsp - 0x78));
    eax += edi;
    eax += esi;
    edi = r15d;
    esi = r15d;
    esi = rotate_left32 (esi, 0xf);
    edi = rotate_left32 (edi, 0xd);
    edi ^= esi;
    esi = r15d;
    r15d = *((rsp + 0x24));
    esi >>= 0xa;
    edi ^= esi;
    esi = *((rsp + 0x24));
    r15d = rotate_left32 (r15d, 0xe);
    esi = rotate_right32 (esi, 7);
    esi ^= r15d;
    r15d = *((rsp + 0x24));
    r15d >>= 3;
    r15d ^= esi;
    esi = *((rsp + 0x20));
    esi += *((rsp + 0x44));
    esi += r15d;
    r15d = ebx;
    edi += esi;
    esi = ecx;
    esi ^= edx;
    r14d = r14 + rdi + 0x5cb0a9dc;
    *((rsp - 0x70)) = edi;
    edi = r13d;
    esi &= r13d;
    edi = rotate_right32 (edi, 0xb);
    esi ^= ecx;
    r14d += esi;
    esi = r13d;
    esi = rotate_right32 (esi, 6);
    edi ^= esi;
    esi = r13d;
    r15d &= eax;
    esi = rotate_left32 (esi, 7);
    esi ^= edi;
    edi = eax;
    esi += r14d;
    r14d = eax;
    edi = rotate_right32 (edi, 2);
    r14d = rotate_right32 (r14d, 0xd);
    r12d += esi;
    r14d ^= edi;
    edi = eax;
    edi = rotate_left32 (edi, 0xa);
    r14d ^= edi;
    edi = ebx;
    edi |= eax;
    edi &= ebp;
    edi |= r15d;
    r15d = *((rsp - 0x74));
    edi += r14d;
    edi += esi;
    r14d = r15d;
    esi = r15d;
    esi = rotate_left32 (esi, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= esi;
    esi = r15d;
    esi >>= 0xa;
    r14d ^= esi;
    esi = *((rsp + 0x28));
    esi = rotate_right32 (esi, 7);
    r15d = esi;
    esi = *((rsp + 0x28));
    esi = rotate_left32 (esi, 0xe);
    esi ^= r15d;
    r15d = *((rsp + 0x28));
    r15d >>= 3;
    esi ^= r15d;
    esi += *((rsp + 0x24));
    r15d = eax;
    esi += r11d;
    esi += r14d;
    r14d = edx;
    r14d ^= r13d;
    ecx = rcx + rsi + 0x76f988da;
    *((rsp - 0x68)) = esi;
    esi = r12d;
    r14d &= r12d;
    r14d ^= edx;
    r14d += ecx;
    ecx = r12d;
    esi = rotate_right32 (esi, 0xb);
    r15d &= edi;
    ecx = rotate_right32 (ecx, 6);
    esi ^= ecx;
    ecx = r12d;
    ecx = rotate_left32 (ecx, 7);
    ecx ^= esi;
    ecx += r14d;
    r14d = edi;
    r14d = rotate_right32 (r14d, 2);
    ebp += ecx;
    esi = r14d;
    r14d = edi;
    r14d = rotate_right32 (r14d, 0xd);
    r14d ^= esi;
    esi = edi;
    esi = rotate_left32 (esi, 0xa);
    r14d ^= esi;
    esi = eax;
    esi |= edi;
    esi &= ebx;
    esi |= r15d;
    r15d = *((rsp - 0x70));
    esi += r14d;
    esi += ecx;
    r14d = r15d;
    ecx = r15d;
    ecx = rotate_left32 (ecx, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= ecx;
    ecx = r15d;
    ecx >>= 0xa;
    r14d ^= ecx;
    ecx = *((rsp + 0x2c));
    ecx = rotate_right32 (ecx, 7);
    r15d = ecx;
    ecx = *((rsp + 0x2c));
    ecx = rotate_left32 (ecx, 0xe);
    ecx ^= r15d;
    r15d = *((rsp + 0x2c));
    r15d >>= 3;
    ecx ^= r15d;
    ecx += *((rsp + 0x28));
    r15d = edi;
    ecx += r10d;
    ecx += r14d;
    r14d = r13d;
    r14d ^= r12d;
    edx = rdx + rcx - 0x67c1aeae;
    *((rsp - 0x64)) = ecx;
    ecx = ebp;
    r14d &= ebp;
    ecx = rotate_right32 (ecx, 0xb);
    r15d &= esi;
    r14d ^= r13d;
    r14d += edx;
    edx = ebp;
    edx = rotate_right32 (edx, 6);
    ecx ^= edx;
    edx = ebp;
    edx = rotate_left32 (edx, 7);
    edx ^= ecx;
    ecx = esi;
    edx += r14d;
    r14d = esi;
    ecx = rotate_right32 (ecx, 2);
    r14d = rotate_right32 (r14d, 0xd);
    ebx += edx;
    r14d ^= ecx;
    ecx = esi;
    ecx = rotate_left32 (ecx, 0xa);
    r14d ^= ecx;
    ecx = edi;
    ecx |= esi;
    ecx &= eax;
    ecx |= r15d;
    r15d = *((rsp - 0x68));
    ecx += r14d;
    ecx += edx;
    r14d = r15d;
    edx = r15d;
    edx = rotate_left32 (edx, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= edx;
    edx = r15d;
    edx >>= 0xa;
    r14d ^= edx;
    edx = *((rsp + 0x30));
    edx = rotate_right32 (edx, 7);
    r15d = edx;
    edx = *((rsp + 0x30));
    edx = rotate_left32 (edx, 0xe);
    edx ^= r15d;
    r15d = *((rsp + 0x30));
    r15d >>= 3;
    edx ^= r15d;
    edx += *((rsp + 0x2c));
    r15d = esi;
    edx += r9d;
    r15d &= ecx;
    edx += r14d;
    r14d = r12d;
    r14d ^= ebp;
    r13d = r13 + rdx - 0x57ce3993;
    *((rsp - 0x60)) = edx;
    edx = ebx;
    r14d &= ebx;
    edx = rotate_right32 (edx, 0xb);
    r14d ^= r12d;
    r13d += r14d;
    r14d = ebx;
    r14d = rotate_right32 (r14d, 6);
    edx ^= r14d;
    r14d = ebx;
    r14d = rotate_left32 (r14d, 7);
    r14d ^= edx;
    r14d += r13d;
    r13d = rax + r14;
    eax = ecx;
    eax = rotate_right32 (eax, 2);
    edx = eax;
    eax = ecx;
    eax = rotate_right32 (eax, 0xd);
    eax ^= edx;
    edx = ecx;
    edx = rotate_left32 (edx, 0xa);
    eax ^= edx;
    edx = esi;
    edx |= ecx;
    edx &= edi;
    edx |= r15d;
    r15d = *((rsp - 0x64));
    edx += eax;
    edx += r14d;
    eax = r15d;
    r14d = r15d;
    eax = rotate_left32 (eax, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= eax;
    eax = r15d;
    eax >>= 0xa;
    r14d ^= eax;
    eax = *((rsp + 0x34));
    eax = rotate_right32 (eax, 7);
    r15d = eax;
    eax = *((rsp + 0x34));
    eax = rotate_left32 (eax, 0xe);
    eax ^= r15d;
    r15d = *((rsp + 0x34));
    r15d >>= 3;
    eax ^= r15d;
    eax += *((rsp + 0x30));
    r15d = ecx;
    eax += r8d;
    r15d &= edx;
    eax += r14d;
    r14d = ebp;
    r14d ^= ebx;
    r12d = r12 + rax - 0x4ffcd838;
    *((rsp - 0x5c)) = eax;
    eax = r13d;
    r14d &= r13d;
    eax = rotate_right32 (eax, 0xb);
    r14d ^= ebp;
    r12d += r14d;
    r14d = r13d;
    r14d = rotate_right32 (r14d, 6);
    eax ^= r14d;
    r14d = r13d;
    r14d = rotate_left32 (r14d, 7);
    r14d ^= eax;
    r14d += r12d;
    r12d = rdi + r14;
    edi = edx;
    edi = rotate_right32 (edi, 2);
    eax = edi;
    edi = edx;
    edi = rotate_right32 (edi, 0xd);
    edi ^= eax;
    eax = edx;
    eax = rotate_left32 (eax, 0xa);
    edi ^= eax;
    eax = ecx;
    eax |= edx;
    eax &= esi;
    eax |= r15d;
    r15d = *((rsp - 0x60));
    eax += edi;
    eax += r14d;
    edi = r15d;
    r14d = r15d;
    edi = rotate_left32 (edi, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= edi;
    edi = r15d;
    edi >>= 0xa;
    r14d ^= edi;
    edi = *((rsp + 0x38));
    edi = rotate_right32 (edi, 7);
    r15d = edi;
    edi = *((rsp + 0x38));
    edi = rotate_left32 (edi, 0xe);
    edi ^= r15d;
    r15d = *((rsp + 0x38));
    r15d >>= 3;
    edi ^= r15d;
    edi += *((rsp + 0x34));
    edi += *((rsp - 0x78));
    r15d = edx;
    edi += r14d;
    r14d = ebx;
    r15d &= eax;
    r14d ^= r13d;
    ebp = rbp + rdi - 0x40a68039;
    *((rsp - 0x58)) = edi;
    edi = r12d;
    r14d &= r12d;
    edi = rotate_right32 (edi, 0xb);
    r14d ^= ebx;
    ebp += r14d;
    r14d = r12d;
    r14d = rotate_right32 (r14d, 6);
    edi ^= r14d;
    r14d = r12d;
    r14d = rotate_left32 (r14d, 7);
    r14d ^= edi;
    r14d += ebp;
    ebp = rsi + r14;
    esi = eax;
    esi = rotate_right32 (esi, 2);
    edi = esi;
    esi = eax;
    esi = rotate_right32 (esi, 0xd);
    esi ^= edi;
    edi = eax;
    edi = rotate_left32 (edi, 0xa);
    esi ^= edi;
    edi = edx;
    edi |= eax;
    edi &= ecx;
    edi |= r15d;
    r15d = *((rsp - 0x5c));
    edi += esi;
    edi += r14d;
    esi = r15d;
    r14d = r15d;
    esi = rotate_left32 (esi, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= esi;
    esi = r15d;
    esi >>= 0xa;
    r14d ^= esi;
    esi = *((rsp + 0x3c));
    esi = rotate_right32 (esi, 7);
    r15d = esi;
    esi = *((rsp + 0x3c));
    esi = rotate_left32 (esi, 0xe);
    esi ^= r15d;
    r15d = *((rsp + 0x3c));
    r15d >>= 3;
    esi ^= r15d;
    esi += *((rsp + 0x38));
    esi += *((rsp - 0x74));
    r15d = eax;
    esi += r14d;
    r14d = r13d;
    r15d &= edi;
    r14d ^= r12d;
    ebx = rbx + rsi - 0x391ff40d;
    *((rsp - 0x54)) = esi;
    esi = ebp;
    r14d &= ebp;
    esi = rotate_right32 (esi, 0xb);
    r14d ^= r13d;
    ebx += r14d;
    r14d = ebp;
    r14d = rotate_right32 (r14d, 6);
    esi ^= r14d;
    r14d = ebp;
    r14d = rotate_left32 (r14d, 7);
    r14d ^= esi;
    r14d += ebx;
    ebx = rcx + r14;
    ecx = edi;
    ecx = rotate_right32 (ecx, 2);
    esi = ecx;
    ecx = edi;
    ecx = rotate_right32 (ecx, 0xd);
    ecx ^= esi;
    esi = edi;
    esi = rotate_left32 (esi, 0xa);
    ecx ^= esi;
    esi = eax;
    esi |= edi;
    esi &= edx;
    esi |= r15d;
    r15d = *((rsp - 0x58));
    esi += ecx;
    esi += r14d;
    ecx = r15d;
    r14d = r15d;
    ecx = rotate_left32 (ecx, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= ecx;
    ecx = r15d;
    ecx >>= 0xa;
    r14d ^= ecx;
    ecx = *((rsp + 0x40));
    ecx = rotate_right32 (ecx, 7);
    r15d = ecx;
    ecx = *((rsp + 0x40));
    ecx = rotate_left32 (ecx, 0xe);
    ecx ^= r15d;
    r15d = *((rsp + 0x40));
    r15d >>= 3;
    ecx ^= r15d;
    ecx += *((rsp + 0x3c));
    ecx += *((rsp - 0x70));
    r15d = edi;
    ecx += r14d;
    r14d = r12d;
    r15d &= esi;
    r14d ^= ebp;
    r13d = r13 + rcx - 0x2a586eb9;
    *((rsp - 0x50)) = ecx;
    ecx = ebx;
    r14d &= ebx;
    ecx = rotate_right32 (ecx, 0xb);
    r14d ^= r12d;
    r13d += r14d;
    r14d = ebx;
    r14d = rotate_right32 (r14d, 6);
    ecx ^= r14d;
    r14d = ebx;
    r14d = rotate_left32 (r14d, 7);
    r14d ^= ecx;
    r14d += r13d;
    r13d = rdx + r14;
    edx = esi;
    edx = rotate_right32 (edx, 2);
    ecx = edx;
    edx = esi;
    edx = rotate_right32 (edx, 0xd);
    edx ^= ecx;
    ecx = esi;
    ecx = rotate_left32 (ecx, 0xa);
    edx ^= ecx;
    ecx = edi;
    ecx |= esi;
    ecx &= eax;
    ecx |= r15d;
    r15d = *((rsp - 0x54));
    ecx += edx;
    ecx += r14d;
    edx = r15d;
    r14d = r15d;
    edx = rotate_left32 (edx, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= edx;
    edx = r15d;
    edx >>= 0xa;
    r14d ^= edx;
    edx = *((rsp + 0x44));
    edx = rotate_right32 (edx, 7);
    r15d = edx;
    edx = *((rsp + 0x44));
    edx = rotate_left32 (edx, 0xe);
    edx ^= r15d;
    r15d = *((rsp + 0x44));
    r15d >>= 3;
    edx ^= r15d;
    edx += *((rsp + 0x40));
    edx += *((rsp - 0x68));
    r15d = esi;
    edx += r14d;
    r14d = ebp;
    r15d &= ecx;
    r14d ^= ebx;
    r12d = r12 + rdx + 0x6ca6351;
    *((rsp - 0x4c)) = edx;
    edx = r13d;
    r14d &= r13d;
    edx = rotate_right32 (edx, 0xb);
    r14d ^= ebp;
    r14d += r12d;
    r12d = r13d;
    r12d = rotate_right32 (r12d, 6);
    edx ^= r12d;
    r12d = r13d;
    r12d = rotate_left32 (r12d, 7);
    r12d ^= edx;
    r12d += r14d;
    r14d = rax + r12;
    eax = ecx;
    eax = rotate_right32 (eax, 2);
    edx = eax;
    eax = ecx;
    eax = rotate_right32 (eax, 0xd);
    eax ^= edx;
    edx = ecx;
    edx = rotate_left32 (edx, 0xa);
    eax ^= edx;
    edx = esi;
    edx |= ecx;
    edx &= edi;
    edx |= r15d;
    r15d = *((rsp - 0x50));
    edx += eax;
    edx += r12d;
    eax = r15d;
    r12d = r15d;
    eax = rotate_left32 (eax, 0xf);
    r12d = rotate_left32 (r12d, 0xd);
    r12d ^= eax;
    eax = r15d;
    eax >>= 0xa;
    r12d ^= eax;
    eax = r11d;
    eax = rotate_right32 (eax, 7);
    r15d = eax;
    eax = r11d;
    eax = rotate_left32 (eax, 0xe);
    eax ^= r15d;
    r15d = r11d;
    r15d >>= 3;
    eax ^= r15d;
    eax += *((rsp + 0x44));
    eax += *((rsp - 0x64));
    r15d = ecx;
    eax += r12d;
    r12d = ebx;
    r12d ^= r13d;
    ebp = rbp + rax + 0x14292967;
    *((rsp - 0x48)) = eax;
    eax = r14d;
    r12d &= r14d;
    eax = rotate_right32 (eax, 0xb);
    r12d ^= ebx;
    r12d += ebp;
    ebp = rotate_right32 (ebp, 6);
    eax ^= ebp;
    ebp = rotate_left32 (ebp, 7);
    ebp ^= eax;
    eax = edx;
    ebp += r12d;
    r12d = edx;
    eax = rotate_right32 (eax, 2);
    r12d = rotate_right32 (r12d, 0xd);
    edi += ebp;
    r12d ^= eax;
    eax = edx;
    eax = rotate_left32 (eax, 0xa);
    r12d ^= eax;
    eax = ecx;
    eax |= edx;
    eax &= esi;
    r15d &= edx;
    eax |= r15d;
    r15d = *((rsp - 0x4c));
    eax += r12d;
    eax += ebp;
    r12d = r15d;
    ebp = rotate_left32 (ebp, 0xf);
    r12d = rotate_left32 (r12d, 0xd);
    r12d ^= ebp;
    ebp >>= 0xa;
    r12d ^= ebp;
    ebp = rotate_right32 (ebp, 7);
    r15d = ebp;
    ebp = rotate_left32 (ebp, 0xe);
    ebp ^= r15d;
    r15d = r10d;
    r15d >>= 3;
    ebp ^= r15d;
    r11d += ebp;
    r11d += *((rsp - 0x60));
    r11d += r12d;
    ebp ^= r14d;
    r12d = edx;
    r15d = r11d;
    ebp &= edi;
    ebx = rbx + r11 + 0x27b70a85;
    r11d = edi;
    ebp ^= r13d;
    r11d = rotate_right32 (r11d, 6);
    *((rsp - 0x18)) = r15d;
    ebp += ebx;
    ebx = r11d;
    r11d = edi;
    r11d = rotate_right32 (r11d, 0xb);
    r11d ^= ebx;
    ebx = edi;
    ebx = rotate_left32 (ebx, 7);
    ebx ^= r11d;
    r11d = eax;
    ebx += ebp;
    r11d = rotate_right32 (r11d, 2);
    ebp = rotate_right32 (ebp, 0xd);
    esi += ebx;
    ebp ^= r11d;
    r11d = eax;
    r11d = rotate_left32 (r11d, 0xa);
    r12d &= eax;
    ebp ^= r11d;
    r11d = edx;
    r11d |= eax;
    r11d &= ecx;
    r11d |= r12d;
    r12d = *((rsp - 0x48));
    r11d += ebp;
    r11d += ebx;
    ebx = r12d;
    ebx = rotate_left32 (ebx, 0xf);
    ebp = rotate_left32 (ebp, 0xd);
    ebp ^= ebx;
    ebx = r12d;
    r12d = r9d;
    ebx >>= 0xa;
    r12d = rotate_right32 (r12d, 7);
    ebp ^= ebx;
    ebx = r9d;
    ebx = rotate_left32 (ebx, 0xe);
    ebx ^= r12d;
    r12d = r9d;
    r12d >>= 3;
    ebx ^= r12d;
    r12d = r14d;
    r12d ^= edi;
    r10d += ebx;
    r10d += *((rsp - 0x5c));
    r10d += ebp;
    ebx = r12d;
    r12d = r15d;
    ebx &= esi;
    ebp = r13 + r10 + 0x2e1b2138;
    r13d = esi;
    *((rsp - 0x44)) = r10d;
    ebx ^= r14d;
    r13d = rotate_right32 (r13d, 6);
    ebp += ebx;
    ebx = r13d;
    r13d = esi;
    r13d = rotate_right32 (r13d, 0xb);
    r10d = r13d;
    r13d = esi;
    r13d = rotate_left32 (r13d, 7);
    r10d ^= ebx;
    ebx = r13d;
    r13d = r11d;
    ebx ^= r10d;
    ebx += ebp;
    ecx += ebx;
    r13d = rotate_right32 (r13d, 2);
    r10d = r13d;
    r13d = r11d;
    r12d = rotate_left32 (r12d, 0xd);
    r13d = rotate_right32 (r13d, 0xd);
    r13d = r11d;
    ebp ^= r10d;
    r13d = rotate_left32 (r13d, 0xa);
    ebp ^= r13d;
    r13d = eax;
    r13d |= r11d;
    r10d = r13d;
    r13d = eax;
    r13d &= r11d;
    r10d &= edx;
    r10d |= r13d;
    r13d = r15d;
    r10d += ebp;
    r13d >>= 0xa;
    r12d = r8d;
    r10d += ebx;
    ebx = r15d;
    r12d = rotate_right32 (r12d, 7);
    r15d = *((rsp - 0x78));
    ebx = rotate_left32 (ebx, 0xf);
    ebp ^= ebx;
    ebp ^= r13d;
    r13d = r8d;
    r13d = rotate_left32 (r13d, 0xe);
    ebx = r13d;
    ebx ^= r12d;
    r12d = r8d;
    r12d >>= 3;
    ebx ^= r12d;
    r12d = edi;
    r12d ^= esi;
    r9d += ebx;
    r9d += *((rsp - 0x58));
    r9d += ebp;
    ebx = r12d;
    r12d = ecx;
    r13d = r9d;
    ebx &= ecx;
    ebp = r14 + r9 + 0x4d2c6dfc;
    r9d = ecx;
    ebx ^= edi;
    r9d = rotate_right32 (r9d, 6);
    r14d = *((rsp - 0x74));
    *((rsp - 0x14)) = r13d;
    ebp += ebx;
    ebx = r9d;
    r9d = ecx;
    r12d = rotate_left32 (r12d, 7);
    r9d = rotate_right32 (r9d, 0xb);
    r9d ^= ebx;
    ebx = r12d;
    r12d = r11d;
    ebx ^= r9d;
    r9d = r10d;
    r12d &= r10d;
    ebx += ebp;
    r9d = rotate_right32 (r9d, 2);
    ebp = rdx + rbx;
    edx = r10d;
    edx = rotate_right32 (edx, 0xd);
    edx ^= r9d;
    r9d = r10d;
    r9d = rotate_left32 (r9d, 0xa);
    edx ^= r9d;
    r9d = r11d;
    r9d |= r10d;
    r9d &= eax;
    r9d |= r12d;
    r12d = *((rsp - 0x44));
    r9d += edx;
    r9d += ebx;
    edx = r12d;
    ebx = r12d;
    ebx = rotate_left32 (ebx, 0xf);
    edx = rotate_left32 (edx, 0xd);
    edx ^= ebx;
    ebx = r12d;
    r12d = r15d;
    ebx >>= 0xa;
    r12d = rotate_right32 (r12d, 7);
    edx ^= ebx;
    ebx = r15d;
    ebx = rotate_left32 (ebx, 0xe);
    ebx ^= r12d;
    r12d = r15d;
    r12d >>= 3;
    ebx ^= r12d;
    r8d += ebx;
    r8d += *((rsp - 0x54));
    ebx = r10d;
    r8d += edx;
    edx = esi;
    edx ^= ecx;
    edi = rdi + r8 + 0x53380d13;
    r12d = r8d;
    r8d = ebp;
    edx &= ebp;
    r8d = rotate_right32 (r8d, 0xb);
    *((rsp - 0x10)) = r12d;
    edx ^= esi;
    edi += edx;
    edx = ebp;
    edx = rotate_right32 (edx, 6);
    r8d ^= edx;
    edx = ebp;
    ebx &= r9d;
    edx = rotate_left32 (edx, 7);
    edx ^= r8d;
    r8d = r9d;
    edx += edi;
    edi = r9d;
    r8d = rotate_right32 (r8d, 2);
    edi = rotate_right32 (edi, 0xd);
    eax += edx;
    edi ^= r8d;
    r8d = r9d;
    r8d = rotate_left32 (r8d, 0xa);
    edi ^= r8d;
    r8d = r10d;
    r8d |= r9d;
    r8d &= r11d;
    r8d |= ebx;
    ebx = r14d;
    r8d += edi;
    edi = r13d;
    ebx = rotate_right32 (ebx, 7);
    r8d += edx;
    edx = r13d;
    edi = rotate_left32 (edi, 0xd);
    edx = rotate_left32 (edx, 0xf);
    edi ^= edx;
    edx = r13d;
    edx >>= 0xa;
    edi ^= edx;
    edx = r14d;
    edx = rotate_left32 (edx, 0xe);
    edx ^= ebx;
    ebx = r14d;
    ebx >>= 3;
    edx ^= ebx;
    edx += r15d;
    edx += *((rsp - 0x50));
    edi += edx;
    edx = ecx;
    edx ^= ebp;
    r13d = edi;
    esi = rsi + rdi + 0x650a7354;
    edi = eax;
    edx &= eax;
    edx ^= ecx;
    esi += edx;
    edi = rotate_right32 (edi, 0xb);
    edx = eax;
    edx = rotate_right32 (edx, 6);
    ebx = edi;
    edi = r8d;
    ebx ^= edx;
    edx = eax;
    edi = rotate_right32 (edi, 2);
    edx = rotate_left32 (edx, 7);
    edx ^= ebx;
    edx += esi;
    esi = r8d;
    esi = rotate_right32 (esi, 0xd);
    r11d += edx;
    esi ^= edi;
    edi = r8d;
    edi = rotate_left32 (edi, 0xa);
    esi ^= edi;
    edi = r9d;
    edi |= r8d;
    ebx = edi;
    edi = r9d;
    edi &= r8d;
    ebx &= r10d;
    ebx |= edi;
    edi = r12d;
    ebx += esi;
    edi = rotate_left32 (edi, 0xf);
    ebx += edx;
    edx = edi;
    edi = r12d;
    edi = rotate_left32 (edi, 0xd);
    edi ^= edx;
    edx = r12d;
    r12d = *((rsp - 0x70));
    edx >>= 0xa;
    edi ^= edx;
    esi = r12d;
    edx = r12d;
    esi = rotate_right32 (esi, 7);
    edx = rotate_left32 (edx, 0xe);
    edx ^= esi;
    esi = r12d;
    esi >>= 3;
    edx ^= esi;
    edx += r14d;
    edx += *((rsp - 0x4c));
    edi += edx;
    edx = ebp;
    edx ^= eax;
    *((rsp - 0x6c)) = edi;
    ecx = rcx + rdi + 0x766a0abb;
    edi = r11d;
    edx &= r11d;
    edi = rotate_right32 (edi, 0xb);
    *((rsp - 0x38)) = r13d;
    r14d = *((rsp - 0x68));
    edx ^= ebp;
    r15d = edi;
    edi = ebx;
    ecx += edx;
    edx = r11d;
    edi = rotate_left32 (edi, 0xa);
    esi = r14d;
    edx = rotate_right32 (edx, 6);
    esi = rotate_left32 (esi, 0xe);
    r15d ^= edx;
    edx = r11d;
    edx = rotate_left32 (edx, 7);
    edx ^= r15d;
    edx += ecx;
    ecx = ebx;
    ecx = rotate_right32 (ecx, 2);
    r10d += edx;
    r15d = ecx;
    ecx = ebx;
    ecx = rotate_right32 (ecx, 0xd);
    ecx ^= r15d;
    ecx ^= edi;
    edi = r8d;
    edi |= ebx;
    r15d = edi;
    edi = r8d;
    edi &= ebx;
    r15d &= r9d;
    r15d |= edi;
    edi = r10d;
    r15d += ecx;
    ecx = r13d;
    r15d += edx;
    edx = r13d;
    ecx = rotate_left32 (ecx, 0xf);
    edx = rotate_left32 (edx, 0xd);
    edx ^= ecx;
    ecx = r13d;
    ecx >>= 0xa;
    edx ^= ecx;
    ecx = r14d;
    ecx = rotate_right32 (ecx, 7);
    esi ^= ecx;
    ecx = r14d;
    ecx >>= 3;
    esi ^= ecx;
    esi += r12d;
    esi += *((rsp - 0x48));
    edi = rotate_right32 (edi, 0xb);
    ecx = rdx + rsi;
    edx = eax;
    esi = ebx;
    edx ^= r11d;
    r12d = ecx;
    ecx = rbp + rcx - 0x7e3d36d2;
    esi &= r15d;
    edx &= r10d;
    ebp = *((rsp - 0x64));
    *((rsp - 0x64)) = r12d;
    edx ^= eax;
    ecx += edx;
    edx = r10d;
    edx = rotate_right32 (edx, 6);
    edi ^= edx;
    edx = r10d;
    edx = rotate_left32 (edx, 7);
    edx ^= edi;
    edi = r15d;
    edx += ecx;
    ecx = r15d;
    edi = rotate_right32 (edi, 2);
    ecx = rotate_right32 (ecx, 0xd);
    r9d += edx;
    ecx ^= edi;
    edi = r15d;
    edi = rotate_left32 (edi, 0xa);
    ecx ^= edi;
    edi = ebx;
    edi |= r15d;
    edi &= r8d;
    edi |= esi;
    esi = *((rsp - 0x6c));
    edi += ecx;
    ecx = esi;
    edi += edx;
    edx = esi;
    ecx = rotate_left32 (ecx, 0xd);
    edx = rotate_left32 (edx, 0xf);
    r13d = ecx;
    r13d ^= edx;
    edx = esi;
    esi = ebp;
    edx >>= 0xa;
    esi = rotate_left32 (esi, 0xe);
    r13d ^= edx;
    edx = ebp;
    edx = rotate_right32 (edx, 7);
    esi ^= edx;
    edx = ebp;
    edx >>= 3;
    esi ^= edx;
    edx = r11d;
    esi += r14d;
    edx ^= r10d;
    esi += *((rsp - 0x18));
    r14d = *((rsp - 0x60));
    ecx = r13 + rsi;
    edx &= r9d;
    esi = r9d;
    r13d = r15d;
    edx ^= r11d;
    eax = rax + rcx - 0x6d8dd37b;
    esi = rotate_right32 (esi, 0xb);
    r13d &= edi;
    edx += eax;
    eax = r9d;
    *((rsp - 0x78)) = ecx;
    ecx = r14d;
    eax = rotate_right32 (eax, 6);
    esi ^= eax;
    eax = r9d;
    eax = rotate_left32 (eax, 7);
    eax ^= esi;
    esi = edi;
    eax += edx;
    edx = edi;
    esi = rotate_right32 (esi, 2);
    edx = rotate_right32 (edx, 0xd);
    r8d += eax;
    edx ^= esi;
    esi = edi;
    esi = rotate_left32 (esi, 0xa);
    edx ^= esi;
    esi = r15d;
    esi |= edi;
    esi &= ebx;
    esi |= r13d;
    r13d = r12d;
    esi += edx;
    r13d = rotate_left32 (r13d, 0xd);
    esi += eax;
    eax = r12d;
    eax = rotate_left32 (eax, 0xf);
    r13d ^= eax;
    eax = r12d;
    r12d = edi;
    eax >>= 0xa;
    r13d ^= eax;
    eax = r14d;
    eax = rotate_right32 (eax, 7);
    ecx = rotate_left32 (ecx, 0xe);
    r12d &= esi;
    ecx ^= eax;
    eax = r14d;
    eax >>= 3;
    ecx ^= eax;
    eax = r10d;
    ecx += ebp;
    ecx += *((rsp - 0x44));
    eax ^= r9d;
    ebp = *((rsp - 0x78));
    r13d += ecx;
    eax &= r8d;
    ecx = esi;
    edx = r11 + r13 - 0x5d40175f;
    r11d = r8d;
    eax ^= r10d;
    *((rsp - 0x60)) = r13d;
    r11d = rotate_right32 (r11d, 6);
    edx += eax;
    eax = r11d;
    r11d = r8d;
    r11d = rotate_right32 (r11d, 0xb);
    r11d ^= eax;
    eax = r8d;
    eax = rotate_left32 (eax, 7);
    eax ^= r11d;
    r11d = esi;
    eax += edx;
    edx = esi;
    r11d = rotate_right32 (r11d, 2);
    edx = rotate_right32 (edx, 0xd);
    ebx += eax;
    edx ^= r11d;
    r11d = esi;
    r11d = rotate_left32 (r11d, 0xa);
    edx ^= r11d;
    r11d = edi;
    r11d |= esi;
    r11d &= r15d;
    r11d |= r12d;
    r12d = ebp;
    r11d += edx;
    r12d = rotate_left32 (r12d, 0xd);
    r11d += eax;
    eax = ebp;
    eax = rotate_left32 (eax, 0xf);
    r12d ^= eax;
    eax = ebp;
    ebp = *((rsp - 0x5c));
    eax >>= 0xa;
    ecx &= r11d;
    r12d ^= eax;
    edx = ebp;
    eax = ebp;
    eax = rotate_right32 (eax, 7);
    edx = rotate_left32 (edx, 0xe);
    edx ^= eax;
    eax = ebp;
    eax >>= 3;
    edx ^= eax;
    edx += r14d;
    edx += *((rsp - 0x14));
    r14d = *((rsp - 0x58));
    edx += r12d;
    r12d = r9d;
    r12d ^= r8d;
    *((rsp - 0x74)) = edx;
    edx = r10 + rdx - 0x57e599b5;
    r10d = ebx;
    eax = r12d;
    r10d = rotate_right32 (r10d, 6);
    r12d = ebx;
    eax &= ebx;
    r12d = rotate_left32 (r12d, 7);
    eax ^= r9d;
    edx += eax;
    eax = r10d;
    r10d = ebx;
    r10d = rotate_right32 (r10d, 0xb);
    r10d ^= eax;
    eax = r12d;
    r12d = r11d;
    eax ^= r10d;
    r12d = rotate_right32 (r12d, 0xd);
    r10d = r11d;
    eax += edx;
    r10d = rotate_right32 (r10d, 2);
    edx = r12d;
    r12d = r13d;
    edx ^= r10d;
    r10d = r11d;
    r15d += eax;
    r10d = rotate_left32 (r10d, 0xa);
    edx ^= r10d;
    r10d = esi;
    r10d |= r11d;
    r10d &= edi;
    r10d |= ecx;
    ecx = r11d;
    r10d += edx;
    edx = r13d;
    r10d += eax;
    edx = rotate_left32 (edx, 0xf);
    eax = r14d;
    r12d = rotate_left32 (r12d, 0xd);
    eax = rotate_left32 (eax, 0xe);
    ecx &= r10d;
    r12d ^= edx;
    edx = r13d;
    r13d = r8d;
    edx >>= 0xa;
    r13d ^= ebx;
    r12d ^= edx;
    edx = r14d;
    edx = rotate_right32 (edx, 7);
    eax ^= edx;
    edx = r14d;
    edx >>= 3;
    eax ^= edx;
    eax += ebp;
    eax += *((rsp - 0x10));
    ebp = r12 + rax;
    eax = r13d;
    eax &= r15d;
    edx = r9 + rbp - 0x3db47490;
    r9d = r15d;
    r13d = ebp;
    eax ^= r8d;
    r9d = rotate_right32 (r9d, 6);
    *((rsp - 0x5c)) = r13d;
    edx += eax;
    eax = r9d;
    r9d = r15d;
    ebp = rotate_left32 (ebp, 7);
    r9d = rotate_right32 (r9d, 0xb);
    r9d ^= eax;
    eax = ebp;
    eax ^= r9d;
    r9d = r10d;
    eax += edx;
    r9d = rotate_right32 (r9d, 2);
    ebp = rdi + rax;
    edi = r10d;
    edi = rotate_right32 (edi, 0xd);
    edx = edi;
    edi = *((rsp - 0x74));
    edx ^= r9d;
    r9d = r10d;
    r9d = rotate_left32 (r9d, 0xa);
    r12d = edi;
    edx ^= r9d;
    r9d = r11d;
    r9d |= r10d;
    r9d &= esi;
    r9d |= ecx;
    ecx = ebx;
    r9d += edx;
    edx = edi;
    r9d += eax;
    r12d = rotate_left32 (r12d, 0xd);
    ecx ^= r15d;
    edx = rotate_left32 (edx, 0xf);
    eax = r12d;
    r12d = *((rsp - 0x54));
    edi >>= 0xa;
    eax ^= edx;
    ecx &= ebp;
    eax ^= edi;
    edx = r12d;
    edi = r12d;
    ecx ^= ebx;
    edx = rotate_right32 (edx, 7);
    edi = rotate_left32 (edi, 0xe);
    edi ^= edx;
    edx = r12d;
    edx >>= 3;
    edi ^= edx;
    edi += r14d;
    edi += *((rsp - 0x38));
    r14d = rax + rdi;
    edi = r13d;
    eax = r8 + r14 - 0x3893ae5d;
    r8d = ebp;
    *((rsp - 0x70)) = r14d;
    r14d = r13d;
    r8d = rotate_right32 (r8d, 6);
    eax += ecx;
    ecx = r8d;
    r8d = ebp;
    r8d = rotate_right32 (r8d, 0xb);
    edx = r8d;
    r8d = ebp;
    r8d = rotate_left32 (r8d, 7);
    edx ^= ecx;
    ecx = r8d;
    r8d = r9d;
    r8d = rotate_right32 (r8d, 2);
    ecx ^= edx;
    edx = r8d;
    r8d = r9d;
    ecx += eax;
    r8d = rotate_right32 (r8d, 0xd);
    eax = rsi + rcx;
    esi = r8d;
    r8d = r9d;
    esi ^= edx;
    r8d = rotate_left32 (r8d, 0xa);
    esi ^= r8d;
    r8d = r10d;
    r8d |= r9d;
    edx = r8d;
    r8d = r10d;
    r8d &= r9d;
    edx &= r11d;
    edx |= r8d;
    r8d = r13d;
    edx += esi;
    r14d = rotate_left32 (r14d, 0xf);
    edi = rotate_left32 (edi, 0xd);
    edx += ecx;
    r8d >>= 0xa;
    edi ^= r14d;
    r14d = *((rsp - 0x50));
    edi ^= r8d;
    ecx = r14d;
    esi = r14d;
    ecx = rotate_right32 (ecx, 7);
    esi = rotate_left32 (esi, 0xe);
    esi ^= ecx;
    ecx = r14d;
    ecx >>= 3;
    esi ^= ecx;
    ecx = eax;
    esi += r12d;
    esi += *((rsp - 0x6c));
    ecx = rotate_right32 (ecx, 0xb);
    r12d = *((rsp - 0x70));
    edi += esi;
    esi = r15d;
    esi ^= ebp;
    *((rsp - 0x68)) = edi;
    edi = rbx + rdi - 0x2e6d17e7;
    ebx = *((rsp - 0x4c));
    esi &= eax;
    esi ^= r15d;
    edi += esi;
    esi = eax;
    esi = rotate_right32 (esi, 6);
    ecx ^= esi;
    esi = eax;
    esi = rotate_left32 (esi, 7);
    esi ^= ecx;
    esi += edi;
    r8d = r11 + rsi;
    r11d = edx;
    r11d = rotate_right32 (r11d, 2);
    ecx = r11d;
    r11d = edx;
    r11d = rotate_right32 (r11d, 0xd);
    edi = r11d;
    r11d = edx;
    edi ^= ecx;
    r11d = rotate_left32 (r11d, 0xa);
    edi ^= r11d;
    r11d = r9d;
    r11d |= edx;
    ecx = r11d;
    r11d = r9d;
    ecx &= r10d;
    r11d &= edx;
    ecx |= r11d;
    r11d = ebx;
    ecx += edi;
    edi = r12d;
    r11d = rotate_right32 (r11d, 7);
    ecx += esi;
    esi = r12d;
    edi = rotate_left32 (edi, 0xd);
    esi = rotate_left32 (esi, 0xf);
    edi ^= esi;
    esi = r12d;
    esi >>= 0xa;
    edi ^= esi;
    esi = ebx;
    esi = rotate_left32 (esi, 0xe);
    esi ^= r11d;
    r11d = ebx;
    r11d >>= 3;
    esi ^= r11d;
    esi += r14d;
    esi += *((rsp - 0x64));
    r14d = rdi + rsi;
    esi = ebp;
    esi ^= eax;
    r12d = r14d;
    edi = r15 + r14 - 0x2966f9dc;
    r14d = r8d;
    esi &= r8d;
    r14d = rotate_right32 (r14d, 0xb);
    r15d = *((rsp - 0x48));
    *((rsp - 0x58)) = r12d;
    esi ^= ebp;
    r13d = r14d;
    r14d = ecx;
    edi += esi;
    esi = r8d;
    r14d = rotate_right32 (r14d, 2);
    esi = rotate_right32 (esi, 6);
    r13d ^= esi;
    esi = r8d;
    esi = rotate_left32 (esi, 7);
    esi ^= r13d;
    r13d = r14d;
    r14d = ecx;
    r14d = rotate_right32 (r14d, 0xd);
    esi += edi;
    edi = r14d;
    r14d = ecx;
    r11d = r10 + rsi;
    r10d = edx;
    edi ^= r13d;
    r14d = rotate_left32 (r14d, 0xa);
    edi ^= r14d;
    r14d = edx;
    r14d |= ecx;
    r13d = r14d;
    r13d &= r9d;
    r10d &= ecx;
    r13d |= r10d;
    r10d = *((rsp - 0x68));
    r13d += edi;
    r13d += esi;
    edi = r10d;
    esi = r10d;
    esi = rotate_left32 (esi, 0xf);
    edi = rotate_left32 (edi, 0xd);
    edi ^= esi;
    esi = r10d;
    r10d = r15d;
    esi >>= 0xa;
    r10d = rotate_right32 (r10d, 7);
    edi ^= esi;
    esi = r15d;
    esi = rotate_left32 (esi, 0xe);
    esi ^= r10d;
    r10d = r15d;
    r10d >>= 3;
    esi ^= r10d;
    esi += ebx;
    esi += *((rsp - 0x78));
    r14d = rdi + rsi;
    edi = eax;
    edi ^= r8d;
    esi = rbp + r14 - 0xbf1ca7b;
    *((rsp - 0x54)) = r14d;
    edi &= r11d;
    ebp = rotate_right32 (ebp, 6);
    ebx = *((rsp - 0x18));
    edi ^= eax;
    esi += edi;
    edi = ebp;
    r10d = ebx;
    ebp = rotate_right32 (ebp, 0xb);
    r14d = ebp;
    ebp = rotate_left32 (ebp, 7);
    r14d ^= edi;
    edi = ebp;
    edi ^= r14d;
    ebp = rotate_right32 (ebp, 2);
    edi += esi;
    esi = r9 + rdi;
    r9d = r13d;
    r9d = rotate_right32 (r9d, 0xd);
    r9d ^= ebp;
    ebp = rotate_left32 (ebp, 0xa);
    r9d ^= ebp;
    ebp |= r13d;
    r10d = rotate_right32 (r10d, 7);
    r14d = ebp;
    ebp &= r13d;
    r14d &= edx;
    r14d |= ebp;
    r14d += r9d;
    r9d = r12d;
    ebp >>= 0xa;
    r9d = rotate_left32 (r9d, 0xf);
    r14d += edi;
    edi = r9d;
    r9d = r12d;
    r9d = rotate_left32 (r9d, 0xd);
    r9d ^= edi;
    edi = ebx;
    edi = rotate_left32 (edi, 0xe);
    r9d ^= ebp;
    edi ^= r10d;
    r10d = ebx;
    r10d >>= 3;
    edi ^= r10d;
    r10d = r13d;
    edi += r15d;
    edi += *((rsp - 0x60));
    r15d = *((rsp - 0x44));
    r9d += edi;
    edi = r8d;
    edi ^= r11d;
    r9d = rax + r9 + 0x106aa070;
    eax = esi;
    edi &= esi;
    eax = rotate_right32 (eax, 0xb);
    r12d = ebp;
    *((rsp - 0x4c)) = ebp;
    edi ^= r8d;
    r9d += edi;
    edi = esi;
    edi = rotate_right32 (edi, 6);
    eax ^= edi;
    edi = esi;
    edi = rotate_left32 (edi, 7);
    edi ^= eax;
    eax = r14d;
    edi += r9d;
    r9d = r14d;
    eax = rotate_right32 (eax, 2);
    r9d = rotate_right32 (r9d, 0xd);
    edx += edi;
    r9d ^= eax;
    eax = r14d;
    r10d &= r14d;
    eax = rotate_left32 (eax, 0xa);
    r9d ^= eax;
    eax = r13d;
    eax |= r14d;
    eax &= ecx;
    eax |= r10d;
    r10d = *((rsp - 0x54));
    eax += r9d;
    eax += edi;
    r9d = r10d;
    edi = r10d;
    edi = rotate_left32 (edi, 0xf);
    r9d = rotate_left32 (r9d, 0xd);
    r9d ^= edi;
    edi = r10d;
    r10d = r15d;
    edi >>= 0xa;
    r10d = rotate_right32 (r10d, 7);
    r9d ^= edi;
    edi = r15d;
    edi = rotate_left32 (edi, 0xe);
    edi ^= r10d;
    r10d = r15d;
    r10d >>= 3;
    edi ^= r10d;
    r10d = edx;
    edi += ebx;
    edi += *((rsp - 0x74));
    r10d = rotate_right32 (r10d, 0xb);
    ebx = *((rsp - 0x14));
    r9d += edi;
    edi = r11d;
    edi ^= esi;
    r8d = r8 + r9 + 0x19a4c116;
    *((rsp - 0x50)) = r9d;
    edi &= edx;
    *((rsp + 8)) = r9d;
    r9d = r14d;
    edi ^= r11d;
    r8d += edi;
    edi = edx;
    edi = rotate_right32 (edi, 6);
    r10d ^= edi;
    edi = edx;
    edi = rotate_left32 (edi, 7);
    edi ^= r10d;
    r10d = eax;
    edi += r8d;
    r8d = eax;
    ecx += edi;
    r10d = rotate_right32 (r10d, 2);
    r9d &= eax;
    r8d = rotate_right32 (r8d, 0xd);
    r12d = rotate_left32 (r12d, 0xd);
    r8d ^= r10d;
    r10d = eax;
    r10d = rotate_left32 (r10d, 0xa);
    r8d ^= r10d;
    r10d = r14d;
    r10d |= eax;
    r10d &= r13d;
    r10d |= r9d;
    r9d = ebp;
    r10d += r8d;
    r8d = ebx;
    r9d >>= 0xa;
    r10d += edi;
    edi = ebp;
    r8d = rotate_right32 (r8d, 7);
    edi = rotate_left32 (edi, 0xf);
    r12d ^= edi;
    edi = ebx;
    edi = rotate_left32 (edi, 0xe);
    r12d ^= r9d;
    edi ^= r8d;
    r8d = ebx;
    r8d >>= 3;
    edi ^= r8d;
    edi += r15d;
    edi += *((rsp - 0x5c));
    r15d = *((rsp - 0x10));
    r12d += edi;
    edi = esi;
    edi ^= edx;
    r8d = r11 + r12 + 0x1e376c08;
    r11d = ecx;
    *((rsp + 0xc)) = r12d;
    edi &= ecx;
    r11d = rotate_right32 (r11d, 0xb);
    edi ^= esi;
    r9d = r11d;
    r11d = r10d;
    r8d += edi;
    edi = ecx;
    edi = rotate_right32 (edi, 6);
    r9d ^= edi;
    edi = ecx;
    edi = rotate_left32 (edi, 7);
    r11d = rotate_left32 (r11d, 0xa);
    edi ^= r9d;
    edi += r8d;
    r8d = r10d;
    r8d = rotate_right32 (r8d, 2);
    r13d += edi;
    r9d = r8d;
    r8d = r10d;
    r8d = rotate_right32 (r8d, 0xd);
    r8d ^= r9d;
    r8d ^= r11d;
    r11d = eax;
    r11d |= r10d;
    r9d = r11d;
    r11d = eax;
    r11d &= r10d;
    r9d &= r14d;
    r9d |= r11d;
    r11d = *((rsp - 0x50));
    r9d += r8d;
    r8d = r11d;
    r9d += edi;
    edi = r11d;
    r8d = rotate_left32 (r8d, 0xd);
    edi = rotate_left32 (edi, 0xf);
    r8d = r15d;
    ebp ^= edi;
    edi = r11d;
    r8d = rotate_right32 (r8d, 7);
    r11d = r10d;
    edi >>= 0xa;
    ebp ^= edi;
    edi = r15d;
    edi = rotate_left32 (edi, 0xe);
    edi ^= r8d;
    r8d = r15d;
    r8d >>= 3;
    edi ^= r8d;
    r8d = r13d;
    edi += ebx;
    edi += *((rsp - 0x70));
    ebx = r12d;
    ebp += edi;
    edi = edx;
    edi ^= ecx;
    esi = rsi + rbp + 0x2748774c;
    *((rsp + 0x10)) = ebp;
    edi &= r13d;
    edi ^= edx;
    edi += esi;
    esi = r13d;
    esi = rotate_right32 (esi, 6);
    r8d = rotate_right32 (r8d, 0xb);
    r11d &= r9d;
    r8d ^= esi;
    esi = r13d;
    ebx = rotate_left32 (ebx, 0xd);
    esi = rotate_left32 (esi, 7);
    esi ^= r8d;
    r8d = r9d;
    esi += edi;
    edi = r9d;
    r8d = rotate_right32 (r8d, 2);
    edi = rotate_right32 (edi, 0xd);
    r14d += esi;
    edi ^= r8d;
    r8d = r9d;
    r8d = rotate_left32 (r8d, 0xa);
    edi ^= r8d;
    r8d = r10d;
    r8d |= r9d;
    r8d &= eax;
    r8d |= r11d;
    r11d = *((rsp - 0x38));
    r8d += edi;
    r8d += esi;
    esi = r12d;
    edi = r11d;
    esi = rotate_left32 (esi, 0xf);
    edi = rotate_right32 (edi, 7);
    ebx ^= esi;
    esi = r12d;
    esi >>= 0xa;
    ebx ^= esi;
    esi = r11d;
    esi = rotate_left32 (esi, 0xe);
    esi ^= edi;
    edi = r11d;
    edi >>= 3;
    esi ^= edi;
    esi += r15d;
    esi += *((rsp - 0x68));
    r15d = r14d;
    ebx += esi;
    esi = ecx;
    esi ^= r13d;
    edx = rdx + rbx + 0x34b0bcb5;
    *((rsp + 0x14)) = ebx;
    esi &= r14d;
    r15d = rotate_right32 (r15d, 0xb);
    esi ^= ecx;
    edi = r15d;
    r15d = r8d;
    esi += edx;
    edx = r14d;
    r15d = rotate_left32 (r15d, 0xa);
    edx = rotate_right32 (edx, 6);
    edi ^= edx;
    edx = r14d;
    edx = rotate_left32 (edx, 7);
    edx ^= edi;
    edx += esi;
    esi = r8d;
    esi = rotate_right32 (esi, 2);
    eax += edx;
    edi = esi;
    esi = r8d;
    esi = rotate_right32 (esi, 0xd);
    esi ^= edi;
    esi ^= r15d;
    r15d = r9d;
    r15d |= r8d;
    edi = r15d;
    r15d = r9d;
    r15d &= r8d;
    edi &= r10d;
    edi |= r15d;
    r15d = *((rsp - 0x6c));
    edi += esi;
    esi = ebp;
    esi = rotate_left32 (esi, 0xf);
    edi += edx;
    edx = esi;
    esi = ebp;
    esi = rotate_left32 (esi, 0xd);
    r11d = esi;
    esi = ebp;
    r11d ^= edx;
    esi >>= 0xa;
    edx = r15d;
    r11d ^= esi;
    esi = r15d;
    edx = rotate_left32 (edx, 0xe);
    esi = rotate_right32 (esi, 7);
    edx ^= esi;
    esi = r15d;
    r15d = r8d;
    esi >>= 3;
    edx ^= esi;
    edx += *((rsp - 0x38));
    edx += *((rsp - 0x58));
    esi = eax;
    r11d += edx;
    edx = r13d;
    esi = rotate_right32 (esi, 0xb);
    r15d &= edi;
    edx ^= r14d;
    ecx = rcx + r11 + 0x391c0cb3;
    *((rsp + 0x18)) = r11d;
    edx &= eax;
    edx ^= r13d;
    ecx += edx;
    edx = eax;
    edx = rotate_right32 (edx, 6);
    esi ^= edx;
    edx = eax;
    edx = rotate_left32 (edx, 7);
    edx ^= esi;
    edx += ecx;
    ecx = edi;
    ecx = rotate_right32 (ecx, 2);
    r10d += edx;
    esi = ecx;
    ecx = edi;
    ecx = rotate_right32 (ecx, 0xd);
    ecx ^= esi;
    esi = edi;
    esi = rotate_left32 (esi, 0xa);
    ecx ^= esi;
    esi = r8d;
    esi |= edi;
    esi &= r9d;
    esi |= r15d;
    esi += ecx;
    ecx = ebx;
    ecx = rotate_left32 (ecx, 0xf);
    esi += edx;
    edx = ecx;
    ecx = ebx;
    ecx = rotate_left32 (ecx, 0xd);
    ecx ^= edx;
    edx = ebx;
    edx >>= 0xa;
    ecx ^= edx;
    edx = *((rsp - 0x64));
    r15d = *((rsp - 0x64));
    edx = rotate_left32 (edx, 0xe);
    r15d = rotate_right32 (r15d, 7);
    edx ^= r15d;
    r15d = *((rsp - 0x64));
    r15d >>= 3;
    edx ^= r15d;
    edx += *((rsp - 0x6c));
    edx += *((rsp - 0x54));
    r15d = edi;
    ecx += edx;
    edx = r14d;
    r15d &= esi;
    edx ^= eax;
    r13d = r13 + rcx + 0x4ed8aa4a;
    *((rsp + 0x1c)) = ecx;
    edx &= r10d;
    *((rsp - 0x6c)) = ecx;
    ecx = r10d;
    edx ^= r14d;
    ecx = rotate_right32 (ecx, 0xb);
    r13d += edx;
    edx = r10d;
    edx = rotate_right32 (edx, 6);
    ecx ^= edx;
    edx = r10d;
    edx = rotate_left32 (edx, 7);
    edx ^= ecx;
    ecx = esi;
    edx += r13d;
    r13d = esi;
    ecx = rotate_right32 (ecx, 2);
    r13d = rotate_right32 (r13d, 0xd);
    r9d += edx;
    r13d ^= ecx;
    ecx = esi;
    ecx = rotate_left32 (ecx, 0xa);
    r13d ^= ecx;
    ecx = edi;
    ecx |= esi;
    ecx &= r8d;
    ecx |= r15d;
    ecx += r13d;
    r13d = r11d;
    ecx += edx;
    edx = r11d;
    r13d = rotate_left32 (r13d, 0xd);
    edx = rotate_left32 (edx, 0xf);
    r13d ^= edx;
    edx = r11d;
    edx >>= 0xa;
    r13d ^= edx;
    edx = *((rsp - 0x78));
    r15d = *((rsp - 0x78));
    r15d = rotate_right32 (r15d, 7);
    edx = rotate_left32 (edx, 0xe);
    edx ^= r15d;
    r15d = *((rsp - 0x78));
    r15d >>= 3;
    edx ^= r15d;
    r15d = eax;
    edx += *((rsp - 0x64));
    edx += *((rsp - 0x4c));
    r15d ^= r10d;
    edx += r13d;
    r13d = r15d;
    *((rsp + 0x20)) = edx;
    r14d = r14 + rdx + 0x5b9cca4f;
    r15d = r9d;
    *((rsp - 0x64)) = edx;
    r13d &= r9d;
    edx = r9d;
    r15d = rotate_left32 (r15d, 7);
    r13d ^= eax;
    edx = rotate_right32 (edx, 6);
    r14d += r13d;
    r13d = edx;
    edx = r9d;
    edx = rotate_right32 (edx, 0xb);
    edx ^= r13d;
    r13d = r15d;
    r15d = esi;
    r13d ^= edx;
    edx = ecx;
    r15d &= ecx;
    r13d += r14d;
    r14d = ecx;
    edx = rotate_right32 (edx, 2);
    r14d = rotate_right32 (r14d, 0xd);
    r8d += r13d;
    r14d ^= edx;
    edx = ecx;
    edx = rotate_left32 (edx, 0xa);
    r14d ^= edx;
    edx = esi;
    edx |= ecx;
    edx &= edi;
    edx |= r15d;
    edx += r14d;
    r14d = *((rsp - 0x6c));
    edx += r13d;
    r15d = r14d;
    r15d = rotate_left32 (r15d, 0xf);
    r13d = r15d;
    r15d = r14d;
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= r13d;
    r13d = r15d;
    r13d >>= 0xa;
    r14d ^= r13d;
    r13d = *((rsp - 0x60));
    r15d = *((rsp - 0x60));
    r13d = rotate_left32 (r13d, 0xe);
    r15d = rotate_right32 (r15d, 7);
    r13d ^= r15d;
    r15d = *((rsp - 0x60));
    r15d >>= 3;
    r13d ^= r15d;
    r13d += *((rsp - 0x78));
    r13d += *((rsp - 0x50));
    r15d = edx;
    r14d += r13d;
    r13d = r10d;
    r15d = rotate_right32 (r15d, 0xd);
    r13d ^= r9d;
    *((rsp - 0x78)) = r14d;
    r13d &= r8d;
    *((rsp + 0x24)) = r14d;
    r14d = rax + r14 + 0x682e6ff3;
    eax = r8d;
    r13d ^= r10d;
    eax = rotate_right32 (eax, 6);
    r14d += r13d;
    r13d = eax;
    eax = r8d;
    eax = rotate_right32 (eax, 0xb);
    eax ^= r13d;
    r13d = r8d;
    r13d = rotate_left32 (r13d, 7);
    r13d ^= eax;
    eax = edx;
    r13d += r14d;
    eax = rotate_right32 (eax, 2);
    r14d = r15d;
    r15d = ecx;
    r14d ^= eax;
    eax = edx;
    r15d &= edx;
    edi += r13d;
    eax = rotate_left32 (eax, 0xa);
    r14d ^= eax;
    eax = ecx;
    eax |= edx;
    eax &= esi;
    eax |= r15d;
    r15d = *((rsp - 0x64));
    eax += r14d;
    eax += r13d;
    r14d = r15d;
    r13d = r15d;
    r13d = rotate_left32 (r13d, 0xf);
    r14d = rotate_left32 (r14d, 0xd);
    r14d ^= r13d;
    r13d = r15d;
    r13d >>= 0xa;
    r14d ^= r13d;
    r13d = *((rsp - 0x74));
    r15d = *((rsp - 0x74));
    r13d = rotate_left32 (r13d, 0xe);
    r15d = rotate_right32 (r15d, 7);
    r13d ^= r15d;
    r15d = *((rsp - 0x74));
    r15d >>= 3;
    r13d ^= r15d;
    r13d += *((rsp - 0x60));
    r12d += r13d;
    r15d = r14 + r12;
    r12d = r9d;
    r14d = edx;
    r12d ^= r8d;
    r13d = r10 + r15 + 0x748f82ee;
    r10d = edi;
    r14d &= eax;
    r12d &= edi;
    r10d = rotate_right32 (r10d, 6);
    *((rsp + 0x28)) = r15d;
    r12d ^= r9d;
    r13d += r12d;
    r12d = r10d;
    r10d = edi;
    r10d = rotate_right32 (r10d, 0xb);
    r10d ^= r12d;
    r12d = edi;
    r12d = rotate_left32 (r12d, 7);
    r12d ^= r10d;
    r10d = eax;
    r12d += r13d;
    r13d = eax;
    r10d = rotate_right32 (r10d, 2);
    r13d = rotate_right32 (r13d, 0xd);
    esi += r12d;
    r13d ^= r10d;
    r10d = eax;
    r10d = rotate_left32 (r10d, 0xa);
    r13d ^= r10d;
    r10d = edx;
    r10d |= eax;
    r10d &= ecx;
    r10d |= r14d;
    r14d = *((rsp - 0x78));
    r10d += r13d;
    r10d += r12d;
    r13d = r14d;
    r12d = r14d;
    r12d = rotate_left32 (r12d, 0xf);
    r13d = rotate_left32 (r13d, 0xd);
    r13d ^= r12d;
    r12d = r14d;
    r12d >>= 0xa;
    r13d ^= r12d;
    r12d = *((rsp - 0x5c));
    r14d = *((rsp - 0x5c));
    r12d = rotate_left32 (r12d, 0xe);
    r14d = rotate_right32 (r14d, 7);
    r12d ^= r14d;
    r14d = *((rsp - 0x5c));
    r14d >>= 3;
    r12d ^= r14d;
    r12d += *((rsp - 0x74));
    r14d = eax;
    ebp += r12d;
    r12d = r8d;
    ebp += r13d;
    r12d ^= edi;
    r12d &= esi;
    r13d = r9 + rbp + 0x78a5636f;
    r9d = esi;
    *((rsp + 0x2c)) = ebp;
    r12d ^= r8d;
    r9d = rotate_right32 (r9d, 6);
    r13d += r12d;
    r12d = r9d;
    r9d = esi;
    r9d = rotate_right32 (r9d, 0xb);
    r9d ^= r12d;
    r12d = esi;
    r12d = rotate_left32 (r12d, 7);
    r12d ^= r9d;
    r9d = r10d;
    r12d += r13d;
    r13d = r10d;
    r9d = rotate_right32 (r9d, 2);
    r13d = rotate_right32 (r13d, 0xd);
    ecx += r12d;
    r13d ^= r9d;
    r9d = r10d;
    r9d = rotate_left32 (r9d, 0xa);
    r13d ^= r9d;
    r9d = eax;
    r9d |= r10d;
    r14d &= r10d;
    r9d &= edx;
    r9d |= r14d;
    r9d += r13d;
    r13d = r15d;
    r9d += r12d;
    r12d = r15d;
    r13d = rotate_left32 (r13d, 0xd);
    r12d = rotate_left32 (r12d, 0xf);
    r13d ^= r12d;
    r12d = r15d;
    r12d >>= 0xa;
    r13d ^= r12d;
    r12d = *((rsp - 0x70));
    r14d = *((rsp - 0x70));
    r12d = rotate_left32 (r12d, 0xe);
    r14d = rotate_right32 (r14d, 7);
    r12d ^= r14d;
    r14d = *((rsp - 0x70));
    r14d >>= 3;
    r12d ^= r14d;
    r12d += *((rsp - 0x5c));
    r14d = r10d;
    ebx += r12d;
    r12d = edi;
    r12d ^= esi;
    ebx += r13d;
    r12d &= ecx;
    r8d = r8 + rbx - 0x7b3787ec;
    *((rsp + 0x30)) = ebx;
    r12d ^= edi;
    r8d += r12d;
    r12d = ecx;
    r12d = rotate_right32 (r12d, 6);
    r13d = r12d;
    r12d = ecx;
    r12d = rotate_right32 (r12d, 0xb);
    r12d ^= r13d;
    r13d = ecx;
    r13d = rotate_left32 (r13d, 7);
    r12d ^= r13d;
    r12d += r8d;
    r8d = r9d;
    r8d = rotate_right32 (r8d, 2);
    edx += r12d;
    r13d = r8d;
    r8d = r9d;
    r8d = rotate_right32 (r8d, 0xd);
    r8d ^= r13d;
    r13d = r9d;
    r14d &= r9d;
    r13d = rotate_left32 (r13d, 0xa);
    r8d ^= r13d;
    r13d = r10d;
    r13d |= r9d;
    r13d &= eax;
    r13d |= r14d;
    r14d = *((rsp - 0x68));
    r13d += r8d;
    r8d = ebp;
    r8d = rotate_left32 (r8d, 0xf);
    r12d += r13d;
    r13d = r8d;
    r8d = ebp;
    ebp >>= 0xa;
    r8d = rotate_left32 (r8d, 0xd);
    r8d ^= r13d;
    r13d = r14d;
    ebp ^= r8d;
    r8d = r14d;
    r13d = rotate_right32 (r13d, 7);
    r8d = rotate_left32 (r8d, 0xe);
    r8d ^= r13d;
    r13d = r14d;
    r13d >>= 3;
    r8d ^= r13d;
    r8d += *((rsp - 0x70));
    r13d = r9d;
    r11d += r8d;
    r8d = esi;
    r8d ^= ecx;
    r11d += ebp;
    r8d &= edx;
    edi = rdi + r11 - 0x7338fdf8;
    *((rsp + 0x34)) = r11d;
    r8d ^= esi;
    edi += r8d;
    r8d = edx;
    r8d = rotate_right32 (r8d, 6);
    r8d = edx;
    r8d = rotate_right32 (r8d, 0xb);
    r8d ^= ebp;
    ebp = rotate_left32 (ebp, 7);
    r8d ^= ebp;
    r8d += edi;
    edi = r12d;
    eax += r8d;
    edi = rotate_right32 (edi, 2);
    r13d &= r12d;
    edi = r12d;
    edi = rotate_right32 (edi, 0xd);
    edi ^= ebp;
    ebp = rotate_left32 (ebp, 0xa);
    edi ^= ebp;
    ebp |= r12d;
    ebp &= r10d;
    ebp |= r13d;
    r13d = *((rsp - 0x58));
    ebp += edi;
    edi = ebx;
    edi = rotate_left32 (edi, 0xf);
    r8d += ebp;
    edi = ebx;
    ebx >>= 0xa;
    edi = rotate_left32 (edi, 0xd);
    edi ^= ebp;
    ebx ^= edi;
    edi = r13d;
    ebp = rotate_left32 (ebp, 0xe);
    edi = rotate_right32 (edi, 7);
    ebp ^= edi;
    edi = r13d;
    r13d = r12d;
    edi >>= 3;
    ebp ^= edi;
    edi = rbp + r14;
    edi += *((rsp - 0x6c));
    r14d = *((rsp - 0x54));
    ebp ^= edx;
    edi += ebx;
    ebx = ebp;
    esi = rsi + rdi - 0x6f410006;
    *((rsp + 0x38)) = edi;
    ebx &= eax;
    ebp = rotate_right32 (ebp, 6);
    ebx ^= ecx;
    esi += ebx;
    ebx = eax;
    ebx = rotate_right32 (ebx, 0xb);
    ebx ^= ebp;
    ebp = rotate_left32 (ebp, 7);
    ebx ^= ebp;
    r13d &= r8d;
    ebx += esi;
    esi = r8d;
    ebp = rotate_right32 (ebp, 2);
    esi = rotate_right32 (esi, 0xd);
    r10d += ebx;
    esi ^= ebp;
    ebp = rotate_left32 (ebp, 0xa);
    esi ^= ebp;
    ebp |= r8d;
    ebp &= r9d;
    ebp |= r13d;
    r13d = *((rsp - 0x58));
    ebp += esi;
    esi = r11d;
    ebx += ebp;
    esi = rotate_left32 (esi, 0xd);
    ebp = rotate_left32 (ebp, 0xf);
    r11d >>= 0xa;
    esi ^= ebp;
    r11d ^= esi;
    esi = r14d;
    ebp = rotate_left32 (ebp, 0xe);
    esi = rotate_right32 (esi, 7);
    ebp ^= esi;
    esi = r14d;
    esi >>= 3;
    ebp ^= esi;
    esi = rbp + r13;
    esi += *((rsp - 0x64));
    r13d = r8d;
    esi += r11d;
    r11d = edx;
    ebp = rotate_right32 (ebp, 6);
    r11d ^= eax;
    ecx = rcx + rsi - 0x5baf9315;
    *((rsp + 0x3c)) = esi;
    r11d &= r10d;
    r11d ^= edx;
    ecx += r11d;
    r11d = r10d;
    r11d = rotate_right32 (r11d, 0xb);
    r11d ^= ebp;
    r13d &= ebx;
    ebp = rotate_left32 (ebp, 7);
    r11d ^= ebp;
    r11d += ecx;
    ecx = ebx;
    ebp = rotate_right32 (ebp, 2);
    ecx = rotate_right32 (ecx, 0xd);
    r9d += r11d;
    ecx ^= ebp;
    ebp = rotate_left32 (ebp, 0xa);
    ecx ^= ebp;
    ebp |= ebx;
    ebp &= r12d;
    ebp |= r13d;
    r13d = *((rsp - 0x4c));
    ebp += ecx;
    ecx = edi;
    r11d += ebp;
    ecx = rotate_left32 (ecx, 0xd);
    ebp = rotate_left32 (ebp, 0xf);
    edi >>= 0xa;
    ecx ^= ebp;
    edi ^= ecx;
    ecx = r13d;
    ebp = rotate_right32 (ebp, 7);
    ecx = rotate_left32 (ecx, 0xe);
    ecx ^= ebp;
    ebp >>= 3;
    ecx ^= ebp;
    ecx += r14d;
    ecx += *((rsp - 0x78));
    r14d = *((rsp - 0x50));
    edi += ecx;
    ecx = eax;
    ecx ^= r10d;
    edx = rdx + rdi - 0x41065c09;
    *((rsp + 0x40)) = edi;
    edi = r9d;
    ecx &= r9d;
    ecx ^= eax;
    edx += ecx;
    ecx = r9d;
    edi = rotate_right32 (edi, 6);
    ebp &= r11d;
    ecx = rotate_right32 (ecx, 0xb);
    ecx ^= edi;
    edi = r9d;
    edi = rotate_left32 (edi, 7);
    ecx ^= edi;
    edi = r11d;
    ecx += edx;
    edx = r11d;
    edi = rotate_right32 (edi, 2);
    edx = rotate_right32 (edx, 0xd);
    r12d += ecx;
    edx ^= edi;
    edi = r11d;
    edi = rotate_left32 (edi, 0xa);
    edx ^= edi;
    edi = ebx;
    edi |= r11d;
    edi &= r8d;
    edi |= ebp;
    edi += edx;
    edx = esi;
    ecx += edi;
    edi = esi;
    edx = rotate_left32 (edx, 0xd);
    edi = rotate_left32 (edi, 0xf);
    esi >>= 0xa;
    edx ^= edi;
    edi = r14d;
    esi ^= edx;
    edx = r14d;
    edi = rotate_left32 (edi, 0xe);
    edx = rotate_right32 (edx, 7);
    edi ^= edx;
    edx = r14d;
    edx >>= 3;
    edi ^= edx;
    edx = r10d;
    edi += r13d;
    edi += r15d;
    esi += edi;
    edx ^= r9d;
    edi = r11d;
    edx &= r12d;
    eax = rax + rsi - 0x398e870e;
    *((rsp + 0x44)) = esi;
    edi &= ecx;
    edx ^= r10d;
    esi = r12d;
    edx += eax;
    eax = r12d;
    esi = rotate_right32 (esi, 6);
    eax = rotate_right32 (eax, 0xb);
    r13d = *((rsp - 0x30));
    eax ^= esi;
    esi = r12d;
    ebp = *((rsp - 0x24));
    esi = rotate_left32 (esi, 7);
    r9d = *((rsp - 0x20));
    eax ^= esi;
    esi = ecx;
    eax += edx;
    edx = ecx;
    esi = rotate_right32 (esi, 2);
    edx = rotate_right32 (edx, 0xd);
    r8d += eax;
    edx ^= esi;
    esi = ecx;
    esi = rotate_left32 (esi, 0xa);
    edx ^= esi;
    esi = r11d;
    esi |= ecx;
    esi &= ebx;
    esi |= edi;
    rdi = *(rsp);
    edx += esi;
    esi = *((rsp - 0x34));
    edx += *((rsp - 0xc));
    rcx = rdi;
    edx += eax;
    *(rdi) = edx;
    edi = esi;
    rbx = rcx;
    *((rcx + 4)) = esi;
    esi = *((rsp - 0x2c));
    eax = edi;
    *((rcx + 8)) = r13d;
    *((rbx + 0xc)) = esi;
    ecx = esi;
    esi = *((rsp - 0x28));
    *((rbx + 0x14)) = ebp;
    r12d = ecx;
    *((rbx + 0x10)) = esi;
    *((rsp - 0xc)) = edx;
    *((rbx + 0x18)) = r9d;
    r8d = *((rsp - 0x1c));
    r10d = esi;
    *((rbx + 0x1c)) = r8d;
    rbx = *((rsp - 0x40));
    if (rbx < *((rsp - 8))) {
        goto label_0;
    }
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x405990 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int64_t fcn_00405990 (int64_t arg1) {
    rdi = arg1;
    rsi = *((rdi + 0x28));
    rbx = rdi;
    ecx = *((rbx + 0x20));
    edx = *((rbx + 0x24));
    rbp -= rbp;
    rbp &= 0xffffffffffffffc0;
    rbp -= 0xffffffffffffff80;
    rdi -= rdi;
    rdi &= 0xfffffffffffffff0;
    rdi += 0x1f;
    rax -= rax;
    ecx += esi;
    rax &= 0xfffffffffffffff0;
    r8d = ecx;
    *((rbx + 0x20)) = ecx;
    rax += 0x1e;
    if (r8 < rsi) {
        edx++;
        *((rbx + 0x24)) = edx;
    }
    r8d = ecx;
    edx <<= 3;
    r12 = rbx + 0x30;
    r8d >>= 0x1d;
    edx |= r8d;
    edx = SWAP32 (edx);
    *((rbx + rax*4 + 0x30)) = edx;
    edx = rcx*8;
    eax = ecx;
    eax <<= 0xb;
    r8d = edx;
    ecx <<= 0x1b;
    r8d >>= 0x18;
    eax &= 0xff0000;
    edx >>= 8;
    eax |= r8d;
    edx &= 0xff00;
    eax |= ecx;
    eax |= edx;
    *((rbx + rdi*4 + 0x30)) = eax;
    rax = rbp;
    rax -= rsi;
    memcpy (r12 + rsi, 0x40ab80, rax - 8);
    rdx = rbx;
    rsi = rbp;
    rdi = r12;
invalid_funccall(); //    return void (*0x403200)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x405ac0 */
#include <stdint.h>
 
uint64_t fcn_00405ac0 (int64_t arg1, int64_t arg3, size_t n) {
    rdi = arg1;
    rdx = arg3;
    rsi = n;
    r13 = rsi;
    r12 = rdx;
    rbx = rdi;
    rbp = *((rdx + 0x28));
    if (rbp != 0) {
        goto label_4;
    }
label_0:
    if (r13 <= 0x3f) {
        goto label_5;
    }
    if ((bl & 3) == 0) {
        goto label_6;
    }
    rbp = r12 + 0x30;
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
        fcn_00403200 (rbp, 0x40, r12);
    } while (rbx != r14);
    rax = r15;
    rax = -rax;
    rax <<= 6;
    r13 = r13 + rax - 0x40;
label_3:
    rax = *((r12 + 0x28));
    rsi = rbp + rax;
    if (r13d >= 8) {
        goto label_8;
    }
    if ((r13b & 4) != 0) {
        goto label_9;
    }
    if (r13d == 0) {
        goto label_1;
    }
    ecx = *(r14);
    *(rsi) = cl;
    if ((r13b & 2) != 0) {
        goto label_10;
    }
    do {
label_1:
        r13 += rax;
        if (r13 > 0x3f) {
            r13 -= 0x40;
            fcn_00403200 (rbp, 0x40, r12);
            memcpy (rbp, r12 + 0x70, r13);
        }
        *((r12 + 0x28)) = r13;
        return rax;
label_6:
        r13d &= 0x3f;
        rbp &= 0xffffffffffffffc0;
        rbx += rbp;
        fcn_00403200 (rbx, rbp, r12);
label_5:
        if (r13 != 0) {
            goto label_11;
        }
        return rax;
label_4:
        r14d = 0x80;
        r15 = rdx + 0x30;
        r14 -= rbp;
        rdi = r15 + rbp;
        if (r14 > rsi) {
            r14 = rsi;
        }
        memcpy (rdi, rbx, r14);
        rsi = *((r12 + 0x28));
        rsi += r14;
        *((r12 + 0x28)) = rsi;
        if (rsi > 0x40) {
            goto label_12;
        }
label_2:
        rbx += r14;
        r13 -= r14;
        goto label_0;
label_8:
        rdx = *(r14);
        ecx = r13d;
        rdi = rsi + 8;
        rdi &= 0xfffffffffffffff8;
        *(rsi) = rdx;
        rdx = *((r14 + rcx - 8));
        *((rsi + rcx - 8)) = rdx;
        rdx = rsi;
        rdx -= rdi;
        r14 -= rdx;
        edx += r13d;
        edx &= 0xfffffff8;
    } while (edx < 8);
    edx &= 0xfffffff8;
    ecx = 0;
    do {
        esi = ecx;
        ecx += 8;
        r8 = *((r14 + rsi));
        *((rdi + rsi)) = r8;
    } while (ecx < edx);
    goto label_1;
label_12:
    rsi &= 0xffffffffffffffc0;
    rbp += r14;
    fcn_00403200 (r15, rsi, r12);
    rcx = *((r12 + 0x28));
    rbp &= 0xffffffffffffffc0;
    rax = r15 + rbp;
    ecx &= 0x3f;
    *((r12 + 0x28)) = rcx;
    if (ecx >= 8) {
        goto label_13;
    }
    if ((cl & 4) != 0) {
        goto label_14;
    }
    if (ecx == 0) {
        goto label_2;
    }
    edx = *(rax);
    *((r12 + 0x30)) = dl;
    if ((cl & 2) == 0) {
        goto label_2;
    }
    edx = ecx;
    eax = *((rax + rdx - 2));
    *((r15 + rdx - 2)) = ax;
    goto label_2;
label_13:
    rdx = *(rax);
    rdi = r12 + 0x38;
    rdi &= 0xfffffffffffffff8;
    *((r12 + 0x30)) = rdx;
    edx = ecx;
    rsi = *((rax + rdx - 8));
    *((r15 + rdx - 8)) = rsi;
    rdx = r15;
    rdx -= rdi;
    rax -= rdx;
    edx += ecx;
    edx &= 0xfffffff8;
    if (edx < 8) {
        goto label_2;
    }
    edx &= 0xfffffff8;
    ecx = 0;
    do {
        esi = ecx;
        ecx += 8;
        r8 = *((rax + rsi));
        *((rdi + rsi)) = r8;
    } while (ecx < edx);
    goto label_2;
label_14:
    edx = *(rax);
    *((r12 + 0x30)) = edx;
    edx = ecx;
    eax = *((rax + rdx - 4));
    *((r15 + rdx - 4)) = eax;
    goto label_2;
label_7:
    r14 = rbx;
    goto label_3;
label_9:
    ecx = *(r14);
    *(rsi) = ecx;
    ecx = r13d;
    edx = *((r14 + rcx - 4));
    *((rsi + rcx - 4)) = edx;
    goto label_1;
label_10:
    ecx = r13d;
    edx = *((r14 + rcx - 2));
    *((rsi + rcx - 2)) = dx;
    goto label_1;
label_11:
    rbp = r12 + 0x30;
    r14 = rbx;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x406020 */
#include <stdint.h>
 
uint64_t fcn_00406020 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    r14 = rsi;
    rax = malloc (0x8048);
    if (rax == 0) {
        goto label_1;
    }
    *((rsp + 0x20)) = 0;
    r12 = rax;
    rax = 0x367cd507c1059ed8;
    *(rsp) = rax;
    rax = 0xf70e59393070dd17;
    *((rsp + 8)) = rax;
    rax = 0x68581511ffc00b31;
    *((rsp + 0x10)) = rax;
    rax = 0xbefa4fa464f98fa7;
    *((rsp + 0x18)) = rax;
    *((rsp + 0x28)) = 0;
label_0:
    ebx = 0;
    r13d = 0x8000;
    while (rbx != 0x8000) {
        edx = *(rbp);
        if (rax == 0) {
            goto label_2;
        }
        edx &= 0x10;
        if (edx != 0) {
            goto label_3;
        }
        rdx = r13;
        rdi = r12 + rbx;
        rcx = rbp;
        esi = 1;
        rdx -= rbx;
        rax = fread_unlocked ();
        rbx += rax;
    }
    fcn_00403200 (r12, 0x8000, rsp);
    goto label_0;
label_2:
    edx &= 0x20;
    if (edx != 0) {
        goto label_4;
    }
label_3:
    while (1) {
        fcn_00405990 (rsp);
        fcn_004031e0 (rsp, r14);
        eax = free (r12);
        eax = 0;
        return rax;
        fcn_00405ac0 (r12, rbx, rsp);
    }
label_4:
    free (r12);
    eax = 1;
    return rax;
label_1:
    eax = 1;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x406190 */
#include <stdint.h>
 
uint32_t fcn_00406190 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4061c0 */
#include <stdint.h>
 
uint64_t fcn_004061c0 (int64_t arg2, const char * filename) {
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
        eax = fcn_00407ea0 (eax, rsi, rdx);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_004086e0 (rbx);
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
    fcn_004086e0 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x406260 */
#include <stdint.h>
 
uint64_t fcn_00406260 (char ** arg1) {
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
            edi = 0x40ac00;
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
        *(0x0060e308) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x406300 */
#include <stdint.h>
 
uint64_t fcn_00406300 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00409850 ();
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
        eax = 0x40ac06;
        ebx = 0x40ac11;
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
        eax = 0x40ac0a;
        ebx = 0x40ac0d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40bdf7;
    ebx = 0x40ac04;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x406400 */
#include <stdint.h>
 
uint64_t fcn_00406400 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 34120 named .text */
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
    /* switch table (11 cases) at 0x40ac80 */
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
    *((rsp + 0x50)) = 0x40bdf7;
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
        /* switch table (127 cases) at 0x40acd8 */
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
    rax = fcn_00406400 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40b0d0 */
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
    /* switch table (127 cases) at 0x40b4c8 */
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
    *((rsp + 0x50)) = 0x40bdf7;
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
        rax = fcn_00409710 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40bdf7;
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
        *((rsp + 0x50)) = 0x40ac04;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00406300 (0x40ac15, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00406300 (0x40bdf7, r13d);
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
        *((rsp + 0x50)) = 0x40ac04;
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
        *((rsp + 0x50)) = 0x40bdf7;
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
    *((rsp + 0x50)) = 0x40ac04;
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
    rax = fcn_00406400 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *(rax) += al;
    *((rax - 0x39)) += cl;
    al &= 0x50;
    eax = *(edx_eax) / rbp - 0x7e16ffc0;
    edx = *(edx_eax) % rbp - 0x7e16ffc0;
    __asm ("out dx, al");
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x407606 */
#include <stdint.h>
 
int64_t fcn_00407606 (void) {
    *(rax) += al;
    *((rax - 0x39)) += cl;
    al &= 0x50;
    eax = *(edx_eax) / rbp - 0x7e16ffc0;
    edx = *(edx_eax) % rbp - 0x7e16ffc0;
    __asm ("out dx, al");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x407630 */
#include <stdint.h>
 
uint64_t fcn_00407630 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0060e278);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060e290) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60e280) {
        goto label_2;
    }
    rax = fcn_004084b0 (rbx, rsi);
    *(0x0060e278) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060e290);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060e290) = r12d;
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
        rax = fcn_00406400 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60e320) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00408450 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00406400 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_004084b0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060e280]");
        rbx = rax;
        *(0x0060e278) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_004086a0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x407cd0 */
#include <stdint.h>
 
int64_t fcn_00407cd0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x0060e420]");
        __asm ("movdqa xmm1, xmmword [0x0060e430]");
        __asm ("movdqa xmm2, xmmword [0x0060e440]");
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
        fcn_00407630 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x407d00 */
#include <stdint.h>
 
int64_t fcn_00407d00 (uint32_t arg2, int64_t arg3) {
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
    fcn_00407630 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x407ea0 */
#include <stdint.h>
 
uint64_t fcn_00407ea0 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
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
            *(0x0060e458) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
invalid_funccall(); //        eax = void (*0x408760)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0060e458) != 0xffffffff) {
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
invalid_funccall(); //    eax = void (*0x408760)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0060e458) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x407eb0 */
#include <stdint.h>
 
void fcn_00407eb0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40b96b);
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
        /* switch table (10 cases) at 0x40bc58 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x408310 */
#include <stdint.h>
 
uint64_t fcn_00408310 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00407eb0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x408450 */
#include <stdint.h>
 
uint64_t fcn_00408450 (int64_t arg1) {
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
    return fcn_004086a0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4084b0 */
#include <stdint.h>
 
uint64_t fcn_004084b0 (int64_t arg1, int64_t arg2) {
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
    return fcn_004086a0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x408650 */
#include <stdint.h>
 
uint64_t fcn_00408650 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00408450 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4086a0 */
#include <stdint.h>
 
uint64_t fcn_004086a0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060e220), 0, 0x40ab75);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4086e0 */
#include <stdint.h>
 
uint64_t fcn_004086e0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_004088a0 (rbx);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4088a0 */
#include <stdint.h>
 
uint32_t fcn_004088a0 (int64_t arg1) {
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
    fcn_004088e0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4088e0 */
#include <stdint.h>
 
int64_t fcn_004088e0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x408940 */
#include <stdint.h>
 
uint64_t fcn_00408940 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x408a20 */
#include <stdint.h>
 
int64_t fcn_00408a20 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409040 */
#include <stdint.h>
 
uint64_t fcn_00409040 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40be09;
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
            fcn_00408940 (r12, rbx);
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
        fcn_00408940 (r12, rbx);
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
    eax = fcn_00408a20 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00408a20 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409610 */
#include <stdint.h>
 
int32_t fcn_00409610 (int64_t arg_10h) {
    eax = *(0x0060e29c);
    *(0x0060e460) = eax;
    eax = *(0x0060e298);
    *(0x0060e464) = eax;
    eax = *((rsp + 0x10));
    fcn_00409040 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060e29c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060e4a0) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060e294) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409690 */
#include <stdint.h>
 
void fcn_00409690 (void) {
    r9d = 0;
    fcn_00409610 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409710 */
#include <stdint.h>
 
uint64_t fcn_00409710 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_004097f0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409790 */
#include <stdint.h>
 
uint64_t fcn_00409790 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_004086e0 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x4097f0 */
#include <stdint.h>
 
uint64_t fcn_004097f0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40be2c;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409850 */
#include <stdint.h>
 
uint64_t fcn_00409850 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40be27;
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
        r15d = 0x40be27;
label_2:
        *(0x0060e498) = r15;
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
        r15d = 0x40be27;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x409f2d;
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
    fcn_004086e0 (rbx);
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
        r15d = 0x40be27;
        rbx = rax;
        free (r15);
        fcn_004086e0 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409e30 */
#include <stdint.h>
 
int64_t fcn_00409e30 (void) {
    rax = 0x60e208;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_sha224sum.elf @ 0x409e48 */
#include <stdint.h>
 
void fcn_00409e48 (int64_t arg3) {
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
