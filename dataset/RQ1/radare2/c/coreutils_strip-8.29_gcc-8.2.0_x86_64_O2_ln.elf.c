/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x402210 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int64_t var_8h;
    int64_t var_10h;
    uint32_t var_18h;
    uint32_t var_1fh;
    int64_t var_20h;
    int64_t var_38h;
    rdi = argc;
    rsi = argv;
    r15d = 0;
    r14d = 0;
    r13d = 0;
    r12d = 0;
    ebx = edi;
    fcn_00406260 (*(rsi));
    setlocale (6, 0x40e307);
    bindtextdomain (0x40bcb9, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40bcb9, rsi);
    edi = 0x404960;
    fcn_0040bb40 ();
    *(0x006113e0) = 0;
    *(0x006113e1) = 0;
    *(0x006113e3) = 0;
    *(0x006113e2) = 0;
    *(0x006113e6) = 0;
    *((rsp + 8)) = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x40cc00;
        edx = "bdfinrst:vFLPS:T";
        rsi = rbp;
        edi = ebx;
        eax = fcn_0040a1b0 ();
        if (eax == 0xffffffff) {
            goto label_7;
        }
        if (eax == 0x62) {
            goto label_8;
        }
        if (eax <= 0x62) {
            goto label_9;
        }
        if (eax == 0x6e) {
            goto label_10;
        }
        if (eax <= 0x6e) {
            goto label_11;
        }
        if (eax == 0x73) {
            goto label_12;
        }
        if (eax <= 0x73) {
            goto label_13;
        }
        if (eax != 0x74) {
            goto label_14;
        }
        if (r13 != 0) {
            goto label_15;
        }
        rsi = imp.__libc_start_main;
        rdx = rsp + 0x20;
        edi = 1;
        eax = xstat ();
        if (eax != 0) {
            goto label_16;
        }
        eax = *((rsp + 0x38));
        r13 = imp.__libc_start_main;
        eax &= 0xf000;
    } while (eax == 0x4000);
    rax = fcn_00407c30 (4, r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    rax = error (1, 0, rax);
label_9:
    if (eax == 0x4c) {
        goto label_17;
    }
    if (eax <= 0x4c) {
        goto label_18;
    }
    if (eax == 0x53) {
        goto label_19;
    }
    if (eax == 0x54) {
        r12d = 1;
        goto label_0;
label_14:
        if (eax != 0x76) {
            goto label_1;
        }
        *(0x006113e1) = 1;
        goto label_0;
    }
    if (eax == 0x50) {
        goto label_20;
    }
    do {
label_1:
        eax = fcn_004032b0 (1);
label_18:
        if (eax == 0xffffff7e) {
            goto label_21;
        }
        if (eax == 0x46) {
            goto label_22;
        }
    } while (eax != 0xffffff7d);
    eax = 0;
    rcx = *(str.8.29);
    r9d = "David MacKenzie";
    r8d = "Mike Parker";
    fcn_00408910 (*(obj.stdout), 0x40bc39, "GNU coreutils");
    eax = exit (0);
label_13:
    if (eax != 0x72) {
        goto label_1;
    }
    *(0x006113e5) = 1;
    goto label_0;
label_11:
    if (eax == 0x66) {
        goto label_23;
    }
    if (eax == 0x69) {
        *(0x006113e2) = 0;
        *(0x006113e3) = 1;
        goto label_0;
    }
    if (eax != 0x64) {
        goto label_1;
    }
label_22:
    *(0x006113e0) = 1;
    goto label_0;
label_23:
    *(0x006113e2) = 1;
    *(0x006113e3) = 0;
    goto label_0;
label_12:
    *(0x006113e6) = 1;
    goto label_0;
label_10:
    *(0x006112f0) = 0;
    goto label_0;
label_8:
    rax = imp.__libc_start_main;
    r14d = 1;
    if (rax != 0) {
        r15 = rax;
    }
    goto label_0;
label_19:
    rax = imp.__libc_start_main;
    r14d = 1;
    *((rsp + 8)) = rax;
    goto label_0;
label_17:
    *(0x006113e4) = 1;
    goto label_0;
label_20:
    *(0x006113e4) = 0;
    goto label_0;
label_7:
    rax = *(0x0061137c);
    ebx -= eax;
    rbp = rbp + rax*8;
    if (ebx <= 0) {
        goto label_24;
    }
    if (r12b != 0) {
        goto label_25;
    }
    if (r13 == 0) {
        goto label_26;
    }
    do {
label_3:
        eax = 0;
        if (r14b != 0) {
            goto label_27;
        }
label_2:
        *(0x006113e8) = eax;
        fcn_00403ce0 (*((rsp + 8)));
        if (*(0x006113e5) != 0) {
            if (*(0x006113e6) == 0) {
                goto label_28;
            }
        }
        if (r13 == 0) {
            goto label_29;
        }
        if (ebx == 1) {
            goto label_30;
        }
        if (*(0x006113e2) == 0) {
            goto label_30;
        }
        if (*(0x006113e6) != 0) {
            goto label_30;
        }
        if (*(0x006113e8) == 3) {
            goto label_30;
        }
        rax = fcn_004057d0 (0x3d, 0, 0x406190, 0x4061d0, 0x406240);
        *(0x006113d8) = rax;
        if (rax != 0) {
            goto label_30;
        }
        fcn_00408ca0 ();
label_25:
        if (r13 != 0) {
            goto label_31;
        }
        if (ebx != 2) {
            goto label_32;
        }
label_4:
        ebx = 2;
        r13d = 0;
    } while (1);
label_30:
    eax = rbx - 1;
    r14d = 1;
    r12 = rsp + 0x20;
    r15 = rbp + rax*8 + 8;
    do {
        rbp += 8;
        rax = fcn_00404ca0 (*(rbp));
        rdx = r12;
        rdi = r13;
        rsi = rax;
        rax = fcn_00404e40 ();
        rbx = rax;
        fcn_00404d30 (*((rsp + 0x20)));
        eax = fcn_00402a30 (*((rbp - 8)), rbx);
        r14d &= eax;
        free (rbx);
    } while (rbp != r15);
    do {
        r14d ^= 1;
        eax = (int32_t) r14b;
        return rax;
label_27:
        edx = 5;
        rax = dcgettext (0, "backup type");
        rsi = r15;
        fcn_00404280 (rax);
        goto label_2;
label_29:
        eax = fcn_00402a30 (*(rbp), *((rbp + 8)));
        r14d = eax;
    } while (1);
label_26:
    r13d = 0x40ce0b;
    if (ebx == 1) {
        goto label_3;
    }
    rax = (int64_t) ebx;
    rax = rbp + rax*8 - 8;
    r13 = *(rax);
    *((rsp + 0x10)) = rax;
    rax = fcn_00404ca0 (r13);
    rcx |= 0xffffffffffffffff;
    rdi = rax;
    rdx = rax;
    eax = r12d;
    __asm ("repne scasb al, byte [rdi]");
    *((rsp + 0x18)) = 1;
    rax = rcx;
    rax = ~rax;
    rax--;
    if (rax != 0) {
        al = (*((rdx + rax - 1)) == 0x2f) ? 1 : 0;
        eax = (int32_t) al;
        *((rsp + 0x18)) = eax;
    }
    eax = *((rsp + 0x18));
    r12 = rsp + 0x20;
    rsi = r13;
    edi = 1;
    rdx = r12;
    eax &= 1;
    *((rsp + 0x1f)) = al;
    if (*(0x006112f0) == 0) {
        goto label_33;
    }
    eax = xstat ();
label_6:
    if (eax == 0) {
        goto label_34;
    }
    rax = errno_location ();
    r12d = *(rax);
    if (r12d == 0) {
        goto label_34;
    }
    if (r12d > 0x28) {
        goto label_35;
    }
    rax = 0x11000100004;
    if (((rax >> r12) & 1) >= 0) {
        goto label_35;
    }
    if (*((rsp + 0x18)) != 0) {
        goto label_36;
    }
label_5:
    if (ebx == 2) {
        goto label_4;
    }
    rax = *((rsp + 0x10));
    rax = fcn_00407c30 (4, *(rax));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_34:
    eax = *((rsp + 0x38));
    eax &= 0xf000;
    dl = (eax == 0x4000) ? 1 : 0;
    if (dl < *((rsp + 0x1f))) {
        goto label_37;
    }
    if (eax != 0x4000) {
        goto label_5;
    }
    ebx--;
    rax = (int64_t) ebx;
    r13 = *((rbp + rax*8));
    goto label_3;
label_33:
    lxstat ();
    goto label_6;
label_21:
    fcn_004032b0 (0);
label_35:
    rax = fcn_00407c30 (4, r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to access %s");
    rcx = rbx;
    eax = 0;
    error (1, r12d, rax);
label_37:
    r12d = 0;
label_36:
    rax = fcn_00407c30 (4, r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "target %s is not a directory");
    rcx = rbx;
    eax = 0;
    error (1, r12d, rax);
label_24:
    edx = 5;
    rax = dcgettext (0, "missing file operand");
    eax = 0;
    error (0, 0, rax);
    goto label_1;
label_32:
    ebx--;
    if (ebx == 0) {
        goto label_38;
    }
    rax = fcn_00407c30 (4, *((rbp + 0x10)));
    edx = 5;
    rbx = rax;
    do {
        rax = dcgettext (0, "extra operand %s");
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        goto label_1;
label_31:
        edx = 5;
        rax = dcgettext (0, "cannot combine --target-directory and --no-target-directory");
        eax = 0;
        error (1, 0, rax);
label_38:
        rax = fcn_00407c30 (4, *(rbp));
        edx = 5;
        esi = "missing destination file operand after %s";
        rbx = rax;
    } while (1);
label_28:
    edx = 5;
    rax = dcgettext (0, "cannot do --relative without --symbolic");
    eax = 0;
    error (1, 0, rax);
label_16:
    rax = fcn_00407c30 (4, *(0x006115a0));
    edx = 5;
    rax = dcgettext (0, "failed to access %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_15:
    edx = 5;
    rax = dcgettext (0, "multiple target directories specified");
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40297b */
#include <stdint.h>
 
int32_t fcn_0040297b (void) {
    eax = 0x611388;
    if (rax != 0x611388) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x611388;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4029d1 */
#include <stdint.h>
 
int64_t fcn_004029d1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x006113c8) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x610e48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x006113d0) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040297b ();
    *(0x006113c8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x402a28 */
#include <stdint.h>
 
int64_t fcn_00402a28 (void) {
    do {
        esi = 0x611388;
        ecx = 2;
        rsi -= 0x611388;
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
            edi = 0x611388;
            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x402a30 */
#include <stdint.h>
 
uint64_t fcn_00402a30 (int64_t arg1, int64_t arg2) {
    void * errname;
    void * var_10h;
    void * ptr;
    uint32_t var_20h;
    uint32_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    int64_t var_b0h;
    int64_t var_b8h;
    int64_t var_c8h;
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    ebx = *(0x006113e6);
    if (bl == 0) {
        rsi = rdi;
        rdx = rsp + 0x20;
        edi = 1;
        if (*(0x006113e4) == 0) {
            goto label_18;
        }
        eax = xstat ();
        al = (eax != 0) ? 1 : 0;
        if (al != 0) {
            goto label_19;
        }
label_3:
        eax = *((rsp + 0x38));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_20;
        }
    }
    r15d = 0;
label_9:
    r13d = *(0x006113e2);
    if (r13b == 0) {
        if (*(0x006113e3) == 0) {
            goto label_21;
        }
    }
label_2:
    rdx = rsp + 0xb0;
    rsi = rbp;
    edi = 1;
    eax = lxstat ();
    r14d = eax;
    if (eax == 0) {
        goto label_22;
    }
    rax = errno_location ();
    if (*(rax) != 2) {
        goto label_23;
    }
    if (r13b == 0) {
        goto label_24;
    }
    do {
label_1:
        ebx = 0;
        r13d = 0;
label_0:
        r14d = 0;
        if (*(0x006113e5) != 0) {
            goto label_25;
        }
label_7:
        bl |= *(0x006113e2);
        r9d = (int32_t) bl;
        if (*(0x006113e6) != 0) {
            goto label_26;
        }
        r8b = (*(0x006113e4) != 0) ? 1 : 0;
        r8d <<= 0xa;
        eax = fcn_00403750 (edx, r12, 0xffffff9c, rbp, 0, r9);
        eax = ~eax;
        ebx = eax;
        ebx >>= 0x1f;
label_6:
        if (bl == 0) {
            goto label_27;
        }
        if (*(0x006113e6) == 0) {
            goto label_28;
        }
label_11:
        if (*(0x006113e1) != 0) {
            if (r13 != 0) {
                rax = fcn_00407c30 (4, r13);
                esi = "%s ~ ";
                edi = 1;
                rdx = rax;
                eax = 0;
                printf_chk ();
            }
            r12d = 0x3d;
            rax = fcn_00407b50 (1, 4, r12);
            ecx = 0x2d;
            rdx = rbp;
            if (*(0x006113e6) != 0) {
                r12d = ecx;
            }
            r15 = rax;
            rax = fcn_00407b50 (0, 4, rdx);
            r8 = r15;
            esi = "%s %c> %s\n";
            edi = 1;
            rdx = rax;
            ecx = r12d;
            eax = 0;
            printf_chk ();
        }
label_5:
        free (r13);
        free (r14);
label_4:
        eax = ebx;
        return rax;
label_22:
        rdi = imp.__libc_start_main;
        if (rdi != 0) {
            al = fcn_00404e00 (rdi, rbp, rsp + 0xb0);
            if (al != 0) {
                goto label_29;
            }
            r13d = *(0x006113e2);
        }
        if (r13b == 0) {
            goto label_30;
        }
        edx = imp.__libc_start_main;
        if (edx != 0) {
            goto label_31;
        }
        if (*(0x006113e6) == 0) {
            goto label_13;
        }
        rdx = rsp + 0x20;
        rsi = r12;
        edi = 1;
        eax = xstat ();
        if (eax == 0) {
            goto label_13;
        }
label_8:
        eax = *((rsp + 0xc8));
        eax &= 0xf000;
        if (eax == 0x4000) {
            goto label_32;
        }
        ebx = *(0x006113e3);
        if (bl != 0) {
            goto label_33;
        }
label_12:
        esi = imp.__libc_start_main;
    } while (esi == 0);
    rdi = rbp;
    rax = fcn_00404240 ();
    rsi = rax;
    r13 = rax;
    eax = rename (rbp, rsi);
    if (eax != 0) {
        goto label_34;
    }
    bl = (r13 != 0) ? 1 : 0;
    goto label_0;
label_21:
    esi = imp.__libc_start_main;
    if (esi == 0) {
        goto label_1;
    }
    goto label_2;
label_18:
    eax = lxstat ();
    al = (eax != 0) ? 1 : 0;
    if (al == 0) {
        goto label_3;
    }
label_19:
    rax = fcn_00407c30 (4, r12);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "failed to access %s");
    rax = errno_location ();
    rcx = r12;
    eax = 0;
    error (0, *(rax), rbp);
    goto label_4;
label_27:
    rax = fcn_00407b50 (1, 4, r12);
    *((rsp + 0x10)) = rax;
    rax = fcn_00407b50 (0, 4, rbp);
    *((rsp + 0x18)) = rax;
    rax = errno_location ();
    *((rsp + 8)) = rax;
    if (*(0x006113e6) == 0) {
        goto label_35;
    }
    edx = 5;
    if (*(rax) != 0x24) {
        if (*(r12) != 0) {
            goto label_36;
        }
    }
    rax = dcgettext (0, "failed to create symbolic link %s -> %s");
    rdx = rax;
label_10:
    rax = *((rsp + 8));
    r8 = *((rsp + 0x10));
    rcx = *((rsp + 0x18));
    eax = 0;
    error (0, *(rax), rdx);
    if (r13 == 0) {
        goto label_5;
    }
    eax = rename (r13, rbp);
    if (eax == 0) {
        goto label_5;
    }
    rax = fcn_00407c30 (4, rbp);
    edx = 5;
    rax = dcgettext (0, "cannot un-backup %s");
    rcx = rbp;
    rdx = rax;
    rax = *((rsp + 8));
    eax = 0;
    error (0, *(rax), rdx);
    goto label_5;
label_26:
    eax = fcn_00403890 (r12, 0xffffff9c, rbp, r9d);
    eax = ~eax;
    ebx = eax;
    ebx >>= 0x1f;
    goto label_6;
label_25:
    rdi = rbp;
    rax = fcn_00404bc0 ();
    rdi = rax;
    *((rsp + 0x18)) = rax;
    rax = fcn_004042d0 (rdi, 2);
    r14 = rax;
    *((rsp + 8)) = rax;
    rax = fcn_004042d0 (r12, 2);
    *((rsp + 0x10)) = rax;
    if (r14 == 0) {
        goto label_37;
    }
    if (rax == 0) {
        goto label_37;
    }
    rax = fcn_00408a50 (0x1000);
    rdx = rax;
    r14 = rax;
    al = fcn_00403a10 (*((rsp + 0x10)), *((rsp + 8)), rdx, 0x1000);
    if (al == 0) {
        goto label_38;
    }
    free (*((rsp + 0x18)));
    free (*((rsp + 8)));
    free (*((rsp + 0x10)));
    if (r14 == 0) {
        goto label_39;
    }
    r12 = r14;
    goto label_7;
label_24:
    if (bl == 0) {
        goto label_40;
    }
label_14:
    if (r14d == 0) {
        goto label_8;
    }
    goto label_1;
label_20:
    r15d = *(0x006113e0);
    if (r15b != 0) {
        goto label_9;
    }
    rax = fcn_00407d00 (0, 3, r12);
    edx = 5;
    rbx = rax;
label_15:
    rax = dcgettext (0, "%s: hard link not allowed for directory");
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, 0, rax);
    goto label_4;
label_30:
    if (*(0x006113e6) != 0) {
        goto label_8;
    }
    eax = imp.__libc_start_main;
    if (eax == 0) {
        goto label_8;
    }
label_13:
    rax = *((rsp + 0xb8));
    if (*((rsp + 0x28)) != rax) {
        goto label_8;
    }
    rax = *((rsp + 0xb0));
    if (*((rsp + 0x20)) != rax) {
        goto label_8;
    }
    if (*((rsp + 0x30)) == 1) {
        goto label_41;
    }
    al = fcn_004080f0 (r12, rbp);
    if (al == 0) {
        goto label_8;
    }
label_41:
    rax = fcn_00407b50 (1, 4, rbp);
    rax = fcn_00407b50 (0, 4, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s and %s are the same file");
    r8 = rbp;
label_17:
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, 0, rax);
    goto label_4;
label_35:
    rax = *((rsp + 8));
    eax = *(rax);
    if (eax == 0x1f) {
        goto label_42;
    }
    if (eax != 0x7a) {
        if (eax == 0x11) {
            goto label_43;
        }
        eax &= 0xfffffffd;
        if (eax == 0x1c) {
            goto label_43;
        }
label_16:
        edx = 5;
        rax = dcgettext (0, "failed to create hard link %s => %s");
        rdx = rax;
        goto label_10;
label_38:
        free (r14);
label_37:
        free (*((rsp + 0x18)));
        free (*((rsp + 8)));
        free (*((rsp + 0x10)));
label_39:
        rax = fcn_00408c80 (r12);
        r12 = rax;
        r14 = rax;
        goto label_7;
    }
label_43:
    edx = 5;
    rax = dcgettext (0, "failed to create hard link %s");
    rdx = rax;
    goto label_10;
label_28:
    rax = fcn_00404d70 (*(0x006113d8), rbp, rsp + 0x20);
    goto label_11;
label_23:
    *((rsp + 8)) = rax;
    rax = fcn_00407c30 (4, rbp);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "failed to access %s");
    r8 = *((rsp + 8));
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, *(r8), rax);
    goto label_4;
label_33:
    rax = fcn_00407c30 (4, rbp);
    edx = 5;
    r13 = imp.__libc_start_main;
    r14 = rax;
    rax = dcgettext (0, "%s: replace %s? ");
    r8 = r14;
    rcx = r13;
    esi = 1;
    rdi = stderr;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
    al = fcn_00408d10 ();
    if (al == 0) {
        goto label_4;
    }
    *(0x006113e2) = 1;
    goto label_12;
label_31:
    if (*(0x006113e6) != 0) {
        goto label_8;
    }
    goto label_13;
label_40:
    ecx = imp.__libc_start_main;
    if (ecx != 0) {
        goto label_1;
    }
    goto label_14;
label_32:
    rax = fcn_00407d00 (0, 3, rbp);
    edx = 5;
    esi = "%s: cannot overwrite directory";
    rbx = rax;
    goto label_15;
label_42:
    if (r15b != 0) {
        goto label_16;
    }
    edx = 5;
    rax = dcgettext (0, "failed to create hard link to %.0s%s");
    rdx = rax;
    goto label_10;
label_29:
    rax = fcn_00407b50 (1, 4, r12);
    r12 = rax;
    rax = fcn_00407b50 (0, 4, rbp);
    edx = 5;
    rbx = rax;
    dcgettext (0, "will not overwrite just-created %s with %s");
    r8 = r12;
    goto label_17;
label_34:
    rax = errno_location ();
    ebx = *(rax);
    free (r13);
    if (ebx == 2) {
        goto label_1;
    }
    rax = fcn_00407c30 (4, rbp);
    edx = 5;
    rax = dcgettext (0, "cannot backup %s");
    esi = ebx;
    rcx = rbp;
    eax = 0;
    ebx = 0;
    error (0, esi, rax);
    goto label_4;
label_36:
    rax = dcgettext (0, "failed to create symbolic link %s");
    rdx = rax;
    goto label_10;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4032b0 */
#include <stdint.h>
 
uint64_t fcn_004032b0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION]... [-T] TARGET LINK_NAME   (1st form)\n  or:  %s [OPTION]... TARGET                  (2nd form)\n  or:  %s [OPTION]... TARGET... DIRECTORY     (3rd form)\n  or:  %s [OPTION]... -t DIRECTORY TARGET...  (4th form)\n");
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
    rax = dcgettext (0, "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.\n");
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
    rax = dcgettext (0, "      --backup[=CONTROL]      make a backup of each existing destination file\n  -b                          like --backup but does not accept an argument\n  -d, -F, --directory         allow the superuser to attempt to hard link\n                                directories (note: will probably fail due to\n                                system restrictions, even for the superuser)\n  -f, --force                 remove existing destination files\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -i, --interactive           prompt whether to remove destinations\n  -L, --logical               dereference TARGETs that are symbolic links\n  -n, --no-dereference        treat LINK_NAME as a normal file if\n                                it is a symbolic link to a directory\n  -P, --physical              make hard links directly to symbolic links\n  -r, --relative              create symbolic links relative to link location\n  -s, --symbolic              make symbolic links instead of hard links\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -S, --suffix=SUFFIX         override the usual backup suffix\n  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n                                the links\n  -T, --no-target-directory   treat LINK_NAME as a normal file always\n  -v, --verbose               print name of each linked file\n");
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
    edx = 5;
    rbp = stdout;
    rax = dcgettext (0, "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "\nUsing -s ignores -L and -P.  Otherwise, the last option specified controls\nbehavior when a TARGET is a symbolic link, defaulting to %s.\n");
    edx = 0x40bc3c;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    *(rsp) = 0x40bc3f;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40bcb9;
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
        esi = 0x40bc39;
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
        eax = strncmp (rax, 0x40bcc3, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40bc5b;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x40bc39;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40e307;
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
            eax = strncmp (rax, 0x40bcc3, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x40bc39;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40bc5b;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x40bc39;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4036c0 */
#include <stdint.h>
 
uint64_t fcn_004036c0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rbx = rsi;
    rax = fcn_00404ca0 (rdi);
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
    edx = *(0x0040ce08);
    *((rax + 8)) = dl;
    rax = rbx;
    do {
        return rax;
label_0:
        eax = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x403750 */
#include <stdint.h>
 
uint64_t fcn_00403750 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = fcn_004036c0 (r12, rsp + 0x30);
        rbx = rax;
        if (rax == 0) {
            goto label_2;
        }
        *((rsp + 0x10)) = r15d;
        *((rsp + 0x18)) = r14;
        *((rsp + 0x20)) = ebp;
        *((rsp + 0x24)) = r13d;
        eax = fcn_004082d0 (rax, 0, rsp + 0x10, 0x4036a0, 6);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x403890 */
#include <stdint.h>
 
uint64_t fcn_00403890 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rax = fcn_004036c0 (r12, r15);
        rbx = rax;
        if (rax == 0) {
            goto label_3;
        }
        *(rsp) = r13;
        *((rsp + 8)) = ebp;
        eax = fcn_004082d0 (rax, 0, rsp, 0x403730, 6);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x403990 */
#include <stdint.h>
 
uint64_t fcn_00403990 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = rdi;
    r13 = *(rsi);
    if (r13 != 0) {
        r12 = rdx;
        rax = strlen (rdi);
        rbx = rax;
        eax = 1;
        if (*(r12) <= rbx) {
            return rax;
        }
        eax = memcpy (r13, r14, rbx + 1);
        *(rbp) += rbx;
        eax = 0;
        *(r12) -= rbx;
        return rax;
    }
    rsi = stdout;
    eax = fputs_unlocked ();
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x403a10 */
#include <stdint.h>
 
uint64_t fcn_00403a10 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8d = *((rsi + 1));
    r9d = *((rdi + 1));
    *(rsp) = rcx;
    *((rsp + 8)) = rdx;
    cl = (r8b == 0x2f) ? 1 : 0;
    dl = (r9b == 0x2f) ? 1 : 0;
    eax = 0;
    if (cl != dl) {
        goto label_7;
    }
    edx = *(rdi);
    r10d = *(rsi);
    cl = (dl == 0) ? 1 : 0;
    if (r10b == 0) {
        goto label_7;
    }
    al = (r10b != dl) ? 1 : 0;
    al |= cl;
    if (al != 0) {
        goto label_8;
    }
    ecx = 2;
    edx = 0;
    while (r8b != 0) {
        if (r8b != r9b) {
            goto label_9;
        }
        if (r10b != 0) {
            goto label_9;
        }
        r11d = *((rsi + rcx));
        r9d = *((rdi + rcx));
        r10d = r8d;
        rcx++;
        r8d = r11d;
        r11d = rcx - 1;
        if (r10b == 0x2f) {
            edx = r11d;
        }
        r10b = (r9b == 0) ? 1 : 0;
    }
    if (r9b == 0x2f) {
        goto label_10;
    }
    if (r10b != 0) {
        goto label_10;
    }
    do {
label_0:
        if (edx != 0) {
label_6:
            rdx = (int64_t) edx;
            rbp = rsi + rdx;
            rbx = rdi + rdx;
            eax = *(rbp);
            if (al == 0x2f) {
                eax = *((rbp + 1));
                rbp++;
            }
            edx = 0;
            dl = (*(rbx) == 0x2f) ? 1 : 0;
            rbx += rdx;
            if (al != 0) {
                goto label_11;
            }
            eax = 0x40ce0b;
            rsi = rsp + 8;
            rdx = rsp;
            if (*(rbx) == 0) {
                rbx = rax;
            }
            eax = fcn_00403990 (rbx, rsi, rdx);
            r12d = eax;
label_1:
            if (r12b != 0) {
                goto label_12;
            }
label_5:
            eax = r12d;
            eax ^= 1;
        }
label_7:
        return eax;
label_9:
    } while (r8b != 0x2f);
    if (r10b == 0) {
        goto label_0;
    }
    goto label_10;
label_11:
    eax = fcn_00403990 (0x40ce0a, rsp + 8, rsp);
    r12d = eax;
    eax = *(rbp);
    if (al != 0) {
        goto label_13;
    }
label_2:
    if (*(rbx) == 0) {
        goto label_1;
    }
    eax = fcn_00403990 (0x40d01e, rsp + 8, rsp);
    eax = fcn_00403990 (rbx, rsp + 8, rsp);
    ebp |= eax;
    r12d |= ebp;
    goto label_1;
label_4:
    eax = fcn_00403990 (0x40ce09, rsp + 8, rsp);
    r12d |= eax;
label_3:
    rbp++;
    eax = *(rbp);
    if (al == 0) {
        goto label_2;
    }
label_13:
    if (al != 0x2f) {
        goto label_3;
    }
    goto label_4;
label_12:
    edx = 5;
    rax = dcgettext (0, "generating relative path");
    rcx = rax;
    eax = 0;
    eax = error (0, 0x24, 0x40e363);
    goto label_5;
label_10:
    edx = r11d;
    goto label_6;
label_8:
    eax = 0;
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x403c10 */
#include <stdint.h>
 
uint64_t fcn_00403c10 (int64_t arg1, void ** arg2) {
    rdi = arg1;
    rsi = arg2;
    r13 = rsi;
    rbx = rdi;
    rax = fcn_00404ca0 (rdi);
    rdi = rax;
    rax = fcn_00404d00 (rdi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x403ce0 */
#include <stdint.h>
 
uint64_t fcn_00403ce0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    if (rdi == 0) {
        goto label_2;
    }
label_1:
    while (rax != rbx) {
label_0:
        ebx = 0x40ce2b;
        *(0x006113f0) = rbx;
        return;
        rax = fcn_00404ca0 (rbx);
    }
    *(0x006113f0) = rbx;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x403d40 */
#include <stdint.h>
 
uint64_t fcn_00403d40 (void * arg1, uint32_t arg2) {
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
    rax = fcn_00404ca0 (rdi);
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
    rax = fcn_00404d00 (rbx);
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
    eax = fcn_00407ea0 (0xffffff9c, *((rsp + 0x10)), rdx, rcx, 0);
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
        memcpy (r15 + rax, *(0x006113f0), *((rsp + 0x58)));
        goto label_4;
label_20:
        if (*((rsp + 0x40)) == 2) {
            rax = *((rsp + 8));
            rax = memcpy (r15 + rax, *(0x006113f0), *((rsp + 0x58)));
            *((rsp + 0x40)) = 1;
        }
label_21:
        fcn_00403c10 (r15, *((rsp + 8)));
        goto label_4;
label_13:
        edi = 0x2e;
        eax = *(rbx);
        *(rbx) = di;
        rdi = r15;
        *((rsp + 0x18)) = ax;
        rax = fcn_00404b20 ();
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
    fcn_00403ce0 (rdi);
    rdi = imp.__libc_start_main;
    goto label_10;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404210 */
#include <stdint.h>
 
int32_t fcn_00404210 (void) {
    fcn_0040a670 (rdi, rsi, 0x40cec0, 0x40cea0, 4, *(0x00611380));
    eax = *((rax*4 + 0x40cea0));
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404240 */
#include <stdint.h>
 
uint64_t fcn_00404240 (void) {
    edx = 0;
    rax = fcn_00403d40 (rdi, rsi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00408ca0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404280 */
#include <stdint.h>
 
uint64_t fcn_00404280 (uint32_t arg2) {
    rsi = arg2;
    if (rsi != 0) {
        if (*(rsi) != 0) {
            goto label_0;
        }
    }
    rax = getenv (0x40ce43);
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
label_0:
    return void (*0x404210)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4042d0 */
#include <stdint.h>
 
uint64_t fcn_004042d0 (int64_t arg1, int64_t arg2) {
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
    rax = fcn_00408ce0 ();
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
        rax = fcn_00408ab0 (rdi, rbp);
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
        rax = fcn_00408a50 (0x1000);
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
    strspn (r14, 0x40d01e);
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
        rax = fcn_00408ab0 (r12, rbx + 1);
        r12 = rax;
    }
    free (*((rsp + 0x28)));
    rax = *((rsp + 0x18));
    if (rax != 0) {
        fcn_00405a10 (rax);
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
    al = fcn_00404e00 (*((rsp + 0x18)), *((rsp + 0x20)), rsp + 0x40);
    if (al == 0) {
        fcn_00404d70 (*((rsp + 0x18)), *((rsp + 0x20)), rsp + 0x40);
        rax = fcn_0040a2b0 (r12, *((rsp + 0x70)));
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
    fcn_00405a10 (*((rsp + 0x18)));
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
    rax = fcn_004057d0 (7, 0, 0x406190, 0x406200, 0x406240);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        goto label_8;
    }
    fcn_00408ca0 ();
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
    rax = fcn_00408a50 (rdi);
    rdx = *((rsp + 8));
    *((rsp + 0x28)) = rax;
    goto label_11;
label_19:
    errno_location ();
    r12d = 0;
    *(rax) = 2;
    goto label_7;
label_21:
    rax = fcn_00408ab0 (r12, 0x1000);
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
    rax = fcn_00408ab0 (*((rsp + 0x28)), rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404a80 */
#include <stdint.h>
 
uint64_t fcn_00404a80 (void) {
    eax = fcn_0040a730 (*(obj.stdout));
    if (eax != 0) {
        rax = errno_location ();
        rbx = rax;
        if (*(0x00611400) == 0) {
            goto label_0;
        }
        if (*(rax) != 0x20) {
            goto label_0;
        }
    }
    eax = fcn_0040a730 (*(obj.stderr));
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
    rax = fcn_00407cd0 (rdi, rsi, rdx, rcx);
    r8 = rbp;
    rcx = rax;
    eax = 0;
    error (0, *(rbx), "%s: %s");
    do {
label_1:
        rax = exit (*(0x00611300));
label_2:
        rcx = rax;
        eax = 0;
        error (0, *(rbx), 0x40e363);
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404b20 */
#include <stdint.h>
 
uint64_t fcn_00404b20 (void) {
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
    eax = fcn_00408d80 (edi, 0x406, 3, rcx, r8);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404bc0 */
#include <stdint.h>
 
uint64_t fcn_00404bc0 (void) {
    rax = fcn_00404c40 (rdi);
    if (rax != 0) {
        return rax;
    }
    return fcn_00408ca0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404be0 */
#include <stdint.h>
 
uint64_t fcn_00404be0 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_00404ca0 (rdi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404c40 */
#include <stdint.h>
 
uint64_t fcn_00404c40 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_00404be0 (rdi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404ca0 */
#include <stdint.h>
 
int64_t fcn_00404ca0 (int64_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404d00 */
#include <stdint.h>
 
uint64_t fcn_00404d00 (int64_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404d30 */
#include <stdint.h>
 
uint64_t fcn_00404d30 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_00404ca0 (rdi);
    rbx = rax;
    if (*(rax) == 0) {
        rbx = rbp;
    }
    rax = fcn_00404d00 (rbx);
    rbx += rax;
    *(rbx) = 0;
    al = (*(rbx) != 0) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404d70 */
#include <stdint.h>
 
uint64_t fcn_00404d70 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdi != 0) {
        r13 = rdi;
        r12 = rsi;
        rax = fcn_00408a50 (0x18);
        rbx = rax;
        rax = fcn_00408c80 (r12);
        rsi = rbx;
        *(rbx) = rax;
        rax = *((rbp + 8));
        *((rbx + 8)) = rax;
        rax = *(rbp);
        *((rbx + 0x10)) = rax;
        rax = fcn_00405f70 (r13);
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
    fcn_00408ca0 ();
label_1:
    rbx = rdi;
    free (*(rdi));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404e00 */
#include <stdint.h>
 
int64_t fcn_00404e00 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00405560 (rdi, rsp);
        al = (rax != 0) ? 1 : 0;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404e40 */
#include <stdint.h>
 
uint64_t fcn_00404e40 (void) {
    uint32_t var_fh;
    rax = void (*0x404e60)() ();
    if (rax != 0) {
        return rax;
    }
    return fcn_00408ca0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x404f40 */
#include <stdint.h>
 
int64_t fcn_00404f40 (uint32_t arg1, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405000 */
#include <stdint.h>
 
uint64_t fcn_00405000 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        /* [13] -r-x section size 39336 named .text */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405030 */
#include <stdint.h>
 
uint64_t fcn_00405030 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_00405000 (rdi, rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405150 */
#include <stdint.h>
 
int64_t fcn_00405150 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x40cfa0) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x0040cfb4]");
        if (rax > 0x40cfa0) {
            xmm1 = *(0x0040cfb8);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x40cfa0) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x0040cfbc]");
            if (rax <= 0x40cfa0) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x0040cfc0]");
            if (rax < 0x40cfa0) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x0040cfb4]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x40cfa0) {
                goto label_0;
            }
            xmm3 = *(0x0040cfc4);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x40cfa0) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x40cfa0) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x40cfa0;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4051d0 */
#include <stdint.h>
 
uint64_t fcn_004051d0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
        rax = fcn_00405000 (rbp, r15);
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
    rax = fcn_00405000 (rbp, r15);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405560 */
#include <stdint.h>
 
uint64_t fcn_00405560 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_00405000 (rdi, rsi);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4057d0 */
#include <stdint.h>
 
uint64_t fcn_004057d0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x404fe0;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x404ff0;
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
    al = fcn_00405150 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_00404f40 (rbp, rsi);
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
        *((rax + 0x28)) = 0x40cfa0;
        al = fcn_00405150 (rdi);
        xmm1 = *(0x0040cfc8);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x0040cfcc]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x0040cfd0]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x0040cfd0]");
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405a10 */
#include <stdint.h>
 
int64_t fcn_00405a10 (uint32_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405af0 */
#include <stdint.h>
 
uint64_t fcn_00405af0 (int64_t arg1, uint32_t arg2) {
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
            __asm ("comiss xmm0, dword [0x0040cfcc]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x0040cfd0]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x0040cfd0]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_00404f40 (rsi, rsi);
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
        eax = fcn_004051d0 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_004051d0 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_004051d0 (rbp, rsp, 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405cf0 */
#include <stdint.h>
 
uint64_t fcn_00405cf0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    rax = fcn_00405030 (rdi, rsi, rsp + 8, 0);
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
    fcn_00405150 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x0040cfcc]");
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
    __asm ("comiss xmm0, dword [0x0040cfd0]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_00405af0 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_00405030 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x0040cfd0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x405f70 */
#include <stdint.h>
 
uint64_t fcn_00405f70 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_00405cf0 (rdi, rsi, rsp + 8);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x406260 */
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
            edi = 0x40d020;
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
        *(0x00611410) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite (0x40cfe0, 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x406300 */
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
        rax = fcn_0040a830 ();
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
        eax = 0x40d026;
        ebx = 0x40d031;
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
        eax = 0x40d02a;
        ebx = 0x40d02d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40e2d7;
    ebx = 0x40d024;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x406400 */
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
    /* switch table (11 cases) at 0x40d0a0 */
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
    *((rsp + 0x50)) = 0x40e2d7;
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
        /* switch table (127 cases) at 0x40d0f8 */
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
    /* switch table (127 cases) at 0x40d4f0 */
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
    /* switch table (127 cases) at 0x40d8e8 */
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
    *((rsp + 0x50)) = 0x40e2d7;
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
        rax = fcn_0040a230 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40e2d7;
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
        *((rsp + 0x50)) = 0x40d024;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00406300 (0x40d035, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00406300 (0x40e2d7, r13d);
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
        *((rsp + 0x50)) = 0x40d024;
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
        *((rsp + 0x50)) = 0x40e2d7;
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
    *((rsp + 0x50)) = 0x40d024;
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
    *((rsp + 0x50)) = 0x40e2d7;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407630 */
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
        rbx = *(0x00611358);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00611370) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x611360) {
        goto label_2;
    }
    rax = fcn_00408ab0 (rbx, rsi);
    *(0x00611358) = rax;
    rbx = rax;
    do {
        rdi = *(0x00611370);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x00611370) = r12d;
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
            if (r12 != 0x611420) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00408a50 (*((rsp + 0x10)));
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
        rax = fcn_00408ab0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00611360]");
        rbx = rax;
        *(0x00611358) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00408ca0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407a86 */
#include <stdint.h>
 
void fcn_00407a86 (uint32_t arg1) {
    rdi = arg1;
    if (rdi != 0x611420) {
        free (rdi);
        *(0x00611360) = 0x100;
        *(0x00611368) = 0x611420;
    }
    if (r12 != 0x611360) {
        free (r12);
        *(0x00611358) = 0x611360;
    }
    *(0x00611370) = 1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407b50 */
#include <stdint.h>
 
int64_t fcn_00407b50 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00407630 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407c30 */
#include <stdint.h>
 
void fcn_00407c30 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
    return void (*0x407b50)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407cd0 */
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
        __asm ("movdqa xmm0, xmmword [0x00611520]");
        __asm ("movdqa xmm1, xmmword [0x00611530]");
        __asm ("movdqa xmm2, xmmword [0x00611540]");
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407d00 */
#include <stdint.h>
 
int64_t fcn_00407d00 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00407630 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407e60 */
#include <stdint.h>
 
void fcn_00407e60 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x611320;
    rdx = 0xffffffffffffffff;
    return void (*0x407630)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407e80 */
#include <stdint.h>
 
void fcn_00407e80 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x611320;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x407630)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x407ea0 */
#include <stdint.h>
 
uint64_t fcn_00407ea0 (int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4080f0 */
#include <stdint.h>
 
uint64_t fcn_004080f0 (int64_t arg1, int64_t arg2) {
    uint32_t var_8h;
    int64_t var_90h;
    int64_t var_98h;
    rdi = arg1;
    rsi = arg2;
    r15 = rdi;
    r14 = rsi;
    ebx = 0;
    rax = fcn_00404ca0 (rdi);
    rax = fcn_00404ca0 (r14);
    r12 = rax;
    rax = fcn_00404d00 (rbp);
    r13 = rax;
    rax = fcn_00404d00 (r12);
    while (eax != 0) {
label_0:
        eax = ebx;
        return rax;
        eax = memcmp (rbp, r12, r13);
    }
    rdi = r15;
    rax = fcn_00404bc0 ();
    rdi = r14;
    rax = fcn_00404bc0 ();
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
        error (1, *(rax), 0x40e363);
    }
label_2:
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), 0x40e363);
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4082b0 */
#include <stdint.h>
 
void fcn_004082b0 (void) {
    return assert_fail ("! \"invalid KIND in __gen_tempname\", "lib/tempname.c", 0x147, "gen_tempname_len");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4082d0 */
#include <stdint.h>
 
uint64_t fcn_004082d0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
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
    rax = strspn (rdi, 0x40ce40);
    if (r13 > rax) {
        goto label_2;
    }
    rsi = r13;
    edi = 0;
    rax = fcn_0040add0 ();
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
        fcn_0040ae10 (rbp, 0x3d);
        eax = *((rax + str.abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789));
        *((r14 - 1)) = al;
    } while (r14 != rbx);
label_4:
    rsi = *((rsp + 0x18));
    rdi = *((rsp + 8));
    rax = *((rsp + 0x20));
    eax = void (*rax)() ();
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
    fcn_0040af30 (rbp);
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
        fcn_0040af30 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x4084b0 */
#include <stdint.h>
 
void fcn_004084b0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40de52);
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
        /* switch table (10 cases) at 0x40e138 */
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
    void (*0x402180)() ();
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
    void (*0x402180)() ();
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
    void (*0x402180)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408910 */
#include <stdint.h>
 
uint64_t fcn_00408910 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_004084b0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408a50 */
#include <stdint.h>
 
uint64_t fcn_00408a50 (int64_t arg1) {
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
    return fcn_00408ca0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408ab0 */
#include <stdint.h>
 
uint64_t fcn_00408ab0 (void * arg1, int64_t arg2) {
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
    return fcn_00408ca0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408c50 */
#include <stdint.h>
 
uint64_t fcn_00408c50 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00408a50 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408c80 */
#include <stdint.h>
 
void fcn_00408c80 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
    return void (*0x408c50)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408ca0 */
#include <stdint.h>
 
uint64_t fcn_00408ca0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x00611300), 0, 0x40e363);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408ce0 */
#include <stdint.h>
 
uint64_t fcn_00408ce0 (void) {
    int64_t var_8h;
    rax = fcn_00408f90 (0, 0);
    rbx = rax;
    while (*(rax) != 0xc) {
        rax = rbx;
        return rax;
        rax = errno_location ();
    }
    return fcn_00408ca0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408d10 */
#include <stdint.h>
 
uint64_t fcn_00408d10 (void) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408d80 */
#include <stdint.h>
 
uint64_t fcn_00408d80 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x00611558) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_00408d80 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x00611558) != 0xffffffff) {
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
    eax = fcn_00408d80 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x00611558) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408ec0 */
#include <stdint.h>
 
uint32_t fcn_00408ec0 (int64_t arg1) {
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
    void (*0x401ff0)() ();
label_1:
    fcn_00408f30 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408f00 */
#include <stdint.h>
 
int64_t fcn_00408f00 (uint32_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408f30 */
#include <stdint.h>
 
int64_t fcn_00408f30 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x4020f0)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x408f90 */
#include <stdint.h>
 
uint64_t fcn_00408f90 (void * arg1, uint32_t arg2) {
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
    esi = 0x40ce0b;
    *((rbx - 1)) = 0;
    edi = 1;
    eax = lxstat ();
    if (eax < 0) {
        goto label_14;
    }
    r15 = *((rsp + 0x60));
    rdx = rsp + 0x60;
    esi = 0x40d01e;
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
    eax = openat (r15d, 0x40ce0a, 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x409460 */
#include <stdint.h>
 
uint64_t fcn_00409460 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x409540 */
#include <stdint.h>
 
int64_t fcn_00409540 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x409b60 */
#include <stdint.h>
 
uint64_t fcn_00409b60 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40e2e9;
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
            fcn_00409460 (r12, rbx);
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
        fcn_00409460 (r12, rbx);
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
    eax = fcn_00409540 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00409540 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a130 */
#include <stdint.h>
 
int32_t fcn_0040a130 (int64_t arg_10h) {
    eax = *(0x0061137c);
    *(0x00611560) = eax;
    eax = *(0x00611378);
    *(0x00611564) = eax;
    eax = *((rsp + 0x10));
    fcn_00409b60 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061137c) = edx;
    rdx = imp.__libc_start_main;
    *(0x006115a0) = rdx;
    edx = imp.__libc_start_main;
    *(0x00611374) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a1b0 */
#include <stdint.h>
 
void fcn_0040a1b0 (void) {
    r9d = 0;
    fcn_0040a130 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a230 */
#include <stdint.h>
 
uint64_t fcn_0040a230 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040a790 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a2b0 */
#include <stdint.h>
 
uint64_t fcn_0040a2b0 (int64_t arg1, uint32_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a3b0 */
#include <stdint.h>
 
uint64_t fcn_0040a3b0 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a4d0 */
#include <stdint.h>
 
uint64_t fcn_0040a4d0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_00407e60 (1, rbp);
        rax = fcn_00407b50 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
        void (*0x4020c0)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a550 */
#include <stdint.h>
 
uint64_t fcn_0040a550 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00407e80 (r12);
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
    rax = fcn_00407e80 (r12);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a670 */
#include <stdint.h>
 
uint64_t fcn_0040a670 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_0040a3b0 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_0040a4d0 (r14, r12, rax);
        fcn_0040a550 (rbx, rbp, r15);
        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a730 */
#include <stdint.h>
 
uint64_t fcn_0040a730 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040b9a0 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a790 */
#include <stdint.h>
 
uint64_t fcn_0040a790 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40e366;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a7f0 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_0040a7f0 (int64_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40a830 */
#include <stdint.h>
 
uint64_t fcn_0040a830 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40e307;
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
        r15d = 0x40e307;
label_2:
        *(0x00611598) = r15;
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
        r15d = 0x40e307;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40bcfe;
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
    fcn_0040b9a0 (rbx);
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
        r15d = 0x40e307;
        rbx = rax;
        free (r15);
        fcn_0040b9a0 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40add0 */
#include <stdint.h>
 
uint64_t fcn_0040add0 (void) {
    rax = fcn_0040aff0 (rdi, rsi);
    rbx = rax;
    eax = 0;
    if (rbx != 0) {
        fcn_00408a50 (0x18);
        *(rax) = rbx;
        *((rax + 0x10)) = 0;
        *((rax + 8)) = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40ae10 */
#include <stdint.h>
 
int64_t fcn_0040ae10 (int64_t arg1, int64_t arg2) {
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
        rax = rdx:rax / r14;
        rdx = rdx:rax % r14;
        rsi = rdx;
        rcx = rax;
        rbx -= rdx;
        rax = rbp;
        edx = 0;
        rax = rdx:rax / r14;
        rdx = rdx:rax % r14;
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
    fcn_0040b300 (r12, rsp + 8, rdx);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40af30 */
#include <stdint.h>
 
uint64_t fcn_0040af30 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fcn_0040b460 (*(rdi));
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40aff0 */
#include <stdint.h>
 
uint64_t fcn_0040aff0 (int64_t arg1, int64_t arg2) {
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
    rax = fcn_0040ba20 (rdi, 0x40e424);
    r13 = rax;
    if (rax == 0) {
        goto label_5;
    }
    fcn_00408a50 (0x1038);
    ecx = 0x1000;
    rdi = r13;
    *(rax) = r13;
    if (rbp <= 0x1000) {
        rcx = rbp;
    }
    *((rax + 8)) = 0x40af90;
    rbx = rax;
    *((rax + 0x10)) = r12;
    setvbuf (rdi, rax + 0x18, 0, rcx);
    do {
label_0:
        rax = rbx;
        return rax;
label_4:
        fcn_00408a50 (0x1038);
        *(rax) = 0;
        rbx = rax;
        r13 = rax + 0x20;
        *((rax + 8)) = 0x40af90;
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
        fcn_0040b760 (r13);
    } while (1);
label_3:
    rax = fcn_00408a50 (0x1038);
    rbx = rax;
    *(rax) = 0;
    *((rax + 8)) = 0x40af90;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40b300 */
#include <stdint.h>
 
uint64_t fcn_0040b300 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        uint64_t (*r12 + 8)() ();
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
        fcn_0040b4b0 (r14, r13);
    } while (rbx > 0x800);
    goto label_4;
    do {
        rbp += 0x800;
        fcn_0040b4b0 (r14, rbp);
        rbx -= 0x800;
        if (rbx == 0) {
            goto label_5;
        }
label_3:
    } while (rbx > 0x7ff);
    fcn_0040b4b0 (r14, r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40b460 */
#include <stdint.h>
 
uint32_t fcn_0040b460 (int64_t arg1) {
    rdi = arg1;
    rdx = 0xffffffffffffffff;
    esi = 0x1038;
    rbx = rdi;
    rbp = *(rdi);
    explicit_bzero_chk ();
    eax = free (rbx);
    if (rbp != 0) {
        rdi = rbp;
        void (*0x40b9a0)() ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40b4b0 */
#include <stdint.h>
 
int64_t fcn_0040b4b0 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40b760 */
#include <stdint.h>
 
int64_t fcn_0040b760 (int64_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40b9a0 */
#include <stdint.h>
 
uint64_t fcn_0040b9a0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00408ec0 (rbx);
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
    void (*0x401d80)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40ba20 */
#include <stdint.h>
 
uint64_t fcn_0040ba20 (int64_t arg2, const char * filename) {
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
        eax = fcn_0040bac0 (eax, rsi);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_0040b9a0 (rbx);
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
    fcn_0040b9a0 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40bac0 */
#include <stdint.h>
 
int32_t fcn_0040bac0 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
    return void (*0x408d80)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40bb40 */
#include <stdint.h>
 
int64_t fcn_0040bb40 (void) {
    rax = 0x6112e8;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_ln.elf @ 0x40bb58 */
#include <stdint.h>
 
void fcn_0040bb58 (int64_t arg3) {
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
