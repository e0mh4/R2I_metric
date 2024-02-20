#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x4023e0 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    char * s1;
    char * var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t var_5fh;
    int64_t var_60h;
    void * ptr;
    int64_t var_70h;
    uint32_t var_90h;
    rdi = argc;
    rsi = argv;
    r12d = 0;
    ebx = edi;
    rdi = *(rsi);
    *(rsp) = rsi;
    fcn_004081c0 (*(rdi));
    setlocale (6, 0x413a14);
    bindtextdomain (0x4110ba, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x4110ba, rsi);
    edi = 0x4058f0;
    fcn_00410f70 ();
    edx = 5;
    *(0x006176d0) = 0;
    *(0x006176c8) = 0;
    *(0x006176ee) = 0;
    *(0x006176ec) = 0;
    *(0x006176e8) = 0xffffffff;
    *(0x006176b9) = 0;
    *(0x006176dd) = 0;
    *(0x006176d8) = 0;
    *(0x006176b8) = 0;
    *(0x00617680) = 1;
    rax = dcgettext (0, "options %s and %s are mutually exclusive");
    r13 = rax;
    do {
label_0:
        rsi = *(rsp);
        ecx = 0x411380;
        edx = "aB:iF:hHklmPTt:vx:";
        edi = ebx;
        r8 = rsp + 0x90;
        *((rsp + 0x90)) = ebp;
        eax = fcn_0040c380 ();
        if (eax == 0xffffffff) {
            goto label_48;
        }
        if (eax == 0x69) {
            goto label_49;
        }
        if (eax <= 0x69) {
            goto label_50;
        }
    } while (eax == 0x76);
    if (eax > 0x76) {
        if (eax == 0x81) {
            goto label_51;
        }
        if (eax > 0x81) {
            goto label_52;
        }
        if (eax == 0x78) {
            r14 = imp.__libc_start_main;
            fcn_0040a560 (0x10);
            rdx = imp.__libc_start_main;
            *(rax) = r14;
            *((rax + 8)) = rdx;
            *(0x006176c8) = rax;
            goto label_0;
label_50:
            if (eax == 0x48) {
                goto label_53;
            }
            if (eax <= 0x48) {
                goto label_54;
            }
            if (eax == 0x54) {
                goto label_55;
            }
            if (eax <= 0x54) {
                goto label_56;
            }
            if (eax != 0x61) {
                goto label_57;
            }
            *(0x006176ee) = 1;
            goto label_0;
        }
        if (eax != 0x80) {
            goto label_46;
        }
        *(0x006176dc) = 0;
        goto label_0;
    }
    if (eax == 0x6c) {
        goto label_58;
    }
    if (eax > 0x6c) {
        if (eax == 0x6d) {
            *(0x006176e8) = 0;
            *(0x006176e0) = 0x100000;
            goto label_0;
label_52:
            if (eax != 0x82) {
                goto label_59;
            }
            *(0x006176b8) = 1;
            goto label_0;
label_56:
            if (eax != 0x50) {
                goto label_46;
            }
            if (*(0x00617660) == 4) {
                goto label_60;
            }
            r12d = 1;
            goto label_0;
label_57:
            if (eax != 0x68) {
                goto label_46;
            }
            *(0x006176e8) = 0xb0;
            *(0x006176e0) = 1;
            goto label_0;
        }
        if (eax != 0x74) {
            goto label_46;
        }
label_1:
        r14 = imp.__libc_start_main;
        fcn_0040a560 (0x10);
        rdx = imp.__libc_start_main;
        *(rax) = r14;
        *((rax + 8)) = rdx;
        *(0x006176d0) = rax;
        goto label_0;
    }
    if (eax != 0x6b) {
        goto label_46;
    }
    *(0x006176e8) = 0;
    *(0x006176e0) = 0x400;
    goto label_0;
label_54:
    if (eax == 0xffffff7e) {
        goto label_61;
    }
    if (eax <= 0xffffff7e) {
        goto label_62;
    }
    if (eax != 0x42) {
        goto label_63;
    }
    eax = fcn_00407980 (*(0x006178a8), 0x6176e8, 0x6176e0);
    if (eax == 0) {
        goto label_0;
    }
    r8 = imp.__libc_start_main;
    eax = fcn_0040a820 (eax, *((rsp + 0x90)), 0x42, 0x411380);
label_59:
    if (eax != 0x83) {
        goto label_46;
    }
    eax = imp.__libc_start_main;
    if (eax == 1) {
        goto label_64;
    }
    if (eax == 0) {
        if (r12b != 0) {
            goto label_65;
        }
    }
    if (*(0x006176b9) != 0) {
        goto label_66;
    }
    rdi = imp.__libc_start_main;
    *(0x00617660) = 4;
    if (rdi == 0) {
        goto label_0;
    }
    eax = fcn_00404d60 ();
    goto label_0;
label_63:
    if (eax == 0x46) {
        goto label_1;
    }
    do {
label_46:
        eax = fcn_00404930 (1);
INVALID_JUMP;
    } while (eax != 0xffffff7d);
    eax = 0;
    rcx = *(str_8_29);
    r9d = "David MacKenzie";
    r8d = "Torbjorn Granlund";
    fcn_0040a420 (*(obj.stdout), 0x41103a, "GNU coreutils");
    exit (0);
label_55:
    if (*(0x00617660) == 4) {
        goto label_66;
    }
    *(0x006176b9) = 1;
    goto label_0;
label_49:
    if (*(0x00617660) == 4) {
        goto label_64;
    }
    *(0x00617660) = 1;
    goto label_0;
label_51:
    *(0x006176dc) = 1;
    goto label_0;
label_58:
    *(0x006176ed) = 1;
    goto label_0;
label_53:
    *(0x006176e8) = 0x90;
    *(0x006176e0) = 1;
    goto label_0;
label_48:
    if (*(0x006176e8) == 0xffffffff) {
        goto label_67;
    }
label_3:
    eax = imp.__libc_start_main;
    if (eax != 1) {
        if (eax == 4) {
            goto label_4;
        }
        if ((*(0x006176e8) & 0x10) == 0) {
            goto label_68;
        }
        *(0x00617660) = 2;
    }
label_4:
    r12 = imp.__libc_start_main;
    r13d = 0;
    if (r12 == 0) {
        goto label_69;
    }
label_2:
    rbp = imp.__libc_start_main;
    if (rbp == 0) {
        goto label_70;
    }
    r14 = *(r12);
    while (eax != 0) {
        rbp = *((rbp + 8));
        if (rbp == 0) {
            goto label_70;
        }
        eax = strcmp (r14, *(rbp));
    }
    r13d = 1;
    rax = fcn_00409de0 (r14);
    edx = 5;
    rax = dcgettext (0, "file system type %s both selected and excluded");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
label_70:
    r12 = *((r12 + 8));
    if (r12 != 0) {
        goto label_2;
    }
    if (r13b == 0) {
label_69:
        eax = *(0x006175e0);
        if (eax < ebx) {
            goto label_71;
        }
label_6:
        edi = 1;
        if (*(0x006176d0) == 0) {
            goto label_72;
        }
label_10:
        rax = fcn_0040c670 ();
        *(0x006176c0) = rax;
        if (rax == 0) {
            goto label_73;
        }
label_9:
        if (*(0x006176dc) != 0) {
            goto label_74;
        }
label_5:
        if (*(0x00617660) > 4) {
            goto label_75;
        }
        eax = imp.__libc_start_main;
        /* switch table (5 cases) at 0x411300 */
    }
    eax = 1;
label_23:
    return rax;
label_67:
    if (r12b == 0) {
        goto label_76;
    }
    *(0x006176e8) = 0;
    rax = getenv ("POSIXLY_CORRECT");
    rax -= rax;
    eax &= 0x200;
    rax += 0x200;
    *(0x006176e0) = rax;
    goto label_3;
label_68:
    if (r12b == 0) {
        goto label_4;
    }
    *(0x00617660) = 3;
    goto label_4;
label_74:
    eax = sync ();
    goto label_5;
label_71:
    edi -= eax;
    rdi = (int64_t) edi;
    rdi *= 0x90;
    rax = fcn_0040a560 (ebx);
    r12 = *(0x006175e0);
    r13 = *(rsp);
    *((rsp + 0x60)) = rax;
    r14 = rax;
    goto label_77;
label_7:
    ebp -= *(0x006175e0);
    rax = (int64_t) ebp;
    rax *= 0x90;
    eax = *((r14 + rax + 0x18));
    eax &= 0xf000;
    if (eax != 0x1000) {
        eax = 0;
        eax = open (*((r13 + r12*8)), 0x100, rdx);
        if (eax < 0) {
            goto label_8;
        }
        close (eax);
    }
label_8:
    r12++;
label_77:
    if (ebx <= r12d) {
        goto label_6;
    }
    edx = r12d;
    edx -= *(0x006175e0);
    rsi = *((r13 + r12*8));
    edi = 1;
    rdx = (int64_t) edx;
    rdx *= 0x90;
    rdx += r14;
    eax = xstat ();
    if (eax == 0) {
        goto label_7;
    }
    rdx = *((r13 + r12*8));
    rax = fcn_00409c60 (0, 3);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x413b3f);
    *(0x006176d8) = 1;
    *((r13 + r12*8)) = 0;
    goto label_8;
label_73:
    if (*(0x006175e0) < ebx) {
        if (*(0x006176ee) == 0) {
            if (*(0x006176ed) != 0) {
                goto label_78;
            }
            if (*(0x006176d0) != 0) {
                goto label_78;
            }
            if (*(0x006176c8) != 0) {
                goto label_78;
            }
            edx = 5;
            ebp = 0;
            rax = dcgettext (0, "Warning: ");
            r12 = rax;
        }
    } else {
label_78:
        r12d = 0x413a14;
    }
    edx = 5;
    rax = dcgettext (0, "cannot read table of mounted file systems");
    r13 = rax;
    rax = errno_location ();
    r8 = r13;
    rcx = r12;
    eax = 0;
    error (ebp, *(rax), "%s%s");
    goto label_9;
label_72:
    if (*(0x006176c8) != 0) {
        goto label_10;
    }
    if (*(0x006176b9) != 0) {
        goto label_10;
    }
    if (*(0x0061737c) != 0) {
        goto label_10;
    }
    edi = *(0x006176ed);
    goto label_10;
label_76:
    rax = getenv ("DF_BLOCK_SIZE");
    fcn_00407980 (rax, 0x6176e8, 0x6176e0);
    goto label_3;
    fcn_00403e20 (0, 0);
    if (*(0x006176b9) != 0) {
        goto label_79;
    }
label_42:
    fcn_00403e20 (2, 0);
    fcn_00403e20 (3, 0);
    fcn_00403e20 (4, 0);
label_13:
    fcn_00403e20 (5, "Capacity");
    fcn_00403e20 (0xa, 0);
label_14:
    fcn_00403ba0 ();
    edx = *(0x006175e0);
    if (edx >= ebx) {
        goto label_80;
    }
    rax = (int64_t) edx;
    edx = ~edx;
    *(0x006176ec) = 1;
    rcx = rax + 1;
    edx += ebx;
    rdx += rcx;
    *((rsp + 0x30)) = rcx;
    *((rsp + 0x38)) = rdx;
label_15:
    rcx = *(rsp);
    rcx = *((rcx + rax*8));
    rbx = *((rcx + rax*8));
    *((rsp + 0x20)) = rcx;
    if (rcx == 0) {
        goto label_19;
    }
    eax -= *(0x006175e0);
    rax = (int64_t) eax;
    rax *= 0x90;
    rax += *((rsp + 0x60));
    *((rsp + 0x40)) = rax;
    eax = *((rax + 0x18));
    *((rsp + 8)) = eax;
    eax &= 0xb000;
    if (eax != 0x2000) {
        goto label_41;
    }
    rdi = rcx;
    rax = canonicalize_file_name ();
    *((rsp + 0x68)) = rax;
    if (rax == 0) {
        goto label_81;
    }
    if (*(rax) != 0x2f) {
        rax = rbx;
    }
    *((rsp + 8)) = rax;
label_29:
    rbp = imp.__libc_start_main;
    if (rbp == 0) {
        goto label_82;
    }
    *((rsp + 0x50)) = 0;
    r14d = 0;
    *((rsp + 0x28)) = 0xffffffffffffffff;
    *((rsp + 0x10)) = 0;
label_11:
    r12 = *(rbp);
    rdi = *(rbp);
    rax = canonicalize_file_name ();
    r13 = rax;
    if (rax != 0) {
        if (*(rax) != 0x2f) {
            r12 = rax;
            goto label_83;
        }
    }
label_83:
    eax = strcmp (*((rsp + 8)), r12);
    if (eax != 0) {
        goto label_84;
    }
    r14 = imp.__libc_start_main;
    rbx = *((rbp + 8));
    r15d = 0;
    if (r14 == 0) {
        goto label_85;
    }
    do {
        eax = strcmp (*((r14 + 8)), rbx);
        if (eax == 0) {
            r15 = r14;
        }
        r14 = *((r14 + 0x30));
    } while (r14 != 0);
    if (r15 == 0) {
        goto label_85;
    }
    rdi = *(r15);
    rax = canonicalize_file_name ();
    rcx = rax;
    if (rax != 0) {
        if (*(rax) == 0x2f) {
            goto label_86;
        }
    }
    free (rcx);
    rax = fcn_0040a790 (*(r15));
    rcx = rax;
    if (rax == 0) {
        goto label_87;
    }
label_86:
    rdi = rcx;
    *((rsp + 0x18)) = rcx;
    eax = strcmp (rdi, r12);
    rcx = *((rsp + 0x18));
    if (eax != 0) {
        goto label_88;
    }
    rbx = *((rbp + 8));
label_17:
    *((rsp + 0x18)) = rcx;
    rax = strlen (*((rbp + 8)));
    r12d = *((rsp + 0x10));
    rcx = *((rsp + 0x18));
    r12d ^= 1;
    r8b = (*((rsp + 0x28)) > rax) ? 1 : 0;
    r14d = r12d;
    r14b |= r8b;
    if (r14b != 0) {
        goto label_89;
    }
    *((rsp + 0x10)) = 1;
label_16:
    free (rcx);
label_84:
    free (r13);
    rbp = *((rbp + 0x30));
    if (rbp != 0) {
        goto label_11;
    }
    free (*((rsp + 0x68)));
    if (*((rsp + 0x50)) != 0) {
        goto label_90;
    }
    if (r14b != 0) {
        goto label_91;
    }
label_41:
    rdi = *((rsp + 0x20));
    rax = canonicalize_file_name ();
    rbx = imp.__libc_start_main;
    r13 = rax;
    if (rax != 0) {
        if (*(rax) == 0x2f) {
            goto label_92;
        }
    }
    free (r13);
    if (rbx == 0) {
        goto label_93;
    }
label_26:
    r12d = 0;
    rbp = *((rsp + 0x40));
    while (*(rbp) != rax) {
label_12:
        rbx = *((rbx + 0x30));
        if (rbx == 0) {
            goto label_94;
        }
        rax = *((rbx + 0x20));
        if (rax == -1) {
            goto label_95;
        }
INVALID_JUMP;
    }
    rsi = *((rbx + 0x18));
    ecx = 5;
    edi = "lofs";
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(rbp) > rax) ? 1 : 0;
    if (al == 0) {
        goto label_12;
    }
    if (r12 == 0) {
        goto label_96;
    }
    if ((*((r12 + 0x28)) & 1) != 0) {
        goto label_96;
    }
    if ((*((rbx + 0x28)) & 1) != 0) {
        goto label_12;
    }
label_96:
    rsi = *((rbx + 8));
    rdx = rsp + 0x90;
    edi = 1;
    eax = xstat ();
    if (eax == 0) {
        rax = *((rbx + 0x20));
        if (*((rsp + 0x90)) == rax) {
            goto label_97;
        }
    }
    *((rbx + 0x20)) = 0xfffffffffffffffe;
    goto label_12;
    fcn_00403e20 (0, 0);
    if (*(0x006176b9) != 0) {
        goto label_98;
    }
label_43:
    fcn_00403e20 (2, "Size");
    fcn_00403e20 (3, 0);
    fcn_00403e20 (4, "Avail");
    esi = 0;
    goto label_13;
    fcn_00403e20 (0, 0);
    if (*(0x006176b9) != 0) {
        goto label_99;
    }
