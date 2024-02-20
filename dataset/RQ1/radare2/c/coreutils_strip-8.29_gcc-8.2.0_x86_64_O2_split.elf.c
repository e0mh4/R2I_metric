/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x401ea0 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    void * var_8h;
    uint32_t var_10h;
    void * ptr;
    uint32_t var_20h;
    uint32_t var_28h;
    void * errname;
    void * var_38h;
    void * var_40h;
    uint32_t var_48h;
    uint32_t s2;
    void * var_58h;
    int64_t var_60h;
    int64_t var_6eh;
    uint32_t var_6fh;
    struct sigaction * oldact;
    rdi = argc;
    rsi = argv;
    r15d = 0;
    r13d = 0;
    r12d = 1;
    rbx = rsi;
    rax = getpagesize ();
    rax = (int64_t) eax;
    *((rsp + 0x10)) = rax;
    fcn_004053a0 (*(rbx));
    setlocale (6, 0x40c29f);
    bindtextdomain (0x409b13, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x409b13, rsi);
    edi = 0x4050e0;
    rax = fcn_00409900 ();
    *(0x0060e5f0) = 0x40c282;
    *(0x0060e620) = 0x409ce8;
    *((rsp + 8)) = 0;
    *((rsp + 0x48)) = 0;
    *((rsp + 0x28)) = 0;
    do {
label_0:
        ecx = 0x40aaa0;
        edx = "0123456789C:a:b:del:n:t:ux";
        rsi = rbx;
        edi = ebp;
        r14d = *(0x0060e31c);
        if (r14d == 0) {
            r14d = r12d;
        }
        r8d = 0;
        eax = fcn_00408cd0 ();
        r8d = eax;
        if (eax == 0xffffffff) {
            goto label_46;
        }
        if (eax == 0x65) {
            goto label_47;
        }
        if (eax <= 0x65) {
            goto label_48;
        }
        if (eax == 0x78) {
            goto label_49;
        }
        if (eax > 0x78) {
            goto label_50;
        }
        if (eax == 0x6e) {
            goto label_51;
        }
        if (eax <= 0x6e) {
            goto label_52;
        }
        if (eax != 0x74) {
            goto label_53;
        }
        r14 = imp.__libc_start_main;
        eax = *(r14);
        if (al == 0) {
            goto label_54;
        }
        if (*((r14 + 1)) != 0) {
            eax = strcmp (r14, 0x409be9);
            if (eax != 0) {
                goto label_55;
            }
            eax = 0;
        }
        edx = *(0x0060e290);
        if (edx >= 0) {
            if (edx != eax) {
                goto label_56;
            }
        }
        *(0x0060e290) = eax;
    } while (1);
label_53:
    if (eax != 0x75) {
        goto label_57;
    }
    *(0x0060e540) = 1;
    goto label_0;
label_52:
    if (eax != 0x6c) {
        goto label_57;
    }
    if (r13d != 0) {
        goto label_58;
    }
    edx = 5;
    r13d = 3;
    rax = dcgettext (0, "invalid number of lines");
    r9d = 0;
    rax = fcn_004079f0 (*(0x0060e908), 1, 0xffffffffffffffff, 0x40c29f, rax);
    *((rsp + 8)) = rax;
    goto label_0;
label_50:
    if (eax == 0x81) {
        goto label_59;
    }
    if (eax > 0x81) {
        if (eax == 0x82) {
            edx = 5;
            rax = dcgettext (0, "invalid IO block size");
            r9d = 0;
            rdx = ~rdx;
            rax = fcn_004079f0 (*(0x0060e908), 1, *((rsp + 0x10)), "bEGKkMmPTYZ0", rax);
            *((rsp + 0x28)) = rax;
            goto label_0;
label_48:
            if (eax <= 0x39) {
                goto label_60;
            }
            if (eax == 0x61) {
                goto label_61;
            }
            if (eax <= 0x61) {
                goto label_62;
            }
            if (eax != 0x62) {
                goto label_63;
            }
            if (r13d != 0) {
                goto label_58;
            }
            edx = 5;
            r13d = 1;
            rax = dcgettext (0, "invalid number of bytes");
            r9d = 0;
            rdx = 0x7fffffffffffffff;
            rax = fcn_004079f0 (*(0x0060e908), 1, rdx, "bEGKkMmPTYZ0", rax);
            *((rsp + 8)) = rax;
            goto label_0;
        }
        if (eax != 0x83) {
            goto label_57;
        }
        r14 = imp.__libc_start_main;
        rax = fcn_00405180 (*(0x0060e908));
        if (r14 != rax) {
            goto label_64;
        }
        *(0x0060e5f8) = r14;
        goto label_0;
    }
    if (eax != 0x80) {
        goto label_57;
    }
    *(0x0060e542) = 1;
    goto label_0;
label_63:
    if (eax != 0x64) {
        goto label_57;
    }
    esi = "0123456789";
label_41:
    r14 = imp.__libc_start_main;
    *((rsp + 0x18)) = r8d;
    *(str.abcdefghijklmnopqrstuvwxyz) = rsi;
    if (r14 == 0) {
        goto label_0;
    }
    eax = 0;
    rcx |= 0xffffffffffffffff;
    rdi = r14;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rax = rcx - 1;
    *((rsp + 0x20)) = rax;
    rax = strspn (r14, rsi);
    r8d = *((rsp + 0x18));
    if (*((rsp + 0x20)) != rax) {
        goto label_65;
    }
    if (*(r14) != 0x30) {
        goto label_66;
    }
    rax = r14 + 1;
    if (*((r14 + 1)) != 0) {
        goto label_67;
    }
    goto label_66;
    do {
        rax++;
        if (*(rax) == 0) {
            goto label_66;
        }
label_67:
        *(0x0060e908) = rax;
        r14 = rax;
    } while (*(rax) == 0x30);
label_66:
    *(0x0060e600) = r14;
    goto label_0;
label_62:
    if (eax != 0x43) {
        goto label_57;
    }
    if (r13d != 0) {
        goto label_58;
    }
    edx = 5;
    r13d = 2;
    rax = dcgettext (0, "invalid number of bytes");
    r9d = 0;
    rdx = 0x7fffffffffffffff;
    rax = fcn_004079f0 (*(0x0060e908), 1, rdx, "bEGKkMmPTYZ0", rax);
    *((rsp + 8)) = rax;
    goto label_0;
label_60:
    if (eax < 0x30) {
        if (eax == 0xffffff7d) {
            eax = 0;
            rcx = *(str.8.29);
            r9d = "Richard M. Stallman";
            r8d = "Torbjorn Granlund";
            fcn_00407550 (*(obj.stdout), "split", "GNU coreutils");
            eax = exit (0);
        }
        if (eax != 0xffffff7e) {
            goto label_57;
        }
        fcn_00404cf0 (0);
    }
    if (r13d != 0) {
        if (r13d != 4) {
            goto label_58;
        }
        if (r15d == 0) {
            goto label_68;
        }
        if (r15d == r14d) {
            goto label_68;
        }
    }
    r8d -= 0x30;
    r15d = r14d;
    r13d = 4;
    rax = (int64_t) r8d;
    *((rsp + 8)) = rax;
    goto label_0;
label_59:
    rax = imp.__libc_start_main;
    *(0x0060e760) = rax;
    goto label_0;
label_61:
    edx = 5;
    rax = dcgettext (0, "invalid suffix length");
    r9d = 0;
    rdx = 0x1fffffffffffffff;
    rax = fcn_004079f0 (*(0x0060e908), 0, rdx, 0x40c29f, rax);
    *(0x0060e608) = rax;
    goto label_0;
label_51:
    if (r13d != 0) {
        goto label_58;
    }
    rax = ctype_b_loc ();
    rcx = *(rax);
    rax = imp.__libc_start_main;
    while ((*((rcx + rdx*2 + 1)) & 0x20) != 0) {
        *(0x0060e908) = rax;
        r14 = rax;
        rax++;
        edx = *(r14);
    }
    edi = 0x409b9e;
    ecx = 2;
    rsi = r14;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = ((*((rcx + rdx*2 + 1)) & 0x20) > 0) ? 1 : 0;
    if (al != 0) {
        goto label_69;
    }
    r14 += 2;
    r13d = 7;
    *(0x0060e908) = r14;
label_1:
    rax = strchr (*(0x0060e908), 0x2f);
    edx = 5;
    esi = "invalid number of chunks";
    edi = 0;
    r14 = rax;
    if (rax == 0) {
        goto label_70;
    }
    rax = dcgettext (rdi, rsi);
    r9d = 0;
    rdx |= 0xffffffffffffffff;
    rax = fcn_004079f0 (r14 + 1, 1, rdx, 0x40c29f, rax);
    *((rsp + 8)) = rax;
    if (r14 == *(0x0060e908)) {
        goto label_0;
    }
    *(r14) = 0;
    edx = 5;
    rax = dcgettext (0, "invalid chunk number");
    r9d = 0;
    rax = fcn_004079f0 (*(0x0060e908), 1, *((rsp + 8)), 0x40c29f, rax);
    *((rsp + 0x48)) = rax;
    goto label_0;
label_47:
    *(0x0060e541) = 1;
    goto label_0;
label_69:
    r13d = 5;
    eax = strncmp (r14, 0x409ba1, 2);
    if (eax != 0) {
        goto label_1;
    }
    r14 += 2;
    r13d = 6;
    *(0x0060e908) = r14;
    goto label_1;
