/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x401b60 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_20h;
    int64_t var_8h;
    int64_t var_10h;
    uint32_t var_18h;
    rdi = argc;
    rsi = argv;
    r12d = edi;
    fcn_00405970 (*(rsi));
    rax = setlocale (6, 0x40dc97);
    rbx = rax;
    bindtextdomain (0x40a19d, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40a19d, rsi);
    rax = nl_langinfo (0x10000);
    *(0x00610340) = rax;
    if (rax == 0) {
        goto label_22;
    }
    if (*(rax) == 0) {
        goto label_22;
    }
label_1:
    eax = strlen (*(0x00610340));
    edi = 0x405490;
    *(0x0061033c) = eax;
    fcn_00409fa0 ();
    do {
label_0:
        r8d = 0;
        ecx = 0x40bd80;
        edx = 0x40a1bf;
        rsi = rbp;
        edi = r12d;
        eax = fcn_004096e0 ();
        if (eax == 0xffffffff) {
            goto label_23;
        }
        if (eax == 0x84) {
            goto label_24;
        }
        if (eax <= 0x84) {
            goto label_25;
        }
        if (eax == 0x89) {
            goto label_26;
        }
        if (eax > 0x89) {
            goto label_27;
        }
        if (eax == 0x86) {
            goto label_28;
        }
        if (eax < 0x86) {
            goto label_29;
        }
        if (eax != 0x87) {
            goto label_30;
        }
        eax = fcn_00407e00 (*(0x00610570), 0, 0xa, 0x610380, 0x40dc97);
        if (eax != 0) {
            goto label_31;
        }
        rax = imp.__libc_start_main;
        if (rax == 0) {
            goto label_31;
        }
    } while (rax >= 0);
    *(0x00610258) = 0;
    rax = -rax;
    *(0x00610380) = rax;
    goto label_0;
label_22:
    *(0x00610340) = 0x40a1bd;
    goto label_1;
label_30:
    if (eax == 0x88) {
        if (*(0x00610568) != 0) {
            goto label_32;
        }
        eax = fcn_00404b00 (*(0x00610570), 1, rdx);
        goto label_0;
label_27:
        if (eax == 0x8b) {
            goto label_33;
        }
        if (eax < 0x8b) {
            goto label_34;
        }
        if (eax == 0x8c) {
            rax = imp.__libc_start_main;
            *(0x00610370) = rax;
            goto label_0;
label_25:
            if (eax == 0x7a) {
                goto label_35;
            }
            if (eax <= 0x7a) {
                goto label_36;
            }
            if (eax == 0x81) {
                goto label_37;
            }
            if (eax <= 0x81) {
                goto label_38;
            }
            if (eax != 0x82) {
                goto label_39;
            }
            fcn_004053b0 ("--to", *(0x00610570), 0x40c0a0, 0x40c090, 4, *(0x00610288));
            eax = *((rax*4 + 0x40c090));
            *(0x006103ac) = eax;
            goto label_0;
        }
        if (eax != 0x8d) {
            goto label_40;
        }
        fcn_004053b0 ("--invalid", *(0x00610570), 0x40c000, 0x40bfe0, 4, *(0x00610288));
        eax = *((rax*4 + 0x40bfe0));
        *(0x006103a8) = eax;
        goto label_0;
label_39:
        if (eax != 0x83) {
            goto label_40;
        }
        rax = fcn_004029b0 (*(0x00610570));
        *(0x00610268) = rax;
        goto label_0;
label_38:
        if (eax != 0x80) {
            goto label_40;
        }
        fcn_004053b0 ("--from", *(0x00610570), 0x40c100, 0x40c0d0, 4, *(0x00610288));
        eax = *((rax*4 + 0x40c0d0));
        *(0x006103b0) = eax;
        goto label_0;
label_36:
        if (eax == 0xffffff7e) {
            goto label_41;
        }
        if (eax == 0x64) {
            rdx = imp.__libc_start_main;
            eax = *(rdx);
            if (al != 0) {
                if (*((rdx + 1)) != 0) {
                    goto label_42;
                }
            }
            *(0x00610254) = eax;
            goto label_0;
        }
        if (eax == 0xffffff7d) {
            goto label_43;
        }
    }
label_40:
    fcn_00404360 (1);
label_34:
    *(0x00610338) = 1;
label_26:
    *(0x00610348) = 1;
    goto label_0;
label_37:
    rax = fcn_004029b0 (*(0x00610570));
    *(0x00610270) = rax;
    goto label_0;
label_35:
    *(0x00610250) = 0;
    goto label_0;
label_29:
    rax = imp.__libc_start_main;
    *(0x006103a0) = rax;
    goto label_0;
label_28:
    *(0x00610398) = 1;
    goto label_0;
label_33:
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_44;
    }
    eax = fcn_00408550 (rdi, 0, 0xa, 0x610350, 0x40dc97);
    if (eax != 0) {
        goto label_45;
    }
    if (*(0x00610350) != 0) {
        goto label_0;
    }
label_45:
    rax = fcn_00407590 (*(0x00610570));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid header value %s");
    rcx = rbx;
    eax = 0;
    rax = error (1, 0, rax);
label_24:
    fcn_004053b0 ("--round", *(0x00610570), 0x40c060, 0x40c030, 4, *(0x00610288));
    eax = *((rax*4 + 0x40c030));
    *(0x00610278) = eax;
    goto label_0;
label_43:
    r9d = 0;
    r8d = "Assaf Gordon";
    eax = 0;
    rcx = *(str.8.29);
    fcn_00407a10 (*(obj.stdout), "numfmt", "GNU coreutils");
    exit (0);
label_44:
    *(0x00610350) = 1;
    goto label_0;
label_23:
    if (*(0x00610370) != 0) {
        if (*(0x00610398) != 0) {
            goto label_46;
        }
    }
    if (rbx == 0) {
        if (*(0x00610348) != 0) {
            goto label_47;
        }
    }
label_13:
    if (*(0x00610348) != 0) {
        eax = imp.__libc_start_main;
        eax |= *(0x006103ac);
        if (eax != 0) {
            goto label_48;
        }
        rbx = imp.__libc_start_main;
        if (*(0x00610398) != 0) {
            goto label_49;
        }
        if (*(0x00610380) != 0) {
            goto label_50;
        }
        if (rbx != 0) {
            goto label_15;
        }
        edx = 5;
        rax = dcgettext (0, "no conversion option specified");
        eax = 0;
        eax = error (0, 0, rax);
    }
label_48:
    rbx = imp.__libc_start_main;
    if (rbx == 0) {
        goto label_51;
    }
label_15:
    *((rsp + 0x18)) = 0;
    r14d = 0;
    eax = 0;
    while (dl != 0x25) {
        if (dl == 0) {
            goto label_52;
        }
        edx = 1;
label_2:
        rax += rdx;
        r14++;
        edx = *((rbx + rax));
    }
    r13 = rax + 1;
    if (*((rbx + rax + 1)) != 0x25) {
        goto label_53;
    }
    edx = 2;
    goto label_2;
label_6:
    if (r14 == 0) {
        goto label_54;
    }
label_21:
    rax = fcn_00407de0 (rbx, r14);
    *(0x00610368) = rax;
    if (*(r13) != 0) {
        goto label_54;
    }
label_17:
    if (*(0x00610338) != 0) {
        rsi = imp.__libc_start_main;
        if (rsi == 0) {
        }
        rax = fcn_00407570 (2, 0x40dc97);
        rsi = imp.__libc_start_main;
        rcx = rax;
        if (rsi == 0) {
        }
        *((rsp + 8)) = rcx;
        r14d = "Left";
        r13d = 0x40a1b6;
        rax = fcn_00407570 (1, 0x40dc97);
        r9 = imp.__libc_start_main;
        rsi = rbx;
        r15 = rax;
        eax = "Right";
        if (*(0x00610258) != 0) {
            r14 = rax;
        }
        eax = 0x40a1ba;
        *(rsp) = r9;
        if (*(0x00610398) == 0) {
            r13 = rax;
        }
        rax = fcn_00407570 (0, rsi);
        rdi = stderr;
        esi = 1;
        rcx = *((rsp + 0x10));
        r8 = r13;
        edx = "format String:\n  input: %s\n  grouping: %s\n  padding width: %ld\n  alignment: %s\n  prefix: %s\n  suffix: %s\n";
        rcx = rax;
        eax = 0;
        r9 = *((rsp + 0x20));
        eax = fprintf_chk ();
    }
label_51:
    if (*(0x00610398) != 0) {
        goto label_55;
    }
label_5:
    rdi = imp.__libc_start_main;
    if (rdi >= *(0x00610388)) {
        goto label_56;
    }
label_4:
    eax = 0;
    if (*(0x00610380) == 0) {
        eax = 0;
        al = (*(0x00610254) == 0x80) ? 1 : 0;
    }
    *(0x00610358) = eax;
    if (*(0x006103a8) != 0) {
        *(0x0061025c) = 0;
    }
    eax = *(0x006102fc);
    if (eax < r12d) {
        goto label_57;
    }
    rax = imp.__libc_start_main;
    r13 = rsp + 0x18;
    rbp = rsp + 0x10;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    rdx = rax - 1;
    *(0x00610350) = rdx;
    if (rax != 0) {
        goto label_58;
    }
    goto label_59;
    do {
        rsi = stdout;
        rdi = *((rsp + 0x10));
        fputs_unlocked ();
        rax = imp.__libc_start_main;
        rdx = rax - 1;
        *(0x00610350) = rdx;
        if (rax == 0) {
            goto label_59;
        }
label_58:
        edx = *(0x00610250);
        rcx = stdin;
        rsi = r13;
        rdi = rbp;
        rax = getdelim ();
    } while (rax > 0);
label_59:
    ebx = 1;
    while (rax > 0) {
        rdi = *((rsp + 0x10));
        rcx = rdi + rax - 1;
        eax = *(0x00610250);
        edx = *(rcx);
        sil = (edx == eax) ? 1 : 0;
        if (edx == eax) {
            *(rcx) = 0;
        }
        esi = (int32_t) sil;
        eax = fcn_004041a0 (*((rsp + 0x10)), rsi);
        ebx &= eax;
        edx = *(0x00610250);
        rcx = stdin;
        rsi = r13;
        rdi = rbp;
        rax = getdelim ();
    }
    rax = stdin;
    if ((*(rax) & 0x20) != 0) {
        goto label_60;
    }