label_44:
    fcn_00403e20 (6, 0);
    fcn_00403e20 (7, 0);
    fcn_00403e20 (8, 0);
    fcn_00403e20 (9, 0);
    fcn_00403e20 (0xa, 0);
    goto label_14;
    if (*(0x00617650) != 0) {
        goto label_14;
    }
    edi = "source,fstype,itotal,iused,iavail,ipcent,size,used,avail,pcent,file,target";
    fcn_00404d60 ();
    goto label_14;
    fcn_00403e20 (0, 0);
    if (*(0x006176b9) != 0) {
        goto label_100;
    }
label_45:
    fcn_00403e20 (2, 0);
    fcn_00403e20 (3, 0);
    fcn_00403e20 (4, 0);
    esi = 0;
    goto label_13;
label_25:
    free (r13);
    do {
label_93:
        r15 = *((rsp + 0x20));
        rax = fcn_00404ed0 (r15, *((rsp + 0x40)));
        rbx = rax;
        if (rax != 0) {
            fcn_00403f10 (0, rax, r15, 0, 0, 0);
            rax = free (rbx);
        }
label_19:
        rcx = *((rsp + 0x30));
        rax = *((rsp + 0x30));
        if (*((rsp + 0x38)) == rcx) {
            goto label_101;
        }
        rcx++;
        *((rsp + 0x30)) = rcx;
        goto label_15;
label_88:
        r14d = 1;
        goto label_16;
label_87:
        rbx = *((rbp + 8));
label_85:
        ecx = 0;
        goto label_17;
label_89:
        rdx = rsp + 0x90;
        rsi = rbx;
        edi = 1;
        *((rsp + 0x48)) = rcx;
        *((rsp + 0x5f)) = r8b;
        *((rsp + 0x18)) = rax;
        eax = xstat ();
        r9 = *((rsp + 0x18));
        rcx = *((rsp + 0x48));
        if (eax != 0) {
            if (r12b == 0) {
                goto label_102;
            }
            r8d = *((rsp + 0x5f));
            if (r8b == 0) {
                goto label_102;
            }
            r14d = 0;
        }
        if (r9 == 1) {
            goto label_103;
        }
        *((rsp + 0x28)) = r9;
        *((rsp + 0x50)) = rbp;
label_24:
        *((rsp + 0x10)) = r14b;
        r14d = 0;
        goto label_16;
label_95:
        rsi = *((rbx + 8));
        rdx = rsp + 0x90;
        edi = 1;
        eax = xstat ();
        if (eax != 0) {
            goto label_104;
        }
        rax = *((rsp + 0x90));
        *((rbx + 0x20)) = rax;
        goto label_18;
INVALID_JUMP;
    } while (r12 == 0);
label_27:
    r9d = *((r12 + 0x28));
    eax = r9d;
    r9d &= 1;
    al >>= 1;
    eax &= 1;
    rdx = *((rsp + 0x40));
    fcn_00403f10 (*(r12), *((r12 + 8)), *(rdx), *((rsp + 0x40)), *((r12 + 0x18)), r9);
    goto label_19;
label_104:
    rax = errno_location ();
    r13 = rax;
    if (*(rax) == 5) {
        goto label_105;
    }
label_37:
    *((rbx + 0x20)) = 0xfffffffffffffffe;
    rax = 0xfffffffffffffffe;
    goto label_18;
label_33:
    rbp = *((rsp + 8));
label_32:
    if (r12b != 0) {
        goto label_106;
    }
    *(0x006176c0) = 0;
    while (rbx != 0) {
        rax = *((rbx + 8));
        rbx = *((rbx + 0x10));
        r12d = 1;
        *((rax + 0x30)) = rbp;
    }
    if (r12b != 0) {
        *(0x006176c0) = rbp;
    }
    fcn_004066a0 (*(0x006176f0));
    *(0x006176f0) = 0;
label_106:
    rbx = imp.__libc_start_main;
    while (rbx != 0) {
        r9d = *((rbx + 0x28));
        eax = r9d;
        r9d &= 1;
        al >>= 1;
        eax &= 1;
        fcn_00403f10 (*(rbx), *((rbx + 8)), 0, 0, *((rbx + 0x18)), r9);
        rbx = *((rbx + 0x30));
    }
label_101:
    if (*(0x006176dd) == 0) {
        goto label_107;
    }
    if (*(0x006176b8) != 0) {
        eax = 0x411233;
        esi = 0x413461;
        if (*(0x0061734c) == 0) {
            rsi = rax;
        }
        fcn_00403f10 (rax, rsi, 0, 0, 0, 0);
    }
    if (*(0x00617640) == 0) {
        goto label_28;
    }
    r13d = 0;
label_22:
    rax = imp.__libc_start_main;
    if (rax == 0) {
        goto label_108;
    }
    rdx = imp.__libc_start_main;
    r12 = r13*8;
    ebx = 0;
    rdx = *((rdx + r13*8));
    r14 = *(rdx);
    do {
label_20:
        rax--;
        rax = imp.__libc_start_main;
        rbp = rbx*8;
        cl = (rbx == rax) ? 1 : 0;
        rax = *((rax + rbx*8));
        ecx <<= 3;
        rdx = *((rax + 0x20));
        *((rsp + 0x90)) = rdx;
        rax = fcn_00407f30 (r14, rsp + 0x90, *((rax + 0x28)), 0);
        rsi = stdout;
        r14 = rax;
        rdi = rax;
        if (rax == 0) {
            goto label_109;
        }
label_21:
        fputs_unlocked ();
        rbx++;
        free (r14);
        rax = imp.__libc_start_main;
        if (rbx >= rax) {
            goto label_108;
        }
        rdx = imp.__libc_start_main;
        rdx = *((rdx + r12));
        r14 = *((rdx + rbp + 8));
    } while (rbx == 0);
    rdi = stdout;
    rdx = *((rdi + 0x28));
    if (rdx >= *((rdi + 0x30))) {
        goto label_110;
    }
    rcx = rdx + 1;
    *((rdi + 0x28)) = rcx;
    *(rdx) = 0x20;
    goto label_20;
label_109:
    rax = imp.__libc_start_main;
    rax = *((rax + r12));
    rdi = *((rax + rbx*8));
    goto label_21;
label_108:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_111;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0xa;
label_30:
    r13++;
    if (r13 < *(0x00617640)) {
        goto label_22;
    }
label_28:
    eax = imp.__libc_start_main;
    goto label_23;
label_110:
    esi = 0x20;
    overflow ();
    rax = imp.__libc_start_main;
    goto label_20;
label_102:
    r14d = *((rsp + 0x10));
    goto label_24;
label_92:
    eax = 0;
    rcx |= 0xffffffffffffffff;
    rdi = r13;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    r14 = rax - 1;
    if (rbx == 0) {
        goto label_25;
    }
    r15d = 0;
    r12d = 0;
    r9d = 0;
    do {
        rsi = *((rbp + 0x18));
        ecx = 5;
        edi = "lofs";
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (rbx > 0) ? 1 : 0;
        if (al != 0) {
            if (r12 != 0) {
                if ((*((r12 + 0x28)) & 1) != 0) {
                    goto label_112;
                }
                if ((*((rbp + 0x28)) & 1) != 0) {
                    goto label_31;
                }
            }
label_112:
            r8 = *((rbp + 8));
            rcx |= 0xffffffffffffffff;
            eax = r9d;
            rdi = r8;
            __asm ("repne scasb al, byte [rdi]");
            rcx = ~rcx;
            r10 = rcx - 1;
            if (r10 < r15) {
                goto label_31;
            }
            if (r14 < r10) {
                goto label_31;
            }
            if (r10 == 1) {
                goto label_113;
            }
            if (r14 == r10) {
                goto label_114;
            }
            if (*((r13 + rcx - 1)) == 0x2f) {
                goto label_114;
            }
        }
label_31:
        rbp = *((rbp + 0x30));
    } while (rbp != 0);
    free (r13);
    if (r12 == 0) {
        goto label_26;
    }
    rsi = *((r12 + 8));
    rdx = rsp + 0x90;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        goto label_26;
    }
    rax = *((rsp + 0x40));
    rax = *(rax);
    if (*((rsp + 0x90)) != rax) {
        goto label_26;
    }
    goto label_27;
label_103:
    free (rcx);
    free (r13);
    free (*((rsp + 0x68)));
    *((rsp + 0x50)) = rbp;
label_90:
    rbx = *((rsp + 0x50));
    r9d = *((rbx + 0x28));
    eax = r9d;
    r9d &= 1;
    al >>= 1;
    eax &= 1;
    fcn_00403f10 (*(rbx), *((rbx + 8)), *((rsp + 0x40)), 0, *((rbx + 0x18)), r9);
    goto label_19;
label_107:
    if (*(0x006176d8) != 0) {
        goto label_28;
    }
    edx = 5;
    rax = dcgettext (0, "no file systems processed");
    eax = 0;
    error (1, 0, rax);
label_81:
    rax = *((rsp + 0x20));
    *((rsp + 8)) = rax;
    goto label_29;
label_111:
    esi = 0xa;
    overflow ();
    goto label_30;
label_114:
    rdx = r10;
    *((rsp + 8)) = r10;
    eax = strncmp (r8, r13, rdx);
    r10 = *((rsp + 8));
    if (eax == 0) {
        r15 = r10;
    }
    if (eax == 0) {
        r12 = rbp;
    }
    r9d = 0;
    goto label_31;
label_80:
    r12d = *(0x006176ee);
    rbp = imp.__libc_start_main;
    eax = 0;
    while (rbp != 0) {
        rbp = *((rbp + 0x30));
        eax++;
    }
    rdi = (int64_t) eax;
    rax = fcn_00406460 (rdi, 0, 0x4039f0, 0x403a00, 0x403ac0);
    *(0x006176f0) = rax;
    if (rax == 0) {
        goto label_115;
    }
    r14 = imp.__libc_start_main;
    ebx = 0;
    if (r14 == 0) {
        goto label_32;
    }
    *((rsp + 8)) = rbp;
    goto label_116;
label_34:
    rax = *((rbp + 0x20));
    *((rsp + 0x90)) = rax;
label_35:
    rax = fcn_0040a560 (0x18);
    r13 = rax;
    *((rax + 8)) = rbp;
    rax = *((rsp + 0x90));
    *((r13 + 0x10)) = rbx;
    rsi = r13;
    *(r13) = rax;
    rax = fcn_00406c00 (*(0x006176f0));
    if (rax == 0) {
        goto label_115;
    }
    rbp = *((rbp + 0x30));
    rbx = r13;
label_36:
    if (rbp == 0) {
        goto label_33;
    }
label_116:
    eax = *((rbp + 0x28));
    if ((al & 2) == 0) {
        goto label_117;
    }
    if (*(0x006176ed) != 0) {
        goto label_34;
    }
label_117:
    if ((al & 1) == 0) {
        goto label_118;
    }
    if (*(0x006176ee) != 0) {
        goto label_118;
    }
    if (*(0x006176ec) == 0) {
        goto label_34;
    }
label_118:
    r13 = *((rbp + 0x18));
    al = fcn_00403a10 (*((rbp + 0x18)));
    if (al == 0) {
        goto label_34;
    }
    eax = fcn_00403a60 (r13);
    r14d = eax;
    if (al != 0) {
        goto label_34;
    }
    rsi = *((rbp + 8));
    rdx = rsp + 0x90;
    edi = 1;
    eax = xstat ();
    eax++;
    if (eax == 0) {
        goto label_34;
    }
    rdi = imp.__libc_start_main;
    rax = *((rsp + 0x90));
    if (rdi == 0) {
        goto label_35;
    }
    *((rsp + 0x70)) = rax;
    rax = fcn_004061f0 (rdi, rsp + 0x70);
    r13 = rax;
    if (rax == 0) {
        goto label_35;
    }
    r15 = *((rax + 8));
    rdi = *((r15 + 0x10));
    if (rdi == 0) {
        goto label_119;
    }
    r9 = *((rbp + 0x10));
    if (r9 == 0) {
        goto label_119;
    }
    eax = r14d;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    rdi = r9;
    rcx = ~rcx;
    rsi = rcx - 1;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rax--;
    al = (rsi < rax) ? 1 : 0;
    eax = (int32_t) al;
    *(rsp) = eax;
label_38:
    r14 = *(rbp);
    if (*(0x006176b8) != 0) {
        goto label_120;
    }
    if ((*((rbp + 0x28)) & 2) == 0) {
        goto label_120;
    }
    if ((*((r15 + 0x28)) & 2) == 0) {
        goto label_120;
    }
    eax = strcmp (*(r15), r14);
    if (eax != 0) {
        goto label_35;
    }
label_120:
    rax = strchr (r14, 0x2f);
    if (rax != 0) {
        rax = strchr (*(r15), 0x2f);
        if (rax == 0) {
            goto label_39;
        }
    }
    r10 = *((r15 + 8));
    eax = 0;
    rcx |= 0xffffffffffffffff;
    r9 = *((rbp + 8));
    rdi = r10;
    __asm ("repne scasb al, byte [rdi]");
    rdi = r9;
    rcx = ~rcx;
    rsi = rcx - 1;
    rcx |= 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    rax = rcx;
    rax = ~rax;
    rax--;
    if (rsi <= rax) {
        goto label_121;
    }
    if (*(rsp) != 0) {
        goto label_121;
    }
label_39:
    *((r13 + 8)) = rbp;
label_40:
    rbp = *((rbp + 0x30));
    if (r12b != 0) {
        goto label_36;
    }
    fcn_0040c620 (r15);
    goto label_36;
label_113:
    r15d = 1;
    r12 = rbp;
    goto label_31;
label_97:
    r12 = rbx;
    goto label_12;
label_105:
    rdx = *((rbx + 8));
    rax = fcn_00409c60 (0, 3);
    rcx = rax;
    eax = 0;
    error (0, *(r13), 0x413b3f);
    *(0x006176d8) = 1;
    goto label_37;