label_46:
    if (*((rsp + 0x48)) != 0) {
        if (*(0x0060e760) != 0) {
            goto label_71;
        }
    }
    if (r13d == 0) {
        goto label_72;
    }
    if (*((rsp + 8)) == 0) {
        goto label_73;
    }
    do {
        if (*(0x0060e290) < 0) {
            *(0x0060e290) = 0xa;
        }
        rdi = imp.__libc_start_main;
        r12d = r13 - 5;
        if (rdi == 0) {
            goto label_74;
        }
        *(0x0060e2a0) = 0;
        if (r12d <= 2) {
            goto label_75;
        }
label_2:
        r14d = 0;
        if (*(0x0060e608) != 0) {
            goto label_76;
        }
label_3:
        edi = 2;
        if (r14 >= 2) {
            rdi = r14;
        }
        *(0x0060e608) = rdi;
label_4:
        eax = *(0x0060e31c);
        if (eax < ebp) {
            rcx = (int64_t) eax;
            edx = rax + 1;
            rsi = rcx*8;
            rcx = *((rbx + rcx*8));
            *(0x0060e31c) = edx;
            *(0x0060e5f0) = rcx;
            if (edx >= ebp) {
                goto label_77;
            }
            rdx = *((rbx + rsi + 8));
            eax += 2;
            *(0x0060e31c) = eax;
            *(0x0060e620) = rdx;
            if (eax < ebp) {
                goto label_78;
            }
        }
label_77:
        rdi = imp.__libc_start_main;
        if (rdi != 0) {
            eax = 0;
            rcx |= 0xffffffffffffffff;
            edx = 5;
            esi = "numerical suffix start value is too large for the suffix length";
            __asm ("repne scasb al, byte [rdi]");
            rax = rcx;
            rax = ~rax;
            rax--;
            if (rax > *(0x0060e608)) {
                goto label_40;
            }
        }
        rbx = imp.__libc_start_main;
        eax = strcmp (rbx, 0x40c282);
        if (eax != 0) {
            eax = fcn_00405260 (0, rbx, 0, 0);
            if (eax < 0) {
                goto label_79;
            }
        }
        esi = 0;
        edx = 0x60e560;
        edi = 1;
        eax = fxstat ();
        if (eax != 0) {
            goto label_80;
        }
        if (*((rsp + 0x28)) == 0) {
            rbx = imp.__libc_start_main;
            rax = 0x1ffffffffffe0000;
            rdx = rbx - 0x20000;
            eax = 0x20000;
            if (rdx <= rax) {
                rax = rbx;
            }
            *((rsp + 0x28)) = rax;
        }
        rbx = *((rsp + 0x10));
        rbp |= 0xffffffffffffffff;
        rdi += rbx;
        fcn_00407690 (*((rsp + 0x28)));
        edx = 0;
        rcx = rax + rbx - 1;
        rax = rcx;
        rax = rdx:rax / rbx;
        rdx = rdx:rax % rbx;
        rax = 0x7fffffffffffffff;
        *((rsp + 0x10)) = rax;
        rcx -= rdx;
        *((rsp + 0x50)) = rcx;
        if (r12d <= 1) {
            goto label_81;
        }
label_6:
        if (*(0x0060e760) != 0) {
            edi = 0x60e640;
            sigemptyset ();
            sigaction (0xd, 0, rsp + 0x70);
            if (*((rsp + 0x70)) != 1) {
                esi = 0xd;
                edi = 0x60e640;
                sigaddset ();
            }
            edx = 0x60e6c0;
            esi = 0x60e640;
            edi = 0;
            sigprocmask ();
        }
        r13d -= 2;
        if (r13d > 5) {
            goto label_82;
        }
        /* switch table (6 cases) at 0x40aa00 */
label_70:
        rax = dcgettext (rdi, rsi);
        r9d = 0;
        rdx |= 0xffffffffffffffff;
        rax = fcn_004079f0 (*(0x0060e908), 1, rdx, 0x40c29f, rax);
        *((rsp + 8)) = rax;
        goto label_0;
label_72:
        *((rsp + 8)) = 0x3e8;
        r13d = 3;
    } while (1);
label_68:
    rax = 0x1999999999999999;
    rsi = *((rsp + 8));
    if (rsi > rax) {
        goto label_83;
    }
    rax = rsi * 0xa;
    edx = r8 - 0x30;
    rdx = (int64_t) edx;
    rax += rdx;
    if (rax < rsi) {
        goto label_83;
    }
    *((rsp + 8)) = rax;
    r15d = r14d;
    goto label_0;
label_74:
    r9 = *((rsp + 8));
    if (r12d > 2) {
        goto label_2;
    }
label_5:
    rdi = *(str.abcdefghijklmnopqrstuvwxyz);
    eax = 0;
    rcx |= 0xffffffffffffffff;
    edx = 0;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rsi = rax - 1;
    rax = r9;
    rax = rdx:rax / rsi;
    rdx = rdx:rax % rsi;
    rcx = rax;
    r8b = (rdx != 0) ? 1 : 0;
    edi = 0;
    if (rsi <= r9) {
        goto label_84;
    }
    goto label_85;
    do {
        rcx = rax;
label_84:
        edx = 0;
        rdi++;
        rax = rdx:rax / rsi;
        rdx = rdx:rax % rsi;
    } while (rsi <= rcx);
label_85:
    rax = imp.__libc_start_main;
    r8d = (int32_t) r8b;
    *(0x0060e2a0) = 0;
    r14 = r8 + rdi;
    if (rax == 0) {
        goto label_3;
    }
    if (r14 > rax) {
        goto label_86;
    }
label_76:
    *(0x0060e2a0) = 0;
    goto label_4;
label_75:
    eax = fcn_00407a20 (rdi, 0, 0xa, rsp + 0x70, 0x40c29f);
    rsi = *((rsp + 8));
    r9 = *((rsp + 8));
    if (eax != 0) {
        goto label_5;
    }
    rax = rsi;
    r9 = *((rsp + 0x70));
    rax = ~rax;
    if (rax >= r9) {
        if (r9 < rsi) {
            goto label_87;
        }
    }
    r9 = *((rsp + 8));
    goto label_5;
label_81:
    edx = 1;
    esi = 0;
    edi = 0;
    r12d = 0;
    rax = lseek ();
    rbx = rax;
    if (rax < 0) {
        goto label_88;
    }
    rbp = *((rsp + 0x28));
    r14 = *((rsp + 0x50));
    while (rax != 0) {
        if (rax == -1) {
            goto label_43;
        }
        rax += r12;
        r12 = rax;
        if (rbp <= rax) {
            goto label_89;
        }
        rdx -= r12;
        rax = fcn_00406fe0 (0, r14 + r12, rbp);
    }
label_34:
    if (r12 < 0) {
        goto label_43;
    }
    rax = *((rsp + 0x28));
    if (r12 <= rax) {
    }
    if (*((rsp + 8)) < 0) {
        goto label_90;
    }
    rax = *((rsp + 8));
    if (r12 < rax) {
        r12 = rax;
    }
    *((rsp + 0x10)) = r12;
    goto label_6;
    r15 = *((rsp + 8));
    r14d = 0;
    r12d = 1;
label_25:
    rax = fcn_00406fe0 (0, *((rsp + 0x50)), *((rsp + 0x28)));
    *((rsp + 0x10)) = rax;
    if (rax == -1) {
        goto label_91;
    }
    rax = *((rsp + 0x50));
    rbx = *((rsp + 0x10));
    ebp = *(0x0060e290);
    rbx += rax;
    r13 = rax;
    rcx = rax;
    *(rbx) = bpl;
    do {
label_7:
        rdx -= rcx;
        rdx++;
        rax = fcn_00408dd0 (rcx, ebp, rbx);
        if (rbx == rax) {
            goto label_92;
        }
        r14++;
        rcx = rax + 1;
    } while (r14 < r15);
    rdx = rcx;
    edi = (int32_t) r12b;
    *((rsp + 8)) = rcx;
    rdx -= r13;
    r14d = 0;
    r12d = 1;
    fcn_004049a0 (rdi, r13);
    rcx = *((rsp + 8));
    ebp = *(0x0060e290);
    r13 = rcx;
    goto label_7;
    *((rsp + 0x10)) = 0;
    r12d = 0;
    r13d = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x18)) = 0;
    do {
label_22:
        rax = fcn_00406fe0 (0, *((rsp + 0x50)), *((rsp + 0x28)));
        if (rax == -1) {
            goto label_93;
        }
        if (rax == 0) {
            goto label_94;
        }
        rbx = *((rsp + 0x50));
        goto label_95;
label_8:
        rdx = r15;
        rdi = rbx;
        r14 = rbx + r15 - 1;
        rax = memrchr ();
        r8 = rax;
        if (r12 == 0) {
            goto label_18;
        }
label_9:
        dil = (r13 == 0) ? 1 : 0;
        if (r8 != 0) {
            goto label_96;
        }
        if (dil != 0) {
            goto label_96;
        }
label_20:
        if (*((rsp + 0x10)) != 0) {
            goto label_97;
        }
        edi = 0;
        dil = (r13 == 0) ? 1 : 0;
        if (r14 == 0) {
            goto label_98;
        }
        rdx = r15;
        rbp -= r15;
        rbx += r15;
        fcn_004049a0 (rdi, rbx);
        r13d = 0;
label_10:
    } while (rbp == 0);
label_95:
    r15 = *((rsp + 8));
    rax = r12 + r13;
    esi = *(0x0060e290);
    *((rsp + 0x30)) = rax;
    r15 -= rax;
    if (rbp >= r15) {
        goto label_8;
    }
    rdx = rbp;
    rdi = rbx;
    r14d = 0;
    r15d = 0;
    rax = memrchr ();
    r8 = rax;
    if (r12 != 0) {
        goto label_9;
    }
label_18:
    if (r8 == 0) {
        goto label_99;
    }
label_19:
    r8 -= rbx;
    r12 = r8 + 1;
    dil = (r13 == 0) ? 1 : 0;
    rdx = r12;
    r13 += r12;
    rbp -= r12;
    rbx += r12;
    fcn_004049a0 (0, rbx);
    if (r14 == 0) {
        goto label_100;
    }
    r15 -= r12;
    rsp + 0x10 = (r15 != 0) ? 1 : 0;
    if (r15 == 0) {
        goto label_101;
    }
label_21:
    r12d = 0;