label_3:
    if (*(0x00610348) == 0) {
        goto label_61;
    }
    if (ebx == 0) {
        goto label_62;
    }
label_10:
    eax = 0;
label_11:
    return rax;
label_57:
    if (*(0x00610348) != 0) {
        if (*(0x00610350) != 0) {
            goto label_63;
        }
    }
label_14:
    ebx = 1;
    do {
        rax = (int64_t) eax;
        eax = fcn_004041a0 (*((rbp + rax*8)), 1);
        ebx &= eax;
        eax = *(0x006102fc);
        eax++;
        *(0x006102fc) = eax;
    } while (eax < r12d);
    goto label_3;
label_56:
    fcn_00402bd0 (rdi);
    goto label_4;
label_55:
    if (*(0x006103ac) != 0) {
        goto label_64;
    }
label_16:
    if (*(0x00610348) == 0) {
        goto label_5;
    }
    rax = nl_langinfo (0x10001);
    if (*(rax) != 0) {
        goto label_5;
    }
    edx = 5;
    rax = dcgettext (0, "grouping has no effect in this locale");
    eax = 0;
    error (0, 0, rax);
    goto label_5;
label_53:
    r15d = 0;
    rcx = rbx + r13;
    do {
label_9:
        rax = strspn (rcx, 0x40dc9a);
        r13 += rax;
        rcx = rbx + r13;
        edx = *(rcx);
        if (dl == 0x27) {
            goto label_65;
        }
        if (dl == 0x30) {
            goto label_66;
        }
    } while (rax != 0);
    *(rsp) = rcx;
    r13 = rsp + 0x18;
    errno_location ();
    rcx = *(rsp);
    *(rax) = 0;
    *((rsp + 8)) = rax;
    rax = strtol (rcx, r13, 0xa);
    r8 = *((rsp + 8));
    rcx = *(rsp);
    r9 = rax;
    if (*(r8) == 0x22) {
        goto label_67;
    }
    if (*((rsp + 0x18)) != rcx) {
        if (rax == 0) {
            goto label_19;
        }
        if (*(0x00610348) == 0) {
            goto label_68;
        }
        if (*(0x00610380) == 0) {
            goto label_68;
        }
        if (r15b == 0) {
            goto label_69;
        }
        if (rax <= 0) {
            goto label_69;
        }
label_18:
        *(0x00610378) = r9;
    }
label_19:
    rdx = *((rsp + 0x18));
    rax = *((rsp + 0x18));
    edx = *(rdx);
    rax -= rbx;
    if (dl == 0) {
        goto label_70;
    }
    if (dl == 0x2e) {
        goto label_71;
    }
label_20:
    if (*((rbx + rax)) != 0x66) {
        goto label_72;
    }
    rax++;
    r13 = rbx + rax;
    edx = *(r13);
    if (dl != 0) {
        goto label_73;
    }
    goto label_74;
label_7:
    edx = esi;
label_8:
    rax = rcx;
    if (dl == 0) {
        goto label_6;
    }
label_73:
    rcx = rax + 1;
    esi = *((rbx + rax + 1));
    if (dl != 0x25) {
        goto label_7;
    }
    if (sil != 0x25) {
        goto label_75;
    }
    rcx = rax + 2;
    edx = *((rbx + rax + 2));
    goto label_8;
label_65:
    *(0x00610398) = 1;
    r13++;
    rcx = rbx + r13;
    goto label_9;
label_66:
    r13++;
    r15d = 1;
    rcx = rbx + r13;
    goto label_9;
label_61:
    if (ebx != 0) {
        goto label_10;
    }
label_12:
    eax = imp.__libc_start_main;
    eax -= 2;
    if (eax <= 1) {
        goto label_10;
    }
    eax = 2;
    goto label_11;
label_62:
    edx = 5;
    rax = dcgettext (0, "failed to convert some of the input numbers");
    eax = 0;
    error (0, 0, rax);
    goto label_12;
label_47:
    edx = 5;
    rax = dcgettext (0, "failed to set locale");
    eax = 0;
    error (0, 0, rax);
    goto label_13;
label_63:
    edx = 5;
    rax = dcgettext (0, "--header ignored with command-line input");
    eax = 0;
    error (0, 0, rax);
    eax = *(0x006102fc);
    if (r12d <= eax) {
        goto label_10;
    }
    goto label_14;
label_49:
    if (rbx != 0) {
        goto label_15;
    }
    goto label_16;
label_54:
    rax = fcn_00407d80 (r13);
    *(0x00610360) = rax;
    goto label_17;
label_60:
    edx = 5;
    rax = dcgettext (0, "error reading input");
    rax = errno_location ();
    eax = 0;
    error (0, *(rax), rbp);
    goto label_3;
label_69:
    edx = 5;
    *(rsp) = r8;
    *((rsp + 8)) = r9;
    rax = dcgettext (0, "--format padding overriding --padding");
    eax = 0;
    error (0, 0, rax);
    r9 = *((rsp + 8));
    r8 = *(rsp);
label_68:
    if (r9 < 0) {
        goto label_76;
    }
    if (r15b != 0) {
        goto label_18;
    }
    *(0x00610380) = r9;
    goto label_19;
label_71:
    *(r8) = 0;
    r15 = rbx + rax + 1;
    *(rsp) = r8;
    rax = strtol (r15, r13, 0xa);
    r8 = *(rsp);
    *(0x00610260) = rax;
    if (*(r8) == 0x22) {
        goto label_77;
    }
    if (rax < 0) {
        goto label_77;
    }
    rax = ctype_b_loc ();
    rcx = *(r15);
    rax = *(rax);
    if ((*((rax + rcx*2)) & 1) != 0) {
        goto label_77;
    }
    if (cl == 0x2b) {
        goto label_77;
    }
    rax = *((rsp + 0x18));
    rax -= rbx;
    goto label_20;
label_76:
    *(0x00610258) = 0;
    r9 = -r9;
    *(0x00610380) = r9;
    goto label_19;
label_50:
    if (rbx != 0) {
        goto label_15;
    }
    goto label_5;
label_74:
    if (r14 == 0) {
        goto label_17;
    }
    goto label_21;
label_41:
    fcn_00404360 (0);
label_52:
    rax = fcn_00407590 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "format %s has no %% directive");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_67:
    rax = fcn_00407590 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid format %s (width overflow)");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_46:
    edx = 5;
    rax = dcgettext (0, "--grouping cannot be combined with --format");
    eax = 0;
    error (1, 0, rax);
label_64:
    edx = 5;
    rax = dcgettext (0, "grouping cannot be combined with --to");
    eax = 0;
    error (1, 0, rax);
label_75:
    rax = fcn_00407590 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "format %s has too many %% directives");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_72:
    rax = fcn_00407590 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid format %s, directive must be %%[0]['][-][N][.][N]f");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_70:
    rax = fcn_00407590 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "format %s ends in %%");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_77:
    rax = fcn_00407590 (rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid precision in format %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_31:
    rax = fcn_00407590 (*(0x00610570));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid padding value %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_32:
    edx = 5;
    rax = dcgettext (0, "multiple field specifications");
    eax = 0;
    error (1, 0, rax);
label_42:
    edx = 5;
    rax = dcgettext (0, "the delimiter must be a single character");
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4028fb */
#include <stdint.h>
 
int32_t fcn_004028fb (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x402951 */
#include <stdint.h>
 
int64_t fcn_00402951 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00610328) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x60fe48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00610330) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_004028fb ();
    *(0x00610328) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4029a8 */
#include <stdint.h>
 