label_91:
    rax = fcn_00409b90 (4, *((rsp + 0x20)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot access %s: over-mounted by another device");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    *(0x006176d8) = 1;
    goto label_19;
label_119:
    *(rsp) = 0;
    goto label_38;
label_121:
    *((rsp + 0x10)) = r9;
    *(rsp) = r10;
    eax = strcmp (*(r15), r14);
    if (eax == 0) {
        goto label_122;
    }
    r10 = *(rsp);
    r9 = *((rsp + 0x10));
    eax = strcmp (r9, r10);
    if (eax == 0) {
        goto label_39;
    }
label_122:
    r15 = rbp;
    goto label_40;
label_82:
    free (*((rsp + 0x68)));
    goto label_41;
label_79:
    fcn_00403e20 (1, 0);
    goto label_42;
label_98:
    fcn_00403e20 (1, 0);
    goto label_43;
label_99:
    fcn_00403e20 (1, 0);
    goto label_44;
label_100:
    fcn_00403e20 (1, 0);
    goto label_45;
label_61:
    fcn_00404930 (0);
label_75:
    eax = assert_fail ("!\"invalid header_mode\"", "src/df.c", 0x1f0, "get_field_list");label_66:
    r8d = "--output";
    ecx = 0x411103;
    do {
label_47:
        eax = 0;
        error (0, 0, r13);
        goto label_46;
label_65:
        r8d = "--output";
        ecx = 0x411106;
        error (0, 0, r13);
        fcn_00404930 (1);
label_115:
        fcn_0040a7b0 ();
label_60:
        r8d = "--output";
        ecx = 0x411106;
    } while (1);
label_64:
    r8d = "--output";
    ecx = 0x411100;
    goto label_47;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40393b */
#include <stdint.h>
 
int32_t fcn_0040393b (void) {
    eax = 0x6175f0;
    if (rax != 0x6175f0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = 0x6175f0;
invalid_funccall(); //        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403991 */
#include <stdint.h>
 
int64_t fcn_00403991 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00617628) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x616e48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00617630) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040393b ();
    *(0x00617628) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x4039e8 */
#include <stdint.h>
 
int64_t fcn_004039e8 (void) {
    do {
        esi = 0x6175f0;
        ecx = 2;
        rsi -= 0x6175f0;
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
            edi = 0x6175f0;
invalid_funccall(); //            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403a10 */
#include <stdint.h>
 
uint32_t fcn_00403a10 (int64_t arg1) {
    rdi = arg1;
    rbx = imp.__libc_start_main;
    al = (rbx == 0) ? 1 : 0;
    r12b = (rdi == 0) ? 1 : 0;
    r12b |= al;
    if (r12b != 0) {
        goto label_0;
    }
    do {
        eax = strcmp (rbp, *(rbx));
        if (eax == 0) {
            goto label_1;
        }
        rbx = *((rbx + 8));
    } while (rbx != 0);
label_0:
    eax = r12d;
    return eax;
label_1:
    r12d = 1;
    eax = r12d;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403a60 */
#include <stdint.h>
 
uint32_t fcn_00403a60 (int64_t arg1) {
    rdi = arg1;
    rbx = imp.__libc_start_main;
    al = (rbx == 0) ? 1 : 0;
    r12b = (rdi == 0) ? 1 : 0;
    r12b |= al;
    if (r12b != 0) {
        goto label_0;
    }
    do {
        eax = strcmp (rbp, *(rbx));
        if (eax == 0) {
            goto label_1;
        }
        rbx = *((rbx + 8));
    } while (rbx != 0);
    eax = r12d;
    return eax;
label_0:
    r12d = 0;
    eax = r12d;
    return eax;
label_1:
    r12d = 1;
    eax = r12d;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403ad0 */
#include <stdint.h>
 
int64_t fcn_00403ad0 (void) {
    rax = imp.__libc_start_main;
    rdi = imp.__libc_start_main;
    rsi = rax + 1;
    rax = rsi;
    *(0x00617640) = rsi;
    rax >>= 0x3d;
    al = (rax != 0) ? 1 : 0;
    rsi <<= 3;
    if (rsi >= 0) {
        eax = (int32_t) al;
        if (rax != 0) {
            goto label_0;
        }
        rax = fcn_0040a5c0 (rdi, rsi);
        rdi = imp.__libc_start_main;
        rdx = imp.__libc_start_main;
        *(0x00617648) = rax;
        rbx = rax + rdx*8 - 8;
        rax = rdi;
        rax >>= 0x3d;
        al = (rax != 0) ? 1 : 0;
        rdi <<= 3;
        eax = (int32_t) al;
        if (rdi < 0) {
            goto label_0;
        }
        if (rax != 0) {
            goto label_0;
        }
        rax = fcn_0040a560 (rdi);
        *(rbx) = rax;
        return rax;
    }
label_0:
    return fcn_0040a7b0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403b50 */
#include <stdint.h>
 
uint64_t fcn_00403b50 (int64_t arg1) {
    rdi = arg1;
    ebx = *(rdi);
    if (bl == 0) {
        goto label_0;
    }
    rax = ctype_b_loc ();
    rdx = rbp;
    do {
        rcx = *(rax);
        if ((*((rcx + rbx*2)) & 2) != 0) {
            *(rdx) = 0x3f;
        }
        rdx++;
        ebx = *(rdx);
    } while (bl != 0);
label_0:
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403ba0 */
#include <stdint.h>
 
uint64_t fcn_00403ba0 (void) {
    char * var_8h;
    int64_t var_10h;
    fcn_00403ad0 ();
    rdx = imp.__libc_start_main;
    if (*(0x00617650) == 0) {
        goto label_5;
    }
    r12 = 0x20c49ba5e353f7cf;
    ebp = 0;
    while (*(rax) != 2) {
label_0:
        rax = strdup (r14);
        *((rsp + 8)) = rax;
        rdi = rax;
label_1:
        if (rdi == 0) {
            goto label_6;
        }
        fcn_00403b50 (rdi);
        rdx = imp.__libc_start_main;
        rax = imp.__libc_start_main;
        rax = *((rax + rdx*8 - 8));
        *((rax + rbx)) = rdi;
        rax = imp.__libc_start_main;
        rax = *((rax + rbx));
        r13 = *((rax + 0x20));
        rax = fcn_00408190 (*((rsp + 8)), 0);
        rax = (int64_t) eax;
        if (r13 <= rax) {
            goto label_7;
        }
        rdx = imp.__libc_start_main;
        rcx = *((rdx + rbx));
        rax = *((rcx + 0x20));
label_2:
        rbp++;
        *((rcx + 0x20)) = rax;
        if (*(0x00617650) <= rbp) {
            goto label_5;
        }
        rbx = rbp*8;
        *((rsp + 8)) = 0;
        r13 = rdx + rbx;
        edx = 5;
        rax = *(r13);
        rax = dcgettext (0, *((rax + 0x18)));
        r14 = rax;
        rax = *(r13);
    }
    eax = imp.__libc_start_main;
    r9d = imp.__libc_start_main;
    if (eax == 0) {
        goto label_8;
    }
    if (eax == 4) {
        goto label_9;
    }
    if (eax != 3) {
        goto label_0;
    }
    rax = fcn_00407b40 (*(0x006176e0), rsp + 0x10, rdx);
    r13 = rax;
label_3:
    edx = 5;
    rax = dcgettext (0, "%s-%s");
    eax = 0;
    eax = fcn_0040acf0 (rsp + 8, rax, r13, r14, r8, r9);
    if (eax == 0xffffffff) {
        *((rsp + 8)) = 0;
    }
    rdi = *((rsp + 8));
    goto label_1;
label_7:
    rax = fcn_00408190 (*((rsp + 8)), 0);
    rdx = imp.__libc_start_main;
    rax = (int64_t) eax;
    rcx = *((rdx + rbx));
    goto label_2;
label_9:
    r9d = imp.__libc_start_main;
    if ((r9b & 0x10) != 0) {
        goto label_0;
    }
label_8:
    rdi = imp.__libc_start_main;
    r10d = r9d;
    r10d &= 0x124;
    r8 = rdi;
    rsi = rdi;
    do {
        rdx = rsi;
        rdx >>= 3;
        rax = rdx;
        rdx_rax = rax * r12;
        rax = r8;
        r8 >>= 0xa;
        eax &= 0x3ff;
        rcx = rdx;
        rcx >>= 4;
        rcx *= 0x3e8;
        rsi -= rcx;
        rcx = rsi;
        rsi = rdx;
        rdx = rcx;
        rsi >>= 4;
        rdx |= rax;
    } while (rdx == 0);
    dl = (rcx == 0) ? 1 : 0;
    al = (rax == 0) ? 1 : 0;
    if (dl >= al) {
        goto label_10;
    }
    edx = r10d;
    dl |= 0xb8;
label_4:
    while (1) {
        r8d = 1;
        rax = fcn_00406fb0 (rdi, rsp + 0x10, rdx, 1, r8d);
        edx = 5;
        r13 = rax;
        rax = dcgettext (0, "blocks");
        r14 = rax;
        goto label_3;
label_5:
        return rax;
        if ((dl & 0x20) <= 0) {
label_10:
            goto label_11;
        }
        edx = r9d;
        edx &= 0x104;
        dl |= 0x98;
        dh |= 1;
    }
label_6:
    fcn_0040a7b0 ();
label_11:
    edx = r10d;
    dl |= 0x98;
    goto label_4;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403e20 */
#include <stdint.h>
 
int64_t fcn_00403e20 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ebx = edi;
    rax = imp.__libc_start_main;
    rdi = imp.__libc_start_main;
    rsi = rax + 1;
    rax = rsi;
    *(0x00617650) = rsi;
    rax >>= 0x3d;
    al = (rax != 0) ? 1 : 0;
    rsi <<= 3;
    if (rsi >= 0) {
        eax = (int32_t) al;
        if (rax != 0) {
            goto label_0;
        }
        rax = fcn_0040a5c0 (rdi, rsi);
        rdi = (int64_t) ebx;
        rcx = imp.__libc_start_main;
        rdx = rdi * 3;
        *(0x00617658) = rax;
        rdx <<= 4;
        rdx += 0x617320;
        *((rax + rcx*8 - 8)) = rdx;
        if (rbp != 0) {
            *((rdx + 0x18)) = rbp;
        }
        rax = rdi * 3;
        rax <<= 4;
        rax += 0x617320;
        if (*((rax + 0x2c)) != 0) {
            goto label_1;
        }
        *((rax + 0x2c)) = 1;
        return rax;
    }
label_0:
    fcn_0040a7b0 ();
label_1:
    return assert_fail ("!\"field used\"", "src/df.c", 0x164, "alloc_field");}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403ed0 */
#include <stdint.h>
 
int64_t fcn_00403ed0 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rax = rsi;
    r9d = (int32_t) dil;
    rsi = rdx;
    edx = imp.__libc_start_main;
    rsi += r9;
    if (dil == 0) {
        rdi = rax;
invalid_funccall(); //        void (*0x406fb0)() ();
    }
    rdi = -rdi;
    rax = fcn_00406fb0 (rax, rsi, rdx, rcx, r8);
    rdx = rax;
    rax = rax - 1;
    *((rdx - 1)) = 0x2d;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x403f10 */
#include <stdint.h>
 
uint64_t fcn_00403f10 (int64_t arg_3c0h, uint32_t arg_3c8h, int64_t arg_3d0h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    uint32_t var_18h;
    uint32_t var_1fh;
    char * var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    uint32_t var_a8h;
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
    rcx = arg4;
    r8 = arg5;
    r15 = rdx;
    r14 = rsi;
    r13 = r8;
    r12 = rcx;
    eax = *((rsp + 0x3d0));
    ebx = *((rsp + 0x3c0));
    *((rsp + 0x18)) = eax;
    if (bl != 0) {
        if (*(0x006176ed) != 0) {
            goto label_2;
        }
    }
    if (r9b != 0) {
        if (*(0x006176ee) != 0) {
            goto label_23;
        }
        if (*(0x006176ec) == 0) {
            goto label_2;
        }
    }
label_23:
    al = fcn_00403a10 (r13);
    if (al == 0) {
        goto label_2;
    }
    al = fcn_00403a60 (r13);
    if (al != 0) {
        goto label_2;
    }
    *(rsp + 0x1f) = (*((rsp + 0x3c8)) == 0) ? 1 : 0;
    eax = *((rsp + 0x1f));
    if (r14 == 0) {
        goto label_24;
    }
    if (al == 0) {
        goto label_24;
    }
    if (*(r14) != 0x2f) {
        goto label_2;
    }
    r12 = r14;
    while (*((rsp + 0x3c8)) == 0) {
        rdx = rsp + 0x30;
        eax = fcn_0040b070 (r12, rbp);
        if (eax != 0) {
            goto label_25;
        }
        if (*((rsp + 0x18)) == 0) {
            goto label_26;
        }
        if (*(0x006176ee) != 0) {
            goto label_27;
        }
        if (*((rsp + 0x38)) == 0) {
label_21:
            if (*(0x006176ec) == 0) {
                goto label_2;
            }
            if (*((rsp + 0x3c8)) != 0) {
                goto label_0;
            }
        }
label_20:
        *(0x006176dd) = 1;
label_0:
        fcn_00403ad0 ();
        eax = 0x413461;
        if (rbp == 0) {
        }
        if (r15 == 0) {
            r15 = rax;
        }
        rax = fcn_0040a790 (rbp);
        rbx = rax;
        *(rsp) = rax;
        if (*((rsp + 0x18)) != 0) {
            rax = strlen (rax);
            if (rax <= 0x24) {
                goto label_17;
            }
            rax = strspn (rbx + rax - 0x24, "-0123456789abcdefABCDEF");
            if (rax == 0x24) {
                goto label_28;
            }
        }
label_17:
        rdx = *((rsp + 0x60));
        rsi = *((rsp + 0x58));
        eax = 0x413461;
        if (r13 == 0) {
            r13 = rax;
        }
        *((rsp + 0xd0)) = 0;
        *((rsp + 0xb8)) = 1;
        *((rsp + 0xb0)) = 1;
        *((rsp + 0xc0)) = rsi;
        *((rsp + 0xd8)) = rdx;
        *((rsp + 0xc8)) = rdx;
        *((rsp + 0xe0)) = 0xffffffffffffffff;
        *((rsp + 0xe8)) = 0;
        if (rsi <= 0xfffffffffffffffd) {
            if (rdx > 0xfffffffffffffffd) {
                goto label_29;
            }
            rax = rsi;
            rax -= rdx;
            *((rsp + 0xe0)) = rax;
            *(rsp + 0xe8) = (rsi < rdx) ? 1 : 0;
        }
label_29:
        r8 = *((rsp + 0x48));
        rax = imp.__libc_start_main;
        *((rsp + 0xa0)) = 0xffffffffffffffff;
        r9 = *((rsp + 0x30));
        rcx = *((rsp + 0x38));
        *((rsp + 0xa8)) = 0;
        rdi = *((rsp + 0x40));
        *((rsp + 0x78)) = rax;
        al = (r8 <= 0xfffffffffffffffd) ? 1 : 0;
        al &= *((rsp + 0x50));
        *((rsp + 0x70)) = r9;
        *((rsp + 0x80)) = rcx;
        *((rsp + 0x88)) = r8;
        *((rsp + 0x98)) = rdi;
        *((rsp + 0x90)) = al;
        if (rcx <= 0xfffffffffffffffd) {
            if (rdi > 0xfffffffffffffffd) {
                goto label_30;
            }
            r10 = rcx;
            r10 -= rdi;
            *((rsp + 0xa0)) = r10;
            *(rsp + 0xa8) = (rcx < rdi) ? 1 : 0;
        }
label_30:
        if (*(0x006176b8) != 0) {
            if (*((rsp + 0x1f)) != 0) {
                goto label_31;
            }
        }
label_19:
        ebx = 0;
        rdx = imp.__libc_start_main;
        if (*(0x00617650) == 0) {
            goto label_32;
        }
label_1:
        rdx = *((rdx + rbx*8));
        rbp = rbx*8;
        eax = *((rdx + 0x10));
        if (eax == 1) {
            goto label_33;
        }
        if (eax != 0) {
            goto label_34;
        }
        rcx = rsp + 0x70;
label_8:
        if (*(rdx) > 0xb) {
            goto label_35;
        }
        eax = *(rdx);
        /* switch table (12 cases) at 0x4112a0 */
label_24:
        if (r12 == 0) {
            goto label_36;
        }
INVALID_JUMP;
    }
    rax = *((rsp + 0x3c8));
    __asm ("movdqa xmm5, xmmword [rax]");
    __asm ("movdqa xmm7, xmmword [rax + 0x10]");
    *((rsp + 0x30)) = xmm5;
    __asm ("movdqa xmm5, xmmword [rax + 0x20]");
    rax = *((rax + 0x30));
    *((rsp + 0x40)) = xmm7;
    *(rsp) = xmm5;
    *((rsp + 0x50)) = xmm5;
    *((rsp + 0x60)) = rax;
    if (*((rsp + 0x38)) != 0) {
        goto label_0;
    }
    if (*(0x006176ee) != 0) {
        goto label_0;
    }
    if (*(0x006176ec) != 0) {
        goto label_0;
    }
label_2:
    return rax;
label_4:
    rax = fcn_0040a790 (r14);
    *((rsp + 0x28)) = rax;
    rdi = rax;
label_7:
    if (rdi == 0) {
        goto label_37;
    }
label_3:
    fcn_00403b50 (rdi);
    rax = imp.__libc_start_main;
    rax = *((rax + rbp));
    r12 = *((rax + 0x20));
    rax = fcn_00408190 (*((rsp + 0x28)), 0);
    rax = (int64_t) eax;
    if (r12 <= rax) {
        goto label_38;
    }
    rdx = imp.__libc_start_main;
    rcx = *((rdx + rbp));
    rax = *((rcx + 0x20));
label_9:
    *((rcx + 0x20)) = rax;
    rcx = imp.__libc_start_main;
    rbx++;
    rax = imp.__libc_start_main;
    rax = *((rax + rcx*8 - 8));
    rcx = *((rsp + 0x28));
    *((rax + rbp)) = rcx;
    if (*(0x00617650) > rbx) {
        goto label_1;
    }
label_32:
    free (*(rsp));
    goto label_2;
    rdx = *((rcx + 0x30));
    if (rdx <= 0xfffffffffffffffd) {
        goto label_39;
    }
label_10:
    rax = strdup (0x413461);
    *((rsp + 0x28)) = rax;
    rdi = rax;
label_11:
    if (rdi != 0) {
        goto label_3;
    }
    goto label_40;
    rsi = *((rcx + 0x18));
    edx = *((rcx + 0x20));
    if (rsi <= 0xfffffffffffffffd) {
        goto label_6;
    }
label_5:
    edi = 0x413461;
    if (dl == 0) {
        goto label_4;
    }
label_6:
    r8 = *((rcx + 8));
    edi = (int32_t) dl;
    rax = fcn_00403ed0 (rdi, rsi, rsp + 0xf0, *(rcx));
    rdi = rax;
    goto label_4;
    rsi = *((rcx + 0x30));
    edx = *((rcx + 0x38));
    if (rsi > 0xfffffffffffffffd) {
        goto label_5;
    }
    goto label_6;
    rsi = *((rcx + 0x10));
    edi = 0x413461;
    if (rsi > 0xfffffffffffffffd) {
        goto label_4;
    }
    r8 = *((rcx + 8));
    rax = fcn_00403ed0 (0, rsi, rsp + 0xf0, *(rcx));
    rdi = rax;
    goto label_4;
    rax = fcn_0040a790 (r13);
    rdi = rax;
    *((rsp + 0x28)) = rax;
    goto label_7;
    rax = fcn_0040a790 (*(rsp));
    rdi = rax;
    *((rsp + 0x28)) = rax;
    goto label_7;
    rdi = r15;
    goto label_4;
label_34:
    if (eax != 2) {
        goto label_41;
    }
    ecx = 0;
    goto label_8;
label_33:
    rcx = rsp + 0xb0;
    goto label_8;
label_38:
    fcn_00408190 (*((rsp + 0x28)), 0);
    rdx = imp.__libc_start_main;
    rax = (int64_t) eax;
    rcx = *((rdx + rbp));
    goto label_9;
label_39:
    rsi = *((rcx + 0x18));
    if (rsi > 0xfffffffffffffffd) {
        goto label_10;
    }
    edi = *((rcx + 0x20));
    if (*((rcx + 0x38)) != 0) {
        goto label_42;
    }
    rax = 0x28f5c28f5c28f5c;
    if (rdx <= rax) {
        rcx = rdx;
        eax = 0;
        rcx += rsi;
        al = (rcx < 0) ? 1 : 0;
        if (rcx != 0) {
            goto label_43;
        }
    }
label_15:
    if (rdx < 0) {
        goto label_44;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rdx");
label_13:
    if (dil == 0) {
        goto label_45;
    }
    rsi = -rsi;
    if (rsi < 0) {
        goto label_46;
    }
    xmm1 = 0;
    __asm ("cvtsi2sd xmm1, rsi");
label_14:
    __asm ("xorpd xmm1, xmmword [0x00412130]");
label_12:
    __asm ("addsd xmm1, xmm0");
    xmm2 = 0;
    __asm ("ucomisd xmm1, xmm2");
    if (rsi == 0) {
        goto label_47;
    }
    if (rsi == 0) {
        goto label_10;
    }
label_47:
    __asm ("mulsd xmm0, qword [0x00412140]");
    xmm3 = *(0x00412148);
    __asm ("divsd xmm0, xmm1");
    xmm1 = 0;
    __asm ("cvttsd2si rax, xmm0");
    __asm ("cvtsi2sd xmm1, rax");
    __asm ("movapd xmm4, xmm1");
    __asm ("subsd xmm4, xmm3");
    __asm ("comisd xmm0, xmm4");
    if (rsi > 0) {
        __asm ("addsd xmm3, xmm1");
        __asm ("comisd xmm3, xmm0");
        if (rsi >= 0) {
            goto label_48;
        }
    }
label_16:
    __asm ("comisd xmm0, xmm2");
    if (rsi < 0) {
        goto label_10;
    }
    eax = 1;
    eax = fcn_0040acf0 (rsp + 0x28, "%.0f%%", rdx, rcx, r8, r9);
    if (eax != 0xffffffff) {
        rdi = *((rsp + 0x28));
        goto label_11;
    }
    *((rsp + 0x28)) = 0;
label_40:
    fcn_0040a7b0 ();
label_45:
    if (rsi < 0) {
        goto label_49;
    }
    xmm1 = 0;
    __asm ("cvtsi2sd xmm1, rsi");
    goto label_12;
label_42:
    rdx = -rdx;
    if (rdx < 0) {
        goto label_50;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, rdx");
    do {
        __asm ("xorpd xmm0, xmmword [0x00412130]");
        goto label_13;
label_46:
        rax = rsi;
        esi &= 1;
        xmm1 = 0;
        rax >>= 1;
        rax |= rsi;
        __asm ("cvtsi2sd xmm1, rax");
        __asm ("addsd xmm1, xmm1");
        goto label_14;
label_50:
        rax = rdx;
        edx &= 1;
        xmm0 = 0;
        rax >>= 1;
        rax |= rdx;
        __asm ("cvtsi2sd xmm0, rax");
        __asm ("addsd xmm0, xmm0");
    } while (1);
label_44:
    rax = rdx;
    edx &= 1;
    xmm0 = 0;
    rax >>= 1;
    rax |= rdx;
    __asm ("cvtsi2sd xmm0, rax");
    __asm ("addsd xmm0, xmm0");
    goto label_13;
label_49:
    rax = rsi;
    esi &= 1;
    xmm1 = 0;
    rax >>= 1;
    rax |= rsi;
    __asm ("cvtsi2sd xmm1, rax");
    __asm ("addsd xmm1, xmm1");
    goto label_12;
label_43:
    if (dil != al) {
        goto label_15;
    }
    rax = rdx * 5;
    edx = 0;
    rax *= 5;
    rax <<= 2;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    dl = (rdx != 0) ? 1 : 0;
    edx = (int32_t) dl;
    rdx += rax;
    if (rdx < 0) {
        goto label_51;
    }
    xmm0 = 0;
    xmm2 = 0;
    __asm ("cvtsi2sd xmm0, rdx");
    goto label_16;
label_48:
    __asm ("comisd xmm0, xmm1");
    if (rdx > 0) {
        goto label_52;
    }
    __asm ("addsd xmm1, xmm2");
    __asm ("movapd xmm0, xmm1");
    goto label_16;
label_25:
    rax = errno_location ();
    rbx = rax;
    if (*((rsp + 0x18)) != 0) {
        eax = *(rax);
        if (eax == 0xd) {
            goto label_53;
        }
        if (eax == 2) {
            goto label_53;
        }
    }
    rdx = r12;
    rax = fcn_00409c60 (0, 3);
    rcx = rax;
    eax = 0;
    error (0, *(rbx), 0x413b3f);
    *(0x006176d8) = 1;
    goto label_2;
label_28:
    rax = fcn_00405250 (*(rsp), 0);
    rbx = rax;
    if (rax == 0) {
        goto label_17;
    }
    free (*(rsp));
    *(rsp) = rbx;
    goto label_17;
label_36:
    r12 = r14;
    if (r14 == 0) {
        r12 = rbp;
    }
    goto label_18;
label_31:
    if (rsi <= 0xfffffffffffffffd) {
        *(0x006176a8) += rsi;
    }
    if (rdx <= 0xfffffffffffffffd) {
        *(0x006176b0) += rdx;
    }
    if (rcx <= 0xfffffffffffffffd) {
        rcx *= r9;
        *(0x00617688) += rcx;
    }
    if (rdi <= 0xfffffffffffffffd) {
        rdi *= r9;
        *(0x00617690) += rdi;
    }
    if (r8 > 0xfffffffffffffffd) {
        goto label_19;
    }
    ecx = *(0x006176a0);
    r8 *= r9;
    rdx = imp.__libc_start_main;
    if (cl == al) {
        goto label_54;
    }
    rsi = rdx;
    rdx = -rdx;
    if (cl == 0) {
        rdx = rsi;
    }
    rsi = r8;
    rsi = -rsi;
    if (al != 0) {
        r8 = rsi;
    }
    if (rdx <= r8) {
        goto label_55;
    }
    rdx -= r8;
    *(0x00617698) = rdx;
label_22:
    if (cl == 0) {
        goto label_19;
    }
    0x00617698 = -0x00617698;
    goto label_19;
label_52:
    __asm ("movapd xmm0, xmm3");
    goto label_16;
label_27:
    rdx = rsp + 0xf0;
    rsi = r12;
    edi = 1;
    eax = xstat ();
    if (eax == 0) {
        rdi = imp.__libc_start_main;
        rax = *((rsp + 0xf0));
        if (rdi == 0) {
            goto label_26;
        }
        *((rsp + 0xb0)) = rax;
        rax = fcn_004061f0 (rdi, rsp + 0xb0);
        if (rax == 0) {
            goto label_26;
        }
        r12 = *((rax + 8));
        if (r12 == 0) {
            goto label_26;
        }
        eax = strcmp (*(r12), rbp);
        if (eax == 0) {
            goto label_26;
        }
        if ((*((r12 + 0x28)) & 2) != 0) {
            if (bl != 0) {
                goto label_26;
            }
        }
        rax |= 0xffffffffffffffff;
        *((rsp + 0x50)) = 0;
        r13d = 0x413461;
        *((rsp + 0x60)) = rax;
        *((rsp + 0x58)) = rax;
        *((rsp + 0x48)) = rax;
        *((rsp + 0x40)) = rax;
        *((rsp + 0x38)) = rax;
        *((rsp + 0x30)) = rax;
    }
label_26:
    if (*((rsp + 0x38)) != 0) {
        goto label_20;
    }
    if (*(0x006176ee) != 0) {
        goto label_20;
    }
    goto label_21;
label_53:
    if (*(0x006176ee) == 0) {
        goto label_2;
    }
    rax = 0xffffffffffffffff;
    *((rsp + 0x50)) = 0;
    r13d = 0x413461;
    *((rsp + 0x60)) = rax;
    *((rsp + 0x58)) = rax;
    *((rsp + 0x48)) = rax;
    *((rsp + 0x40)) = rax;
    *((rsp + 0x38)) = rax;
    *((rsp + 0x30)) = rax;
    goto label_20;
label_41:
    assert_fail ("!\"bad field_type\"", "src/df.c", 0x435, "get_dev");label_51:
    rax = rdx;
    xmm0 = 0;
    xmm2 = 0;
    edx &= 1;
    rax >>= 1;
    rax |= rdx;
    __asm ("cvtsi2sd xmm0, rax");
    __asm ("addsd xmm0, xmm0");
    goto label_16;
label_35:
    assert_fail ("!\"unhandled field\"", "src/df.c", 0x49b, "get_dev");label_37:
    al = assert_fail ("!\"empty cell\"", "src/df.c", 0x49f, "get_dev");label_55:
    r8 -= rdx;
    *(0x006176a0) = al;
    ecx = eax;
    *(0x00617698) = r8;
    goto label_22;
label_54:
    r8 += rdx;
    *(0x00617698) = r8;
    goto label_19;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x404930 */
#include <stdint.h>
 
uint64_t fcn_00404930 (int64_t arg1) {
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
    rax = dcgettext (0, "Usage: %s [OPTION].. [FILE]..\n");
    rdx = rbp;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "Show information about the file system on which each FILE resides,\nor all file systems by default.\n");
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
    rax = dcgettext (0, "  -a, --all             include pseudo, duplicate, inaccessible file systems\n  -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,\n                           '-BM' prints sizes in units of 1,048,576 bytes;\n                           see SIZE format below\n  -h, --human-readable  print sizes in powers of 1024 (e.g., 1023M)\n  -H, --si              print sizes in powers of 1000 (e.g., 1.1G)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -i, --inodes          list inode information instead of block usage\n  -k                    like --block-size=1K\n  -l, --local           limit listing to local file systems\n      --no-sync         do not invoke sync before getting usage info (default)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --output[=FIELD_LIST]  use the output format defined by FIELD_LIST,\n                               or print all fields if FIELD_LIST is omitted.\n  -P, --portability     use the POSIX output format\n      --sync            invoke sync before getting usage info\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --total           elide all entries insignificant to available space,\n                          and produce a grand total\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -t, --type=TYPE       limit listing to file systems of type TYPE\n  -T, --print-type      print file system type\n  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n  -v                    (ignored)\n");
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
    rax = dcgettext (0, "\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n");
    edx = 0x41103d;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,.. (powers of 1000).\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nFIELD_LIST is a comma-separated list of columns to be included.  Valid\nfield names are: 'source', 'fstype', 'itotal', 'iused', 'iavail', 'ipcent',\n'size', 'used', 'avail', 'pcent', 'file' and 'target' (see info page).\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x411040;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x4110ba;
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
        esi = 0x41103a;
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
        eax = strncmp (rax, 0x4110c4, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x41105c;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = 0x41103a;
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x413a14;
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
            eax = strncmp (rax, 0x4110c4, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = 0x41103a;
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x41105c;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = 0x41103a;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x404d60 */
#include <stdint.h>
 
uint64_t fcn_00404d60 (void) {
    rax = fcn_0040a790 (rdi);
    r14 = rax;
label_0:
    r13d = 0;
    rax = strchr (rbp, 0x2c);
    if (rax != 0) {
        *(rax) = 0;
        r13 = rax + 1;
    }
    ebx = 0;
    do {
        rax = rbx * 3;
        r12d = ebx;
        rax <<= 4;
        r15 = *((rax + 0x617328));
        eax = strcmp (*((rax + 0x617328)), rbp);
        if (eax == 0) {
            goto label_3;
        }
        rbx++;
    } while (rbx != 0xc);
    rax = fcn_00409de0 (rbp);
    edx = 5;
    rbx = rax;
label_2:
    rax = dcgettext (0, "option --output: field %s unknown");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    fcn_00404930 (1);
label_3:
    eax = ebx;
    rax *= 3;
    rax <<= 4;
    if (*((rax + 0x61734c)) != 0) {
        goto label_4;
    }
    eax = 1;
    ecx = r12d;
    rax <<= cl;
    if ((eax & 0xfeb) != 0) {
        goto label_5;
    }
    if ((al & 0x10) != 0) {
        goto label_6;
    }
    if ((al & 4) == 0) {
        goto label_7;
    }
    fcn_00403e20 (ebx, "Size");
label_1:
    if (r13 != 0) {
        goto label_0;
    }
    rdi = r14;
invalid_funccall(); //    void (*0x401e10)() ();
label_5:
    fcn_00403e20 (ebx, 0);
    goto label_1;
label_6:
    fcn_00403e20 (ebx, "Avail");
    goto label_1;
label_7:
    assert_fail ("!\"invalid field\"", "src/df.c", 0x1ab, "decode_output_arg");label_4:
    rax = fcn_00409de0 (r15);
    edx = 5;
    esi = "option --output: field %s used more than once";
    rbx = rax;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x404ed0 */
#include <stdint.h>
 
uint64_t fcn_00404ed0 (int64_t arg1, int64_t arg2) {
    void * s1;
    rdi = arg1;
    rsi = arg2;
    r14 = rdi;
    rbx = rsi;
    eax = fcn_00409f30 (rbp - 0x150);
    r13d = eax;
    rax = errno_location ();
    r12 = rax;
    if (r13d != 0) {
        goto label_3;
    }
    eax = *((rbx + 0x18));
    eax &= 0xf000;
    if (eax == 0x4000) {
        goto label_4;
    }
    rdi = r14;
    rax = fcn_00405990 ();
    rdi = rax;
    rbx = rax;
    rax = strlen (rdi);
    rax += 0x18;
    rax &= 0xfffffffffffffff0;
    rdi &= 0xfffffffffffffff0;
    rax = memcpy (rsp + 0xf, rbx, rax + 1);
    r13 = rax;
    free (rbx);
    rdi = r13;
    eax = chdir ();
    if (eax < 0) {
        goto label_5;
    }
    rdx = rbp - 0x140;
    esi = 0x41218c;
    edi = 1;
    eax = xstat ();
    if (eax >= 0) {
        goto label_0;
    }
    rax = fcn_00409b90 (4, r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot stat current directory (now %s)");
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, *(r12), rax);
    goto label_6;
    do {
        rax = *((rbp - 0x140));
        if (*((rbp - 0xb0)) != rax) {
            goto label_7;
        }
        rax = *((rbp - 0x138));
        if (*((rbp - 0xa8)) == rax) {
            goto label_7;
        }
        edi = 0x41218b;
        eax = chdir ();
        if (eax < 0) {
            goto label_8;
        }
        __asm ("movdqa xmm0, xmmword [rbp - 0xb0]");
        __asm ("movdqa xmm1, xmmword [rbp - 0xa0]");
        __asm ("movdqa xmm2, xmmword [rbp - 0x90]");
        __asm ("movdqa xmm3, xmmword [rbp - 0x80]");
        *((rbp - 0x140)) = xmm0;
        __asm ("movdqa xmm4, xmmword [rbp - 0x70]");
        __asm ("movdqa xmm5, xmmword [rbp - 0x60]");
        __asm ("movdqa xmm6, xmmword [rbp - 0x50]");
        __asm ("movdqa xmm7, xmmword [rbp - 0x40]");
        *((rbp - 0x130)) = xmm1;
        __asm ("movdqa xmm0, xmmword [rbp - 0x30]");
        *((rbp - 0x120)) = xmm2;
        *((rbp - 0x110)) = xmm3;
        *((rbp - 0x100)) = xmm4;
        *((rbp - 0xf0)) = xmm5;
        *((rbp - 0xe0)) = xmm6;
        *((rbp - 0xd0)) = xmm7;
        *((rbp - 0xc0)) = xmm0;
label_0:
        rdx = rbp - 0xb0;
        esi = 0x41218b;
        edi = 1;
        eax = xstat ();
    } while (eax >= 0);
    rax = fcn_00409b90 (4, 0x41218b);
    edx = 5;
    rbx = rax;
label_2:
    rax = dcgettext (0, "cannot stat %s");
    rcx = rbx;
    eax = 0;
    ebx = 0;
    error (0, *(r12), rax);
    goto label_6;
label_7:
    rax = fcn_0040a7f0 ();
    rbx = rax;
label_6:
    r13d = *(r12);
    eax = fcn_00409f80 (rbp - 0x150);
    if (eax != 0) {
        goto label_9;
    }
    fcn_00409fa0 (rbp - 0x150);
    *(r12) = r13d;
label_1:
    rsp = rbp - 0x20;
    rax = rbx;
    return rax;
label_4:
    __asm ("movdqu xmm1, xmmword [rbx]");
    __asm ("movdqu xmm2, xmmword [rbx + 0x10]");
    rdi = r14;
    __asm ("movdqu xmm3, xmmword [rbx + 0x20]");
    __asm ("movdqu xmm4, xmmword [rbx + 0x30]");
    *((rbp - 0x140)) = xmm1;
    __asm ("movdqu xmm5, xmmword [rbx + 0x40]");
    __asm ("movdqu xmm6, xmmword [rbx + 0x50]");
    *((rbp - 0x130)) = xmm2;
    __asm ("movdqu xmm7, xmmword [rbx + 0x60]");
    __asm ("movdqu xmm1, xmmword [rbx + 0x70]");
    __asm ("movdqu xmm2, xmmword [rbx + 0x80]");
    *((rbp - 0x120)) = xmm3;
    *((rbp - 0x110)) = xmm4;
    *((rbp - 0x100)) = xmm5;
    *((rbp - 0xf0)) = xmm6;
    *((rbp - 0xe0)) = xmm7;
    *((rbp - 0xd0)) = xmm1;
    *((rbp - 0xc0)) = xmm2;
    eax = chdir ();
    rsi = r14;
    if (eax >= 0) {
        goto label_0;
    }
    do {
        rax = fcn_00409b90 (4, rsi);
        edx = 5;
        rbx = rax;
        rax = dcgettext (0, "cannot change to directory %s");
        rcx = rbx;
        eax = 0;
        ebx = 0;
        error (0, *(r12), rax);
        goto label_1;
label_8:
        rax = fcn_00409b90 (4, 0x41218b);
        edx = 5;
        esi = "cannot change to directory %s";
        rbx = rax;
        goto label_2;
label_3:
        edx = 5;
        ebx = 0;
        rax = dcgettext (0, 0x412150);
        eax = 0;
        error (0, *(r12), rax);
        goto label_1;
label_5:
        rsi = r13;
    } while (1);
label_9:
    edx = 5;
    rax = dcgettext (0, "failed to return to initial working directory");
    eax = 0;
    rax = error (1, *(r12), rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405250 */
#include <stdint.h>
 
uint64_t fcn_00405250 (int64_t arg1, int64_t arg2) {
    uint32_t var_8h;
    uint32_t var_14h;
    uint32_t var_18h;
    uint32_t var_sp_20h;
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
    rax = fcn_0040a7f0 ();
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
        rax = fcn_0040a5c0 (rdi, rbp);
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
        rax = fcn_0040a560 (0x1000);
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
    strspn (r14, 0x41236e);
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
        rax = fcn_0040a5c0 (r12, rbx + 1);
        r12 = rax;
    }
    free (*((rsp + 0x28)));
    rax = *((rsp + 0x18));
    if (rax != 0) {
        fcn_004066a0 (rax);
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
    al = fcn_00405b90 (*((rsp + 0x18)), *((rsp + 0x20)), rsp + 0x40);
    if (al == 0) {
        fcn_00405b00 (*((rsp + 0x18)), *((rsp + 0x20)), rsp + 0x40);
        rax = fcn_0040d6b0 (r12, *((rsp + 0x70)));
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
    fcn_004066a0 (*((rsp + 0x18)));
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
    rax = fcn_00406460 (7, 0, 0x406e20, 0x406e90, 0x406ed0);
    *((rsp + 0x18)) = rax;
    if (rax != 0) {
        goto label_8;
    }
    fcn_0040a7b0 ();
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
    rax = fcn_0040a560 (rdi);
    rdx = *((rsp + 8));
    *((rsp + 0x28)) = rax;
    goto label_11;
label_19:
    errno_location ();
    r12d = 0;
    *(rax) = 2;
    goto label_7;
label_21:
    rax = fcn_0040a5c0 (r12, 0x1000);
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
    rax = fcn_0040a5c0 (*((rsp + 0x28)), rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405990 */
#include <stdint.h>
 
uint64_t fcn_00405990 (void) {
    rax = fcn_00405a10 (rdi);
    if (rax != 0) {
        return rax;
    }
    return fcn_0040a7b0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x4059b0 */
#include <stdint.h>
 
uint64_t fcn_004059b0 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_00405a70 (rdi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405a10 */
#include <stdint.h>
 
uint64_t fcn_00405a10 (int64_t arg1) {
    rdi = arg1;
    rax = fcn_004059b0 (rdi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405a70 */
#include <stdint.h>
 
int64_t fcn_00405a70 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405ad0 */
#include <stdint.h>
 
uint64_t fcn_00405ad0 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405b00 */
#include <stdint.h>
 
uint64_t fcn_00405b00 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdi != 0) {
        r13 = rdi;
        r12 = rsi;
        rax = fcn_0040a560 (0x18);
        rbx = rax;
        rax = fcn_0040a790 (r12);
        rsi = rbx;
        *(rbx) = rax;
        rax = *((rbp + 8));
        *((rbx + 8)) = rax;
        rax = *(rbp);
        *((rbx + 0x10)) = rax;
        rax = fcn_00406c00 (r13);
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
    fcn_0040a7b0 ();
label_1:
    rbx = rdi;
    free (*(rdi));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405b90 */
#include <stdint.h>
 
int64_t fcn_00405b90 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_004061f0 (rdi, rsp);
        al = (rax != 0) ? 1 : 0;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405bd0 */
#include <stdint.h>
 
int64_t fcn_00405bd0 (uint32_t arg1, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405c90 */
#include <stdint.h>
 
uint64_t fcn_00405c90 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        /* [13] -r-x section size 60424 named .text */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405cc0 */
#include <stdint.h>
 
uint64_t fcn_00405cc0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_00405c90 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405de0 */
#include <stdint.h>
 
int64_t fcn_00405de0 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x412280) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x00412294]");
        if (rax > 0x412280) {
            xmm1 = *(0x00412298);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x412280) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x0041229c]");
            if (rax <= 0x412280) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x004122a0]");
            if (rax < 0x412280) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x00412294]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x412280) {
                goto label_0;
            }
            xmm3 = *(0x004122a4);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x412280) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x412280) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x412280;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x405e60 */
#include <stdint.h>
 
uint64_t fcn_00405e60 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
        rax = fcn_00405c90 (rbp, r15);
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
    rax = fcn_00405c90 (rbp, r15);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x4061f0 */
#include <stdint.h>
 
uint64_t fcn_004061f0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_00405c90 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x406460 */
#include <stdint.h>
 
uint64_t fcn_00406460 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x405c70;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x405c80;
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
    al = fcn_00405de0 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_00405bd0 (rbp, rsi);
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
        *((rax + 0x28)) = 0x412280;
        al = fcn_00405de0 (rdi);
        xmm1 = *(0x004122a8);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x004122ac]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x004122b0]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x004122b0]");
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x4066a0 */
#include <stdint.h>
 
int64_t fcn_004066a0 (uint32_t arg1) {
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
invalid_funccall(); //        uint64_t (*r12 + 0x40)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x406780 */
#include <stdint.h>
 
uint64_t fcn_00406780 (int64_t arg1, uint32_t arg2) {
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
            __asm ("comiss xmm0, dword [0x004122ac]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x004122b0]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x004122b0]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_00405bd0 (rsi, rsi);
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
        eax = fcn_00405e60 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_00405e60 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_00405e60 (rbp, rsp, 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x406980 */
#include <stdint.h>
 
uint64_t fcn_00406980 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    rax = fcn_00405cc0 (rdi, rsi, rsp + 8, 0);
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
    fcn_00405de0 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x004122ac]");
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
    __asm ("comiss xmm0, dword [0x004122b0]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_00406780 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_00405cc0 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x004122b0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x406c00 */
#include <stdint.h>
 
uint64_t fcn_00406c00 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_00406980 (rdi, rsi, rsp + 8);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x406ef0 */
#include <stdint.h>
 
uint64_t fcn_00406ef0 (int64_t arg1) {
    rdi = arg1;
    *(fp_stack--) = *(0x004122b0);
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
            fp_stack[0] += *(0x004122ac);
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
    fp_stack[0] += *(0x004122ac);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x406fb0 */
#include <stdint.h>
 
void fcn_00406fb0 (int64_t arg1, void * arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
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
    eax = 0x41218c;
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
    eax = 0x413a14;
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
    *(fp_stack--) = *(0x00412314);
    fp_stack[1] *= fp_stack[0];
label_26:
    *(fp_stack--) = fp_stack[unknown];
    __asm ("fcompi st(2)");
    if (rax > r15) {
        *((rsp + 0x20)) = fp_stack[0];
        fp_stack--;
        unknown = fp_stack[0];
        fp_stack--;
        fcn_00406ef0 (*((rsp + 0x24)));
        *(fp_stack--) = *((rsp + 0x20));
    }
label_15:
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ecx = 0x4122b4;
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
    ecx = 0x4122b4;
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
    fp_stack[0] += *(0x004122ac);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    if ((*((rsp + 0x10)) & 0x10) != 0) {
        goto label_0;
    }
    goto label_1;
label_34:
    fp_stack[0] += *(0x004122ac);
    *((rsp + 0x20)) = rbx;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((rsp + 0x20));
    if (rbx >= 0) {
        goto label_2;
    }
    goto label_3;
label_33:
    fp_stack[0] += *(0x004122ac);
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
    ecx = *((rbx + 0x412308));
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
    fcn_00406ef0 (rdi);
    goto label_11;
label_38:
    *(fp_stack--) = fp_stack[0];
    unknown = fp_stack[0];
    fp_stack--;
    unknown = fp_stack[0];
    fp_stack--;
    fcn_00406ef0 (rdi);
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
    *(fp_stack--) = *(0x00412314);
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
    *(fp_stack--) = *(0x00412314);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x407980 */
#include <stdint.h>
 
int64_t fcn_00407980 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    eax = fcn_0040d7b0 (rbx, 0x4122f0, 0x4122e0, 4);
    if (eax >= 0) {
        rax = (int64_t) eax;
        *(r12) = 1;
        ebp |= *((rax*4 + 0x4122e0));
        eax = 0;
        *(r13) = ebp;
label_0:
        return rax;
    }
    eax = fcn_0040a8b0 (rbx, rsp + 8, 0, r12, "eEgGkKmMpPtTyYzZ0");
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
    rax = getenv (0x41114a);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x407b40 */
#include <stdint.h>
 
int64_t fcn_00407b40 (uint32_t arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x407b90 */
#include <stdint.h>
 
uint64_t fcn_00407b90 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        goto label_6;
    }
label_0:
    *(rsp) = 0;
    r15 = r14;
    r12d = 0;
label_2:
    rdx = *(r13);
    if (rdx < r15) {
        r14 = rdx;
label_4:
        r12d = 0;
    }
    if (r15 >= rdx) {
        goto label_7;
    }
    esi = *((rsp + 0x14));
    rax = rdx;
    rdx = r15;
    rax -= r15;
    *(r13) = rdx;
    if (esi != 0) {
invalid_funccall(); //        void (*0x407bf8)() ();
    }
label_6:
    r12 = rax;
    rax = ctype_get_mb_cur_max ();
    if (rax <= 1) {
        goto label_0;
    }
    rax = mbstowcs (0, *((rsp + 0x18)), 0);
    if (rax != -1) {
        goto label_8;
    }
    if ((bpl & 1) != 0) {
        goto label_0;
    }
label_3:
    *(rsp) = 0;
    r12d = 0;
    r13 = 0xffffffffffffffff;
invalid_funccall(); //    void (*0x407cae)() ();
label_8:
    r15 = rax + 1;
    rax = r15*4;
    rdi = rax;
    *((rsp + 0x20)) = rax;
    rax = malloc (rdi);
    *(rsp) = rax;
    if (rax == 0) {
        goto label_9;
    }
    rax = mbstowcs (*(rsp), *((rsp + 0x18)), r15);
    if (rax == 0) {
        goto label_10;
    }
    rax = *(rsp);
    rsi = *((rsp + 0x20));
    *((rax + rsi - 4)) = 0;
    edi = *(rax);
    rdx = rax;
    if (edi == 0) {
        goto label_11;
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
        goto label_12;
    }
    rax = wcstombs (0, *(rsp), 0);
    rax++;
    *((rsp + 0x20)) = rax;
label_5:
    rax = malloc (*((rsp + 0x20)));
    r12 = rax;
    if (rax == 0) {
        goto label_13;
    }
    r14 = *(rsp);
    rax = *(r13);
    edi = *(r14);
    *((rsp + 0x18)) = rax;
    if (edi == 0) {
        goto label_14;
    }
    r15d = 0;
    while (eax != 0xffffffff) {
        rax = (int64_t) eax;
label_1:
        rax += r15;
        if (*((rsp + 0x18)) < rax) {
            goto label_15;
        }
        r14 += 4;
        edi = *(r14);
        r15 = rax;
        if (edi == 0) {
            goto label_15;
        }
        eax = wcwidth ();
    }
    *(r14) = 0xfffd;
    eax = 1;
    goto label_1;
label_9:
    r15 = r14;
    r12d = 0;
    if ((bpl & 1) != 0) {
        goto label_2;
    }
    goto label_3;
label_11:
    rdi = *(rsp);
    rsi = r15;
    eax = wcswidth ();
    r15 = (int64_t) eax;
label_12:
    rdx = *(r13);
    if (rdx >= r15) {
        goto label_4;
    }
    rax = r12 + 1;
    *((rsp + 0x20)) = rax;
    goto label_5;
label_14:
    r14 = *(rsp);
    r15d = 0;
label_15:
    *(r14) = 0;
    rax = wcstombs (r12, *(rsp), *((rsp + 0x20)));
    *((rsp + 0x18)) = r12;
    r14 = rax;
    goto label_2;
label_13:
    if ((bpl & 1) != 0) {
        goto label_2;
    }
    r13 = 0xffffffffffffffff;
invalid_funccall(); //    void (*0x407cae)() ();
label_10:
    r15 = r14;
    r12d = 0;
    goto label_2;
label_7:
    rdx = r15;
    eax = 0;
invalid_funccall(); //    return void (*0x407be8)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x407be6 */
#include <stdint.h>
 
int64_t fcn_00407be6 (int64_t arg_8h, int64_t arg_14h, int64_t arg_18h, int64_t arg3) {
    rdx = arg3;
    eax = 0;
    esi = *((rsp + 0x14));
    *(r13) = rdx;
    if (esi == 0) {
        goto label_1;
    }
    r13d = 0;
    if (esi != 1) {
        r13 = rax;
        eax &= 1;
        r13 >>= 1;
        rax += r13;
    }
label_0:
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
        goto label_2;
    }
    rbp = rbx + rsi - 1;
    rdi = rbx;
    if (rbx >= rbp) {
        goto label_3;
    }
    if (rax != 0) {
        goto label_4;
    }
    goto label_3;
    do {
        if (rbp <= rdi) {
            goto label_3;
        }
label_4:
        rdi++;
        rdx = rbx;
        *((rdi - 1)) = 0x20;
        rdx -= rdi;
        rdx += rax;
    } while (rdx != 0);
label_3:
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
        goto label_5;
    }
    if (r13 != 0) {
        goto label_6;
    }
    goto label_5;
    do {
        if (rbp <= rdx) {
            goto label_5;
        }
label_6:
        rdx++;
        rcx = r13;
        *((rdx - 1)) = 0x20;
        rcx -= rdx;
        rcx += rax;
    } while (rcx != 0);
label_5:
    *(rdx) = 0;
label_2:
    r13 += r15;
    free (*(rsp));
    free (r12);
    rax = r13;
    return rax;
label_1:
    r13 = rax;
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x407f30 */
#include <stdint.h>
 
int64_t fcn_00407f30 (int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rdi;
    r12d = 0;
    r13 = *(rsi);
    *((rsp + 8)) = edx;
    *((rsp + 0xc)) = ecx;
    rax = r13;
    do {
        rbx = rax + 1;
        rax = realloc (r12, rbx);
        r14 = rax;
        if (rax == 0) {
            goto label_1;
        }
        *(rbp) = r13;
        rax = fcn_00407b90 (r15, rax, rbx, rbp, *((rsp + 8)), *((rsp + 0xc)));
        if (rax == -1) {
            goto label_2;
        }
        r12 = r14;
    } while (rbx <= rax);
    do {
label_0:
        rax = r14;
        return rax;
label_1:
        free (r12);
    } while (1);
label_2:
    r14d = 0;
    free (r14);
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x408190 */
#include <stdint.h>
 
uint64_t fcn_00408190 (char * arg1, int64_t arg2) {
    wint_t wc;
    mbstate_t * ps;
    rdi = arg1;
    rsi = arg2;
label_7:
    r15d = edx;
    r13 = rdi + rsi;
    rbx = rdi;
    rax = ctype_get_mb_cur_max ();
    if (rax <= 1) {
        goto label_8;
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
                goto label_9;
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
        goto label_9;
    }
    if (al <= 0x5f) {
        goto label_0;
    }
    eax -= 0x61;
    if (al <= 0x1d) {
        goto label_0;
    }
label_9:
    *((rsp + 8)) = 0;
    goto label_10;
label_2:
    edx = 0x7fffffff;
    edx -= r12d;
    if (edx < eax) {
        goto label_11;
    }
    r12d += eax;
label_3:
    rbx += rbp;
    eax = mbsinit (rsp + 8);
    if (eax != 0) {
        goto label_1;
    }
label_10:
    rdx -= rbx;
    rax = fcn_0040c400 (rsp + 4, rbx, r13, rsp + 8);
    if (rax == -1) {
        goto label_12;
    }
    if (rax == 0xfffffffffffffffe) {
        goto label_13;
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
        goto label_11;
    }
    r12d++;
    goto label_3;
label_12:
    if ((r15b & 1) == 0) {
        goto label_0;
    }
label_4:
    r12d = 0xffffffff;
    do {
label_5:
        eax = r12d;
        return rax;
label_8:
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
        goto label_14;
    }
    if (r15d != 0) {
        goto label_4;
    }
    if ((al & 2) != 0) {
        goto label_15;
    }
label_14:
    if (r12d == 0x7fffffff) {
        goto label_5;
    }
    r12d++;
label_15:
    if (r13 != rbx) {
        goto label_6;
    }
    goto label_5;
label_13:
    if ((r15b & 1) != 0) {
        goto label_4;
    }
    r12d++;
    rbx = r13;
    goto label_1;
label_11:
    r12d = 0x7fffffff;
    goto label_5;
    rbx = rdi;
    rax = strlen (rdi);
    edx = ebp;
    rdi = rbx;
    rsi = rax;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x4081c0 */
#include <stdint.h>
 
uint64_t fcn_004081c0 (char ** arg1) {
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
            edi = 0x412370;
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
        *(0x00617708) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x408260 */
#include <stdint.h>
 
uint64_t fcn_00408260 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040dc80 ();
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
        eax = 0x412374;
        ebx = 0x41237f;
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
        eax = 0x412378;
        ebx = 0x41237b;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x4138af;
    ebx = 0x410fe6;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x408360 */
#include <stdint.h>
 
uint64_t fcn_00408360 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
    /* switch table (11 cases) at 0x4123e0 */
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
    *((rsp + 0x50)) = 0x4138af;
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
        /* switch table (127 cases) at 0x412438 */
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
    rax = fcn_00408360 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x412830 */
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
    /* switch table (127 cases) at 0x412c28 */
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
    *((rsp + 0x50)) = 0x4138af;
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
        rax = fcn_0040c400 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x4138af;
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
        *((rsp + 0x50)) = 0x410fe6;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00408260 (0x412383, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00408260 (0x4138af, r13d);
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
        *((rsp + 0x50)) = 0x410fe6;
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
        *((rsp + 0x50)) = 0x4138af;
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
    *((rsp + 0x50)) = 0x410fe6;
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
    rax = fcn_00408360 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x4138af;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409590 */
#include <stdint.h>
 
uint64_t fcn_00409590 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x006175b8);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x006175d0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x6175c0) {
        goto label_2;
    }
    rax = fcn_0040a5c0 (rbx, rsi);
    *(0x006175b8) = rax;
    rbx = rax;
    do {
        rdi = *(0x006175d0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x006175d0) = r12d;
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
        rax = fcn_00408360 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x617720) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_0040a560 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00408360 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_0040a5c0 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x006175c0]");
        rbx = rax;
        *(0x006175b8) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_0040a7b0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409ab0 */
#include <stdint.h>
 
int64_t fcn_00409ab0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00409590 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409b90 */
#include <stdint.h>
 
void fcn_00409b90 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
invalid_funccall(); //    return void (*0x409ab0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409c30 */
#include <stdint.h>
 
int64_t fcn_00409c30 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x00617820]");
        __asm ("movdqa xmm1, xmmword [0x00617830]");
        __asm ("movdqa xmm2, xmmword [0x00617840]");
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
        fcn_00409590 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409c60 */
#include <stdint.h>
 
int64_t fcn_00409c60 (uint32_t arg2, int64_t arg3) {
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
    fcn_00409590 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409dc0 */
#include <stdint.h>
 
void fcn_00409dc0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x617580;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x409590)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409de0 */
#include <stdint.h>
 
void fcn_00409de0 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x617580;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x409590)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409f30 */
#include <stdint.h>
 
uint64_t fcn_00409f30 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = 0;
    *((rdi + 8)) = 0;
    eax = fcn_0040db90 (0x41218c, 0x80000, rdx, rcx);
    edx = eax;
    *(rbx) = eax;
    eax = 0;
    if (edx >= 0) {
        return eax;
    }
    rax = fcn_0040b160 (0, 0);
    *((rbx + 8)) = rax;
    al = (rax == 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409f80 */
#include <stdint.h>
 
uint64_t fcn_00409f80 (int64_t arg1) {
    int64_t var_ch;
    rdi = arg1;
    eax = *(rdi);
    if (eax >= 0) {
        edi = eax;
invalid_funccall(); //        void (*0x402220)() ();
    }
    rdi = *((rdi + 8));
    r13 = rdi;
    eax = chdir ();
    ebx = eax;
    if (eax == 0) {
        goto label_3;
    }
    rax = errno_location ();
    r12 = rax;
    if (*(rax) != 0x24) {
        goto label_3;
    }
    rax = strlen (r13);
    *((rsp + 0xc)) = 0xffffff9c;
    r14 = rax;
    if (rax == 0) {
        goto label_4;
    }
    if (rax <= 0xfff) {
        goto label_5;
    }
    rax = strspn (r13, 0x41236e);
    rbx = rax;
    if (rax == 2) {
        goto label_6;
    }
    if (rax != 0) {
        goto label_7;
    }
label_0:
    if (*(rbp) == 0x2f) {
        goto label_8;
    }
    r13 += r14;
    if (rbp <= r13) {
        goto label_9;
    }
    goto label_10;
    do {
        edx = 0x1000;
        esi = 0x2f;
        rdi = rbp;
        rax = memrchr ();
        rbx = rax;
        if (rax == 0) {
            goto label_11;
        }
        *(rax) = 0;
        rax -= rbp;
        if (rax > 0xfff) {
            goto label_12;
        }
        eax = fcn_0040adc0 (rsp + 0xc, rbp);
        *(rbx) = 0x2f;
        if (eax != 0) {
            goto label_2;
        }
        rbx++;
        strspn (rbx, 0x41236e);
        rbp = rbx + rax;
label_9:
        rax = r13;
        rax -= rbp;
    } while (rax > 0xfff);
    if (r13 > rbp) {
        eax = fcn_0040adc0 (rsp + 0xc, rbp);
        if (eax != 0) {
            goto label_2;
        }
    }
    edi = *((rsp + 0xc));
    eax = fchdir ();
    ebx = eax;
    if (eax == 0) {
        goto label_13;
    }
    do {
label_2:
        ebx = *(r12);
        fcn_0040ad80 (*((rsp + 0xc)));
        *(r12) = ebx;
label_1:
        ebx = 0xffffffff;
label_3:
        eax = ebx;
        return rax;
label_7:
        eax = fcn_0040adc0 (rsp + 0xc, 0x41236e);
    } while (eax != 0);
    rbp = r13 + rbx;
    goto label_0;
label_6:
    rax = fcn_0040c480 (r13 + 3, 0x2f, r14 - 3);
    rbx = rax;
    if (rax == 0) {
        goto label_1;
    }
    *(rax) = 0;
    eax = fcn_0040adc0 (rsp + 0xc, r13);
    *(rbx) = 0x2f;
    if (eax != 0) {
        goto label_2;
    }
    rbx++;
    strspn (rbx, 0x41236e);
    rbp = rbx + rax;
    goto label_0;
label_11:
    *(r12) = 0x24;
    ebx = 0xffffffff;
    goto label_3;
label_13:
    fcn_0040ad80 (*((rsp + 0xc)));
    goto label_3;
label_12:
    assert_fail ("slash - dir < 4096", "lib/chdir-long.c", 0xb3, "chdir_long");
label_8:
    assert_fail ("*dir != '/'", "lib/chdir-long.c", 0xa2, "chdir_long");
label_10:
    assert_fail ("dir <= dir_end", "lib/chdir-long.c", 0xa3, "chdir_long");
label_5:
    assert_fail ("4096 <= len", "lib/chdir-long.c", 0x7f, "chdir_long");
label_4:
    return assert_fail ("0 < len", "lib/chdir-long.c", 0x7e, "chdir_long");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409fa0 */
#include <stdint.h>
 
void fcn_00409fa0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    edi = *(rdi);
    if (edi >= 0) {
        close (rdi);
    }
    rdi = *((rbx + 8));
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x409fc0 */
#include <stdint.h>
 
void fcn_00409fc0 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x4130cb);
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
        /* switch table (10 cases) at 0x4133b8 */
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
invalid_funccall(); //    void (*0x402330)() ();
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
invalid_funccall(); //    void (*0x402330)() ();
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
invalid_funccall(); //    void (*0x402330)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a420 */
#include <stdint.h>
 
uint64_t fcn_0040a420 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00409fc0 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a560 */
#include <stdint.h>
 
uint64_t fcn_0040a560 (int64_t arg1) {
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
    return fcn_0040a7b0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a5c0 */
#include <stdint.h>
 
uint64_t fcn_0040a5c0 (void * arg1, int64_t arg2) {
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
    return fcn_0040a7b0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a760 */
#include <stdint.h>
 
uint64_t fcn_0040a760 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_0040a560 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a790 */
#include <stdint.h>
 
void fcn_0040a790 (char * arg1) {
    rdi = arg1;
    rbx = rdi;
    strlen (rdi);
    rdi = rbx;
    rsi = rax + 1;
invalid_funccall(); //    return void (*0x40a760)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a7b0 */
#include <stdint.h>
 
uint64_t fcn_0040a7b0 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x00617568), 0, 0x413b3f);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a7f0 */
#include <stdint.h>
 
uint64_t fcn_0040a7f0 (void) {
    rax = fcn_0040b160 (0, 0);
    rbx = rax;
    while (*(rax) != 0xc) {
        rax = rbx;
        return rax;
        rax = errno_location ();
    }
    return fcn_0040a7b0 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a820 */
#include <stdint.h>
 
int64_t fcn_0040a820 (uint32_t arg1, int64_t arg2, int64_t arg4, int64_t arg5) {
    int64_t var_eh;
    int64_t var_fh;
    rdi = arg1;
    rsi = arg2;
    rcx = arg4;
    r8 = arg5;
    do {
        abort ();
        edi--;
        ebx = *(0x00617568);
    } while (edi > 3);
    r10d = esi;
    rsi = *((rdi*8 + 0x4134e0));
    rax = (int64_t) r10d;
    if (r10d < 0) {
        goto label_0;
    }
    rax <<= 5;
    r12d = 0x413460;
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
        r12d = 0x413460;
        *((rsp + 0xe)) = dl;
        r13 = rsp + 0xe;
        r12 -= rax;
        *((rsp + 0xf)) = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40a8b0 */
#include <stdint.h>
 
uint64_t fcn_0040a8b0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x413538 */
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
    /* switch table (54 cases) at 0x4136b8 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40acf0 */
#include <stdint.h>
 
uint64_t fcn_0040acf0 (int64_t arg_e0h, int64_t arg10, int64_t arg11, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9) {
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
    xmm3 = arg10;
    xmm4 = arg11;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
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
    rax = rsp + 0xe0;
    *((rsp + 8)) = 0x10;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x20;
    *((rsp + 0xc)) = 0x30;
    *((rsp + 0x18)) = rax;
    fcn_0040d650 (rdi, rsi, rsp + 8);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40ad80 */
#include <stdint.h>
 
uint32_t fcn_0040ad80 (int64_t arg1) {
    rdi = arg1;
    if (edi < 0) {
        return;
    }
    eax = close (rdi);
    if (eax == 0) {
        return eax;
    }
    return assert_fail ("! close_fail", "lib/chdir-long.c", 0x40, "cdb_free");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40adc0 */
#include <stdint.h>
 
int32_t fcn_0040adc0 (int64_t fd, const char * path) {
    rdi = fd;
    rsi = path;
    eax = 0;
    rbx = rdi;
    eax = openat (*(rdi), rsi, 0x10900);
    if (eax < 0) {
        goto label_0;
    }
    eax = fcn_0040ad80 (*(rbx));
    *(rbx) = ebp;
    eax = 0;
    do {
        return eax;
label_0:
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40b070 */
#include <stdint.h>
 
int64_t fcn_0040b070 (int64_t arg1, int64_t arg3) {
    int64_t var_82h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rdx = arg3;
    r12 = rdi;
    rbx = rdx;
    eax = *(0x006175d4);
    if (eax >= 0) {
        if (eax == 0) {
            goto label_2;
        }
label_0:
        rsi = rbp;
        rdi = r12;
        eax = statvfs ();
        edx = eax;
        eax = 0xffffffff;
        if (edx < 0) {
            goto label_1;
        }
        rax = *((rsp + 8));
        if (rax != 0) {
            goto label_3;
        }
        rax = *(rsp);
        goto label_3;
    }
    rdi = rbp;
    eax = uname ();
    while (eax < 0) {
        *(0x006175d4) = 0;
label_2:
        rsi = rbp;
        rdi = r12;
        eax = statfs ();
        if (eax < 0) {
            goto label_4;
        }
        rax = *((rsp + 8));
label_3:
        *(rbx) = rax;
        rax = *((rsp + 0x10));
        *((rbx + 8)) = rax;
        rax = *((rsp + 0x18));
        *((rbx + 0x10)) = rax;
        rax = *((rsp + 0x20));
        *((rbx + 0x18)) = rax;
        rax >>= 0x3f;
        *((rbx + 0x20)) = al;
        rax = *((rsp + 0x28));
        *((rbx + 0x28)) = rax;
        rax = *((rsp + 0x30));
        *((rbx + 0x30)) = rax;
        eax = 0;
label_1:
        return rax;
        rdi = rbp + 0x82;
        esi = "2.6.36";
        eax = strverscmp ();
    }
    *(0x006175d4) = 1;
    goto label_0;
label_4:
    eax = 0xffffffff;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40b160 */
#include <stdint.h>
 
uint64_t fcn_0040b160 (void * arg1, uint32_t arg2) {
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
    esi = 0x41218c;
    *((rbx - 1)) = 0;
    edi = 1;
    eax = lxstat ();
    if (eax < 0) {
        goto label_14;
    }
    r15 = *((rsp + 0x60));
    rdx = rsp + 0x60;
    esi = 0x41236e;
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
    eax = openat (r15d, 0x41218b, 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40b630 */
#include <stdint.h>
 
uint64_t fcn_0040b630 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40b710 */
#include <stdint.h>
 
int64_t fcn_0040b710 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40bd30 */
#include <stdint.h>
 
uint64_t fcn_0040bd30 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x413460;
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
            fcn_0040b630 (r12, rbx);
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
        fcn_0040b630 (r12, rbx);
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
    eax = fcn_0040b710 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_0040b710 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40c300 */
#include <stdint.h>
 
int32_t fcn_0040c300 (int64_t arg_10h) {
    eax = *(0x006175e0);
    *(0x00617860) = eax;
    eax = *(0x006175dc);
    *(0x00617864) = eax;
    eax = *((rsp + 0x10));
    fcn_0040bd30 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x006175e0) = edx;
    rdx = imp.__libc_start_main;
    *(0x006178a8) = rdx;
    edx = imp.__libc_start_main;
    *(0x006175d8) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40c380 */
#include <stdint.h>
 
void fcn_0040c380 (void) {
    r9d = 0;
    fcn_0040c300 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40c400 */
#include <stdint.h>
 
uint64_t fcn_0040c400 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040dbe0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40c480 */
#include <stdint.h>
 
int64_t fcn_0040c480 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40c590 */
#include <stdint.h>
 
uint64_t fcn_0040c590 (char * arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = strlen (rdi);
    rcx = rbx;
    edx = 0;
    rax++;
    while (dil != 0x5c) {
label_0:
        *(rcx) = dil;
        rcx++;
        if (rax <= rsi) {
            goto label_2;
        }
label_1:
        rdx = rsi;
        edi = *((rbx + rdx));
        rsi = rdx + 1;
    }
    r8 = rdx + 4;
    if (r8 >= rax) {
        goto label_0;
    }
    r9d = *((rbx + rsi));
    r10d = r9 - 0x30;
    if (r10b > 3) {
        goto label_0;
    }
    r10d = *((rbx + rdx + 2));
    r11d = r10 - 0x30;
    if (r11b > 7) {
        goto label_0;
    }
    edx = *((rbx + rdx + 3));
    r11d = rdx - 0x30;
    if (r11b > 7) {
        goto label_0;
    }
    edx = r10 + r9*8;
    rcx++;
    rsi = r8;
    edx = r11 + rdx*8 - 0x80;
    *((rcx - 1)) = dl;
    goto label_1;
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40c620 */
#include <stdint.h>
 
void fcn_0040c620 (void ** ptr) {
    rdi = ptr;
    rbx = rdi;
    free (*(rdi));
    free (*((rbx + 8)));
    free (*((rbx + 0x10)));
    if ((*((rbx + 0x28)) & 4) == 0) {
        rdi = rbx;
invalid_funccall(); //        void (*0x401e10)() ();
    }
    free (*((rbx + 0x18)));
    rdi = rbx;
    return free ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40c670 */
#include <stdint.h>
 
uint64_t fcn_0040c670 (void) {
    int64_t var_fh;
    int64_t var_27h;
    uint32_t var_40h_2;
    uint32_t var_44h;
    int64_t var_40h;
    char * var_3ch;
    int64_t var_40h_3;
    int64_t var_44h_2;
    int64_t var_48h_2;
    int64_t var_4ch;
    int64_t var_60h;
    int64_t var_64h;
    int64_t var_48h;
    char * ptr;
    int64_t var_58h;
    rax = fopen ("/proc/self/mountinfo", 0x412205);
    if (rax == 0) {
        goto label_9;
    }
    *((rsp + 0x50)) = 0;
    r12 = rsp + 0x48;
    r14 = 0xfffff00000000000;
    *((rsp + 0x58)) = 0;
    do {
label_0:
        rcx = rbp;
        edx = 0xa;
        rsi = rsp + 0x58;
        rdi = rsp + 0x50;
        rax = getdelim ();
        if (rax == -1) {
            goto label_10;
        }
        rbx = rsp + 0x27;
        rax = rsp + 0x3c;
        rax = rsp + 0x40;
        eax = 0;
        r9 = rsp + 0x64;
        r8 = rsp + 0x60;
        rcx = rsp + 0x44;
        eax = sscanf (*((rsp + 0x70)), "%*u %*u %u:%u %n%*s%n %n%*s%n%c", rsp + 0x40);
        eax &= 0xfffffffb;
    } while (eax != 3);
    rdi = *((rsp + 0x2c));
    rdi += *((rsp + 0x50));
    rax = fcn_0040d2b0 (rdi, 0x413a2e);
    r15 = rax;
    if (rax == 0) {
        goto label_0;
    }
    eax = 0;
    r9 = rsp + 0x4c;
    r8 = rsp + 0x48;
    rcx = rsp + 0x44;
    eax = sscanf (rax, " - %n%*s%n %n%*s%n %c", rsp + 0x40);
    eax &= 0xfffffffb;
    if (eax != 1) {
        goto label_0;
    }
    rax = *((rsp + 0x44));
    rdx = *((rsp + 0x50));
    r13d = 1;
    *((rdx + rax)) = 0;
    rdx = *((rsp + 0x50));
    rax = *((rsp + 0x2c));
    *((rdx + rax)) = 0;
    rax = *((rsp + 0x34));
    *((r15 + rax)) = 0;
    rax = *((rsp + 0x3c));
    *((r15 + rax)) = 0;
    rdi = *((rsp + 0x38));
    rdi += r15;
    fcn_0040c590 (rdi);
    rdi = *((rsp + 0x28));
    rdi += *((rsp + 0x50));
    fcn_0040c590 (rdi);
    rdi = *((rsp + 0x40));
    rdi += *((rsp + 0x50));
    fcn_0040c590 (rdi);
    rax = fcn_0040a560 (0x38);
    rdi = *((rsp + 0x38));
    rbx = rax;
    rdi += r15;
    rax = fcn_0040a790 (rdi);
    rdi = *((rsp + 0x28));
    rdi += *((rsp + 0x50));
    *(rbx) = rax;
    rax = fcn_0040a790 (rdi);
    rdi = *((rsp + 0x40));
    rdi += *((rsp + 0x50));
    *((rbx + 8)) = rax;
    rax = fcn_0040a790 (rdi);
    rdi = *((rsp + 0x30));
    *((rbx + 0x10)) = rax;
    rdi += r15;
    rax = fcn_0040a790 (rdi);
    edx = *((rsp + 0x20));
    edi = "autofs";
    rsi = 0xffffff00000;
    r15 = rax;
    *((rbx + 0x18)) = rax;
    eax = *((rsp + 0x24));
    rcx = rdx;
    rdx <<= 0x20;
    *((rbx + 0x28)) |= 4;
    rcx <<= 8;
    rdx &= r14;
    ecx &= 0xfff00;
    rdx |= rcx;
    ecx = (int32_t) al;
    rax <<= 0xc;
    rdx |= rcx;
    rax &= rsi;
    ecx = 7;
    rsi = r15;
    rax |= rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    *((rbx + 0x20)) = rax;
    al = (rax > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "proc";
    ecx = 5;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    while (al == 0) {
label_1:
        eax = *((rbx + 0x28));
        eax &= 0xfffffffe;
        eax |= r13d;
        r13 = *(rbx);
        *((rbx + 0x28)) = al;
        rax = strchr (r13, 0x3a);
        edx = 1;
        if (rax == 0) {
            goto label_11;
        }
label_2:
        eax = *((rbx + 0x28));
        edx += edx;
        eax &= 0xfffffffd;
        eax |= edx;
        *((rbx + 0x28)) = al;
        *(r12) = rbx;
        r12 = rbx + 0x30;
        goto label_0;
label_10:
        free (*((rsp + 0x50)));
        if ((*(rbp) & 0x20) != 0) {
            goto label_12;
        }
        eax = fcn_0040e240 (rbp);
        if (eax == 0xffffffff) {
            goto label_13;
        }
label_3:
        *(r12) = 0;
        rax = *((rsp + 0x48));
label_8:
        return rax;
        edi = "subfs";
        ecx = 6;
        rsi = r15;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (eax > 0xffffffff) ? 1 : 0;
    }
    edi = "debugfs";
    ecx = 8;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "devpts";
    ecx = 7;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "fusectl";
    ecx = 8;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "mqueue";
    ecx = 7;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "rpc_pipefs";
    ecx = 0xb;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "sysfs";
    ecx = 6;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "devfs";
    ecx = 6;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    edi = "kernfs";
    ecx = 7;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_1;
    }
    eax = strcmp (r15, "ignore");
    if (eax == 0) {
        goto label_1;
    }
    eax = strcmp (r15, "none");
    r13b = (eax == 0) ? 1 : 0;
    goto label_1;
label_11:
    if (*(r13) == 0x2f) {
        goto label_14;
    }
label_5:
    esi = "-hosts";
    ecx = 7;
    rdi = r13;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(r13) > 0x2f) ? 1 : 0;
    dl = (al == 0) ? 1 : 0;
    goto label_2;
label_9:
    esi = 0x412205;
    edi = "/etc/mtab";
    rax = setmntent ();
    r13 = rax;
    if (rax == 0) {
        goto label_15;
    }
    rdi = r13;
    r12 = rsp + 0x48;
    r14 = 0xffffffffffffffff;
    rax = getmntent ();
    if (rax == 0) {
        goto label_16;
    }
    do {
        esi = "bind";
        rdi = rbp;
        rax = hasmntopt ();
        r15 = rax;
        rax = fcn_0040a560 (0x38);
        rbx = rax;
        rax = fcn_0040a790 (*(rbp));
        *(rbx) = rax;
        rax = fcn_0040a790 (*((rbp + 8)));
        *((rbx + 0x10)) = 0;
        *((rbx + 8)) = rax;
        rax = fcn_0040a790 (*((rbp + 0x10)));
        edi = "autofs";
        ecx = 7;
        *((rbx + 0x28)) |= 4;
        rsi = rax;
        *((rbx + 0x18)) = rax;
        edx = 1;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        al = (*((rbx + 0x28)) > 0) ? 1 : 0;
        if (al != 0) {
            edi = "proc";
            ecx = 5;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "subfs";
            ecx = 6;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "debugfs";
            ecx = 8;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "devpts";
            ecx = 7;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "fusectl";
            ecx = 8;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "mqueue";
            ecx = 7;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "rpc_pipefs";
            ecx = 0xb;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "sysfs";
            ecx = 6;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "devfs";
            ecx = 6;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            edi = "kernfs";
            ecx = 7;
            rsi = rbp;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            al = (al > 0) ? 1 : 0;
            if (al == 0) {
                goto label_17;
            }
            *((rsp + 0xf)) = dl;
            eax = strcmp (rbp, "ignore");
            edx = *((rsp + 0xf));
            if (eax == 0) {
                goto label_17;
            }
            eax = strcmp (rbp, "none");
            dl = (r15 == 0) ? 1 : 0;
            al = (eax == 0) ? 1 : 0;
            edx &= eax;
        }
label_17:
        eax = *((rbx + 0x28));
        r15 = *(rbx);
        eax &= 0xfffffffe;
        eax |= edx;
        *((rbx + 0x28)) = al;
        rax = strchr (r15, 0x3a);
        edx = 1;
        if (rax == 0) {
            goto label_18;
        }
label_4:
        eax = *((rbx + 0x28));
        edx += edx;
        *((rbx + 0x20)) = r14;
        rdi = r13;
        eax &= 0xfffffffd;
        eax |= edx;
        *((rbx + 0x28)) = al;
        *(r12) = rbx;
        r12 = rbx + 0x30;
        rax = getmntent ();
    } while (rax != 0);
label_16:
    rdi = r13;
    eax = endmntent ();
    if (eax != 0) {
        goto label_3;
    }
label_13:
    rax = errno_location ();
    r14d = *(rax);
    r13 = rax;
label_6:
    *(r12) = 0;
    rdi = *((rsp + 0x48));
    if (rdi == 0) {
        goto label_19;
    }
    do {
        rbx = *((rdi + 0x30));
        eax = fcn_0040c620 (rdi);
        *((rsp + 0x48)) = rbx;
        rdi = rbx;
    } while (rbx != 0);
label_19:
    *(r13) = r14d;
    eax = 0;
    return rax;
label_18:
    if (*(r15) == 0x2f) {
        goto label_20;
    }
label_7:
    esi = "-hosts";
    ecx = 7;
    rdi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*(r15) > 0x2f) ? 1 : 0;
    dl = (al == 0) ? 1 : 0;
    goto label_4;
label_14:
    if (*((r13 + 1)) != 0x2f) {
        goto label_5;
    }
    edi = "smbfs";
    ecx = 6;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*((r13 + 1)) > 0x2f) ? 1 : 0;
    if (al == 0) {
        goto label_2;
    }
    edi = "cifs";
    ecx = 5;
    rsi = r15;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_2;
    }
    goto label_5;
label_12:
    rax = errno_location ();
    r14d = *(rax);
    r13 = rax;
    fcn_0040e240 (rbp);
    *(r13) = r14d;
    goto label_6;
label_20:
    if (*((r15 + 1)) != 0x2f) {
        goto label_7;
    }
    edi = "smbfs";
    ecx = 6;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (*((r15 + 1)) > 0x2f) ? 1 : 0;
    if (al == 0) {
        goto label_4;
    }
    edi = "cifs";
    ecx = 5;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (al > 0) ? 1 : 0;
    if (al == 0) {
        goto label_4;
    }
    goto label_7;
label_15:
    eax = 0;
    goto label_8;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40ce30 */
#include <stdint.h>
 
int64_t fcn_0040ce30 (uint32_t arg1, uint32_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r11d = 1;
    r8d = 1;
    r9d = 0;
    rax = 0xffffffffffffffff;
label_0:
    rcx = r8 + r9;
    if (rcx >= rsi) {
        goto label_2;
    }
    do {
        r10 = rdi + rax;
        ebx = *((r10 + r8));
        if (*((rdi + rcx)) >= bl) {
            goto label_3;
        }
        r9 = rcx;
        r8d = 1;
        r11 = rcx;
        rcx = r8 + r9;
        r11 -= rax;
    } while (rcx < rsi);
label_2:
    *(rdx) = r11;
    ebx = 1;
    r8d = 1;
    r9d = 0;
    r10 = 0xffffffffffffffff;
label_1:
    rcx = r8 + r9;
    if (rsi <= rcx) {
        goto label_4;
    }
    do {
        r11 = rdi + r10;
        r11d = *((r11 + r8));
        if (*((rdi + rcx)) <= r11b) {
            goto label_5;
        }
        r9 = rcx;
        r8d = 1;
        rbx = rcx;
        rcx = r8 + r9;
        rbx -= r10;
    } while (rsi > rcx);
label_4:
    r10++;
    rax++;
    if (r10 >= rax) {
        *(rdx) = rbx;
        rax = r10;
    }
    return rax;
    if (r10 != rax) {
label_3:
        rax = r9;
        r11d = 1;
        r9++;
        r8d = 1;
        goto label_0;
        if (r9 == 0) {
label_5:
            goto label_6;
        }
        r10 = r9;
        ebx = 1;
        r9++;
        r8d = 1;
        goto label_1;
    }
    if (r8 != r11) {
        r8++;
        goto label_0;
label_6:
        if (r8 == rbx) {
            goto label_7;
        }
        r8++;
        goto label_1;
    }
    r9 = rcx;
    r8d = 1;
    goto label_0;
label_7:
    r9 = rcx;
    r8d = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40cf60 */
#include <stdint.h>
 
uint64_t fcn_0040cf60 (int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_850h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rdi;
    r12 = rdx;
    rbx = rcx;
    if (rcx <= 2) {
        goto label_8;
    }
    rax = fcn_0040ce30 (r12, rcx, rsp + 0x48);
    r13 = rax;
    rax = *((rsp + 0x48));
    *((rsp + 0x20)) = rax;
label_6:
    rax = rsp + 0x50;
    rdx = rsp + 0x850;
    do {
        *(rax) = rbx;
        rax += 8;
    } while (rdx != rax);
    rax = *((rsp + 0x20));
    rsi = r12 + rax;
    if (rbx == 0) {
        goto label_9;
    }
    r10 = rbx - 1;
    r9 = rbx + r12;
    rax = r12;
    rdi = r12 + r10;
    do {
        edx = *(rax);
        rcx = rdi;
        rcx -= rax;
        rax++;
        *((rsp + rdx*8 + 0x50)) = rcx;
    } while (r9 != rax);
    *((rsp + 8)) = r10;
    eax = memcmp (r12, rsi, r13);
    if (eax == 0) {
        goto label_10;
    }
label_1:
    rax = rbx;
    r14 = rbx - 1;
    rax -= r13;
    if (rax < r13) {
        rax = r13;
    }
    r9d = 0;
    rax++;
    *((rsp + 0x20)) = rax;
    *((rsp + 0x48)) = rax;
    eax = 1;
    rax -= r13;
    *((rsp + 0x18)) = rax;
    while (rax != 0) {
label_0:
        r9 += rax;
label_2:
        rcx = r9 + rbx;
        *((rsp + 0x10)) = r9;
        rdx = rcx;
        *((rsp + 8)) = rcx;
        rdx -= rbp;
        rax = fcn_0040c480 (r15 + rbp, 0, rdx);
        rcx = *((rsp + 8));
        if (rcx == 0) {
            goto label_3;
        }
        r9 = *((rsp + 0x10));
        if (rax != 0) {
            goto label_3;
        }
        eax = *((r15 + rcx - 1));
        rax = *((rsp + rax*8 + 0x50));
    }
    rdx = r15 + r9;
    if (r13 >= r14) {
        goto label_11;
    }
    rax = r13;
    edi = *((r12 + r13));
    if (*((rdx + r13)) == dil) {
        goto label_12;
    }
    goto label_13;
    do {
        edi = *((rdx + rax));
        if (*((r12 + rax)) != dil) {
            goto label_13;
        }
label_12:
        rax++;
    } while (rax < r14);
label_11:
    rax = r13 - 1;
    if (rax == -1) {
        goto label_14;
    }
    esi = *((r12 + r13 - 1));
    if (*((rdx + rax)) == sil) {
        goto label_15;
    }
    goto label_16;
    do {
        esi = *((rdx + rax));
        if (*((r12 + rax)) != sil) {
            goto label_16;
        }
label_15:
        rax--;
    } while (rax != -1);
label_14:
    rax = rdx;
    goto label_7;
label_13:
    r9 += *((rsp + 0x18));
    goto label_0;
label_9:
    eax = memcmp (r12, rsi, r13);
    if (eax != 0) {
        goto label_1;
    }
    do {
label_3:
        eax = 0;
label_7:
        return rax;
label_16:
        r9 += *((rsp + 0x20));
        goto label_2;
label_10:
        rax = r13 - 1;
        r10 = *((rsp + 8));
        r11d = 0;
        r14d = 0;
        *((rsp + 0x38)) = rax;
        rax = rbx;
        rax -= *((rsp + 0x20));
        *((rsp + 0x28)) = rax;
        eax = 1;
        rax -= r13;
        *((rsp + 0x30)) = rax;
        goto label_17;
label_4:
        if (rax < *((rsp + 0x20))) {
            if (r11 == 0) {
                rax = *((rsp + 0x28));
                goto label_18;
            }
        }
label_18:
        r14 += rax;
        r11d = 0;
label_5:
label_17:
        r9 = r14 + rbx;
        *((rsp + 0x18)) = r10;
        rdx = r9;
        *((rsp + 0x10)) = r11;
        rdx -= rbp;
        *((rsp + 8)) = r9;
        rax = fcn_0040c480 (r15 + rbp, 0, rdx);
    } while (rax != 0);
    r9 = *((rsp + 8));
    r11 = *((rsp + 0x10));
    r10 = *((rsp + 0x18));
    if (r9 == 0) {
        goto label_3;
    }
    eax = *((r15 + r9 - 1));
    rax = *((rsp + rax*8 + 0x50));
    if (rax != 0) {
        goto label_4;
    }
    rax = r13;
    if (r11 >= r13) {
        rax = r11;
    }
    if (rax >= r10) {
        goto label_19;
    }
    rdx = r15 + r14;
    while (*((r12 + rax)) == sil) {
        rax++;
        if (rax == r10) {
            goto label_19;
        }
        esi = *((rdx + rax));
    }
    rdi = *((rsp + 0x30));
    r11d = 0;
    rcx = rdi + r14;
    r14 = rax + rcx;
    goto label_5;
label_19:
    rdi = *((rsp + 0x38));
    rax = *((rsp + 0x38));
    if (r11 >= r13) {
        goto label_20;
    }
    rdx = r15 + r14;
    esi = *((r12 + rdi));
    if (*((rdx + rdi)) == sil) {
        goto label_21;
    }
    goto label_20;
    do {
        ecx = *((rax + rdx - 1));
        if (*((r12 + rax - 1)) != cl) {
            goto label_22;
        }
        rax = rsi;
label_21:
        rsi = rax - 1;
    } while (r11 != rax);
    do {
label_22:
        r11++;
        if (r11 > rax) {
            goto label_23;
        }
        r14 += *((rsp + 0x20));
        r11 = *((rsp + 0x28));
        goto label_5;
label_8:
        *((rsp + 0x48)) = 1;
        r13 = rcx - 1;
        *((rsp + 0x20)) = 1;
        goto label_6;
label_20:
        rax = r13;
    } while (1);
label_23:
    rax = r15 + r14;
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40d2b0 */
#include <stdint.h>
 
uint64_t fcn_0040d2b0 (int64_t arg2, char * s) {
    int64_t var_8h;
    int64_t var_10h;
    void * s2;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_38h;
    rsi = arg2;
    rdi = s;
    eax = *(rdi);
    r9d = *(rsi);
    if (al == 0) {
        goto label_6;
    }
    if (r9b == 0) {
        goto label_7;
    }
    rbx = rsi;
    rdx = rdi;
    ecx = r9d;
    r8d = 1;
    while (al != 0) {
        if (cl == 0) {
            goto label_8;
        }
        rdx++;
        rbx++;
        al = (cl == al) ? 1 : 0;
        ecx = *(rbx);
        r8d &= eax;
        eax = *(rdx);
    }
    r12d = 0;
    if (cl == 0) {
label_8:
        r12 = rdi;
        if (r8b != 0) {
            goto label_1;
        }
        r13 = rdi;
        rbp -= rsi;
        esi = (int32_t) r9b;
        rax = strchr (rdi + 1, rsi);
        r12 = rax;
        if (rax == 0) {
            goto label_1;
        }
        if (rbp == 1) {
            goto label_1;
        }
        rax = r13 + rbp;
        rbx -= rbp;
        r8 = rax;
        r8 -= r12;
        eax = 1;
        if (rax < r12) {
            r8 = rax;
        }
        if (rbp <= 0x1f) {
            goto label_9;
        }
        rax = fcn_0040cf60 (r12, r8, rbx, rbp);
        r12 = rax;
    }
label_1:
    rax = r12;
    return rax;
label_9:
    if (rbp <= 2) {
        goto label_10;
    }
    *((rsp + 8)) = r8;
    rax = fcn_0040ce30 (rbx, rbp, rsp + 0x38);
    r8 = *((rsp + 8));
    r15 = rax;
    rax = *((rsp + 0x38));
    *((rsp + 0x18)) = rax;
label_4:
    rax = *((rsp + 0x18));
    *((rsp + 8)) = r8;
    eax = memcmp (rbx, rbx + rax, r15);
    r8 = *((rsp + 8));
    if (eax != 0) {
        goto label_11;
    }
    rax = r15 - 1;
    r13d = 0;
    r14d = 0;
    *((rsp + 0x20)) = rax;
    rax = rbp;
    rax -= *((rsp + 0x18));
    *((rsp + 0x28)) = rax;
    eax = 1;
    rax -= r15;
    *((rsp + 0x10)) = rax;
label_0:
    r11 = rbp + r14;
    rdx = r11;
    *((rsp + 8)) = r11;
    rdx -= r8;
    rax = fcn_0040c480 (r12 + r8, 0, rdx);
    r11 = *((rsp + 8));
    if (r11 == 0) {
        goto label_2;
    }
    if (rax != 0) {
        goto label_2;
    }
    rax = r13;
    if (r15 >= r13) {
        rax = r15;
    }
    if (rbp <= rax) {
        goto label_12;
    }
    rdx = r12 + rax;
    ecx = *((rbx + rax));
    if (*((rdx + r14)) != cl) {
        goto label_13;
    }
    rdx = r12 + r14;
    while (rbp != rax) {
        esi = *((rdx + rax));
        if (*((rbx + rax)) != sil) {
            goto label_13;
        }
        rax++;
    }
label_12:
    rax = *((rsp + 0x20));
    if (r15 <= r13) {
        goto label_14;
    }
    rcx = *((rsp + 0x20));
    rsi = r12 + r14;
    edi = *((rsi + rcx));
    if (*((rbx + rcx)) == dil) {
        goto label_15;
    }
    goto label_14;
    do {
        edi = *((rax + rsi - 1));
        if (*((rbx + rax - 1)) != dil) {
            goto label_5;
        }
        rax = rdx;
label_15:
        rdx = rax - 1;
    } while (r13 != rax);
label_5:
    r10 = r13 + 1;
    if (r10 > rax) {
        goto label_16;
    }
    r13 = *((rsp + 0x28));
    r14 += *((rsp + 0x18));
    do {
        r8 = r11;
        goto label_0;
label_13:
        rdi = *((rsp + 0x10));
        r13d = 0;
        r9 = rdi + r14;
        r14 = rax + r9;
    } while (1);
    do {
label_2:
        r12d = 0;
        goto label_1;
label_11:
        rax = rbp;
        rax -= r15;
        if (rax < r15) {
            rax = r15;
        }
        r14d = 0;
        rax++;
        *((rsp + 0x18)) = rax;
        *((rsp + 0x38)) = rax;
        rax = r12 + r15;
        *((rsp + 8)) = rax;
        eax = 1;
        rax -= r15;
        *((rsp + 0x10)) = rax;
label_3:
        r13 = rbp + r14;
        rdx -= r8;
        rax = fcn_0040c480 (r12 + r8, 0, r13);
    } while (r13 == 0);
    if (rax != 0) {
        goto label_2;
    }
    rdx = r12 + r14;
    if (rbp <= r15) {
        goto label_17;
    }
    rsi = *((rsp + 8));
    rax = r15;
    rdx = r12 + r14;
    ecx = *((rbx + r15));
    if (*((rsi + r14)) == cl) {
        goto label_18;
    }
    goto label_19;
    do {
        edi = *((rdx + rax));
        if (*((rbx + rax)) != dil) {
            goto label_19;
        }
label_18:
        rax++;
    } while (rbp > rax);
label_17:
    rax = r15 - 1;
    if (rax == -1) {
        goto label_20;
    }
    edi = *((rbx + r15 - 1));
    if (*((rdx + rax)) == dil) {
        goto label_21;
    }
    goto label_22;
    do {
        esi = *((rdx + rax));
        if (*((rbx + rax)) != sil) {
            goto label_22;
        }
label_21:
        rax--;
    } while (rax != -1);
label_20:
    r12 = rdx;
    goto label_1;
label_19:
    rsi = *((rsp + 0x10));
    r9 = rsi + r14;
    r14 = rax + r9;
    do {
        r8 = r13;
        goto label_3;
label_22:
        r14 += *((rsp + 0x18));
    } while (1);
label_6:
    r12d = 0;
    if (r9b == 0) {
        r12 = rdi;
    }
    goto label_1;
label_7:
    r12 = rdi;
    goto label_1;
label_10:
    *((rsp + 0x38)) = 1;
    r15 = rbp - 1;
    *((rsp + 0x18)) = 1;
    goto label_4;
label_14:
    rax = r15;
    goto label_5;
label_16:
    r12 += r14;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40d650 */
#include <stdint.h>
 
uint64_t fcn_0040d650 (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdi;
    rax = fcn_0040e360 (0, rsp + 8, rsi, rdx);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40d6b0 */
#include <stdint.h>
 
uint64_t fcn_0040d6b0 (int64_t arg1, uint32_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40d7b0 */
#include <stdint.h>
 
uint64_t fcn_0040d7b0 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40d8d0 */
#include <stdint.h>
 
uint64_t fcn_0040d8d0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_00409dc0 (1, rbp);
        rax = fcn_00409ab0 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x402290)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40d950 */
#include <stdint.h>
 
uint64_t fcn_0040d950 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00409de0 (r12);
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
    rax = fcn_00409de0 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40db30 */
#include <stdint.h>
 
uint64_t fcn_0040db30 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040e240 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40db90 */
#include <stdint.h>
 
uint64_t fcn_0040db90 (int64_t arg_60h, int64_t arg3, int32_t oflag, const char * path) {
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
        fcn_0040e1f0 (eax);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40dbe0 */
#include <stdint.h>
 
uint64_t fcn_0040dbe0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x413b42;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40dc40 */
#include <stdint.h>
 
 
int64_t fcn_0040dc40 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40dc80 */
#include <stdint.h>
 
uint64_t fcn_0040dc80 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x413a14;
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
        r15d = 0x413a14;
label_2:
        *(0x00617898) = r15;
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
        r15d = 0x413a14;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x412205;
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
    fcn_0040e240 (rbx);
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
        r15d = 0x413a14;
        rbx = rax;
        free (r15);
        fcn_0040e240 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40e1f0 */
#include <stdint.h>
 
uint64_t fcn_0040e1f0 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_0040fe80 (rdi, rsi, rdx);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40e240 */
#include <stdint.h>
 
uint64_t fcn_0040e240 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_0040e2c0 (rbx);
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
invalid_funccall(); //    void (*0x401f10)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40e2c0 */
#include <stdint.h>
 
uint32_t fcn_0040e2c0 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x402190)() ();
label_1:
    fcn_0040e300 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40e300 */
#include <stdint.h>
 
int64_t fcn_0040e300 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x4022c0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40e360 */
#include <stdint.h>
 
uint64_t fcn_0040e360 (uint32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
    eax = fcn_004101f0 (r15, rbp - 0x580, rbp - 0x670);
    if (eax < 0) {
        goto label_58;
    }
    eax = fcn_0040ffd0 (rbx, rbp - 0x670);
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
    /* switch table (18 cases) at 0x413bd8 */
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
    /* switch table (5 cases) at 0x413c68 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40fe80 */
#include <stdint.h>
 
uint64_t fcn_0040fe80 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
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
            *(0x006178a0) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
invalid_funccall(); //        eax = void (*0x40fe90)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x006178a0) != 0xffffffff) {
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
invalid_funccall(); //    eax = void (*0x40fe90)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x006178a0) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x40ffd0 */
#include <stdint.h>
 
int64_t fcn_0040ffd0 (int64_t arg1, uint32_t arg2) {
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
        /* switch table (23 cases) at 0x413ca0 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x4101f0 */
#include <stdint.h>
 
uint64_t fcn_004101f0 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    /* switch table (84 cases) at 0x413d80 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x410f70 */
#include <stdint.h>
 
int64_t fcn_00410f70 (void) {
    rax = 0x617308;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_df.elf @ 0x410f88 */
#include <stdint.h>
 
void fcn_00410f88 (int64_t arg3) {
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