label_44:
    rcx = *((rsp + 0x20));
    rax = *((rsp + 0x20));
    rax -= r12;
    if (rax < r15) {
        rsi = *((rsp + 0x28));
        rax = *((rsp + 0x28));
        rax = ~rax;
        if (rax < rcx) {
            goto label_102;
        }
        rcx += rsi;
        rsi = rcx;
        *((rsp + 0x20)) = rcx;
        rax = fcn_004076f0 (*((rsp + 0x18)), rsi);
        *((rsp + 0x18)) = rax;
    }
    rax = *((rsp + 0x18));
    rbp -= r15;
    rbx += r15;
    r12 += r15;
    memcpy (rax + r12, rbx, r15);
label_45:
    edx = *((rsp + 0x10));
    eax = 0;
    if (r14 != 0) {
        edx = eax;
    }
    eax = 0;
    if (r14 != 0) {
        r13 = rax;
    }
    *((rsp + 0x10)) = dl;
    goto label_10;
    rax = *((rsp + 8));
    if (*((rsp + 0x48)) > rax) {
        goto label_103;
    }
    if (*((rsp + 0x10)) < rax) {
        goto label_103;
    }
    rax = *((rsp + 0x10));
    edx = 0;
    rax = *(rdx:rax) / rsp + 8;
    rdx = *(rdx:rax) % rsp + 8;
    r10 = rax;
    rax = *((rsp + 0x48));
    if (rax <= 1) {
        goto label_104;
    }
    r12 = rax - 1;
    rbx = r10;
    *((rsp + 0x20)) = r10;
    rbx *= r12;
    rbx--;
    r13 = rbx;
    if (rbp <= rbx) {
        goto label_105;
    }
    rbp -= rbx;
    memmove (*((rsp + 0x50)), rdi + rbx, rbp);
    *((rsp + 0x18)) = rbx;
    r10 = *((rsp + 0x20));
label_35:
    rax = *((rsp + 0x10));
    *((rsp + 0x6f)) = 0;
    r15d = 1;
    r14 = *((rsp + 0x48));
    *((rsp + 0x20)) = r15b;
    r15 = r10;
    rbx = rax - 1;
    rax = rbp;
    r11 = rbx;
label_39:
    rsi = *((rsp + 0x18));
    if (*((rsp + 0x10)) <= rsi) {
        goto label_106;
    }
    if (rax == -1) {
        goto label_107;
    }
label_38:
    if (rax == 0) {
        goto label_106;
    }
    rdx = *((rsp + 0x10));
    rdx -= *((rsp + 0x18));
    *((rsp + 0x6f)) = 0;
    r10 = r15;
    rbp = *((rsp + 0x50));
    ebx = *((rsp + 0x20));
    if (rdx <= rax) {
        rax = rdx;
    }
    r8 = *((rsp + 8));
    r9 = rbp;
    *((rsp + 0x60)) = rax;
    r9 += rax;
    r15 = r9;
label_27:
    rax |= 0xffffffffffffffff;
    if (r15 == rbp) {
        goto label_108;
    }
    edx = 0;
    rax = r13;
    rax -= *((rsp + 0x18));
    rcx = *((rsp + 0x60));
    __asm ("cmovs rax, rdx");
    esi = *(0x0060e290);
    *((rsp + 0x38)) = r11;
    *((rsp + 0x30)) = r10;
    *((rsp + 0x20)) = r8;
    if (rax > rcx) {
        rax = rcx;
    }
    rcx -= rax;
    rax = fcn_00408dd0 (rbp + rax, rsi, rcx);
    r8 = *((rsp + 0x20));
    r10 = *((rsp + 0x30));
    r11 = *((rsp + 0x38));
    if (rax == 0) {
        goto label_109;
    }
    *((rsp + 0x6e)) = 1;
    rcx = rax + 1;
label_28:
    rax = rcx;
    rax -= rbp;
    *((rsp + 0x20)) = rax;
    if (r12 == r14) {
        goto label_110;
    }
    if (r14 == 0) {
        goto label_111;
    }
label_29:
    rbp = *((rsp + 0x18));
    rbp += *((rsp + 0x20));
    *((rsp + 0x18)) = rbp;
    ebx = *((rsp + 0x6e));
    do {
label_11:
        if (rbp <= r13) {
            if (bl == 0) {
                goto label_112;
            }
        }
        eax = ebx;
        eax ^= 1;
        dl = (r15 == rcx) ? 1 : 0;
        al &= dl;
        if (al != 0) {
            goto label_113;
        }
        r12++;
        dl = (r14 != 0) ? 1 : 0;
        al = (r12 > r14) ? 1 : 0;
        if ((dl & al) != 0) {
            goto label_26;
        }
        r13 += r10;
        if (r12 == r8) {
            r13 = r11;
        }
        if (rbp <= r13) {
            goto label_114;
        }
    } while (r14 != 0);
    edx = 0;
    *((rsp + 0x58)) = r11;
    *((rsp + 0x40)) = r10;
    *((rsp + 0x38)) = r8;
    *((rsp + 0x30)) = rcx;
    fcn_004049a0 (1, 0);
    rcx = *((rsp + 0x30));
    r8 = *((rsp + 0x38));
    r10 = *((rsp + 0x40));
    r11 = *((rsp + 0x58));
    goto label_11;
    if (*((rsp + 0x48)) != 0) {
        goto label_115;
    }
    edx = 0x20;
    r12 = *((rsp + 8));
    rax = rdx;
    rdx:rax = rax * r12;
    __asm ("seto dl");
    edx = (int32_t) dl;
    if (rax < 0) {
        goto label_102;
    }
    if (rdx != 0) {
        goto label_102;
    }
    ebp = 0;
    rdi <<= 5;
    rax = fcn_00407690 (r12);
    *((rsp + 0x40)) = rax;
    rbx = rax;
    do {
        fcn_00403cc0 ();
        rbp++;
        rbx += 0x20;
        rax = fcn_004078c0 (*(0x0060e618));
        *((rbx - 0x18)) = 0xffffffff;
        *((rbx - 0x20)) = rax;
        *((rbx - 0x10)) = 0;
        *((rbx - 8)) = 0;
    } while (rbp != r12);
label_115:
    *((rsp + 0x18)) = 0;
    r12d = 1;
    *((rsp + 0x38)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x58)) = 0;
    do {
label_12:
        rax = fcn_00406fe0 (0, *((rsp + 0x50)), *((rsp + 0x28)));
        if (rax == -1) {
            goto label_116;
        }
        if (rax == 0) {
            goto label_117;
        }
        rbx = *((rsp + 0x50));
        rax += rbx;
        *((rsp + 0x10)) = rax;
    } while (rbx == rax);
    r15 = rbx;
    goto label_118;
label_13:
    if (rax == r12) {
        goto label_119;
    }
label_16:
    if (r13b != 0) {
        rax = r12 + 1;
        r12d = 1;
        if (*((rsp + 8)) == r12) {
            r12 = rax;
            goto label_14;
        }
    }
label_14:
    r15 = rbx;
    if (*((rsp + 0x10)) == rbx) {
        goto label_12;
    }
label_118:
    rbp = *((rsp + 0x10));
    rbp -= r15;
    rax = fcn_00408dd0 (r15, *(0x0060e290), rbp);
    if (rax == 0) {
        goto label_120;
    }
    rbx = rax + 1;
    r13d = 1;
    rbp -= r15;
label_15:
    rax = *((rsp + 0x48));
    if (rax != 0) {
        goto label_13;
    }
    r14 = *((rsp + 0x18));
    r14 <<= 5;
    al = fcn_00404500 (*((rsp + 0x40)), r14, *((rsp + 8)));
    r14 += *((rsp + 0x40));
    rax = errno_location ();
    *((rsp + 0x30)) = rax;
    if (*(0x0060e540) != 0) {
        goto label_121;
    }
    rcx = *((r14 + 0x10));
    edx = 1;
    rsi = rbp;
    rdi = r15;
    rax = fwrite_unlocked ();
    if (rax != 1) {
        goto label_122;
    }
    rcx = *((rsp + 0x30));
    al = (*(0x0060e760) != 0) ? 1 : 0;
    dl = (*(rcx) == 0x20) ? 1 : 0;
    eax &= edx;
label_24:
    eax = *((rsp + 0x20));
    esi = 1;
    if (al == 0) {
        eax = esi;
    }
    *((rsp + 0x20)) = al;
label_17:
    if (*((rsp + 0x38)) != 0) {
        goto label_123;
    }
label_23:
    if (r13b == 0) {
        goto label_14;
    }
    rax = *((rsp + 0x18));
    if (rax != *((rsp + 8))) {
        goto label_14;
    }
    if (*((rsp + 0x20)) == 0) {
        goto label_124;
    }
    *((rsp + 0x18)) = 0;
    eax = *((rsp + 0x20));
    *((rsp + 0x20)) = 0;
    *((rsp + 0x58)) = al;
    goto label_14;
    if (*((rsp + 0x48)) != 0) {
        goto label_125;
    }
    rax = *((rsp + 0x10));
    edx = 0;
    rax = rdx:rax / r8;
    rdx = rdx:rax % r8;
    fcn_00404ab0 (rax, *((rsp + 0x50)), *((rsp + 0x28)), rbp, *((rsp + 8)));
label_26:
    eax = close (0);
    if (eax != 0) {
        goto label_126;
    }
    eax = fcn_004046f0 (0, *(0x0060e294), *(0x0060e758), *(0x0060e618));
    eax = 0;
    return rax;
label_120:
    rbx = *((rsp + 0x10));
    r13d = 0;
    goto label_15;
label_119:
    if (*(0x0060e540) != 0) {
        goto label_127;
    }
    rcx = stdout;
    edx = 1;
    rsi = rbp;
    rdi = r15;
    rax = fwrite_unlocked ();
    if (rax == 1) {
        goto label_16;
    }
    rdi = stdout;
    clearerr_unlocked ();
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    rax = error (1, *(rax), 0x409c49);
label_122:
    rax = *((rsp + 0x30));
    if (*(rax) != 0x20) {
        goto label_128;
    }
    if (*(0x0060e760) != 0) {
        goto label_17;
    }