int64_t fcn_004029a8 (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4029b0 */
#include <stdint.h>
 
uint64_t fcn_004029b0 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rax = strlen (rdi);
    *(rsp) = 0;
    if (rax != 0) {
        rbx = rax;
        r12 = rax - 1;
        eax = *((rbp + rax - 1));
        eax -= 0x30;
        if (eax > 9) {
            goto label_1;
        }
    }
    r9 = rbp;
    r12d = 0;
    do {
label_0:
        eax = fcn_00408550 (r9, rsp, 0xa, rsp + 8, "KMGTPEZY");
        if (eax != 0) {
            goto label_2;
        }
        rax = *(rsp);
        if (*(rax) != 0) {
            goto label_2;
        }
        rbx = *((rsp + 8));
        if (rbx == 0) {
            goto label_2;
        }
        free (r12);
        rax = rbx;
        return rax;
label_1:
        rax = fcn_00407b50 (rbx + 2);
        r12 += rax;
        *(rsp) = r12;
        rax = memcpy (rax, rbp, rbx);
        r9 = rax;
        if (*(r12) != 0x69) {
            goto label_3;
        }
        if (rbx == 1) {
            goto label_3;
        }
        eax = *((r12 - 1));
        eax -= 0x30;
        if (eax <= 9) {
            goto label_3;
        }
        *(r12) = 0;
        r8d = "KMGTPEZY";
        r12 = r9;
    } while (1);
label_3:
    rax = r12 + 2;
    r8d = "KMGTPEZY0";
    *(rsp) = rax;
    eax = 0x42;
    *((r12 + 1)) = ax;
    r12 = r9;
    goto label_0;
label_2:
    free (r12);
    rax = fcn_00407590 (rbp);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid unit size: %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x402af0 */
#include <stdint.h>
 
int32_t fcn_00402af0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdx;
    rcx = *(rdi);
    if (rcx == 0) {
        goto label_1;
    }
    edx = *(rcx);
    edx -= 0x30;
    if (edx > 9) {
        goto label_1;
    }
    rcx++;
    eax = 0;
    r8d = 0;
    r9d = 1;
    *(fp_stack--) = 0.0;
    do {
        *(fp_stack--) = 0.0;
        __asm ("fucompi st(1)");
        __asm ("setp sil");
        if (rcx != 0) {
            esi = r9d;
        }
        if (sil != 0) {
            goto label_2;
        }
        if (edx != 0) {
            goto label_2;
        }
label_0:
        if (r8d > 0x12) {
            if (r8d > 0x1b) {
                goto label_3;
            }
            eax = 1;
        }
        *(fp_stack--) = *(0x0040c130);
        *((rsp + 0xc)) = edx;
        *(rdi) = rcx;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((rsp + 0xc));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        if (rcx == 0) {
            goto label_4;
        }
        edx = *(rcx);
        rcx++;
        edx -= 0x30;
        if (edx > 9) {
            goto label_4;
        }
    } while (1);
label_1:
    rdx = *(0x0061033c);
    eax = strncmp (rcx, *(0x00610340), rdx);
    edx = eax;
    eax = 3;
    if (edx != 0) {
        goto label_5;
    }
    eax = 0;
    *(fp_stack--) = 0.0;
label_4:
    if (*(rbx) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
    ? = fp_stack[0];
    fp_stack--;
    do {
label_5:
        return eax;
label_2:
        r8d++;
        goto label_0;
label_3:
        fp_stack++;
        eax = 2;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x402bd0 */
#include <stdint.h>
 
uint64_t fcn_00402bd0 (int64_t arg1) {
    rdi = arg1;
    *(0x00610388) = rsi;
    rax = fcn_00407bb0 (*(0x00610390), rdi + 1);
    *(0x00610390) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x402c00 */
#include <stdint.h>
 
void fcn_00402c00 (int64_t arg1, uint32_t arg2) {
    uint32_t var_10h;
    int64_t var_20h;
    int64_t var_40h_2;
    int64_t var_40h;
    int64_t var_4ch;
    int64_t var_4eh;
    int64_t var_60h_2;
    uint32_t var_5eh;
    uint32_t var_5fh;
    char ** s1;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_71h;
    int64_t var_b0h;
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = imp.__libc_start_main;
    if (rax != 0) {
        goto label_54;
    }
    goto label_55;
    do {
        if (rbp >= rdx) {
            if (rbp <= *((rax + 8))) {
                goto label_56;
            }
        }
        rax += 0x10;
label_54:
        rdx = *(rax);
    } while (rdx != -1);
    do {
        rsi = stdout;
        rdi = r12;
        ebx = 1;
        fputs_unlocked ();
label_0:
        eax = ebx;
        return rax;
label_55:
    } while (rsi != 1);
label_56:
    r13 = imp.__libc_start_main;
    if (r13 != 0) {
        rax = strlen (r12);
        rbx = rax;
        rax = strlen (r13);
        if (rbx <= rax) {
            goto label_11;
        }
        rbx -= rax;
        rbx += r12;
        eax = strcmp (r13, rbx);
        edx = *(0x00610338);
        if (eax != 0) {
            goto label_57;
        }
        *(rbx) = 0;
        if (dl != 0) {
            goto label_58;
        }
    }
label_11:
    ebx = *(r12);
    if (bl == 0) {
        goto label_59;
    }
    rax = ctype_b_loc ();
    r13 = r12;
    rax = *(rax);
    while ((*((rax + rbx*2)) & 1) != 0) {
        r13++;
        ebx = *(r13);
        if (bl == 0) {
            goto label_60;
        }
    }
label_60:
    eax = r12d;
    eax -= r13d;
label_16:
    edx = imp.__libc_start_main;
    if (edx == 0) {
        goto label_61;
    }
    if (eax != 0) {
        goto label_62;
    }
    if (rbp > 1) {
        goto label_62;
    }
    *(0x00610380) = 0;
label_4:
    if (*(0x00610338) != 0) {
        goto label_63;
    }
    eax = imp.__libc_start_main;
    xmm2 = 0;
    *(rsp) = xmm2;
    *(fp_stack--) = *(rsp);
    *((rsp + 0x10)) = eax;
    eax -= 3;
    ebx -= ebx;
    ? = fp_stack[0];
    fp_stack--;
    ebx &= 0x18;
    ebx += 0x3e8;
label_1:
    edx = 0;
    rax = r13;
    if (*(r13) == 0x2d) {
        rax = r13 + 1;
        edx = 1;
    }
    *((rsp + 0x5e)) = dl;
    *((rsp + 0x60)) = rax;
    eax = fcn_00402af0 (rsp + 0x60, rsp + 0x70, rsp + 0x5e);
    if (eax > 1) {
        goto label_64;
    }
    r15 = *(0x0061033c);
    r14 = *((rsp + 0x60));
    eax = strncmp (r14, *(0x00610340), r15);
    if (eax == 0) {
        goto label_65;
    }
    r14d = 0;
label_2:
    if (*(0x00610338) != 0) {
        goto label_66;
    }
label_10:
    r15 = *((rsp + 0x60));
    edx = *(r15);
    *((rsp + 0x20)) = dl;
    if (dl == 0) {
        goto label_67;
    }
    rax = ctype_b_loc ();
    edx = *((rsp + 0x20));
    rsi = *(rax);
    rax = r15;
    while ((*((rsi + rcx*2)) & 1) != 0) {
        *((rsp + 0x60)) = rax;
        edx = *((r15 + 1));
        ecx = (int32_t) dl;
        r15 = rax;
        rax = rax + 1;
    }
    esi = (int32_t) dl;
    *((rsp + 0x20)) = dl;
    rax = strchr ("KMGTPEZY", rsi);
    if (rax == 0) {
        goto label_68;
    }
    r11d = *((rsp + 0x10));
    if (r11d == 0) {
        goto label_69;
    }
    edx = *((rsp + 0x20));
    r8d = 0;
    edx -= 0x45;
    if (dl <= 0x15) {
        edx = (int32_t) dl;
        r8d = *((rdx*4 + 0x40bd20));
    }
    rax = r15 + 1;
    *((rsp + 0x60)) = rax;
    if (*((rsp + 0x10)) == 1) {
        goto label_70;
    }
    if (*((rsp + 0x10)) == 4) {
        goto label_71;
    }
label_14:
    *((rsp + 0x10)) = ebx;
    *(fp_stack--) = *((rsp + 0x10));
    edx = *(0x00610338);
label_30:
    if (r8d == 0) {
        goto label_72;
    }
    eax = r8d;
    *(fp_stack--) = fp_stack[0];
    eax--;
    if (eax == 0) {
        goto label_73;
    }
    do {
        fp_stack[0] *= fp_stack[1];
        eax--;
    } while (eax != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    r14d = 0;
label_9:
    if (dl != 0) {
        goto label_74;
    }
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    ? = fp_stack[0];
    fp_stack--;
    goto label_13;
label_12:
    fp_stack++;
label_13:
    rsi = *((rsp + 0x60));
    if (rsi == 0) {
        goto label_75;
    }
    if (*(rsi) == 0) {
        goto label_75;
    }
    if (*(0x006103a8) != 3) {
        rax = fcn_00407570 (1, rsi);
        r15 = rax;
        rax = fcn_00407570 (0, r13);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "invalid suffix in input %s: %s");
        r8 = r15;
        rcx = rbx;
        eax = 0;
        error (*(0x0061025c), 0, rax);
    }
label_5:
    rax = *(0x00610270);
    rdx = *(0x00610268);
    *(fp_stack--) = fp_stack[?];
    if (rax == 1) {
        goto label_76;
    }
label_6:
    *((rsp + 0x10)) = rax;
    *(fp_stack--) = *((rsp + 0x10));
    if (rax < 0) {
        fp_stack[0] += *(0x0040c138);
    }
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((rsp + 0x10)) = rdx;
    *(fp_stack--) = *((rsp + 0x10));
    if (rdx < 0) {
        goto label_77;
    }
label_3:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
label_7:
    if (ebp <= 1) {
        goto label_78;
    }
    fp_stack++;
    goto label_8;
label_20:
    fp_stack++;
label_8:
    rsi = stdout;
    rdi = r12;
    ebx = 0;
    eax = fputs_unlocked ();
    goto label_0;
label_63:
    rcx = imp.__libc_start_main;
    rdi = stderr;
    edx = "setting Auto-Padding to %ld characters\n";
    eax = 0;
    esi = 1;
    fprintf_chk ();
label_61:
    ecx = imp.__libc_start_main;
    xmm1 = 0;
    eax = *(0x00610338);
    *((rsp + 0x60)) = 0;
    *(rsp) = xmm1;
    *(fp_stack--) = *(rsp);
    edx = rcx - 3;
    *((rsp + 0x10)) = ecx;
    ebx -= ebx;
    ? = fp_stack[0];
    fp_stack--;
    ebx &= 0x18;
    ebx += 0x3e8;
    if (al == 0) {
        goto label_1;
    }
    rax = fcn_00407570 (1, *(0x00610340));
    r14 = rax;
    rax = fcn_00407570 (0, r13);
    rdi = stderr;
    r9d = 0x12;
    r8 = r14;
    rcx = rax;
    edx = "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n";
    esi = 1;
    eax = 0;
    fprintf_chk ();
    goto label_1;
label_65:
    *(fp_stack--) = *(rsp);
    r14 += r15;
    *((rsp + 0x60)) = r14;
    ? = fp_stack[0];
    fp_stack--;
    if (*(r14) == 0x2d) {
        r14++;
        eax = 1;
    }
    *((rsp + 0x5f)) = al;
    *((rsp + 0x68)) = r14;
    eax = fcn_00402af0 (rsp + 0x68, rsp + 0xb0, rsp + 0x5f);
    if (eax > 1) {
        goto label_79;
    }
    eax = 1;
    if (eax == 1) {
    }
    if (*((rsp + 0x5f)) != 0) {
        goto label_80;
    }
    rdx = *((rsp + 0x68));
    *(fp_stack--) = fp_stack[?];
    r14 = rdx;
    r14 -= *((rsp + 0x60));
    if (r14d == 0) {
        goto label_47;
    }
    eax = r14d;
    eax--;
    if (eax == 0) {
        goto label_81;
    }
    *(fp_stack--) = *(0x0040c130);
    *(fp_stack--) = fp_stack[0];
    do {
        fp_stack[0] *= fp_stack[1];
        eax--;
    } while (eax != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
label_47:
    *(fp_stack--) = fp_stack[?];
    if (*((rsp + 0x5e)) != 0) {
        goto label_82;
    }
    fp_stack[0] += fp_stack[1];
    fp_stack++;
label_17:
    ? = fp_stack[0];
    fp_stack--;
    *((rsp + 0x60)) = rdx;
    goto label_2;
label_77:
    fp_stack[0] += *(0x0040c138);
    goto label_3;
label_62:
    rax = strlen (r12);
    *(0x00610380) = rax;
    if (rax < *(0x00610388)) {
        goto label_4;
    }
    fcn_00402bd0 (rax);
    goto label_4;
label_75:
    if (ebp != 1) {
        goto label_5;
    }
    if (*(0x00610348) == 0) {
        goto label_5;
    }
    rax = fcn_00407590 (r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "large input value %s: possible precision loss");
    rcx = rbx;
    eax = 0;
    eax = error (0, 0, rax);
    goto label_5;
label_79:
label_64:
    if (ebp > 6) {
        goto label_83;
    }
    eax = ebp;
    /* switch table (7 cases) at 0x40bbe0 */
label_76:
    if (rdx != 1) {
        goto label_6;
    }
    goto label_7;
label_78:
    rax = *(0x00610260);
    *(fp_stack--) = fp_stack[?];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    if (rax != -1) {
        r14 = rax;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if (fp_stack[0] < fp_stack[1]) {
        goto label_84;
    }
    *(fp_stack--) = fp_stack[?];
    __asm ("fcompi st(1)");
    if (fp_stack[0] < fp_stack[1]) {
        goto label_84;
    }
    *(fp_stack--) = fp_stack[0];
    eax = 0;
    *(fp_stack--) = *(0x0040c130);
    while (eax >= 0) {
        fp_stack[0] /= fp_stack[2];
        fp_stack++;
        eax++;
        *(fp_stack--) = 0.0;
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] = -fp_stack[0];
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        __asm ("fcompi st(3)");
        __asm ("fcmovbe st(0), st(2)");
        *(fp_stack--) = fp_stack[1];
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        __asm ("fcompi st(1)");
    }
    fp_stack++;
    fp_stack++;
    fp_stack++;
    ebx = imp.__libc_start_main;
    if (ebx == 0) {
        edx = eax;
        rdx += r14;
        if (rdx > 0x12) {
            goto label_85;
        }
    }
    if (eax <= 0x1a) {
        goto label_86;
    }
    ? = fp_stack[0];
    fp_stack--;
    if (*(0x006103a8) == 3) {
        goto label_8;
    }
    edx = 5;
    rax = dcgettext (0, "value too large to be printed: '%Lg' (cannot handle values > 999Y)");
    *(fp_stack--) = fp_stack[?];
    eax = 0;
    ? = fp_stack[0];
    fp_stack--;
    error (*(0x0061025c), 0, rax);
    goto label_8;
label_84:
    ebx = imp.__libc_start_main;
    if (ebx == 0) {
        if (r14 > 0x12) {
            goto label_85;
        }
    }
label_86:
    ebp = *(0x00610278);
    *((rsp + 0x70)) = 0x25;
    rax = rsp + 0x70;
    r12 = rsp + 0x71;
    r13d = imp.__libc_start_main;
    if (r13d != 0) {
        *((rsp + 0x71)) = 0x27;
        r12 = rax + 2;
    }
    r9 = imp.__libc_start_main;
    if (r9 != 0) {
        goto label_87;
    }
label_19:
    ecx = *(0x00610338);
    if (cl != 0) {
        goto label_88;
    }
label_18:
    if (ebx == 0) {
        goto label_89;
    }
    eax = rbx - 3;
    if (eax <= 1) {
        goto label_90;
    }
    xmm3 = *(0x0040c148);
    *((rsp + 0x20)) = 0x3e8;
    *((rsp + 0x10)) = xmm3;
label_32:
    *(fp_stack--) = fp_stack[?];
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if (fp_stack[0] < fp_stack[1]) {
        goto label_91;
    }
    *(fp_stack--) = fp_stack[?];
    __asm ("fcompi st(1)");
    if (fp_stack[0] < fp_stack[1]) {
        goto label_91;
    }
    *(fp_stack--) = *((rsp + 0x20));
    r13d = 0;
    *(fp_stack--) = fp_stack[1];
    while (r13d >= 0) {
        fp_stack[0] /= fp_stack[1];
        r13d++;
        *(fp_stack--) = 0.0;
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] = -fp_stack[0];
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        __asm ("fcompi st(2)");
        __asm ("fcmovbe st(0), st(1)");
        __asm ("fcompi st(2)");
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
label_31:
    if (cl != 0) {
        goto label_92;
    }
label_42:
    rsi = *(0x00610260);
    if (rsi == -1) {
        goto label_93;
    }
    eax = r13 * 3;
    if (rax > rsi) {
        rax = rsi;
    }
    edi = eax;
    if (eax == 0) {
        goto label_94;
    }
    eax--;
    if (eax == 0) {
        goto label_95;
    }
    *(fp_stack--) = *(0x0040c130);
    edx = eax;
    *(fp_stack--) = fp_stack[0];
    do {
        fp_stack[0] *= fp_stack[1];
        edx--;
    } while (edx != 0);
    fp_stack[0] *= fp_stack[2];
    fp_stack++;
    *(fp_stack--) = fp_stack[?];
    edx = *((rsp + 0x4e));
    *(fp_stack--) = fp_stack[2];
    dh |= 0xc;
    *((rsp + 0x4c)) = dx;
    fp_stack[0] /= fp_stack[1];
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[2] -= fp_stack[0];
    *(fp_stack--) = *((rsp + 0x10));
    if (ebp > 4) {
        goto label_96;
    }
    /* switch table (5 cases) at 0x40bc18 */
label_67:
    if (*((rsp + 0x10)) == 4) {
        goto label_97;
    }
    edx = *(0x00610338);
    r8d = 0;
    *(fp_stack--) = 1.0;
    goto label_9;
label_66:
    rdi = stderr;
    ecx = r14d;
    eax = 0;
    edx = "  parsed numeric value: %Lf\n  input precision = %d\n";
    esi = 1;
    fprintf_chk ();
    goto label_10;
label_57:
    if (dl == 0) {
        goto label_11;
    }
    eax = fwrite ("no valid suffix found\n", 1, 0x16, *(obj.stderr));
    goto label_11;
label_74:
    rdi = stderr;
    eax = 0;
    ecx = ebx;
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    edx = "  suffix power=%d^%d = %Lf\n";
    esi = 1;
    ? = fp_stack[0];
    fp_stack--;
    eax = fprintf_chk ();
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    if (*(0x00610338) == 0) {
        goto label_12;
    }
    edx = "  returning value: %Lf (%LG)\n";
    esi = 1;
    eax = 0;
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    rdi = stderr;
    ? = fp_stack[0];
    fp_stack--;
    fprintf_chk ();
    goto label_13;
label_97:
    ebx = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
label_15:
    if (*(0x006103a8) == 3) {
        goto label_5;
    }
    rax = fcn_00407590 (r13);
    edx = 5;
    r13 = rax;
    rax = dcgettext (0, rbx);
    rcx = r13;
    eax = 0;
    error (*(0x0061025c), 0, rax);
    goto label_5;
label_71:
    if (*((r15 + 1)) != 0x69) {
        goto label_98;
    }
    r15 += 2;
    *((rsp + 0x60)) = r15;
    goto label_14;
    r14d = 0;
    ebx = "value too large to be converted: %s";
    goto label_15;
    r14d = 0;
    ebx = "invalid suffix in input: %s";
    goto label_15;
label_89:
    esi = r14d;
    if (r14d == 0) {
        goto label_99;
    }
    eax = r14d;
    eax--;
    if (eax == 0) {
        goto label_100;
    }
    *(fp_stack--) = *(0x0040c130);
    edx = eax;
    *(fp_stack--) = fp_stack[0];
    do {
        fp_stack[0] *= fp_stack[1];
        edx--;
    } while (edx != 0);
    fp_stack[0] *= fp_stack[2];
    *(fp_stack--) = fp_stack[?];
    edx = *((rsp + 0x4e));
    *(fp_stack--) = fp_stack[1];
    dh |= 0xc;
    fp_stack[0] /= fp_stack[1];
    *((rsp + 0x4c)) = dx;
    *((rsp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x10));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[1] -= fp_stack[0];
    if (ebp > 4) {
        goto label_101;
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
    goto label_102;
label_44:
    fp_tmp_6 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    goto label_102;
label_49:
    fp_tmp_7 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    /* switch table (5 cases) at 0x40bc40 */
label_102:
label_58:
    rax = fcn_00407590 (r13);
    edx = "trimming suffix %s\n";
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    eax = fprintf_chk ();
    goto label_11;
    r14d = 0;
    ebx = "rejecting suffix in input: %s (consider using --from)";
    goto label_15;
label_59:
    r13 = r12;
    eax = 0;
    goto label_16;
label_82:
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    goto label_17;
    r14d = 0;
    ebx = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
    goto label_15;
label_88:
    ? = fp_stack[0];
    fp_stack--;
    eax = fwrite ("double_to_human:\n", 1, 0x11, *(obj.stderr));
    ecx = *(0x00610338);
    *(fp_stack--) = fp_stack[?];
    goto label_18;
label_87:
    rdi = r12;
    r8d = "0%ld";
    ecx = 0x3f;
    eax = 0;
    edx = 1;
    esi = 0x3e;
    ? = fp_stack[0];
    fp_stack--;
    rax = snprintf_chk ();
    *(fp_stack--) = fp_stack[?];
    rax = (int64_t) eax;
    r12 += rax;
    goto label_19;
label_83:
    r14d = 0;
    ebx = 0;
    goto label_15;
label_85:
    if (*(0x006103a8) == 3) {
        goto label_20;
    }
    ebx = *(0x0061025c);
    ? = fp_stack[0];
    fp_stack--;
    edx = 5;
    if (r14 == 0) {
        goto label_103;
    }
    rax = dcgettext (0, "value/precision too large to be printed: '%Lg/%lu' (consider using --to)");
    *(fp_stack--) = fp_stack[?];
    rcx = r14;
    eax = 0;
    ? = fp_stack[0];
    fp_stack--;
    error (ebx, 0, rax);
    goto label_8;
label_80:
    r14d = 0;
    ebx = "invalid number: %s";
    goto label_15;
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    *(rsp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(rsp);
label_21:
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    if (esi == 0) {
        goto label_28;
    }
    eax = esi;
    *(fp_stack--) = *(0x0040c130);
    eax--;
    if (eax == 0) {
        goto label_104;
    }
label_53:
    *(fp_stack--) = fp_stack[0];
    do {
        fp_stack[0] *= fp_stack[1];
        eax--;
    } while (eax != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
label_28:
    r9d = r14d;
    if (cl != 0) {
        fp_tmp_9 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_9;
        ? = fp_stack[0];
        fp_stack--;
        eax = "  no scaling, returning value: %.*Lf\n";
        ecx = r14d;
        edx = "  no scaling, returning (grouped) value: %'.*Lf\n";
        rdi = stderr;
        esi = 1;
        *((rsp + 0x20)) = r14d;
        if (r13d == 0) {
            rdx = rax;
        }
        eax = 0;
        *(fp_stack--) = fp_stack[0];
        ? = fp_stack[0];
        fp_stack--;
        ? = fp_stack[0];
        fp_stack--;
        eax = fprintf_chk ();
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        r9d = *((rsp + 0x20));
    } else {
        fp_tmp_10 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_10;
    }
    ? = fp_stack[0];
    fp_stack--;
    eax = 0;
    ecx = 0x80;
    edx = 1;
    rbp = rsp + 0xb0;
    esi = 0x80;
    *(r12) = 0x664c2a2e;
    r8 = rsp + 0x80;
    rdi = rbp;
    *((r12 + 4)) = 0;
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    ? = fp_stack[0];
    fp_stack--;
    eax = snprintf_chk ();
    *(fp_stack--) = fp_stack[?];
    if (eax > 0x7f) {
        goto label_105;
    }
    fp_stack++;
    *(fp_stack--) = fp_stack[?];
    ebx = *(0x00610338);
label_43:
    rsi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_106;
    }
label_23:
    rdx = rbp;
    do {
        ecx = *(rdx);
        rdx += 4;
        eax = rcx - 0x1010101;
        ecx = ~ecx;
        eax &= ecx;
        eax &= 0x80808080;
    } while (eax == 0);
    ecx = eax;
    rdi = rbp;
    ? = fp_stack[0];
    fp_stack--;
    ecx >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = ecx;
    }
    rcx = rdx + 2;
    if ((eax & 0x8080) == 0) {
        rdx = rcx;
    }
    ecx = eax;
    cl += al;
    rax = rbp;
    ecx = 0x80;
    rdx -= 3;
    rax -= rdx;
    rdx = rax + 0x7f;
    strncat_chk ();
    *(fp_stack--) = fp_stack[?];
label_106:
    if (bl != 0) {
        ? = fp_stack[0];
        fp_stack--;
        rax = fcn_00407590 (rbp);
        *(fp_stack--) = fp_stack[?];
        edx = "formatting output:\n  value: %Lf\n  humanized: %s\n";
        rdi = stderr;
        rcx = rax;
        esi = 1;
        eax = 0;
        ? = fp_stack[0];
        fp_stack--;
        fprintf_chk ();
    } else {
        fp_stack++;
    }
label_24:
    rsi = imp.__libc_start_main;
    rcx = rbp;
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
    rdx = imp.__libc_start_main;
    edi = eax;
    dil += al;
    rcx -= 3;
    rcx -= rbp;
    if (rsi != 0) {
        if (rsi > rcx) {
            goto label_107;
        }
    }
    rdi = rcx + 1;
    if (rdi >= rdx) {
        fcn_00402bd0 (rdi);
    }
    strcpy (*(0x00610390), rbp);
label_40:
    rdi = imp.__libc_start_main;
    rsi = stdout;
    if (rdi != 0) {
        fputs_unlocked ();
        rsi = stdout;
    }
    rdi = imp.__libc_start_main;
    ebx = 1;
    fputs_unlocked ();
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_0;
    }
    rsi = stdout;
    fputs_unlocked ();
    goto label_0;
    *(fp_stack--) = 0.0;
    __asm ("fcompi st(2)");
    if (rdi > 0) {
        goto label_108;
    }
    fp_tmp_11 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    *(fp_stack--) = fp_stack[0];
    *(rsp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(rsp);
    fp_tmp_12 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_12;
    __asm ("fcompi st(1)");
    if (rdi <= 0) {
        goto label_21;
    }
    fp_stack++;
label_22:
    rax = *(rsp);
    rax++;
    *(rsp) = rax;
    *(fp_stack--) = *(rsp);
    goto label_21;
    fp_tmp_13 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_13;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = fp_stack[0];
    *((rsp + 0x40)) = fp_stack[0];
    fp_stack--;
label_48:
    rax = *((rsp + 0x40));
    edx = 0;
    *(rsp) = rax;
    *(fp_stack--) = *(rsp);
    fp_tmp_14 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_14;
    __asm ("fcompi st(1)");
    fp_stack++;
    dl = (rax > 0) ? 1 : 0;
    rax += rdx;
    rax = -rax;
    *(rsp) = rax;
    *(fp_stack--) = *(rsp);
    goto label_21;
    *(fp_stack--) = 0.0;
    __asm ("fcompi st(2)");
    if (rax > 0) {
        goto label_109;
    }
    fp_tmp_15 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_15;
    fp_stack[0] += *(0x0040c13c);
    *(rsp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(rsp);
    goto label_21;
    fp_tmp_16 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_16;
    *(fp_stack--) = fp_stack[0];
    *(rsp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(rsp);
    fp_tmp_17 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_17;
    __asm ("fcompi st(1)");
    if (rax <= 0) {
        goto label_21;
    }
    fp_stack++;
    goto label_22;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_tmp_18 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_18;
    fp_tmp_19 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_19;
    edi = 1;
    goto label_37;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_tmp_20 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_20;
    fp_tmp_21 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_21;
    goto label_37;
label_25:
    fp_tmp_22 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_22;
label_37:
    *(fp_stack--) = fp_stack[0];
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    fp_tmp_23 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_23;
    __asm ("fcompi st(1)");
    if (rax > 0) {
        fp_stack++;
        rax = *((rsp + 0x20));
        rax++;
        *((rsp + 0x20)) = rax;
        *(fp_stack--) = *((rsp + 0x20));
    }
label_26:
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    if (edi == 0) {
        goto label_29;
    }
    eax = edi;
    *(fp_stack--) = *(0x0040c130);
    eax--;
    if (eax == 0) {
        goto label_110;
    }
label_27:
    *(fp_stack--) = fp_stack[0];
    do {
        fp_stack[0] *= fp_stack[1];
        eax--;
    } while (eax != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
label_29:
    *(fp_stack--) = 0.0;
    __asm ("fcompi st(1)");
    if (eax > 0) {
        goto label_111;
    }
label_52:
    if (fp_stack[0] >= fp_stack[1]) {
        goto label_112;
label_33:
        fp_stack++;
label_112:
        r13d++;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
    } else {
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = 0.0;
    fp_tmp_24 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_24;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if (fp_stack[0] == fp_stack[1]) {
        goto label_113;
    }
    if (fp_stack[0] != fp_stack[1]) {
        goto label_113;
    }
    r9d = 0;
label_34:
    if (cl != 0) {
        goto label_114;
    }
label_39:
    edi = 0x7325;
    eax = "(error)";
    *(r12) = 0x664c2a2e;
    *((r12 + 4)) = di;
    if (rsi != -1) {
        r9d = esi;
    }
    *((r12 + 6)) = 0;
    if (r13d <= 8) {
        fp_tmp_25 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_25;
        eax = r13d;
        rax = *((rax*8 + 0x40bcc0));
    } else {
        fp_tmp_26 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_26;
    }
    ? = fp_stack[0];
    fp_stack--;
    ecx = 0x80;
    edx = 1;
    rbp = rsp + 0xb0;
    esi = 0x7f;
    rdi = rbp;
    eax = 0;
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    r8 = rsp + 0x90;
    ? = fp_stack[0];
    fp_stack--;
    eax = snprintf_chk ();
    *(fp_stack--) = fp_stack[?];
    if (eax > 0x7e) {
        goto label_115;
    }
    if (r13d != 0) {
        if (ebx == 4) {
            goto label_116;
        }
    }
label_46:
    ebx = *(0x00610338);
    if (bl != 0) {
        goto label_117;
    }
    rsi = imp.__libc_start_main;
    if (rsi != 0) {
        goto label_23;
    }
    fp_stack++;
    goto label_24;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_tmp_27 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_27;
    edi = 1;
    goto label_35;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_tmp_28 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_28;
label_35:
    *(fp_stack--) = 0.0;
    __asm ("fcompi st(3)");
    if (rsi <= 0) {
        goto label_25;
    }
    fp_tmp_29 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_29;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = fp_stack[0];
    *((rsp + 0x40)) = fp_stack[0];
    fp_stack--;
    do {
        rax = *((rsp + 0x40));
        edx = 0;
        *((rsp + 0x20)) = rax;
        *(fp_stack--) = *((rsp + 0x20));
        fp_tmp_30 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_30;
        __asm ("fcompi st(1)");
        fp_stack++;
        dl = (rsi > 0) ? 1 : 0;
        rax += rdx;
        rax = -rax;
        *((rsp + 0x20)) = rax;
        *(fp_stack--) = *((rsp + 0x20));
        goto label_26;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_tmp_31 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_31;
        edi = 1;
        goto label_38;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_tmp_32 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_32;
label_38:
        *(fp_stack--) = 0.0;
        __asm ("fcompi st(3)");
        if (rax > 0) {
            goto label_118;
        }
        fp_tmp_33 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_33;
        fp_stack[0] += *(0x0040c13c);
        *((rsp + 0x20)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((rsp + 0x20));
        goto label_26;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_tmp_34 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_34;
        fp_tmp_35 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_35;
        edi = 1;
        goto label_36;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_tmp_36 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_36;
        fp_tmp_37 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_37;
label_36:
        fp_stack[0] = -fp_stack[0];
        *(fp_stack--) = fp_stack[0];
        *((rsp + 0x40)) = fp_stack[0];
        fp_stack--;
    } while (1);
    fp_tmp_38 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_38;
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_tmp_39 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_39;
    goto label_27;
label_104:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    goto label_28;
    fp_tmp_40 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_40;
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_tmp_41 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_41;
label_110:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    goto label_29;
label_70:
    edx = *(0x00610338);
    if (*((r15 + 1)) == 0x69) {
        goto label_119;
    }
    *((rsp + 0x10)) = ebx;
    *(fp_stack--) = *((rsp + 0x10));
    goto label_30;
label_69:
    ebx = "rejecting suffix in input: %s (consider using --from)";
    goto label_15;
label_91:
    *(fp_stack--) = fp_stack[0];
    r13d = 0;
    goto label_31;
label_68:
    ebx = "invalid suffix in input: %s";
    goto label_15;
label_73:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    r14d = 0;
    r8d = 1;
    goto label_9;
label_90:
    xmm4 = *(0x0040c140);
    *((rsp + 0x20)) = 0x400;
    *((rsp + 0x10)) = xmm4;
    goto label_32;
label_111:
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    if (fp_stack[0] >= fp_stack[2]) {
        goto label_33;
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_tmp_42 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_42;
label_50:
    fp_tmp_43 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_43;
label_45:
    *(fp_stack--) = *(0x0040c130);
    al = (r13d != 0) ? 1 : 0;
    r9d = 0;
    __asm ("fcompi st(2)");
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    r9b = (r13d > 0) ? 1 : 0;
    r9d &= eax;
    goto label_34;
label_41:
    fp_stack++;
label_94:
    *(fp_stack--) = fp_stack[?];
    eax = *((rsp + 0x4e));
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] /= fp_stack[1];
    ah |= 0xc;
    *((rsp + 0x4c)) = ax;
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[1] -= fp_stack[0];
    *(fp_stack--) = *((rsp + 0x10));
    if (ebp > 4) {
        goto label_120;
    }
    /* switch table (5 cases) at 0x40bc68 */
    edi = 0;
    goto label_35;
    fp_tmp_44 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_44;
    edi = 0;
    goto label_36;
    fp_tmp_45 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_45;
    edi = 0;
    goto label_37;
    edi = 0;
    goto label_38;
    fp_tmp_46 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_46;
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    goto label_29;
label_114:
    fp_tmp_47 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_47;
    ? = fp_stack[0];
    fp_stack--;
    esi = 1;
    ecx = r13d;
    rdi = stderr;
    edx = "  after rounding, value=%Lf * %0.f ^ %u\n";
    eax = 1;
    *((rsp + 0x40)) = r9d;
    xmm0 = *((rsp + 0x20));
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    ? = fp_stack[0];
    fp_stack--;
    fprintf_chk ();
    rsi = *(0x00610260);
    r9d = *((rsp + 0x30));
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    goto label_39;
label_119:
    r15 += 2;
    *((rsp + 0x60)) = r15;
    if (dl != 0) {
        goto label_121;
    }
    *(fp_stack--) = *(0x0040c134);
    ebx = 0x400;
    goto label_30;
label_107:
    *((rsp + 0x70)) = rsi;
    fcn_00405530 (rbp, *(0x00610390), rdx, rsp + 0x70, *(0x00610258), 2);
    if (*(0x00610338) == 0) {
        goto label_40;
    }
    rax = fcn_00407590 (*(0x00610390));
    edx = "  After padding: %s\n";
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
    goto label_40;
label_93:
    *(fp_stack--) = 0.0;
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] = -fp_stack[0];
    fp_tmp_48 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_48;
    __asm ("fcompi st(2)");
    __asm ("fcmovbe st(0), st(1)");
    *(fp_stack--) = *(0x0040c130);
    *(fp_stack--) = fp_stack[0];
    __asm ("fcompi st(2)");
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    if (*(0x00610338) <= 0) {
        goto label_41;
    }
label_51:
    fp_stack[1] *= fp_stack[0];
    *(fp_stack--) = fp_stack[?];
    eax = *((rsp + 0x4e));
    *(fp_stack--) = fp_stack[2];
    ah |= 0xc;
    fp_stack[0] /= fp_stack[1];
    *((rsp + 0x4c)) = ax;
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[2] -= fp_stack[0];
    *(fp_stack--) = *((rsp + 0x10));
    if (ebp > 4) {
        goto label_122;
    }
    /* switch table (5 cases) at 0x40bc90 */
label_92:
    fp_tmp_49 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_49;
    ? = fp_stack[0];
    fp_stack--;
    ecx = r13d;
    edx = "  scaled value to %Lf * %0.f ^ %u\n";
    xmm0 = *((rsp + 0x20));
    esi = 1;
    eax = 1;
    rdi = stderr;
    *(fp_stack--) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
    ? = fp_stack[0];
    fp_stack--;
    fprintf_chk ();
    ecx = *(0x00610338);
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    goto label_42;
label_117:
    ? = fp_stack[0];
    fp_stack--;
    rax = fcn_00407590 (rbp);
    edx = "  returning value: %s\n";
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
    ebx = *(0x00610338);
    *(fp_stack--) = fp_stack[?];
    goto label_43;
label_99:
    *(fp_stack--) = fp_stack[?];
    eax = *((rsp + 0x4e));
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] /= fp_stack[1];
    ah |= 0xc;
    *((rsp + 0x4c)) = ax;
    *((rsp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x10));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] -= fp_stack[1];
    if (ebp <= 4) {
        goto label_44;
    }
    fp_stack++;
    fp_stack++;
    *(fp_stack--) = 0.0;
    goto label_28;
label_113:
    *(fp_stack--) = 0.0;
    __asm ("fcompi st(1)");
    if (ebp > 4) {
        goto label_123;
    }
    *(fp_stack--) = fp_stack[0];
    goto label_45;
label_103:
    rax = dcgettext (0, "value too large to be printed: '%Lg' (consider using --to)");
    *(fp_stack--) = fp_stack[?];
    eax = 0;
    ? = fp_stack[0];
    fp_stack--;
    rax = error (ebx, 0, rax);
    goto label_8;
label_116:
    rax = (int64_t) eax;
    edx = 0x7f;
    ecx = 0x80;
    rdi = rbp;
    rdx -= rax;
    esi = 0x40a35f;
    ? = fp_stack[0];
    fp_stack--;
    eax = strncat_chk ();
    *(fp_stack--) = fp_stack[?];
    goto label_46;
label_81:
    fp_stack[0] /= *(0x0040c130);
    goto label_47;
label_121:
    rdi = stderr;
    edx = "  Auto-scaling, found 'i', switching to base %d\n";
    ecx = 0x400;
    eax = 0;
    esi = 1;
    *((rsp + 0x10)) = r8d;
    ebx = 0x400;
    fprintf_chk ();
    r8d = *((rsp + 0x10));
    edx = *(0x00610338);
    *(fp_stack--) = *(0x0040c134);
    goto label_30;
label_108:
    fp_tmp_50 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_50;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = fp_stack[0];
    *((rsp + 0x40)) = fp_stack[0];
    fp_stack--;
    goto label_48;
label_109:
    fp_tmp_51 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_51;
    fp_stack[0] -= *(0x0040c13c);
    *(rsp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(rsp);
    goto label_21;
label_100:
    *(fp_stack--) = fp_stack[?];
    eax = *((rsp + 0x4e));
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] *= *(0x0040c130);
    ah |= 0xc;
    *((rsp + 0x4c)) = ax;
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] /= fp_stack[2];
    *((rsp + 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x10));
    fp_stack[0] *= fp_stack[2];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    if (ebp <= 4) {
        goto label_49;
    }
    fp_stack++;
    fp_stack++;
    *(fp_stack--) = 0.0;
    goto label_28;
label_118:
    fp_tmp_52 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_52;
    fp_stack[0] -= *(0x0040c13c);
    *((rsp + 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((rsp + 0x20));
    goto label_26;
label_98:
    r14d = 0;
    ebx = "missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
    goto label_15;
label_105:
    edx = 5;
    ? = fp_stack[0];
    fp_stack--;
    rax = dcgettext (0, "failed to prepare value '%Lf' for printing");
    *(fp_stack--) = fp_stack[?];
    eax = 0;
    ? = fp_stack[0];
    fp_stack--;
    error (1, 0, rax);
label_72:
    fp_stack++;
    r14d = 0;
    *(fp_stack--) = 1.0;
    goto label_9;
label_123:
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    goto label_50;
label_95:
    *(fp_stack--) = *(0x0040c130);
    goto label_51;
label_115:
    fp_stack++;
    edx = 5;
    rax = dcgettext (0, "failed to prepare value '%Lf' for printing");
    *(fp_stack--) = fp_stack[?];
    eax = 0;
    ? = fp_stack[0];
    fp_stack--;
    error (1, 0, rax);
label_96:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_tmp_53 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_53;
    *(fp_stack--) = 0.0;
    fp_tmp_54 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_54;
    fp_tmp_55 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_55;
    goto label_27;
label_120:
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    goto label_124;
label_122:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
label_124:
    *(fp_stack--) = 0.0;
    goto label_52;
label_101:
    fp_stack++;
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_tmp_56 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_56;
    goto label_53;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4041a0 */
#include <stdint.h>
 
int64_t fcn_004041a0 (int64_t arg1, uint32_t arg2) {
    uint32_t var_ch;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    r14d = 0;
    r13d = 0;
    r12d = 1;
    eax = *(0x00610254);
    *((rsp + 0xc)) = esi;
label_1:
    r14++;
    ebp = *(r15);
    if (eax == 0x80) {
        goto label_7;
    }
    edx = (int32_t) bpl;
    if (edx == eax) {
        goto label_8;
    }
    if (bpl == 0) {
        goto label_0;
    }
    rbx = r15;
    while (dl != 0) {
        if (edx == eax) {
            goto label_9;
        }
        rbx++;
        edx = *(rbx);
    }
    do {
label_0:
        al = fcn_00402c00 (r15, r14);
        eax = 0;
        if (al == 0) {
            r12d = eax;
        }
        if (*((rsp + 0xc)) != 0) {
            rdi = stdout;
            edx = *(0x00610250);
            rax = *((rdi + 0x28));
            if (rax >= *((rdi + 0x30))) {
                goto label_10;
            }
            rcx = rax + 1;
            *((rdi + 0x28)) = rcx;
            *(rax) = dl;
        }
label_6:
        eax = r12d;
        return rax;
label_7:
    } while (bpl == 0);
    rax = ctype_b_loc ();
    rbx = r15;
    rax = *(rax);
label_2:
    edx = (int32_t) bpl;
    if ((*((rax + rdx*2)) & 1) != 0) {
        goto label_11;
    }
    if (bpl == 0xa) {
        goto label_11;
    }
    edx = *(rbx);
    if (dl == 0) {
        goto label_0;
    }
label_3:
    esi = (int32_t) dl;
    if ((*((rax + rsi*2)) & 1) == 0) {
        if (dl != 0xa) {
            goto label_12;
        }
    }
    ebp = *(rbx);
label_4:
    if (bpl == 0) {
        goto label_0;
    }
label_9:
    *(rbx) = 0;
    al = fcn_00402c00 (r15, r14);
    rdi = stdout;
    esi = 0x20;
    eax = *(0x00610254);
    if (al == 0) {
        r12d = r13d;
    }
    rdx = *((rdi + 0x28));
    if (eax != 0x80) {
        esi = eax;
    }
    if (rdx >= *((rdi + 0x30))) {
        goto label_13;
    }
    r8 = rdx + 1;
    *((rdi + 0x28)) = r8;
    *(rdx) = sil;
label_5:
    r15 = rbx + 1;
    goto label_1;
label_11:
    rbx++;
    ebp = *(rbx);
    if (bpl != 0) {
        goto label_2;
    }
    goto label_0;
label_12:
    rbx++;
    edx = *(rbx);
    if (dl != 0) {
        goto label_3;
    }
    goto label_0;
label_8:
    rbx = r15;
    goto label_4;
label_13:
    esi = (int32_t) sil;
    overflow ();
    eax = *(0x00610254);
    goto label_5;
label_10:
    esi = (int32_t) dl;
    overflow ();
    goto label_6;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x404360 */
#include <stdint.h>
 
uint64_t fcn_00404360 (int64_t arg1) {
    int64_t var_30h;
    char * var_38h;
    int64_t var_40h;
    char * var_48h;
    char * var_50h;
    char * var_58h;
    char * var_60h;
    char * var_68h;
    char * var_70h;
    char * var_78h;
    char * var_80h;
    char * var_88h;
    int64_t var_90h;
    int64_t var_98h;
    rdi = arg1;
    edx = 5;
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
        exit (ebp);
    }
    rax = dcgettext (0, "Usage: %s [OPTION]... [NUMBER]...\n");
    rdx = rbx;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n");
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
    rax = dcgettext (0, "      --debug          print warnings about invalid input\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --field=FIELDS   replace the numbers in these input fields (default=1)\n                         see FIELDS below\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --format=FORMAT  use printf style floating-point FORMAT;\n                         see FORMAT below for details\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --from=UNIT      auto-scale input numbers to UNITs; default is 'none';\n                         see UNIT below\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --from-unit=N    specify the input unit size (instead of the default 1)\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n                         (which means it has no effect in the C/POSIX locale)\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --header[=N]     print (without converting) the first N header lines;\n                         N defaults to 1 if not specified\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n                         abort (default), fail, warn, ignore\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --padding=N      pad the output to N characters; positive N will\n                         right-align; negative N will left-align;\n                         padding is ignored if the output is wider than N;\n                         the default is to automatically pad if a whitespace\n                         is found\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n                         up, down, from-zero (default), towards-zero, nearest\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n                         SUFFIX in input numbers\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "      --to-unit=N      the output unit size (instead of the default 1)\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  -z, --zero-terminated    line delimiter is NUL, not newline\n");
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
    rax = dcgettext (0, "\nUNIT options:\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rbx = stdout;
    rax = dcgettext (0, "  none       no auto-scaling is done; suffixes will trigger an error\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  auto       accept optional single/two letter suffix:\n               1K = 1000,\n               1Ki = 1024,\n               1M = 1000000,\n               1Mi = 1048576,\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  si         accept optional single letter suffix:\n               1K = 1000,\n               1M = 1000000,\n               ...\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  iec        accept optional single letter suffix:\n               1K = 1024,\n               1M = 1048576,\n               ...\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "  iec-i      accept optional two-letter suffix:\n               1Ki = 1024,\n               1Mi = 1048576,\n               ...\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "\nFIELDS supports cut(1) style field ranges:\n  N    N'th field, counted from 1\n  N-   from N'th field, to end of line\n  N-M  from N'th to M'th field (inclusive)\n  -M   from first to M'th field (inclusive)\n  -    all fields\nMultiple fields/ranges can be separated with commas\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = stdout;
    edx = 5;
    rax = dcgettext (0, "\nFORMAT must be suitable for printing one floating-point argument '%f'.\nOptional quote (%'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision.\n");
    rsi = rbx;
    rdi = rax;
    fputs_unlocked ();
    rbx = imp.__libc_start_main;
    edx = 5;
    rax = dcgettext (0, "\nExit status is 0 if all input numbers were successfully converted.\nBy default, %s will stop at the first conversion error with exit status 2.\nWith --invalid='fail' a warning is printed for each conversion error\nand the exit status is 2.  With --invalid='warn' each conversion error is\ndiagnosed, but the exit status is 0.  With --invalid='ignore' conversion\nerrors are not diagnosed and the exit status is 0.\n");
    rdx = rbx;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbx = imp.__libc_start_main;
    edx = 5;
    rax = dcgettext (0, "\nExamples:\n  $ %s --to=si 1000\n            -> \"1.0K\"\n  $ %s --to=iec 2048\n           -> \"2.0K\"\n  $ %s --to=iec-i 4096\n           -> \"4.0Ki\"\n  $ echo 1K | %s --from=si\n           -> \"1000\"\n  $ echo 1K | %s --from=iec\n           -> \"1024\"\n  $ df -B1 | %s --header --field 2-4 --to=si\n  $ ls -l  | %s --header --field 5 --to=iec\n  $ ls -lh | %s --header --field 5 --from=iec --padding=10\n  $ ls -lh | %s --header --field 5 --from=iec --format %%10f\n");
    r9 = rbx;
    r8 = rbx;
    rcx = rbx;
    rsi = rax;
    rdx = rbx;
    edi = 1;
    eax = 0;
    printf_chk ();
    *((rsp + 0x30)) = 0x40a123;
    *((rsp + 0x38)) = "test invocation";
    *((rsp + 0x40)) = 0x40a19d;
    *((rsp + 0x48)) = "Multi-call invocation";
    *((rsp + 0x50)) = "sha224sum";
    *((rsp + 0x58)) = "sha2 utilities";
    *((rsp + 0x60)) = "sha256sum";
    *((rsp + 0x68)) = "sha2 utilities";
    *((rsp + 0x70)) = "sha384sum";
    *((rsp + 0x78)) = "sha2 utilities";
    *((rsp + 0x80)) = "sha512sum";
    *((rsp + 0x88)) = "sha2 utilities";
    *((rsp + 0x90)) = 0;
    *((rsp + 0x98)) = 0;
    rax = rsp;
    do {
        rax += 0x10;
        rdi = *(rax);
        if (rdi == 0) {
            goto label_2;
        }
        esi = "numfmt";
        ecx = 7;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        dl = (rdi > 0) ? 1 : 0;
    } while (dl != 0);
label_2:
    rbx = *((rax + 8));
    edx = 5;
    esi = "\n%s online help: <%s>\n";
    edi = 0;
    if (rbx == 0) {
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
        eax = strncmp (rax, 0x40a1a7, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40a13f;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "numfmt";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40dc97;
    r12 = rcx;
    while (1) {
        edx = 5;
        rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
        rcx = r12;
        rdx = rbx;
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
            eax = strncmp (rax, 0x40a1a7, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        ebx = "numfmt";
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "numfmt";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40a13f;
        printf_chk ();
    }
label_5:
    ebx = "numfmt";
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "numfmt";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x404a30 */
#include <stdint.h>
 
int64_t fcn_00404a30 (uint32_t arg1, int64_t arg2) {
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
        *(0x00610568) = rdx;
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
        *(0x006103c0) = rcx;
        rax = fcn_00407bb0 (rax, rsi);
        rdx = imp.__libc_start_main;
        *(0x00610560) = rax;
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
    fcn_00407da0 ();
label_3:
    esi = 0x80;
    ecx = 8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x404b00 */
#include <stdint.h>
 
uint64_t fcn_00404b00 (int64_t arg1, int64_t arg2, int64_t arg4) {
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
        edi = 0x40dc7a;
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
        fcn_00404a30 (*((rsp + 8)), 0xffffffffffffffff);
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
    fcn_00404a30 (rdi, rdi);
    if (*(r15) != 0) {
        goto label_1;
    }
label_20:
    rsi = imp.__libc_start_main;
    if (rsi == 0) {
        goto label_25;
    }
    rdi = imp.__libc_start_main;
    ecx = 0x404a10;
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
    *(0x00610568) = rbx;
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
    *(0x00610568) = rbx;
    rsi <<= 4;
    rax = fcn_00407bb0 (r14, rsi);
    rdx = imp.__libc_start_main;
    *(0x00610560) = rax;
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
    fcn_00404a30 (*((rsp + 8)), rdi);
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
        *(0x006103b8) = r15;
    }
label_13:
    r15++;
    edi = 1;
    ebx = 1;
    goto label_7;
label_27:
    *(0x00610560) = 0;
    rax = *(r14);
    *(0x00610568) = 0;
    *(0x006103c0) = 0;
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
            fcn_00404a30 (rdi, rsi);
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
        fcn_00404a30 (rax + 1, 0xffffffffffffffff);
    }
label_32:
    fcn_00404a30 (1, rax - 1);
    goto label_9;
label_19:
    edx = 5;
    do {
label_12:
        rax = dcgettext (0, "invalid range with no endpoint: -");
label_10:
        eax = 0;
        error (0, 0, rax);
        fcn_00404360 (1);
label_31:
        rbx = imp.__libc_start_main;
        rax = strspn (rbx, "0123456789");
        rax = fcn_00407de0 (rbx, rax);
        rdi = rax;
        rbx = rax;
        rax = fcn_00407590 (rdi);
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
        fcn_00404360 (1);
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
    rax = fcn_00407590 (r15);
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
        fcn_00404360 (1);
label_37:
        esi = "missing list of fields";
        goto label_12;
label_38:
        dcgettext (0, "invalid field value %s");
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4050f0 */
#include <stdint.h>
 
uint64_t fcn_004050f0 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x405210 */
#include <stdint.h>
 
uint64_t fcn_00405210 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_00407570 (1, rbp);
        rdx = r12;
        rax = fcn_00407260 (0, 8);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
        void (*0x401a70)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x405290 */
#include <stdint.h>
 
uint64_t fcn_00405290 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00407590 (r12);
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
    rax = fcn_00407590 (r12);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4053b0 */
#include <stdint.h>
 
uint64_t fcn_004053b0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_004050f0 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_00405210 (r14, r12, rax);
        fcn_00405290 (rbx, rbp, r15);
        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x405530 */
#include <stdint.h>
 
uint64_t fcn_00405530 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x405970 */
#include <stdint.h>
 
uint64_t fcn_00405970 (char ** arg1) {
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
            edi = 0x40c3c8;
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
        *(0x006103d8) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x405a10 */
#include <stdint.h>
 
uint64_t fcn_00405a10 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_004098a0 ();
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
        eax = 0x40c3ce;
        ebx = 0x40c3d9;
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
        eax = 0x40c3d2;
        ebx = 0x40c3d5;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40dc67;
    ebx = 0x40c3cc;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x405b10 */
#include <stdint.h>
 
uint64_t fcn_00405b10 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 33944 named .text */
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
    /* switch table (11 cases) at 0x40c440 */
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
    *((rsp + 0x50)) = 0x40dc67;
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
        /* switch table (127 cases) at 0x40c498 */
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
    rax = fcn_00405b10 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40c890 */
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
    /* switch table (127 cases) at 0x40cc88 */
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
    *((rsp + 0x50)) = 0x40dc67;
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
        rax = fcn_00409760 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40dc67;
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
        *((rsp + 0x50)) = 0x40c3cc;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00405a10 (0x40c3dd, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00405a10 (0x40dc67, r13d);
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
        *((rsp + 0x50)) = 0x40c3cc;
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
        *((rsp + 0x50)) = 0x40dc67;
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
    *((rsp + 0x50)) = 0x40c3cc;
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
    rax = fcn_00405b10 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40dc67;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x406d40 */
#include <stdint.h>
 
uint64_t fcn_00406d40 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x006102d8);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x006102f0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x6102e0) {
        goto label_2;
    }
    rax = fcn_00407bb0 (rbx, rsi);
    *(0x006102d8) = rax;
    rbx = rax;
    do {
        rdi = *(0x006102f0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x006102f0) = r12d;
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
        rax = fcn_00405b10 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6103e0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00407b50 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00405b10 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00407bb0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x006102e0]");
        rbx = rax;
        *(0x006102d8) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00407da0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407260 */
#include <stdint.h>
 
int64_t fcn_00407260 (uint32_t arg2, int64_t arg3) {
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
    fcn_00406d40 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4073e0 */
#include <stdint.h>
 
int64_t fcn_004073e0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006104e0]");
        __asm ("movdqa xmm1, xmmword [0x006104f0]");
        __asm ("movdqa xmm2, xmmword [0x00610500]");
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
        fcn_00406d40 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407570 */
#include <stdint.h>
 
void fcn_00407570 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x6102a0;
    rdx = 0xffffffffffffffff;
    return void (*0x406d40)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407590 */
#include <stdint.h>
 
void fcn_00407590 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x6102a0;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x406d40)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4075b0 */
#include <stdint.h>
 
void fcn_004075b0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        goto label_0;
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
        rax = dcgettext (0, 0x40d12b);
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
            goto label_1;
        }
        /* switch table (10 cases) at 0x40d418 */
label_0:
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
    dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    r10 = *((rbx + 0x40));
    r9 = *((rbx + 0x38));
    edx = 5;
    esi = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
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
    al &= 8;
    rbx = *(rbx);
    edx = 5;
    rax = dcgettext (0, "Written by %s.\n");
    rdi = rbp;
    esi = 1;
    rcx = rbx;
    rdx = rax;
    eax = 0;
    void (*0x401ae0)() ();
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
    void (*0x401ae0)() ();
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
    void (*0x401ae0)() ();
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
label_1:
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
    return void (*0x407730)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x40772e */
#include <stdint.h>
 
int32_t fcn_0040772e (int64_t arg_30h, int64_t arg_38h, int64_t arg_18h_2, int64_t arg_18h) {
    do {
        r9 = *((rsp + 0x18));
        rcx = rbx;
        rdx = rax;
        rdi = rbp;
        esi = 1;
        eax = 0;
        r9 = *((rsp + 0x30));
        r8 = *((rsp + 0x38));
        al = fprintf_chk ();
        return eax;
        al &= 8;
        dcgettext (0, rsi);
        r10 = *((rsp + 0x18));
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407a10 */
#include <stdint.h>
 
uint64_t fcn_00407a10 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_004075b0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407b50 */
#include <stdint.h>
 
uint64_t fcn_00407b50 (int64_t arg1) {
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
    return fcn_00407da0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407bb0 */
#include <stdint.h>
 
uint64_t fcn_00407bb0 (int64_t arg1, int64_t arg2) {
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
    return fcn_00407da0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407d50 */
#include <stdint.h>
 
uint64_t fcn_00407d50 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00407b50 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407d80 */
#include <stdint.h>
 
void fcn_00407d80 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
    return void (*0x407d50)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407da0 */
#include <stdint.h>
 
uint64_t fcn_00407da0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x00610290), 0, 0x40c36d);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407de0 */
#include <stdint.h>
 
uint64_t fcn_00407de0 (int32_t n, const char * src) {
    rsi = n;
    rdi = src;
    rax = strndup (rdi, rsi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00407da0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x407e00 */
#include <stdint.h>
 
uint64_t fcn_00407e00 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
    *(rax) = 0;
    r13 = rax;
    rax = strtol (r12, rbx, ebp);
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
        /* switch table (54 cases) at 0x40d4f8 */
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
    /* switch table (48 cases) at 0x40d6a8 */
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
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
label_18:
    if (rbp < rax) {
        goto label_30;
    }
    rdi = 0x7fffffffffffffff;
    rax = rdi;
    __asm ("cqo");
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
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
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        rdi = rax;
label_17:
        if (rbp < rdi) {
            goto label_30;
        }
        r8 = 0x7fffffffffffffff;
        rax = r8;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r9 = rax;
label_16:
    edi = 5;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r9 = rax;
label_15:
    edi = 4;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r9 = rax;
label_20:
    edi = 6;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (rbp >= r9) {
        rax = r8;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r9 = rax;
label_19:
    edi = 3;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (rbp >= r9) {
        rax = r8;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r9 = rax;
label_14:
    edi = 8;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r9 = rax;
label_13:
    edi = 7;
    r10d = 0;
    r8 = 0x7fffffffffffffff;
    while (r9 <= rbp) {
        rax = r8;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
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
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtol");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x408550 */
#include <stdint.h>
 
uint64_t fcn_00408550 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x40d830 */
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
    /* switch table (54 cases) at 0x40d9b0 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x408990 */
#include <stdint.h>
 
uint64_t fcn_00408990 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x408a70 */
#include <stdint.h>
 
int64_t fcn_00408a70 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409090 */
#include <stdint.h>
 
uint64_t fcn_00409090 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40dc79;
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
            fcn_00408990 (r12, rbx);
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
        fcn_00408990 (r12, rbx);
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
    eax = fcn_00408a70 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00408a70 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409660 */
#include <stdint.h>
 
int32_t fcn_00409660 (int64_t arg_10h) {
    eax = *(0x006102fc);
    *(0x00610520) = eax;
    eax = *(0x006102f8);
    *(0x00610524) = eax;
    eax = *((rsp + 0x10));
    fcn_00409090 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x006102fc) = edx;
    rdx = imp.__libc_start_main;
    *(0x00610570) = rdx;
    edx = imp.__libc_start_main;
    *(0x006102f4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4096e0 */
#include <stdint.h>
 
void fcn_004096e0 (void) {
    r9d = 0;
    fcn_00409660 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409760 */
#include <stdint.h>
 
uint64_t fcn_00409760 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00409840 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4097e0 */
#include <stdint.h>
 
uint64_t fcn_004097e0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00409e10 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409840 */
#include <stdint.h>
 
uint64_t fcn_00409840 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40dc9c;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x4098a0 */
#include <stdint.h>
 
uint64_t fcn_004098a0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40dc97;
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
        r15d = 0x40dc97;
label_2:
        *(0x00610558) = r15;
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
        r15d = 0x40dc97;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40a2eb;
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
    fcn_00409e10 (rbx);
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
        r15d = 0x40dc97;
        rbx = rax;
        free (r15);
        fcn_00409e10 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409e10 */
#include <stdint.h>
 
uint64_t fcn_00409e10 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00409e90 (rbx);
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
    void (*0x401810)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409e90 */
#include <stdint.h>
 
uint32_t fcn_00409e90 (int64_t arg1) {
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
    void (*0x4019d0)() ();
label_1:
    fcn_00409ed0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409ed0 */
#include <stdint.h>
 
int64_t fcn_00409ed0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x401a90)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409fa0 */
#include <stdint.h>
 
int64_t fcn_00409fa0 (void) {
    rax = 0x610248;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_numfmt.elf @ 0x409fb8 */
#include <stdint.h>
 
void fcn_00409fb8 (int64_t arg3) {
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
