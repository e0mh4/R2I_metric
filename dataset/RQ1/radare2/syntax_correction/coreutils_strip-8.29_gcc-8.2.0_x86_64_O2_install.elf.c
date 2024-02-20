#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x403050 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    uint32_t var_27h;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_4ch;
    uint32_t var_4fh;
    int64_t var_50h;
    uint32_t var_51h;
    uint32_t var_55h;
    int64_t var_58h;
    int64_t var_5eh;
    int64_t var_60h;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_98h;
    rdi = argc;
    rsi = argv;
    r15d = 0;
    r14d = 0;
    r13 = rsi;
    r12d = 0;
    ebp = 0;
    ebx = edi;
    *(0x00621560) = 0;
    fcn_0040cfd0 (*(rsi));
    setlocale (6, 0x41aa3f);
    bindtextdomain (0x41716a, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x41716a, rsi);
    edi = 0x40aa00;
    fcn_00416fd0 ();
    fcn_00405700 (rsp + 0x30);
    esi = 0x100;
    rax = 0x400000000;
    *((rsp + 0x30)) = rax;
    rax = 0x200000004;
    *((rsp + 0x38)) = rax;
    rax = 0x10100000180;
    *((rsp + 0x64)) = 0;
    *((rsp + 0x40)) = rax;
    *((rsp + 0x48)) = si;
    *((rsp + 0x4c)) = 0;
    *((rsp + 0x50)) = 0x1000000;
    *((rsp + 0x58)) = 0x1000000;
    *((rsp + 0x60)) = 0;
    *((rsp + 0x68)) = 0;
    *((rsp + 0x70)) = 0;
    *(0x00621558) = 0;
    *(0x00621548) = 0;
    *(0x00621541) = 0;
    *(0x00621540) = 0;
    umask (0);
    *((rsp + 0x27)) = 0;
    *((rsp + 0x28)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x418380;
        edx = "bcCsDdg:m:o:pt:TvS:Z";
        rsi = r13;
        edi = ebx;
        eax = fcn_00412970 ();
        if (eax == 0xffffffff) {
            goto label_17;
        }
        if (eax == 0x64) {
            goto label_18;
        }
        if (eax <= 0x64) {
            goto label_19;
        }
        if (eax == 0x73) {
            goto label_20;
        }
        if (eax > 0x73) {
            goto label_21;
        }
        if (eax == 0x6d) {
            goto label_22;
        }
        if (eax <= 0x6d) {
            goto label_23;
        }
        if (eax != 0x6f) {
            goto label_24;
        }
        rax = imp.__libc_start_main;
        *(0x00621558) = rax;
    } while (1);
label_19:
    if (eax == 0x53) {
        goto label_25;
    }
    if (eax <= 0x53) {
        goto label_26;
    }
    if (eax == 0x5a) {
        goto label_27;
    }
    if (eax <= 0x5a) {
        goto label_28;
    }
    if (eax == 0x62) {
        rax = imp.__libc_start_main;
        r15d = 1;
        if (rax == 0) {
            rax = *((rsp + 8));
        }
        *((rsp + 8)) = rax;
        goto label_0;
label_24:
        if (eax != 0x70) {
            goto label_1;
        }
        *((rsp + 0x4f)) = 1;
        goto label_0;
    }
    if (eax == 0x63) {
        goto label_0;
    }
    do {
label_1:
        eax = fcn_004046f0 (1);
INVALID_JUMP;
    } while (eax != 0x54);
    r14d = 1;
    goto label_0;
label_26:
    if (eax == 0xffffff7e) {
        goto label_29;
    }
    if (eax <= 0xffffff7e) {
        goto label_30;
    }
    if (eax != 0x43) {
        goto label_31;
    }
    *(0x00621542) = 1;
    goto label_0;
label_23:
    if (eax != 0x67) {
        goto label_1;
    }
    rax = imp.__libc_start_main;
    *(0x00621548) = rax;
    goto label_0;
label_21:
    if (eax == 0x76) {
        goto label_32;
    }
    if (eax <= 0x76) {
        goto label_33;
    }
    if (eax != 0x80) {
        goto label_34;
    }
    ecx = imp.__libc_start_main;
    edx = 5;
    esi = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
    if (ecx == 0) {
        goto label_35;
    }
    *((rsp + 0x55)) = 1;
    *(0x0061f44c) = 0;
    goto label_0;
label_31:
    if (eax != 0x44) {
        goto label_1;
    }
    goto label_0;
label_30:
    if (eax != 0xffffff7d) {
        goto label_1;
    }
    r9d = 0;
    r8d = "David MacKenzie";
    eax = 0;
    rcx = *(str_8_29);
    fcn_00411160 (*(obj.stdout), "install", "GNU coreutils");
    eax = exit (0);
label_34:
    if (eax != 0x81) {
        goto label_1;
    }
    rax = fcn_00411510 (*(0x00621b80));
    *((rsp + 0x27)) = 1;
    *(0x0061f438) = rax;
    goto label_0;
label_33:
    if (eax != 0x74) {
        goto label_1;
    }
    if (r12 != 0) {
        goto label_36;
    }
    r12 = imp.__libc_start_main;
    goto label_0;
label_20:
    esi = 0;
    *(0x00621541) = 1;
    signal (0x11);
    goto label_0;
label_32:
    *((rsp + 0x5e)) = 1;
    goto label_0;
label_18:
    *(0x00621540) = 1;
    goto label_0;
label_27:
    edx = imp.__libc_start_main;
    rax = imp.__libc_start_main;
    if (edx != 0) {
        *(0x0061f44c) = 0;
        if (rax == 0) {
            goto label_37;
        }
        *((rsp + 0x28)) = rax;
        goto label_0;
label_25:
        rax = imp.__libc_start_main;
        r15d = 1;
        *((rsp + 0x10)) = rax;
        goto label_0;
label_22:
        rax = imp.__libc_start_main;
        *((rsp + 0x18)) = rax;
        goto label_0;
    }
    if (rax == 0) {
        goto label_0;
    }
    edx = 5;
label_35:
    rax = dcgettext (0, "warning: ignoring --context; it requires an SELinux-enabled kernel");
    eax = 0;
    error (0, 0, rax);
    goto label_0;
label_17:
    if (*(0x00621540) != 0) {
        goto label_38;
    }
    if (r12 == 0) {
        goto label_39;
    }
    rdx = rsp + 0x80;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (bpl == 0) {
        if (eax != 0) {
            goto label_40;
        }
    }
    if (eax != 0) {
        goto label_39;
    }
    eax = *((rsp + 0x98));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_41;
    }
    do {
label_39:
        eax = 0;
        if (r15b != 0) {
            goto label_42;
        }
label_10:
        *((rsp + 0x30)) = eax;
        fcn_0040a380 (*((rsp + 0x10)));
        if (*((rsp + 0x55)) == 0) {
            goto label_43;
        }
        if (*((rsp + 0x51)) != 0) {
            goto label_44;
        }
        if (*((rsp + 0x28)) != 0) {
            goto label_44;
        }
label_3:
        rax = *(0x0061f4dc);
        ebx -= eax;
        rax = r13 + rax*8;
        *((rsp + 8)) = rax;
        eax = *(0x00621540);
        eax ^= 1;
        dl = (r12 == 0) ? 1 : 0;
        eax &= edx;
        edx = (int32_t) al;
        if (edx >= ebx) {
            goto label_45;
        }
        if (r14b == 0) {
            goto label_46;
        }
        if (r12 != 0) {
            goto label_47;
        }
        if (ebx > 2) {
            goto label_48;
        }
label_2:
        rax = *((rsp + 0x18));
        if (rax != 0) {
            rax = fcn_0040ca80 (rax);
            r13 = rax;
            if (rax == 0) {
                goto label_49;
            }
            r8d = 0;
            eax = fcn_0040ce50 (0, 0, 0, rax);
            r8d = 0x61f440;
            *(0x0061f448) = eax;
            eax = fcn_0040ce50 (0, 1, 0, r13);
            *(0x0061f444) = eax;
            free (r13);
        }
        if (*((rsp + 0x27)) != 0) {
            if (*(0x00621541) == 0) {
                goto label_50;
            }
        }
label_12:
        if (*(0x00621542) != 0) {
            if (*((rsp + 0x4f)) != 0) {
                goto label_51;
            }
            edx = 5;
            esi = "options --compare (-C) and --strip are mutually exclusive";
            if (*(0x00621541) != 0) {
                goto label_52;
            }
            if ((*(0x0061f448) & 0xffff0e00) != 0) {
                goto label_53;
            }
        }
label_11:
        rdi = imp.__libc_start_main;
        if (rdi == 0) {
            goto label_54;
        }
        rax = getpwnam ();
        if (rax == 0) {
            goto label_55;
        }
        eax = *((rax + 0x10));
label_13:
        *(0x00621550) = eax;
        endpwent ();
label_9:
        rdi = imp.__libc_start_main;
        if (rdi == 0) {
            goto label_56;
        }
        rax = getgrnam ();
        if (rax == 0) {
            goto label_57;
        }
        eax = *((rax + 0x10));
label_14:
        *(0x00621544) = eax;
        endgrent ();
label_8:
        if (*(0x00621540) == 0) {
            goto label_58;
        }
        eax = fcn_0040f910 (ebx, *((rsp + 8)), 0x403f50, rsp + 0x30);
        *((rsp + 0x10)) = eax;
label_4:
        eax = *((rsp + 0x10));
        return rax;
label_38:
        if (*(0x00621541) != 0) {
            goto label_59;
        }
    } while (r12 == 0);
    edx = 5;
    rax = dcgettext (0, "target directory not allowed when installing a directory");
    eax = 0;
    al = error (1, 0, rax);
label_46:
    if (al == 0) {
        goto label_2;
    }
    r12d = 0;
    if (ebx == 1) {
        goto label_2;
    }
    rcx = *((rsp + 8));
    rax = (int64_t) ebx;
    r13d = 1;
    rax = rcx + rax*8 - 8;
    r12 = *(rax);
    r15 = rax;
    rax = fcn_0040ad40 (r12);
    rcx |= 0xffffffffffffffff;
    rdi = rax;
    rdx = rax;
    eax = r14d;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rax--;
    if (rax != 0) {
        r13d = 0;
        r13b = (*((rdx + rax - 1)) == 0x2f) ? 1 : 0;
    }
    rdx = rsp + 0x80;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (eax == 0) {
        goto label_60;
    }
    rax = errno_location ();
    r14d = *(rax);
    if (r14d == 0) {
        goto label_60;
    }
    if (r14d != 2) {
        goto label_61;
    }
label_16:
    if (r13d != 0) {
        goto label_62;
    }
    r12d = 0;
    if (ebx == 2) {
        goto label_2;
    }
    rax = fcn_0040ea00 (4, *(r15));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_43:
    if (*((rsp + 0x28)) == 0) {
        goto label_3;
    }
    errno_location ();
    *(rax) = 0x5f;
    rbx = rax;
    rax = fcn_0040ec50 (*((rsp + 0x28)));
    edx = 5;
    rax = dcgettext (0, "failed to set default file creation context to %s");
    rcx = rbp;
    eax = 0;
    error (1, *(rbx), rax);
label_58:
    fcn_00409a90 ();
    if (r12 == 0) {
        goto label_63;
    }
    r13d = 0;
    rax = fcn_004056a0 (rsp + 0x30);
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = ebx;
    goto label_64;
label_5:
    ecx = 1;
    al = fcn_00403db0 (r15, rax, rsp + 0x30);
    if (al != 0) {
        goto label_65;
    }
label_6:
    free (rbx);
    *((rsp + 0x10)) = 1;
label_7:
    r13++;
    if (*((rsp + 0x18)) <= r13d) {
        goto label_4;
    }
label_64:
    rax = *((rsp + 8));
    r14b = (r13d == 0) ? 1 : 0;
    r15 = *((rax + r13*8));
    r14d &= ebp;
    rax = fcn_0040ad40 (r15);
    edx = 0;
    rdi = r12;
    rsi = rax;
    rax = fcn_0040b0c0 ();
    rbx = rax;
    if (r14b != 0) {
        goto label_5;
    }
label_65:
    al = fcn_00404090 (r15, rbx, rsp + 0x30);
    if (al == 0) {
        goto label_6;
    }
    free (rbx);
    goto label_7;
label_56:
    *(0x00621544) = 0xffffffff;
    goto label_8;
label_54:
    *(0x00621550) = 0xffffffff;
    goto label_9;
label_37:
    *((rsp + 0x51)) = 1;
    goto label_0;
label_42:
    edx = 5;
    rax = dcgettext (0, "backup type");
    rsi = *((rsp + 8));
    fcn_0040a930 (rax);
    goto label_10;
label_63:
    rax = *((rsp + 8));
    r12 = *((rax + 8));
    rbx = *(rax);
    if (bpl != 0) {
        ecx = 0;
        al = fcn_00403db0 (rbx, r12, rsp + 0x30);
        edx = 0;
        if (al != 0) {
            goto label_66;
        }
label_15:
        eax = edx;
        eax &= 1;
        eax ^= 1;
    } else {
        eax = fcn_00404090 (rbx, r12, rsp + 0x30);
        eax ^= 1;
    }
    eax = (int32_t) al;
    *((rsp + 0x10)) = eax;
    goto label_4;
label_53:
    edx = 5;
    rax = dcgettext (0, "the --compare (-C) option is ignored when you specify a mode with non-permission bits");
    eax = 0;
    error (0, 0, rax);
    goto label_11;
label_50:
    edx = 5;
    rax = dcgettext (0, "WARNING: ignoring --strip-program option as -s option was not specified");
    eax = 0;
    error (0, 0, rax);
    goto label_12;
label_55:
    eax = fcn_00411570 (*(0x00621558), 0, 0, rsp + 0x80, 0);
    if (eax != 0) {
        goto label_67;
    }
    rax = *((rsp + 0x80));
    edx = 0xffffffff;
    if (rax <= rdx) {
        goto label_13;
    }
label_67:
    rax = fcn_0040ec50 (*(0x00621558));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid user %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_57:
    eax = fcn_00411570 (*(0x00621548), 0, 0, rsp + 0x80, 0);
    if (eax != 0) {
        goto label_68;
    }
    rax = *((rsp + 0x80));
    edx = 0xffffffff;
    if (rax <= rdx) {
        goto label_14;
    }
label_68:
    rax = fcn_0040ec50 (*(0x00621548));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid group %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_66:
    al = fcn_00404090 (rbx, r12, rsp + 0x30);
    edx = (int32_t) al;
    goto label_15;
label_60:
    eax = *((rsp + 0x98));
    eax &= 0xf000;
    if (eax != 0x4000) {
        r14d = 0;
        goto label_16;
label_29:
        fcn_004046f0 (0);
    }
    ebx--;
    rcx = *((rsp + 8));
    rax = (int64_t) ebx;
    r12 = *((rcx + rax*8));
    goto label_2;
label_36:
    edx = 5;
    rax = dcgettext (0, "multiple target directories specified");
    eax = 0;
    error (1, 0, rax);
label_41:
    rax = fcn_0040ea00 (4, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_40:
    rax = fcn_0040ea00 (4, r12);
    edx = 5;
    rax = dcgettext (0, "failed to access %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_48:
    rax = *((rsp + 8));
    rax = fcn_0040ea00 (4, *((rax + 0x10)));
    edx = 5;
    rbx = rax;
    do {
        rax = dcgettext (0, "extra operand %s");
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        goto label_1;
label_47:
        edx = 5;
        rax = dcgettext (0, "cannot combine --target-directory (-t) and --no-target-directory (-T)");
        eax = 0;
        error (1, 0, rax);
label_45:
        ebx--;
        if (ebx != 0) {
            goto label_69;
        }
        rax = *((rsp + 8));
        rax = fcn_0040ea00 (4, *(rax));
        edx = 5;
        esi = "missing destination file operand after %s";
        rbx = rax;
    } while (1);
label_44:
    edx = 5;
    rax = dcgettext (0, "cannot set target context and preserve it");
    eax = 0;
    error (1, 0, rax);
label_69:
    edx = 5;
    do {
label_52:
        rax = dcgettext (0, "missing file operand");
        eax = 0;
        error (0, 0, rax);
        goto label_1;
label_51:
        edx = 5;
        esi = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
    } while (1);
label_49:
    rax = fcn_0040ec50 (*((rsp + 0x18)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid mode %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_59:
    edx = 5;
    rax = dcgettext (0, "the strip option may not be used when installing a directory");
    eax = 0;
    error (1, 0, rax);
label_61:
    rax = fcn_0040ea00 (4, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to access %s");
    rcx = rbx;
    eax = 0;
    error (1, r14d, rax);
label_62:
    rax = fcn_0040ea00 (4, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    error (1, r14d, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x403cfb */
#include <stdint.h>
 
int32_t fcn_00403cfb (void) {
    eax = 0x61f4e8;
    if (rax != 0x61f4e8) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x61f4e8;
invalid_funccall(); //        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x403d51 */
#include <stdint.h>
 
int64_t fcn_00403d51 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0061f528) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x61ee48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0061f530) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00403cfb ();
    *(0x0061f528) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x403da8 */
#include <stdint.h>
 
int64_t fcn_00403da8 (void) {
    do {
        esi = 0x61f4e8;
        ecx = 2;
        rsi -= 0x61f4e8;
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
            edi = 0x61f4e8;
invalid_funccall(); //            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x403db0 */
#include <stdint.h>
 
uint64_t fcn_00403db0 (uint32_t arg1, uint32_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rsi;
    if (cl == 0) {
        if (*(rdi) == 0x2f) {
            goto label_4;
        }
    }
label_0:
    *((rsp + 8)) = 0;
    rax = fcn_0040c5e0 (rbx, rsp + 8, 0x404020, rbp);
    rax = errno_location ();
    r12 = rax;
    if (rbp != -1) {
        goto label_5;
    }
    rax = fcn_0040ea00 (4, rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot create directory %s");
    rcx = rbx;
    eax = 0;
    error (0, *(r12), rax);
    fcn_0040f770 (rsp + 8, 1, rdx);
    eax = fcn_0040f8a0 (rsp + 8);
    do {
        eax = 0;
label_2:
        return rax;
label_5:
        eax = fcn_0040f770 (rsp + 8, 0, rdx);
        r12d = *(r12);
        fcn_0040f8a0 (rsp + 8);
    } while (ebp > 0);
    if (ebp != 0) {
        goto label_6;
    }
label_1:
    eax = 1;
label_3:
    return rax;
label_4:
    if (*(rsi) != 0x2f) {
        goto label_0;
    }
    *((rsp + 8)) = 0;
    fcn_0040f8a0 (rsp + 8);
    rax = fcn_0040c5e0 (rbx, rsp + 8, 0x404020, rbp);
    if (rax != -1) {
        goto label_1;
    }
    rax = fcn_0040ea00 (4, rbx);
    edx = 5;
    rax = dcgettext (0, "cannot create directory %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    goto label_2;
label_6:
    rax = fcn_0040ea00 (4, rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot create directory %s");
    rcx = rbx;
    eax = 0;
    eax = error (0, r12d, rax);
    eax = 0;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x403fc0 */
#include <stdint.h>
 
uint64_t fcn_00403fc0 (int64_t arg_f0h, int64_t arg1) {
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    rdi = arg1;
    rax = fcn_0040ea00 (4, rdi);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "creating directory %s");
    rdi = stdout;
    rdx = rbx;
    rsi = rax;
    eax = 0;
    rbx = rdi;
    *((rsp + 0x30)) = rdx;
    *((rsp + 0x38)) = rcx;
    *((rsp + 0x40)) = r8;
    *((rsp + 0x48)) = r9;
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
    rdi = imp.__libc_start_main;
    rsi = rbx;
    fputs_unlocked ();
    rcx = rbx;
    edx = 2;
    esi = 1;
    edi = 0x4185c0;
    fwrite_unlocked ();
    rax = rsp + 0xf0;
    *((rsp + 8)) = 0x10;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x20;
    *((rsp + 0xc)) = 0x30;
    *((rsp + 0x18)) = rax;
    fcn_00412a70 (rbx, rbp, rsp + 8);
    rax = *((rbx + 0x28));
    if (rax >= *((rbx + 0x30))) {
        goto label_0;
    }
    rdx = rax + 1;
    *((rbx + 0x28)) = rdx;
    *(rax) = 0xa;
    do {
        return rax;
label_0:
        esi = 0xa;
        rdi = rbx;
        overflow ();
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404090 */
#include <stdint.h>
 
uint64_t fcn_00404090 (int64_t arg1, int64_t arg2, uint32_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_28h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_a0h;
    int64_t var_b8h;
    uint32_t var_d0h;
    int64_t var_130h;
    int64_t var_138h;
    int64_t var_140h;
    int64_t var_148h;
    uint32_t var_14ch;
    uint32_t var_150h;
    int64_t var_160h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdi;
    rbx = rsi;
    if (*((rdx + 0x1f)) != 0) {
        rsi = rdi;
        rdx = rsp + 0x10;
        edi = 1;
        eax = xstat ();
        if (eax != 0) {
            goto label_13;
        }
    }
    if (*(0x00621542) == 0) {
        goto label_14;
    }
    r14d = *(0x0061f448);
    if ((r14d & 0xffff0e00) != 0) {
        goto label_14;
    }
    rdx = rsp + 0xa0;
    rsi = r12;
    edi = 1;
    eax = lxstat ();
    r13 = rsp + 0x130;
    if (eax != 0) {
        goto label_11;
    }
    rdx = r13;
    rsi = rbx;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_11;
    }
    eax = *((rsp + 0xb8));
    edx = *((rsp + 0xb8));
    edx &= 0xf000;
    if (edx != 0x8000) {
        goto label_11;
    }
    edx = *((rsp + 0x148));
    ecx = *((rsp + 0x148));
    ecx &= 0xf000;
    if (ecx != 0x8000) {
        goto label_11;
    }
    eax |= edx;
    if ((eax & 0xffff0e00) != 0) {
        goto label_11;
    }
    rax = *((rsp + 0x160));
    if (*((rsp + 0xd0)) != rax) {
        goto label_11;
    }
    edx &= 0xfff;
    if (r14d != edx) {
        goto label_11;
    }
    eax = imp.__libc_start_main;
    if (eax == 0xffffffff) {
        goto label_15;
    }
label_10:
    if (eax != *((rsp + 0x14c))) {
        goto label_11;
    }
    eax = imp.__libc_start_main;
    if (eax == 0xffffffff) {
        goto label_16;
    }
label_12:
    if (eax != *((rsp + 0x150))) {
        goto label_11;
    }
    if (*(0x00621560) != 0) {
        if (*((rbp + 0x25)) != 0) {
            goto label_17;
        }
    }
    eax = 0;
    eax = open (r12, 0, rdx);
    r14d = eax;
    if (eax < 0) {
        goto label_11;
    }
    eax = 0;
    eax = open (rbx, 0, rdx);
    r15d = eax;
    if (eax >= 0) {
        goto label_18;
    }
    goto label_19;
    do {
        *((rsp + 8)) = rcx;
        rax = fcn_0040b1c0 (r15d, 0x620540, 0x1000);
        rcx = *((rsp + 8));
        if (rax != rcx) {
            goto label_20;
        }
        eax = memcmp (0x61f540, 0x620540, rax);
        if (eax != 0) {
            goto label_20;
        }
label_18:
        rax = fcn_0040b1c0 (r14d, 0x61f540, 0x1000);
        rcx = rax;
    } while (rax != 0);
    close (r14d);
    close (r15d);
    do {
        if (*(0x00621541) != 0) {
            goto label_21;
        }
        if (*((rbp + 0x1f)) != 0) {
label_3:
            eax = *((rsp + 0x28));
            eax &= 0xf000;
            if (eax == 0x8000) {
                goto label_1;
            }
label_2:
            rax = *((rsp + 0x58));
            *((rsp + 0x130)) = rax;
            rax = *((rsp + 0x60));
            *((rsp + 0x138)) = rax;
            rax = *((rsp + 0x68));
            *((rsp + 0x140)) = rax;
            rax = *((rsp + 0x70));
            *((rsp + 0x148)) = rax;
            eax = fcn_00410aa0 (rbx, r13, rdx, rcx);
            if (eax != 0) {
                goto label_22;
            }
        }
label_1:
        esi = imp.__libc_start_main;
        edx = imp.__libc_start_main;
        eax = esi;
        eax &= edx;
        if (eax != 0xffffffff) {
            rdi = rbx;
            eax = lchown ();
            if (eax != 0) {
                goto label_23;
            }
        }
        eax = chmod (rbx, *(0x0061f448));
        if (eax != 0) {
            goto label_24;
        }
label_4:
        if (*(0x0061f44c) == 0) {
            goto label_25;
        }
        if (*(0x00621560) != 1) {
            goto label_25;
        }
        rdx = r13;
        rsi = rbx;
        edi = 1;
        eax = lxstat ();
        if (eax != 0) {
            goto label_25;
        }
        if (*(0x0061f430) != 0) {
            if (*(rbx) == 0x2f) {
                goto label_26;
            }
        }
label_8:
        *(0x0061f430) = 0;
        errno_location ();
        *(rax) = 0x5f;
        goto label_25;
label_14:
        r13 = rsp + 0x130;
label_11:
        r9d = 0;
        al = fcn_00409810 (r12, rbx, 0, rbp, r13);
    } while (al != 0);
    do {
label_0:
        ebp = 0;
label_25:
        eax = ebp;
        return rax;
label_21:
        eax = fork ();
        if (eax != 0xffffffff) {
            goto label_27;
        }
        edx = 5;
label_7:
        rax = dcgettext (0, "fork system call failed");
        rax = errno_location ();
        eax = 0;
        error (0, *(rax), rbp);
label_6:
        eax = unlink (rbx);
    } while (eax == 0);
    rax = fcn_0040ea00 (4, rbx);
    edx = 5;
    rax = dcgettext (0, "cannot unlink %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_13:
    rax = fcn_0040ea00 (4, r12);
    edx = 5;
label_5:
    rax = dcgettext (0, "cannot stat %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    goto label_0;
label_27:
    if (eax == 0) {
        goto label_28;
    }
    eax = waitpid (eax, r13, 0);
    if (eax < 0) {
        goto label_29;
    }
    eax = *((rsp + 0x130));
    edx = (int32_t) ah;
    eax &= 0x7f;
    edx |= eax;
    if (edx != 0) {
        goto label_30;
    }
    if (*((rbp + 0x1f)) == 0) {
        goto label_1;
    }
    if (*(0x00621541) != 0) {
        goto label_2;
    }
    goto label_3;
label_23:
    rax = fcn_0040ea00 (4, rbx);
    edx = 5;
    r12 = rax;
    do {
        rax = dcgettext (0, "cannot change ownership of %s");
        rax = errno_location ();
        rcx = r12;
        eax = 0;
        ebp = 0;
        error (0, *(rax), rbp);
        goto label_4;
label_24:
        rax = fcn_0040ea00 (4, rbx);
        edx = 5;
        esi = "cannot change permissions of %s";
        r12 = rax;
    } while (1);
label_22:
    rax = fcn_0040ea00 (4, rbx);
    edx = 5;
    esi = "cannot set timestamps for %s";
    goto label_5;
label_30:
    edx = 5;
    rax = dcgettext (0, "strip process terminated abnormally");
    eax = 0;
    error (0, 0, rax);
    goto label_6;
label_29:
    edx = 5;
    esi = "waiting for strip";
    goto label_7;
label_26:
    eax = *((rbx + 1));
    r12 = rbx + 1;
    if (al == 0x2f) {
        goto label_31;
    }
    goto label_32;
    do {
        r12 = rdx;
label_31:
        eax = *((r12 + 1));
        rdx = r12 + 1;
    } while (al == 0x2f);
label_9:
    if (al == 0) {
        goto label_8;
    }
    while (al != 0) {
        if (al == 0x2f) {
            goto label_33;
        }
        rdx++;
        eax = *(rdx);
    }
label_33:
    rbx = rdx;
    rbx -= r12;
    rax = malloc (rbx + 2);
    r13 = rax;
    if (rax == 0) {
        goto label_8;
    }
    rdx = rbx;
    rsi = r12;
    rdi = rax;
    stpncpy ();
    edx = 0x2f;
    *(rax) = dx;
    free (r13);
    goto label_8;
label_32:
    rdx = r12;
    r12 = rbx;
    goto label_9;
label_15:
    errno_location ();
    *(rax) = 0;
    r14 = rax;
    eax = getuid ();
    if (eax != 0xffffffff) {
        goto label_10;
    }
    if (*(r14) == 0) {
        goto label_10;
    }
    goto label_11;
label_16:
    errno_location ();
    *(rax) = 0;
    r14 = rax;
    eax = getgid ();
    if (eax != 0xffffffff) {
        goto label_12;
    }
    if (*(r14) == 0) {
        goto label_12;
    }
    goto label_11;
label_19:
    eax = close (r14d);
    goto label_11;
label_28:
    rbp = *(0x0061f438);
    ecx = 0;
    rdx = rbx;
    eax = 0;
    rsi = rbp;
    rdi = rbp;
    execlp ();
    rax = fcn_0040ea00 (4, rbp);
    edx = 5;
    rax = dcgettext (0, "cannot run %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_17:
    errno_location ();
    *(rax) = 0x5f;
    goto label_11;
label_20:
    close (r14d);
    close (r15d);
    goto label_11;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4046f0 */
#include <stdint.h>
 
uint64_t fcn_004046f0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION].. [-T] SOURCE DEST\n  or:  %s [OPTION].. SOURCE.. DIRECTORY\n  or:  %s [OPTION].. -t DIRECTORY SOURCE..\n  or:  %s [OPTION].. -d DIRECTORY..\n");
    r9 = rbp;
    r8 = rbp;
    rcx = rbp;
    rdx = rbp;
    rsi = rax;
    edi = 1;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThis install program copies files (often just compiled) into destination\nlocations you choose.  If you want to download and install a ready-to-use\npackage on a GNU/Linux system, you should instead be using a package manager\nlike yum(1) or apt-get(1).\n\nIn the first three forms, copy SOURCE to DEST or multiple SOURCE(s) to\nthe existing DIRECTORY, while setting permission modes and owner/group.\nIn the 4th form, create all components of the given DIRECTORY(ies).\n");
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
    rax = dcgettext (0, "      --backup[=CONTROL]  make a backup of each existing destination file\n  -b                  like --backup but does not accept an argument\n  -c                  (ignored)\n  -C, --compare       compare each pair of source and destination files, and\n                        in some cases, do not modify the destination at all\n  -d, --directory     treat all arguments as directory names; create all\n                        components of the specified directories\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -D                  create all leading components of DEST except the last,\n                        or all components of --target-directory,\n                        then copy SOURCE to DEST\n  -g, --group=GROUP   set group ownership, instead of process' current group\n  -m, --mode=MODE     set permission mode (as in chmod), instead of rwxr-xr-x\n  -o, --owner=OWNER   set ownership (super-user only)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -p, --preserve-timestamps   apply access/modification times of SOURCE files\n                        to corresponding destination files\n  -s, --strip         strip symbol tables\n      --strip-program=PROGRAM  program used to strip binaries\n  -S, --suffix=SUFFIX  override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory  treat DEST as a normal file\n  -v, --verbose       print the name of each directory as it is created\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --preserve-context  preserve SELinux security context\n  -Z                      set SELinux security context of destination\n                            file and each created directory to default type\n      --context[=CTX]     like -Z, or if CTX is specified then set the\n                            SELinux or SMACK security context to CTX\n");
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
    rax = dcgettext (0, "\nThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x4170f0;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x41716a;
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
        esi = "install";
        ecx = 8;
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
        eax = strncmp (rax, 0x417174, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x41710c;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "install";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x41aa3f;
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
            eax = strncmp (rax, 0x417174, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "install";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x41710c;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "install";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404bd0 */
#include <stdint.h>
 
int32_t fcn_00404bd0 (char * arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    esi &= 0xf000;
    if (esi == 0xa000) {
        eax = 1;
        return eax;
    }
    rbx = rdi;
    al = fcn_004112a0 ();
    if (al != 0) {
        eax = 1;
        return eax;
    }
    rdi = rbx;
    esi = 2;
    eax = euidaccess ();
    al = (eax == 0) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404c20 */
#include <stdint.h>
 
uint64_t fcn_00404c20 (size_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12d = edi;
    rbx = rsi;
    if (*(0x00621980) == 0) {
        goto label_1;
    }
label_0:
    if (rbx != 0) {
        goto label_2;
    }
    goto label_3;
    do {
        rbx -= rax;
        if (rbx == 0) {
            goto label_3;
        }
label_2:
        rsi = imp.__libc_start_main;
        edi = r12d;
        if (*(0x0061f458) <= rbx) {
            rbp = *(0x0061f458);
        }
        rax = fcn_0040b240 (rdi, rsi, rbp);
    } while (rax == rbp);
    eax = 0;
    return rax;
label_3:
    eax = 1;
    return rax;
label_1:
    rax = calloc (*(0x0061f458), 1);
    if (rax != 0) {
        *(0x00621980) = rax;
        goto label_0;
    }
    *(0x00621980) = 0x621580;
    *(0x0061f458) = 0x400;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404cd0 */
#include <stdint.h>
 
uint64_t fcn_00404cd0 (int64_t arg2, uint32_t arg3) {
    rsi = arg2;
    rdx = arg3;
    rcx = rdx;
    rdx = rsi;
    esi = 3;
    eax = fallocate ();
    ebx = eax;
    while (eax != 0x5f) {
        eax = ebx;
        return eax;
        rax = errno_location ();
        eax = *(rax);
        if (eax == 0x26) {
            goto label_0;
        }
    }
label_0:
    ebx = 0;
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404d10 */
#include <stdint.h>
 
int64_t fcn_00404d10 (size_t arg1, char * arg2, size_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    esi = edx;
    if (edi < 0) {
        rdi = rax;
invalid_funccall(); //        void (*0x402e50)() ();
    }
    return fchmod ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404d30 */
#include <stdint.h>
 
int64_t fcn_00404d30 (void) {
    errno_location ();
    edx = 5;
    *(rax) = 0x5f;
    rbx = rax;
    rax = dcgettext (0, "failed to restore the default file creation context");
    eax = 0;
    error (1, *(rbx), rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404d70 */
#include <stdint.h>
 
uint64_t fcn_00404d70 (int64_t arg1, char * arg2, size_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdi;
    rbx = rdx;
    rax = fcn_0040e920 (1, 4, rsi);
    rax = fcn_0040e920 (0, 4, r12);
    rcx = rbp;
    esi = "%s -> %s";
    edi = 1;
    rdx = rax;
    eax = 0;
    printf_chk ();
    if (rbx != 0) {
        rax = fcn_0040ea00 (4, rbx);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, " (backup: %s)");
        rdx = rbx;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
    }
    rdi = stdout;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404e20 */
#include <stdint.h>
 
void fcn_00404e20 (int64_t arg1, char * arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_dh;
    int64_t var_eh;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r12 = rdi;
    rbx = rsi;
    al = fcn_00404bd0 (rsi, *(rdx));
    if (al != 0) {
        goto label_0;
    }
    fcn_0040af30 (*(rbp), rsp + 4);
    ebp = *(rbp);
    *((rsp + 0xe)) = 0;
    rax = fcn_0040ea00 (4, rbx);
    ebp &= 0xfff;
    rbx = imp.__libc_start_main;
    r13 = rax;
    edx = 5;
    if (*((r12 + 0x18)) == 0) {
        if ((*((r12 + 0x14)) & 0xffff00) == 0) {
            goto label_1;
        }
    }
    rax = dcgettext (0, "%s: replace %s, overriding mode %04lo (%s)? ");
    rdx = rax;
    do {
        rdi = stderr;
        r9 = rbp;
        eax = 0;
        rsi = rsp + 0xd;
        r8 = r13;
        rcx = rbx;
        esi = 1;
        fprintf_chk ();
        fcn_004119a0 ();
        return;
label_0:
        rax = fcn_0040ea00 (4, rbx);
        rbx = imp.__libc_start_main;
        edx = 5;
        rax = dcgettext (0, "%s: overwrite %s? ");
        r8 = rbp;
        rcx = rbx;
        esi = 1;
        rdi = stderr;
        rdx = rax;
        eax = 0;
        fprintf_chk ();
        fcn_004119a0 ();
        return;
label_1:
        rax = dcgettext (0, "%s: unwritable %s (mode %04lo, %s); try anyway? ");
        rdx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x404f50 */
#include <stdint.h>
 
uint64_t fcn_00404f50 (char * arg1, char * arg2, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r9d = (int32_t) dl;
    r12 = rsi;
    rsi = rdi;
    rbx = rdi;
    r8b = (r8b != 0) ? 1 : 0;
    r8d = (int32_t) r8b;
    r8d <<= 0xa;
    eax = fcn_00409e90 (edx, rsi, 0xffffff9c, rsi, r8, r9);
    if (eax >= 0) {
        bl = (eax > 0) ? 1 : 0;
        bl &= bpl;
        if (bl == 0) {
            ebx = 1;
            eax = 1;
            return eax;
        }
        rax = fcn_0040ea00 (4, r12);
        edx = 5;
        rax = dcgettext (0, "removed %s\n");
        rdx = rbp;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        eax = ebx;
        return rax;
    }
    rax = fcn_0040e920 (1, 4, rbx);
    r13 = rax;
    rax = fcn_0040e920 (0, 4, r12);
    edx = 5;
    rax = dcgettext (0, "cannot create hard link %s to %s");
    rbx = rax;
    rax = errno_location ();
    r8 = r13;
    rcx = rbp;
    eax = 0;
    ebx = 0;
    error (0, *(rax), rbx);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405060 */
#include <stdint.h>
 
uint64_t fcn_00405060 (size_t arg1, char * arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r13 = rsi;
    rsi = rcx;
    r12d = edx;
    edx = 1;
    rbx = rcx;
    rax = lseek ();
    if (rax < 0) {
        goto label_0;
    }
    while (eax >= 0) {
        eax = 1;
        return rax;
        rax -= rbx;
        rdx = rbx;
        eax = fcn_00404cd0 (ebp, rax);
    }
    rax = fcn_0040ea00 (4, r13);
    edx = 5;
    esi = "error deallocating %s";
    goto label_1;
label_0:
    rax = fcn_0040ea00 (4, r13);
    edx = 5;
label_1:
    rax = dcgettext (0, "cannot lseek %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405120 */
#include <stdint.h>
 
int64_t fcn_00405120 (int64_t arg_b0h, int64_t arg_b8h, int64_t arg_c0h, int64_t arg_c8h, int64_t arg_d0h, char *** arg1, size_t arg2, uint32_t arg3, int64_t arg4, uint32_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    size_t var_18h;
    int64_t var_1dh;
    int64_t var_1eh;
    int64_t var_1fh;
    uint32_t buf;
    size_t nbyte;
    ssize_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    ssize_t var_50h;
    uint32_t var_58h;
    int64_t var_60h;
    char *** fildes;
    int64_t var_6ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = *((rsp + 0xb0));
    rbx = *((rsp + 0xc8));
    *((rsp + 0x1f)) = r9b;
    r10 = *((rsp + 0xd0));
    *((rsp + 0x40)) = rax;
    rax = *((rsp + 0xb8));
    *(r10) = 0;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0xc0));
    *((rsp + 0x48)) = rbx;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x60)) = r10;
    *(rbx) = 0;
    if (rax == 0) {
        goto label_8;
    }
    *((rsp + 0x58)) = r8;
    if (r8 == 0) {
        r8 = rcx;
    }
    *((rsp + 0x6c)) = r9d;
    r15d = 0;
    r13d = 0;
    *((rsp + 0x38)) = rcx;
    r14d = r15d;
    r15 = r13;
    *((rsp + 0x20)) = rdx;
    *((rsp + 0x18)) = esi;
    *((rsp + 0x68)) = edi;
    *((rsp + 0x50)) = r8;
    do {
label_4:
        rax = *((rsp + 0x38));
        rdx = *((rsp + 0x28));
        rsi = *((rsp + 0x20));
        edi = *((rsp + 0x68));
        if (rax <= rdx) {
            rdx = rax;
        }
        rax = read (rdi, rsi, rdx);
        *((rsp + 0x30)) = rax;
        if (rax >= 0) {
            goto label_9;
        }
        rax = errno_location ();
    } while (*(rax) == 4);
    rbx = rax;
    r15d = 0;
    rax = fcn_0040ea00 (4, *((rsp + 0x40)));
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rcx = rbp;
    eax = 0;
    error (0, *(rbx), rax);
label_2:
    eax = r15d;
    return rax;
    if (*(rax) == 4) {
label_9:
        goto label_10;
    }
    rax = *((rsp + 0x48));
    r13 = *((rsp + 0x20));
    r12 = *((rsp + 0x30));
    rbx = *((rsp + 0x50));
    *(rax) += r12;
    r11 = r13;
    *(rsp + 0x1d) = (*((rsp + 0x58)) != 0) ? 1 : 0;
label_0:
    if (rbx > r12) {
        rbx = r12;
    }
    bpl = (rbx != 0) ? 1 : 0;
    bpl &= *((rsp + 0x1d));
    if (bpl == 0) {
        goto label_11;
    }
    rsi = r13;
    rdx = rbx;
    do {
        if (*(rsi) != 0) {
            goto label_12;
        }
        rsi++;
        rdx--;
        if (rdx == 0) {
            goto label_13;
        }
    } while ((dl & 0xf) != 0);
    *((rsp + 8)) = r11;
    eax = memcmp (r13, rsi, rdx);
    r11 = *((rsp + 8));
    bpl = (eax == 0) ? 1 : 0;
    edx = ebp;
    edx ^= r14d;
    al = (eax != 0) ? 1 : 0;
label_5:
    r9b = (r15 != 0) ? 1 : 0;
    r9d &= edx;
    if (rbx != r12) {
        goto label_14;
    }
    if (al == 0) {
        goto label_14;
    }
    if (r9b == 0) {
        goto label_15;
    }
    *((rsp + 8)) = 1;
    ebp = 0;
label_7:
    *((rsp + 0x1e)) = r9b;
    if (r14b != 0) {
        goto label_16;
    }
    do {
        rax = fcn_0040b240 (*((rsp + 0x18)), r11, r15);
        r9d = *((rsp + 0x1e));
        if (r15 != rax) {
            goto label_17;
        }
label_1:
        eax = *((rsp + 8));
        if (eax == 0) {
            goto label_18;
        }
        if (rbx == 0) {
            goto label_19;
        }
        if (r9b == 0) {
            goto label_20;
        }
        r15 = rbx;
        r11 = r13;
        r14d = ebp;
        ebx = 0;
        goto label_0;
label_11:
        eax = r14d;
        dl = (rbx == r12) ? 1 : 0;
        eax ^= 1;
        if ((dl & al) == 0) {
            if (rbx != 0) {
                goto label_21;
            }
        }
label_6:
        r9d = 0;
        r15 += rbx;
        *((rsp + 8)) = 1;
        *((rsp + 0x1e)) = r9b;
    } while (r14b == 0);
label_16:
    edx = *((rsp + 0x1f));
    al = fcn_00405060 (*((rsp + 0x18)), *((rsp + 0x10)), rdx, r15);
    r9d = *((rsp + 0x1e));
    if (al != 0) {
        goto label_1;
    }
    r15d = eax;
    goto label_2;
label_13:
    r9d = r14d;
    r9d ^= 1;
    al = (r15 != 0) ? 1 : 0;
    r9d &= eax;
label_14:
    if (r9b != 0) {
        goto label_22;
    }
label_21:
    rax = 0x7fffffffffffffff;
    rax -= rbx;
    if (rax < r15) {
        goto label_23;
    }
    r15 += rbx;
    r12 -= rbx;
    r13 += rbx;
    r14d = ebp;
label_3:
    if (r12 != 0) {
        goto label_0;
    }
    goto label_24;
label_18:
    r11 = r13;
    r12 -= rbx;
    r14d = ebp;
    r13 += rbx;
    r15 = rbx;
    goto label_3;
label_19:
    r15d = 0;
label_24:
    rcx = *((rsp + 0x30));
    rax = *((rsp + 0x60));
    *(rax) = bpl;
    if (r13 != 0) {
        r14d = ebp;
        goto label_4;
label_20:
        r11 = r13;
        r12 -= rbx;
        r14d = ebp;
        r13 += rbx;
        r15d = 0;
        goto label_3;
label_23:
        r15d = 0;
        rax = fcn_0040ea00 (4, *((rsp + 0x40)));
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "overflow reading %s");
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        goto label_2;
label_12:
        eax = ebp;
        edx = r14d;
        ebp = 0;
        goto label_5;
label_17:
        r15d = r14d;
        rax = fcn_0040ea00 (4, *((rsp + 0x10)));
        edx = 5;
        rax = dcgettext (0, "error writing %s");
        rbx = rax;
        rax = errno_location ();
        rcx = rbp;
        eax = 0;
        error (0, *(rax), rbx);
        goto label_2;
    }
    r13 = r15;
    do {
        if (bpl != 0) {
            edx = *((rsp + 0x6c));
            rsi = *((rsp + 0x10));
            rcx = r13;
            edi = *((rsp + 0x18));
invalid_funccall(); //            void (*0x405060)() ();
        }
label_8:
        r15d = 1;
        goto label_2;
label_10:
        r13 = r15;
    } while (1);
label_15:
    ebp = 0;
    goto label_6;
label_22:
    *((rsp + 8)) = 0;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405550 */
#include <stdint.h>
 
uint64_t fcn_00405550 (int64_t arg1, int64_t arg4, uint32_t arg5) {
    rdi = arg1;
    rcx = arg4;
    r8 = arg5;
    if (*((r8 + 0x25)) == 0) {
        goto label_1;
    }
    r12 = rdi;
    rax = errno_location ();
    r13 = rax;
    while (bl != 0) {
        *(r13) = 0x5f;
        rax = fcn_0040ea00 (4, r12);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "failed to get security context of %s");
        rcx = rbx;
        eax = 0;
        error (0, *(r13), rax);
        ebx = *((rbp + 0x26));
label_0:
        ebx ^= 1;
        eax = ebx;
        return rax;
        ebx = *((rbp + 0x26));
    }
    *(rax) = 0x5f;
    goto label_0;
label_1:
    ebx = ecx;
    bl &= *((r8 + 0x21));
    if (bl == 0) {
        ebx = 1;
        eax = 1;
        return rax;
    }
    errno_location ();
    *(rax) = 0x5f;
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405620 */
#include <stdint.h>
 
uint64_t fcn_00405620 (char * arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    r12 = rdi;
    rbx = rcx;
    rax = errno_location ();
    while (*((rbx + 0x26)) != 0) {
        *(rbp) = 0x5f;
        rax = fcn_0040e920 (0, 4, r12);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "failed to set the security context of %s");
        rcx = rbx;
        eax = 0;
        eax = error (0, *(rbp), rax);
        eax = 0;
        return rax;
    }
    *(rax) = 0x5f;
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4056a0 */
#include <stdint.h>
 
uint64_t fcn_004056a0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040bb50 (0x3d, 0, 0x40c510, 0x40c550, 0x40c5c0);
    *((rbx + 0x38)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405700 */
#include <stdint.h>
 
uint32_t fcn_00405700 (int64_t arg1) {
    rdi = arg1;
    xmm0 = 0;
    rbx = rdi;
    *((rdi + 0x40)) = 0;
    __asm ("movups xmmword [rdi], xmm0");
    __asm ("movups xmmword [rdi + 0x10], xmm0");
    __asm ("movups xmmword [rdi + 0x20], xmm0");
    __asm ("movups xmmword [rdi + 0x30], xmm0");
    eax = geteuid ();
    al = (eax == 0) ? 1 : 0;
    *((rbx + 0x1b)) = al;
    *((rbx + 0x1a)) = al;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405740 */
#include <stdint.h>
 
uint64_t fcn_00405740 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = errno_location ();
    edx = *(rax);
    al = (edx == 1) ? 1 : 0;
    dl = (edx == 0x16) ? 1 : 0;
    al |= dl;
    if (al != 0) {
        eax = *((rbx + 0x1a));
        eax ^= 1;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405770 */
#include <stdint.h>
 
int64_t fcn_00405770 (uint32_t arg1, char * arg2, size_t arg3, int64_t arg4, int64_t arg6) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    r12 = rsi;
    ebx = edx;
    r14d = *((rcx + 0x1c));
    r13d = *((rcx + 0x20));
    if (r8b != 0) {
        goto label_5;
    }
    rax = 0xff0000000000ff;
    if ((*((rdi + 0x18)) & rax) == 0) {
        goto label_6;
    }
    esi = *((r9 + 0x18));
    edx = *((rcx + 0x18));
label_0:
    eax = *((rcx + 0x18));
    eax = ~eax;
    ah |= 0xe;
    eax &= esi;
    if ((eax & 0xfff) == 0) {
        goto label_5;
    }
    edx &= esi;
    edx &= 0x1c0;
    eax = fcn_0040d0b0 (r12, ebx, rdx);
    if (eax != 0) {
        goto label_7;
    }
    do {
label_5:
        edx = r13d;
        esi = r14d;
        if (ebx == 0xffffffff) {
            goto label_8;
        }
        edi = ebx;
        eax = fchown ();
        if (eax == 0) {
            goto label_9;
        }
        rax = errno_location ();
        r14d = *(rax);
        r15 = rax;
        if (r14d == 1) {
            goto label_10;
        }
        if (r14d == 0x16) {
            goto label_10;
        }
label_2:
        al = fcn_00405740 (rbp);
        edx = 0;
        if (al == 0) {
            goto label_11;
        }
label_1:
        eax = edx;
        return rax;
INVALID_JUMP;
    } while (*((rdi + 0x2b)) == 0);
    esi = *((r9 + 0x18));
    edx = *((rdi + 0x10));
    goto label_0;
    do {
label_9:
        edx = 1;
        goto label_1;
label_8:
        rdi = r12;
        eax = lchown ();
    } while (eax == 0);
    rax = errno_location ();
    ebx = *(rax);
    r14 = rax;
    if (ebx == 1) {
        goto label_12;
    }
    if (ebx != 0x16) {
        goto label_2;
    }
label_12:
    edx = r13d;
    esi = 0xffffffff;
    rdi = r12;
    lchown ();
    *(r14) = ebx;
    goto label_2;
label_11:
    rax = fcn_0040ea00 (4, r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "failed to preserve ownership for %s");
    rbx = rax;
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbx);
    do {
label_4:
        edx = *((rbp + 0x24));
        edx = -edx;
        goto label_1;
label_10:
        edx = r13d;
        esi = 0xffffffff;
        edi = ebx;
        fchown ();
        *(r15) = r14d;
        goto label_2;
label_7:
        rax = errno_location ();
        rbx = rax;
        eax = *(rax);
        if (eax == 1) {
            goto label_13;
        }
        if (eax == 0x16) {
            goto label_13;
        }
label_3:
        rax = fcn_0040ea00 (4, r12);
        edx = 5;
        r12 = rax;
        rax = dcgettext (0, "clearing permissions for %s");
        rcx = r12;
        eax = 0;
        error (0, *(rbx), rax);
    } while (1);
label_13:
    if (*((rbp + 0x1b)) != 0) {
        goto label_3;
    }
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405960 */
#include <stdint.h>
 
int32_t fcn_00405960 (void) {
    ebx = *(0x0061f450);
    if (ebx != 0xffffffff) {
        eax = ebx;
        return eax;
    }
    eax = umask (0);
    ebx = eax;
    edi = eax;
    *(0x0061f450) = eax;
    umask (edi);
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x405990 */
#include <stdint.h>
 
uint64_t fcn_00405990 (int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, uint32_t arg_28h, int64_t arg1, char * arg2, int64_t arg3, uint32_t arg4, size_t arg5, uint32_t arg6) {
    uint32_t var_368h;
    uint32_t var_360h;
    uint32_t var_358h;
    int64_t var_354h;
    uint32_t var_350h;
    size_t var_348h;
    int64_t var_344h;
    uint32_t var_340h;
    uint32_t var_338h;
    uint32_t ptr;
    uint32_t var_328h;
    uint32_t var_323h;
    uint32_t var_322h;
    int64_t var_321h;
    func * rtld_fini;
    func * fini;
    char * var_310h;
    size_t s1;
    size_t s2;
    uint32_t var_2f8h;
    char * var_2f0h;
    size_t fd;
    char ** format;
    func * init;
    size_t src;
    char *** var_2c8h;
    uint32_t var_2c4h;
    char *** errname;
    char * newpath;
    int64_t var_2a9h;
    uint32_t var_2a8h;
    uint32_t var_2a0h;
    int64_t var_298h;
    int64_t var_290h;
    uint32_t var_288h;
    uint32_t var_280h;
    uint32_t var_27fh;
    void * var_278h;
    uint32_t var_270h;
    uint32_t var_268h;
    uint32_t var_260h;
    int64_t var_258h;
    uint32_t var_254h;
    uint32_t var_250h;
    int64_t var_248h;
    int64_t var_240h;
    int64_t var_228h;
    int64_t var_220h;
    int64_t var_218h;
    int64_t var_210h;
    uint32_t var_1e0h;
    uint32_t var_1d8h;
    uint32_t var_1d0h;
    int64_t var_1c8h;
    int64_t var_1b0h;
    uint32_t var_150h;
    uint32_t var_148h;
    int64_t var_140h;
    int64_t var_138h;
    int64_t var_130h;
    int64_t var_120h;
    int64_t var_118h;
    uint32_t var_110h;
    int64_t var_100h;
    int64_t var_f0h;
    int64_t var_e0h;
    int64_t var_d0h;
    uint32_t var_c0h;
    int64_t var_bch;
    uint32_t var_b8h;
    int64_t var_b0h;
    int64_t var_a8h;
    int64_t var_a4h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_fh;
    void * var_fh_2;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
label_17:
    r14 = rdi;
    r13 = r9;
    r12d = edx;
    *((rbp - 0x2b8)) = rsi;
    *(rbp - 0x2c0) = (*((rbp + 0x28)) != 0) ? 1 : 0;
    ebx = *((rbp + 0x10));
    *((rbp - 0x2f8)) = rcx;
    eax = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8;
    if (*((r9 + 0x18)) != 0) {
        if (al == 0) {
            goto label_101;
        }
        rax = *((rbp + 0x28));
        *(rax) = 0;
    }
label_101:
    rax = *((rbp + 0x20));
    rsi = r14;
    edi = 1;
    *(rax) = 0;
    rax = rbp - 0x270;
    *((rbp - 0x2d8)) = rax;
    rdx = rax;
    if (*((r13 + 4)) == 2) {
        goto label_102;
    }
    eax = xstat ();
    rsi = r14;
    r15b = (eax != 0) ? 1 : 0;
    if (r15b != 0) {
invalid_funccall(); //        void (*0x406237)() ();
    }
label_2:
    eax = *((rbp - 0x258));
    *((rbp - 0x2c8)) = eax;
    eax &= 0xf000;
    *((rbp - 0x2c4)) = eax;
    if (eax == 0x4000) {
        goto label_103;
    }
    if (bl != 0) {
        r10d = *(r13);
        rdi = *((r13 + 0x40));
        if (r10d == 0) {
            goto label_104;
        }
        fcn_0040ae60 (rdi, r14, *((rbp - 0x2d8)));
    }
label_3:
    *((rbp - 0x2e0)) = 1;
    eax = *((r13 + 4));
    if (eax != 4) {
        al = (eax == 3) ? 1 : 0;
        eax = (int32_t) al;
        eax &= ebx;
        *((rbp - 0x2e0)) = eax;
    }
    if (r12b == 0) {
        eax = *((rbp - 0x2c4));
        if (eax != 0x8000) {
            if (*((r13 + 0x14)) == 0) {
                goto label_105;
            }
            if (eax == 0x4000) {
                goto label_105;
            }
            if (eax == 0xa000) {
                goto label_105;
            }
        }
        if (*((r13 + 0x18)) != 0) {
            goto label_105;
        }
        if (*((r13 + 0x2c)) != 0) {
            goto label_105;
        }
        if (*((r13 + 0x17)) != 0) {
            goto label_105;
        }
        r9d = *(r13);
        if (r9d != 0) {
            goto label_105;
        }
        if (*((r13 + 0x15)) != 0) {
            goto label_105;
        }
        rax = rbp - 0x1e0;
        rsi = *((rbp - 0x2b8));
        edi = 1;
        rdx = rax;
        *((rbp - 0x2f0)) = rax;
        eax = xstat ();
        r8d = 1;
        *(rbp - 0x2d0) = (eax != 0) ? 1 : 0;
        if (*((rbp - 0x2d0)) != 0) {
            goto label_106;
        }
label_8:
        rax = *((rbp - 0x1d8));
        if (*((rbp - 0x268)) == rax) {
            goto label_107;
        }
label_26:
        if (*((r13 + 4)) == 2) {
            goto label_108;
        }
label_23:
        if (*((rbp - 0x2c4)) == 0x4000) {
            goto label_109;
        }
        if (*((r13 + 0x2d)) != 0) {
            goto label_110;
        }
label_21:
        eax = *((r13 + 8));
        if (*((r13 + 0x18)) != 0) {
            goto label_111;
        }
        if (eax == 2) {
            goto label_22;
        }
        if (eax == 3) {
            goto label_112;
        }
label_28:
        if (*((rbp - 0x2d0)) != 0) {
            goto label_22;
        }
        eax = *((rbp - 0x1c8));
        ecx = r8d;
        ecx ^= 1;
        edx = eax;
        edx &= 0xf000;
        if (edx == 0x4000) {
            goto label_113;
        }
        if (*((rbp - 0x2c4)) == 0x4000) {
            goto label_114;
        }
        r12d = *(r13);
        if (bl != 0) {
label_44:
            if (r12d == 3) {
                goto label_115;
            }
            *((rbp - 0x300)) = cl;
            al = fcn_0040aef0 (*((r13 + 0x38)), *((rbp - 0x2b8)), *((rbp - 0x2f0)));
            ecx = *((rbp - 0x300));
            if (al != 0) {
                goto label_116;
            }
            if (*((rbp - 0x2c4)) != 0x4000) {
                eax = *((rbp - 0x1c8));
                edx = *((rbp - 0x1c8));
                edx &= 0xf000;
                if (edx == 0x4000) {
                    goto label_117;
                }
            }
label_41:
            r12d = *(r13);
        }
        eax = *((r13 + 0x18));
        if (al != 0) {
            goto label_118;
        }
        if (r12d != 0) {
            goto label_119;
        }
label_57:
        edx = *((rbp - 0x1c8));
        *((rbp - 0x300)) = 0;
        edx &= 0xf000;
        dl = (edx == 0x4000) ? 1 : 0;
        dl |= al;
        if (dl != 0) {
            goto label_42;
        }
        eax = *((r13 + 0x15));
        *((rbp - 0x2d0)) = al;
        if (al == 0) {
            if (*((r13 + 0x22)) == 0) {
                goto label_120;
            }
            if (*((rbp - 0x1d0)) <= 1) {
                goto label_120;
            }
        }
label_56:
        *((rbp - 0x2d0)) = cl;
        eax = unlink (*((rbp - 0x2b8)));
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            rax = errno_location ();
            ecx = *((rbp - 0x2d0));
            r12 = rax;
            if (*(rax) != 2) {
                goto label_121;
            }
        }
        eax = *((r13 + 0x2e));
        *((rbp - 0x2d0)) = al;
        if (al != 0) {
            goto label_122;
        }
        if (bl == 0) {
            goto label_123;
        }
        *((rbp - 0x2d0)) = bl;
        *((rbp - 0x300)) = 0;
        if (*((r13 + 0x38)) == 0) {
            goto label_124;
        }
label_0:
        if (*((r13 + 0x18)) != 0) {
            goto label_125;
        }
        esi = *(r13);
        if (esi != 0) {
            goto label_126;
        }
        rdx = rbp - 0x1e0;
        if (cl == 0) {
            goto label_127;
        }
label_31:
        eax = *((rdx + 0x18));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_1;
        }
        al = fcn_0040aef0 (*((r13 + 0x38)), *((rbp - 0x2b8)), rdx);
        if (al == 0) {
            goto label_1;
        }
        rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
        r12 = rax;
        rax = fcn_0040e920 (0, 4, r14);
        edx = 5;
        rbx = rax;
label_24:
        rax = dcgettext (0, "will not copy %s through just-created symlink %s");
        r8 = r12;
        rcx = rbx;
label_83:
        eax = 0;
        error (0, 0, rax);
    }
label_9:
    *((rbp - 0x2d0)) = 1;
    ecx = 0;
    *((rbp - 0x300)) = 0;
label_42:
    if (bl != 0) {
        goto label_128;
    }
label_1:
    if (*((r13 + 0x2e)) == 0) {
        goto label_124;
    }
    if (*((r13 + 0x18)) != 0) {
        goto label_129;
    }
label_15:
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_130;
    }
    fcn_00404d70 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
label_4:
    if (*((r13 + 0x18)) != 0) {
        goto label_131;
    }
label_16:
    if (*((r13 + 0x22)) != 0) {
        goto label_7;
    }
    eax = *((rbp - 0x2d0));
    *((rbp - 0x2f0)) = 0;
    *((rbp - 0x2c0)) = eax;
label_5:
    r12d = *((rbp - 0x2c8));
    r12d &= 0xfff;
    if (*((r13 + 0x2b)) != 0) {
        r12d = *((r13 + 0x10));
        r12d &= 0xfff;
    }
    if (*((r13 + 0x1d)) != 0) {
        goto label_132;
    }
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_133;
    }
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    *((rbp - 0x308)) = 0;
    if (al == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
label_13:
    eax = *((r13 + 0x2c));
    *((rbp - 0x2e8)) = al;
    if (al == 0) {
        goto label_134;
    }
    if (*(r14) != 0x2f) {
        rdi = *((rbp - 0x2b8));
        rax = fcn_0040ac60 ();
        esi = 0x418d7b;
        ecx = 2;
        rdi = rax;
        r12 = rax;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (*(r14) > 0x2f) ? 1 : 0;
        if (al != 0) {
            goto label_135;
        }
label_33:
        free (r12);
    }
    ecx = *((r13 + 0x16));
    eax = fcn_00409fd0 (r14, 0xffffff9c, *((rbp - 0x2b8)), rcx);
    if (eax < 0) {
        goto label_136;
    }
    eax = *((rbp - 0x2e8));
    *((rbp - 0x321)) = 0;
    r8d = 0;
    *((rbp - 0x2e0)) = al;
label_128:
    if (*((r13 + 0x38)) != 0) {
        goto label_0;
    }
    goto label_1;
label_102:
    eax = lxstat ();
    rsi = r14;
    r15b = (eax != 0) ? 1 : 0;
    if (r15b == 0) {
        goto label_2;
    }
label_103:
    if (*((r13 + 0x2a)) == 0) {
        goto label_137;
    }
    if (bl == 0) {
        goto label_3;
    }
    goto label_138;
label_125:
    if (*((r13 + 0x2e)) != 0) {
        goto label_129;
    }
label_124:
    if (*((r13 + 0x2a)) == 0) {
        goto label_4;
    }
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_4;
    }
label_6:
    rdx = *((rbp - 0x270));
    rdi = *((rbp - 0x268));
    if (bl == 0) {
        goto label_139;
    }
    rax = fcn_00409a10 (*((rbp - 0x2b8)), rdi, rdx);
    *((rbp - 0x2f0)) = rax;
label_19:
    if (*((rbp - 0x2f0)) == 0) {
        goto label_10;
    }
label_11:
    al = fcn_0040ef80 (r14, *((rbp - 0x2f0)));
    if (al != 0) {
        goto label_140;
    }
    al = fcn_0040ef80 (*((rbp - 0x2b8)), *((rbp - 0x2f0)));
    if (al != 0) {
        goto label_141;
    }
    eax = *((r13 + 4));
    if (eax == 4) {
        goto label_10;
    }
    if (eax == 3) {
        if (bl != 0) {
            goto label_10;
        }
    }
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2f0)));
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "will not create hard link %s to directory %s");
    r8 = r12;
    rcx = rbx;
    eax = 0;
    rax = error (0, 0, rax);
label_12:
    if (*((r13 + 0x25)) != 0) {
invalid_funccall(); //        void (*0x406e0d)() ();
    }
label_7:
    if (*((r13 + 0x17)) == 0) {
        goto label_142;
    }
    *((rbp - 0x2f0)) = 0;
label_10:
    if (*((r13 + 0x18)) != 0) {
        goto label_143;
    }
    eax = *((rbp - 0x2d0));
    *((rbp - 0x2c0)) = eax;
    goto label_5;
label_129:
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_131;
    }
    if (*((r13 + 0x2a)) != 0) {
        goto label_6;
    }
label_131:
    if (*((rbp - 0x260)) == 1) {
        goto label_144;
    }
    if (*((r13 + 0x22)) != 0) {
        goto label_7;
    }
    *((rbp - 0x2f0)) = 0;
label_143:
    eax = rename (r14, *((rbp - 0x2b8)));
    if (eax == 0) {
        goto label_145;
    }
    rax = errno_location ();
    r12 = rax;
    eax = *(rax);
    if (eax == 0x16) {
        goto label_146;
    }
    if (eax != 0x12) {
        goto label_147;
    }
    rdi = *((rbp - 0x2b8));
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_148;
    }
    eax = unlink (rdi);
    if (eax != 0) {
        if (*(r12) != 2) {
            goto label_149;
        }
    }
    al = (*((rbp - 0x2c4)) != 0x4000) ? 1 : 0;
    al &= *((r13 + 0x2e));
    *((rbp - 0x2d0)) = al;
    if (al != 0) {
        goto label_150;
    }
label_25:
    *((rbp - 0x2c0)) = 1;
    *((rbp - 0x2d0)) = 1;
    goto label_5;
label_105:
    rax = rbp - 0x1e0;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    rdx = rax;
    *((rbp - 0x2f0)) = rax;
    eax = lxstat ();
    r8d = r12d;
    *(rbp - 0x2d0) = (eax != 0) ? 1 : 0;
    if (*((rbp - 0x2d0)) == 0) {
        goto label_8;
    }
label_106:
    rax = errno_location ();
    if (*(rax) == 2) {
        goto label_9;
    }
    *((rbp - 0x2c0)) = rax;
    r15d = r12d;
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot stat %s");
    r8 = *((rbp - 0x2c0));
    rcx = rbx;
    eax = 0;
    error (0, *(r8), rax);
invalid_funccall(); //    void (*0x406271)() ();
label_142:
    if (*((rbp - 0x260)) > 1) {
        goto label_151;
    }
    eax = *((r13 + 4));
    if (bl != 0) {
        if (eax == 3) {
            goto label_151;
        }
    }
    *((rbp - 0x2f0)) = 0;
    if (eax != 4) {
        goto label_10;
    }
label_151:
    rax = fcn_00409a10 (*((rbp - 0x2b8)), *((rbp - 0x268)), *((rbp - 0x270)));
    *((rbp - 0x2f0)) = rax;
label_20:
    if (*((rbp - 0x2f0)) == 0) {
        goto label_10;
    }
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_11;
    }
    ecx = *((r13 + 0x2e));
    r8d = *((rbp - 0x2e0));
    al = fcn_00404f50 (*((rbp - 0x2f0)), *((rbp - 0x2b8)), 1);
    if (al == 0) {
        goto label_12;
    }
label_22:
    r15d = 1;
invalid_funccall(); //    void (*0x406271)() ();
label_104:
    al = fcn_0040aef0 (rdi, r14, *((rbp - 0x2d8)));
    if (al != 0) {
        goto label_152;
    }
label_138:
    fcn_0040ae60 (*((r13 + 0x40)), r14, *((rbp - 0x2d8)));
    goto label_3;
label_132:
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    if (al == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
    eax = r12d;
    eax &= 0x3f;
    *((rbp - 0x308)) = eax;
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_13;
    }
label_18:
    rdx = *((rbp - 0x268));
    rcx = *((rbp - 0x270));
    rax = *((rbp - 0x2e8));
    if (*((rbp - 0x2e8)) != 0) {
        goto label_153;
    }
    goto label_154;
    do {
label_14:
        rax = *(rax);
        if (rax == 0) {
            goto label_154;
        }
INVALID_JUMP;
    } while (*((rax + 8)) != rdx);
    if (*((rax + 0x10)) != rcx) {
        goto label_14;
    }
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    rbx = rax;
label_34:
    rax = dcgettext (0, "cannot copy cyclic symbolic link %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
invalid_funccall(); //    void (*0x406910)() ();
label_126:
    if (*((r13 + 0x2e)) != 0) {
        goto label_15;
    }
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_16;
    }
label_130:
    if (*((r13 + 0x2a)) == 0) {
        goto label_16;
    }
    goto label_6;
label_134:
    eax = *((r13 + 0x17));
    *((rbp - 0x321)) = al;
    if (al != 0) {
        goto label_155;
    }
    eax = *((rbp - 0x2c4));
    if (eax == 0x8000) {
        goto label_156;
    }
    r8b = (eax != 0xa000) ? 1 : 0;
    r8b &= *((r13 + 0x14));
    if (r8b != 0) {
        goto label_156;
    }
    *((rbp - 0x2c0)) = r8b;
    if (*((rbp - 0x2c4)) == 0x1000) {
        goto label_157;
    }
    ecx = *((rbp - 0x2c8));
    eax = *((rbp - 0x2c8));
    eax &= 0xb000;
    r12b = (eax == 0x2000) ? 1 : 0;
    al = (*((rbp - 0x2c4)) == 0xc000) ? 1 : 0;
    r12b |= al;
    *((rbp - 0x2e0)) = r12b;
    if (r12b == 0) {
        goto label_158;
    }
    edx = *((rbp - 0x308));
    rax = *((rbp - 0x248));
    edi = 0;
    rsi = *((rbp - 0x2b8));
    edx = ~edx;
    *((rbp - 0xc0)) = rax;
    edx &= ecx;
    rcx = rbp - 0xc0;
    eax = xmknod ();
    r8d = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x321)) = r8b;
    if (eax == 0) {
invalid_funccall(); //        void (*0x405f45)() ();
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
label_40:
    rax = dcgettext (0, "cannot create special file %s");
    r12 = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), r12);
label_154:
    rsi = *((rbp - 0x2e8));
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    *((rbp - 0x318)) = rax;
    *(rax) = rsi;
    *((rax + 8)) = rdx;
    *((rax + 0x10)) = rcx;
    if (*((rbp - 0x2d0)) == 0) {
        eax = *((rbp - 0x1c8));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_159;
        }
    }
    esi = *((rbp - 0x308));
    rdi = *((rbp - 0x2b8));
    esi = ~esi;
    esi &= r12d;
    eax = mkdir ();
    if (eax != 0) {
        goto label_160;
    }
    rsi = *((rbp - 0x2b8));
    rdx = rbp - 0x1e0;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_161;
    }
    r12d = *((rbp - 0x1c8));
    *((rbp - 0x321)) = 0;
    eax = r12d;
    eax &= 0x1c0;
    if (eax != 0x1c0) {
        esi |= 0x1c0;
        eax = chmod (*((rbp - 0x2b8)), r12d);
        *((rbp - 0x344)) = r12d;
        *((rbp - 0x321)) = 1;
        if (eax != 0) {
            goto label_162;
        }
    }
    rax = *((rbp + 0x18));
    if (*(rax) == 0) {
        goto label_163;
    }
label_48:
    if (*((r13 + 0x2e)) != 0) {
        if (*((r13 + 0x18)) == 0) {
            goto label_164;
        }
        rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
        edx = 5;
        r12 = rax;
        rax = dcgettext (0, "created directory %s\n");
        rdx = r12;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
    }
label_43:
    rax = *((rbp - 0x2f8));
    r12b = (rax != 0) ? 1 : 0;
    r12b &= *((r13 + 0x1c));
    *((rbp - 0x2e0)) = r12b;
    if (r12b != 0) {
        goto label_165;
    }
label_32:
    __asm ("movdqu xmm0, xmmword [r13]");
    __asm ("movdqu xmm1, xmmword [r13 + 0x10]");
    esi = 2;
    __asm ("movdqu xmm2, xmmword [r13 + 0x20]");
    __asm ("movdqu xmm3, xmmword [r13 + 0x30]");
    rax = *((r13 + 0x40));
    *((rbp - 0xc0)) = xmm0;
    *((rbp - 0xb0)) = xmm1;
    *((rbp - 0xa0)) = xmm2;
    *((rbp - 0x90)) = xmm3;
    *((rbp - 0x80)) = rax;
    rax = fcn_0040f480 (r14);
    *((rbp - 0x330)) = rax;
    if (rax == 0) {
        goto label_166;
    }
    if (*((r13 + 4)) == 3) {
        *((rbp - 0xbc)) = 2;
    }
    rax = *((rbp - 0x330));
    if (*(rax) == 0) {
        goto label_167;
    }
    rax = rbp - 0x150;
    ecx = 0;
    *((rbp - 0x338)) = r15b;
    r12 = *((rbp - 0x330));
    *((rbp - 0x310)) = rax;
    rax = rbp - 0xc0;
    r15d = ecx;
    *((rbp - 0x320)) = rax;
    rax = rbp - 0x2a0;
    *((rbp - 0x340)) = r13;
    r13 = *((rbp + 0x20));
    *((rbp - 0x2e0)) = 1;
    *((rbp - 0x2f8)) = rax;
    *((rbp - 0x2e8)) = r14;
    *((rbp - 0x328)) = ebx;
    while (*((rbp - 0x2a0)) == 0) {
        r15b |= *((rbp - 0x150));
        strlen (r12);
        r12 = r12 + rax + 1;
        if (*(r12) == 0) {
            goto label_168;
        }
        rdi = *((rbp - 0x2e8));
        edx = 0;
        rsi = r12;
        rax = fcn_0040b0c0 ();
        rdi = *((rbp - 0x2b8));
        edx = 0;
        rsi = r12;
        rbx = rax;
        rax = fcn_0040b0c0 ();
        r14 = rax;
        rax = *((rbp + 0x18));
        eax = *(rax);
        *((rbp - 0x150)) = al;
        al = fcn_00405990 (rbx, r14, *((rbp - 0x2c0)), *((rbp - 0x2d8)), *((rbp - 0x318)), *((rbp - 0x320)));
        goto label_17;
        *((rbp - 0x2e0)) &= al;
        eax = *((rbp - 0x2a0));
        *(r13) |= al;
        free (r14);
        free (rbx);
    }
label_168:
    r12d = r15d;
    r14 = *((rbp - 0x2e8));
    r15d = *((rbp - 0x338));
    r13 = *((rbp - 0x340));
    ebx = *((rbp - 0x328));
label_66:
    free (*((rbp - 0x330)));
    rax = *((rbp + 0x18));
    *(rax) = r12b;
label_61:
    *((rbp - 0x2e8)) = 0;
    r8d = 0;
invalid_funccall(); //    void (*0x405f45)() ();
label_133:
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    if (al == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
    eax = r12d;
    eax &= 0x12;
    *((rbp - 0x308)) = eax;
    goto label_18;
label_137:
    rax = fcn_0040ea00 (4, rsi);
    edx = 5;
    rbx = rax;
    if (*((r13 + 0x19)) == 0) {
invalid_funccall(); //        void (*0x406e18)() ();
    }
label_55:
    dcgettext (0, "omitting directory %s");
label_67:
    rdx = *((rbp - 0x270));
    *((rbp - 0x300)) = 0;
label_139:
    rax = fcn_004099d0 (*((rbp - 0x268)), rdx);
    *((rbp - 0x2f0)) = rax;
    goto label_19;
label_144:
    rax = fcn_004099d0 (*((rbp - 0x268)), *((rbp - 0x270)));
    *((rbp - 0x2f0)) = rax;
    goto label_20;
label_110:
    ecx = 0;
    if (*((r13 + 0x1f)) != 0) {
        ecx = 1;
        if (*((r13 + 0x18)) == 0) {
            goto label_169;
        }
        rax = *((rbp - 0x270));
        cl = (*((rbp - 0x1e0)) != rax) ? 1 : 0;
    }
label_169:
    *((rbp - 0x300)) = r8b;
    eax = fcn_0040fd60 (*((rbp - 0x2b8)), *((rbp - 0x2f0)), *((rbp - 0x2d8)), 0);
    r8d = *((rbp - 0x300));
    if (eax < 0) {
        goto label_21;
    }
    if (*((rbp + 0x28)) != 0) {
        rax = *((rbp + 0x28));
        *(rax) = 1;
    }
    rax = fcn_00409a10 (*((rbp - 0x2b8)), *((rbp - 0x268)), *((rbp - 0x270)));
    if (rax == 0) {
        goto label_22;
    }
    ecx = *((r13 + 0x2e));
    r8d = *((rbp - 0x2e0));
    al = fcn_00404f50 (rax, *((rbp - 0x2b8)), 1);
    if (al != 0) {
        goto label_22;
    }
    if (*((r13 + 0x25)) == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
label_108:
    r12d = 0;
    ecx = 0;
label_47:
    eax = *((rbp - 0x258));
    r9 = *((rbp - 0x2f0));
    rdx = *((rbp - 0x2d8));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_170;
    }
label_27:
    edi = *(r13);
    if (edi == 0) {
        goto label_171;
    }
    if (r12b != 0) {
        goto label_172;
    }
    if (*((r13 + 0x18)) != 0) {
        goto label_23;
    }
    if (*((r13 + 4)) == 2) {
        goto label_23;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_23;
    }
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_23;
    }
label_30:
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040e920 (0, 4, r14);
    edx = 5;
    esi = "%s and %s are the same file";
    rbx = rax;
    goto label_24;
label_155:
    r8d = *((rbp - 0x2e0));
    edx = *((r13 + 0x16));
    ecx = 0;
    al = fcn_00404f50 (r14, *((rbp - 0x2b8)), rdx);
    r8d = 0;
    *((rbp - 0x321)) = 0;
    *((rbp - 0x2e0)) = al;
    if (al != 0) {
invalid_funccall(); //        void (*0x405f45)() ();
    }
invalid_funccall(); //    void (*0x406910)() ();
label_148:
    eax = rmdir ();
    if (eax == 0) {
        goto label_25;
    }
    if (*(r12) == 2) {
        goto label_25;
    }
label_149:
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
    r13 = rax;
    rax = fcn_0040e920 (0, 4, r14);
    edx = 5;
    rbx = rax;
label_29:
    rax = dcgettext (0, "inter-device move failed: %s to %s; unable to remove target");
    r8 = r13;
    rcx = rbx;
    eax = 0;
    error (0, *(r12), rax);
    fcn_00409980 (*((rbp - 0x268)), *((rbp - 0x270)));
invalid_funccall(); //    void (*0x406271)() ();
label_145:
    if (*((r13 + 0x2e)) != 0) {
        goto label_173;
    }
label_39:
    if (*((r13 + 0x21)) != 0) {
        goto label_174;
    }
label_38:
    if (*((rbp + 0x28)) != 0) {
        rax = *((rbp + 0x28));
        *(rax) = 1;
    }
    if (bl == 0) {
        goto label_22;
    }
    r15d = ebx;
    fcn_0040ae60 (*((r13 + 0x38)), *((rbp - 0x2b8)), *((rbp - 0x2d8)));
invalid_funccall(); //    void (*0x406271)() ();
label_107:
    rax = *((rbp - 0x1e0));
    if (*((rbp - 0x270)) != rax) {
        goto label_26;
    }
    r12d = *((r13 + 0x17));
    if (r12b != 0) {
        goto label_37;
    }
    if (*((r13 + 4)) == 2) {
        goto label_175;
    }
    rax = rbp - 0x150;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    *((rbp - 0x300)) = r8b;
    rdx = rax;
    *((rbp - 0x310)) = rax;
    eax = lxstat ();
    r8d = *((rbp - 0x300));
    if (eax != 0) {
        goto label_23;
    }
    rax = rbp - 0xc0;
    rsi = r14;
    edi = 1;
    rdx = rax;
    *((rbp - 0x320)) = rax;
    eax = lxstat ();
    r8d = *((rbp - 0x300));
    if (eax != 0) {
        goto label_23;
    }
    rax = *((rbp - 0x148));
    if (*((rbp - 0xb8)) == rax) {
        rax = *((rbp - 0x150));
        r12b = (*((rbp - 0xc0)) == rax) ? 1 : 0;
    }
    eax = *((rbp - 0xa8));
    r9 = *((rbp - 0x310));
    rdx = *((rbp - 0x320));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_27;
    }
    eax = *((rbp - 0x138));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_27;
    }
    if (*((r13 + 0x15)) == 0) {
        goto label_27;
    }
    goto label_23;
label_109:
    if (*((r13 + 0x18)) == 0) {
        goto label_28;
    }
    eax = *((r13 + 8));
label_111:
    if (eax == 2) {
        goto label_176;
    }
    if (eax == 3) {
        goto label_177;
    }
    if (eax != 4) {
        goto label_28;
    }
    if (*((r13 + 0x2f)) == 0) {
        goto label_28;
    }
    *((rbp - 0x300)) = r8b;
    al = fcn_00404bd0 (*((rbp - 0x2b8)), *((rbp - 0x1c8)));
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_28;
    }
label_177:
    rax = *((rbp - 0x2f0));
    *((rbp - 0x300)) = r8b;
    al = fcn_00404e20 (r13, *((rbp - 0x2b8)), rax + 0x18);
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_28;
    }
label_176:
    if (*((rbp + 0x28)) == 0) {
        goto label_22;
    }
label_51:
    rax = *((rbp + 0x28));
    r15d = 1;
    *(rax) = 1;
invalid_funccall(); //    void (*0x406271)() ();
label_147:
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
    r13 = rax;
    rax = fcn_0040e920 (0, 4, r14);
    edx = 5;
    esi = "cannot move %s to %s";
    rbx = rax;
    goto label_29;
label_156:
    eax = *((rbp - 0x258));
    sil = (*((r13 + 4)) == 2) ? 1 : 0;
    *((rbp - 0x318)) = eax;
    eax = *((r13 + 0x23));
    esi <<= 0x11;
    *((rbp - 0x310)) = al;
    eax = 0;
    eax = fcn_0040ae10 (r14, 0, rdx, rcx);
    *((rbp - 0x2c0)) = eax;
    if (eax < 0) {
        goto label_178;
    }
    esi = *((rbp - 0x2c0));
    rdx = rbp - 0x150;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_179;
    }
    rax = *((rbp - 0x148));
    if (*((rbp - 0x268)) != rax) {
        goto label_180;
    }
    rax = *((rbp - 0x150));
    if (*((rbp - 0x270)) != rax) {
        goto label_180;
    }
    r12d &= 0x1ff;
    *((rbp - 0x354)) = r12d;
    if (*((rbp - 0x2d0)) != 0) {
        goto label_92;
    }
    r12 = *((rbp - 0x2b8));
    esi -= esi;
    eax = 0;
    esi &= 0xfffffe00;
    esi += 0x201;
    eax = fcn_0040ae10 (r12, rsi, rdx, rcx);
    ecx = eax;
    *((rbp - 0x2e8)) = eax;
    rax = 0xff000000ff00;
    if ((*((r13 + 0x20)) & rax) == 0) {
        goto label_181;
    }
    if (ecx >= 0) {
        goto label_182;
    }
label_68:
    rax = errno_location ();
    r12 = rax;
    if (*((r13 + 0x16)) == 0) {
        goto label_183;
    }
    eax = unlink (*((rbp - 0x2b8)));
    if (eax != 0) {
        goto label_184;
    }
    if (*((r13 + 0x2e)) != 0) {
        goto label_185;
    }
label_96:
    eax = *((r13 + 0x21));
    ecx = *((rbp - 0x308));
    *((rbp - 0x2d0)) = al;
    *((rbp - 0x348)) = ecx;
    if (al != 0) {
        goto label_186;
    }
label_62:
    r12d = *((rbp - 0x348));
    eax = 0;
    r12d = ~r12d;
    r12d &= *((rbp - 0x354));
    edx = r12d;
    *((rbp - 0x2e0)) = r12d;
    eax = fcn_0040ae10 (*((rbp - 0x2b8)), 0xc1, edx, rcx);
    *((rbp - 0x2e8)) = eax;
    rax = errno_location ();
    edx = *((rbp - 0x2e8));
    r12d = *(rax);
    *((rbp - 0x2f8)) = rax;
    edx >>= 0x1f;
    al = (r12d == 0x11) ? 1 : 0;
    al &= dl;
    *((rbp - 0x320)) = al;
    if (al == 0) {
        goto label_187;
    }
    eax = *((r13 + 0x18));
    r12d = 0x11;
    *((rbp - 0x2d0)) = al;
    if (al == 0) {
        goto label_188;
    }
label_70:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot create regular file %s");
    rcx = *((rbp - 0x2e0));
label_46:
    eax = 0;
    error (0, r12d, rax);
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
label_171:
    ecx = *((r13 + 0x18));
    if (cl != 0) {
        goto label_189;
    }
    if (*((r13 + 0x15)) != 0) {
        goto label_189;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
label_59:
        eax = *((r9 + 0x18));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_190;
        }
label_36:
        ecx = *((r13 + 0x18));
label_35:
        if (cl == 0) {
            goto label_63;
        }
        eax = *((rbp - 0x258));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_191;
        }
    }
label_63:
    if (*((r13 + 0x2c)) != 0) {
        goto label_192;
    }
    if ((*((r13 + 0x14)) & 0xff00ff00) != 0) {
        eax = *((r9 + 0x18));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_192;
        }
    }
    if (*((r13 + 4)) != 2) {
        goto label_30;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_193;
    }
    __asm ("movdqa xmm4, xmmword [rdx]");
    *((rbp - 0xc0)) = xmm4;
    __asm ("movdqa xmm5, xmmword [rdx + 0x10]");
    *((rbp - 0xb0)) = xmm5;
    __asm ("movdqa xmm6, xmmword [rdx + 0x20]");
    *((rbp - 0xa0)) = xmm6;
    __asm ("movdqa xmm7, xmmword [rdx + 0x30]");
    *((rbp - 0x90)) = xmm7;
    __asm ("movdqa xmm4, xmmword [rdx + 0x40]");
    *((rbp - 0x80)) = xmm4;
    __asm ("movdqa xmm5, xmmword [rdx + 0x50]");
    *((rbp - 0x70)) = xmm5;
    __asm ("movdqa xmm6, xmmword [rdx + 0x60]");
    *((rbp - 0x60)) = xmm6;
    __asm ("movdqa xmm7, xmmword [rdx + 0x70]");
    *((rbp - 0x50)) = xmm7;
    __asm ("movdqa xmm4, xmmword [rdx + 0x80]");
    *((rbp - 0x40)) = xmm4;
label_76:
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_194;
    }
    __asm ("movdqa xmm5, xmmword [r9]");
    *((rbp - 0x150)) = xmm5;
    __asm ("movdqa xmm6, xmmword [r9 + 0x10]");
    *((rbp - 0x140)) = xmm6;
    __asm ("movdqa xmm7, xmmword [r9 + 0x20]");
    *((rbp - 0x130)) = xmm7;
    __asm ("movdqa xmm4, xmmword [r9 + 0x30]");
    *((rbp - 0x120)) = xmm4;
    __asm ("movdqa xmm5, xmmword [r9 + 0x40]");
    *((rbp - 0x110)) = xmm5;
    __asm ("movdqa xmm6, xmmword [r9 + 0x50]");
    *((rbp - 0x100)) = xmm6;
    __asm ("movdqa xmm7, xmmword [r9 + 0x60]");
    *((rbp - 0xf0)) = xmm7;
    __asm ("movdqa xmm4, xmmword [r9 + 0x70]");
    *((rbp - 0xe0)) = xmm4;
    __asm ("movdqa xmm5, xmmword [r9 + 0x80]");
    *((rbp - 0xd0)) = xmm5;
label_75:
    rax = *((rbp - 0x148));
    if (*((rbp - 0xb8)) != rax) {
        goto label_23;
    }
    rax = *((rbp - 0x150));
    if (*((rbp - 0xc0)) != rax) {
        goto label_23;
    }
    if (*((r13 + 0x17)) == 0) {
        goto label_30;
    }
label_37:
    *((rbp - 0x2d0)) = 1;
    goto label_23;
label_152:
    *((rbp - 0x2b8)) = al;
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "warning: source file %s specified more than once");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    r8d = *((rbp - 0x2b8));
    r15d = r8d;
invalid_funccall(); //    void (*0x406271)() ();
label_140:
    rax = fcn_0040e920 (1, 4, *(0x00621988));
    rbx = rax;
    rax = fcn_0040e920 (0, 4, *(0x00621990));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot copy a directory, %s, into itself, %s");
    r8 = rbx;
    rcx = r12;
    eax = 0;
    error (0, 0, rax);
    rax = *((rbp + 0x20));
    *(rax) = 1;
    goto label_12;
label_127:
    rax = rbp - 0xc0;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    rdx = rax;
    r12 = rax;
    eax = lxstat ();
    if (eax != 0) {
        goto label_1;
    }
    rdx = r12;
    goto label_31;
label_165:
    *((rbp - 0x2e8)) = 0;
    r8d = 0;
    rcx = *((rbp - 0x270));
    if (*(rax) != rcx) {
invalid_funccall(); //        void (*0x405f45)() ();
    }
    goto label_32;
label_135:
    rdx = rbp - 0x150;
    esi = 0x418d7b;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_33;
    }
    rdx = rbp - 0xc0;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_33;
    }
    rax = *((rbp - 0xb8));
    if (*((rbp - 0x148)) == rax) {
        goto label_195;
    }
label_69:
    free (r12);
    rax = fcn_0040ead0 (0, 3, *((rbp - 0x2b8)));
    edx = 5;
    esi = "%s: can make relative symbolic links only in current directory";
    rbx = rax;
    goto label_34;
label_189:
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_23;
    }
    if (r12b != 0) {
        if (*((r9 + 0x10)) > 1) {
            goto label_196;
        }
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_35;
    }
label_190:
    rax = *((r9 + 8));
    if (*((rdx + 8)) != rax) {
        goto label_23;
    }
    rax = *(r9);
    if (*(rdx) != rax) {
        goto label_23;
    }
    if (*((r13 + 0x17)) == 0) {
        goto label_36;
    }
    goto label_37;
label_174:
    rcx = r13;
    edx = 1;
    fcn_00405620 (*((rbp - 0x2b8)), 0);
    goto label_38;
label_173:
    edx = 5;
    rax = dcgettext (0, "renamed ");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    fcn_00404d70 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
    goto label_39;
label_160:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot create directory %s";
    rbx = rax;
    goto label_40;
label_113:
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_41;
    }
label_117:
    if (*((r13 + 0x18)) == 0) {
        goto label_197;
    }
    r12d = *(r13);
    if (r12d == 0) {
        goto label_197;
    }
label_45:
    edx = *((rbp - 0x258));
    edx &= 0xf000;
    if (edx == 0x4000) {
        goto label_198;
    }
label_50:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ad40 (r14);
    ecx = *((rbp - 0x2f0));
    r8 = rax;
    if (*(rax) == 0x2e) {
        goto label_199;
    }
label_49:
    if (r12d != 3) {
        rdi = r8;
        *((rbp - 0x2f0)) = cl;
        *((rbp - 0x308)) = r8;
        rax = strlen (rdi);
        *((rbp - 0x2d0)) = rax;
        rax = fcn_0040ad40 (*((rbp - 0x2b8)));
        rdi = rax;
        *((rbp - 0x300)) = rax;
        rax = strlen (rdi);
        rcx = imp.__libc_start_main;
        r12 = rax;
        rdi = rcx;
        *((rbp - 0x310)) = rcx;
        rax = strlen (rdi);
        ecx = *((rbp - 0x2f0));
        r9 = rax;
        rax = r12 + rax;
        *((rbp - 0x318)) = r9;
        if (*((rbp - 0x2d0)) != rax) {
            goto label_82;
        }
        r8 = *((rbp - 0x308));
        *((rbp - 0x2d0)) = cl;
        rdi = r8;
        *((rbp - 0x2f0)) = r8;
        eax = memcmp (rdi, *((rbp - 0x300)), r12);
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            goto label_82;
        }
        r8 = *((rbp - 0x2f0));
        eax = strcmp (r8 + r12, *((rbp - 0x310)));
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            goto label_82;
        }
        *((rbp - 0x300)) = cl;
        rax = strlen (*((rbp - 0x2b8)));
        r9 = *((rbp - 0x318));
        *((rbp - 0x2f0)) = rax;
        rax = fcn_004112e0 (r9 + rax + 1);
        rdx = *((rbp - 0x2f0));
        rsi = *((rbp - 0x2b8));
        r12 = rax;
        rax = imp.__libc_start_main;
        rdi = r12;
        *((rbp - 0x2d0)) = rax;
        rax = mempcpy ();
        strcpy (rax, *((rbp - 0x2d0)));
        rax = rbp - 0xc0;
        rsi = r12;
        edi = 1;
        rdx = rax;
        eax = xstat ();
        *((rbp - 0x2d0)) = eax;
        free (r12);
        eax = *((rbp - 0x2d0));
        ecx = *((rbp - 0x300));
        if (eax != 0) {
            goto label_82;
        }
        rax = *((rbp - 0xb8));
        if (*((rbp - 0x268)) == rax) {
            goto label_200;
        }
    }
label_82:
    *((rbp - 0x2d0)) = cl;
    rax = fcn_0040a8b0 (*((rbp - 0x2b8)), *(r13));
    ecx = *((rbp - 0x2d0));
    r12 = rax;
    *((rbp - 0x300)) = rax;
    *((rbp - 0x2f0)) = cl;
    if (rax == 0) {
        goto label_201;
    }
    rax = strlen (rax);
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, r12, rax + 1);
    r12 = rax;
    free (*((rbp - 0x300)));
    *((rbp - 0x300)) = r12;
    ecx = *((rbp - 0x2f0));
    *((rbp - 0x2d0)) = 1;
    goto label_42;
label_159:
    rax = 0xff000000ff00;
    if ((*((r13 + 0x20)) & rax) != 0) {
        goto label_202;
    }
label_53:
    *((rbp - 0x321)) = 0;
    *((rbp - 0x308)) = 0;
    goto label_43;
label_170:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_27;
    }
    *((rbp - 0x308)) = ecx;
    *((rbp - 0x300)) = r8b;
    al = fcn_0040ef80 (r14, *((rbp - 0x2b8)));
    if (al != 0) {
        goto label_30;
    }
    r8d = *(r13);
    r8d = *((rbp - 0x300));
    if (r8d != 0) {
        goto label_23;
    }
    ecx = *((rbp - 0x308));
    if (ecx == 0) {
        goto label_23;
    }
    r12d = *((r13 + 0x18));
    eax = 1;
    r12d ^= 1;
label_54:
    if (r12b == 0) {
        goto label_30;
    }
    *((rbp - 0x2d0)) = al;
    goto label_23;
label_150:
    edx = 5;
    rax = dcgettext (0, "copied ");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    fcn_00404d70 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
    *((rbp - 0x2c0)) = 1;
    goto label_5;
label_146:
    edi = 1;
    r15d = 1;
    rax = fcn_0040e920 (edi, 4, *(0x00621988));
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *(0x00621990));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot move %s to a subdirectory of itself, %s");
    r8 = r12;
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    rax = *((rbp + 0x20));
    *(rax) = 1;
invalid_funccall(); //    void (*0x406271)() ();
label_136:
    rax = fcn_0040e920 (1, 4, r14);
    rbx = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot create symbolic link %s to %s");
    r14 = rax;
    rax = errno_location ();
    r8 = rbx;
    rcx = r12;
    eax = 0;
    error (0, *(rax), r14);
invalid_funccall(); //    void (*0x406910)() ();
label_158:
    if (*((rbp - 0x2c4)) != 0xa000) {
        goto label_203;
    }
    rax = fcn_0040a1c0 (r14, *((rbp - 0x240)));
    r12 = rax;
    if (rax == 0) {
        goto label_204;
    }
    ecx = *((r13 + 0x16));
    eax = fcn_00409fd0 (rax, 0xffffff9c, *((rbp - 0x2b8)), rcx);
    if (eax < 0) {
        goto label_205;
    }
label_65:
    free (r12);
    eax = *((r13 + 0x25));
    *((rbp - 0x321)) = al;
    if (al != 0) {
invalid_funccall(); //        void (*0x406e0d)() ();
    }
    r8d = *((r13 + 0x1d));
    if (r8b != 0) {
        goto label_206;
    }
    *((rbp - 0x321)) = r8b;
    *((rbp - 0x2e8)) = 1;
    *((rbp - 0x2e0)) = 1;
invalid_funccall(); //    void (*0x405f45)() ();
label_114:
    if (*((r13 + 0x18)) == 0) {
        goto label_207;
    }
    r12d = *(r13);
    if (r12d == 0) {
        goto label_207;
    }
    if (bl != 0) {
        goto label_44;
    }
    goto label_45;
label_180:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "skipping file %s, as it was replaced while being copied");
    rcx = r12;
    esi = 0;
    rdx = rax;
    goto label_46;
label_175:
    r12d = 1;
    ecx = 1;
    goto label_47;
label_163:
    fcn_00409a10 (*((rbp - 0x2b8)), *((rbp - 0x1d8)), *((rbp - 0x1e0)));
    rax = *((rbp + 0x18));
    *(rax) = 1;
    goto label_48;
label_115:
    if (*((r13 + 0x18)) != 0) {
        goto label_45;
    }
label_119:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ad40 (r14);
    ecx = *((rbp - 0x2f0));
    r8 = rax;
    if (*(rax) == 0x2e) {
        goto label_208;
    }
label_58:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_49;
    }
    do {
        *((rbp - 0x300)) = 0;
        goto label_42;
label_118:
        eax = *((rbp - 0x258));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_209;
        }
INVALID_JUMP;
    } while (r12d == 0);
    goto label_50;
label_141:
    rax = fcn_0040ea00 (4, *(0x00621990));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "warning: source directory %s specified more than once");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    if (*((r13 + 0x18)) == 0) {
        goto label_22;
    }
    if (*((rbp - 0x2c0)) != 0) {
        goto label_51;
    }
    goto label_22;
label_161:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot stat %s";
    rbx = rax;
    goto label_40;
label_178:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    esi = "cannot open %s for reading";
    rbx = rax;
    goto label_40;
label_112:
    rax = *((rbp - 0x2f0));
    *((rbp - 0x300)) = r8b;
    al = fcn_00404e20 (r13, *((rbp - 0x2b8)), rax + 0x18);
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_28;
    }
    goto label_22;
label_164:
    fcn_00404d70 (r14, *((rbp - 0x2b8)), 0);
    goto label_43;
label_157:
    eax = *((rbp - 0x308));
    rsi = *((rbp - 0x2b8));
    edi = 0;
    rcx = rbp - 0xc0;
    *((rbp - 0xc0)) = 0;
    eax = ~eax;
    eax &= *((rbp - 0x2c8));
    edx = eax;
    r12d = eax;
    eax = xmknod ();
    r8d = *((rbp - 0x2c0));
    if (eax != 0) {
        goto label_210;
    }
label_64:
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x321)) = r8b;
    *((rbp - 0x2e0)) = 1;
invalid_funccall(); //    void (*0x405f45)() ();
label_209:
    eax = *((rbp - 0x1c8));
label_198:
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_52;
    }
    if (r12d != 0) {
        goto label_50;
    }
    rax = fcn_0040ead0 (0, 3, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040ead0 (0, 3, r14);
    edx = 5;
    esi = "cannot move directory onto non-directory: %s -> %s";
    rbx = rax;
    goto label_24;
label_203:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    esi = "%s has unknown file type";
    rbx = rax;
    goto label_34;
label_202:
    esi = *((r13 + 0x25));
    edx = 0;
    rcx = r13;
    al = fcn_00405620 (*((rbp - 0x2b8)), rsi);
    if (al != 0) {
        goto label_53;
    }
    if (*((r13 + 0x26)) == 0) {
        goto label_53;
    }
invalid_funccall(); //    void (*0x406910)() ();
label_172:
    *((rbp - 0x2d0)) = r8b;
    eax = fcn_0040ef80 (r14, *((rbp - 0x2b8)));
    r8d = *((rbp - 0x2d0));
    eax ^= 1;
    r12d = eax;
    eax = 0;
    goto label_54;
label_192:
    rax = *(rdx);
    r12b = (*(r9) == rax) ? 1 : 0;
    eax = 0;
    goto label_54;
label_207:
    rax = fcn_0040e920 (1, 4, r14);
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot overwrite non-directory %s with directory %s";
    rbx = rax;
    goto label_24;
label_201:
    rax = errno_location ();
    *((rbp - 0x2d0)) = 1;
    ecx = *((rbp - 0x2f0));
    r12 = rax;
    if (*(rax) == 2) {
        goto label_42;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
label_72:
    r15d = 0;
    rax = dcgettext (0, "cannot backup %s");
    rcx = rbx;
    eax = 0;
    error (0, *(r12), rax);
invalid_funccall(); //    void (*0x406271)() ();
label_197:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot overwrite directory %s with non-directory";
    rbx = rax;
    goto label_55;
label_179:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot fstat %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2e0));
    rdx = r12;
    esi = *(rax);
    goto label_46;
label_120:
    *((rbp - 0x300)) = 0;
    if (*((r13 + 4)) != 2) {
        goto label_42;
    }
    eax = *((rbp - 0x258));
    eax &= 0xf000;
    if (eax != 0x8000) {
        goto label_56;
    }
    goto label_42;
label_199:
    eax = 1;
label_60:
    edx = 0;
    dl = (*((r8 + 1)) == 0x2e) ? 1 : 0;
    edx = *((r8 + rdx + 1));
    if (dl == 0) {
        goto label_57;
    }
    if (dl == 0x2f) {
        goto label_57;
    }
    if (al == 0) {
        goto label_58;
    }
    goto label_49;
label_196:
    *((rbp - 0x310)) = r8b;
    *((rbp - 0x308)) = r9;
    *((rbp - 0x300)) = rdx;
    al = fcn_0040ef80 (r14, *((rbp - 0x2b8)));
    rdx = *((rbp - 0x300));
    r9 = *((rbp - 0x308));
    r8d = *((rbp - 0x310));
    if (al == 0) {
        goto label_211;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_59;
    }
    goto label_36;
label_208:
    eax = 0;
    goto label_60;
label_166:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    *((rbp - 0x2c0)) = rax;
    rax = dcgettext (0, "cannot access %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2c0));
    eax = 0;
    error (0, *(rax), r12);
    *((rbp - 0x2e0)) = 0;
    goto label_61;
label_162:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "setting permissions for %s";
    rbx = rax;
    goto label_40;
label_92:
    eax = *((rbp - 0x308));
    *((rbp - 0x348)) = eax;
    goto label_62;
label_191:
    if (*((r9 + 0x10)) <= 1) {
        goto label_63;
    }
    rdi = r14;
    *((rbp - 0x310)) = r8b;
    *((rbp - 0x308)) = r9;
    *((rbp - 0x300)) = rdx;
    rax = canonicalize_file_name ();
    rdx = *((rbp - 0x300));
    r9 = *((rbp - 0x308));
    r8d = *((rbp - 0x310));
    if (rax == 0) {
        goto label_63;
    }
    rdi = rax;
    *((rbp - 0x300)) = r8b;
    *((rbp - 0x2d0)) = rax;
    eax = fcn_0040ef80 (rdi, *((rbp - 0x2b8)));
    rcx = *((rbp - 0x2d0));
    eax ^= 1;
    r12d = eax;
    eax = free (rcx);
    eax = 0;
    r8d = *((rbp - 0x300));
    goto label_54;
label_210:
    esi = r12d;
    rdi = *((rbp - 0x2b8));
    esi &= 0xffffefff;
    eax = mkfifo ();
    r8d = *((rbp - 0x2c0));
    if (eax == 0) {
        goto label_64;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot create fifo %s";
    rbx = rax;
    goto label_40;
label_205:
    rax = errno_location ();
    eax = *(rax);
    *((rbp - 0x2c0)) = eax;
    if (eax == 0) {
        goto label_65;
    }
    if (*((r13 + 0x2d)) == 1) {
        if (*((rbp - 0x2d0)) == 0) {
            goto label_212;
        }
    }
label_91:
    free (r12);
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot create symbolic link %s");
    rcx = r12;
    eax = 0;
    error (0, *((rbp - 0x2c0)), rax);
invalid_funccall(); //    void (*0x406910)() ();
label_167:
    r12d = 0;
    *((rbp - 0x2e0)) = 1;
    goto label_66;
label_116:
    rax = fcn_0040e920 (1, 4, r14);
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "will not overwrite just-created %s with %s";
    rbx = rax;
    goto label_24;
label_123:
    al = (*((rbp - 0x2c4)) == 0x4000) ? 1 : 0;
    al &= *((r13 + 0x2a));
    *((rbp - 0x2d0)) = al;
    if (al != 0) {
        goto label_67;
    }
    *((rbp - 0x2d0)) = 1;
    *((rbp - 0x300)) = 0;
    goto label_4;
label_122:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "removed %s\n");
    rdx = r12;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = *((rbp - 0x2f0));
    *((rbp - 0x300)) = 0;
    goto label_42;
label_181:
    ecx = *((rbp - 0x2e8));
    if (ecx < 0) {
        goto label_68;
    }
label_74:
    *((rbp - 0x348)) = 0;
label_81:
    rax = rbp - 0xc0;
    esi = *((rbp - 0x2e8));
    __asm ("std");
    edi = 1;
    rdx = rax;
    *((rbp - 0x320)) = rax;
    eax = fxstat ();
    *((rbp - 0x2f8)) = eax;
    if (eax != 0) {
        goto label_213;
    }
    if (*((rbp - 0x310)) == 0) {
        goto label_89;
    }
    if (*((r13 + 0x34)) != 0) {
        goto label_214;
    }
label_90:
    eax = getpagesize ();
    r12 = (int64_t) eax;
    rax = *((rbp - 0x88));
    *((rbp - 0x340)) = rax;
    rdx = rax - 0x20000;
    *((rbp - 0x330)) = rax;
    rax = 0x1ffffffffffe0000;
    if (rdx > rax) {
        rcx = *((rbp - 0x340));
        rax = 0x1fffffffffffffff;
        *((rbp - 0x330)) = 0x20000;
        rdx = rcx - 1;
        eax = 0x200;
        if (rdx <= rax) {
            rax = rcx;
        }
        *((rbp - 0x340)) = rax;
    }
    edi = *((rbp - 0x2c0));
    ecx = 2;
    edx = 0;
    esi = 0;
    fcn_0040add0 ();
    r9d = *((rbp - 0x138));
    r9d &= 0xf000;
    if (r9d == 0x8000) {
        rax = *((rbp - 0x120));
        ecx = 0x200;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        al = (*((rbp - 0x110)) < rax) ? 1 : 0;
        eax = (int32_t) al;
        *((rbp - 0x2f8)) = eax;
    }
    rax = r12 - 1;
    *((rbp - 0x2e0)) = rax;
    eax = *((rbp - 0xa8));
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_215;
    }
label_87:
    rdi = *((rbp - 0x118));
    rsi = *((rbp - 0x330));
    rax = 0x1ffffffffffe0000;
    r8 = 0x7fffffffffffffff;
    r8 -= r12;
    *((rbp - 0x338)) = r9d;
    rdx = rdi - 0x20000;
    *((rbp - 0x2e0)) = r8;
    eax = 0x20000;
    rdx = r8;
    if (rdx > rax) {
        rdi = rax;
    }
    rax = fcn_0040a980 (rdi, rsi, rdx);
    r9d = *((rbp - 0x338));
    r8 = *((rbp - 0x2e0));
    rcx = rax;
    if (r9d == 0x8000) {
        goto label_216;
    }
label_86:
    rax = *((rbp - 0x330));
    edx = 0;
    rsi = rcx + rax - 1;
    rax = rsi;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    rsi -= rdx;
    *((rbp - 0x330)) = rsi;
    if (rsi == 0) {
        goto label_217;
    }
    if (r8 < rsi) {
        goto label_217;
    }
label_85:
    rax = *((rbp - 0x330));
    rax = fcn_004112e0 (r12 + rax);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
    if (*((rbp - 0x2f8)) != 0) {
        goto label_218;
    }
    rax = rbp - 0x2a0;
    *((rbp - 0x340)) = 0;
    *((rbp - 0x2f8)) = rax;
    r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
label_94:
    rax = rbp - 0x2a8;
    al = fcn_00405120 (*((rbp - 0x2c0)), *((rbp - 0x2e8)), *((rbp - 0x350)), *((rbp - 0x330)), *((rbp - 0x340)), 0);
    if (al == 0) {
        goto label_78;
    }
    if (*((rbp - 0x2a8)) != 0) {
        goto label_219;
    }
label_71:
    if (*((r13 + 0x1f)) != 0) {
        goto label_220;
    }
label_73:
    if (*((r13 + 0x1d)) != 0) {
        eax = *((rbp - 0xa4));
        if (*((rbp - 0x254)) == eax) {
            eax = *((rbp - 0xa0));
            if (*((rbp - 0x250)) == eax) {
                goto label_221;
            }
        }
        r9 = *((rbp - 0x320));
        r8d = *((rbp - 0x2d0));
        eax = fcn_00405770 (r13, *((rbp - 0x2b8)), *((rbp - 0x2e8)), *((rbp - 0x2d8)), r8);
        if (eax == 0xffffffff) {
            goto label_78;
        }
        if (eax != 0) {
            goto label_221;
        }
        *((rbp - 0x318)) &= 0xfffff1ff;
    }
label_221:
    if (*((r13 + 0x27)) != 0) {
        if ((*((rbp - 0xa8)) & 0x80) == 0) {
            goto label_222;
        }
    }
label_84:
    rax = 0xff0000000000ff;
    if ((*((r13 + 0x18)) & rax) != 0) {
        goto label_223;
    }
label_206:
    edx = *((rbp - 0x250));
    esi = *((rbp - 0x254));
    *((rbp - 0x2c0)) = r8b;
    rdi = *((rbp - 0x2b8));
    eax = lchown ();
    r8d = *((rbp - 0x2c0));
    if (eax == 0) {
        goto label_224;
    }
    al = fcn_00405740 (r13);
    *((rbp - 0x2e8)) = al;
    if (al == 0) {
        goto label_225;
    }
    eax = *((rbp - 0x2e8));
    r8d = 0;
    *((rbp - 0x2e0)) = al;
invalid_funccall(); //    void (*0x405f45)() ();
label_195:
    rax = *((rbp - 0xc0));
    if (*((rbp - 0x150)) != rax) {
        goto label_69;
    }
    goto label_33;
label_188:
    rsi = *((rbp - 0x2b8));
    rdx = rbp - 0xc0;
    edi = 1;
    eax = lxstat ();
    if (eax == 0) {
        eax = *((rbp - 0xa8));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_187;
        }
        r8d = *((r13 + 0x30));
        if (r8b == 0) {
            goto label_226;
        }
        eax = 0;
        eax = fcn_0040ae10 (*((rbp - 0x2b8)), 0x41, *((rbp - 0x2e0)), rcx);
        *((rbp - 0x2e8)) = eax;
        rax = *((rbp - 0x2f8));
        r12d = *(rax);
    }
label_187:
    eax = *((rbp - 0x2e8));
    eax >>= 0x1f;
    dl = (r12d == 0x15) ? 1 : 0;
    dl &= al;
    *((rbp - 0x2d0)) = dl;
    if (dl == 0) {
        goto label_227;
    }
    rsi = *((rbp - 0x2b8));
    r12d = 0x15;
    rdi = rsi;
    if (*(rsi) == 0) {
        goto label_70;
    }
    eax = 0;
    rcx |= 0xffffffffffffffff;
    r12d = 0;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    r12b = (*((rsi + rax - 2)) != 0x2f) ? 1 : 0;
    r12d += 0x14;
    goto label_70;
label_211:
    r12d = *((r13 + 0x18));
    r12d ^= 1;
    goto label_54;
label_89:
    *((rbp - 0x2e0)) = 0;
    goto label_71;
label_204:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    esi = "cannot read symbolic link %s";
    rbx = rax;
    goto label_40;
label_121:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot remove %s";
    rbx = rax;
    goto label_72;
label_224:
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x2e0)) = r8b;
    r8d = 0;
invalid_funccall(); //    void (*0x405f45)() ();
label_220:
    rax = *((rbp - 0x228));
    *((rbp - 0x2a0)) = rax;
    rax = *((rbp - 0x220));
    *((rbp - 0x298)) = rax;
    rax = *((rbp - 0x218));
    *((rbp - 0x290)) = rax;
    rax = *((rbp - 0x210));
    *((rbp - 0x288)) = rax;
    eax = fcn_00410660 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), rbp - 0x2a0, rcx, r8);
    if (eax == 0) {
        goto label_73;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2f8)) = rax;
    rax = dcgettext (0, "preserving times for %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    if (*((r13 + 0x24)) == 0) {
        goto label_73;
    }
label_78:
    r8d = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_182:
    esi = *((r13 + 0x25));
    rcx = r13;
    edx = 0;
    eax = fcn_00405620 (r12, rsi);
    r8d = eax;
    if (al != 0) {
        goto label_74;
    }
    eax = *((r13 + 0x26));
    *((rbp - 0x2d0)) = al;
    if (al == 0) {
        goto label_74;
    }
    *((rbp - 0x2d0)) = 0;
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_194:
    rax = rbp - 0x150;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    *((rbp - 0x300)) = r8b;
    rdx = rax;
    eax = xstat ();
    r8d = *((rbp - 0x300));
    if (eax == 0) {
        goto label_75;
    }
    goto label_23;
label_193:
    rax = rbp - 0xc0;
    rsi = r14;
    edi = 1;
    *((rbp - 0x308)) = r8b;
    rdx = rax;
    *((rbp - 0x300)) = r9;
    eax = xstat ();
    r9 = *((rbp - 0x300));
    r8d = *((rbp - 0x308));
    if (eax == 0) {
        goto label_76;
    }
    goto label_23;
label_213:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot fstat %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2e0));
    eax = 0;
    error (0, *(rax), r12);
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_223:
    r8d = *((rbp - 0x318));
    ecx = *((rbp - 0x2e8));
    rdx = *((rbp - 0x2b8));
    eax = fcn_0040a0d0 (r14, *((rbp - 0x2c0)));
    r8d = 1;
    if (eax == 0) {
invalid_funccall(); //        void (*0x408940)() ();
    }
label_183:
    r12d = *(r12);
    if (r12d == 2) {
        if (*((r13 + 0x18)) == 0) {
            goto label_228;
        }
    }
    *((rbp - 0x2d0)) = 0;
    goto label_70;
label_228:
    *((rbp - 0x348)) = 0;
    goto label_62;
label_218:
    *((rbp - 0x323)) = 0;
    *((rbp - 0x328)) = 1;
label_88:
    rcx = rbp - 0x2a0;
    rax = *((rbp - 0x120));
    r12d = 0;
    rsi = rcx;
    *((rbp - 0x2f8)) = rcx;
    *((rbp - 0x368)) = rax;
    fcn_00409ae0 (*((rbp - 0x2c0)), rsi);
    r10d = 0;
    *((rbp - 0x358)) = ebx;
    ecx = 0;
    *((rbp - 0x360)) = r13;
    rbx = *((rbp - 0x368));
    *((rbp - 0x322)) = r15b;
    r15d = *((rbp - 0x310));
    *((rbp - 0x338)) = r14;
    r14 = r10;
label_80:
    *((rbp - 0x310)) = rcx;
    al = fcn_00409b10 (*((rbp - 0x2f8)));
    rcx = *((rbp - 0x310));
    if (al == 0) {
        goto label_229;
    }
    if (*((rbp - 0x288)) == 0) {
        goto label_230;
    }
    rdx = r14;
    rsi = r12;
    r13d = 0;
    eax = 0;
    while (rcx == 0) {
label_77:
        r8d = 0;
        if (*((rbp - 0x328)) == 3) {
            r8 = *((rbp - 0x340));
        }
label_79:
        rax = rbp - 0x2a9;
        rax = rbp - 0x2a8;
        al = fcn_00405120 (*((rbp - 0x2c0)), *((rbp - 0x2e8)), *((rbp - 0x350)), *((rbp - 0x330)), r8, 1);
        if (al == 0) {
            goto label_231;
        }
        rax = *((rbp - 0x2a8));
        rcx = r12 + rax;
        if (rax != 0) {
            r15d = *((rbp - 0x2a9));
        }
        if (rbx == rcx) {
            goto label_232;
        }
        eax = r13 + 1;
        rsi = r12;
        rdx = r14;
        r13 = rax;
        if (rax >= *((rbp - 0x288))) {
            goto label_230;
        }
        rcx = rax * 3;
        rax = *((rbp - 0x278));
        rax = rax + rcx*8;
        r12 = *(rax);
        r14 = *((rax + 8));
        rax = r12 + r14;
        if (rbx < rax) {
            r14 = rbx;
            if (r12 > rbx) {
                r12 = rbx;
            }
            r14 -= r12;
        }
        rcx = r12;
        r15d = 0;
        rcx -= rsi;
        rcx -= rdx;
    }
    edi = *((rbp - 0x2c0));
    edx = 0;
    rsi = r12;
    *((rbp - 0x310)) = rcx;
    rax = lseek ();
    rcx = *((rbp - 0x310));
    if (rax < 0) {
        goto label_233;
    }
    eax = *((rbp - 0x328));
    if (eax == 1) {
        goto label_234;
    }
    dl = (eax == 3) ? 1 : 0;
    eax = fcn_00405060 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), 0, rcx);
    r15d = eax;
    if (al != 0) {
        goto label_77;
    }
label_231:
    r15d = *((rbp - 0x322));
    r14 = *((rbp - 0x338));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
label_97:
    free (*((rbp - 0x278)));
    goto label_78;
label_234:
    al = fcn_00404c20 (*((rbp - 0x2e8)), rcx);
    if (al == 0) {
        goto label_235;
    }
    r8d = 0;
    goto label_79;
label_232:
    *((rbp - 0x27f)) = 1;
label_230:
    *((rbp - 0x310)) = rcx;
    free (*((rbp - 0x278)));
    *((rbp - 0x278)) = 0;
    *((rbp - 0x288)) = 0;
    rcx = *((rbp - 0x310));
    if (*((rbp - 0x27f)) == 0) {
        goto label_80;
    }
    *((rbp - 0x310)) = r15b;
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
label_98:
    r12b = (*((rbp - 0x368)) > rcx) ? 1 : 0;
    if (*((rbp - 0x368)) > rcx) {
        goto label_236;
    }
    if (*((rbp - 0x310)) == 0) {
        goto label_71;
    }
label_236:
    if (*((rbp - 0x328)) == 1) {
        goto label_237;
    }
    rsi = *((rbp - 0x368));
    edi = *((rbp - 0x2e8));
    *((rbp - 0x2f8)) = rcx;
    eax = ftruncate ();
    rcx = *((rbp - 0x2f8));
    if (eax != 0) {
        goto label_100;
    }
    if (*((rbp - 0x328)) != 3) {
        goto label_71;
    }
    if (r12b == 0) {
        goto label_71;
    }
    rdx = *((rbp - 0x368));
    rdx -= rcx;
    eax = fcn_00404cd0 (*((rbp - 0x2e8)), rcx);
    if (eax >= 0) {
        goto label_71;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2f8)) = rax;
label_95:
    rax = dcgettext (0, "error deallocating %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    goto label_78;
label_227:
    *((rbp - 0x2d0)) = 1;
    if (*((rbp - 0x2e8)) < 0) {
        goto label_70;
    }
    goto label_81;
label_200:
    rax = *((rbp - 0xc0));
    if (*((rbp - 0x270)) != rax) {
        goto label_82;
    }
    if (*((r13 + 0x18)) == 0) {
        goto label_238;
    }
    edx = 5;
    rax = dcgettext (0, "backing up %s might destroy source;  %s not moved");
    rbx = rax;
    do {
        rax = fcn_0040e920 (1, 4, r14);
        r12 = rax;
        rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
        r8 = r12;
        rdx = rbx;
        rcx = rax;
        goto label_83;
label_238:
        edx = 5;
        rax = dcgettext (0, "backing up %s might destroy source;  %s not copied");
        rbx = rax;
    } while (1);
label_222:
    eax = geteuid ();
    if (eax == 0) {
        goto label_84;
    }
    eax = fcn_00404d10 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), 0x180);
    if (eax != 0) {
        goto label_84;
    }
    edx = ~edx;
    edx &= *((rbp - 0x354));
    fcn_00404d10 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), *((rbp - 0x348)));
    goto label_84;
label_217:
    *((rbp - 0x330)) = rcx;
    goto label_85;
label_216:
    rax = *((rbp - 0x120));
    if (*((rbp - 0x330)) <= rax) {
        goto label_86;
    }
    rax++;
    *((rbp - 0x330)) = rax;
    goto label_86;
label_215:
    eax = *((r13 + 0xc));
    if (eax == 3) {
        goto label_239;
    }
    if (eax != 2) {
        goto label_87;
    }
    if ((*((rbp - 0x2f8)) & 1) == 0) {
        goto label_87;
    }
    rax = *((rbp - 0x330));
    rax = fcn_004112e0 (rax + r12);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
label_93:
    eax = *((r13 + 0xc));
    *((rbp - 0x328)) = eax;
    eax = *((rbp - 0x310));
    *((rbp - 0x323)) = al;
    goto label_88;
label_214:
    edx = *((rbp - 0x2c0));
    eax = 0;
    eax = ioctl (*((rbp - 0x2e8)), 0x40049409);
    if (eax == 0) {
        goto label_89;
    }
    if (*((r13 + 0x34)) != 2) {
        goto label_90;
    }
    rax = fcn_0040e920 (1, 4, r14);
    *((rbp - 0x2f8)) = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "failed to clone %s from %s");
    *((rbp - 0x2e0)) = rax;
    rax = errno_location ();
    r8 = *((rbp - 0x2f8));
    rcx = r12;
    eax = 0;
    error (0, *(rax), *((rbp - 0x2e0)));
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_225:
    edx = 5;
    rax = dcgettext (0, "failed to preserve ownership for %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2b8));
    eax = 0;
    error (0, *(rax), r12);
    eax = *((r13 + 0x24));
    *((rbp - 0x321)) = al;
    if (al != 0) {
invalid_funccall(); //        void (*0x406910)() ();
    }
    r8d = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x2e0)) = r8b;
    r8d = 0;
invalid_funccall(); //    void (*0x405f45)() ();
label_212:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_91;
    }
    eax = *((rbp - 0x2d0));
    rcx |= 0xffffffffffffffff;
    rdi = r12;
    rsi = *((rbp - 0x1b0));
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rax = rcx - 1;
    if (rsi != rax) {
        goto label_91;
    }
    rax = fcn_0040a1c0 (*((rbp - 0x2b8)), rsi);
    if (rax == 0) {
        goto label_91;
    }
    rdi = rax;
    *((rbp - 0x2e0)) = rax;
    eax = strcmp (rdi, r12);
    rdx = *((rbp - 0x2e0));
    rdi = rdx;
    if (eax != 0) {
        goto label_240;
    }
    free (rdi);
    goto label_65;
label_186:
    r8 = r13;
    ecx = 1;
    eax = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x354)));
    r8d = eax;
    if (al != 0) {
        goto label_92;
    }
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x407447)() ();
label_239:
    rax = *((rbp - 0x330));
    rax = fcn_004112e0 (rax + r12);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
    if (*((rbp - 0x2f8)) != 0) {
        goto label_93;
    }
    r9d = 0;
    rax = rbp - 0x2a0;
    r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
    *((rbp - 0x2f8)) = rax;
    goto label_94;
label_219:
    rsi = *((rbp - 0x2a0));
    edi = *((rbp - 0x2e8));
    eax = ftruncate ();
    if (eax >= 0) {
        goto label_71;
    }
label_100:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "failed to extend %s";
    *((rbp - 0x2f8)) = rax;
    goto label_95;
label_185:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "removed %s\n");
    rdx = r12;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_96;
label_233:
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    *((rbp - 0x2f8)) = rax;
label_99:
    rax = dcgettext (0, "cannot lseek %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    goto label_97;
label_184:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot remove %s");
    rcx = *((rbp - 0x2e0));
    esi = *(r12);
    rdx = rax;
    goto label_46;
label_229:
    *((rbp - 0x310)) = r15b;
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
    if (*((rbp - 0x27f)) != 0) {
        goto label_98;
    }
    if (*((rbp - 0x280)) != 0) {
        r9d = 0;
        eax = 0;
        r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
        if (*((rbp - 0x323)) != 0) {
            rax = *((rbp - 0x340));
        }
        *((rbp - 0x340)) = rax;
        goto label_94;
label_235:
        r15d = *((rbp - 0x322));
        r14 = *((rbp - 0x338));
        r13 = *((rbp - 0x360));
        ebx = *((rbp - 0x358));
        rax = fcn_0040ead0 (0, 3, *((rbp - 0x2b8)));
        edx = 5;
        esi = "%s: write failed";
        *((rbp - 0x2f8)) = rax;
        goto label_99;
    }
    rax = fcn_0040ead0 (0, 3, r14);
    edx = 5;
    esi = "%s: failed to get extents info";
    *((rbp - 0x2f8)) = rax;
    goto label_95;
label_237:
    rsi -= rcx;
    al = fcn_00404c20 (*((rbp - 0x2e8)), *((rbp - 0x368)));
    if (al != 0) {
        goto label_71;
    }
    goto label_100;
label_240:
    free (rdi);
    goto label_91;
label_226:
    *((rbp - 0x2e8)) = r8b;
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "not writing through dangling symlink %s");
    rcx = r12;
    eax = 0;
    error (0, 0, rax);
    eax = *((rbp - 0x320));
    *((rbp - 0x2e0)) = 0;
    r8d = *((rbp - 0x2e8));
    *((rbp - 0x2d0)) = al;
invalid_funccall(); //    return void (*0x407447)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x408617 */
#include <stdint.h>
 
void fcn_00408617 (void) {
    __asm ("std");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x408918 */
#include <stdint.h>
 
uint64_t fcn_00405990 (int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, uint32_t arg_28h, int64_t arg1, char * arg2, int64_t arg3, uint32_t arg4, size_t arg5, uint32_t arg6) {
    uint32_t var_368h;
    uint32_t var_360h;
    uint32_t var_358h;
    int64_t var_354h;
    uint32_t var_350h;
    size_t var_348h;
    int64_t var_344h;
    uint32_t var_340h;
    uint32_t var_338h;
    uint32_t ptr;
    uint32_t var_328h;
    uint32_t var_323h;
    uint32_t var_322h;
    int64_t var_321h;
    func * rtld_fini;
    func * fini;
    char * var_310h;
    size_t s1;
    size_t s2;
    uint32_t var_2f8h;
    char * var_2f0h;
    size_t fd;
    char ** format;
    func * init;
    size_t src;
    char *** var_2c8h;
    uint32_t var_2c4h;
    char *** errname;
    char * newpath;
    int64_t var_2a9h;
    uint32_t var_2a8h;
    uint32_t var_2a0h;
    int64_t var_298h;
    int64_t var_290h;
    uint32_t var_288h;
    uint32_t var_280h;
    uint32_t var_27fh;
    void * var_278h;
    uint32_t var_270h;
    uint32_t var_268h;
    uint32_t var_260h;
    int64_t var_258h;
    uint32_t var_254h;
    uint32_t var_250h;
    int64_t var_248h;
    int64_t var_240h;
    int64_t var_228h;
    int64_t var_220h;
    int64_t var_218h;
    int64_t var_210h;
    uint32_t var_1e0h;
    uint32_t var_1d8h;
    uint32_t var_1d0h;
    int64_t var_1c8h;
    int64_t var_1b0h;
    uint32_t var_150h;
    uint32_t var_148h;
    int64_t var_140h;
    int64_t var_138h;
    int64_t var_130h;
    int64_t var_120h;
    int64_t var_118h;
    uint32_t var_110h;
    int64_t var_100h;
    int64_t var_f0h;
    int64_t var_e0h;
    int64_t var_d0h;
    uint32_t var_c0h;
    int64_t var_bch;
    uint32_t var_b8h;
    int64_t var_b0h;
    int64_t var_a8h;
    int64_t var_a4h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_fh;
    void * var_fh_2;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
label_17:
    r14 = rdi;
    r13 = r9;
    r12d = edx;
    *((rbp - 0x2b8)) = rsi;
    *(rbp - 0x2c0) = (*((rbp + 0x28)) != 0) ? 1 : 0;
    ebx = *((rbp + 0x10));
    *((rbp - 0x2f8)) = rcx;
    eax = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8;
    if (*((r9 + 0x18)) != 0) {
        if (al == 0) {
            goto label_101;
        }
        rax = *((rbp + 0x28));
        *(rax) = 0;
    }
label_101:
    rax = *((rbp + 0x20));
    rsi = r14;
    edi = 1;
    *(rax) = 0;
    rax = rbp - 0x270;
    *((rbp - 0x2d8)) = rax;
    rdx = rax;
    if (*((r13 + 4)) == 2) {
        goto label_102;
    }
    eax = xstat ();
    rsi = r14;
    r15b = (eax != 0) ? 1 : 0;
    if (r15b != 0) {
invalid_funccall(); //        void (*0x406237)() ();
    }
label_2:
    eax = *((rbp - 0x258));
    *((rbp - 0x2c8)) = eax;
    eax &= 0xf000;
    *((rbp - 0x2c4)) = eax;
    if (eax == 0x4000) {
        goto label_103;
    }
    if (bl != 0) {
        r10d = *(r13);
        rdi = *((r13 + 0x40));
        if (r10d == 0) {
            goto label_104;
        }
        fcn_0040ae60 (rdi, r14, *((rbp - 0x2d8)));
    }
label_3:
    *((rbp - 0x2e0)) = 1;
    eax = *((r13 + 4));
    if (eax != 4) {
        al = (eax == 3) ? 1 : 0;
        eax = (int32_t) al;
        eax &= ebx;
        *((rbp - 0x2e0)) = eax;
    }
    if (r12b == 0) {
        eax = *((rbp - 0x2c4));
        if (eax != 0x8000) {
            if (*((r13 + 0x14)) == 0) {
                goto label_105;
            }
            if (eax == 0x4000) {
                goto label_105;
            }
            if (eax == 0xa000) {
                goto label_105;
            }
        }
        if (*((r13 + 0x18)) != 0) {
            goto label_105;
        }
        if (*((r13 + 0x2c)) != 0) {
            goto label_105;
        }
        if (*((r13 + 0x17)) != 0) {
            goto label_105;
        }
        r9d = *(r13);
        if (r9d != 0) {
            goto label_105;
        }
        if (*((r13 + 0x15)) != 0) {
            goto label_105;
        }
        rax = rbp - 0x1e0;
        rsi = *((rbp - 0x2b8));
        edi = 1;
        rdx = rax;
        *((rbp - 0x2f0)) = rax;
        eax = xstat ();
        r8d = 1;
        *(rbp - 0x2d0) = (eax != 0) ? 1 : 0;
        if (*((rbp - 0x2d0)) != 0) {
            goto label_106;
        }
label_8:
        rax = *((rbp - 0x1d8));
        if (*((rbp - 0x268)) == rax) {
            goto label_107;
        }
label_26:
        if (*((r13 + 4)) == 2) {
            goto label_108;
        }
label_23:
        if (*((rbp - 0x2c4)) == 0x4000) {
            goto label_109;
        }
        if (*((r13 + 0x2d)) != 0) {
            goto label_110;
        }
label_21:
        eax = *((r13 + 8));
        if (*((r13 + 0x18)) != 0) {
            goto label_111;
        }
        if (eax == 2) {
            goto label_22;
        }
        if (eax == 3) {
            goto label_112;
        }
label_28:
        if (*((rbp - 0x2d0)) != 0) {
            goto label_22;
        }
        eax = *((rbp - 0x1c8));
        ecx = r8d;
        ecx ^= 1;
        edx = eax;
        edx &= 0xf000;
        if (edx == 0x4000) {
            goto label_113;
        }
        if (*((rbp - 0x2c4)) == 0x4000) {
            goto label_114;
        }
        r12d = *(r13);
        if (bl != 0) {
label_44:
            if (r12d == 3) {
                goto label_115;
            }
            *((rbp - 0x300)) = cl;
            al = fcn_0040aef0 (*((r13 + 0x38)), *((rbp - 0x2b8)), *((rbp - 0x2f0)));
            ecx = *((rbp - 0x300));
            if (al != 0) {
                goto label_116;
            }
            if (*((rbp - 0x2c4)) != 0x4000) {
                eax = *((rbp - 0x1c8));
                edx = *((rbp - 0x1c8));
                edx &= 0xf000;
                if (edx == 0x4000) {
                    goto label_117;
                }
            }
label_41:
            r12d = *(r13);
        }
        eax = *((r13 + 0x18));
        if (al != 0) {
            goto label_118;
        }
        if (r12d != 0) {
            goto label_119;
        }
label_57:
        edx = *((rbp - 0x1c8));
        *((rbp - 0x300)) = 0;
        edx &= 0xf000;
        dl = (edx == 0x4000) ? 1 : 0;
        dl |= al;
        if (dl != 0) {
            goto label_42;
        }
        eax = *((r13 + 0x15));
        *((rbp - 0x2d0)) = al;
        if (al == 0) {
            if (*((r13 + 0x22)) == 0) {
                goto label_120;
            }
            if (*((rbp - 0x1d0)) <= 1) {
                goto label_120;
            }
        }
label_56:
        *((rbp - 0x2d0)) = cl;
        eax = unlink (*((rbp - 0x2b8)));
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            rax = errno_location ();
            ecx = *((rbp - 0x2d0));
            r12 = rax;
            if (*(rax) != 2) {
                goto label_121;
            }
        }
        eax = *((r13 + 0x2e));
        *((rbp - 0x2d0)) = al;
        if (al != 0) {
            goto label_122;
        }
        if (bl == 0) {
            goto label_123;
        }
        *((rbp - 0x2d0)) = bl;
        *((rbp - 0x300)) = 0;
        if (*((r13 + 0x38)) == 0) {
            goto label_124;
        }
label_0:
        if (*((r13 + 0x18)) != 0) {
            goto label_125;
        }
        esi = *(r13);
        if (esi != 0) {
            goto label_126;
        }
        rdx = rbp - 0x1e0;
        if (cl == 0) {
            goto label_127;
        }
label_31:
        eax = *((rdx + 0x18));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_1;
        }
        al = fcn_0040aef0 (*((r13 + 0x38)), *((rbp - 0x2b8)), rdx);
        if (al == 0) {
            goto label_1;
        }
        rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
        r12 = rax;
        rax = fcn_0040e920 (0, 4, r14);
        edx = 5;
        rbx = rax;
label_24:
        rax = dcgettext (0, "will not copy %s through just-created symlink %s");
        r8 = r12;
        rcx = rbx;
label_83:
        eax = 0;
        error (0, 0, rax);
    }
label_9:
    *((rbp - 0x2d0)) = 1;
    ecx = 0;
    *((rbp - 0x300)) = 0;
label_42:
    if (bl != 0) {
        goto label_128;
    }
label_1:
    if (*((r13 + 0x2e)) == 0) {
        goto label_124;
    }
    if (*((r13 + 0x18)) != 0) {
        goto label_129;
    }
label_15:
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_130;
    }
    fcn_00404d70 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
label_4:
    if (*((r13 + 0x18)) != 0) {
        goto label_131;
    }
label_16:
    if (*((r13 + 0x22)) != 0) {
        goto label_7;
    }
    eax = *((rbp - 0x2d0));
    *((rbp - 0x2f0)) = 0;
    *((rbp - 0x2c0)) = eax;
label_5:
    r12d = *((rbp - 0x2c8));
    r12d &= 0xfff;
    if (*((r13 + 0x2b)) != 0) {
        r12d = *((r13 + 0x10));
        r12d &= 0xfff;
    }
    if (*((r13 + 0x1d)) != 0) {
        goto label_132;
    }
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_133;
    }
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    *((rbp - 0x308)) = 0;
    if (al == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
label_13:
    eax = *((r13 + 0x2c));
    *((rbp - 0x2e8)) = al;
    if (al == 0) {
        goto label_134;
    }
    if (*(r14) != 0x2f) {
        rdi = *((rbp - 0x2b8));
        rax = fcn_0040ac60 ();
        esi = 0x418d7b;
        ecx = 2;
        rdi = rax;
        r12 = rax;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (*(r14) > 0x2f) ? 1 : 0;
        if (al != 0) {
            goto label_135;
        }
label_33:
        free (r12);
    }
    ecx = *((r13 + 0x16));
    eax = fcn_00409fd0 (r14, 0xffffff9c, *((rbp - 0x2b8)), rcx);
    if (eax < 0) {
        goto label_136;
    }
    eax = *((rbp - 0x2e8));
    *((rbp - 0x321)) = 0;
    r8d = 0;
    *((rbp - 0x2e0)) = al;
label_128:
    if (*((r13 + 0x38)) != 0) {
        goto label_0;
    }
    goto label_1;
label_102:
    eax = lxstat ();
    rsi = r14;
    r15b = (eax != 0) ? 1 : 0;
    if (r15b == 0) {
        goto label_2;
    }
label_103:
    if (*((r13 + 0x2a)) == 0) {
        goto label_137;
    }
    if (bl == 0) {
        goto label_3;
    }
    goto label_138;
label_125:
    if (*((r13 + 0x2e)) != 0) {
        goto label_129;
    }
label_124:
    if (*((r13 + 0x2a)) == 0) {
        goto label_4;
    }
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_4;
    }
label_6:
    rdx = *((rbp - 0x270));
    rdi = *((rbp - 0x268));
    if (bl == 0) {
        goto label_139;
    }
    rax = fcn_00409a10 (*((rbp - 0x2b8)), rdi, rdx);
    *((rbp - 0x2f0)) = rax;
label_19:
    if (*((rbp - 0x2f0)) == 0) {
        goto label_10;
    }
label_11:
    al = fcn_0040ef80 (r14, *((rbp - 0x2f0)));
    if (al != 0) {
        goto label_140;
    }
    al = fcn_0040ef80 (*((rbp - 0x2b8)), *((rbp - 0x2f0)));
    if (al != 0) {
        goto label_141;
    }
    eax = *((r13 + 4));
    if (eax == 4) {
        goto label_10;
    }
    if (eax == 3) {
        if (bl != 0) {
            goto label_10;
        }
    }
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2f0)));
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "will not create hard link %s to directory %s");
    r8 = r12;
    rcx = rbx;
    eax = 0;
    rax = error (0, 0, rax);
label_12:
    if (*((r13 + 0x25)) != 0) {
invalid_funccall(); //        void (*0x406e0d)() ();
    }
label_7:
    if (*((r13 + 0x17)) == 0) {
        goto label_142;
    }
    *((rbp - 0x2f0)) = 0;
label_10:
    if (*((r13 + 0x18)) != 0) {
        goto label_143;
    }
    eax = *((rbp - 0x2d0));
    *((rbp - 0x2c0)) = eax;
    goto label_5;
label_129:
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_131;
    }
    if (*((r13 + 0x2a)) != 0) {
        goto label_6;
    }
label_131:
    if (*((rbp - 0x260)) == 1) {
        goto label_144;
    }
    if (*((r13 + 0x22)) != 0) {
        goto label_7;
    }
    *((rbp - 0x2f0)) = 0;
label_143:
    eax = rename (r14, *((rbp - 0x2b8)));
    if (eax == 0) {
        goto label_145;
    }
    rax = errno_location ();
    r12 = rax;
    eax = *(rax);
    if (eax == 0x16) {
        goto label_146;
    }
    if (eax != 0x12) {
        goto label_147;
    }
    rdi = *((rbp - 0x2b8));
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_148;
    }
    eax = unlink (rdi);
    if (eax != 0) {
        if (*(r12) != 2) {
            goto label_149;
        }
    }
    al = (*((rbp - 0x2c4)) != 0x4000) ? 1 : 0;
    al &= *((r13 + 0x2e));
    *((rbp - 0x2d0)) = al;
    if (al != 0) {
        goto label_150;
    }
label_25:
    *((rbp - 0x2c0)) = 1;
    *((rbp - 0x2d0)) = 1;
    goto label_5;
label_105:
    rax = rbp - 0x1e0;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    rdx = rax;
    *((rbp - 0x2f0)) = rax;
    eax = lxstat ();
    r8d = r12d;
    *(rbp - 0x2d0) = (eax != 0) ? 1 : 0;
    if (*((rbp - 0x2d0)) == 0) {
        goto label_8;
    }
label_106:
    rax = errno_location ();
    if (*(rax) == 2) {
        goto label_9;
    }
    *((rbp - 0x2c0)) = rax;
    r15d = r12d;
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot stat %s");
    r8 = *((rbp - 0x2c0));
    rcx = rbx;
    eax = 0;
    error (0, *(r8), rax);
invalid_funccall(); //    void (*0x406271)() ();
label_142:
    if (*((rbp - 0x260)) > 1) {
        goto label_151;
    }
    eax = *((r13 + 4));
    if (bl != 0) {
        if (eax == 3) {
            goto label_151;
        }
    }
    *((rbp - 0x2f0)) = 0;
    if (eax != 4) {
        goto label_10;
    }
label_151:
    rax = fcn_00409a10 (*((rbp - 0x2b8)), *((rbp - 0x268)), *((rbp - 0x270)));
    *((rbp - 0x2f0)) = rax;
label_20:
    if (*((rbp - 0x2f0)) == 0) {
        goto label_10;
    }
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_11;
    }
    ecx = *((r13 + 0x2e));
    r8d = *((rbp - 0x2e0));
    al = fcn_00404f50 (*((rbp - 0x2f0)), *((rbp - 0x2b8)), 1);
    if (al == 0) {
        goto label_12;
    }
label_22:
    r15d = 1;
invalid_funccall(); //    void (*0x406271)() ();
label_104:
    al = fcn_0040aef0 (rdi, r14, *((rbp - 0x2d8)));
    if (al != 0) {
        goto label_152;
    }
label_138:
    fcn_0040ae60 (*((r13 + 0x40)), r14, *((rbp - 0x2d8)));
    goto label_3;
label_132:
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    if (al == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
    eax = r12d;
    eax &= 0x3f;
    *((rbp - 0x308)) = eax;
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_13;
    }
label_18:
    rdx = *((rbp - 0x268));
    rcx = *((rbp - 0x270));
    rax = *((rbp - 0x2e8));
    if (*((rbp - 0x2e8)) != 0) {
        goto label_153;
    }
    goto label_154;
    do {
label_14:
        rax = *(rax);
        if (rax == 0) {
            goto label_154;
        }
INVALID_JUMP;
    } while (*((rax + 8)) != rdx);
    if (*((rax + 0x10)) != rcx) {
        goto label_14;
    }
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    rbx = rax;
label_34:
    rax = dcgettext (0, "cannot copy cyclic symbolic link %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
invalid_funccall(); //    void (*0x406910)() ();
label_126:
    if (*((r13 + 0x2e)) != 0) {
        goto label_15;
    }
    if (*((rbp - 0x2c4)) != 0x4000) {
        goto label_16;
    }
label_130:
    if (*((r13 + 0x2a)) == 0) {
        goto label_16;
    }
    goto label_6;
label_134:
    eax = *((r13 + 0x17));
    *((rbp - 0x321)) = al;
    if (al != 0) {
        goto label_155;
    }
    eax = *((rbp - 0x2c4));
    if (eax == 0x8000) {
        goto label_156;
    }
    r8b = (eax != 0xa000) ? 1 : 0;
    r8b &= *((r13 + 0x14));
    if (r8b != 0) {
        goto label_156;
    }
    *((rbp - 0x2c0)) = r8b;
    if (*((rbp - 0x2c4)) == 0x1000) {
        goto label_157;
    }
    ecx = *((rbp - 0x2c8));
    eax = *((rbp - 0x2c8));
    eax &= 0xb000;
    r12b = (eax == 0x2000) ? 1 : 0;
    al = (*((rbp - 0x2c4)) == 0xc000) ? 1 : 0;
    r12b |= al;
    *((rbp - 0x2e0)) = r12b;
    if (r12b == 0) {
        goto label_158;
    }
    edx = *((rbp - 0x308));
    rax = *((rbp - 0x248));
    edi = 0;
    rsi = *((rbp - 0x2b8));
    edx = ~edx;
    *((rbp - 0xc0)) = rax;
    edx &= ecx;
    rcx = rbp - 0xc0;
    eax = xmknod ();
    r8d = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x321)) = r8b;
    if (eax == 0) {
invalid_funccall(); //        void (*0x405f45)() ();
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
label_40:
    rax = dcgettext (0, "cannot create special file %s");
    r12 = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), r12);
label_154:
    rsi = *((rbp - 0x2e8));
    rax = rsp + 0xf;
    rax &= 0xfffffffffffffff0;
    *((rbp - 0x318)) = rax;
    *(rax) = rsi;
    *((rax + 8)) = rdx;
    *((rax + 0x10)) = rcx;
    if (*((rbp - 0x2d0)) == 0) {
        eax = *((rbp - 0x1c8));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_159;
        }
    }
    esi = *((rbp - 0x308));
    rdi = *((rbp - 0x2b8));
    esi = ~esi;
    esi &= r12d;
    eax = mkdir ();
    if (eax != 0) {
        goto label_160;
    }
    rsi = *((rbp - 0x2b8));
    rdx = rbp - 0x1e0;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_161;
    }
    r12d = *((rbp - 0x1c8));
    *((rbp - 0x321)) = 0;
    eax = r12d;
    eax &= 0x1c0;
    if (eax != 0x1c0) {
        esi |= 0x1c0;
        eax = chmod (*((rbp - 0x2b8)), r12d);
        *((rbp - 0x344)) = r12d;
        *((rbp - 0x321)) = 1;
        if (eax != 0) {
            goto label_162;
        }
    }
    rax = *((rbp + 0x18));
    if (*(rax) == 0) {
        goto label_163;
    }
label_48:
    if (*((r13 + 0x2e)) != 0) {
        if (*((r13 + 0x18)) == 0) {
            goto label_164;
        }
        rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
        edx = 5;
        r12 = rax;
        rax = dcgettext (0, "created directory %s\n");
        rdx = r12;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
    }
label_43:
    rax = *((rbp - 0x2f8));
    r12b = (rax != 0) ? 1 : 0;
    r12b &= *((r13 + 0x1c));
    *((rbp - 0x2e0)) = r12b;
    if (r12b != 0) {
        goto label_165;
    }
label_32:
    __asm ("movdqu xmm0, xmmword [r13]");
    __asm ("movdqu xmm1, xmmword [r13 + 0x10]");
    esi = 2;
    __asm ("movdqu xmm2, xmmword [r13 + 0x20]");
    __asm ("movdqu xmm3, xmmword [r13 + 0x30]");
    rax = *((r13 + 0x40));
    *((rbp - 0xc0)) = xmm0;
    *((rbp - 0xb0)) = xmm1;
    *((rbp - 0xa0)) = xmm2;
    *((rbp - 0x90)) = xmm3;
    *((rbp - 0x80)) = rax;
    rax = fcn_0040f480 (r14);
    *((rbp - 0x330)) = rax;
    if (rax == 0) {
        goto label_166;
    }
    if (*((r13 + 4)) == 3) {
        *((rbp - 0xbc)) = 2;
    }
    rax = *((rbp - 0x330));
    if (*(rax) == 0) {
        goto label_167;
    }
    rax = rbp - 0x150;
    ecx = 0;
    *((rbp - 0x338)) = r15b;
    r12 = *((rbp - 0x330));
    *((rbp - 0x310)) = rax;
    rax = rbp - 0xc0;
    r15d = ecx;
    *((rbp - 0x320)) = rax;
    rax = rbp - 0x2a0;
    *((rbp - 0x340)) = r13;
    r13 = *((rbp + 0x20));
    *((rbp - 0x2e0)) = 1;
    *((rbp - 0x2f8)) = rax;
    *((rbp - 0x2e8)) = r14;
    *((rbp - 0x328)) = ebx;
    while (*((rbp - 0x2a0)) == 0) {
        r15b |= *((rbp - 0x150));
        strlen (r12);
        r12 = r12 + rax + 1;
        if (*(r12) == 0) {
            goto label_168;
        }
        rdi = *((rbp - 0x2e8));
        edx = 0;
        rsi = r12;
        rax = fcn_0040b0c0 ();
        rdi = *((rbp - 0x2b8));
        edx = 0;
        rsi = r12;
        rbx = rax;
        rax = fcn_0040b0c0 ();
        r14 = rax;
        rax = *((rbp + 0x18));
        eax = *(rax);
        *((rbp - 0x150)) = al;
        al = fcn_00405990 (rbx, r14, *((rbp - 0x2c0)), *((rbp - 0x2d8)), *((rbp - 0x318)), *((rbp - 0x320)));
        goto label_17;
        *((rbp - 0x2e0)) &= al;
        eax = *((rbp - 0x2a0));
        *(r13) |= al;
        free (r14);
        free (rbx);
    }
label_168:
    r12d = r15d;
    r14 = *((rbp - 0x2e8));
    r15d = *((rbp - 0x338));
    r13 = *((rbp - 0x340));
    ebx = *((rbp - 0x328));
label_66:
    free (*((rbp - 0x330)));
    rax = *((rbp + 0x18));
    *(rax) = r12b;
label_61:
    *((rbp - 0x2e8)) = 0;
    r8d = 0;
invalid_funccall(); //    void (*0x405f45)() ();
label_133:
    ecx = *((rbp - 0x2c0));
    r8 = r13;
    al = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x2c8)));
    if (al == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
    eax = r12d;
    eax &= 0x12;
    *((rbp - 0x308)) = eax;
    goto label_18;
label_137:
    rax = fcn_0040ea00 (4, rsi);
    edx = 5;
    rbx = rax;
    if (*((r13 + 0x19)) == 0) {
invalid_funccall(); //        void (*0x406e18)() ();
    }
label_55:
    dcgettext (0, "omitting directory %s");
label_67:
    rdx = *((rbp - 0x270));
    *((rbp - 0x300)) = 0;
label_139:
    rax = fcn_004099d0 (*((rbp - 0x268)), rdx);
    *((rbp - 0x2f0)) = rax;
    goto label_19;
label_144:
    rax = fcn_004099d0 (*((rbp - 0x268)), *((rbp - 0x270)));
    *((rbp - 0x2f0)) = rax;
    goto label_20;
label_110:
    ecx = 0;
    if (*((r13 + 0x1f)) != 0) {
        ecx = 1;
        if (*((r13 + 0x18)) == 0) {
            goto label_169;
        }
        rax = *((rbp - 0x270));
        cl = (*((rbp - 0x1e0)) != rax) ? 1 : 0;
    }
label_169:
    *((rbp - 0x300)) = r8b;
    eax = fcn_0040fd60 (*((rbp - 0x2b8)), *((rbp - 0x2f0)), *((rbp - 0x2d8)), 0);
    r8d = *((rbp - 0x300));
    if (eax < 0) {
        goto label_21;
    }
    if (*((rbp + 0x28)) != 0) {
        rax = *((rbp + 0x28));
        *(rax) = 1;
    }
    rax = fcn_00409a10 (*((rbp - 0x2b8)), *((rbp - 0x268)), *((rbp - 0x270)));
    if (rax == 0) {
        goto label_22;
    }
    ecx = *((r13 + 0x2e));
    r8d = *((rbp - 0x2e0));
    al = fcn_00404f50 (rax, *((rbp - 0x2b8)), 1);
    if (al != 0) {
        goto label_22;
    }
    if (*((r13 + 0x25)) == 0) {
invalid_funccall(); //        void (*0x406271)() ();
    }
label_108:
    r12d = 0;
    ecx = 0;
label_47:
    eax = *((rbp - 0x258));
    r9 = *((rbp - 0x2f0));
    rdx = *((rbp - 0x2d8));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_170;
    }
label_27:
    edi = *(r13);
    if (edi == 0) {
        goto label_171;
    }
    if (r12b != 0) {
        goto label_172;
    }
    if (*((r13 + 0x18)) != 0) {
        goto label_23;
    }
    if (*((r13 + 4)) == 2) {
        goto label_23;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_23;
    }
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_23;
    }
label_30:
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040e920 (0, 4, r14);
    edx = 5;
    esi = "%s and %s are the same file";
    rbx = rax;
    goto label_24;
label_155:
    r8d = *((rbp - 0x2e0));
    edx = *((r13 + 0x16));
    ecx = 0;
    al = fcn_00404f50 (r14, *((rbp - 0x2b8)), rdx);
    r8d = 0;
    *((rbp - 0x321)) = 0;
    *((rbp - 0x2e0)) = al;
    if (al != 0) {
invalid_funccall(); //        void (*0x405f45)() ();
    }
invalid_funccall(); //    void (*0x406910)() ();
label_148:
    eax = rmdir ();
    if (eax == 0) {
        goto label_25;
    }
    if (*(r12) == 2) {
        goto label_25;
    }
label_149:
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
    r13 = rax;
    rax = fcn_0040e920 (0, 4, r14);
    edx = 5;
    rbx = rax;
label_29:
    rax = dcgettext (0, "inter-device move failed: %s to %s; unable to remove target");
    r8 = r13;
    rcx = rbx;
    eax = 0;
    error (0, *(r12), rax);
    fcn_00409980 (*((rbp - 0x268)), *((rbp - 0x270)));
invalid_funccall(); //    void (*0x406271)() ();
label_145:
    if (*((r13 + 0x2e)) != 0) {
        goto label_173;
    }
label_39:
    if (*((r13 + 0x21)) != 0) {
        goto label_174;
    }
label_38:
    if (*((rbp + 0x28)) != 0) {
        rax = *((rbp + 0x28));
        *(rax) = 1;
    }
    if (bl == 0) {
        goto label_22;
    }
    r15d = ebx;
    fcn_0040ae60 (*((r13 + 0x38)), *((rbp - 0x2b8)), *((rbp - 0x2d8)));
invalid_funccall(); //    void (*0x406271)() ();
label_107:
    rax = *((rbp - 0x1e0));
    if (*((rbp - 0x270)) != rax) {
        goto label_26;
    }
    r12d = *((r13 + 0x17));
    if (r12b != 0) {
        goto label_37;
    }
    if (*((r13 + 4)) == 2) {
        goto label_175;
    }
    rax = rbp - 0x150;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    *((rbp - 0x300)) = r8b;
    rdx = rax;
    *((rbp - 0x310)) = rax;
    eax = lxstat ();
    r8d = *((rbp - 0x300));
    if (eax != 0) {
        goto label_23;
    }
    rax = rbp - 0xc0;
    rsi = r14;
    edi = 1;
    rdx = rax;
    *((rbp - 0x320)) = rax;
    eax = lxstat ();
    r8d = *((rbp - 0x300));
    if (eax != 0) {
        goto label_23;
    }
    rax = *((rbp - 0x148));
    if (*((rbp - 0xb8)) == rax) {
        rax = *((rbp - 0x150));
        r12b = (*((rbp - 0xc0)) == rax) ? 1 : 0;
    }
    eax = *((rbp - 0xa8));
    r9 = *((rbp - 0x310));
    rdx = *((rbp - 0x320));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_27;
    }
    eax = *((rbp - 0x138));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_27;
    }
    if (*((r13 + 0x15)) == 0) {
        goto label_27;
    }
    goto label_23;
label_109:
    if (*((r13 + 0x18)) == 0) {
        goto label_28;
    }
    eax = *((r13 + 8));
label_111:
    if (eax == 2) {
        goto label_176;
    }
    if (eax == 3) {
        goto label_177;
    }
    if (eax != 4) {
        goto label_28;
    }
    if (*((r13 + 0x2f)) == 0) {
        goto label_28;
    }
    *((rbp - 0x300)) = r8b;
    al = fcn_00404bd0 (*((rbp - 0x2b8)), *((rbp - 0x1c8)));
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_28;
    }
label_177:
    rax = *((rbp - 0x2f0));
    *((rbp - 0x300)) = r8b;
    al = fcn_00404e20 (r13, *((rbp - 0x2b8)), rax + 0x18);
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_28;
    }
label_176:
    if (*((rbp + 0x28)) == 0) {
        goto label_22;
    }
label_51:
    rax = *((rbp + 0x28));
    r15d = 1;
    *(rax) = 1;
invalid_funccall(); //    void (*0x406271)() ();
label_147:
    rax = fcn_0040e920 (1, 4, *((rbp - 0x2b8)));
    r13 = rax;
    rax = fcn_0040e920 (0, 4, r14);
    edx = 5;
    esi = "cannot move %s to %s";
    rbx = rax;
    goto label_29;
label_156:
    eax = *((rbp - 0x258));
    sil = (*((r13 + 4)) == 2) ? 1 : 0;
    *((rbp - 0x318)) = eax;
    eax = *((r13 + 0x23));
    esi <<= 0x11;
    *((rbp - 0x310)) = al;
    eax = 0;
    eax = fcn_0040ae10 (r14, 0, rdx, rcx);
    *((rbp - 0x2c0)) = eax;
    if (eax < 0) {
        goto label_178;
    }
    esi = *((rbp - 0x2c0));
    rdx = rbp - 0x150;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_179;
    }
    rax = *((rbp - 0x148));
    if (*((rbp - 0x268)) != rax) {
        goto label_180;
    }
    rax = *((rbp - 0x150));
    if (*((rbp - 0x270)) != rax) {
        goto label_180;
    }
    r12d &= 0x1ff;
    *((rbp - 0x354)) = r12d;
    if (*((rbp - 0x2d0)) != 0) {
        goto label_92;
    }
    r12 = *((rbp - 0x2b8));
    esi -= esi;
    eax = 0;
    esi &= 0xfffffe00;
    esi += 0x201;
    eax = fcn_0040ae10 (r12, rsi, rdx, rcx);
    ecx = eax;
    *((rbp - 0x2e8)) = eax;
    rax = 0xff000000ff00;
    if ((*((r13 + 0x20)) & rax) == 0) {
        goto label_181;
    }
    if (ecx >= 0) {
        goto label_182;
    }
label_68:
    rax = errno_location ();
    r12 = rax;
    if (*((r13 + 0x16)) == 0) {
        goto label_183;
    }
    eax = unlink (*((rbp - 0x2b8)));
    if (eax != 0) {
        goto label_184;
    }
    if (*((r13 + 0x2e)) != 0) {
        goto label_185;
    }
label_96:
    eax = *((r13 + 0x21));
    ecx = *((rbp - 0x308));
    *((rbp - 0x2d0)) = al;
    *((rbp - 0x348)) = ecx;
    if (al != 0) {
        goto label_186;
    }
label_62:
    r12d = *((rbp - 0x348));
    eax = 0;
    r12d = ~r12d;
    r12d &= *((rbp - 0x354));
    edx = r12d;
    *((rbp - 0x2e0)) = r12d;
    eax = fcn_0040ae10 (*((rbp - 0x2b8)), 0xc1, edx, rcx);
    *((rbp - 0x2e8)) = eax;
    rax = errno_location ();
    edx = *((rbp - 0x2e8));
    r12d = *(rax);
    *((rbp - 0x2f8)) = rax;
    edx >>= 0x1f;
    al = (r12d == 0x11) ? 1 : 0;
    al &= dl;
    *((rbp - 0x320)) = al;
    if (al == 0) {
        goto label_187;
    }
    eax = *((r13 + 0x18));
    r12d = 0x11;
    *((rbp - 0x2d0)) = al;
    if (al == 0) {
        goto label_188;
    }
label_70:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot create regular file %s");
    rcx = *((rbp - 0x2e0));
label_46:
    eax = 0;
    error (0, r12d, rax);
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
label_171:
    ecx = *((r13 + 0x18));
    if (cl != 0) {
        goto label_189;
    }
    if (*((r13 + 0x15)) != 0) {
        goto label_189;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
label_59:
        eax = *((r9 + 0x18));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_190;
        }
label_36:
        ecx = *((r13 + 0x18));
label_35:
        if (cl == 0) {
            goto label_63;
        }
        eax = *((rbp - 0x258));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_191;
        }
    }
label_63:
    if (*((r13 + 0x2c)) != 0) {
        goto label_192;
    }
    if ((*((r13 + 0x14)) & 0xff00ff00) != 0) {
        eax = *((r9 + 0x18));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_192;
        }
    }
    if (*((r13 + 4)) != 2) {
        goto label_30;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_193;
    }
    __asm ("movdqa xmm4, xmmword [rdx]");
    *((rbp - 0xc0)) = xmm4;
    __asm ("movdqa xmm5, xmmword [rdx + 0x10]");
    *((rbp - 0xb0)) = xmm5;
    __asm ("movdqa xmm6, xmmword [rdx + 0x20]");
    *((rbp - 0xa0)) = xmm6;
    __asm ("movdqa xmm7, xmmword [rdx + 0x30]");
    *((rbp - 0x90)) = xmm7;
    __asm ("movdqa xmm4, xmmword [rdx + 0x40]");
    *((rbp - 0x80)) = xmm4;
    __asm ("movdqa xmm5, xmmword [rdx + 0x50]");
    *((rbp - 0x70)) = xmm5;
    __asm ("movdqa xmm6, xmmword [rdx + 0x60]");
    *((rbp - 0x60)) = xmm6;
    __asm ("movdqa xmm7, xmmword [rdx + 0x70]");
    *((rbp - 0x50)) = xmm7;
    __asm ("movdqa xmm4, xmmword [rdx + 0x80]");
    *((rbp - 0x40)) = xmm4;
label_76:
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_194;
    }
    __asm ("movdqa xmm5, xmmword [r9]");
    *((rbp - 0x150)) = xmm5;
    __asm ("movdqa xmm6, xmmword [r9 + 0x10]");
    *((rbp - 0x140)) = xmm6;
    __asm ("movdqa xmm7, xmmword [r9 + 0x20]");
    *((rbp - 0x130)) = xmm7;
    __asm ("movdqa xmm4, xmmword [r9 + 0x30]");
    *((rbp - 0x120)) = xmm4;
    __asm ("movdqa xmm5, xmmword [r9 + 0x40]");
    *((rbp - 0x110)) = xmm5;
    __asm ("movdqa xmm6, xmmword [r9 + 0x50]");
    *((rbp - 0x100)) = xmm6;
    __asm ("movdqa xmm7, xmmword [r9 + 0x60]");
    *((rbp - 0xf0)) = xmm7;
    __asm ("movdqa xmm4, xmmword [r9 + 0x70]");
    *((rbp - 0xe0)) = xmm4;
    __asm ("movdqa xmm5, xmmword [r9 + 0x80]");
    *((rbp - 0xd0)) = xmm5;
label_75:
    rax = *((rbp - 0x148));
    if (*((rbp - 0xb8)) != rax) {
        goto label_23;
    }
    rax = *((rbp - 0x150));
    if (*((rbp - 0xc0)) != rax) {
        goto label_23;
    }
    if (*((r13 + 0x17)) == 0) {
        goto label_30;
    }
label_37:
    *((rbp - 0x2d0)) = 1;
    goto label_23;
label_152:
    *((rbp - 0x2b8)) = al;
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "warning: source file %s specified more than once");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    r8d = *((rbp - 0x2b8));
    r15d = r8d;
invalid_funccall(); //    void (*0x406271)() ();
label_140:
    rax = fcn_0040e920 (1, 4, *(0x00621988));
    rbx = rax;
    rax = fcn_0040e920 (0, 4, *(0x00621990));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot copy a directory, %s, into itself, %s");
    r8 = rbx;
    rcx = r12;
    eax = 0;
    error (0, 0, rax);
    rax = *((rbp + 0x20));
    *(rax) = 1;
    goto label_12;
label_127:
    rax = rbp - 0xc0;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    rdx = rax;
    r12 = rax;
    eax = lxstat ();
    if (eax != 0) {
        goto label_1;
    }
    rdx = r12;
    goto label_31;
label_165:
    *((rbp - 0x2e8)) = 0;
    r8d = 0;
    rcx = *((rbp - 0x270));
    if (*(rax) != rcx) {
invalid_funccall(); //        void (*0x405f45)() ();
    }
    goto label_32;
label_135:
    rdx = rbp - 0x150;
    esi = 0x418d7b;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_33;
    }
    rdx = rbp - 0xc0;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_33;
    }
    rax = *((rbp - 0xb8));
    if (*((rbp - 0x148)) == rax) {
        goto label_195;
    }
label_69:
    free (r12);
    rax = fcn_0040ead0 (0, 3, *((rbp - 0x2b8)));
    edx = 5;
    esi = "%s: can make relative symbolic links only in current directory";
    rbx = rax;
    goto label_34;
label_189:
    eax = *((r9 + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_23;
    }
    if (r12b != 0) {
        if (*((r9 + 0x10)) > 1) {
            goto label_196;
        }
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_35;
    }
label_190:
    rax = *((r9 + 8));
    if (*((rdx + 8)) != rax) {
        goto label_23;
    }
    rax = *(r9);
    if (*(rdx) != rax) {
        goto label_23;
    }
    if (*((r13 + 0x17)) == 0) {
        goto label_36;
    }
    goto label_37;
label_174:
    rcx = r13;
    edx = 1;
    fcn_00405620 (*((rbp - 0x2b8)), 0);
    goto label_38;
label_173:
    edx = 5;
    rax = dcgettext (0, "renamed ");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    fcn_00404d70 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
    goto label_39;
label_160:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot create directory %s";
    rbx = rax;
    goto label_40;
label_113:
    if (*((rbp - 0x2c4)) == 0x4000) {
        goto label_41;
    }
label_117:
    if (*((r13 + 0x18)) == 0) {
        goto label_197;
    }
    r12d = *(r13);
    if (r12d == 0) {
        goto label_197;
    }
label_45:
    edx = *((rbp - 0x258));
    edx &= 0xf000;
    if (edx == 0x4000) {
        goto label_198;
    }
label_50:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ad40 (r14);
    ecx = *((rbp - 0x2f0));
    r8 = rax;
    if (*(rax) == 0x2e) {
        goto label_199;
    }
label_49:
    if (r12d != 3) {
        rdi = r8;
        *((rbp - 0x2f0)) = cl;
        *((rbp - 0x308)) = r8;
        rax = strlen (rdi);
        *((rbp - 0x2d0)) = rax;
        rax = fcn_0040ad40 (*((rbp - 0x2b8)));
        rdi = rax;
        *((rbp - 0x300)) = rax;
        rax = strlen (rdi);
        rcx = imp.__libc_start_main;
        r12 = rax;
        rdi = rcx;
        *((rbp - 0x310)) = rcx;
        rax = strlen (rdi);
        ecx = *((rbp - 0x2f0));
        r9 = rax;
        rax = r12 + rax;
        *((rbp - 0x318)) = r9;
        if (*((rbp - 0x2d0)) != rax) {
            goto label_82;
        }
        r8 = *((rbp - 0x308));
        *((rbp - 0x2d0)) = cl;
        rdi = r8;
        *((rbp - 0x2f0)) = r8;
        eax = memcmp (rdi, *((rbp - 0x300)), r12);
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            goto label_82;
        }
        r8 = *((rbp - 0x2f0));
        eax = strcmp (r8 + r12, *((rbp - 0x310)));
        ecx = *((rbp - 0x2d0));
        if (eax != 0) {
            goto label_82;
        }
        *((rbp - 0x300)) = cl;
        rax = strlen (*((rbp - 0x2b8)));
        r9 = *((rbp - 0x318));
        *((rbp - 0x2f0)) = rax;
        rax = fcn_004112e0 (r9 + rax + 1);
        rdx = *((rbp - 0x2f0));
        rsi = *((rbp - 0x2b8));
        r12 = rax;
        rax = imp.__libc_start_main;
        rdi = r12;
        *((rbp - 0x2d0)) = rax;
        rax = mempcpy ();
        strcpy (rax, *((rbp - 0x2d0)));
        rax = rbp - 0xc0;
        rsi = r12;
        edi = 1;
        rdx = rax;
        eax = xstat ();
        *((rbp - 0x2d0)) = eax;
        free (r12);
        eax = *((rbp - 0x2d0));
        ecx = *((rbp - 0x300));
        if (eax != 0) {
            goto label_82;
        }
        rax = *((rbp - 0xb8));
        if (*((rbp - 0x268)) == rax) {
            goto label_200;
        }
    }
label_82:
    *((rbp - 0x2d0)) = cl;
    rax = fcn_0040a8b0 (*((rbp - 0x2b8)), *(r13));
    ecx = *((rbp - 0x2d0));
    r12 = rax;
    *((rbp - 0x300)) = rax;
    *((rbp - 0x2f0)) = cl;
    if (rax == 0) {
        goto label_201;
    }
    rax = strlen (rax);
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, r12, rax + 1);
    r12 = rax;
    free (*((rbp - 0x300)));
    *((rbp - 0x300)) = r12;
    ecx = *((rbp - 0x2f0));
    *((rbp - 0x2d0)) = 1;
    goto label_42;
label_159:
    rax = 0xff000000ff00;
    if ((*((r13 + 0x20)) & rax) != 0) {
        goto label_202;
    }
label_53:
    *((rbp - 0x321)) = 0;
    *((rbp - 0x308)) = 0;
    goto label_43;
label_170:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_27;
    }
    *((rbp - 0x308)) = ecx;
    *((rbp - 0x300)) = r8b;
    al = fcn_0040ef80 (r14, *((rbp - 0x2b8)));
    if (al != 0) {
        goto label_30;
    }
    r8d = *(r13);
    r8d = *((rbp - 0x300));
    if (r8d != 0) {
        goto label_23;
    }
    ecx = *((rbp - 0x308));
    if (ecx == 0) {
        goto label_23;
    }
    r12d = *((r13 + 0x18));
    eax = 1;
    r12d ^= 1;
label_54:
    if (r12b == 0) {
        goto label_30;
    }
    *((rbp - 0x2d0)) = al;
    goto label_23;
label_150:
    edx = 5;
    rax = dcgettext (0, "copied ");
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    fcn_00404d70 (r14, *((rbp - 0x2b8)), *((rbp - 0x300)));
    *((rbp - 0x2c0)) = 1;
    goto label_5;
label_146:
    edi = 1;
    r15d = 1;
    rax = fcn_0040e920 (edi, 4, *(0x00621988));
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *(0x00621990));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot move %s to a subdirectory of itself, %s");
    r8 = r12;
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    rax = *((rbp + 0x20));
    *(rax) = 1;
invalid_funccall(); //    void (*0x406271)() ();
label_136:
    rax = fcn_0040e920 (1, 4, r14);
    rbx = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot create symbolic link %s to %s");
    r14 = rax;
    rax = errno_location ();
    r8 = rbx;
    rcx = r12;
    eax = 0;
    error (0, *(rax), r14);
invalid_funccall(); //    void (*0x406910)() ();
label_158:
    if (*((rbp - 0x2c4)) != 0xa000) {
        goto label_203;
    }
    rax = fcn_0040a1c0 (r14, *((rbp - 0x240)));
    r12 = rax;
    if (rax == 0) {
        goto label_204;
    }
    ecx = *((r13 + 0x16));
    eax = fcn_00409fd0 (rax, 0xffffff9c, *((rbp - 0x2b8)), rcx);
    if (eax < 0) {
        goto label_205;
    }
label_65:
    free (r12);
    eax = *((r13 + 0x25));
    *((rbp - 0x321)) = al;
    if (al != 0) {
invalid_funccall(); //        void (*0x406e0d)() ();
    }
    r8d = *((r13 + 0x1d));
    if (r8b != 0) {
        goto label_206;
    }
    *((rbp - 0x321)) = r8b;
    *((rbp - 0x2e8)) = 1;
    *((rbp - 0x2e0)) = 1;
invalid_funccall(); //    void (*0x405f45)() ();
label_114:
    if (*((r13 + 0x18)) == 0) {
        goto label_207;
    }
    r12d = *(r13);
    if (r12d == 0) {
        goto label_207;
    }
    if (bl != 0) {
        goto label_44;
    }
    goto label_45;
label_180:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "skipping file %s, as it was replaced while being copied");
    rcx = r12;
    esi = 0;
    rdx = rax;
    goto label_46;
label_175:
    r12d = 1;
    ecx = 1;
    goto label_47;
label_163:
    fcn_00409a10 (*((rbp - 0x2b8)), *((rbp - 0x1d8)), *((rbp - 0x1e0)));
    rax = *((rbp + 0x18));
    *(rax) = 1;
    goto label_48;
label_115:
    if (*((r13 + 0x18)) != 0) {
        goto label_45;
    }
label_119:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ad40 (r14);
    ecx = *((rbp - 0x2f0));
    r8 = rax;
    if (*(rax) == 0x2e) {
        goto label_208;
    }
label_58:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_49;
    }
    do {
        *((rbp - 0x300)) = 0;
        goto label_42;
label_118:
        eax = *((rbp - 0x258));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_209;
        }
INVALID_JUMP;
    } while (r12d == 0);
    goto label_50;
label_141:
    rax = fcn_0040ea00 (4, *(0x00621990));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "warning: source directory %s specified more than once");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    if (*((r13 + 0x18)) == 0) {
        goto label_22;
    }
    if (*((rbp - 0x2c0)) != 0) {
        goto label_51;
    }
    goto label_22;
label_161:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot stat %s";
    rbx = rax;
    goto label_40;
label_178:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    esi = "cannot open %s for reading";
    rbx = rax;
    goto label_40;
label_112:
    rax = *((rbp - 0x2f0));
    *((rbp - 0x300)) = r8b;
    al = fcn_00404e20 (r13, *((rbp - 0x2b8)), rax + 0x18);
    r8d = *((rbp - 0x300));
    if (al != 0) {
        goto label_28;
    }
    goto label_22;
label_164:
    fcn_00404d70 (r14, *((rbp - 0x2b8)), 0);
    goto label_43;
label_157:
    eax = *((rbp - 0x308));
    rsi = *((rbp - 0x2b8));
    edi = 0;
    rcx = rbp - 0xc0;
    *((rbp - 0xc0)) = 0;
    eax = ~eax;
    eax &= *((rbp - 0x2c8));
    edx = eax;
    r12d = eax;
    eax = xmknod ();
    r8d = *((rbp - 0x2c0));
    if (eax != 0) {
        goto label_210;
    }
label_64:
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x321)) = r8b;
    *((rbp - 0x2e0)) = 1;
invalid_funccall(); //    void (*0x405f45)() ();
label_209:
    eax = *((rbp - 0x1c8));
label_198:
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_52;
    }
    if (r12d != 0) {
        goto label_50;
    }
    rax = fcn_0040ead0 (0, 3, *((rbp - 0x2b8)));
    r12 = rax;
    rax = fcn_0040ead0 (0, 3, r14);
    edx = 5;
    esi = "cannot move directory onto non-directory: %s -> %s";
    rbx = rax;
    goto label_24;
label_203:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    esi = "%s has unknown file type";
    rbx = rax;
    goto label_34;
label_202:
    esi = *((r13 + 0x25));
    edx = 0;
    rcx = r13;
    al = fcn_00405620 (*((rbp - 0x2b8)), rsi);
    if (al != 0) {
        goto label_53;
    }
    if (*((r13 + 0x26)) == 0) {
        goto label_53;
    }
invalid_funccall(); //    void (*0x406910)() ();
label_172:
    *((rbp - 0x2d0)) = r8b;
    eax = fcn_0040ef80 (r14, *((rbp - 0x2b8)));
    r8d = *((rbp - 0x2d0));
    eax ^= 1;
    r12d = eax;
    eax = 0;
    goto label_54;
label_192:
    rax = *(rdx);
    r12b = (*(r9) == rax) ? 1 : 0;
    eax = 0;
    goto label_54;
label_207:
    rax = fcn_0040e920 (1, 4, r14);
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot overwrite non-directory %s with directory %s";
    rbx = rax;
    goto label_24;
label_201:
    rax = errno_location ();
    *((rbp - 0x2d0)) = 1;
    ecx = *((rbp - 0x2f0));
    r12 = rax;
    if (*(rax) == 2) {
        goto label_42;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    rbx = rax;
label_72:
    r15d = 0;
    rax = dcgettext (0, "cannot backup %s");
    rcx = rbx;
    eax = 0;
    error (0, *(r12), rax);
invalid_funccall(); //    void (*0x406271)() ();
label_197:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot overwrite directory %s with non-directory";
    rbx = rax;
    goto label_55;
label_179:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot fstat %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2e0));
    rdx = r12;
    esi = *(rax);
    goto label_46;
label_120:
    *((rbp - 0x300)) = 0;
    if (*((r13 + 4)) != 2) {
        goto label_42;
    }
    eax = *((rbp - 0x258));
    eax &= 0xf000;
    if (eax != 0x8000) {
        goto label_56;
    }
    goto label_42;
label_199:
    eax = 1;
label_60:
    edx = 0;
    dl = (*((r8 + 1)) == 0x2e) ? 1 : 0;
    edx = *((r8 + rdx + 1));
    if (dl == 0) {
        goto label_57;
    }
    if (dl == 0x2f) {
        goto label_57;
    }
    if (al == 0) {
        goto label_58;
    }
    goto label_49;
label_196:
    *((rbp - 0x310)) = r8b;
    *((rbp - 0x308)) = r9;
    *((rbp - 0x300)) = rdx;
    al = fcn_0040ef80 (r14, *((rbp - 0x2b8)));
    rdx = *((rbp - 0x300));
    r9 = *((rbp - 0x308));
    r8d = *((rbp - 0x310));
    if (al == 0) {
        goto label_211;
    }
    eax = *((rdx + 0x18));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_59;
    }
    goto label_36;
label_208:
    eax = 0;
    goto label_60;
label_166:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    *((rbp - 0x2c0)) = rax;
    rax = dcgettext (0, "cannot access %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2c0));
    eax = 0;
    error (0, *(rax), r12);
    *((rbp - 0x2e0)) = 0;
    goto label_61;
label_162:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "setting permissions for %s";
    rbx = rax;
    goto label_40;
label_92:
    eax = *((rbp - 0x308));
    *((rbp - 0x348)) = eax;
    goto label_62;
label_191:
    if (*((r9 + 0x10)) <= 1) {
        goto label_63;
    }
    rdi = r14;
    *((rbp - 0x310)) = r8b;
    *((rbp - 0x308)) = r9;
    *((rbp - 0x300)) = rdx;
    rax = canonicalize_file_name ();
    rdx = *((rbp - 0x300));
    r9 = *((rbp - 0x308));
    r8d = *((rbp - 0x310));
    if (rax == 0) {
        goto label_63;
    }
    rdi = rax;
    *((rbp - 0x300)) = r8b;
    *((rbp - 0x2d0)) = rax;
    eax = fcn_0040ef80 (rdi, *((rbp - 0x2b8)));
    rcx = *((rbp - 0x2d0));
    eax ^= 1;
    r12d = eax;
    eax = free (rcx);
    eax = 0;
    r8d = *((rbp - 0x300));
    goto label_54;
label_210:
    esi = r12d;
    rdi = *((rbp - 0x2b8));
    esi &= 0xffffefff;
    eax = mkfifo ();
    r8d = *((rbp - 0x2c0));
    if (eax == 0) {
        goto label_64;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot create fifo %s";
    rbx = rax;
    goto label_40;
label_205:
    rax = errno_location ();
    eax = *(rax);
    *((rbp - 0x2c0)) = eax;
    if (eax == 0) {
        goto label_65;
    }
    if (*((r13 + 0x2d)) == 1) {
        if (*((rbp - 0x2d0)) == 0) {
            goto label_212;
        }
    }
label_91:
    free (r12);
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "cannot create symbolic link %s");
    rcx = r12;
    eax = 0;
    error (0, *((rbp - 0x2c0)), rax);
invalid_funccall(); //    void (*0x406910)() ();
label_167:
    r12d = 0;
    *((rbp - 0x2e0)) = 1;
    goto label_66;
label_116:
    rax = fcn_0040e920 (1, 4, r14);
    r12 = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "will not overwrite just-created %s with %s";
    rbx = rax;
    goto label_24;
label_123:
    al = (*((rbp - 0x2c4)) == 0x4000) ? 1 : 0;
    al &= *((r13 + 0x2a));
    *((rbp - 0x2d0)) = al;
    if (al != 0) {
        goto label_67;
    }
    *((rbp - 0x2d0)) = 1;
    *((rbp - 0x300)) = 0;
    goto label_4;
label_122:
    *((rbp - 0x2f0)) = cl;
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "removed %s\n");
    rdx = r12;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = *((rbp - 0x2f0));
    *((rbp - 0x300)) = 0;
    goto label_42;
label_181:
    ecx = *((rbp - 0x2e8));
    if (ecx < 0) {
        goto label_68;
    }
label_74:
    *((rbp - 0x348)) = 0;
label_81:
    rax = rbp - 0xc0;
    esi = *((rbp - 0x2e8));
    __asm ("std");
    edi = 1;
    rdx = rax;
    *((rbp - 0x320)) = rax;
    eax = fxstat ();
    *((rbp - 0x2f8)) = eax;
    if (eax != 0) {
        goto label_213;
    }
    if (*((rbp - 0x310)) == 0) {
        goto label_89;
    }
    if (*((r13 + 0x34)) != 0) {
        goto label_214;
    }
label_90:
    eax = getpagesize ();
    r12 = (int64_t) eax;
    rax = *((rbp - 0x88));
    *((rbp - 0x340)) = rax;
    rdx = rax - 0x20000;
    *((rbp - 0x330)) = rax;
    rax = 0x1ffffffffffe0000;
    if (rdx > rax) {
        rcx = *((rbp - 0x340));
        rax = 0x1fffffffffffffff;
        *((rbp - 0x330)) = 0x20000;
        rdx = rcx - 1;
        eax = 0x200;
        if (rdx <= rax) {
            rax = rcx;
        }
        *((rbp - 0x340)) = rax;
    }
    edi = *((rbp - 0x2c0));
    ecx = 2;
    edx = 0;
    esi = 0;
    fcn_0040add0 ();
    r9d = *((rbp - 0x138));
    r9d &= 0xf000;
    if (r9d == 0x8000) {
        rax = *((rbp - 0x120));
        ecx = 0x200;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        al = (*((rbp - 0x110)) < rax) ? 1 : 0;
        eax = (int32_t) al;
        *((rbp - 0x2f8)) = eax;
    }
    rax = r12 - 1;
    *((rbp - 0x2e0)) = rax;
    eax = *((rbp - 0xa8));
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_215;
    }
label_87:
    rdi = *((rbp - 0x118));
    rsi = *((rbp - 0x330));
    rax = 0x1ffffffffffe0000;
    r8 = 0x7fffffffffffffff;
    r8 -= r12;
    *((rbp - 0x338)) = r9d;
    rdx = rdi - 0x20000;
    *((rbp - 0x2e0)) = r8;
    eax = 0x20000;
    rdx = r8;
    if (rdx > rax) {
        rdi = rax;
    }
    rax = fcn_0040a980 (rdi, rsi, rdx);
    r9d = *((rbp - 0x338));
    r8 = *((rbp - 0x2e0));
    rcx = rax;
    if (r9d == 0x8000) {
        goto label_216;
    }
label_86:
    rax = *((rbp - 0x330));
    edx = 0;
    rsi = rcx + rax - 1;
    rax = rsi;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    rsi -= rdx;
    *((rbp - 0x330)) = rsi;
    if (rsi == 0) {
        goto label_217;
    }
    if (r8 < rsi) {
        goto label_217;
    }
label_85:
    rax = *((rbp - 0x330));
    rax = fcn_004112e0 (r12 + rax);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
    if (*((rbp - 0x2f8)) != 0) {
        goto label_218;
    }
    rax = rbp - 0x2a0;
    *((rbp - 0x340)) = 0;
    *((rbp - 0x2f8)) = rax;
    r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
label_94:
    rax = rbp - 0x2a8;
    al = fcn_00405120 (*((rbp - 0x2c0)), *((rbp - 0x2e8)), *((rbp - 0x350)), *((rbp - 0x330)), *((rbp - 0x340)), 0);
    if (al == 0) {
        goto label_78;
    }
    if (*((rbp - 0x2a8)) != 0) {
        goto label_219;
    }
label_71:
    if (*((r13 + 0x1f)) != 0) {
        goto label_220;
    }
label_73:
    if (*((r13 + 0x1d)) != 0) {
        eax = *((rbp - 0xa4));
        if (*((rbp - 0x254)) == eax) {
            eax = *((rbp - 0xa0));
            if (*((rbp - 0x250)) == eax) {
                goto label_221;
            }
        }
        r9 = *((rbp - 0x320));
        r8d = *((rbp - 0x2d0));
        eax = fcn_00405770 (r13, *((rbp - 0x2b8)), *((rbp - 0x2e8)), *((rbp - 0x2d8)), r8);
        if (eax == 0xffffffff) {
            goto label_78;
        }
        if (eax != 0) {
            goto label_221;
        }
        *((rbp - 0x318)) &= 0xfffff1ff;
    }
label_221:
    if (*((r13 + 0x27)) != 0) {
        if ((*((rbp - 0xa8)) & 0x80) == 0) {
            goto label_222;
        }
    }
label_84:
    rax = 0xff0000000000ff;
    if ((*((r13 + 0x18)) & rax) != 0) {
        goto label_223;
    }
label_206:
    edx = *((rbp - 0x250));
    esi = *((rbp - 0x254));
    *((rbp - 0x2c0)) = r8b;
    rdi = *((rbp - 0x2b8));
    eax = lchown ();
    r8d = *((rbp - 0x2c0));
    if (eax == 0) {
        goto label_224;
    }
    al = fcn_00405740 (r13);
    *((rbp - 0x2e8)) = al;
    if (al == 0) {
        goto label_225;
    }
    eax = *((rbp - 0x2e8));
    r8d = 0;
    *((rbp - 0x2e0)) = al;
invalid_funccall(); //    void (*0x405f45)() ();
label_195:
    rax = *((rbp - 0xc0));
    if (*((rbp - 0x150)) != rax) {
        goto label_69;
    }
    goto label_33;
label_188:
    rsi = *((rbp - 0x2b8));
    rdx = rbp - 0xc0;
    edi = 1;
    eax = lxstat ();
    if (eax == 0) {
        eax = *((rbp - 0xa8));
        eax &= 0xf000;
        if (eax != 0xa000) {
            goto label_187;
        }
        r8d = *((r13 + 0x30));
        if (r8b == 0) {
            goto label_226;
        }
        eax = 0;
        eax = fcn_0040ae10 (*((rbp - 0x2b8)), 0x41, *((rbp - 0x2e0)), rcx);
        *((rbp - 0x2e8)) = eax;
        rax = *((rbp - 0x2f8));
        r12d = *(rax);
    }
label_187:
    eax = *((rbp - 0x2e8));
    eax >>= 0x1f;
    dl = (r12d == 0x15) ? 1 : 0;
    dl &= al;
    *((rbp - 0x2d0)) = dl;
    if (dl == 0) {
        goto label_227;
    }
    rsi = *((rbp - 0x2b8));
    r12d = 0x15;
    rdi = rsi;
    if (*(rsi) == 0) {
        goto label_70;
    }
    eax = 0;
    rcx |= 0xffffffffffffffff;
    r12d = 0;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    r12b = (*((rsi + rax - 2)) != 0x2f) ? 1 : 0;
    r12d += 0x14;
    goto label_70;
label_211:
    r12d = *((r13 + 0x18));
    r12d ^= 1;
    goto label_54;
label_89:
    *((rbp - 0x2e0)) = 0;
    goto label_71;
label_204:
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    esi = "cannot read symbolic link %s";
    rbx = rax;
    goto label_40;
label_121:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "cannot remove %s";
    rbx = rax;
    goto label_72;
label_224:
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x2e0)) = r8b;
    r8d = 0;
invalid_funccall(); //    void (*0x405f45)() ();
label_220:
    rax = *((rbp - 0x228));
    *((rbp - 0x2a0)) = rax;
    rax = *((rbp - 0x220));
    *((rbp - 0x298)) = rax;
    rax = *((rbp - 0x218));
    *((rbp - 0x290)) = rax;
    rax = *((rbp - 0x210));
    *((rbp - 0x288)) = rax;
    eax = fcn_00410660 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), rbp - 0x2a0, rcx, r8);
    if (eax == 0) {
        goto label_73;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2f8)) = rax;
    rax = dcgettext (0, "preserving times for %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    if (*((r13 + 0x24)) == 0) {
        goto label_73;
    }
label_78:
    r8d = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_182:
    esi = *((r13 + 0x25));
    rcx = r13;
    edx = 0;
    eax = fcn_00405620 (r12, rsi);
    r8d = eax;
    if (al != 0) {
        goto label_74;
    }
    eax = *((r13 + 0x26));
    *((rbp - 0x2d0)) = al;
    if (al == 0) {
        goto label_74;
    }
    *((rbp - 0x2d0)) = 0;
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_194:
    rax = rbp - 0x150;
    rsi = *((rbp - 0x2b8));
    edi = 1;
    *((rbp - 0x300)) = r8b;
    rdx = rax;
    eax = xstat ();
    r8d = *((rbp - 0x300));
    if (eax == 0) {
        goto label_75;
    }
    goto label_23;
label_193:
    rax = rbp - 0xc0;
    rsi = r14;
    edi = 1;
    *((rbp - 0x308)) = r8b;
    rdx = rax;
    *((rbp - 0x300)) = r9;
    eax = xstat ();
    r9 = *((rbp - 0x300));
    r8d = *((rbp - 0x308));
    if (eax == 0) {
        goto label_76;
    }
    goto label_23;
label_213:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot fstat %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2e0));
    eax = 0;
    error (0, *(rax), r12);
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_223:
    r8d = *((rbp - 0x318));
    ecx = *((rbp - 0x2e8));
    rdx = *((rbp - 0x2b8));
    eax = fcn_0040a0d0 (r14, *((rbp - 0x2c0)));
    r8d = 1;
    if (eax == 0) {
invalid_funccall(); //        void (*0x408940)() ();
    }
label_183:
    r12d = *(r12);
    if (r12d == 2) {
        if (*((r13 + 0x18)) == 0) {
            goto label_228;
        }
    }
    *((rbp - 0x2d0)) = 0;
    goto label_70;
label_228:
    *((rbp - 0x348)) = 0;
    goto label_62;
label_218:
    *((rbp - 0x323)) = 0;
    *((rbp - 0x328)) = 1;
label_88:
    rcx = rbp - 0x2a0;
    rax = *((rbp - 0x120));
    r12d = 0;
    rsi = rcx;
    *((rbp - 0x2f8)) = rcx;
    *((rbp - 0x368)) = rax;
    fcn_00409ae0 (*((rbp - 0x2c0)), rsi);
    r10d = 0;
    *((rbp - 0x358)) = ebx;
    ecx = 0;
    *((rbp - 0x360)) = r13;
    rbx = *((rbp - 0x368));
    *((rbp - 0x322)) = r15b;
    r15d = *((rbp - 0x310));
    *((rbp - 0x338)) = r14;
    r14 = r10;
label_80:
    *((rbp - 0x310)) = rcx;
    al = fcn_00409b10 (*((rbp - 0x2f8)));
    rcx = *((rbp - 0x310));
    if (al == 0) {
        goto label_229;
    }
    if (*((rbp - 0x288)) == 0) {
        goto label_230;
    }
    rdx = r14;
    rsi = r12;
    r13d = 0;
    eax = 0;
    while (rcx == 0) {
label_77:
        r8d = 0;
        if (*((rbp - 0x328)) == 3) {
            r8 = *((rbp - 0x340));
        }
label_79:
        rax = rbp - 0x2a9;
        rax = rbp - 0x2a8;
        al = fcn_00405120 (*((rbp - 0x2c0)), *((rbp - 0x2e8)), *((rbp - 0x350)), *((rbp - 0x330)), r8, 1);
        if (al == 0) {
            goto label_231;
        }
        rax = *((rbp - 0x2a8));
        rcx = r12 + rax;
        if (rax != 0) {
            r15d = *((rbp - 0x2a9));
        }
        if (rbx == rcx) {
            goto label_232;
        }
        eax = r13 + 1;
        rsi = r12;
        rdx = r14;
        r13 = rax;
        if (rax >= *((rbp - 0x288))) {
            goto label_230;
        }
        rcx = rax * 3;
        rax = *((rbp - 0x278));
        rax = rax + rcx*8;
        r12 = *(rax);
        r14 = *((rax + 8));
        rax = r12 + r14;
        if (rbx < rax) {
            r14 = rbx;
            if (r12 > rbx) {
                r12 = rbx;
            }
            r14 -= r12;
        }
        rcx = r12;
        r15d = 0;
        rcx -= rsi;
        rcx -= rdx;
    }
    edi = *((rbp - 0x2c0));
    edx = 0;
    rsi = r12;
    *((rbp - 0x310)) = rcx;
    rax = lseek ();
    rcx = *((rbp - 0x310));
    if (rax < 0) {
        goto label_233;
    }
    eax = *((rbp - 0x328));
    if (eax == 1) {
        goto label_234;
    }
    dl = (eax == 3) ? 1 : 0;
    eax = fcn_00405060 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), 0, rcx);
    r15d = eax;
    if (al != 0) {
        goto label_77;
    }
label_231:
    r15d = *((rbp - 0x322));
    r14 = *((rbp - 0x338));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
label_97:
    free (*((rbp - 0x278)));
    goto label_78;
label_234:
    al = fcn_00404c20 (*((rbp - 0x2e8)), rcx);
    if (al == 0) {
        goto label_235;
    }
    r8d = 0;
    goto label_79;
label_232:
    *((rbp - 0x27f)) = 1;
label_230:
    *((rbp - 0x310)) = rcx;
    free (*((rbp - 0x278)));
    *((rbp - 0x278)) = 0;
    *((rbp - 0x288)) = 0;
    rcx = *((rbp - 0x310));
    if (*((rbp - 0x27f)) == 0) {
        goto label_80;
    }
    *((rbp - 0x310)) = r15b;
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
label_98:
    r12b = (*((rbp - 0x368)) > rcx) ? 1 : 0;
    if (*((rbp - 0x368)) > rcx) {
        goto label_236;
    }
    if (*((rbp - 0x310)) == 0) {
        goto label_71;
    }
label_236:
    if (*((rbp - 0x328)) == 1) {
        goto label_237;
    }
    rsi = *((rbp - 0x368));
    edi = *((rbp - 0x2e8));
    *((rbp - 0x2f8)) = rcx;
    eax = ftruncate ();
    rcx = *((rbp - 0x2f8));
    if (eax != 0) {
        goto label_100;
    }
    if (*((rbp - 0x328)) != 3) {
        goto label_71;
    }
    if (r12b == 0) {
        goto label_71;
    }
    rdx = *((rbp - 0x368));
    rdx -= rcx;
    eax = fcn_00404cd0 (*((rbp - 0x2e8)), rcx);
    if (eax >= 0) {
        goto label_71;
    }
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2f8)) = rax;
label_95:
    rax = dcgettext (0, "error deallocating %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    goto label_78;
label_227:
    *((rbp - 0x2d0)) = 1;
    if (*((rbp - 0x2e8)) < 0) {
        goto label_70;
    }
    goto label_81;
label_200:
    rax = *((rbp - 0xc0));
    if (*((rbp - 0x270)) != rax) {
        goto label_82;
    }
    if (*((r13 + 0x18)) == 0) {
        goto label_238;
    }
    edx = 5;
    rax = dcgettext (0, "backing up %s might destroy source;  %s not moved");
    rbx = rax;
    do {
        rax = fcn_0040e920 (1, 4, r14);
        r12 = rax;
        rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
        r8 = r12;
        rdx = rbx;
        rcx = rax;
        goto label_83;
label_238:
        edx = 5;
        rax = dcgettext (0, "backing up %s might destroy source;  %s not copied");
        rbx = rax;
    } while (1);
label_222:
    eax = geteuid ();
    if (eax == 0) {
        goto label_84;
    }
    eax = fcn_00404d10 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), 0x180);
    if (eax != 0) {
        goto label_84;
    }
    edx = ~edx;
    edx &= *((rbp - 0x354));
    fcn_00404d10 (*((rbp - 0x2e8)), *((rbp - 0x2b8)), *((rbp - 0x348)));
    goto label_84;
label_217:
    *((rbp - 0x330)) = rcx;
    goto label_85;
label_216:
    rax = *((rbp - 0x120));
    if (*((rbp - 0x330)) <= rax) {
        goto label_86;
    }
    rax++;
    *((rbp - 0x330)) = rax;
    goto label_86;
label_215:
    eax = *((r13 + 0xc));
    if (eax == 3) {
        goto label_239;
    }
    if (eax != 2) {
        goto label_87;
    }
    if ((*((rbp - 0x2f8)) & 1) == 0) {
        goto label_87;
    }
    rax = *((rbp - 0x330));
    rax = fcn_004112e0 (rax + r12);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
label_93:
    eax = *((r13 + 0xc));
    *((rbp - 0x328)) = eax;
    eax = *((rbp - 0x310));
    *((rbp - 0x323)) = al;
    goto label_88;
label_214:
    edx = *((rbp - 0x2c0));
    eax = 0;
    eax = ioctl (*((rbp - 0x2e8)), 0x40049409);
    if (eax == 0) {
        goto label_89;
    }
    if (*((r13 + 0x34)) != 2) {
        goto label_90;
    }
    rax = fcn_0040e920 (1, 4, r14);
    *((rbp - 0x2f8)) = rax;
    rax = fcn_0040e920 (0, 4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "failed to clone %s from %s");
    *((rbp - 0x2e0)) = rax;
    rax = errno_location ();
    r8 = *((rbp - 0x2f8));
    rcx = r12;
    eax = 0;
    error (0, *(rax), *((rbp - 0x2e0)));
    r8d = 0;
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x408940)() ();
label_225:
    edx = 5;
    rax = dcgettext (0, "failed to preserve ownership for %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2b8));
    eax = 0;
    error (0, *(rax), r12);
    eax = *((r13 + 0x24));
    *((rbp - 0x321)) = al;
    if (al != 0) {
invalid_funccall(); //        void (*0x406910)() ();
    }
    r8d = *((rbp - 0x2c0));
    *((rbp - 0x2e8)) = r8b;
    *((rbp - 0x2e0)) = r8b;
    r8d = 0;
invalid_funccall(); //    void (*0x405f45)() ();
label_212:
    eax = *((rbp - 0x1c8));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_91;
    }
    eax = *((rbp - 0x2d0));
    rcx |= 0xffffffffffffffff;
    rdi = r12;
    rsi = *((rbp - 0x1b0));
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rax = rcx - 1;
    if (rsi != rax) {
        goto label_91;
    }
    rax = fcn_0040a1c0 (*((rbp - 0x2b8)), rsi);
    if (rax == 0) {
        goto label_91;
    }
    rdi = rax;
    *((rbp - 0x2e0)) = rax;
    eax = strcmp (rdi, r12);
    rdx = *((rbp - 0x2e0));
    rdi = rdx;
    if (eax != 0) {
        goto label_240;
    }
    free (rdi);
    goto label_65;
label_186:
    r8 = r13;
    ecx = 1;
    eax = fcn_00405550 (r14, *((rbp - 0x2b8)), *((rbp - 0x354)));
    r8d = eax;
    if (al != 0) {
        goto label_92;
    }
    *((rbp - 0x2e0)) = 0;
invalid_funccall(); //    void (*0x407447)() ();
label_239:
    rax = *((rbp - 0x330));
    rax = fcn_004112e0 (rax + r12);
    rcx = r12 - 1;
    edx = 0;
    rcx += rax;
    *((rbp - 0x2e0)) = rax;
    rax = rcx;
    rax = rdx_rax / r12;
    rdx = rdx_rax % r12;
    rcx -= rdx;
    *((rbp - 0x350)) = rcx;
    if (*((rbp - 0x2f8)) != 0) {
        goto label_93;
    }
    r9d = 0;
    rax = rbp - 0x2a0;
    r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
    *((rbp - 0x2f8)) = rax;
    goto label_94;
label_219:
    rsi = *((rbp - 0x2a0));
    edi = *((rbp - 0x2e8));
    eax = ftruncate ();
    if (eax >= 0) {
        goto label_71;
    }
label_100:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    esi = "failed to extend %s";
    *((rbp - 0x2f8)) = rax;
    goto label_95;
label_185:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "removed %s\n");
    rdx = r12;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_96;
label_233:
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
    rax = fcn_0040ea00 (4, r14);
    edx = 5;
    *((rbp - 0x2f8)) = rax;
label_99:
    rax = dcgettext (0, "cannot lseek %s");
    r12 = rax;
    rax = errno_location ();
    rcx = *((rbp - 0x2f8));
    eax = 0;
    error (0, *(rax), r12);
    goto label_97;
label_184:
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    *((rbp - 0x2e0)) = rax;
    rax = dcgettext (0, "cannot remove %s");
    rcx = *((rbp - 0x2e0));
    esi = *(r12);
    rdx = rax;
    goto label_46;
label_229:
    *((rbp - 0x310)) = r15b;
    r14 = *((rbp - 0x338));
    r15d = *((rbp - 0x322));
    r13 = *((rbp - 0x360));
    ebx = *((rbp - 0x358));
    if (*((rbp - 0x27f)) != 0) {
        goto label_98;
    }
    if (*((rbp - 0x280)) != 0) {
        r9d = 0;
        eax = 0;
        r9b = (*((r13 + 0xc)) == 3) ? 1 : 0;
        if (*((rbp - 0x323)) != 0) {
            rax = *((rbp - 0x340));
        }
        *((rbp - 0x340)) = rax;
        goto label_94;
label_235:
        r15d = *((rbp - 0x322));
        r14 = *((rbp - 0x338));
        r13 = *((rbp - 0x360));
        ebx = *((rbp - 0x358));
        rax = fcn_0040ead0 (0, 3, *((rbp - 0x2b8)));
        edx = 5;
        esi = "%s: write failed";
        *((rbp - 0x2f8)) = rax;
        goto label_99;
    }
    rax = fcn_0040ead0 (0, 3, r14);
    edx = 5;
    esi = "%s: failed to get extents info";
    *((rbp - 0x2f8)) = rax;
    goto label_95;
label_237:
    rsi -= rcx;
    al = fcn_00404c20 (*((rbp - 0x2e8)), *((rbp - 0x368)));
    if (al != 0) {
        goto label_71;
    }
    goto label_100;
label_240:
    free (rdi);
    goto label_91;
label_226:
    *((rbp - 0x2e8)) = r8b;
    rax = fcn_0040ea00 (4, *((rbp - 0x2b8)));
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "not writing through dangling symlink %s");
    rcx = r12;
    eax = 0;
    error (0, 0, rax);
    eax = *((rbp - 0x320));
    *((rbp - 0x2e0)) = 0;
    r8d = *((rbp - 0x2e8));
    *((rbp - 0x2d0)) = al;
invalid_funccall(); //    return void (*0x407447)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409810 */
#include <stdint.h>
 
uint64_t fcn_00409810 (int64_t arg1, int64_t arg2, uint32_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    if (rcx == 0) {
        goto label_0;
    }
    if (*(rcx) > 3) {
        goto label_1;
    }
    eax = *((rcx + 0xc));
    r10d = rax - 1;
    if (r10d > 2) {
        goto label_2;
    }
    r10d = *((rcx + 0x34));
    if (r10d > 2) {
        goto label_3;
    }
    while (*((rcx + 0x2c)) == 0) {
        if (eax != 2) {
            if (r10d == 2) {
                goto label_4;
            }
        }
        *((rsp + 0xf)) = 0;
        edx = (int32_t) dl;
        *(0x00621990) = rdi;
        *(0x00621988) = rsi;
        rax = rsp + 0x1f;
        fcn_00405990 (rdi, rsi, rdx, 0, 0, rcx);
        return rax;
    }
    assert_fail ("!(co->hard_link && co->symbolic_link)", "src/copy.c", 0xb64, "valid_options");
label_4:
    assert_fail ("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 0xb67, "valid_options");
label_3:
    assert_fail ("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 0xb63, "valid_options");
label_0:
    assert_fail ("co != NULL", "src/copy.c", 0xb60, "valid_options");
label_2:
    assert_fail ("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 0xb62, "valid_options");
label_1:
    return assert_fail ("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 0xb61, "valid_options");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409980 */
#include <stdint.h>
 
uint64_t fcn_00409980 (uint32_t arg1, uint32_t arg2) {
    uint32_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    *(rsp) = rdi;
    *((rsp + 8)) = rsi;
    rsi = rsp;
    *((rsp + 0x10)) = 0;
    rax = fcn_0040c330 (*(0x00621998));
    if (rax != 0) {
        rbx = rax;
        free (*((rax + 0x10)));
        free (rbx);
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4099d0 */
#include <stdint.h>
 
uint64_t fcn_004099d0 (uint32_t arg1, uint32_t arg2) {
    uint32_t var_8h;
    rdi = arg1;
    rsi = arg2;
    *(rsp) = rdi;
    *((rsp + 8)) = rsi;
    rax = fcn_0040b8e0 (*(0x00621998), rsp);
    if (rax != 0) {
        rax = *((rax + 0x10));
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409a10 */
#include <stdint.h>
 
uint64_t fcn_00409a10 (char * arg1, uint32_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdi;
    r12 = rsi;
    rax = fcn_004112e0 (0x18);
    rbx = rax;
    rax = fcn_00411510 (r13);
    rsi = rbx;
    *(rbx) = r12;
    *((rbx + 0x10)) = rax;
    *((rbx + 8)) = rbp;
    rax = fcn_0040c2f0 (*(0x00621998));
    if (rax != 0) {
        eax = 0;
        if (rbx != rbp) {
            free (*((rbx + 0x10)));
            free (rbx);
            rax = *((rbp + 0x10));
        }
        return rax;
    }
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409a90 */
#include <stdint.h>
 
uint64_t fcn_00409a90 (void) {
    rax = fcn_0040bb50 (0x67, 0, 0x409930, 0x409940, 0x409960);
    *(0x00621998) = rax;
    if (rax != 0) {
        return rax;
    }
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409ae0 */
#include <stdint.h>
 
int32_t fcn_00409ae0 (char *** arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = 0;
    *(rsi) = edi;
    *((rsi + 0x28)) = 0;
    *((rsi + 8)) = 0;
    *((rsi + 0x18)) = 0;
    *((rsi + 0x20)) = ax;
    *((rsi + 0x10)) = 1;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409b10 */
#include <stdint.h>
 
int64_t fcn_00409b10 (uint32_t arg1) {
    int64_t var_20h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_30h;
    rdi = arg1;
    r15 = 0x7fffffffffffffff;
    r13d = 0;
    r12 = rdi;
    rbx = *((rdi + 0x28));
    rdx = *((rdi + 8));
    r14 = rbp + 0x20;
label_6:
    eax = 0;
    ecx = 0x200;
    rdi = rbp;
    esi = 0xc020660b;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    eax = *((r12 + 0x10));
    *(rsp) = rdx;
    rdx = ~rdx;
    *((rsp + 0x18)) = 0x48;
    *((rsp + 0x10)) = eax;
    eax = 0;
    *((rsp + 8)) = rdx;
    rdx = rbp;
    eax = ioctl (*(r12), rsi);
    if (eax < 0) {
        goto label_7;
    }
    eax = *((rsp + 0x14));
    if (eax == 0) {
        goto label_8;
    }
    rdx = rax;
    rcx = *((r12 + 0x18));
    rdx = ~rdx;
    if (rcx > rdx) {
        goto label_9;
    }
    edx = 0x18;
    rdi = *((r12 + 0x28));
    rcx += rax;
    rax = rdx;
    *((r12 + 0x18)) = rcx;
    rbx -= rdi;
    rdx_rax = rax * rcx;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_10;
    }
    if (rdx != 0) {
        goto label_10;
    }
    rsi <<= 3;
    rax = fcn_00411340 (rdi, rcx + rcx*2);
    r8d = *((rsp + 0x14));
    *((r12 + 0x28)) = rax;
    rbx += rax;
    if (r8d == 0) {
        goto label_11;
    }
    rax = *((rsp + 0x30));
    rcx = r15;
    rdx = *((rsp + 0x20));
    rcx -= rax;
    if (rdx > rcx) {
        goto label_12;
    }
    edi = 0;
    rcx = r14;
    do {
        if (r13d == 0) {
            goto label_13;
        }
        r9d = *((rcx + 0x28));
        r10 = *((rbx + 8));
        rsi = *(rbx);
        r11d = r9d;
        rsi += r10;
        r11d &= 0xfffffffe;
        if (*((rbx + 0x10)) == r11d) {
            goto label_14;
        }
label_3:
        if (rsi <= rdx) {
            goto label_15;
        }
label_0:
        r9 = rsi;
        r9 -= rdx;
        if (r9 < rax) {
            goto label_7;
        }
        rdx += rax;
        *(rcx) = rsi;
        rdx -= rsi;
        *((rcx + 0x10)) = rdx;
label_4:
        if (edi >= r8d) {
            goto label_11;
        }
label_1:
        edx = edi;
        rsi = r15;
        rax = rdx*8;
        rax -= rdx;
        rcx = r14 + rax*8;
        rax = *((rcx + 0x10));
        rdx = *(rcx);
        rsi -= rax;
    } while (rdx <= rsi);
label_12:
    rax = assert_fail ("fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length", "src/extent-scan.c", 0x8d, "extent_scan_read");
label_13:
    rsi = *((r12 + 8));
    if (rsi > rdx) {
        goto label_0;
    }
    r9d = *((rcx + 0x28));
label_15:
    ecx = r13d;
    edi++;
    r13d++;
    rsi = rcx * 3;
    rcx = *((r12 + 0x28));
    rbx = rcx + rsi*8;
    *(rbx) = rdx;
    *((rbx + 8)) = rax;
    *((rbx + 0x10)) = r9d;
    if (edi < r8d) {
        goto label_1;
    }
label_11:
    if ((*((rbx + 0x10)) & 1) != 0) {
        goto label_16;
    }
    eax = *((r12 + 0x21));
    if (r13d <= 0x48) {
        goto label_17;
    }
    if (al != 0) {
        goto label_18;
    }
    eax = r13 - 1;
    rdx = *((r12 + 0x28));
    rcx = rax * 3;
    *((r12 + 0x18)) = rax;
    rax = *((rdx + rcx*8 - 0x10));
    rax += *((rdx + rcx*8 - 0x18));
    *((r12 + 8)) = rax;
label_5:
    eax = 1;
    do {
label_2:
        return rax;
label_7:
        eax = 0;
    } while (*((r12 + 8)) != 0);
    *((r12 + 0x20)) = 1;
    eax = 0;
    goto label_2;
label_14:
    if (rdx != rsi) {
        goto label_3;
    }
    rax += r10;
    *((rbx + 0x10)) = r9d;
    edi++;
    *((rbx + 8)) = rax;
    goto label_4;
label_17:
    edi = r13d;
    *((r12 + 0x18)) = rdi;
    if (al != 0) {
        goto label_5;
    }
    rdx = *((rbx + 8));
    rdx += *(rbx);
    *((r12 + 8)) = rdx;
    if (r13d != 0x48) {
        goto label_6;
    }
    goto label_5;
label_16:
    *((r12 + 0x21)) = 1;
label_18:
    eax = r13d;
    *((r12 + 0x18)) = rax;
    goto label_5;
label_8:
    *((r12 + 0x21)) = 1;
    al = (*((r12 + 8)) != 0) ? 1 : 0;
    goto label_2;
label_10:
    fcn_00411530 ();
label_9:
    return assert_fail ("scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents", "src/extent-scan.c", 0x7e, "extent_scan_read");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409e00 */
#include <stdint.h>
 
uint64_t fcn_00409e00 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rbx = rsi;
    rax = fcn_0040ad40 (rdi);
    rax -= r12;
    rdi = rax + 9;
    if (rdi > 0x100) {
        rax = malloc (rdi);
        rbx = rax;
        if (rax == 0) {
            goto label_0;
        }
    }
    rdx = rbp;
    rsi = r12;
    rdi = rbx;
    mempcpy ();
    rdx = "CuXXXXXX";
    *(rax) = rdx;
    edx = *(0x00418fb0);
    *((rax + 8)) = dl;
    rax = rbx;
    do {
        return rax;
label_0:
        eax = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409e90 */
#include <stdint.h>
 
uint64_t fcn_00409e90 (int64_t arg1, char * arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_24h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15d = edi;
    r14 = rsi;
    r13d = r8d;
    r12 = rcx;
    *((rsp + 8)) = r9d;
    eax = linkat ();
    r9d = *((rsp + 8));
    ebx = eax;
    if (r9b != 1) {
        goto label_0;
    }
    if (eax == 0) {
        goto label_0;
    }
    rax = errno_location ();
    while (r12d == 0) {
label_0:
        eax = ebx;
        return rax;
        *((rsp + 8)) = rax;
        rax = fcn_00409e00 (r12, rsp + 0x30);
        rbx = rax;
        if (rax == 0) {
            goto label_2;
        }
        *((rsp + 0x10)) = r15d;
        *((rsp + 0x18)) = r14;
        *((rsp + 0x20)) = ebp;
        *((rsp + 0x24)) = r13d;
        eax = fcn_0040fb10 (rax, 0, rsp + 0x10, 0x409de0, 6);
        r9 = *((rsp + 8));
        if (eax == 0) {
            goto label_3;
        }
        r12d = *(r9);
label_1:
        rax = rsp + 0x30;
        if (rbx != rax) {
            *((rsp + 8)) = r9;
            free (rbx);
            r9 = *((rsp + 8));
        }
        ebx = 1;
    }
    *(r9) = r12d;
    ebx = 0xffffffff;
    goto label_0;
label_3:
    rcx = r12;
    edx = ebp;
    rsi = rbx;
    edi = ebp;
    *((rsp + 8)) = r9;
    eax = renameat ();
    r9 = *((rsp + 8));
    r12d = eax;
    if (eax != 0) {
        r12d = *(r9);
    }
    edx = 0;
    rsi = rbx;
    edi = ebp;
    *((rsp + 8)) = r9;
    unlinkat ();
    r9 = *((rsp + 8));
    goto label_1;
label_2:
    ebx = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x409fd0 */
#include <stdint.h>
 
uint64_t fcn_00409fd0 (int64_t arg1, int64_t arg2, char * arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14d = ecx;
    r13 = rdi;
    r12 = rdx;
    eax = symlinkat ();
    ebx = eax;
    if (r14b != 1) {
        goto label_2;
    }
    if (eax == 0) {
        goto label_2;
    }
    rax = errno_location ();
    r14 = rax;
    while (1) {
label_2:
        eax = ebx;
        return rax;
        r15 = rsp + 0x10;
        rax = fcn_00409e00 (r12, r15);
        rbx = rax;
        if (rax == 0) {
            goto label_3;
        }
        *(rsp) = r13;
        *((rsp + 8)) = ebp;
        eax = fcn_0040fb10 (rax, 0, rsp, 0x409e70, 6);
        if (eax == 0) {
            goto label_4;
        }
        r12d = *(r14);
label_1:
        if (rbx != r15) {
            free (rbx);
        }
        if (r12d != 0) {
            goto label_5;
        }
label_0:
        ebx = 1;
    }
label_4:
    rcx = r12;
    edx = ebp;
    rsi = rbx;
    edi = ebp;
    eax = renameat ();
    if (eax != 0) {
        goto label_6;
    }
    if (rbx == r15) {
        goto label_0;
    }
    free (rbx);
    goto label_0;
label_6:
    edx = 0;
    rsi = rbx;
    edi = ebp;
    r12d = *(r14);
    unlinkat ();
    goto label_1;
label_5:
    *(r14) = r12d;
    ebx = 0xffffffff;
    goto label_2;
label_3:
    ebx = 0xffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a0d0 */
#include <stdint.h>
 
uint64_t fcn_0040a0d0 (int64_t arg1, int64_t arg3) {
    rdi = arg1;
    rdx = arg3;
    r12 = rdi;
    eax = fcn_0040d070 (rdi, rsi, rdx);
    ebx = eax;
    if (eax != 0xfffffffe) {
        if (eax == 0xffffffff) {
            rax = fcn_0040ec50 (rbp);
            edx = 5;
            r12 = rax;
            rax = dcgettext (0, "preserving permissions for %s");
            rax = errno_location ();
            rcx = r12;
            eax = 0;
            error (0, *(rax), rbp);
        }
        eax = ebx;
        return rax;
    }
    rax = fcn_0040ec50 (r12);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x41aa9b);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a160 */
#include <stdint.h>
 
uint64_t fcn_0040a160 (char * arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    eax = fcn_0040d0b0 (rdi, rsi, rdx);
    ebx = eax;
    if (eax == 0) {
        eax = ebx;
        return eax;
    }
    rax = fcn_0040ec50 (rbp);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "setting permissions for %s");
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbp);
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a1c0 */
#include <stdint.h>
 
uint64_t fcn_0040a1c0 (char * arg1, uint32_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a2b0 */
#include <stdint.h>
 
uint64_t fcn_0040a2b0 (int64_t arg1, void ** arg2) {
    rdi = arg1;
    rsi = arg2;
    r13 = rsi;
    rbx = rdi;
    rax = fcn_0040ad40 (rdi);
    rdi = rax;
    rax = fcn_0040ada0 (rdi);
    while (r12 <= rdx) {
        return rax;
        esi = 0x2e;
        r14d = *(rbp);
        r12 = rax;
        *(rbp) = si;
        errno_location ();
        esi = 3;
        rdi = rbx;
        *(rax) = 0;
        r15 = rax;
        rax = pathconf ();
        if (rax < 0) {
            goto label_2;
        }
label_1:
        rdx = rax;
label_0:
        *(rbp) = r14w;
    }
    rsi = rbx + r13;
    rax = rsi;
    rax -= rbp;
    if (rax >= rdx) {
        goto label_3;
    }
    rdx = rax + 1;
    do {
        *(rsi) = 0x7e;
        *((rbp + rdx)) = 0;
        return rax;
label_3:
        rsi = rbp + rdx - 1;
    } while (1);
label_2:
    ecx = *(r15);
    edx = 0xff;
    if (ecx != 0) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a380 */
#include <stdint.h>
 
uint64_t fcn_0040a380 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    if (rdi == 0) {
        goto label_2;
    }
label_1:
    while (rax != rbx) {
label_0:
        ebx = 0x418fb6;
        *(0x006219a0) = rbx;
        return;
        rax = fcn_0040ad40 (rbx);
    }
    *(0x006219a0) = rbx;
    return rax;
label_2:
    rax = getenv ("SIMPLE_BACKUP_SUFFIX");
    rbx = rax;
    if (rax == 0) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a3e0 */
#include <stdint.h>
 
uint64_t fcn_0040a3e0 (void * arg1, uint32_t arg2) {
    void ** s1;
    void * s2;
    int64_t var_18h;
    int64_t var_20h;
    size_t size;
    uint32_t var_30h;
    size_t n;
    uint32_t var_40h;
    uint32_t var_47h;
    int64_t var_48h;
    int64_t var_50h;
    size_t * var_58h;
    rdi = arg1;
    rsi = arg2;
    rbx = rdi;
    *((rsp + 0x10)) = rdi;
    *((rsp + 0x40)) = esi;
    *((rsp + 0x47)) = dl;
    rax = fcn_0040ad40 (rdi);
    r14 = rax;
    rax = strlen (rax);
    r14 -= rbx;
    rdi = imp.__libc_start_main;
    rax += r14;
    *((rsp + 8)) = rax;
    if (rdi == 0) {
        goto label_11;
    }
label_10:
    rax = strlen (rdi);
    rsi = *((rsp + 8));
    rax++;
    rbx = rsi + 1;
    *((rsp + 0x58)) = rax;
    rsi = rax;
    eax = 9;
    *((rsp + 0x38)) = rbx;
    if (rax >= 9) {
        rax = rsi;
    }
    rax += rbx;
    rdi = rax;
    *((rsp + 0x48)) = rax;
    rax = malloc (rdi);
    r15 = rax;
    if (rax == 0) {
        goto label_9;
    }
    r12d = 0;
label_2:
    memcpy (r15, *((rsp + 0x10)), *((rsp + 0x38)));
    if (*((rsp + 0x40)) == 1) {
        goto label_12;
    }
    rbx = r15 + r14;
    rax = fcn_0040ada0 (rbx);
    r13 = rax;
    if (r12 == 0) {
        goto label_13;
    }
    rdi = r12;
    rewinddir ();
label_5:
    rax = *((rsp + 0x48));
    *((rsp + 0x20)) = 1;
    *((rsp + 0x28)) = rax;
    rax = r13 + 4;
    *((rsp + 0x30)) = rax;
    do {
label_0:
        rdi = r12;
        rax = readdir ();
        if (rax == 0) {
            goto label_8;
        }
label_1:
        rbx = rax + 0x13;
        rax = strlen (rbx);
    } while (rax < *((rsp + 0x30)));
    rcx = r13 + 2;
    rdx = rcx;
    *((rsp + 0x18)) = rcx;
    eax = memcmp (r15 + r14, rbx, rdx);
    if (eax != 0) {
        goto label_0;
    }
    rcx = *((rsp + 0x18));
    rbx += rcx;
    eax = *(rbx);
    edx = rax - 0x31;
    if (dl > 8) {
        goto label_0;
    }
    edx = *((rbx + 1));
    ecx = 1;
    r8b = (al == 0x39) ? 1 : 0;
    eax = edx;
    edx -= 0x30;
    if (edx > 9) {
        goto label_14;
    }
    do {
        al = (al == 0x39) ? 1 : 0;
        rcx++;
        edx = *((rbx + rcx));
        r8d &= eax;
        eax = edx;
        edx -= 0x30;
    } while (edx <= 9);
label_14:
    if (al != 0x7e) {
        goto label_0;
    }
    if (*((rbx + rcx + 1)) != 0) {
        goto label_0;
    }
    rdx = *((rsp + 0x20));
    if (rdx < rcx) {
        goto label_15;
    }
    *((rsp + 0x50)) = rcx;
    *((rsp + 0x18)) = r8b;
    if (rdx != rcx) {
        goto label_0;
    }
    rax = *((rsp + 8));
    eax = memcmp (r15 + rax + 2, rbx, rdx);
    r8d = *((rsp + 0x18));
    rcx = *((rsp + 0x50));
    if (eax > 0) {
        goto label_0;
    }
label_15:
    edx = (int32_t) r8b;
    rsi = *((rsp + 8));
    ebp = (int32_t) r8b;
    rax = rdx + rcx;
    *((rsp + 0x20)) = rax;
    rax = rsi + rax + 4;
    if (rax <= *((rsp + 0x28))) {
        goto label_16;
    }
    esi = 0;
    rdi = rax;
    __asm ("sets sil");
    rdi += rdi;
    if (rdi < 0) {
        goto label_17;
    }
    if (rsi != 0) {
        goto label_17;
    }
    *((rsp + 0x28)) = rdi;
label_6:
    *((rsp + 0x50)) = rdx;
    *((rsp + 0x18)) = rcx;
    rax = realloc (r15, *((rsp + 0x28)));
    rcx = *((rsp + 0x18));
    rdx = *((rsp + 0x50));
    r8 = rax;
    if (rax == 0) {
        goto label_18;
    }
label_7:
    rax = *((rsp + 8));
    esi = 0x7e2e;
    *((rsp + 0x50)) = r8;
    *((rsp + 0x18)) = rcx;
    rax += r8;
    *(rax) = si;
    r9 = rax + rdx + 2;
    *((rax + 2)) = 0x30;
    rax = memcpy (r9, rbx, rcx + 2);
    rcx = *((rsp + 0x18));
    r8 = *((rsp + 0x50));
    rcx += rax;
    edx = *((rcx - 1));
    rax = rcx - 1;
    if (dl != 0x39) {
        goto label_19;
    }
    do {
        *(rax) = 0x30;
        rax--;
        edx = *(rax);
    } while (dl == 0x39);
label_19:
    edx++;
    rdi = r12;
    r15 = r8;
    *(rax) = dl;
    rax = readdir ();
    if (rax != 0) {
        goto label_1;
    }
label_8:
    if (ebp == 2) {
        goto label_20;
    }
    if (ebp == 3) {
        goto label_18;
    }
    if (ebp == 1) {
        goto label_21;
    }
label_4:
    if (*((rsp + 0x47)) == 0) {
        goto label_22;
    }
    if (r12 == 0) {
        goto label_23;
    }
    rdi = r12;
    eax = dirfd ();
    rcx = r15 + r14;
    edx = eax;
    if (eax < 0) {
        goto label_23;
    }
label_3:
    r8b = (*((rsp + 0x40)) != 1) ? 1 : 0;
    eax = fcn_0040ec70 (0xffffff9c, *((rsp + 0x10)), rdx, rcx, 0);
    if (eax == 0) {
        goto label_22;
    }
    rax = errno_location ();
    ebp = *(rax);
    if (ebp == 0x11) {
        goto label_2;
    }
    rbx = rax;
    if (r12 != 0) {
        rdi = r12;
        closedir ();
    }
    r15d = 0;
    free (r15);
    *(rbx) = ebp;
    do {
label_9:
        rax = r15;
        return rax;
label_23:
        rcx = r15;
        edx = 0xffffff9c;
        r14d = 0;
        goto label_3;
label_12:
        rax = *((rsp + 8));
        memcpy (r15 + rax, *(0x006219a0), *((rsp + 0x58)));
        goto label_4;
label_20:
        if (*((rsp + 0x40)) == 2) {
            rax = *((rsp + 8));
            rax = memcpy (r15 + rax, *(0x006219a0), *((rsp + 0x58)));
            *((rsp + 0x40)) = 1;
        }
label_21:
        fcn_0040a2b0 (r15, *((rsp + 8)));
        goto label_4;
label_13:
        edi = 0x2e;
        eax = *(rbx);
        *(rbx) = di;
        rdi = r15;
        *((rsp + 0x18)) = ax;
        rax = fcn_0040abc0 ();
        rcx = rbx + r13;
        r12 = rax;
        if (rax == 0) {
            goto label_24;
        }
        eax = *((rsp + 0x18));
        *(rbx) = ax;
        *(rcx) = 0x7e317e2e;
        *((rcx + 4)) = 0;
        goto label_5;
label_18:
        r15d = 0;
        free (r15);
        errno_location ();
        *(rax) = 0xc;
    } while (1);
label_17:
    *((rsp + 0x28)) = rax;
    goto label_6;
label_16:
    r8 = r15;
    goto label_7;
label_24:
    *((rsp + 0x20)) = rcx;
    ebp = 0;
    rax = errno_location ();
    rcx = *((rsp + 0x20));
    eax = *((rsp + 0x18));
    bpl = (*(rax) == 0xc) ? 1 : 0;
    *(rbx) = ax;
    ebp += 2;
    *(rcx) = 0x7e317e2e;
    *((rcx + 4)) = 0;
    goto label_8;
label_22:
    if (r12 == 0) {
        goto label_9;
    }
    rdi = r12;
    closedir ();
    goto label_9;
label_11:
    fcn_0040a380 (rdi);
    rdi = imp.__libc_start_main;
    goto label_10;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a8b0 */
#include <stdint.h>
 
void fcn_0040a8b0 (char * arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = 1;
invalid_funccall(); //    return void (*0x40a3e0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a930 */
#include <stdint.h>
 
uint64_t fcn_0040a930 (uint32_t arg2) {
    rsi = arg2;
    do {
        fcn_00412e60 (rdi, rsi, 0x419040, 0x419020, 4, *(0x0061f4e0));
        eax = *((rax*4 + 0x419020));
        return eax;
        if (rsi != 0) {
            if (*(rsi) != 0) {
                goto label_0;
            }
        }
        rax = getenv (0x418fce);
        if (rax != 0) {
            if (*(rax) != 0) {
                goto label_1;
            }
        }
        eax = 2;
        return rax;
label_1:
        rsi = rax;
        edi = "$VERSION_CONTROL";
INVALID_JUMP;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40a980 */
#include <stdint.h>
 
int64_t fcn_0040a980 (uint32_t arg1, void * arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = rdx;
    if (rdi != 0) {
        goto label_3;
    }
    edi = 0x2000;
    rdi = rsi;
    while (rsi == 0) {
label_0:
        if (rdi <= rcx) {
            rcx = rdi;
        }
        r8 = rcx;
label_1:
        rax = rcx;
        return rax;
INVALID_JUMP;
    }
    r8 = rsi;
    rax = rdi;
label_2:
    edx = 0;
    rax = rdx_rax / r8;
    rdx = rdx_rax % r8;
    if (rdx != 0) {
        goto label_4;
    }
    rax = rdi;
    edx = 0;
    rax = rdx_rax / r8;
    rdx = rdx_rax % r8;
    r8 = rsi;
    r8 *= rax;
    r9 = rax;
    if (r8 > rcx) {
        goto label_0;
    }
    rax = r8;
    edx = 0;
    rax = rdx_rax / rsi;
    rdx = rdx_rax % rsi;
    if (rax != r9) {
        goto label_0;
    }
    goto label_1;
label_4:
    rax = r8;
    r8 = rdx;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ab20 */
#include <stdint.h>
 
uint64_t fcn_0040ab20 (void) {
    eax = fcn_00412f20 (*(obj.stdout));
    if (eax != 0) {
        rax = errno_location ();
        rbx = rax;
        if (*(0x006219b0) == 0) {
            goto label_0;
        }
        if (*(rax) != 0x20) {
            goto label_0;
        }
    }
    eax = fcn_00412f20 (*(obj.stderr));
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
    rax = fcn_0040eaa0 (rdi, rsi, rdx, rcx);
    r8 = rbp;
    rcx = rax;
    eax = 0;
    error (0, *(rbx), "%s: %s");
    do {
label_1:
        rax = exit (*(0x0061f468));
label_2:
        rcx = rax;
        eax = 0;
        error (0, *(rbx), 0x41aa9b);
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40abc0 */
#include <stdint.h>
 
uint64_t fcn_0040abc0 (void) {
    rax = opendir ();
    rbx = rax;
    if (rax != 0) {
        rdi = rax;
        eax = dirfd ();
        if (eax <= 2) {
            goto label_1;
        }
    }
    rax = rbx;
    return rax;
label_1:
    edi = eax;
    eax = 0;
    eax = fcn_00411a10 (edi, 0x406, 3, rcx, r8);
    r12d = eax;
    rax = errno_location ();
    if (r12d >= 0) {
        goto label_2;
    }
    r14d = *(rax);
    r13d = 0;
    do {
label_0:
        rdi = rbx;
        rbx = r13;
        closedir ();
        *(rbp) = r14d;
        rax = rbx;
        return rax;
label_2:
        edi = r12d;
        rax = fdopendir ();
        r14d = *(rbp);
        r13 = rax;
    } while (rax != 0);
    close (r12d);
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ac60 */
#include <stdint.h>
 
uint64_t fcn_0040ac60 (void) {
    rax = fcn_0040ace0 (rdi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ac80 */
#include <stdint.h>
 
uint64_t fcn_0040ac80 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_0040ad40 (rdi);
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
INVALID_JUMP;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ace0 */
#include <stdint.h>
 
uint64_t fcn_0040ace0 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_0040ac80 (rdi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ad40 */
#include <stdint.h>
 
int64_t fcn_0040ad40 (char * arg1) {
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
INVALID_JUMP;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ada0 */
#include <stdint.h>
 
uint64_t fcn_0040ada0 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40add0 */
#include <stdint.h>
 
void fcn_0040add0 (void) {
    return posix_fadvise ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ae10 */
#include <stdint.h>
 
uint64_t fcn_0040ae10 (int64_t arg_60h, uint32_t arg3, int32_t oflag, const char * path) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_30h;
    rdx = arg3;
    rsi = oflag;
    rdi = path;
    *((rsp + 0x30)) = rdx;
    edx = 0;
    while (1) {
        eax = 0;
        eax = open (rdi, rsi, rdx);
        fcn_0040fcf0 (eax);
        return eax;
        rax = rsp + 0x60;
        *((rsp + 8)) = 0x10;
        edx = *((rsp + 0x30));
        *((rsp + 0x10)) = rax;
        rax = rsp + 0x20;
        *((rsp + 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ae60 */
#include <stdint.h>
 
uint64_t fcn_0040ae60 (int64_t arg1, char * arg2, func * arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdi != 0) {
        r13 = rdi;
        r12 = rsi;
        rax = fcn_004112e0 (0x18);
        rbx = rax;
        rax = fcn_00411510 (r12);
        rsi = rbx;
        *(rbx) = rax;
        rax = *((rbp + 8));
        *((rbx + 8)) = rax;
        rax = *(rbp);
        *((rbx + 0x10)) = rax;
        rax = fcn_0040c2f0 (r13);
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
    fcn_00411530 ();
label_1:
    rbx = rdi;
    free (*(rdi));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40aef0 */
#include <stdint.h>
 
int64_t fcn_0040aef0 (int64_t arg1, char * arg2, int64_t arg3) {
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
        rax = fcn_0040b8e0 (rdi, rsp);
        al = (rax != 0) ? 1 : 0;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40af30 */
#include <stdint.h>
 
int32_t fcn_0040af30 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = edi;
    eax = 0x2d;
    edx &= 0xf000;
    if (edx != 0x8000) {
        eax = 0x64;
        if (edx == 0x4000) {
            goto label_1;
        }
        eax = 0x62;
        if (edx == 0x6000) {
            goto label_1;
        }
        eax = 0x63;
        if (edx == 0x2000) {
            goto label_1;
        }
        eax = 0x6c;
        if (edx == 0xa000) {
            goto label_1;
        }
        eax = 0x70;
        if (edx == 0x1000) {
            goto label_1;
        }
        eax = 0x73;
        edx = 0x3f;
        if (edx == 0xc000) {
            eax = edx;
            goto label_1;
        }
    }
label_1:
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
        goto label_2;
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
            goto label_3;
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
            goto label_4;
        }
        eax &= 0xffffffe0;
        eax += 0x74;
        *((rsi + 9)) = al;
        eax = 0x20;
        *((rsi + 0xa)) = ax;
        return eax;
label_2:
        eax &= 0xffffffb5;
        eax += 0x78;
    } while (1);
label_3:
    eax &= 0xffffffb5;
    eax += 0x78;
    goto label_0;
label_4:
    eax &= 0xffffffb5;
    eax += 0x78;
    *((rsi + 9)) = al;
    eax = 0x20;
    *((rsi + 0xa)) = ax;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b0c0 */
#include <stdint.h>
 
uint64_t fcn_0040b0c0 (void) {
    uint32_t var_fh;
invalid_funccall(); //    rax = void (*0x40b0e0)() ();
    if (rax != 0) {
        return rax;
    }
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b1c0 */
#include <stdint.h>
 
uint64_t fcn_0040b1c0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_0040eec0 (r13d, rbp, rbx);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b240 */
#include <stdint.h>
 
uint64_t fcn_0040b240 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_0040ef20 (r13d, rbp, rbx);
    }
    do {
label_2:
        rax = r12;
        return rax;
label_1:
        errno_location ();
        *(rax) = 0x1c;
        rax = r12;
        return rax;
label_0:
        r12d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b2c0 */
#include <stdint.h>
 
int64_t fcn_0040b2c0 (uint32_t arg1, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b380 */
#include <stdint.h>
 
uint64_t fcn_0040b380 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        /* [13] -r-x section size 81912 named .text */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b3b0 */
#include <stdint.h>
 
uint64_t fcn_0040b3b0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_0040b380 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b4d0 */
#include <stdint.h>
 
int64_t fcn_0040b4d0 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x419120) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x00419134]");
        if (rax > 0x419120) {
            xmm1 = *(0x00419138);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x419120) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x0041913c]");
            if (rax <= 0x419120) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x00419140]");
            if (rax < 0x419120) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x00419134]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x419120) {
                goto label_0;
            }
            xmm3 = *(0x00419144);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x419120) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x419120) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x419120;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b550 */
#include <stdint.h>
 
uint64_t fcn_0040b550 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
        rax = fcn_0040b380 (rbp, r15);
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
    rax = fcn_0040b380 (rbp, r15);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40b8e0 */
#include <stdint.h>
 
uint64_t fcn_0040b8e0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_0040b380 (rdi, rsi);
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
invalid_funccall(); //        al = uint64_t (*r12 + 0x38)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40bb50 */
#include <stdint.h>
 
uint64_t fcn_0040bb50 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x40b360;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x40b370;
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
    al = fcn_0040b4d0 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_0040b2c0 (rbp, rsi);
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
        *((rax + 0x28)) = 0x419120;
        al = fcn_0040b4d0 (rdi);
        xmm1 = *(0x00419148);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x0041914c]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x00419150]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x00419150]");
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40be70 */
#include <stdint.h>
 
uint64_t fcn_0040be70 (int64_t arg1, uint32_t arg2) {
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
            __asm ("comiss xmm0, dword [0x0041914c]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x00419150]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x00419150]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_0040b2c0 (rsi, rsi);
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
        eax = fcn_0040b550 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_0040b550 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_0040b550 (rbp, rsp, 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40c070 */
#include <stdint.h>
 
uint64_t fcn_0040c070 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    rax = fcn_0040b3b0 (rdi, rsi, rsp + 8, 0);
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
    fcn_0040b4d0 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x0041914c]");
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
    __asm ("comiss xmm0, dword [0x00419150]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_0040be70 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_0040b3b0 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x00419150]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40c2f0 */
#include <stdint.h>
 
uint64_t fcn_0040c2f0 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_0040c070 (rdi, rsi, rsp + 8);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40c330 */
#include <stdint.h>
 
uint64_t fcn_0040c330 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    rax = fcn_0040b3b0 (rdi, rsi, rsp + 8, 1);
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
    fcn_0040b4d0 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x00419150]");
    if (*((rdx + 0x10)) >= 0) {
        goto label_10;
    }
    __asm ("cvttss2si rsi, xmm0");
label_5:
    al = fcn_0040be70 (rbx, rsi);
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
    __asm ("subss xmm0, dword [0x00419150]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40c5e0 */
#include <stdint.h>
 
uint64_t fcn_0040c5e0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_14h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13 = rdi;
    r12 = rdi;
    ebp = 0;
    rbx = rdi;
    *((rsp + 8)) = rsi;
    *((rsp + 0x18)) = rcx;
    *((rsp + 0x14)) = 0;
    do {
label_0:
        r12++;
        edx = *((r12 - 1));
        if (dl == 0) {
            goto label_6;
        }
label_1:
        eax = *(r12);
        if (al == 0x2f) {
            goto label_7;
        }
        al = (al != 0) ? 1 : 0;
        r15b = (dl == 0x2f) ? 1 : 0;
        r15b &= al;
    } while (r15b == 0);
    if (rbp == 0) {
        goto label_0;
    }
    rax = rbp;
    rax -= r13;
    if (rax == 1) {
        goto label_8;
    }
    *(rbp) = 0;
    if (rax == 2) {
        goto label_9;
    }
label_2:
    rdx = *((rsp + 0x18));
    rsi = r13;
    rdi = rbx;
invalid_funccall(); //    eax = void (*r14)() ();
    if (eax < 0) {
        goto label_10;
    }
    *((rsp + 0x14)) = r15b;
    r15d = 0;
label_3:
    eax = fcn_0040f520 (*((rsp + 8)), r13, 1, 0);
    r13d = eax;
    if (eax == 0xffffffff) {
        goto label_11;
    }
    *(rbp) = 0x2f;
    if (eax != 0) {
        goto label_11;
    }
label_4:
    r13 = r12;
    r12++;
    edx = *((r12 - 1));
    if (dl != 0) {
        goto label_1;
    }
label_6:
    rax = r13;
    rax -= rbx;
label_5:
    return rax;
label_7:
    if (dl != 0x2f) {
    }
    goto label_0;
label_9:
    if (*(r13) != 0x2e) {
        goto label_2;
    }
    if (*((r13 + 1)) != 0x2e) {
        goto label_2;
    }
    r15d = 0;
    *((rsp + 0x14)) = 0;
    edx = 0;
    goto label_3;
label_10:
    rax = errno_location ();
    edx = *((rsp + 0x14));
    r15d = *(rax);
    edx &= 1;
    goto label_3;
label_8:
    if (*(r13) == 0x2e) {
        goto label_4;
    }
    *(rbp) = 0;
    goto label_2;
label_11:
    if (r15d != 0) {
        rax = errno_location ();
        if (*(rax) != 2) {
            goto label_12;
        }
        *(rax) = r15d;
    }
label_12:
    rax = (int64_t) r13d;
    goto label_5;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40c770 */
#include <stdint.h>
 
uint64_t fcn_0040c770 (int64_t arg_f0h, int64_t arg_f8h, int64_t arg_100h, int64_t arg_108h, uint32_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_ch;
    int64_t var_10h;
    uint32_t var_18h;
    uint32_t var_1ch;
    int64_t var_20h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r14 = rsi;
    r13 = rdx;
    r12d = r8d;
    rbx = rdi;
    eax = *((rsp + 0x108));
    *(rsp) = rcx;
    *((rsp + 0x10)) = r9;
    *((rsp + 0x18)) = eax;
    if (*(rdi) != 0x2f) {
        if (*(rsi) == 4) {
            goto label_8;
        }
    }
    if (r13 == 0) {
        goto label_2;
    }
label_1:
    rax = fcn_0040c5e0 (rbx, r14, r13, *(rsp));
    if (rax < 0) {
        goto label_9;
    }
    rbp += rbx;
    do {
        eax = *((rsp + 0xf0));
        edx = r12d;
        ecx = *((rsp + 0xf8));
        edx &= 0x200;
        ecx &= *((rsp + 0x100));
        eax &= 0xc00;
        *((rsp + 0x1c)) = ecx;
        eax |= edx;
        if (ecx == 0xffffffff) {
            goto label_10;
        }
        eax = r12d;
        eax &= 0xffffffc0;
        *((rsp + 0xc)) = eax;
label_5:
        esi = *((rsp + 0xc));
        rdi = rbp;
        eax = mkdir ();
        r15d = eax;
        if (eax == 0) {
            goto label_11;
        }
label_3:
        rax = errno_location ();
        r15d = *(rax);
        if (*((rsp + 0x18)) == 0) {
            goto label_12;
        }
        if (r15d == 0) {
            goto label_6;
        }
        if (r15d != 2) {
            if (r13 == 0) {
                goto label_0;
            }
            rdx = rsp + 0x20;
            rsi = rbp;
            edi = 1;
            eax = xstat ();
            if (eax == 0) {
                goto label_13;
            }
        }
label_0:
        rax = fcn_0040ec50 (rbx);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "cannot create directory %s");
        rcx = rbx;
        eax = 0;
        eax = error (0, r15d, rax);
        eax = 0;
label_4:
        return rax;
INVALID_JUMP;
    } while (1);
label_8:
    r15d = *((rsi + 4));
    if (r15d != 0) {
        goto label_0;
    }
    if (r13 != 0) {
        goto label_1;
    }
    goto label_2;
label_10:
    if (eax != 0) {
        goto label_14;
    }
    esi = r12d;
    rdi = rbp;
    eax = mkdir ();
    r15d = eax;
    if (eax != 0) {
        goto label_3;
    }
    rax = *((rsp + 0x10));
    rsi = *(rsp);
    rdi = rbx;
invalid_funccall(); //    void (*rax)() ();
    eax = *((rsp + 0xf0));
    eax &= r12d;
    if ((eax & 0x1ff) != 0) {
        goto label_15;
    }
label_6:
    eax = 1;
    goto label_4;
label_14:
    eax = r12d;
    eax &= 0xffffffed;
    *((rsp + 0xc)) = eax;
    goto label_5;
label_9:
    eax = 1;
    if (rbp != -1) {
        goto label_4;
    }
    rax = errno_location ();
    r15d = *(rax);
    goto label_0;
label_12:
    *((rsp + 0xc)) = 0xffffffff;
label_7:
    eax = fcn_0040f520 (r14, rbp, 2, rsp + 0x20);
    if (eax < 0xffffffff) {
        goto label_6;
    }
    eax = 0x418d7b;
    r9d = r12d;
    if (eax == 0) {
    }
    eax = *((rsp + 0xf8));
    eax = fcn_004135d0 (*((rsp + 0x30)), rbp, *((rsp + 0x1c)), *((rsp + 0x108)), *((rsp + 0x110)), r9);
    if (eax == 0) {
        goto label_6;
    }
    if (r15d == 0) {
        goto label_16;
    }
    if (r15d == 2) {
        goto label_0;
    }
    if (r13 == 0) {
        goto label_0;
    }
    rax = errno_location ();
    if (*(rax) == 0x14) {
        goto label_0;
    }
label_16:
    rax = errno_location ();
    rax = fcn_0040ec50 (rbx);
    esi = "cannot change permissions of %s";
    edx = 5;
    rbx = rax;
    eax = 0x419160;
    if (*((rsp + 0x1c)) != 0xffffffff) {
        rsi = rax;
    }
    rax = dcgettext (0, rsi);
    rcx = rbx;
    eax = 0;
    eax = error (0, *(rbp), rax);
    eax = 0;
    goto label_4;
label_11:
    rsi = *(rsp);
    rdi = rbx;
    rax = *((rsp + 0x10));
invalid_funccall(); //    void (*rax)() ();
    edx = 3;
    goto label_7;
label_13:
    eax = *((rsp + 0x38));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_0;
    }
    goto label_6;
label_15:
    *((rsp + 0xc)) = r12d;
    edx = 3;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ca80 */
#include <stdint.h>
 
uint64_t fcn_0040ca80 (int64_t arg1) {
    int64_t var_18h;
    rdi = arg1;
    rcx = rdi;
    rbx = rdi;
    edx = *(rdi);
    eax = rdx - 0x30;
    if (al <= 7) {
        goto label_11;
    }
    edi = 1;
    if (dl == 0) {
        goto label_12;
    }
    do {
        eax = edx;
        eax &= 0xffffffef;
        al = (al == 0x2d) ? 1 : 0;
        dl = (dl == 0x2b) ? 1 : 0;
        rcx++;
        eax |= edx;
        edx = *(rcx);
        eax = (int32_t) al;
        rdi += rax;
    } while (dl != 0);
    rax = rdi;
    rax >>= 0x3c;
    al = (rax != 0) ? 1 : 0;
    rdi <<= 4;
    eax = (int32_t) al;
    if (rdi < 0) {
        goto label_13;
    }
    if (rax != 0) {
        goto label_13;
    }
label_9:
    rax = fcn_004112e0 (rdi);
    r10d = 0;
label_10:
    edi = 0;
label_6:
    r9d = *(rbx);
    if (r9b == 0x61) {
        goto label_14;
    }
    if (r9b <= 0x61) {
        goto label_15;
    }
    if (r9b == 0x6f) {
        goto label_16;
    }
    if (r9b == 0x75) {
        goto label_17;
    }
    if (r9b == 0x67) {
        goto label_18;
    }
label_0:
    eax = free (rax);
    eax = 0;
label_8:
    return rax;
label_11:
    ebp = 0;
    while (ebp <= 0xfff) {
        edx = *(rcx);
        eax = rdx - 0x30;
        if (al > 7) {
            goto label_19;
        }
        ebp = rdx + rbp*8 - 0x30;
        rcx++;
    }
    eax = 0;
    return rax;
label_15:
    if (r9b == 0x2d) {
        goto label_20;
    }
    if (r9b == 0x3d) {
        goto label_20;
    }
    if (r9b != 0x2b) {
        goto label_0;
    }
label_20:
    r11 = r10 + 1;
    r10 <<= 4;
    r10 += rax;
    while (dl != 0x6f) {
        ecx = 0x1c0;
        if (dl != 0x75) {
            goto label_21;
        }
label_1:
        *((r10 + 1)) = 3;
        *((r10 + 4)) = edi;
        *((r10 + 8)) = ecx;
        *(r10) = r9b;
        r9d = *((rbx + 2));
        rbx = rsi;
label_4:
        edx = ecx;
        edx &= edi;
        if (edi != 0) {
            ecx = edx;
        }
label_3:
        edx = r9d;
        *((r10 + 0xc)) = ecx;
        rcx = r11 + 1;
        r10 += 0x10;
        edx &= 0xffffffef;
        if (dl != 0x2d) {
            if (r9b != 0x2b) {
                goto label_22;
            }
        }
        r11 = rcx;
        edx = *((rbx + 1));
        r8 = rbx + 1;
        if (dl == 0x67) {
            goto label_23;
        }
        if (dl <= 0x67) {
            goto label_24;
        }
        rsi = rbx + 2;
    }
    ecx = 7;
    goto label_1;
label_24:
    ecx = rdx - 0x30;
    if (cl > 7) {
        goto label_21;
    }
    ecx = 0;
label_2:
    ecx = rdx + rcx*8 - 0x30;
    r8++;
    if (ecx > 0xfff) {
        goto label_0;
    }
    edx = *(r8);
    esi = rdx - 0x30;
    if (sil <= 7) {
        goto label_2;
    }
    if (edi != 0) {
        goto label_0;
    }
    if (dl == 0) {
        goto label_25;
    }
    if (dl != 0x2c) {
        goto label_0;
    }
label_25:
    *(r10) = r9b;
    rbx = r8;
    r9d = edx;
    edi = 0xfff;
    *((r10 + 8)) = ecx;
    ecx = 0xfff;
    *((r10 + 1)) = 1;
    *((r10 + 4)) = 0xfff;
    goto label_3;
label_21:
    esi = rdx - 0x58;
    ebx = 1;
    ecx = 0;
    if (sil > 0x20) {
        goto label_26;
    }
    do {
        esi = (int32_t) sil;
        /* switch table (33 cases) at 0x419190 */
        ebx = 2;
label_5:
        r8++;
        edx = *(r8);
        esi = rdx - 0x58;
    } while (sil <= 0x20);
label_26:
    *(r10) = r9b;
    r9d = edx;
    *((r10 + 1)) = bl;
    rbx = r8;
    *((r10 + 4)) = edi;
    *((r10 + 8)) = ecx;
    goto label_4;
    ecx |= 0x49;
    goto label_5;
    cl |= 0x92;
    goto label_5;
    ch |= 2;
    goto label_5;
    ch |= 0xc;
    goto label_5;
    ecx |= 0x124;
    goto label_5;
label_23:
    rsi = rbx + 2;
    ecx = 0x38;
    goto label_1;
label_14:
    edi = 0xfff;
    do {
label_7:
        rbx++;
        goto label_6;
label_18:
        edi |= 0x438;
    } while (1);
label_17:
    edi |= 0x9c0;
    goto label_7;
label_16:
    edi |= 0x207;
    goto label_7;
label_19:
    eax = 0;
    if (dl != 0) {
        goto label_8;
    }
    rcx -= rbx;
    ebx = ebp;
    eax = 0xfff;
    edi = 0x20;
    ebx &= 0xc00;
    ebx |= 0x3ff;
    if (rcx >= 5) {
        ebx = eax;
    }
    fcn_004112e0 (rdi);
    edx = 0x13d;
    *(rax) = dx;
    *((rax + 4)) = 0xfff;
    *((rax + 8)) = ebp;
    *((rax + 0xc)) = ebx;
    *((rax + 0x11)) = 0;
    return rax;
label_12:
    edi = 0x10;
    goto label_9;
label_22:
    if (r9b == 0x2c) {
        rbx++;
        r10 = r11;
        goto label_10;
    }
    if (r9b != 0) {
        goto label_0;
    }
    r11 <<= 4;
    *((rax + r11 + 1)) = 0;
    goto label_8;
label_13:
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ce50 */
#include <stdint.h>
 
int32_t fcn_0040ce50 (int64_t arg1, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r11d = *((rcx + 1));
    eax = edi;
    eax &= 0xfff;
    ebx = 0;
    if (r11b == 0) {
        goto label_7;
    }
    edx = ~edx;
    while (sil == 0) {
        r10d = ebp;
        edi = 0;
        if (r11b == 2) {
            goto label_8;
        }
label_0:
        if (r11b == 3) {
            r9d &= eax;
            r11d = r9d;
            r11d &= 0x124;
            r11d -= r11d;
            r11d = ~r11d;
            r11d &= 0x124;
            r13d = r11d;
            r13b |= 0x92;
            if ((r9b & 0x92) != 0) {
                r11d = r13d;
            }
            r13d = r11d;
            r13d |= 0x49;
            if ((r9b & 0x49) != 0) {
                r11d = r13d;
            }
            r9d |= r11d;
        }
label_5:
        r11d = *(rcx);
        r9d &= r10d;
        if (r12d != 0) {
            goto label_9;
        }
label_1:
        r9d &= edx;
        if (r11b == 0x2d) {
            goto label_10;
        }
        if (r11b == 0x3d) {
            goto label_11;
        }
label_2:
        if (r11b == 0x2b) {
            goto label_12;
        }
label_4:
        rcx += 0x10;
        r11d = *((rcx + 1));
        if (r11b == 0) {
            goto label_7;
        }
label_3:
        r12d = *((rcx + 4));
        r9d = *((rcx + 8));
    }
    r10d = *((rcx + 0xc));
    edi = *((rcx + 0xc));
    r10d |= 0xfffff3ff;
    edi = ~edi;
    edi &= 0xc00;
    if (r11b != 2) {
        goto label_0;
    }
label_6:
    r9d |= 0x49;
    r11d = *(rcx);
    r9d &= r10d;
    if (r12d == 0) {
        goto label_1;
    }
label_9:
    r9d &= r12d;
    if (r11b == 0x2d) {
        goto label_10;
    }
    if (r11b != 0x3d) {
        goto label_2;
    }
    r12d = ~r12d;
    edi |= r12d;
    r10d = edi;
    r10d = ~r10d;
label_11:
    rcx += 0x10;
    r11d = *((rcx + 1));
    r10d &= 0xfff;
    eax &= edi;
    ebx |= r10d;
    eax |= r9d;
    if (r11b != 0) {
        goto label_3;
    }
label_7:
    if (r8 != 0) {
        *(r8) = ebx;
    }
    r12 = rbx;
    r13 = rbx;
    return eax;
label_10:
    ebx |= r9d;
    r9d = ~r9d;
    eax &= r9d;
    goto label_4;
label_12:
    ebx |= r9d;
    eax |= r9d;
    goto label_4;
label_8:
    if ((al & 0x49) == 0) {
        goto label_5;
    }
    goto label_6;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40cfd0 */
#include <stdint.h>
 
uint64_t fcn_0040cfd0 (char ** arg1) {
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
            edi = 0x4192d8;
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
        *(0x006219c0) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40d070 */
#include <stdint.h>
 
uint32_t fcn_0040d070 (int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_ch;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rbx = rdx;
    edx = r8d;
    rcx = rsp + 0xc;
    eax = fcn_00412b30 (rdi, rsi);
    if (eax != 0) {
        goto label_0;
    }
    fcn_00412b60 (rsp + 0xc, rbx, ebp);
    do {
        return eax;
label_0:
        eax = 0xfffffffe;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40d0b0 */
#include <stdint.h>
 
void fcn_0040d0b0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    *((rsp + 0xc)) = edx;
    fcn_00412b60 (rsp + 0xc, rdi, esi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40d0d0 */
#include <stdint.h>
 
uint64_t fcn_0040d0d0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_00413060 ();
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
        eax = 0x4192de;
        ebx = 0x4192e9;
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
        eax = 0x4192e2;
        ebx = 0x4192e5;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x41aa0f;
    ebx = 0x4192dc;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40d1d0 */
#include <stdint.h>
 
uint64_t fcn_0040d1d0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
    /* switch table (11 cases) at 0x419340 */
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
    *((rsp + 0x50)) = 0x41aa0f;
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
        /* switch table (127 cases) at 0x419398 */
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
    rax = fcn_0040d1d0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x419790 */
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
    /* switch table (127 cases) at 0x419b88 */
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
    *((rsp + 0x50)) = 0x41aa0f;
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
        rax = fcn_004129f0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x41aa0f;
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
        *((rsp + 0x50)) = 0x4192dc;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_0040d0d0 (0x4192ed, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_0040d0d0 (0x41aa0f, r13d);
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
        *((rsp + 0x50)) = 0x4192dc;
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
        *((rsp + 0x50)) = 0x41aa0f;
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
    *((rsp + 0x50)) = 0x4192dc;
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
    rax = fcn_0040d1d0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x41aa0f;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40e400 */
#include <stdint.h>
 
uint64_t fcn_0040e400 (int64_t arg1, char * arg2, int64_t arg3, int64_t arg4) {
    char * var_8h;
    char * var_30h;
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
        rbx = *(0x0061f4b8);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0061f4d0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x61f4c0) {
        goto label_2;
    }
    rax = fcn_00411340 (rbx, rsi);
    *(0x0061f4b8) = rax;
    rbx = rax;
    do {
        rdi = *(0x0061f4d0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0061f4d0) = r12d;
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
        rax = fcn_0040d1d0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6219e0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_004112e0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_0040d1d0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00411340 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0061f4c0]");
        rbx = rax;
        *(0x0061f4b8) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40e920 */
#include <stdint.h>
 
int64_t fcn_0040e920 (int64_t arg1, uint32_t arg2, char * arg3) {
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
    fcn_0040e400 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ea00 */
#include <stdint.h>
 
void fcn_0040ea00 (int64_t arg1, char * arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
invalid_funccall(); //    return void (*0x40e920)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40eaa0 */
#include <stdint.h>
 
int64_t fcn_0040eaa0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x00621ae0]");
        __asm ("movdqa xmm1, xmmword [0x00621af0]");
        __asm ("movdqa xmm2, xmmword [0x00621b00]");
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
        fcn_0040e400 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ead0 */
#include <stdint.h>
 
int64_t fcn_0040ead0 (int64_t arg1, uint32_t arg2, char * arg3) {
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
    fcn_0040e400 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ec30 */
#include <stdint.h>
 
void fcn_0040ec30 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x61f480;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x40e400)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ec50 */
#include <stdint.h>
 
void fcn_0040ec50 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x61f480;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x40e400)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ec70 */
#include <stdint.h>
 
uint64_t fcn_0040ec70 (int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_28h;
    int64_t var_a0h;
    int64_t var_b8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9d = r8d;
    eax = 0;
    r14d = edi;
    r13d = edx;
    r12 = rcx;
    r8 = rcx;
    ecx = edx;
    rdx = rsi;
    rbx = rsi;
    esi = edi;
    edi = 0x13c;
    eax = syscall ();
    edx = eax;
    if (eax >= 0) {
        goto label_0;
    }
    *((rsp + 8)) = eax;
    rax = errno_location ();
    edx = *((rsp + 8));
    r9 = rax;
    eax = *(rax);
    ecx = rax - 0x16;
    ecx &= 0xffffffef;
    r15b = (ecx != 0) ? 1 : 0;
    al = (eax != 0x5f) ? 1 : 0;
    r15b &= al;
    if (r15b != 0) {
        goto label_0;
    }
    if (ebp == 0) {
        goto label_2;
    }
    ebp &= 0xfffffffe;
    if (ebp == 0) {
        goto label_3;
    }
    *(r9) = 0x5f;
    edx = 0xffffffff;
    do {
label_0:
        eax = edx;
        return rax;
label_3:
        rdx = r12;
        esi = r13d;
        edi = 1;
        *((rsp + 8)) = r9;
        r8d = 0x100;
        rcx = rsp + 0xa0;
        eax = fxstatat ();
        r9 = *((rsp + 8));
        if (eax == 0) {
            goto label_4;
        }
        eax = *(r9);
        if (eax == 0x4b) {
            goto label_4;
        }
        if (eax != 2) {
            goto label_1;
        }
        r15d = 1;
label_2:
        *((rsp + 8)) = r9;
        rax = strlen (rbx);
        rax = strlen (r12);
        if (rbp == 0) {
            goto label_5;
        }
        r9 = *((rsp + 8));
        if (rax == 0) {
            goto label_5;
        }
        if (*((rbx + rbp - 1)) != 0x2f) {
            if (*((r12 + rax - 1)) != 0x2f) {
                goto label_5;
            }
        }
        rcx = rsp + 0x10;
        rdx = rbx;
        esi = r14d;
        edi = 1;
        r8d = 0x100;
        *((rsp + 8)) = r9;
        eax = fxstatat ();
        if (eax != 0) {
            goto label_1;
        }
        r9 = *((rsp + 8));
        if (r15b == 0) {
            goto label_6;
        }
        eax = *((rsp + 0x28));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_5;
        }
        *(r9) = 2;
        edx = 0xffffffff;
    } while (1);
    do {
        eax = *((rsp + 0xb8));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_7;
        }
        *(r9) = 0x14;
label_1:
        edx = 0xffffffff;
        goto label_0;
label_6:
        rdx = r12;
        esi = r13d;
        edi = 1;
        *((rsp + 8)) = r9;
        r8d = 0x100;
        rcx = rsp + 0xa0;
        eax = fxstatat ();
        r9 = *((rsp + 8));
    } while (eax == 0);
    if (*(r9) != 2) {
        goto label_1;
    }
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    if (eax != 0x4000) {
        goto label_1;
    }
    do {
label_5:
        edx = r13d;
        rcx = r12;
        rsi = rbx;
        edi = r14d;
        eax = renameat ();
        edx = eax;
        goto label_0;
label_4:
        *(r9) = 0x11;
        edx = 0xffffffff;
        goto label_0;
label_7:
        eax = *((rsp + 0x28));
        eax &= 0xf000;
    } while (eax == 0x4000);
    *(r9) = 0x15;
    edx = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40eec0 */
#include <stdint.h>
 
uint64_t fcn_0040eec0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ef20 */
#include <stdint.h>
 
uint64_t fcn_0040ef20 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13d = edi;
    r12 = rsi;
    rbx = rdx;
    do {
label_0:
        rax = write (r13d, r12, rbx);
        if (rax >= 0) {
            goto label_1;
        }
        rax = errno_location ();
        eax = *(rax);
    } while (eax == 4);
    if (eax == 0x16) {
        if (rbx <= 0x7fffe000) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40ef80 */
#include <stdint.h>
 
uint64_t fcn_0040ef80 (char * arg1, char * arg2) {
    uint32_t var_8h;
    int64_t var_90h;
    int64_t var_98h;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    r14 = rsi;
    ebx = 0;
    rax = fcn_0040ad40 (rdi);
    rax = fcn_0040ad40 (r14);
    r12 = rax;
    rax = fcn_0040ada0 (rbp);
    r13 = rax;
    rax = fcn_0040ada0 (r12);
    while (eax != 0) {
label_0:
        eax = ebx;
        return rax;
        eax = memcmp (rbp, r12, r13);
    }
    rdi = r15;
    rax = fcn_0040ac60 ();
    rdi = r14;
    rax = fcn_0040ac60 ();
    rdx = rsp;
    rsi = rbp;
    edi = 1;
    r12 = rax;
    eax = xstat ();
    if (eax != 0) {
        goto label_2;
    }
label_1:
    rdx = rsp + 0x90;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    while (1) {
        ebx = 0;
        rax = *((rsp + 0x98));
        if (*((rsp + 8)) == rax) {
            rax = *((rsp + 0x90));
            bl = (*(rsp) == rax) ? 1 : 0;
        }
        free (rbp);
        free (r12);
        goto label_0;
        rax = errno_location ();
        rcx = r12;
        eax = 0;
        error (1, *(rax), 0x41aa9b);
    }
label_2:
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), 0x41aa9b);
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40f0e0 */
#include <stdint.h>
 
int64_t fcn_0040f0e0 (int64_t arg1, int64_t arg2) {
    uint32_t const void * unknown;
    uint32_t var_10h;
    int64_t var_18h;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rsi = arg2;
    rax = *((rsi*8 + 0x41a020));
    *((rsp + 8)) = rax;
    if (rdi == 0) {
        goto label_9;
    }
    rbx = rdi;
    r15d = 0;
    r12d = 0;
    r14d = 0;
    rax = errno_location ();
    r13d = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x10)) = 0;
    while (al != 0x2e) {
label_1:
        if (al != 0) {
            goto label_10;
        }
label_0:
        *(rbp) = 0;
        rdi = rbx;
        rax = readdir ();
        rcx = rax;
        if (rax == 0) {
            goto label_11;
        }
        r8 = rax + 0x13;
        eax = *((rax + 0x13));
    }
    if (*((rcx + 0x14)) == 0x2e) {
        goto label_12;
    }
    eax = *((rcx + 0x14));
    if (al == 0) {
        goto label_0;
    }
label_10:
    rdi = r8;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x28)) = rcx;
    strlen (rdi);
    r8 = *((rsp + 0x18));
    rdx = rax + 1;
    if (*((rsp + 8)) == 0) {
        goto label_13;
    }
    rax = r12 + 1;
    rcx = *((rsp + 0x28));
    *((rsp + 0x18)) = rax;
    if (r12 == *((rsp + 0x20))) {
        goto label_14;
    }
label_2:
    *((rsp + 0x30)) = rdx;
    r12 <<= 4;
    *((rsp + 0x28)) = rcx;
    r12 += r14;
    rax = fcn_00411510 (r8);
    rcx = *((rsp + 0x28));
    rdx = *((rsp + 0x30));
    *(r12) = rax;
    rax = *(rcx);
    r15 += rdx;
    *((r12 + 8)) = rax;
    r12 = *((rsp + 0x18));
    goto label_0;
label_12:
    eax = *((rcx + 0x15));
    goto label_1;
label_11:
    ebx = *(rbp);
    if (ebx != 0) {
        goto label_15;
    }
    if (*((rsp + 8)) == 0) {
        goto label_16;
    }
    rbx = r15 + 1;
    if (r12 == 0) {
        rax = fcn_004112e0 (rbx);
        r13 = rax;
        goto label_17;
    }
    rcx = *((rsp + 8));
    rsi = r12;
    edx = 0x10;
    rdi = r14;
    r12 <<= 4;
    ebp = 0;
    qsort ();
    r12 += r14;
    rbx = r14;
    rax = fcn_004112e0 (rbx);
    r13 = rax;
    do {
        r15 = r13 + rbp;
        rsi = *(rbx);
        rbx += 0x10;
        rdi = r15;
        rax = stpcpy ();
        rax -= r15;
        rbp = rbp + rax + 1;
        free (*((rbx - 0x10)));
    } while (rbx != r12);
    rbp += r13;
label_17:
    free (r14);
    do {
label_3:
        *(rbp) = 0;
label_4:
        rax = r13;
        return rax;
label_13:
        rax = *((rsp + 0x10));
        rsi = r15;
        rax -= r15;
        rsi += rdx;
        cl = (rsi < 0) ? 1 : 0;
        *((rsp + 0x18)) = rsi;
        ecx = (int32_t) cl;
        if (rax <= rdx) {
            if (rcx != 0) {
                goto label_8;
            }
            if (r13 == 0) {
                goto label_18;
            }
            rax = 0x5555555555555553;
            rsi = *((rsp + 0x18));
            if (rsi > rax) {
                goto label_8;
            }
            rax = rsi;
            rax >>= 1;
            rax = rsi + rax + 1;
label_5:
            *((rsp + 0x10)) = rax;
label_6:
            *((rsp + 0x30)) = rdx;
            *((rsp + 0x28)) = r8;
            rax = fcn_00411340 (r13, *((rsp + 0x10)));
            r8 = *((rsp + 0x28));
            r13 = rax;
        }
        memcpy (r13 + r15, r8, *((rsp + 0x30)));
        r15 = *((rsp + 0x18));
        goto label_0;
label_16:
        if (*((rsp + 0x10)) == r15) {
            goto label_19;
        }
        rbp = r13 + r15;
    } while (1);
label_14:
    if (r14 == 0) {
        goto label_20;
    }
    rax = 0x555555555555554;
    if (r12 > rax) {
        goto label_8;
    }
    rax = r12;
    rax >>= 1;
    rax += *((rsp + 0x18));
    *((rsp + 0x20)) = rax;
    rsi <<= 4;
label_7:
    *((rsp + 0x38)) = rdx;
    *((rsp + 0x30)) = r8;
    *((rsp + 0x28)) = rcx;
    rax = fcn_00411340 (r14, rax);
    rdx = *((rsp + 0x38));
    r8 = *((rsp + 0x30));
    r14 = rax;
    rcx = *((rsp + 0x28));
    goto label_2;
label_19:
    rbx = *((rsp + 0x10));
    rax = fcn_00411340 (r13, rbx + 1);
    r13 = rax;
    rbp = rax + rbx;
    goto label_3;
label_15:
    free (r14);
    r13d = 0;
    free (r13);
    *(rbp) = ebx;
    goto label_4;
label_9:
    r13d = 0;
    goto label_4;
label_18:
    rax = rsi;
    if (rsi == 0) {
        goto label_21;
    }
    if (rsi >= 0) {
        goto label_5;
    }
    do {
label_8:
        fcn_00411530 ();
label_21:
        *((rsp + 0x10)) = 0x80;
        goto label_6;
label_20:
        if (r12 == 0) {
            goto label_22;
        }
        rax = r12;
        rsi = r12;
        rax >>= 0x3c;
        al = (rax != 0) ? 1 : 0;
        rsi <<= 4;
        eax = (int32_t) al;
    } while (rsi < 0);
    if (rax == 0) {
        goto label_7;
    }
    goto label_8;
label_22:
    *((rsp + 0x20)) = 8;
    esi = 0x80;
    *((rsp + 0x18)) = 1;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40f480 */
#include <stdint.h>
 
uint64_t fcn_0040f480 (int64_t arg2) {
    rsi = arg2;
    rax = fcn_0040abc0 ();
    if (rax != 0) {
        rbx = rax;
        rax = fcn_0040f0e0 (rax, ebp);
        rdi = rbx;
        eax = closedir ();
        if (eax != 0) {
            goto label_0;
        }
        rax = rbp;
        return rax;
    }
    ebp = 0;
    rax = rbp;
    return rax;
label_0:
    rax = errno_location ();
    ebp = 0;
    r12d = *(rax);
    rbx = rax;
    free (rbp);
    rax = rbp;
    *(rbx) = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40f520 */
#include <stdint.h>
 
uint64_t fcn_0040f520 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r12 = rsi;
    rbx = rcx;
    if (rcx == 0) {
        goto label_6;
    }
    esi = edx;
    rdi = r12;
    r14d = edx;
    esi <<= 0x11;
    esi &= 0x20000;
    esi |= 0x10900;
    eax = open_2 ();
    *(rbx) = eax;
    r13d = eax;
    rax = errno_location ();
    eax = *(rax);
    *((rbx + 4)) = eax;
    if (r13d < 0) {
        goto label_7;
    }
    r14d &= 2;
    while (eax == 0xd) {
label_1:
        ecx = *(rbp);
        if (ecx > 5) {
            goto label_8;
        }
        eax = 1;
        rax <<= cl;
        if ((al & 0x36) == 0) {
            if ((al & 8) != 0) {
                goto label_9;
            }
            if (ecx != 0) {
                goto label_8;
            }
            eax = 0;
            eax = fcn_0040ae10 (0x418d7b, 0, rdx, rcx);
            if (eax < 0) {
                goto label_10;
            }
            *(rbp) = 1;
            *((rbp + 4)) = eax;
        }
label_2:
        if (r13d < 0) {
            goto label_11;
        }
        edi = r13d;
        eax = fchdir ();
        r12d = eax;
        if (eax == 0) {
            goto label_12;
        }
        al = (rbx == 0) ? 1 : 0;
        goto label_5;
        r12d = 0;
label_0:
        eax = r12d;
        return rax;
INVALID_JUMP;
    }
    r12d = 0xffffffff;
    goto label_0;
label_11:
    rdi = r12;
    eax = chdir ();
    r12d = eax;
    if (eax != 0) {
        goto label_0;
    }
label_12:
    if (*(rbp) > 5) {
        goto label_13;
    }
    eax = *(rbp);
    /* switch table (6 cases) at 0x41a088 */
    *(rbp) = 2;
label_3:
    al = (rbx == 0) ? 1 : 0;
    r12d = 0;
label_5:
    if (r13d < 0) {
        goto label_0;
    }
    if (al == 0) {
        goto label_0;
    }
    rax = errno_location ();
    ebp = *(rax);
    rbx = rax;
    close (r13d);
    eax = r12d;
    *(rbx) = ebp;
    return rax;
label_6:
    r13d = 0xffffffff;
    goto label_1;
label_9:
    edx = *((rbp + 4));
    if (edx >= 0) {
        goto label_2;
    }
label_4:
    eax = fork ();
    *((rbp + 4)) = eax;
    if (eax == 0) {
        goto label_2;
    }
    if (eax > 0) {
        goto label_14;
    }
    *(rbp) = 4;
    rax = errno_location ();
    eax = *(rax);
    *((rbp + 4)) = eax;
    goto label_2;
    eax = *((rbp + 4));
    if (eax == 0) {
        goto label_3;
    }
    assert_fail ("wd->val.child == 0", "lib/savewd.c", 0x9b, "savewd_chdir");
label_10:
    rax = errno_location ();
    eax = *(rax);
    if (eax != 0xd) {
        if (eax == 0x74) {
            goto label_15;
        }
        *(rbp) = 4;
        *((rbp + 4)) = eax;
        goto label_2;
    }
label_15:
    rax = 0xffffffff00000003;
    *(rbp) = rax;
    goto label_4;
label_13:
    assert_fail (0x41a084, "lib/savewd.c", 0x9f, "savewd_chdir");
label_14:
    eax = 1;
    r12d = 0xfffffffe;
    goto label_5;
label_8:
    return assert_fail (0x41a084, "lib/savewd.c", 0x63, "savewd_save");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40f770 */
#include <stdint.h>
 
uint64_t fcn_0040f770 (int64_t wstatus, uint32_t arg1, int64_t status) {
    rdi = arg1;
    rsi = status;
    if (*(rdi) > 4) {
        goto label_1;
    }
    eax = *(rdi);
    rbx = rdi;
    /* switch table (5 cases) at 0x41a0b8 */
    ebp = *((rdi + 4));
    if (ebp == 0) {
        goto label_2;
    }
    if (ebp > 0) {
        goto label_3;
    }
    eax = 0;
    return eax;
    r12d = *((rdi + 4));
    rax = errno_location ();
label_0:
    *(rbp) = r12d;
    eax = 0xffffffff;
    return rax;
    do {
        rax = errno_location ();
        if (*(rax) != 4) {
            goto label_4;
        }
label_3:
        eax = waitpid (ebp, rsp + 0xc, 0);
    } while (eax < 0);
    eax = *((rsp + 0xc));
    *((rbx + 4)) = 0xffffffff;
    edi = eax;
    edi &= 0x7f;
    while (1) {
        eax = (int32_t) ah;
        return rax;
        edi = *((rdi + 4));
        eax = fchdir ();
        if (eax != 0) {
            goto label_5;
        }
        *(rbx) = 1;
        return rax;
        raise (rdi);
        eax = *((rsp + 0xc));
    }
label_5:
    rax = errno_location ();
    r12d = *(rax);
    close (*((rbx + 4)));
    *(rbx) = 4;
    *((rbx + 4)) = r12d;
    goto label_0;
label_4:
    assert_fail ("(*__errno_location ()) == 4", "lib/savewd.c", 0xd8, "savewd_restore");
label_1:
    assert_fail (0x41a084, "lib/savewd.c", 0xe2, "savewd_restore");
label_2:
    return exit (esi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40f8a0 */
#include <stdint.h>
 
int32_t fcn_0040f8a0 (uint32_t fildes) {
    rdi = fildes;
    if (*(rdi) > 4) {
        goto label_0;
    }
    eax = *(rdi);
    rbx = rdi;
    /* switch table (5 cases) at 0x41a0e0 */
    close (*((rdi + 4)));
    do {
        *(rbx) = 5;
        return eax;
        eax = *((rdi + 4));
    } while (eax < 0);
    assert_fail ("wd->val.child < 0", "lib/savewd.c", 0xf7, "savewd_finish");
label_0:
    return assert_fail (0x41a084, "lib/savewd.c", 0xfb, "savewd_finish");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40f910 */
#include <stdint.h>
 
int64_t fcn_0040f910 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_28h;
    int64_t var_2ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    eax = rdi - 1;
    r13 = rdx;
    r12 = rsi;
    *((rsp + 0x18)) = edi;
    *((rsp + 8)) = rcx;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x1c)) = eax;
    if (eax < 0) {
        goto label_2;
    }
    rax = (int64_t) eax;
    rax = *((rsi + rax*8));
    if (*(rax) != 0x2f) {
        goto label_3;
    }
    eax = rdi - 2;
    rax = (int64_t) eax;
    while (eax >= 0) {
        rdx = *((r12 + rax*8));
        rax--;
        if (*(rdx) != 0x2f) {
            goto label_3;
        }
    }
label_3:
    if (ebp <= 0) {
        goto label_2;
    }
    eax = rbp - 1;
    r15 = r12;
    rbx = rsp + 0x28;
    r14d = 0;
    rax = r12 + rax*8 + 8;
    *((rsp + 0x10)) = rax;
    eax = 0;
    while (eax != 3) {
label_1:
        rdx = *((rsp + 8));
        rsi = rbx;
        rdi = *(r15);
invalid_funccall(); //        eax = void (*r13)() ();
        if (r14d < eax) {
            r14d = eax;
        }
label_0:
        rax = *((r15 + 8));
        if (*(rax) != 0x2f) {
            eax = fcn_0040f770 (rbx, r14d, rdx);
            if (r14d >= eax) {
                r14d = eax;
                goto label_4;
            }
        }
label_4:
        r15 += 8;
        if (r15 == *((rsp + 0x10))) {
            goto label_5;
        }
        eax = *((rsp + 0x28));
    }
    eax = *((rsp + 0x2c));
    if (eax > 0) {
        goto label_0;
    }
    goto label_1;
label_2:
    r14d = 0;
    ebp = 0;
    rbx = rsp + 0x28;
label_5:
    fcn_0040f8a0 (rbx);
    if (*((rsp + 0x18)) <= ebp) {
        goto label_6;
    }
    eax = *((rsp + 0x1c));
    rdx = (int64_t) ebp;
    r15 = r12 + rdx*8;
    eax -= ebp;
    rax += rdx;
    rbp = r12 + rax*8 + 8;
    do {
        rdi = *(r15);
        rdx = *((rsp + 8));
        rsi = rbx;
invalid_funccall(); //        eax = void (*r13)() ();
        if (r14d < eax) {
            r14d = eax;
        }
        r15 += 8;
    } while (r15 != rbp);
label_6:
    eax = r14d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40faf0 */
#include <stdint.h>
 
void fcn_0040faf0 (void) {
    return assert_fail ("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 0x147, "gen_tempname_len");}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40fb10 */
#include <stdint.h>
 
uint64_t fcn_0040fb10 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_2ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r14 = rdi;
    r13 = r8;
    *((rsp + 0x18)) = rdx;
    *((rsp + 8)) = rdi;
    *((rsp + 0x20)) = rcx;
    rax = errno_location ();
    r15 = rax;
    eax = *(rax);
    *((rsp + 0x2c)) = eax;
    rax = strlen (r14);
    rdx = (int64_t) ebp;
    rdx += r13;
    if (rdx > rax) {
        goto label_2;
    }
    rax -= rdx;
    rbx = rax;
    rax = r14 + rax;
    rdi = rax;
    *((rsp + 0x10)) = rax;
    rax = strspn (rdi, 0x418fcb);
    if (r13 > rax) {
        goto label_2;
    }
    rsi = r13;
    edi = 0;
    rax = fcn_00413800 ();
    if (rax == 0) {
        goto label_3;
    }
    rax = *((rsp + 8));
    r12d = 0x3a2f8;
    rax += r13;
    rbx += rax;
label_0:
    r14 = *((rsp + 0x10));
    if (r13 == 0) {
        goto label_4;
    }
    do {
        r14++;
        fcn_00413840 (rbp, 0x3d);
        eax = *((rax + str_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789));
        *((r14 - 1)) = al;
    } while (r14 != rbx);
label_4:
    rsi = *((rsp + 0x18));
    rdi = *((rsp + 8));
    rax = *((rsp + 0x20));
invalid_funccall(); //    eax = void (*rax)() ();
    edx = eax;
    if (eax >= 0) {
        goto label_5;
    }
    ecx = *(r15);
    if (ecx != 0x11) {
        goto label_6;
    }
    r12d--;
    if (r12d != 0) {
        goto label_0;
    }
    fcn_00413960 (rbp);
    *(r15) = 0x11;
    edx = 0xffffffff;
    goto label_1;
label_5:
    eax = *((rsp + 0x2c));
    *(r15) = eax;
    ecx = eax;
    do {
        *((rsp + 0x10)) = edx;
        *((rsp + 8)) = ecx;
        fcn_00413960 (rbp);
        ecx = *((rsp + 8));
        edx = *((rsp + 0x10));
        *(r15) = ecx;
label_1:
        eax = edx;
        return rax;
label_6:
        edx = 0xffffffff;
    } while (1);
label_2:
    *(r15) = 0x16;
    edx = 0xffffffff;
    goto label_1;
label_3:
    edx = 0xffffffff;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40fcf0 */
#include <stdint.h>
 
uint64_t fcn_0040fcf0 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_004143d0 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x40fd60 */
#include <stdint.h>
 
uint64_t fcn_0040fd60 (char * arg1, char * arg2, func * arg3, int64_t arg4) {
    int64_t var_8h;
    char * var_10h;
    uint32_t var_18h;
    char * var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_5ch;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_d8h;
    int64_t var_e0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    ebx = ecx;
    r13 = *((rdx + 0x60));
    r12 = *((rsi + 0x58));
    rbp = *((rdx + 0x58));
    r14 = *((rsi + 0x60));
    r15d = r13d;
    ebx &= 1;
    if (ebx != 0) {
        rsp = (r12 == rbp) ? 1 : 0;
        ecx = *(rsp);
        al = (r14d == r13d) ? 1 : 0;
        al &= cl;
        *((rsp + 8)) = al;
        if (al != 0) {
            goto label_15;
        }
        rax = rbp - 1;
        if (rax > r12) {
            goto label_2;
        }
        rax = r12 - 1;
        if (rax > rbp) {
            goto label_0;
        }
        rdx = imp.__libc_start_main;
        *((rsp + 0x10)) = rsi;
        *((rsp + 0x20)) = rdi;
        if (rdx == 0) {
            goto label_16;
        }
label_1:
        rsi = imp.__libc_start_main;
        if (rsi == 0) {
            goto label_17;
        }
label_5:
        rax = *((rsp + 0x10));
        rax = *(rax);
        *(rsi) = rax;
        rax = fcn_0040c2f0 (rdx);
        r9 = rax;
        if (rax == 0) {
            goto label_18;
        }
        if (*(0x00621b18) == rax) {
            goto label_19;
        }
label_7:
        edi = *((r9 + 8));
        *((rsp + 0x18)) = edi;
        if (*((r9 + 0xc)) == 0) {
            goto label_20;
        }
        eax = 0;
        al = (edi == 0x77359400) ? 1 : 0;
        eax = ~eax;
        rax = (int64_t) eax;
        rbp &= rax;
        eax = r15d;
        r15d = r13d;
        edx_eax = (int64_t) eax;
        eax = edx_eax / edi;
        edx = edx_eax % edi;
        r15d -= edx;
    }
label_4:
    if (rbp > r12) {
        goto label_2;
    }
    ebx = 1;
    if (rbp != r12) {
        goto label_0;
    }
    if (r15d > r14d) {
        goto label_2;
    }
    bl = (r15d < r14d) ? 1 : 0;
    ebx = (int32_t) bl;
    do {
label_0:
        eax = ebx;
        return rax;
label_15:
        ebx = 0;
    } while (1);
label_3:
    eax = r15d;
    edx_eax = (int64_t) eax;
    eax = edx_eax / r8d;
    edx = edx_eax % r8d;
    eax = r13d;
    eax -= edx;
    if (eax <= r14d) {
        goto label_21;
    }
label_2:
    ebx = 0xffffffff;
    goto label_0;
label_16:
    rax = fcn_0040bb50 (0x10, 0, 0x40fd40, 0x40fd50, sym.imp.free);
    rdx = rax;
    *(0x00621b20) = rax;
    if (rax != 0) {
        goto label_1;
    }
label_6:
    rdx = rsp + 0x50;
label_8:
    *((rsp + 0x58)) = 0x77359400;
    r9 = rdx;
    *((rsp + 0x5c)) = 0;
    *((rsp + 0x18)) = 0x77359400;
label_20:
    rax = *((rsp + 0x10));
    r8d = 0x66666667;
    rdi = *((rax + 0x50));
    rcx = *((rax + 0x70));
    eax = edi;
    esi = edi;
    *((rsp + 0x30)) = rdi;
    edx_eax = eax * r8d;
    esi >>= 0x1f;
    edx >>= 2;
    edx -= esi;
    esi = edi;
    edi = ecx;
    eax = rdx * 5;
    r11d = edx;
    edi >>= 0x1f;
    eax += eax;
    esi -= eax;
    eax = ecx;
    edx_eax = eax * r8d;
    edx >>= 2;
    edx -= edi;
    edi = r14d;
    eax = rdx * 5;
    r10d = edx;
    edi >>= 0x1f;
    eax += eax;
    ecx -= eax;
    eax = r14d;
    edx_eax = eax * r8d;
    ecx |= esi;
    esi = r14d;
    edx >>= 2;
    edx -= edi;
    eax = rdx * 5;
    edi = edx;
    *((rsp + 0x28)) = edx;
    eax += eax;
    esi -= eax;
    ecx |= esi;
    if (ecx != 0) {
        goto label_22;
    }
    rax = *((rsp + 0x10));
    ecx = r11d;
    esi = r10d;
    rax = *((rax + 0x48));
    *((rsp + 0x48)) = rax;
    if (*((rsp + 0x18)) <= 0xa) {
        goto label_23;
    }
    eax = r11d;
    edx_eax = eax * r8d;
    eax = r11d;
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = rdx * 5;
    eax += eax;
    r11d -= eax;
    eax = r10d;
    edx_eax = eax * r8d;
    eax = r10d;
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = rdx * 5;
    eax += eax;
    r10d -= eax;
    eax = *((rsp + 0x28));
    r11d |= r10d;
    r10d = 0x66666667;
    edx_eax = eax * r8d;
    r8d = *((rsp + 0x28));
    eax = *((rsp + 0x28));
    eax >>= 0x1f;
    edx >>= 2;
    edx -= eax;
    eax = rdx * 5;
    edx = r8d;
    r8d = 0xa;
    eax += eax;
    edx -= eax;
    eax = 8;
    r11d |= edx;
    if (r11d != 0) {
        goto label_24;
    }
    *((rsp + 0x28)) = rbp;
    *((rsp + 0x40)) = r9;
    r9d = *((rsp + 0x18));
    *((rsp + 0x3c)) = r15d;
    r15d = eax;
    do {
        eax = ecx;
        ecx >>= 0x1f;
        r11d = r8 * 5;
        edx_eax = eax * r10d;
        eax = esi;
        esi >>= 0x1f;
        r11d += r11d;
        r8d = r11d;
        edx >>= 2;
        edx -= ecx;
        ecx = edx;
        edx_eax = eax * r10d;
        eax = edi;
        edi >>= 0x1f;
        edx >>= 2;
        edx -= esi;
        esi = edx;
        edx_eax = eax * r10d;
        edx >>= 2;
        edx -= edi;
        edi = edx;
        if (r11d >= r9d) {
            goto label_25;
        }
        eax = ecx;
        edx_eax = eax * r10d;
        eax = ecx;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        eax += eax;
        ebp -= eax;
        eax = esi;
        edx_eax = eax * r10d;
        eax = esi;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        edx = esi;
        eax += eax;
        edx -= eax;
        eax = edi;
        ebp |= edx;
        edx_eax = eax * r10d;
        eax = edi;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        edx = edi;
        eax += eax;
        edx -= eax;
        ebp |= edx;
        if (ebp != 0) {
            goto label_25;
        }
        r15d--;
    } while (r15d != 0);
    rax = *((rsp + 0x48));
    rdi = *((rsp + 0x10));
    rbp = *((rsp + 0x28));
    r15d = *((rsp + 0x3c));
    rax |= r12;
    rax |= *((rdi + 0x68));
    r9 = *((rsp + 0x40));
    if ((al & 1) == 0) {
        goto label_26;
    }
    *((r9 + 8)) = 0x3b9aca00;
    rax = rbp;
    r8d = 0x3b9aca00;
label_9:
    if (r12 > rbp) {
        goto label_0;
    }
    if (r14d < r13d) {
        goto label_27;
    }
    if (*(rsp) != 0) {
        goto label_0;
    }
label_27:
    if (r12 < rax) {
        goto label_2;
    }
    if (r12 == rax) {
        goto label_3;
    }
label_21:
    rax = *((rsp + 0x48));
    edx = 0x38e38e39;
    *((rsp + 0x18)) = r8d;
    rdi = *((rsp + 0x20));
    *((rsp + 0x60)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x68)) = rax;
    eax = *((rsp + 8));
    rax |= r12;
    *((rsp + 0x70)) = rax;
    eax = r8d;
    edx_eax = eax * edx;
    edx >>= 1;
    eax = rdx + r14;
    rax = (int64_t) eax;
    *((rsp + 0x78)) = rax;
    rax = *((rsp + 0x10));
    eax = *((rax + 0x18));
    *(rsp) = eax;
    eax &= 0xf000;
    rax = rsp + 0x60;
    *(rsp) = r9;
    *((rsp + 8)) = rax;
    rsi = rax;
    if (eax == 0xa000) {
        goto label_28;
    }
    eax = fcn_00410aa0 (rdi, rsi, rdx, rcx);
    r8d = *((rsp + 0x18));
    r9 = *(rsp);
    al = (eax != 0) ? 1 : 0;
label_11:
    if (al == 0) {
        rax = *((rsp + 0x10));
        *((rsp + 0x18)) = r8d;
        edi = 1;
        rdx = rsp + 0x80;
        rsi = *((rsp + 0x20));
        eax = *((rax + 0x18));
        *(rsp) = eax;
        eax &= 0xf000;
        *(rsp) = r9;
        if (eax == 0xa000) {
            goto label_29;
        }
        eax = xstat ();
        r8d = *((rsp + 0x18));
        r9 = *(rsp);
        r10d = eax;
label_12:
        rax = *((rsp + 0xd8));
        rcx = *((rsp + 0xe0));
        rdi = (int64_t) r14d;
        rdx = rdi;
        rsi = rax;
        rdx ^= rcx;
        rsi ^= r12;
        rdx |= rsi;
        rsi = (int64_t) r10d;
        rdx |= rsi;
        if (rdx == 0) {
            goto label_30;
        }
        rax = *((rsp + 0x10));
        *((rsp + 0x78)) = rdi;
        *((rsp + 0x70)) = r12;
        rsi = *((rsp + 8));
        eax = *((rax + 0x18));
        rdi = *((rsp + 0x20));
        *((rsp + 0x18)) = r8d;
        *((rsp + 0x10)) = r10d;
        eax &= 0xf000;
        *(rsp) = r9;
        if (eax == 0xa000) {
            goto label_31;
        }
        fcn_00410aa0 (rdi, rsi, rdx, rcx);
        r8d = *((rsp + 0x18));
        r10d = *((rsp + 0x10));
        r9 = *(rsp);
label_14:
        if (r10d == 0) {
            goto label_32;
        }
    }
    ebx = 0xfffffffe;
    goto label_0;
label_32:
    rax = *((rsp + 0xd8));
    rcx = *((rsp + 0xe0));
label_30:
    eax &= 1;
    edx = 0x66666667;
    eax *= 0x3b9aca00;
    ecx += eax;
    eax = ecx;
    edx_eax = eax * edx;
    eax = edx;
    edx = ecx;
    eax >>= 2;
    edx >>= 0x1f;
    eax -= edx;
    eax = rax * 5;
    eax += eax;
    if (ecx != eax) {
        goto label_33;
    }
    if (r8d == 0xa) {
        goto label_34;
    }
    esi = 9;
    ebx = 0xa;
    edi = 0x66666667;
    while (esi != 0) {
        ebx = rbx * 5;
        ebx += ebx;
        if (ebx == r8d) {
            goto label_35;
        }
        eax = ecx;
        ecx >>= 0x1f;
        edx_eax = eax * edi;
        edx >>= 2;
        edx -= ecx;
        eax = edx;
        ecx = edx;
        edx_eax = eax * edi;
        eax = ecx;
        eax >>= 0x1f;
        edx >>= 2;
        edx -= eax;
        eax = rdx * 5;
        eax += eax;
        if (ecx != eax) {
            goto label_35;
        }
        esi--;
    }
    rax = 0xfffffffffffffffe;
    ebx = 0x77359400;
label_13:
    rbp &= rax;
    eax = r15d;
    r15d = r13d;
    edx_eax = (int64_t) eax;
    eax = edx_eax / ebx;
    edx = edx_eax % ebx;
    r15d -= edx;
label_22:
    *((r9 + 8)) = ebx;
    *((r9 + 0xc)) = 1;
    goto label_4;
label_17:
    *((rsp + 0x18)) = rdx;
    rax = malloc (0x10);
    rsi = rax;
    *(0x00621b18) = rax;
    if (rax == 0) {
        goto label_36;
    }
    *((rax + 8)) = 0x77359400;
    rdx = *((rsp + 0x18));
    *((rax + 0xc)) = 0;
    goto label_5;
label_18:
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_6;
    }
label_10:
    rax = *((rsp + 0x10));
    rdx = rsp + 0x50;
    rsi = rdx;
    *((rsp + 0x18)) = rdx;
    rax = *(rax);
    *((rsp + 0x50)) = rax;
    rax = fcn_0040b8e0 (rdi, rsi);
    rdx = *((rsp + 0x18));
    r9 = rax;
    if (rax != 0) {
        goto label_7;
    }
    goto label_8;
label_19:
    *(0x00621b18) = 0;
    goto label_7;
label_25:
    rbp = *((rsp + 0x28));
    r9 = *((rsp + 0x40));
    *(rsp + 8) = (r11d == 0x77359400) ? 1 : 0;
    eax = *((rsp + 8));
    r15d = *((rsp + 0x3c));
    *((r9 + 8)) = r11d;
    eax = ~eax;
    rax = (int64_t) eax;
    rax &= rbp;
    goto label_9;
label_26:
    rax = rbp;
    *((r9 + 8)) = 0x77359400;
    r8d = 0x77359400;
    rax &= 0xfffffffffffffffe;
    *((rsp + 8)) = 1;
    goto label_9;
label_36:
    rdi = imp.__libc_start_main;
    goto label_10;
label_28:
    eax = fcn_00410ab0 (rdi, rsi, rdx, rcx);
    r9 = *(rsp);
    r8d = *((rsp + 0x18));
    al = (eax != 0) ? 1 : 0;
    goto label_11;
label_24:
    *((r9 + 8)) = 0xa;
    rax = rbp;
    goto label_9;
label_23:
    *((r9 + 8)) = 0xa;
    rax = rbp;
    r8d = 0xa;
    goto label_9;
label_29:
    eax = lxstat ();
    r9 = *(rsp);
    r8d = *((rsp + 0x18));
    r10d = eax;
    goto label_12;
label_35:
    eax = 0;
    al = (ebx == 0x77359400) ? 1 : 0;
    eax = ~eax;
    rax = (int64_t) eax;
    goto label_13;
label_31:
    rax = fcn_00410ab0 (rdi, rsi, rdx, rcx);
    r9 = *(rsp);
    r10d = *((rsp + 0x10));
    r8d = *((rsp + 0x18));
    goto label_14;
label_34:
    ebx = 0xa;
label_33:
    rax |= 0xffffffffffffffff;
    goto label_13;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4104d0 */
#include <stdint.h>
 
int64_t fcn_004104d0 (int64_t arg1, uint32_t arg2) {
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rbx = *(rsi);
    rax = *((rbx + 8));
    rdx = *((rbx + 0x18));
    if (rax == 0x3ffffffe) {
        goto label_3;
    }
    if (rax == 0x3fffffff) {
        goto label_4;
    }
    if (rdx != 0x3ffffffe) {
        goto label_2;
    }
label_1:
    rdx = *((rbp + 0x58));
    rax = *((rbp + 0x60));
    *((rbx + 0x10)) = rdx;
    *((rbx + 0x18)) = rax;
    eax = 0;
    do {
label_0:
        return rax;
label_3:
        eax = 1;
    } while (rdx == 0x3ffffffe);
    rcx = *((rdi + 0x48));
    rax = *((rdi + 0x50));
    *(rbx) = rcx;
    *((rbx + 8)) = rax;
label_2:
    eax = 0;
    if (rdx != 0x3fffffff) {
        goto label_0;
    }
    *((rsp + 0xf)) = al;
    fcn_00412f80 (rbx + 0x10);
    eax = *((rsp + 0xf));
    return rax;
label_4:
    if (rdx == 0x3fffffff) {
        goto label_5;
    }
    eax = fcn_00412f80 (rbx);
    rdx = *((rbx + 0x18));
    if (rdx == 0x3ffffffe) {
        goto label_1;
    }
    goto label_2;
label_5:
    *(rsi) = 0;
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4105a0 */
#include <stdint.h>
 
int64_t fcn_004105a0 (int64_t arg1) {
    rdi = arg1;
    r9 = *((rdi + 8));
    rsi = r9 - 0x3ffffffe;
    if (rsi > 1) {
        if (r9 > 0x3b9ac9ff) {
            goto label_0;
        }
    }
    rdx = *((rdi + 0x18));
    r8 = rdx - 0x3ffffffe;
    if (r8 > 1) {
        if (rdx > 0x3b9ac9ff) {
            goto label_0;
        }
    }
    ecx = 0;
    r10d = 0;
    if (rsi <= 1) {
        *(rdi) = 0;
        ecx = 0;
        r10d = 1;
        cl = (r9 == 0x3ffffffe) ? 1 : 0;
    }
    if (r8 <= 1) {
        eax = 0;
        *((rdi + 0x10)) = 0;
        r10d = 1;
        al = (rdx == 0x3ffffffe) ? 1 : 0;
        ecx += eax;
    }
    eax = 0;
    al = (ecx == 1) ? 1 : 0;
    eax += r10d;
    return eax;
label_0:
    errno_location ();
    *(rax) = 0x16;
    eax = 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x410660 */
#include <stdint.h>
 
uint64_t fcn_00410660 (size_t arg1, char * arg2, uint32_t arg3, int64_t arg7, int64_t arg8) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    uint32_t var_b8h;
    uint32_t var_c0h;
    int64_t var_c8h;
    uint32_t var_d0h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    xmm0 = arg7;
    xmm1 = arg8;
    ebx = edi;
    if (rdx == 0) {
        goto label_10;
    }
    __asm ("movdqu xmm0, xmmword [rdx]");
    __asm ("movdqu xmm1, xmmword [rdx + 0x10]");
    *((rsp + 8)) = rdi;
    *((rsp + 0x10)) = xmm0;
    *((rsp + 0x20)) = xmm1;
    eax = fcn_004105a0 (rsp + 0x10);
    r13d = eax;
    if (eax < 0) {
        goto label_11;
    }
label_1:
    if (ebx < 0) {
        if (rbp == 0) {
            goto label_12;
        }
    }
    eax = imp.__libc_start_main;
    if (eax >= 0) {
        if (r13d == 2) {
            goto label_13;
        }
        rsi = *((rsp + 8));
label_2:
        if (ebx < 0) {
            goto label_14;
        }
        edi = ebx;
        eax = futimens ();
        r12d = eax;
        if (eax <= 0) {
            goto label_15;
        }
label_4:
        errno_location ();
        *(rax) = 0x26;
    }
label_7:
    *(0x00621b2c) = 0xffffffff;
    *(0x00621b28) = 0xffffffff;
    if (r13d != 0) {
        if (r13d != 3) {
            rdx = rsp + 0x70;
            if (ebx < 0) {
                goto label_16;
            }
            esi = ebx;
            edi = 1;
            eax = fxstat ();
            al = (eax != 0) ? 1 : 0;
label_3:
            if (al != 0) {
                goto label_11;
            }
        }
        if (*((rsp + 8)) == 0) {
            goto label_17;
        }
        r12d = 0;
        al = fcn_004104d0 (rsp + 0x70, rsp + 8);
        if (al != 0) {
            goto label_0;
        }
    }
    rsi = *((rsp + 8));
    if (rsi == 0) {
        goto label_17;
    }
    rax = *(rsi);
    rdi = *((rsi + 8));
    r13 = rsp + 0x30;
    rcx = 0x20c49ba5e353f7cf;
    *((rsp + 0x30)) = rax;
    rax = rdi;
    rdi >>= 0x3f;
    rdx_rax = rax * rcx;
    rax = *((rsi + 0x10));
    rsi = *((rsi + 0x18));
    *((rsp + 0x40)) = rax;
    rax = rsi;
    rsi >>= 0x3f;
    rdx >>= 7;
    rdx -= rdi;
    *((rsp + 0x38)) = rdx;
    rdx_rax = rax * rcx;
    rcx = rdx;
    rdx = r13;
    rcx >>= 7;
    rcx -= rsi;
    *((rsp + 0x48)) = rcx;
    if (ebx < 0) {
        goto label_18;
    }
    do {
        esi = 0;
        edi = ebx;
        eax = futimesat ();
        r12d = eax;
        if (eax == 0) {
            goto label_19;
        }
        r12d = 0xffffffff;
        if (rbp != 0) {
            rax = *((rsp + 8));
            esi = 0;
            if (rax != 0) {
                rdx = *(rax);
                rax = *((rax + 0x10));
                rsi = rsp + 0x50;
                *((rsp + 0x50)) = rdx;
                *((rsp + 0x58)) = rax;
            }
            rdi = rbp;
            eax = utime ();
            r12d = eax;
        }
label_0:
        eax = r12d;
        return rax;
label_17:
        r13d = 0;
        rdx = r13;
    } while (ebx >= 0);
label_18:
    rsi = rbp;
    edi = 0xffffff9c;
    eax = futimesat ();
    r12d = eax;
    goto label_0;
label_10:
    *((rsp + 8)) = 0;
    r13d = 0;
    goto label_1;
label_13:
    rdx = rsp + 0x70;
    if (ebx < 0) {
        goto label_20;
    }
    esi = ebx;
    edi = 1;
    eax = fxstat ();
    al = (eax != 0) ? 1 : 0;
label_5:
    if (al != 0) {
        goto label_11;
    }
    rsi = *((rsp + 8));
    if (*((rsi + 8)) == 0x3ffffffe) {
        goto label_21;
    }
    r13d = 3;
    if (*((rsi + 0x18)) != 0x3ffffffe) {
        goto label_2;
    }
    rax = *((rsp + 0xd0));
    rdx = *((rsp + 0xc8));
    *((rsi + 0x18)) = rax;
    *((rsi + 0x10)) = rdx;
    goto label_2;
label_16:
    rsi = rbp;
    edi = 1;
    eax = xstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_3;
label_14:
    rdx = rsi;
    ecx = 0;
    rsi = rbp;
    edi = 0xffffff9c;
    eax = utimensat ();
    r12d = eax;
    if (eax > 0) {
        goto label_4;
    }
    if (eax != 0) {
label_15:
        goto label_22;
    }
label_6:
    *(0x00621b2c) = 1;
    goto label_0;
label_19:
    if (r13 == 0) {
        goto label_0;
    }
    bpl = (*((r13 + 8)) > 0x7a11f) ? 1 : 0;
    r14b = (*((r13 + 0x18)) > 0x7a11f) ? 1 : 0;
    if (bpl != 0) {
        goto label_23;
    }
    if (r14b == 0) {
        goto label_0;
    }
label_23:
    rdx = rsp + 0x70;
    esi = ebx;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_0;
    }
    rdx = *((rsp + 0xc8));
    rdx -= *((r13 + 0x10));
    rax = *((rsp + 0xb8));
    __asm ("movdqa xmm2, xmmword [r13]");
    rax -= *(r13);
    __asm ("movdqa xmm3, xmmword [r13 + 0x10]");
    dl = (rdx == 1) ? 1 : 0;
    *((rsp + 0x50)) = xmm2;
    *((rsp + 0x60)) = xmm3;
    r14d &= edx;
    if (rax != 1) {
        goto label_24;
    }
    if (bpl == 0) {
        goto label_24;
    }
    if (*((rsp + 0xc0)) != 0) {
        goto label_24;
    }
    *((rsp + 0x58)) = 0;
    if (r14b != 0) {
        if (*((rsp + 0xd0)) == 0) {
            goto label_25;
        }
    }
label_9:
    rdx = rsp + 0x50;
    esi = 0;
    edi = ebx;
    futimesat ();
label_8:
    r12d = 0;
    goto label_0;
label_20:
    rsi = rbp;
    edi = 1;
    eax = xstat ();
    al = (eax != 0) ? 1 : 0;
    goto label_5;
label_21:
    rax = *((rsp + 0xc0));
    rdx = *((rsp + 0xb8));
    r13d = 3;
    *(rsi) = rdx;
    *((rsi + 8)) = rax;
    goto label_2;
label_12:
    errno_location ();
    *(rax) = 9;
label_11:
    r12d = 0xffffffff;
    goto label_0;
label_22:
    rax = errno_location ();
    if (*(rax) != 0x26) {
        goto label_6;
    }
    goto label_7;
label_24:
    if (r14b == 0) {
        goto label_8;
    }
    if (*((rsp + 0xd0)) != 0) {
        goto label_8;
    }
label_25:
    *((rsp + 0x68)) = 0;
    goto label_9;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x410aa0 */
#include <stdint.h>
 
void fcn_00410aa0 (int64_t arg1, int64_t arg2, int64_t arg7, int64_t arg8) {
    rdi = arg1;
    rsi = arg2;
    xmm0 = arg7;
    xmm1 = arg8;
    rdx = rsi;
    rsi = rdi;
    edi = 0xffffffff;
invalid_funccall(); //    return void (*0x410660)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x410ab0 */
#include <stdint.h>
 
uint64_t fcn_00410ab0 (int64_t arg1, int64_t arg2, int64_t arg7, int64_t arg8) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_48h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    rdi = arg1;
    rsi = arg2;
    xmm0 = arg7;
    xmm1 = arg8;
    r12 = rdi;
    if (rsi == 0) {
        goto label_7;
    }
    __asm ("movdqu xmm0, xmmword [rsi]");
    __asm ("movdqu xmm1, xmmword [rsi + 0x10]");
    *((rsp + 8)) = rdi;
    *((rsp + 0x10)) = xmm0;
    *((rsp + 0x20)) = xmm1;
    eax = fcn_004105a0 (rsp + 0x10);
    ebx = eax;
    if (eax < 0) {
        goto label_3;
    }
    eax = imp.__libc_start_main;
    if (eax < 0) {
        goto label_6;
    }
    if (ebx == 2) {
        goto label_8;
    }
    rdx = *((rsp + 8));
    do {
label_4:
        ecx = 0x100;
        rsi = r12;
        edi = 0xffffff9c;
        eax = utimensat ();
        if (eax <= 0) {
            goto label_9;
        }
        errno_location ();
        *(rax) = 0x26;
label_6:
        *(0x00621b28) = 0xffffffff;
        if (ebx == 0) {
            goto label_10;
        }
        if (ebx != 3) {
            goto label_11;
        }
        if (*((rsp + 8)) != 0) {
label_2:
            ebp = 0;
            al = fcn_004104d0 (rsp + 0x30, rsp + 8);
            if (al != 0) {
                goto label_1;
            }
        }
label_0:
        eax = *((rsp + 0x48));
        eax &= 0xf000;
        if (eax == 0xa000) {
            goto label_12;
        }
        eax = fcn_00410660 (0xffffffff, r12, *((rsp + 8)), rcx, r8);
label_1:
        eax = ebp;
        return rax;
label_7:
        ecx = imp.__libc_start_main;
        edx = 0;
        ebx = 0;
        *((rsp + 8)) = 0;
    } while (ecx >= 0);
    *(0x00621b28) = 0xffffffff;
label_10:
    rdx = rsp + 0x30;
    rsi = r12;
    edi = 1;
    eax = lxstat ();
    if (eax == 0) {
        goto label_0;
    }
    do {
label_3:
        goto label_1;
        if (eax != 0) {
label_9:
            goto label_13;
        }
label_5:
        *(0x00621b2c) = 1;
        eax = ebp;
        *(0x00621b28) = 1;
        return rax;
label_11:
        rdx = rsp + 0x30;
        rsi = r12;
        edi = 1;
        eax = lxstat ();
    } while (eax != 0);
    if (*((rsp + 8)) != 0) {
        goto label_2;
    }
    goto label_0;
label_8:
    rdx = rsp + 0x30;
    rsi = r12;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_3;
    }
    rdx = *((rsp + 8));
    if (*((rdx + 8)) == 0x3ffffffe) {
        goto label_14;
    }
    ebx = 3;
    if (*((rdx + 0x18)) != 0x3ffffffe) {
        goto label_4;
    }
    rax = *((rsp + 0x90));
    rcx = *((rsp + 0x88));
    *((rdx + 0x18)) = rax;
    *((rdx + 0x10)) = rcx;
    goto label_4;
label_14:
    rax = *((rsp + 0x80));
    rcx = *((rsp + 0x78));
    ebx = 3;
    *(rdx) = rcx;
    *((rdx + 8)) = rax;
    goto label_4;
label_13:
    rax = errno_location ();
    if (*(rax) != 0x26) {
        goto label_5;
    }
    goto label_6;
label_12:
    errno_location ();
    *(rax) = 0x26;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x410d00 */
#include <stdint.h>
 
void fcn_00410d00 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x41a212);
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
        /* switch table (10 cases) at 0x41a4f8 */
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
invalid_funccall(); //    void (*0x402f90)() ();
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
invalid_funccall(); //    void (*0x402f90)() ();
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
invalid_funccall(); //    void (*0x402f90)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411160 */
#include <stdint.h>
 
uint64_t fcn_00411160 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00410d00 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4112a0 */
#include <stdint.h>
 
uint32_t fcn_004112a0 (void) {
    if (*(0x00621b31) != 0) {
        eax = *(0x00621b30);
        return eax;
    }
    eax = geteuid ();
    *(0x00621b31) = 1;
    al = (eax == 0) ? 1 : 0;
    *(0x00621b30) = al;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4112e0 */
#include <stdint.h>
 
uint64_t fcn_004112e0 (void * arg1) {
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
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411340 */
#include <stdint.h>
 
uint64_t fcn_00411340 (int64_t arg1, int64_t arg2) {
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
    return fcn_00411530 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4114e0 */
#include <stdint.h>
 
uint64_t fcn_004114e0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_004112e0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411510 */
#include <stdint.h>
 
void fcn_00411510 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
invalid_funccall(); //    return void (*0x4114e0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411530 */
#include <stdint.h>
 
uint64_t fcn_00411530 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0061f468), 0, 0x41aa9b);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411570 */
#include <stdint.h>
 
uint64_t fcn_00411570 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x41a5d8 */
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
    /* switch table (54 cases) at 0x41a758 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4119a0 */
#include <stdint.h>
 
uint64_t fcn_004119a0 (void) {
    int64_t var_8h;
    edx = 0xa;
    ebx = 0;
    rcx = stdin;
    rsi = rsp + 8;
    rdi = rsp;
    *(rsp) = 0;
    *((rsp + 8)) = 0;
    rax = getdelim ();
    if (rax <= 0) {
        goto label_0;
    }
    rdi = *(rsp);
    rax = rdi + rax - 1;
    while (1) {
        eax = rpmatch ();
        bl = (eax > 0) ? 1 : 0;
label_0:
        free (*(rsp));
        eax = ebx;
        return rax;
        *(rax) = 0;
        rdi = *(rsp);
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411a10 */
#include <stdint.h>
 
uint64_t fcn_00411a10 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x00621b34) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_00411a10 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x00621b34) != 0xffffffff) {
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
    eax = fcn_00411a10 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x00621b34) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411b50 */
#include <stdint.h>
 
uint32_t fcn_00411b50 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x402d30)() ();
label_1:
    fcn_00411bc0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411b90 */
#include <stdint.h>
 
int64_t fcn_00411b90 (uint32_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411bc0 */
#include <stdint.h>
 
int64_t fcn_00411bc0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x402eb0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411c20 */
#include <stdint.h>
 
uint64_t fcn_00411c20 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x411d00 */
#include <stdint.h>
 
int64_t fcn_00411d00 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412320 */
#include <stdint.h>
 
uint64_t fcn_00412320 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x41aa21;
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
            fcn_00411c20 (r12, rbx);
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
        fcn_00411c20 (r12, rbx);
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
    eax = fcn_00411d00 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00411d00 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4128f0 */
#include <stdint.h>
 
int32_t fcn_004128f0 (int64_t arg_10h) {
    eax = *(0x0061f4dc);
    *(0x00621b40) = eax;
    eax = *(0x0061f4d8);
    *(0x00621b44) = eax;
    eax = *((rsp + 0x10));
    fcn_00412320 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061f4dc) = edx;
    rdx = imp.__libc_start_main;
    *(0x00621b80) = rdx;
    edx = imp.__libc_start_main;
    *(0x0061f4d4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412970 */
#include <stdint.h>
 
void fcn_00412970 (void) {
    r9d = 0;
    fcn_004128f0 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4129f0 */
#include <stdint.h>
 
uint64_t fcn_004129f0 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00412fc0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412a70 */
#include <stdint.h>
 
uint64_t fcn_00412a70 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rdi;
    r12 = rsp + 0x10;
    *((rsp + 8)) = 0x7d0;
    rax = fcn_00414470 (r12, rsp + 8, rsi, rdx);
    rbx = *((rsp + 8));
    if (rax == 0) {
        goto label_1;
    }
    rdi = rax;
    rax = fwrite (rdi, 1, rbx, r13);
    if (rax < rbx) {
        goto label_2;
    }
    if (rbp != r12) {
        free (rbp);
    }
    if (rbx > 0x7fffffff) {
        goto label_3;
    }
    do {
label_0:
        eax = ebx;
        return rax;
label_2:
        ebx = 0xffffffff;
    } while (rbp == r12);
    rax = errno_location ();
    r13d = *(rax);
    r12 = rax;
    free (rbp);
    *(r12) = r13d;
    goto label_0;
label_3:
    errno_location ();
    *(rax) = 0x4b;
label_1:
    ebx = 0xffffffff;
    fcn_00414460 (r13);
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412b30 */
#include <stdint.h>
 
int32_t fcn_00412b30 (int64_t arg3, int64_t arg4) {
    rdx = arg3;
    rcx = arg4;
    *(rcx) = edx;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412b40 */
#include <stdint.h>
 
int32_t fcn_00412b40 (int64_t arg2, int64_t arg3) {
    rsi = arg2;
    rdx = arg3;
    eax = esi;
    esi = edx;
    if (eax != 0xffffffff) {
        edi = eax;
invalid_funccall(); //        void (*0x402e30)() ();
    }
    return chmod ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412b60 */
#include <stdint.h>
 
int64_t fcn_00412b60 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = rsi;
    edx = *(rdi);
    eax = fcn_00412b40 (rax, edx);
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412ba0 */
#include <stdint.h>
 
uint64_t fcn_00412ba0 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412cc0 */
#include <stdint.h>
 
uint64_t fcn_00412cc0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_0040ec30 (1, rbp);
        rax = fcn_0040e920 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x402e70)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412d40 */
#include <stdint.h>
 
uint64_t fcn_00412d40 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_0040ec50 (r12);
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
    rax = fcn_0040ec50 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412e60 */
#include <stdint.h>
 
uint64_t fcn_00412e60 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_00412ba0 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_00412cc0 (r14, r12, rax);
        fcn_00412d40 (rbx, rbp, r15);
invalid_funccall(); //        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412f20 */
#include <stdint.h>
 
uint64_t fcn_00412f20 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_004143e0 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412f80 */
#include <stdint.h>
 
uint64_t fcn_00412f80 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x412fc0 */
#include <stdint.h>
 
uint64_t fcn_00412fc0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x41aa9e;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413020 */
#include <stdint.h>
 
 
int64_t fcn_00413020 (int64_t arg1) {
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
    rax = rdx_rax / rsi;
    rdx = rdx_rax % rsi;
    rax = rdx;
    return rax;
label_0:
    edx = 0;
    rax = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413060 */
#include <stdint.h>
 
uint64_t fcn_00413060 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x41aa3f;
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
        r15d = 0x41aa3f;
label_2:
        *(0x00621b78) = r15;
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
        r15d = 0x41aa3f;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x417263;
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
    fcn_004143e0 (rbx);
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
        r15d = 0x41aa3f;
        rbx = rax;
        free (r15);
        fcn_004143e0 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4135d0 */
#include <stdint.h>
 
uint64_t fcn_004135d0 (int64_t arg_e0h, int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    uint32_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_28h;
    uint32_t var_2ch;
    uint32_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r15d = edi;
    r14d = r9d;
    r13d = r8d;
    r12d = ecx;
    *((rsp + 8)) = edx;
    rdx = rsp + 0x10;
    if (edi >= 0) {
        esi = edi;
        edi = 1;
        eax = fxstat ();
        ebx = eax;
        if (eax != 0) {
            goto label_5;
        }
        ecx = *((rsp + 0x28));
        eax = *((rsp + 0x28));
        eax &= 0xf000;
        if (eax != 0x4000) {
            goto label_7;
        }
label_6:
        if (r12d == 0xffffffff) {
            goto label_8;
        }
        if (*((rsp + 0x2c)) == r12d) {
            goto label_8;
        }
label_0:
        if (r15d >= 0) {
            goto label_9;
        }
        *((rsp + 0xc)) = ecx;
        edx = r13d;
        esi = r12d;
        rdi = rbp;
        if (*((rsp + 8)) == 0xffffffff) {
            goto label_10;
        }
        eax = lchown ();
        ecx = *((rsp + 0xc));
        ebx = eax;
label_4:
        if (ebx != 0) {
            goto label_1;
        }
label_2:
        if ((cl & 0x49) == 0) {
            goto label_11;
        }
        edx = ecx;
        edx &= 0xc00;
        goto label_12;
    }
    edi = 1;
    eax = xstat ();
    ebx = eax;
    if (eax == 0) {
        goto label_13;
    }
    do {
label_1:
        eax = ebx;
        return eax;
label_7:
        errno_location ();
        r12d = 0x14;
        ebx = 0xffffffff;
        *(rax) = 0x14;
label_3:
        close (r15d);
        *(rbp) = r12d;
    } while (1);
label_8:
    if (r13d == 0xffffffff) {
        goto label_11;
    }
    if (*((rsp + 0x30)) != r13d) {
        goto label_0;
    }
label_11:
    edx = 0;
label_12:
    eax = ecx;
    eax ^= r14d;
    eax |= edx;
    if ((*((rsp + 0xe0)) & eax) == 0) {
        goto label_14;
    }
    esi = *((rsp + 0xe0));
    esi = ~esi;
    esi &= ecx;
    esi &= 0xfff;
    esi |= r14d;
    if (r15d >= 0) {
        goto label_15;
    }
    eax = chmod (rbp, rsi);
    ebx = eax;
    goto label_1;
label_9:
    edx = r13d;
    esi = r12d;
    edi = r15d;
    *((rsp + 0xc)) = ecx;
    eax = fchown ();
    ecx = *((rsp + 0xc));
    ebx = eax;
    if (eax == 0) {
        goto label_2;
    }
label_5:
    rax = errno_location ();
    r12d = *(rax);
    goto label_3;
label_14:
    ebx = 0;
    if (r15d < 0) {
        goto label_1;
    }
    do {
        eax = close (r15d);
        ebx = eax;
        goto label_1;
label_10:
        eax = chown ();
        ecx = *((rsp + 0xc));
        ebx = eax;
        goto label_4;
label_15:
        eax = fchmod (r15d, rsi);
        ebx = eax;
    } while (eax == 0);
    goto label_5;
label_13:
    ecx = *((rsp + 0x28));
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_6;
    }
    errno_location ();
    ebx |= 0xffffffff;
    *(rax) = 0x14;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413800 */
#include <stdint.h>
 
uint64_t fcn_00413800 (void) {
    rax = fcn_00413a20 (rdi, rsi);
    rbx = rax;
    eax = 0;
    if (rbx != 0) {
        fcn_004112e0 (0x18);
        *(rax) = rbx;
        *((rax + 0x10)) = 0;
        *((rax + 8)) = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413840 */
#include <stdint.h>
 
int64_t fcn_00413840 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    r14 = rsi + 1;
    r13 = rsi;
    r12 = *(rdi);
    rbp = *((rdi + 8));
    rbx = *((rdi + 0x10));
    while (rbx >= r13) {
        if (rbx == r13) {
            goto label_1;
        }
label_0:
        rax = rbx;
        edx = 0;
        rax -= r13;
        rax = rdx_rax / r14;
        rdx = rdx_rax % r14;
        rsi = rdx;
        rcx = rax;
        rbx -= rdx;
        rax = rbp;
        edx = 0;
        rax = rdx_rax / r14;
        rdx = rdx_rax % r14;
        if (rbp <= rbx) {
            goto label_2;
        }
        rbx = rsi - 1;
    }
    rax = rbx;
    edx = 0;
    do {
        rax <<= 8;
        rdx++;
        rax += 0xff;
    } while (r13 > rax);
    fcn_00413d30 (r12, rsp + 8, rdx);
    rax = rsp + 8;
    do {
        edx = *(rax);
        rbx <<= 8;
        rbp <<= 8;
        rax++;
        rbx += 0xff;
        rbp += rdx;
    } while (r13 > rbx);
    if (rbx != r13) {
        goto label_0;
    }
label_1:
    *((r15 + 0x10)) = 0;
    *((r15 + 8)) = 0;
    do {
        rax = rbp;
        return rax;
label_2:
        *((r15 + 8)) = rax;
        *((r15 + 0x10)) = rcx;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413960 */
#include <stdint.h>
 
uint64_t fcn_00413960 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fcn_00413e90 (*(rdi));
    r12d = eax;
    rax = errno_location ();
    rdi = rbx;
    esi = 0x18;
    rdx = 0xffffffffffffffff;
    r13d = *(rax);
    explicit_bzero_chk ();
    free (rbx);
    *(rbp) = r13d;
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413a20 */
#include <stdint.h>
 
uint64_t fcn_00413a20 (int64_t arg1, int64_t arg2) {
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
    rax = fcn_00415f90 (rdi, 0x41ab5c);
    r13 = rax;
    if (rax == 0) {
        goto label_5;
    }
    fcn_004112e0 (0x1038);
    ecx = 0x1000;
    rdi = r13;
    *(rax) = r13;
    if (rbp <= 0x1000) {
        rcx = rbp;
    }
    *((rax + 8)) = 0x4139c0;
    rbx = rax;
    *((rax + 0x10)) = r12;
    setvbuf (rdi, rax + 0x18, 0, rcx);
    do {
label_0:
        rax = rbx;
        return rax;
label_4:
        fcn_004112e0 (0x1038);
        *(rax) = 0;
        rbx = rax;
        r13 = rax + 0x20;
        *((rax + 8)) = 0x4139c0;
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
        fcn_00414190 (r13);
    } while (1);
label_3:
    rax = fcn_004112e0 (0x1038);
    rbx = rax;
    *(rax) = 0;
    *((rax + 8)) = 0x4139c0;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413d30 */
#include <stdint.h>
 
uint64_t fcn_00413d30 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        fcn_00413ee0 (r14, r13);
    } while (rbx > 0x800);
    goto label_4;
    do {
        rbp += 0x800;
        fcn_00413ee0 (r14, rbp);
        rbx -= 0x800;
        if (rbx == 0) {
            goto label_5;
        }
INVALID_JUMP;
    } while (rbx > 0x7ff);
    fcn_00413ee0 (r14, r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413e90 */
#include <stdint.h>
 
uint32_t fcn_00413e90 (int64_t arg1) {
    rdi = arg1;
    rdx = 0xffffffffffffffff;
    esi = 0x1038;
    rbx = rdi;
    rbp = *(rdi);
    explicit_bzero_chk ();
    eax = free (rbx);
    if (rbp != 0) {
        rdi = rbp;
invalid_funccall(); //        void (*0x4143e0)() ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x413ee0 */
#include <stdint.h>
 
int64_t fcn_00413ee0 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x414190 */
#include <stdint.h>
 
int64_t fcn_00414190 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4143d0 */
#include <stdint.h>
 
int32_t fcn_004143d0 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
invalid_funccall(); //    return void (*0x411a10)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x4143e0 */
#include <stdint.h>
 
uint64_t fcn_004143e0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00411b50 (rbx);
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
invalid_funccall(); //    void (*0x4029d0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x414460 */
#include <stdint.h>
 
void fcn_00414460 (int64_t arg1) {
    rdi = arg1;
    *(rdi) |= 0x20;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x414470 */
#include <stdint.h>
 
uint64_t fcn_00414470 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
    eax = fcn_00416250 (r15, rbp - 0x580, rbp - 0x670);
    if (eax < 0) {
        goto label_58;
    }
    eax = fcn_00416030 (rbx, rbp - 0x670);
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
    /* switch table (18 cases) at 0x41ab60 */
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
    /* switch table (5 cases) at 0x41abf0 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x415f90 */
#include <stdint.h>
 
uint64_t fcn_00415f90 (int64_t arg2, const char * filename) {
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
        eax = fcn_004143d0 (eax, rsi);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_004143e0 (rbx);
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
    fcn_004143e0 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x416030 */
#include <stdint.h>
 
int64_t fcn_00416030 (int64_t arg1, uint32_t arg2) {
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
        /* switch table (23 cases) at 0x41ac20 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x416250 */
#include <stdint.h>
 
uint64_t fcn_00416250 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    /* switch table (84 cases) at 0x41ad00 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x416fd0 */
#include <stdint.h>
 
int64_t fcn_00416fd0 (void) {
    rax = 0x61f428;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_install.elf @ 0x416fe8 */
#include <stdint.h>
 
void fcn_00416fe8 (int64_t arg3) {
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