label_128:
    rax = fcn_00406e40 (0, 3, *(r14));
    rcx = rax;
    rax = *((rsp + 0x30));
    eax = 0;
    error (1, *(rax), 0x409c49);
label_96:
    edi = (int32_t) dil;
    rdx = r12;
    *((rsp + 0x38)) = r8;
    fcn_004049a0 (rdi, *((rsp + 0x18)));
    rax = *((rsp + 0x28));
    r13 = *((rsp + 0x30));
    r8 = *((rsp + 0x38));
    *((rsp + 0x20)) = rax;
    if (r12 <= rax) {
        goto label_18;
    }
    rsi = rax;
    *((rsp + 0x30)) = r8;
    r12 = rax;
    rax = fcn_004076f0 (*((rsp + 0x18)), rsi);
    r8 = *((rsp + 0x30));
    *((rsp + 0x20)) = r12;
    *((rsp + 0x18)) = rax;
    if (r8 != 0) {
        goto label_19;
    }
label_99:
    r12d = 0;
    goto label_20;
label_100:
    rsp + 0x10 = (rbp != 0) ? 1 : 0;
    if (rbp == 0) {
        goto label_129;
    }
    r15 = rbp;
    goto label_21;
label_98:
    rdx = rbp;
    r13 += rbp;
    fcn_004049a0 (rdi, rbx);
    goto label_22;
label_121:
    rax = fcn_004052d0 (*((r14 + 8)), r15, rbp);
    rax = *((rsp + 0x30));
    if (rbp == rax) {
        goto label_130;
    }
    if (*(rax) != 0x20) {
        goto label_131;
    }
    if (*(0x0060e760) != 0) {
        goto label_17;
    }
label_131:
    rax = fcn_00406e40 (0, 3, *(r14));
    rcx = rax;
    rax = *((rsp + 0x30));
    eax = 0;
    error (1, *(rax), 0x409c49);
label_123:
    eax = fcn_00407e60 (*((r14 + 0x10)));
    if (eax != 0) {
        goto label_132;
    }
    *((r14 + 0x10)) = 0;
    *((r14 + 8)) = 0xfffffffe;
    goto label_23;
label_127:
    rax = fcn_004052d0 (1, r15, rbp);
    if (rbp == rax) {
        goto label_16;
    }
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    rax = error (1, *(rax), 0x409c49);
label_130:
    al = (*(rax) == 0x20) ? 1 : 0;
    dl = (*(0x0060e760) != 0) ? 1 : 0;
    eax &= edx;
    goto label_24;
label_92:
    if (rbx != r13) {
        rbx -= r13;
        edi = (int32_t) r12b;
        r12d = 0;
        rdx = rbx;
        fcn_004049a0 (rdi, r13);
    }
    if (*((rsp + 0x10)) != 0) {
        goto label_25;
    }
    goto label_26;
label_114:
    ebx = 0;
    goto label_11;
label_112:
    eax = *((rsp + 0x6f));
label_113:
    rsi = *((rsp + 0x20));
    *((rsp + 0x6f)) = al;
    ebx = *((rsp + 0x6e));
    goto label_27;
label_82:
    rcx |= 0xffffffffffffffff;
    fcn_00404ab0 (*((rsp + 8)), *((rsp + 0x50)), *((rsp + 0x28)), rcx, 0);
    goto label_26;
label_109:
    rcx = r15;
    *((rsp + 0x6e)) = 0;
    goto label_28;
label_94:
    if (r12 != 0) {
        goto label_133;
    }
label_36:
    free (*((rsp + 0x18)));
    goto label_26;
label_111:
    rdx = *((rsp + 0x20));
    edi = (int32_t) bl;
    *((rsp + 0x58)) = r11;
    *((rsp + 0x40)) = r10;
    *((rsp + 0x38)) = r8;
    *((rsp + 0x30)) = rcx;
    fcn_004049a0 (rdi, rbp);
    r11 = *((rsp + 0x58));
    r10 = *((rsp + 0x40));
    r8 = *((rsp + 0x38));
    rcx = *((rsp + 0x30));
    goto label_29;
label_117:
    if (*((rsp + 0x48)) != 0) {
        goto label_26;
    }
    if (*((rsp + 0x58)) != 0) {
        goto label_124;
    }
    rbx = *((rsp + 0x18));
label_31:
    rbp = *((rsp + 0x40));
    r12d = 0;
    r13 = *((rsp + 8));
    goto label_134;
label_30:
    esi = *((rbp + 8));
    if (esi >= 0) {
        fcn_004046f0 (*((rbp + 0x10)), rsi, *((rbp + 0x18)), *(rbp));
    }
    r12++;
    *((rbp + 8)) = 0xfffffffe;
    rbp += 0x20;
    if (r12 == r13) {
        goto label_26;
    }
label_134:
    if (rbx > r12) {
        goto label_30;
    }
    if (*(0x0060e541) != 0) {
        goto label_30;
    }
    rax = fcn_00404500 (*((rsp + 0x40)), r12, r13);
    goto label_30;
label_124:
    rbx = *((rsp + 8));
    goto label_31;
label_110:
    rdx = rax;
    *((rsp + 0x58)) = r11;
    *((rsp + 0x40)) = r10;
    rbx = rax;
    *((rsp + 0x38)) = r8;
    *((rsp + 0x30)) = rcx;
    rax = fcn_004052d0 (1, rbp, rdx);
    rcx = *((rsp + 0x30));
    r8 = *((rsp + 0x38));
    r10 = *((rsp + 0x40));
    r11 = *((rsp + 0x58));
    if (rbx == rax) {
        goto label_29;
    }
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_125:
    rax = *((rsp + 8));
    if (*((rsp + 0x48)) > rax) {
        goto label_135;
    }
    if (*((rsp + 0x10)) < rax) {
        goto label_135;
    }
    rax = *((rsp + 0x10));
    rdi = *((rsp + 8));
    edx = 0;
    rcx = *((rsp + 0x48));
    rax = rdx:rax / rdi;
    rdx = rdx:rax % rdi;
    rsi = rcx - 1;
    rsi *= rax;
    rbx = rsi;
    if (rcx != rdi) {
        rax *= rcx;
        *((rsp + 0x10)) = rax;
    }
    if (rbp <= rsi) {
        goto label_136;
    }
    rbp -= rsi;
    rsi += rdi;
    memmove (*((rsp + 0x50)), rsi, rbp);
label_37:
    r13 = *((rsp + 0x28));
    r14 = *((rsp + 0x10));
    r12 |= 0xffffffffffffffff;
    rax = rbp;
    r15 = *((rsp + 0x50));
label_32:
    if (r14 <= rbx) {
        goto label_26;
    }
    if (rax == -1) {
        goto label_137;
    }
label_33:
    if (rax == 0) {
        goto label_26;
    }
    rsi = r15;
    edi = 1;
    rbp -= rbx;
    if (rbp > rax) {
    }
    rax = fcn_004052d0 (rdi, rsi, rbp);
    if (rbp != rax) {
        rax = errno_location ();
        if (*(0x0060e760) != 0) {
            if (*(rax) == 0x20) {
                goto label_138;
            }
        }
        r13 = rax;
        rax = fcn_00406e40 (0, 3, 0x40c282);
        rcx = rax;
        eax = 0;
        error (1, *(r13), 0x409c49);
    }
label_138:
    rbx += rbp;
    rax = r12;
    goto label_32;
label_137:
    rax = fcn_00406fe0 (0, r15, r13);
    if (rax != -1) {
        goto label_33;
    }
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    rax = error (1, *(rax), 0x409c49);
label_89:
    r14 = imp.__libc_start_main;
    if (r14 == 0) {
        goto label_139;
    }
    rbx += rax;
    eax = imp.__libc_start_main;
    eax &= 0xd000;
    if (eax == 0x8000) {
        if (r14 >= rbx) {
            goto label_140;
        }
    }
    edx = 2;
    esi = 0;
    edi = 0;
    rax = lseek ();
    r14 = rax;
    if (rax < 0) {
        goto label_43;
    }
    if (rbx != rax) {
        edx = 0;
        edi = 0;
        rsi = rbx;
        rax = lseek ();
        if (rax < 0) {
            goto label_43;
        }
        if (r14 >= rbx) {
            r14 = rbx;
            goto label_140;
        }
    }
label_140:
    rax = 0x7fffffffffffffff;
    r14 -= rbx;
    r12 = r14;
    r12 += rbp;
    if (r12 != rax) {
        goto label_34;
    }
label_139:
    errno_location ();
    *(rax) = 0x4b;
label_43:
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    edx = 5;
    rax = dcgettext (0, "%s: cannot determine file size");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_104:
    r13 = r10 - 1;
    r12d = 1;
    *((rsp + 0x18)) = 0;
    goto label_35;
label_105:
    rsi = rbx;
    edi = 0;
    edx = 1;
    rsi -= rbp;
    rbp |= 0xffffffffffffffff;
    rax = lseek ();
    *((rsp + 0x18)) = rbx;
    r10 = *((rsp + 0x20));
    if (rax >= 0) {
        goto label_35;
    }
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_133:
    rdx = r12;
    dil = (r13 == 0) ? 1 : 0;
    fcn_004049a0 (0, *((rsp + 0x18)));
    goto label_36;
label_136:
    edx = 1;
    edi = 0;
    rbp |= 0xffffffffffffffff;
    rax = lseek ();
    if (rax >= 0) {
        goto label_37;
    }
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_107:
    *((rsp + 0x30)) = r11;
    rax = fcn_00406fe0 (0, *((rsp + 0x50)), *((rsp + 0x28)));
    r11 = *((rsp + 0x30));
    if (rax != -1) {
        goto label_38;
    }
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_87:
    r9 += rsi;
    goto label_5;
label_71:
    edx = 5;
label_40:
    rax = dcgettext (0, "--filter does not process a chunk extracted to stdout");
    eax = 0;
    error (0, 0, rax);
label_57:
    fcn_00404cf0 (1);
label_108:
    *((rsp + 0x20)) = bl;
    r15 = r10;
    goto label_39;
label_102:
    fcn_004078e0 ();
label_106:
    r12 -= 0xffffffffffffffff;
    if (*((rsp + 0x48)) == 0) {
        goto label_141;
    }
    goto label_26;
    do {
        edx = 0;
        r12++;
        fcn_004049a0 (1, 0);
label_141:
    } while (r12 <= *((rsp + 8)));
    goto label_26;
label_132:
    rax = fcn_00406e40 (0, 3, *(r14));
    rcx = rax;
    rax = *((rsp + 0x30));
    eax = 0;
    error (1, *(rax), 0x409c49);
label_83:
    *((rsp + 0x10)) = r8d;
    rax = fcn_00405350 (*((rsp + 8)), rsp + 0x70, rdx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "line count option -%s%c... is too large");
    r8d = *((rsp + 0x10));
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_58:
    edx = 5;
    esi = "cannot split in more than one way";
    goto label_40;
label_65:
    *((rsp + 8)) = r8d;
    rax = fcn_00406fc0 (r14);
    r8d = *((rsp + 8));
    edx = 5;
    esi = "%s: invalid start value for hexadecimal suffix";
    rbx = rax;
    if (r8d == 0x64) {
        goto label_142;
    }
label_42:
    rax = dcgettext (0, rsi);
    do {
        rcx = rbx;
        eax = 0;
        error (0, 0, rax);
        fcn_00404cf0 (1);
label_90:
        rax = fcn_00405350 (*((rsp + 8)), rsp + 0x70, rdx);
        rax = fcn_00406fc0 (rax);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "invalid number of chunks");
        r8 = rbx;
        rcx = rax;
        eax = 0;
        error (1, 0x4b, "%s: %s");
label_142:
        dcgettext (0, "%s: invalid start value for numerical suffix");
    } while (1);
label_49:
    esi = "0123456789abcdef";
    goto label_41;
label_56:
    edx = 5;
    rax = dcgettext (0, "multiple separator characters specified");
    eax = 0;
    error (1, 0, rax);
label_55:
    rax = fcn_00406fc0 (r14);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "multi-character separator %s");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_64:
    rax = fcn_00406fc0 (r14);
    edx = 5;
    esi = "invalid suffix %s, contains directory separator";
    rbx = rax;
    goto label_42;
label_80:
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_79:
    rax = fcn_00406d70 (4, *(0x0060e5f0));
    edx = 5;
    rax = dcgettext (0, "cannot open %s for reading");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_88:
    rax = errno_location ();
    if (*(rax) != 0x1d) {
        goto label_43;
    }
    *(rax) = 0;
    goto label_43;
label_126:
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_135:
    assert_fail ("k && n && k <= n && n <= file_size", "src/split.c", 0x3df, "bytes_chunk_extract");
label_103:
    assert_fail ("n && k <= n && n <= file_size", "src/split.c", 0x361, "lines_chunk_split");
label_97:
    if (r14 == 0) {
        goto label_143;
    }
    if (r15 != 0) {
        goto label_44;
    }
label_143:
    if (r14 != 0) {
        goto label_45;
    }
    if (rbp == 0) {
        goto label_45;
    }
    r15 = rbp;
    goto label_44;
label_129:
    r12d = 0;
    *((rsp + 0x10)) = 1;
    goto label_10;
label_86:
    edx = 5;
    rax = dcgettext (0, "the suffix length needs to be at least %lu");
    rcx = r14;
    eax = 0;
    error (1, 0, rax);
label_78:
    rax = fcn_00406fc0 (*((rbx + rsi + 0x10)));
    edx = 5;
    esi = "extra operand %s";
    rbx = rax;
    goto label_42;
label_73:
    rax = fcn_00406fc0 (0x409bea);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid number of lines");
    r8 = rbx;
    rcx = rax;
    eax = 0;
    error (0, 0, "%s: %s");
    fcn_00404cf0 (1);
label_54:
    edx = 5;
    rax = dcgettext (0, "empty record separator");
    eax = 0;
    error (1, 0, rax);
label_91:
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_116:
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_93:
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
label_101:
    *((rsp + 0x10)) = 1;
    r12d = 0;
    goto label_45;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x403c0b */
#include <stdint.h>
 
int32_t fcn_00403c0b (void) {
    eax = 0x60e4c8;
    if (rax != 0x60e4c8) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x60e4c8;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x403c61 */
#include <stdint.h>
 
int64_t fcn_00403c61 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060e508) != 0) {
        goto label_0;
    }
    r12d = section..dtors;
    ebx = 0x60de48;
    rbx -= section..dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060e510) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00403c0b ();
    *(0x0060e508) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x403cb8 */
#include <stdint.h>
 
int64_t fcn_00403cb8 (void) {
    do {
        esi = 0x60e4c8;
        ecx = 2;
        rsi -= 0x60e4c8;
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
            edi = 0x60e4c8;
            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x403cc0 */
#include <stdint.h>
 
uint64_t fcn_00403cc0 (void) {
    rbp = imp.__libc_start_main;
    rbx = imp.__libc_start_main;
    if (rbp == 0) {
        goto label_2;
    }
    rax = rbx - 1;
    if (rbx == 0) {
        goto label_3;
    }
    r9 = imp.__libc_start_main;
    r8d = *(0x0060e2a0);
    rsi = *(str.abcdefghijklmnopqrstuvwxyz);
    rdi = imp.__libc_start_main;
    rcx = r9 + rbx*8 - 8;
    while (rax != 0) {
label_0:
        edx = *((rsi + rdx));
        *((rdi + rax)) = dl;
        if (dl != 0) {
            goto label_1;
        }
        *(rcx) = 0;
        edx = *(rsi);
        rcx -= 8;
        *((rdi + rax)) = dl;
        rax--;
        if (rax == -1) {
            goto label_3;
        }
        rdx = *(rcx);
        rdx++;
        *(rcx) = rdx;
    }
    if (r8b == 0) {
        goto label_0;
    }
    rax = *(r9);
    if (*((rsi + rax + 1)) == 0) {
        goto label_2;
    }
    eax = *((rsi + rdx));
    *(rdi) = al;
    if (al == 0) {
        goto label_4;
    }
    do {
label_1:
        return rax;
label_2:
        r12 = imp.__libc_start_main;
        if (r12 == 0) {
            rax = strlen (*(0x0060e620));
            rdi = imp.__libc_start_main;
            r13 = rax;
            *(0x0060e530) = rax;
            eax = 0;
            if (rdi != 0) {
                rax = strlen (rdi);
            }
            rbx += r13;
            *(0x0060e528) = rax;
            rax += rbx;
            rsi = rax + 1;
            *(0x0060e538) = rax;
            if (r13 > rsi) {
                goto label_5;
            }
            rax = fcn_004076f0 (rbp, rsi);
            rbx = imp.__libc_start_main;
            rdi = rax;
            *(0x0060e618) = rax;
            memcpy (rdi, *(0x0060e620), rbx);
            rax = *(str.abcdefghijklmnopqrstuvwxyz);
            r13 = imp.__libc_start_main;
        } else {
            rbx++;
            rax = r12 + 2;
            rsi = r12 + 3;
            *(0x0060e538) = rax;
            *(0x0060e608) = rbx;
            if (rsi < *(0x0060e530)) {
                goto label_5;
            }
            rax = fcn_004076f0 (rbp, rsi);
            r13 = imp.__libc_start_main;
            rcx = imp.__libc_start_main;
            *(0x0060e618) = rax;
            rax = *(str.abcdefghijklmnopqrstuvwxyz);
            rdx = *(r13);
            rbx = rcx + 1;
            *(0x0060e530) = rbx;
            edx = *((rax + rdx));
            *((rbp + rcx)) = dl;
        }
        rcx = rbp + rbx;
        rbx = imp.__libc_start_main;
        esi = *(rax);
        rdi = rcx;
        *(0x0060e610) = rcx;
        memset (rdi, rsi, rbx);
        rsi = imp.__libc_start_main;
        if (rsi != 0) {
            memcpy (rax + rbx, rsi, *(0x0060e528));
        }
        rax = imp.__libc_start_main;
        *((rbp + rax)) = 0;
        free (r13);
        rax = fcn_00407860 (rbx, 8);
        r13 = imp.__libc_start_main;
        rbx = rax;
        *(0x0060e520) = rax;
    } while (r13 == 0);
    if (r12 != 0) {
        goto label_6;
    }
    rax = strlen (r13);
    r12 = imp.__libc_start_main;
    r12 <<= 3;
    rdi -= rax;
    rdi += *(0x0060e610);
    memcpy (r12, r13, rax);
    rcx = rbp - 1;
    if (rbp == 0) {
        goto label_1;
    }
    rbp = -rbp;
    rax = r12 + rbp*8;
    rax += rbx;
    do {
        edx = *((r13 + rcx));
        edx -= 0x30;
        rdx = (int64_t) edx;
        *((rax + rcx*8)) = rdx;
        rcx--;
    } while (rcx != -1);
    return rax;
label_5:
    fcn_004078e0 ();
label_4:
    *(rcx) = 0;
    eax = *(rsi);
    *(rdi) = al;
label_3:
    edx = 5;
    rax = dcgettext (0, "output file suffixes exhausted");
    eax = 0;
    error (1, 0, rax);
label_6:
    return assert_fail ("! widen", "src/split.c", 0x198, "next_file_name");
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x403fc0 */
#include <stdint.h>
 
uint64_t fcn_00403fc0 (int64_t arg1) {
    int64_t fildes;
    int64_t var_8h;
    rdi = arg1;
    r12 = rdi;
    if (*(0x0060e760) == 0) {
        goto label_5;
    }
    rax = getenv ("SHELL");
    edx = 1;
    rsi = r12;
    edi = "FILE";
    eax = "/bin/sh";
    if (rax == 0) {
    }
    eax = setenv (rdi, rsi, rdx);
    if (eax != 0) {
        goto label_6;
    }
    if (*(0x0060e542) != 0) {
        goto label_7;
    }
label_1:
    rdi = rsp;
    eax = pipe ();
    if (eax != 0) {
        goto label_8;
    }
    eax = fork ();
    ebx = eax;
    if (eax != 0) {
        if (eax == 0xffffffff) {
            goto label_9;
        }
        eax = close (*(rsp));
        if (eax != 0) {
            goto label_10;
        }
        rdx = imp.__libc_start_main;
        rcx = imp.__libc_start_main;
        *(0x0060e758) = ebx;
        rax = imp.__libc_start_main;
        if (rdx == rcx) {
            goto label_11;
        }
label_3:
        rcx = rdx + 1;
        *(0x0060e740) = rcx;
        ecx = *((rsp + 4));
        *((rax + rdx*4)) = ecx;
        ebx = *((rsp + 4));
label_0:
        eax = ebx;
        return rax;
    }
    ebx = 0;
    if (*(0x0060e740) == 0) {
        goto label_12;
    }
    do {
        rax = imp.__libc_start_main;
        eax = close (*((rax + rbx*4)));
        if (eax != 0) {
            goto label_13;
        }
        rbx++;
    } while (*(0x0060e740) > rbx);
label_12:
    eax = close (*((rsp + 4)));
    r12d = eax;
    rax = errno_location ();
    rbx = rax;
    if (r12d != 0) {
        goto label_14;
    }
    edi = *(rsp);
    if (edi != 0) {
        esi = 0;
        eax = dup2 ();
        if (eax != 0) {
            goto label_15;
        }
        eax = close (*(rsp));
        if (eax != 0) {
            goto label_16;
        }
    }
    edx = 0;
    esi = 0x60e6c0;
    edi = 2;
    sigprocmask ();
    r12 = imp.__libc_start_main;
    rax = fcn_00405180 (rbp);
    r8d = 0;
    edx = 0x409a3e;
    rdi = rbp;
    rcx = r12;
    rsi = rax;
    eax = 0;
    execl ();
    edx = 5;
    rax = dcgettext (0, "failed to run command: \"%s -c %s\");
    r8 = r12;
    rcx = rbp;
    eax = 0;
    eax = error (1, *(rbx), rax);
label_5:
    if (*(0x0060e542) != 0) {
        goto label_17;
    }
label_2:
    eax = 0;
    eax = fcn_00405210 (r12, 0x41, 0x1b6, rcx);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    rdx = rsp;
    esi = eax;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_18;
    }
    rax = *((rsp + 8));
    if (*(0x0060e568) == rax) {
        rax = *(rsp);
        if (*(0x0060e560) == rax) {
            goto label_19;
        }
    }
    esi = 0;
    edi = ebx;
    eax = ftruncate ();
    if (eax == 0) {
        goto label_0;
    }
    rax = fcn_00406e40 (0, 3, r12);
    edx = 5;
    rax = dcgettext (0, "%s: error truncating");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    rax = error (1, *(rax), rbx);
label_7:
    rax = fcn_00406e40 (0, 3, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "executing with FILE=%s\n");
    rdi = stdout;
    rcx = rbx;
    esi = 1;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
    goto label_1;
label_16:
    edx = 5;
    rax = dcgettext (0, "closing input pipe");
    eax = 0;
    error (1, *(rbx), rax);
label_17:
    rax = fcn_00406d70 (4, rdi);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "creating file %s\n");
    rdi = stdout;
    rcx = rbx;
    esi = 1;
    rdx = rax;
    eax = 0;
    rax = fprintf_chk ();
    goto label_2;
label_11:
    if (rax == 0) {
        goto label_20;
    }
    rdx = 0x1555555555555554;
    if (rcx > rdx) {
        goto label_21;
    }
    rdx = rcx;
    rdx >>= 1;
    rcx = rcx + rdx + 1;
    do {
label_4:
        *(0x0060e748) = rcx;
        rax = fcn_004076f0 (rax, rcx*4);
        rdx = imp.__libc_start_main;
        *(0x0060e750) = rax;
        goto label_3;
label_20:
        if (rcx == 0) {
            goto label_22;
        }
        rsi = rcx;
        edx = 0;
        rsi >>= 0x3e;
        rsi = rcx;
        dl = (rsi != 0) ? 1 : 0;
        rsi <<= 2;
        if (rsi < 0) {
            goto label_21;
        }
    } while (rdx == 0);
label_21:
    fcn_004078e0 ();
label_22:
    esi = 0x80;
    ecx = 0x20;
    goto label_4;
label_13:
    edx = 5;
    rax = dcgettext (0, "closing prior pipe");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_10:
    edx = 5;
    rax = dcgettext (0, "failed to close input pipe");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_19:
    rax = fcn_00406d70 (4, r12);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s would overwrite input; aborting");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_9:
    edx = 5;
    rax = dcgettext (0, "fork system call failed");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_14:
    edx = 5;
    rax = dcgettext (0, "closing output pipe");
    eax = 0;
    error (1, *(rbx), rax);
label_8:
    edx = 5;
    rax = dcgettext (0, "failed to create pipe");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_18:
    rax = fcn_00406d70 (4, r12);
    edx = 5;
    rax = dcgettext (0, "failed to stat %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
label_15:
    edx = 5;
    rax = dcgettext (0, "moving input pipe");
    eax = 0;
    error (1, *(rbx), rax);
label_6:
    edx = 5;
    rax = dcgettext (0, "failed to set FILE environment variable");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x404500 */
#include <stdint.h>
 
uint64_t fcn_00404500 (void * arg1, int64_t arg2, int32_t arg3) {
    int64_t errname;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = rsi;
    r13 <<= 5;
    r13 += rdi;
    ebp = 0;
    eax = *((r13 + 8));
    if (eax >= 0) {
label_2:
        eax = ebp;
        return eax;
    }
    rbx = rsi - 1;
    r14 = rdx - 1;
    r12 = rdi;
    r15 = rsi;
    if (rsi == 0) {
        rbx = r14;
    }
    rdi = *(r13);
    if (eax == 0xffffffff) {
        goto label_3;
    }
label_0:
    eax = 0;
    eax = fcn_00405210 (rdi, 0xc01, rdx, rcx);
    if (eax >= 0) {
        goto label_4;
    }
label_1:
    rax = errno_location ();
    r8 = rax;
    eax = *(rax);
    eax -= 0x17;
    if (eax <= 1) {
        goto label_5;
    }
    goto label_6;
    do {
        rax = rbx - 1;
        if (rbx == 0) {
            rax = r14;
        }
        rbx = rax;
        if (rax == r15) {
            goto label_7;
        }
label_5:
        rbp <<= 5;
        rbp += r12;
        eax = *((rbp + 8));
    } while (eax < 0);
    *((rsp + 8)) = r8;
    eax = fcn_00407e60 (*((rbp + 0x10)));
    if (eax != 0) {
        goto label_8;
    }
    *((rbp + 8)) = 0xfffffffe;
    eax = *((r13 + 8));
    *((rbp + 0x10)) = 0;
    rdi = *(r13);
    if (eax != 0xffffffff) {
        goto label_0;
    }
label_3:
    eax = fcn_00403fc0 (rdi);
    if (eax < 0) {
        goto label_1;
    }
label_4:
    *((r13 + 8)) = eax;
    esi = 0x409a74;
    edi = eax;
    rax = fdopen ();
    *((r13 + 0x10)) = rax;
    if (rax != 0) {
        eax = imp.__libc_start_main;
        *(0x0060e758) = 0;
        *((r13 + 0x18)) = eax;
        goto label_2;
label_7:
        *((rsp + 8)) = r8;
        rax = fcn_00406e40 (0, 3, *(r13));
        r8 = *((rsp + 8));
        rcx = rax;
        eax = 0;
        error (1, *(r8), 0x409c49);
label_6:
        *((rsp + 8)) = r8;
        rax = fcn_00406e40 (0, 3, *(r13));
        r8 = *((rsp + 8));
        rcx = rax;
        eax = 0;
        error (1, *(r8), 0x409c49);
label_8:
        rax = fcn_00406e40 (0, 3, *(rbp));
        r8 = *((rsp + 8));
        rcx = rax;
        eax = 0;
        error (1, *(r8), 0x409c49);
    }
    rax = fcn_00406e40 (0, 3, *(r13));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4046f0 */
#include <stdint.h>
 
uint64_t fcn_004046f0 (void * arg1, int64_t arg2, void * arg3, int64_t arg4) {
    int64_t var_ch;
    int64_t wstatus;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r12d = edx;
    rbx = rcx;
    if (rdi == 0) {
        goto label_5;
    }
    eax = fcn_00407e60 (rdi);
    if (eax != 0) {
        rax = errno_location ();
        r13 = rax;
        if (*(0x0060e760) != 0) {
            if (*(rax) == 0x20) {
                goto label_6;
            }
        }
        rax = fcn_00406e40 (0, 3, rbx);
        rcx = rax;
        eax = 0;
        eax = error (1, *(r13), 0x409c49);
    }
label_6:
    if (ebp < 0) {
        goto label_2;
    }
label_0:
    rdi = imp.__libc_start_main;
    if (rdi == 0) {
        goto label_2;
    }
    rsi = imp.__libc_start_main;
    if (ebp == *(rsi)) {
        goto label_7;
    }
    rdx = rsi + 4;
    rdi--;
    eax = 0;
    while (rdi != rax) {
        rcx = rdx;
        rax++;
        rdx += 4;
        if (*(rcx) == ebp) {
            goto label_8;
        }
    }
    do {
label_2:
        if (r12d > 0) {
            goto label_9;
        }
label_1:
        return rax;
label_5:
    } while (esi < 0);
    eax = close (ebp);
    if (eax >= 0) {
        goto label_0;
    }
    rax = fcn_00406e40 (0, 3, rbx);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    rax = error (1, *(rax), 0x409c49);
label_9:
    *((rsp + 0x1c)) = 0;
    eax = waitpid (r12d, rsp + 0x1c, 0);
    if (eax == 0xffffffff) {
        goto label_10;
    }
label_3:
    ecx = *((rsp + 0x1c));
    ebp &= 0x7f;
    eax = rbp + 1;
    if (al <= 1) {
        goto label_11;
    }
    if (ebp == 0xd) {
        goto label_1;
    }
    eax = fcn_00409040 (ebp, rsp + 0x20);
    if (eax != 0) {
        goto label_12;
    }
label_4:
    r12 = imp.__libc_start_main;
    rax = fcn_00406e40 (0, 3, rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "with FILE=%s, signal %s from command: %s");
    r9 = r12;
    r8 = rsp + 0x20;
    rcx = rbx;
    eax = 0;
    error (rbp + 0x80, 0, rax);
    return rax;
label_7:
    rcx = rsi;
    rdi--;
label_8:
    eax = *((rsi + rdi*4));
    *(0x0060e740) = rdi;
    *(rcx) = eax;
    goto label_2;
label_11:
    if (ebp != 0) {
        goto label_13;
    }
    ebp = (int32_t) ch;
    if (ebp == 0) {
        goto label_1;
    }
    r12 = imp.__libc_start_main;
    rax = fcn_00406e40 (0, 3, rbx);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "with FILE=%s, exit %d from command: %s");
    r9 = r12;
    r8d = ebp;
    rcx = rbx;
    eax = 0;
    error (ebp, 0, rax);
    goto label_1;
label_10:
    rax = errno_location ();
    if (*(rax) == 0xa) {
        goto label_3;
    }
    edx = 5;
    rax = dcgettext (0, "waiting for child process");
    eax = 0;
    rax = error (1, *(rbp), rax);
label_12:
    r8d = ebp;
    ecx = 0x409a90;
    edx = 0x13;
    eax = 0;
    esi = 1;
    rdi = rsp + 0x20;
    sprintf_chk ();
    goto label_4;
label_13:
    edx = 5;
    *((rsp + 0xc)) = ecx;
    rax = dcgettext (0, "unknown status from command (0x%X)");
    ecx = *((rsp + 0xc));
    eax = 0;
    rax = error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4049a0 */
#include <stdint.h>
 
int64_t fcn_004049a0 (void * arg2, int64_t arg3) {
    rsi = arg2;
    rdx = arg3;
    rbx = rdx;
    if (dil == 0) {
        goto label_0;
    }
    rax = rsi;
    rax |= rdx;
    if (rax == 0) {
        if (*(0x0060e541) != 0) {
            goto label_1;
        }
    }
    fcn_004046f0 (0, *(0x0060e294), *(0x0060e758), *(0x0060e618));
    fcn_00403cc0 ();
    eax = fcn_00403fc0 (*(0x0060e618));
    edi = eax;
    *(0x0060e294) = eax;
    if (eax < 0) {
        goto label_2;
    }
    do {
        rax = fcn_004052d0 (rdi, rbp, rbx);
        if (rax != rbx) {
            rax = errno_location ();
            rbx = rax;
            if (*(0x0060e760) != 0) {
                eax = 0;
                if (*(rbx) == 0x20) {
                    goto label_3;
                }
            }
            rax = fcn_00406e40 (0, 3, *(0x0060e618));
            rcx = rax;
            eax = 0;
            error (1, *(rbx), 0x409c49);
        }
label_1:
        eax = 1;
label_3:
        return rax;
label_0:
        edi = *(0x0060e294);
    } while (1);
label_2:
    rax = fcn_00406e40 (0, 3, *(0x0060e618));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x404ab0 */
#include <stdint.h>
 
uint64_t fcn_00404ab0 (int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, int32_t arg5) {
    int32_t var_8h;
    int64_t var_10h;
    int64_t var_1eh;
    uint32_t var_1fh;
    uint32_t var_20h;
    uint32_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r15 = rdi;
    r14d = 0;
    r12 = rdi;
    ebx = 1;
    *((rsp + 0x20)) = rsi;
    *((rsp + 0x28)) = rdx;
    if (rcx == -1) {
        goto label_5;
    }
    r13 = rcx;
    rsp + 0x1f = (rcx < rdx) ? 1 : 0;
    if (r13 < r12) {
        goto label_6;
    }
label_1:
    r9 = *((rsp + 0x20));
    r11b = (r8 == 0) ? 1 : 0;
    while (bpl == 0) {
label_0:
        ebx = (int32_t) bl;
        r14 += rbx;
        bl = (r14 < r8) ? 1 : 0;
        bl |= r11b;
        if (bl == 0) {
            if (bpl == 0) {
                goto label_4;
            }
        }
        r13 -= r12;
        r9 += r12;
        r12 = r15;
        if (r15 > r13) {
            goto label_7;
        }
        bpl |= bl;
    }
    rsi = r9;
    edi = (int32_t) bl;
    rdx = r12;
    *((rsp + 0x10)) = r8;
    *((rsp + 0x1e)) = r11b;
    *((rsp + 8)) = r9;
    eax = fcn_004049a0 (rdi, rsi);
    r8 = *((rsp + 0x10));
    r11d = *((rsp + 0x1e));
    r9 = *((rsp + 8));
    goto label_0;
label_7:
    if (r13 != 0) {
        goto label_8;
    }
label_2:
    if (*((rsp + 0x1f)) != 0) {
        goto label_9;
    }
label_5:
    if (bpl == 0) {
        goto label_10;
    }
label_3:
    *((rsp + 8)) = r8;
    rax = fcn_00406fe0 (0, *((rsp + 0x20)), *((rsp + 0x28)));
    r8 = *((rsp + 8));
    r13 = rax;
    if (rax == -1) {
        goto label_11;
    }
    rsp + 0x1f = (rax == 0) ? 1 : 0;
    if (r13 >= r12) {
        goto label_1;
    }
label_6:
    if (r13 == 0) {
        goto label_2;
    }
    eax = ebp;
    al |= bl;
    if (al != 0) {
        goto label_12;
    }
    eax = (int32_t) al;
    ebp = 0;
    edx = 1;
    r14 += rax;
    bl = (r8 == r14) ? 1 : 0;
    bl &= dl;
    if (bl == 0) {
        goto label_13;
    }
    do {
label_4:
        return rax;
label_12:
        r9 = *((rsp + 0x20));
label_8:
        edi = (int32_t) bl;
        rdx = r13;
        *((rsp + 8)) = r8;
        eax = fcn_004049a0 (rdi, r9);
        r8 = *((rsp + 8));
        edx = eax;
        eax = ebx;
        eax = (int32_t) al;
        edx ^= 1;
        r14 += rax;
        bl = (r8 == r14) ? 1 : 0;
        bl &= dl;
    } while (bl != 0);
label_13:
    r12 -= r13;
    goto label_2;
label_10:
    rsi = r12;
    edi = 0;
    edx = 1;
    *((rsp + 8)) = r8;
    rax = lseek ();
    r8 = *((rsp + 8));
    eax = 1;
    if (rax != -1) {
        r12 = r15;
    }
    if (rax != -1) {
        ebx = eax;
    }
    goto label_3;
label_9:
    rbx = r14 + 1;
    if (r14 < r8) {
        goto label_14;
    }
    goto label_4;
    do {
        rbx = rax;
label_14:
        edx = 0;
        *((rsp + 8)) = r8;
        fcn_004049a0 (1, 0);
        r8 = *((rsp + 8));
        rax = rbx + 1;
    } while (r8 != rbx);
    return rax;
label_11:
    rax = fcn_00406e40 (0, 3, *(0x0060e5f0));
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (1, *(rax), 0x409c49);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x404cf0 */
#include <stdint.h>
 
uint64_t fcn_00404cf0 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION]... [FILE [PREFIX]]\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Output pieces of FILE to PREFIXaa, PREFIXab, ...;\ndefault size is 1000 lines, and default PREFIX is 'x'.\n");
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
    edx = 5;
    rax = dcgettext (0, "  -a, --suffix-length=N   generate suffixes of length N (default %d)\n      --additional-suffix=SUFFIX  append an additional SUFFIX to file names\n  -b, --bytes=SIZE        put SIZE bytes per output file\n  -C, --line-bytes=SIZE   put at most SIZE bytes of records per output file\n  -d                      use numeric suffixes starting at 0, not alphabetic\n      --numeric-suffixes[=FROM]  same as -d, but allow setting the start value\n  -x                      use hex suffixes starting at 0, not alphabetic\n      --hex-suffixes[=FROM]  same as -x, but allow setting the start value\n  -e, --elide-empty-files  do not generate empty output files with '-n'\n      --filter=COMMAND    write to shell COMMAND; file name is $FILE\n  -l, --lines=NUMBER      put NUMBER lines/records per output file\n  -n, --number=CHUNKS     generate CHUNKS output files; see explanation below\n  -t, --separator=SEP     use SEP instead of newline as the record separator;\n                            '\\0' (zero) specifies the NUL character\n  -u, --unbuffered        immediately copy input to output with '-n r/...'\n");
    ecx = 2;
    esi = 1;
    rdi = stdout;
    rdx = rax;
    eax = 0;
    fprintf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --verbose           print a diagnostic just before each\n                            output file is opened\n");
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
    rax = dcgettext (0, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nCHUNKS may be:\n  N       split into N files based on size of input\n  K/N     output Kth of N to stdout\n  l/N     split into N files without splitting lines/records\n  l/K/N   output Kth of N to stdout without splitting lines/records\n  r/N     like 'l' but use round robin distribution\n  r/K/N   likewise but only output Kth of N to stdout\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x409a99;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x409b13;
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
        esi = "split";
        ecx = 6;
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
        eax = strncmp (rax, 0x409b1d, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x409ab5;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "split";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40c29f;
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
            eax = strncmp (rax, 0x409b1d, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "split";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x409ab5;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "split";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x405180 */
#include <stdint.h>
 
int64_t fcn_00405180 (int64_t arg1) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x405210 */
#include <stdint.h>
 
uint64_t fcn_00405210 (int64_t arg_60h, int64_t arg3, int32_t oflag, const char * path) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h;
    rdx = arg3;
    rsi = oflag;
    rdi = path;
    *((rsp + 0x30)) = rdx;
    edx = 0;
    while (1) {
        eax = 0;
        eax = open (rdi, rsi, rdx);
        fcn_004070a0 (eax);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x405260 */
#include <stdint.h>
 
uint64_t fcn_00405260 (int64_t arg1, int64_t arg4, int64_t oflag, char * path) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4052d0 */
#include <stdint.h>
 
uint64_t fcn_004052d0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00407040 (r13d, rbp, rbx);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x405350 */
#include <stdint.h>
 
int64_t fcn_00405350 (void * arg1, struct sigaction * arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4053a0 */
#include <stdint.h>
 
uint64_t fcn_004053a0 (int64_t arg1) {
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
            edi = 0x40ad08;
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
        *(0x0060e778) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x405440 */
#include <stdint.h>
 
uint64_t fcn_00405440 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_004091d0 ();
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
        eax = 0x40ad0e;
        ebx = 0x40ad19;
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
        eax = 0x40ad12;
        ebx = 0x40ad15;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40c26f;
    ebx = 0x40ad0c;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x405540 */
#include <stdint.h>
 
uint64_t fcn_00405540 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
        /* [13] -r-x section size 31416 named .text */
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
    /* switch table (11 cases) at 0x40ad80 */
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
    *((rsp + 0x50)) = 0x40c26f;
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
        /* switch table (127 cases) at 0x40add8 */
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
    rax = fcn_00405540 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40b1d0 */
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
    /* switch table (127 cases) at 0x40b5c8 */
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
    *((rsp + 0x50)) = 0x40c26f;
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
        rax = fcn_00408d50 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40c26f;
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
        *((rsp + 0x50)) = 0x40ad0c;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00405440 (0x40ad1d, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00405440 (0x40c26f, r13d);
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
        *((rsp + 0x50)) = 0x40ad0c;
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
        *((rsp + 0x50)) = 0x40c26f;
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
    *((rsp + 0x50)) = 0x40ad0c;
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
    rax = fcn_00405540 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40c26f;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x406770 */
#include <stdint.h>
 
uint64_t fcn_00406770 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x0060e2f8);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060e310) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60e300) {
        goto label_2;
    }
    rax = fcn_004076f0 (rbx, rsi);
    *(0x0060e2f8) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060e310);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060e310) = r12d;
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
        rax = fcn_00405540 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60e780) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00407690 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00405540 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_004076f0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060e300]");
        rbx = rax;
        *(0x0060e2f8) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_004078e0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x406d70 */
#include <stdint.h>
 
int64_t fcn_00406d70 (int64_t arg1, int64_t arg2) {
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
    fcn_00406770 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
    rdx = rsi;
    esi = edi;
    edi = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x406d99 */
#include <stdint.h>
 
int64_t fcn_00406d99 (int64_t arg_8h, int64_t arg_10h, int64_t arg_20h, int64_t arg_30h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg7, int64_t arg8, int64_t arg9) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    *(rax) &= al;
    ecx = edx;
    __asm ("movdqa xmm0, xmmword [0x0060e880]");
    __asm ("movdqa xmm1, xmmword [0x0060e890]");
    __asm ("movdqa xmm2, xmmword [0x0060e8a0]");
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
    fcn_00406770 (0, rdi, rsi, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x406e10 */
#include <stdint.h>
 
int64_t fcn_00406e10 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        *(rax) &= al;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x406e40 */
#include <stdint.h>
 
int64_t fcn_00406e40 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00406770 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x406fc0 */
#include <stdint.h>
 
void fcn_00406fc0 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x60e2c0;
    rdx = 0xffffffffffffffff;
    edi = 0;
    return void (*0x406770)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x406fe0 */
#include <stdint.h>
 
uint64_t fcn_00406fe0 (int64_t arg1, uint32_t arg2, uint32_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407040 */
#include <stdint.h>
 
uint64_t fcn_00407040 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4070a0 */
#include <stdint.h>
 
uint64_t fcn_004070a0 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_00409740 (rdi, rsi, rdx);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4070f0 */
#include <stdint.h>
 
void fcn_004070f0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40ba6b);
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
        /* switch table (10 cases) at 0x40bd58 */
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
    void (*0x401df0)() ();
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
    void (*0x401df0)() ();
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
    void (*0x401df0)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407550 */
#include <stdint.h>
 
uint64_t fcn_00407550 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_004070f0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407690 */
#include <stdint.h>
 
uint64_t fcn_00407690 (uint32_t arg1) {
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
    return fcn_004078e0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4076f0 */
#include <stdint.h>
 
uint64_t fcn_004076f0 (int64_t arg1, int64_t arg2) {
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
    return fcn_004078e0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407860 */
#include <stdint.h>
 
int64_t fcn_00407860 (int64_t arg1, size_t size) {
    rdi = arg1;
    rsi = size;
    rax = rdi;
    rdx:rax = rax * rsi;
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
    return fcn_004078e0 ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407890 */
#include <stdint.h>
 
uint64_t fcn_00407890 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00407690 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4078c0 */
#include <stdint.h>
 
void fcn_004078c0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
    return void (*0x407890)() ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4078e0 */
#include <stdint.h>
 
uint64_t fcn_004078e0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060e2b0), 0, 0x409c49);
    return abort ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407920 */
#include <stdint.h>
 
uint64_t fcn_00407920 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
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
    eax = fcn_00407a20 (rdi, 0, edx, rsp + 8, r8);
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
        rax = fcn_00406fc0 (r12);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4079f0 */
#include <stdint.h>
 
void fcn_004079f0 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    fcn_00407920 (rdi, 0xa, rsi, rdx, rcx, r8);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407a20 */
#include <stdint.h>
 
uint64_t fcn_00407a20 (int64_t arg1, int64_t arg2, uint32_t arg3, struct sigaction * arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x40be38 */
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
    /* switch table (54 cases) at 0x40bfb8 */
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407e60 */
#include <stdint.h>
 
uint64_t fcn_00407e60 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_00407ee0 (rbx);
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
    void (*0x401ac0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407ee0 */
#include <stdint.h>
 
uint32_t fcn_00407ee0 (int64_t arg1) {
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
    void (*0x401ca0)() ();
label_1:
    fcn_00407f20 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407f20 */
#include <stdint.h>
 
int64_t fcn_00407f20 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
        void (*0x401d90)() ();
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x407f80 */
#include <stdint.h>
 
uint64_t fcn_00407f80 (int64_t arg1, int64_t arg2) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x408060 */
#include <stdint.h>
 
int64_t fcn_00408060 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, signed int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x408680 */
#include <stdint.h>
 
uint64_t fcn_00408680 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40c281;
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
            fcn_00407f80 (r12, rbx);
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
        fcn_00407f80 (r12, rbx);
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
    eax = fcn_00408060 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_00408060 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x408c50 */
#include <stdint.h>
 
int32_t fcn_00408c50 (int64_t arg_10h) {
    eax = *(0x0060e31c);
    *(0x0060e8c0) = eax;
    eax = *(0x0060e318);
    *(0x0060e8c4) = eax;
    eax = *((rsp + 0x10));
    fcn_00408680 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060e31c) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060e908) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060e314) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x408cd0 */
#include <stdint.h>
 
void fcn_00408cd0 (void) {
    r9d = 0;
    fcn_00408c50 (rdi);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x408d50 */
#include <stdint.h>
 
uint64_t fcn_00408d50 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_00409170 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x408dd0 */
#include <stdint.h>
 
int64_t fcn_00408dd0 (uint32_t arg1, int64_t arg2, int32_t arg3) {
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x409040 */
#include <stdint.h>
 
uint64_t fcn_00409040 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x60e320;
    edx = 0;
    ebx = edi;
    while (*(rcx) != ebx) {
        edx++;
        rcx += 0xc;
        if (edx == 0x23) {
            goto label_2;
        }
    }
    rax = rdx * 3;
    eax = strcpy (rbp, rax*4 + 0x60e324);
    eax = 0;
    do {
label_1:
        return rax;
label_2:
        eax = libc_current_sigrtmin ();
        r12d = eax;
        eax = libc_current_sigrtmax ();
        if (ebx < r12d) {
            goto label_3;
        }
        if (ebx > eax) {
            goto label_3;
        }
        edx = eax;
        edx -= r12d;
        edx >>= 1;
        edx += r12d;
        if (edx >= ebx) {
            goto label_4;
        }
        edx = 0x58;
        *(rbp) = 0x414d5452;
        r12d = eax;
        *((rbp + 4)) = dx;
label_0:
        eax = ebx;
        eax -= r12d;
    } while (eax == 0);
    rdi = rbp + 5;
    r8d = eax;
    eax = 0;
    ecx = 0x40c2b0;
    rdx = 0xffffffffffffffff;
    esi = 1;
    eax = sprintf_chk ();
    eax = 0;
    return rax;
label_4:
    ecx = 0x4e;
    *(rbp) = 0x494d5452;
    *((rbp + 4)) = cx;
    goto label_0;
label_3:
    eax = 0xffffffff;
    goto label_1;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x409110 */
#include <stdint.h>
 
uint64_t fcn_00409110 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_00407e60 (rbp);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x409170 */
#include <stdint.h>
 
uint64_t fcn_00409170 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40c2b4;
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x4091d0 */
#include <stdint.h>
 
uint64_t fcn_004091d0 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40c29f;
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
        r15d = 0x40c29f;
label_2:
        *(0x0060e8f8) = r15;
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
        r15d = 0x40c29f;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x409bd0;
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
    fcn_00407e60 (rbx);
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
        r15d = 0x40c29f;
        rbx = rax;
        free (r15);
        fcn_00407e60 (r13);
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
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x409740 */
#include <stdint.h>
 
uint64_t fcn_00409740 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
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
            *(0x0060e900) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = void (*0x409750)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0060e900) != 0xffffffff) {
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
    eax = void (*0x409750)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0060e900) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x409900 */
#include <stdint.h>
 
int64_t fcn_00409900 (void) {
    rax = 0x60e288;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_split.elf @ 0x409918 */
#include <stdint.h>
 
void fcn_00409918 (int64_t arg3) {
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
