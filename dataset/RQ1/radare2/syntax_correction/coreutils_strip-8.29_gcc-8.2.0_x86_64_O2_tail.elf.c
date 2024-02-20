#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x401e60 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int32_t fildes;
    void * s1;
    uint32_t var_18h;
    int32_t var_20h;
    int32_t var_28h;
    uint32_t var_34h;
    int64_t var_38h;
    int32_t var_40h;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint32_t var_68h;
    int64_t var_70h;
    uint32_t var_8bh;
    char ** var_90h;
    int64_t var_98h;
    struct timeval * timeout;
    int64_t var_a8h;
    int64_t var_b0h;
    int64_t var_c8h;
    fd_set * readfds;
    int64_t var_148h;
    int64_t var_158h;
    int64_t var_170h;
    int64_t var_178h;
    int64_t var_198h;
    int64_t var_1a0h;
    rdi = argc;
    rsi = argv;
    rbx = rsi;
    *((rsp + 0x90)) = 0xa;
    fcn_00407b40 (*(rsi));
    setlocale (6, 0x40ee9c);
    bindtextdomain (0x40c379, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x40c379, rsi);
    edi = 0x406590;
    fcn_0040c180 ();
    *(0x0061237a) = 0;
    *(0x00612385) = 1;
    *(0x00612381) = 0;
    *(0x00612382) = 0;
    *(0x00612384) = 0;
    *(0x00612380) = 0xa;
    if (ebp != 2) {
        if (ebp == 3) {
            goto label_80;
        }
        if (ebp != 4) {
            goto label_3;
        }
label_7:
        eax = strcmp (*((rbx + 0x10)), 0x40c389);
        if (eax != 0) {
            goto label_3;
        }
    }
label_6:
    eax = fcn_00407ac0 ();
    rdx = *((rbx + 8));
    ecx = *(rdx);
    rdi = rdx + 1;
    if (cl == 0x2b) {
        goto label_81;
    }
    if (cl == 0x2d) {
        goto label_82;
    }
label_3:
    eax = 0;
label_4:
    xmm2 = *(0x0040d788);
    edx = (int32_t) al;
    r12 = rbx + rax*8;
    ebx = 0;
    ebp -= edx;
    *((rsp + 0x38)) = xmm2;
    do {
label_0:
        r8d = 0;
        ecx = 0x40d560;
        edx = "c:n:fFqs:vz0123456789";
        rsi = r12;
        edi = ebp;
        eax = fcn_0040b530 ();
        if (eax == 0xffffffff) {
            goto label_83;
        }
        if (eax == 0x71) {
            goto label_84;
        }
        if (eax <= 0x71) {
            goto label_85;
        }
        if (eax == 0x81) {
            goto label_86;
        }
        if (eax > 0x81) {
            goto label_87;
        }
        if (eax == 0x76) {
            goto label_88;
        }
        if (eax <= 0x76) {
            goto label_89;
        }
        if (eax != 0x7a) {
            goto label_90;
        }
        *(0x00612380) = 0;
    } while (1);
label_85:
    if (eax > 0x39) {
        if (eax == 0x63) {
            goto label_91;
        }
        if (eax <= 0x63) {
            if (eax != 0x46) {
                goto label_92;
            }
            *(0x00612384) = 1;
            *(0x006122a8) = 1;
            *(0x00612386) = 1;
            goto label_0;
label_90:
            if (eax != 0x80) {
                goto label_92;
            }
            *(0x00612386) = 1;
            goto label_0;
        }
        if (eax != 0x66) {
            goto label_93;
        }
label_1:
        rsi = imp.__libc_start_main;
        *(0x00612384) = 1;
        if (rsi == 0) {
            goto label_94;
        }
        fcn_00406440 ("--follow", rsi, 0x40d770, 0x40d760, 4, *(0x006122b8));
        eax = *((rax*4 + 0x40d760));
        *(0x006122a8) = eax;
        goto label_0;
    }
    r14d = eax;
    if (eax >= 0x30) {
        goto label_95;
    }
    if (eax != 0xffffff7d) {
        goto label_96;
    }
    eax = 0;
    rcx = *(0x006122b0);
    r9d = "David MacKenzie";
    r8d = "Paul Rubin";
    fcn_00409c90 (*(obj.stdout), "tail", "GNU coreutils");
    eax = exit (0);
label_89:
    if (eax != 0x73) {
        goto label_92;
    }
    al = fcn_0040a1c0 (*(0x00612540), 0, rsp + 0x140, 0x406500);
    if (al == 0) {
        goto label_97;
    }
    xmm1 = *((rsp + 0x140));
    __asm ("comisd xmm1, xmmword [0x0040d790]");
    *((rsp + 0x38)) = xmm1;
    if (al >= 0) {
        goto label_0;
    }
label_97:
    rax = fcn_00409760 (*(0x00612540));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid number of seconds: %s");
    rcx = rbx;
    eax = 0;
    rax = error (1, 0, rax);
label_93:
    if (eax != 0x6e) {
        goto label_92;
    }
label_91:
    rdx = imp.__libc_start_main;
    0x00612385 = (eax == 0x6e) ? 1 : 0;
    ecx = *(rdx);
    if (cl == 0x2b) {
        goto label_98;
    }
    if (cl == 0x2d) {
        goto label_99;
    }
label_8:
    edx = 5;
    if (eax == 0x6e) {
        goto label_100;
    }
    rax = dcgettext (0, "invalid number of bytes");
label_2:
    r9d = 0;
    rax = fcn_0040a130 (*(0x00612540), 0, 0xffffffffffffffff, "bkKmMGTPEZY0", rax);
    *((rsp + 0x90)) = rax;
    goto label_0;
label_87:
    if (eax == 0x83) {
        goto label_101;
    }
    if (eax < 0x83) {
        goto label_102;
    }
    if (eax == 0x84) {
        goto label_1;
    }
    if (eax != 0x85) {
        goto label_92;
    }
    *(0x00612378) = 1;
    goto label_0;
label_96:
    if (eax != 0xffffff7e) {
        goto label_92;
    }
    fcn_00405d10 (0);
label_88:
    ebx = 1;
    goto label_0;
label_86:
    edx = 5;
    rax = dcgettext (0, "invalid maximum number of unchanged stats between opens");
    r9d = 0;
    rax = fcn_0040a130 (*(0x00612540), 0, 0xffffffffffffffff, 0x40ee9c, rax);
    *(0x006122a0) = rax;
    goto label_0;
label_84:
    ebx = 2;
    goto label_0;
label_102:
    edx = 5;
    rax = dcgettext (0, "invalid PID");
    r9d = 0;
    eax = fcn_0040a130 (*(0x00612540), 0, 0x7fffffff, 0x40ee9c, rax);
    *(0x0061237c) = eax;
    goto label_0;
label_101:
    *(0x00612379) = 1;
    goto label_0;
label_100:
    rax = dcgettext (0, "invalid number of lines");
    r8 = rax;
    goto label_2;
label_94:
    *(0x006122a8) = 2;
    goto label_0;
label_82:
    if (eax <= 0x30daf) {
        goto label_103;
    }
    eax = 0;
    al = (*((rdx + 1)) == 0x63) ? 1 : 0;
    if (*((rdx + rax + 1)) == 0) {
        goto label_3;
    }
label_103:
    r12d = 0;
label_5:
    eax = *((rdx + 1));
    rdx = rdi;
    ecx = eax;
    eax -= 0x30;
    if (eax > 9) {
        goto label_104;
    }
    do {
        rdx++;
        eax = *(rdx);
        ecx = eax;
        eax -= 0x30;
    } while (eax <= 9);
label_104:
    if (cl == 0x63) {
        goto label_105;
    }
    if (cl == 0x6c) {
        goto label_106;
    }
    if (cl == 0x62) {
        goto label_107;
    }
    rax = rdx;
    r13d = 1;
    ecx = 0xa;
label_24:
    r14d = 0;
    if (*(rax) == 0x66) {
        rax++;
        r14d = 1;
    }
    if (*(rax) != 0) {
        goto label_3;
    }
    if (rdi == rdx) {
        goto label_108;
    }
    eax = fcn_0040a260 (rdi, 0, 0xa, rsp + 0x90, 0x40c38c);
    eax &= 0xfffffffd;
    if (eax != 0) {
        goto label_109;
    }
label_12:
    *(0x00612382) = r12b;
    eax = 1;
    *(0x00612385) = r13b;
    *(0x00612384) = r14b;
    goto label_4;
label_81:
    eax -= 0x30db0;
    r12d = 1;
    if (eax > 0x2b8) {
        goto label_5;
    }
    goto label_3;
label_80:
    rdi = *((rbx + 0x10));
    if (*(rdi) != 0x2d) {
        goto label_6;
    }
    if (*((rdi + 1)) != 0) {
        goto label_7;
    }
    goto label_6;
label_98:
    *(0x00612382) = 1;
    goto label_8;
label_83:
    r14d = eax;
    if (*(0x00612386) == 0) {
        goto label_110;
    }
    if (*(0x00612384) == 0) {
        goto label_111;
    }
    if (*(0x006122a8) == 2) {
        goto label_112;
    }
    edi = imp.__libc_start_main;
    if (edi != 0) {
label_11:
        eax = kill (rdi, 0);
        if (eax != 0) {
            goto label_113;
        }
    }
label_10:
    if (*(0x00612382) != 0) {
        rax = *((rsp + 0x90));
        if (rax == 0) {
            goto label_114;
        }
        rax--;
        *((rsp + 0x90)) = rax;
    }
label_114:
    rax = *(0x0061233c);
    if (eax >= ebp) {
        goto label_115;
    }
    ebp -= eax;
    rcx = (int64_t) ebp;
    rbp = r12 + rax*8;
    *(rsp) = rcx;
label_25:
    rax = *(rsp);
    r8d = 0;
    r9d = 1;
    r12 = rbp + rax*8;
    rax = rbp;
    do {
        rsi = *(rax);
        ecx = 2;
        edi = 0x40c38a;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        dl = (ebp > 0) ? 1 : 0;
        if (dl == 0) {
            r8d = r9d;
        }
        rax += 8;
    } while (rax != r12);
    if (r8b != 0) {
        eax = *(0x006122a8);
        if (eax == 1) {
            goto label_116;
        }
        if (*(0x00612384) == 0) {
            goto label_117;
        }
        if (*(0x0061237c) != 0) {
            goto label_118;
        }
        if (*(rsp) != 1) {
            goto label_118;
        }
        if (eax != 2) {
            goto label_118;
        }
        r15 = rsp + 0x140;
        esi = 0;
        edi = 1;
        rdx = r15;
        eax = fxstat ();
        if (eax != 0) {
            goto label_118;
        }
        eax = *((rsp + 0x158));
        eax &= 0xf000;
        if (eax == 0x8000) {
            goto label_118;
        }
    }
label_13:
    if (*((rsp + 0x90)) == 0) {
        if (*(0x00612384) == 0) {
            goto label_119;
        }
    }
label_30:
    rax = *(rsp) * 0x60;
    rdi = rax;
    *((rsp + 0x68)) = rax;
    rax = fcn_00409dd0 (rdi);
    *((rsp + 0x50)) = rax;
    do {
        rdx = *(rbp);
        rbp += 8;
        rax += 0x60;
        *((rax - 0x60)) = rdx;
    } while (rbp != r12);
    if (ebx == 1) {
        goto label_120;
    }
    if (ebx == 0) {
        if (*(rsp) != 1) {
            goto label_120;
        }
    }
label_14:
    r15 = *((rsp + 0x50));
    rax = *((rsp + 0x68));
    *((rsp + 0x70)) = r14d;
    *((rsp + 0x8b)) = 1;
    rax += r15;
    r14 = r15;
    *((rsp + 0x48)) = rax;
label_15:
    rax = *((rsp + 0x90));
    ecx = 2;
    edi = 0x40c38a;
    *((rsp + 0x28)) = rax;
    rax = *(r14);
    rsi = *(r14);
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    dl = (rax > 0) ? 1 : 0;
    esi = (int32_t) dl;
    *((rsp + 0x34)) = esi;
    if (esi != 0) {
        goto label_121;
    }
    *(0x0061237a) = 1;
    *((rsp + 8)) = 0;
label_29:
    *((r14 + 0x36)) = 1;
label_21:
    if (*(0x00612381) != 0) {
        goto label_122;
    }
label_19:
    rax = fcn_004047e0 (*(r14));
    esi = *((rsp + 8));
    edi = 1;
    *((rsp + 0xb0)) = 0;
    *((rsp + 0x40)) = rax;
    eax = *(0x00612385);
    rdx = rsp + 0x140;
    *((rsp + 0x18)) = al;
    if (al == 0) {
        goto label_123;
    }
    eax = fxstat ();
    if (eax != 0) {
        goto label_124;
    }
    eax = *(0x00612382);
    *((rsp + 0x58)) = al;
    if (al != 0) {
        goto label_125;
    }
    if (*(0x00612379) == 0) {
        eax = *((rsp + 0x158));
        eax &= 0xf000;
        if (eax == 0x8000) {
            goto label_126;
        }
    }
label_32:
    rax = fcn_00409dd0 (0x2018);
    *((rax + 0x2008)) = 0;
    *((rax + 0x2000)) = 0;
    *((rax + 0x2010)) = 0;
    *((rsp + 0x10)) = rax;
    rax = fcn_00409dd0 (0x2018);
    *((rsp + 0x60)) = r14;
    r14 = rbp;
    *((rsp + 0x20)) = 0;
    r15 = rax;
label_9:
    rax = fcn_00409780 (*((rsp + 8)), r15, 0x2000);
    rbx = rax;
    rax = rax - 1;
    if (rax > 0xfffffffffffffffd) {
        goto label_127;
    }
    *((r15 + 0x2000)) = rbx;
    r13 = r15 + rbx;
    rdi = r15;
    ebp = 0;
    r12d = *(0x00612380);
    *((r15 + 0x2008)) = 0;
    *((r15 + 0x2010)) = 0;
    while (rax != 0) {
        *((r15 + 0x2008)) = rdx;
        rdx -= rdi;
        rax = fcn_0040b730 (rax + 1, r12d, r13);
        rdx = rbp + 1;
    }
    rax = *((rsp + 0x10));
    r12 = *((rsp + 0x20));
    rdi = *((rax + 0x2000));
    r12 += rbp;
    rax = rbx + rdi;
    if (rax <= 0x1fff) {
        goto label_128;
    }
    rax = *((rsp + 0x10));
    *((rax + 0x2010)) = r15;
    rax = r12;
    rax -= *((r14 + 0x2008));
    *((rsp + 0x20)) = rax;
    if (*((rsp + 0x28)) >= rax) {
        goto label_129;
    }
    *((rsp + 0x10)) = r15;
    r15 = r14;
    r14 = *((r14 + 0x2010));
    goto label_9;
label_99:
    rdx++;
    *(0x00612540) = rdx;
    goto label_8;
label_111:
    *(0x00612386) = 0;
    edx = 5;
label_60:
    rax = dcgettext (0, "warning: --retry ignored; --retry is useful only when following");
    eax = 0;
    error (0, 0, rax);
label_110:
    edi = imp.__libc_start_main;
    if (edi == 0) {
        goto label_10;
    }
    if (*(0x00612384) != 0) {
        goto label_11;
    }
    edx = 5;
    rax = dcgettext (0, "warning: PID ignored; --pid=PID is useful only when following");
    eax = 0;
    error (0, 0, rax);
    goto label_10;
label_108:
    eax = ecx;
    *((rsp + 0x90)) = rax;
    goto label_12;
label_118:
    eax = isatty (0);
    if (eax == 0) {
        goto label_13;
    }
    edx = 5;
    rax = dcgettext (0, "warning: following standard input indefinitely is ineffective");
    eax = 0;
    error (0, 0, rax);
    goto label_13;
label_120:
    *(0x00612381) = 1;
    goto label_14;
label_128:
    rbp = *((rsp + 0x10));
    rdi += rbp;
    memcpy (rdi, r15, rbx);
    rax = *((r15 + 0x2000));
    *((rsp + 0x20)) = r12;
    *((rbp + 0x2000)) += rax;
    rax = *((r15 + 0x2008));
    *((rbp + 0x2008)) += rax;
    goto label_9;
label_121:
    eax = 0;
    eax = fcn_00406780 (rax, 0, rdx, rcx);
    ebx = *(0x00612386);
    *((rsp + 8)) = eax;
    if (bl == 0) {
        goto label_130;
    }
    eax++;
    if (eax != 0) {
        goto label_131;
    }
    *((r14 + 0x36)) = 0;
label_20:
    rax = errno_location ();
    if (*(0x00612384) != 0) {
        eax = *(rax);
        ebx ^= 1;
        *((r14 + 0x38)) = 0xffffffff;
        *((r14 + 0x34)) = bl;
        *((r14 + 0x3c)) = eax;
        *((r14 + 0x28)) = 0;
        *((r14 + 0x20)) = 0;
    }
    rax = fcn_004047e0 (*(r14));
    rax = fcn_00409510 (4, rax);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot open %s for reading");
    rcx = rbx;
    eax = 0;
    error (0, *(rbp), rax);
    *((rsp + 0x18)) = 0;
label_16:
    ecx = *((rsp + 0x18));
    r14 += 0x60;
    if (*((rsp + 0x48)) != r14) {
        goto label_15;
    }
    eax = *(0x00612384);
    *((rsp + 0x40)) = al;
    if (al != 0) {
        goto label_132;
    }
label_33:
    if (*(0x0061237a) != 0) {
        goto label_133;
    }
label_38:
    eax = *((rsp + 0x8b));
    eax ^= 1;
    eax = (int32_t) al;
label_31:
    return rax;
label_123:
    eax = fxstat ();
    if (eax != 0) {
        goto label_134;
    }
    eax = *(0x00612382);
    ecx = eax;
    *((rsp + 0x18)) = al;
    eax = *(0x00612379);
    if (cl == 0) {
        goto label_135;
    }
    if (al != 0) {
        goto label_136;
    }
    if (*((rsp + 0x28)) < 0) {
        goto label_136;
    }
    eax = *((rsp + 0x158));
    eax &= 0xf000;
    if (eax == 0x8000) {
        goto label_137;
    }
label_58:
    rsi = *((rsp + 0x28));
    edi = *((rsp + 8));
    edx = 1;
    rax = lseek ();
    rax++;
    if (rax == 0) {
        goto label_136;
    }
label_57:
    rax = *((rsp + 0x28));
    *((rsp + 0x28)) = 0xffffffffffffffff;
label_17:
    rax = fcn_00404a20 (0, *((rsp + 0x40)), *((rsp + 8)), *((rsp + 0x28)));
    *((rsp + 0x18)) = 1;
label_18:
    if (*(0x00612384) != 0) {
        goto label_138;
    }
    if (*((rsp + 0x34)) == 0) {
        goto label_16;
    }
    eax = close (*((rsp + 8)));
    if (eax == 0) {
        goto label_16;
    }
    rax = fcn_004047e0 (*(r14));
    rax = fcn_00409510 (4, rax);
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), rbx);
    *((rsp + 0x18)) = 0;
    goto label_16;
label_136:
    eax = fcn_00404b40 (*((rsp + 0x40)), *((rsp + 8)), *((rsp + 0x28)), rsp + 0xb0);
    *((rsp + 0x28)) = 0xffffffffffffffff;
    if (eax == 0) {
        goto label_17;
    }
    eax >>= 0x1f;
    *((rsp + 0x18)) = eax;
    goto label_18;
label_129:
    rax = fcn_00409dd0 (0x2018);
    *((rsp + 0x10)) = r15;
    *((rsp + 0x20)) = r12;
    r15 = rax;
    goto label_9;
label_122:
    rax = fcn_004047e0 (rax);
    ecx = 0x40ee9b;
    edx = 0x40ee9c;
    if (*(0x00612290) == 0) {
        rdx = rcx;
    }
    esi = "%s==> %s <==\n";
    rcx = rax;
    edi = 1;
    eax = 0;
    printf_chk ();
    *(0x00612290) = 0;
    goto label_19;
label_138:
    eax = *((rsp + 0x18));
    esi = *((rsp + 8));
    edi = 1;
    rdx = rsp + 0x140;
    eax--;
    *((r14 + 0x3c)) = eax;
    eax = fxstat ();
    if (eax < 0) {
        goto label_139;
    }
    edx = *((rsp + 0x158));
    eax = *((rsp + 0x158));
    eax &= 0xf000;
    eax -= 0x1000;
    if ((eax & 0xffffe000) != 0) {
        eax = edx;
        eax &= 0xb000;
        if (eax != 0x8000) {
            goto label_140;
        }
    }
    if (*((rsp + 0x18)) == 0) {
        goto label_39;
    }
    ebx = *((rsp + 8));
    eax = 1;
    rdi = *(r14);
    *((r14 + 0x30)) = edx;
    rcx = *((rsp + 0xb0));
    *((r14 + 0x34)) = 0;
    if (*((rsp + 0x34)) == 0) {
        eax = *((rsp + 0x70));
    }
    *((r14 + 0x38)) = ebx;
    *((r14 + 8)) = rcx;
    rcx = *((rsp + 0x198));
    *((r14 + 0x40)) = eax;
    *((r14 + 0x10)) = rcx;
    rcx = *((rsp + 0x1a0));
    *((r14 + 0x58)) = 0;
    *((r14 + 0x18)) = rcx;
    rcx = *((rsp + 0x140));
    *((r14 + 0x20)) = rcx;
    rcx = *((rsp + 0x148));
    *((r14 + 0x28)) = rcx;
    rax = fcn_004047e0 (rdi);
    rsi = rax;
    al = fcn_00405090 (ebx);
    *((r14 + 0x35)) = al;
    goto label_16;
label_130:
    *((r14 + 0x36)) = 1;
    if (*((rsp + 8)) == 0xffffffff) {
        goto label_20;
    }
    rax = *(r14);
    goto label_21;
label_127:
    r14 = *((rsp + 0x60));
    free (r15);
    rbx++;
    if (rbx == 0) {
        goto label_141;
    }
    rbx = *((rsp + 0x10));
    rcx = *((rbx + 0x2000));
    dl = (rcx == 0) ? 1 : 0;
    al = (*((rsp + 0x28)) == 0) ? 1 : 0;
    dl |= al;
    *((rsp + 0x58)) = dl;
    if (dl == 0) {
        goto label_142;
    }
label_56:
    rdi = rbp;
    if (rbp == 0) {
        goto label_23;
    }
    do {
label_27:
        rbx = *((rdi + 0x2010));
        free (rdi);
        rdi = rbx;
    } while (rbx != 0);
label_23:
    eax = *((rsp + 0x58));
    *((rsp + 0x18)) = al;
    goto label_18;
label_139:
    rax = errno_location ();
    rbx = rax;
    eax = *(rax);
    *((r14 + 0x3c)) = eax;
    rax = fcn_004047e0 (*(r14));
    rax = fcn_00409510 (4, rax);
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rcx = rbp;
    eax = 0;
    error (0, *(rbx), rax);
label_39:
    eax = *(0x00612386);
    eax ^= 1;
    *((r14 + 0x34)) = al;
    rax = fcn_004047e0 (*(r14));
    al = fcn_00404820 (*((rsp + 8)), rax);
    *((r14 + 0x38)) = 0xffffffff;
    *((rsp + 0x18)) = 0;
    goto label_16;
label_135:
    if (al == 0) {
        goto label_143;
    }
label_26:
    r12d = 0;
    rax = fcn_00409dd0 (0x2010);
    *((rax + 0x2000)) = 0;
    r13 = rax;
    *((rax + 0x2008)) = 0;
    rax = fcn_00409dd0 (0x2010);
    *((rsp + 0x10)) = r14;
    r15d = *((rsp + 8));
    r14 = r13;
    rbx = rax;
    r13 = *((rsp + 0x28));
    while (rsi > 0x1fff) {
        rax = r12;
        rax -= *((rbp + 0x2000));
        *((r14 + 0x2008)) = rbx;
        if (r13 >= rax) {
            goto label_144;
        }
        r12 = rax;
        rax = rbp;
        rbp = *((rbp + 0x2008));
label_22:
        r14 = rbx;
        rbx = rax;
        rax = fcn_00409780 (r15d, rbx, 0x2000);
        rdx = rax - 1;
        if (rdx > 0xfffffffffffffffd) {
            goto label_145;
        }
        r12 += rax;
        *((rbx + 0x2000)) = rax;
        rdx = *((r14 + 0x2000));
        *((rbx + 0x2008)) = 0;
        rsi = rax + rdx;
    }
    memcpy (r14 + rdx, rbx, rax);
    rax = *((rbx + 0x2000));
    *((r14 + 0x2000)) += rax;
    rax = rbx;
    rbx = r14;
    goto label_22;
label_125:
    eax = fcn_00404920 (*((rsp + 0x40)), *((rsp + 8)), *((rsp + 0x28)), rsp + 0xb0);
    if (eax == 0) {
        goto label_146;
    }
    eax >>= 0x1f;
    *((rsp + 0x58)) = eax;
    goto label_23;
label_107:
    r13d = 0;
    ecx = 0x1400;
    do {
label_28:
        rax = rdx + 1;
        goto label_24;
label_106:
        r13d = 1;
        ecx = 0xa;
    } while (1);
label_115:
    *(rsp) = 1;
    goto label_25;
label_124:
    rax = fcn_00409510 (4, *((rsp + 0x40)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot fstat %s");
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), rbp);
    *((rsp + 0x58)) = 0;
    goto label_23;
label_134:
    rax = fcn_00409510 (4, *((rsp + 0x40)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot fstat %s");
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), rbp);
    goto label_18;
label_143:
    if (*((rsp + 0x28)) < 0) {
        goto label_26;
    }
    eax = *((rsp + 0x158));
    eax &= 0xd000;
    if (eax != 0x8000) {
        goto label_147;
    }
    rbp = *((rsp + 0x170));
    rbx |= 0xffffffffffffffff;
label_41:
    rax = *((rsp + 0x178));
    rsi = 0x1fffffffffffffff;
    rdx = rax - 1;
    edx = 0x200;
    if (rdx > rsi) {
        rax = rdx;
    }
    if (rbp <= rax) {
        goto label_26;
    }
    if (rbx == -1) {
        goto label_148;
    }
label_55:
    if (rbp > rbx) {
        rax = rbp;
        rax -= rbx;
        if (*((rsp + 0x28)) < rax) {
            goto label_149;
        }
    }
label_59:
    *((rsp + 0xb0)) = rbx;
    goto label_17;
label_142:
    r12d = *(0x00612380);
    if (*((rbx + rcx - 1)) != r12b) {
        *((rbx + 0x2008))++;
    }
    rcx = *((rsp + 0x28));
    rax = *((rsp + 0x20));
    r13 = rbp;
    rax -= *((rbp + 0x2008));
    if (rcx >= rax) {
        goto label_150;
    }
    do {
        r13 = *((r13 + 0x2010));
        rdx = rax;
        rax -= *((r13 + 0x2008));
    } while (rcx < rax);
    *((rsp + 0x20)) = rdx;
label_150:
    rbx = *((r13 + 0x2000));
    rax = *((rsp + 0x28));
    rdi = r13;
    r15 = *((rsp + 0x20));
    rbx += r13;
    if (rax >= r15) {
        goto label_151;
    }
    r15 -= rax;
    do {
        rdx -= rdi;
        rax = fcn_0040b730 (rdi, r12d, rbx);
        if (rax == 0) {
            goto label_152;
        }
        rdi = rax + 1;
        r15--;
    } while (r15 != 0);
label_151:
    rbx -= rdi;
    if (rbx != 0) {
        goto label_153;
    }
label_40:
    rbx = *((r13 + 0x2010));
    if (rbx == 0) {
        goto label_154;
    }
    do {
        rsi = *((rbx + 0x2000));
        if (rsi != 0) {
            fcn_004048a0 (rbx);
        }
        rbx = *((rbx + 0x2010));
    } while (rbx != 0);
label_154:
    eax = *((rsp + 0x18));
    rdi = rbp;
    *((rsp + 0x58)) = al;
    goto label_27;
label_105:
    r13d = 0;
    ecx = 0xa;
    goto label_28;
label_131:
    rax = *(r14);
    goto label_29;
label_144:
    eax = fcn_00409dd0 (0x2010);
    goto label_22;
label_117:
    if (*((rsp + 0x90)) != 0) {
        goto label_30;
    }
label_119:
    eax = 0;
    if (*(0x00612382) != 0) {
        goto label_30;
    }
    goto label_31;
label_126:
    r15d = *((rsp + 8));
    edx = 1;
    esi = 0;
    edi = r15d;
    rax = lseek ();
    rbx = rax;
    if (rax == -1) {
        goto label_32;
    }
    esi = 0;
    edx = 2;
    edi = r15d;
    rax = lseek ();
    if (rbx >= rax) {
        goto label_155;
    }
    ecx = *((rsp + 0x18));
    *((rsp + 0xb0)) = rax;
    *((rsp + 0x58)) = cl;
    if (rax == 0) {
        goto label_23;
    }
    al = fcn_00404cd0 (*((rsp + 0x40)), *((rsp + 8)), *((rsp + 0x28)), rbx, rax, rsp + 0xb0);
    *((rsp + 0x58)) = al;
    goto label_23;
label_146:
    rcx |= 0xffffffffffffffff;
    rax = fcn_00404a20 (0, *((rsp + 0x40)), *((rsp + 8)), rcx);
    goto label_23;
label_132:
    rbp = *((rsp + 0x50));
    r12 = *((rsp + 0x48));
    ebx = 0;
    do {
        eax = strcmp (*(rbp), 0x40c38a);
        if (eax != 0) {
            goto label_156;
        }
        if (*((rbp + 0x34)) != 0) {
            goto label_156;
        }
        edi = *((rbp + 0x38));
        if (edi < 0) {
            goto label_156;
        }
        eax = *((rbp + 0x30));
        eax &= 0xf000;
        if (eax != 0x1000) {
            goto label_157;
        }
label_36:
        *((rbp + 0x38)) = 0xffffffff;
        *((rbp + 0x34)) = 1;
label_37:
        rbp += 0x60;
    } while (r12 != rbp);
    if (rbx == 0) {
        goto label_33;
    }
    rdx = rsp + 0xb0;
    esi = 1;
    edi = 1;
    eax = fxstat ();
    if (eax < 0) {
        goto label_158;
    }
    eax = *((rsp + 0xc8));
    edx = 1;
    eax &= 0xf000;
    if (eax != 0x1000) {
        eax = fcn_0040b5b0 (1);
        edx = 0;
        dl = (eax != 0) ? 1 : 0;
    }
    *(0x00612383) = dl;
    *(0x00612383) &= 1;
    if (*(0x00612378) != 0) {
        goto label_64;
    }
    rbx = *((rsp + 0x50));
    rbp = *((rsp + 0x48));
    do {
        if (*((rbx + 0x34)) == 0) {
            eax = strcmp (*(rbx), 0x40c38a);
            if (eax == 0) {
                goto label_64;
            }
        }
        rbx += 0x60;
    } while (rbp != rbx);
    rcx = *((rsp + 0x68));
    rdx = *((rsp + 0x50));
    eax = 0;
    do {
        if (*((rdx + rax + 0x38)) >= 0) {
            if (*((rdx + rax + 0x35)) != 0) {
                goto label_64;
            }
        }
        rax += 0x60;
    } while (rcx != rax);
    rdx = *((rsp + 0x50));
    eax = 0;
    do {
        if (*((rdx + rax + 0x38)) >= 0) {
            ecx = *((rdx + rax + 0x35));
            if (cl == 0) {
                goto label_159;
            }
        }
        rax += 0x60;
    } while (*((rsp + 0x68)) != rax);
label_64:
    *(0x00612378) = 1;
    if (*(0x0061237c) == 0) {
        if (*(0x006122a8) != 2) {
            goto label_62;
        }
        if (*(rsp) == 1) {
            goto label_160;
        }
    }
label_62:
    r15d = 0;
label_63:
    eax = r15d;
    rbx = *((rsp + 0x68));
    *((rsp + 0x34)) = 0;
    eax &= 1;
    *((rsp + 0x20)) = al;
    rax = *(rsp);
    rax--;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x50));
    rax = rax + rbx + 0x34;
    *((rsp + 0x18)) = rax;
label_49:
    r14 = *((rsp + 0x50));
    *((rsp + 8)) = 0;
    ebx = 0;
    goto label_35;
label_34:
    rax = fcn_004047e0 (*(r14));
    r12d = *((r14 + 0x30));
    r13 = rax;
    eax = *((r14 + 0x40));
    if (r15d != eax) {
        eax = 0;
        eax = fcn_0040a6a0 (ebp, 3, rdx, rcx, r8);
        if (r15d != 0) {
            goto label_161;
        }
        if (eax < 0) {
            goto label_162;
        }
        edx = eax;
        dh |= 8;
        if (eax != edx) {
            eax = 0;
            eax = fcn_0040a6a0 (ebp, 4, rdx, rcx, r8);
            if (eax == 0xffffffff) {
                goto label_162;
            }
        }
label_44:
        *((r14 + 0x40)) = r15d;
        eax = r15d;
    }
label_45:
    rcx = 0xfffffffffffffffe;
    if (eax == 0) {
        goto label_163;
    }
label_43:
    rax = fcn_00404a20 (0, r13, ebp, rcx);
    dl = (rax != 0) ? 1 : 0;
    *((r14 + 8)) += rax;
    do {
label_47:
        rbx++;
        r14 += 0x60;
        if (*(rsp) == rbx) {
            goto label_164;
        }
INVALID_JUMP;
    } while (*((r14 + 0x34)) != 0);
    ebp = *((r14 + 0x38));
    if (ebp >= 0) {
        goto label_34;
    }
    rbx++;
    r14 += 0x60;
    fcn_004056e0 (r14, r15d, rdx);
    if (*(rsp) != rbx) {
        goto label_35;
    }
label_164:
    edx = *(0x00612386);
    if (dl != 0) {
        if (*(0x006122a8) == 1) {
            goto label_165;
        }
    }
    rax = *((rsp + 0x50));
    rcx = *((rsp + 0x18));
    rax += 0x34;
    do {
        esi = *((rax + 4));
        if (esi >= 0) {
            goto label_165;
        }
        if (*(rax) != 1) {
            if (dl != 0) {
                goto label_165;
            }
        }
        rax += 0x60;
    } while (rcx != rax);
    edx = 5;
    rax = dcgettext (0, "no files remaining");
    eax = 0;
    error (0, 0, rax);
    goto label_33;
label_157:
    eax = fcn_0040b5b0 (rdi);
    if (eax != 0) {
        goto label_36;
    }
label_156:
    rbx++;
    goto label_37;
label_133:
    eax = close (0);
    if (eax >= 0) {
        goto label_38;
    }
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), 0x40c38a);
label_140:
    eax = *(0x00612386);
    *((r14 + 0x36)) = 0;
    ebx = 0x40ee9c;
    *((r14 + 0x3c)) = 0xffffffff;
    eax ^= 1;
    *((r14 + 0x34)) = al;
    if (al != 0) {
        goto label_166;
    }
label_42:
    rax = fcn_004047e0 (*(r14));
    rax = fcn_004095e0 (0, 3, rax);
    edx = 5;
    rax = dcgettext (0, "%s: cannot follow end of this type of file%s");
    r8 = rbx;
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    goto label_39;
label_153:
    rsi = rbx;
    fcn_004048a0 (rdi);
    goto label_40;
label_113:
    rax = errno_location ();
    if (*(rax) != 0x26) {
        goto label_10;
    }
    edx = 5;
    rax = dcgettext (0, "warning: --pid=PID is not supported on this system");
    eax = 0;
    error (0, 0, rax);
    *(0x0061237c) = 0;
    goto label_10;
label_147:
    r15 = *((rsp + 0x28));
    edi = *((rsp + 8));
    edx = 2;
    rsi = r15;
    rsi = -rsi;
    rax = lseek ();
    rbx = rax;
    if (rax == -1) {
        goto label_26;
    }
    rbp = rax + r15;
    goto label_41;
label_166:
    edx = 5;
    rax = dcgettext (0, "; giving up on this name");
    rbx = rax;
    goto label_42;
label_163:
    rdx = rsp + 0x140;
    esi = ebp;
    edi = 1;
    eax = fxstat ();
    if (eax != 0) {
        goto label_167;
    }
    eax = *((rsp + 0x158));
    if (*((r14 + 0x30)) == eax) {
        goto label_168;
    }
    rdx = *((rsp + 0x198));
    rcx = *((rsp + 0x1a0));
label_46:
    r12d &= 0xf000;
    *((r14 + 0x10)) = rdx;
    *((r14 + 0x18)) = rcx;
    *((r14 + 0x30)) = eax;
    *((r14 + 0x58)) = 0;
    if (r12d == 0x8000) {
        goto label_169;
    }
label_48:
    if (rbx != *((rsp + 0x10))) {
        *((rsp + 0x10)) = rbx;
        if (*(0x00612381) == 0) {
            goto label_170;
        }
        eax = 0x40ee9c;
        edx = 0x40ee9b;
        rcx = r13;
        if (*(0x00612290) != 0) {
            rdx = rax;
        }
        esi = "%s==> %s <==\n";
        edi = 1;
        eax = 0;
        eax = printf_chk ();
        *(0x00612290) = 0;
        *((rsp + 0x10)) = rbx;
    }
label_170:
    edi = *((r14 + 0x40));
    if (edi != 0) {
        goto label_171;
    }
    rcx = 0xffffffffffffffff;
    if (r12d != 0x8000) {
        goto label_43;
    }
    if (*((r14 + 0x35)) == 0) {
        goto label_43;
    }
    rcx = *((rsp + 0x170));
    rcx -= *((r14 + 8));
    goto label_43;
label_161:
    if (eax >= 0) {
        goto label_44;
    }
label_162:
    rax = errno_location ();
    edx = *((r14 + 0x30));
    edx &= 0xf000;
    if (edx != 0x8000) {
        goto label_172;
    }
    if (*(rax) != 1) {
        goto label_172;
    }
    eax = *((r14 + 0x40));
    goto label_45;
label_168:
    edx = eax;
    edx &= 0xf000;
    rdx = *((rsp + 0x198));
    if (edx == 0x8000) {
        goto label_173;
    }
label_52:
    rcx = *((rsp + 0x1a0));
    if (*((r14 + 0x10)) != rdx) {
        goto label_46;
    }
    if (*((r14 + 0x18)) != ecx) {
        goto label_46;
    }
    rax = *((r14 + 0x58));
    rdx = rax + 1;
    *((r14 + 0x58)) = rdx;
    if (rax < *(0x006122a0)) {
        goto label_47;
    }
    if (*(0x006122a8) != 1) {
        goto label_47;
    }
    sil = (*((r14 + 0x40)) != 0) ? 1 : 0;
    fcn_004056e0 (r14, 0, rdx);
    *((r14 + 0x58)) = 0;
    goto label_47;
label_169:
    rax = *((r14 + 8));
    if (*((rsp + 0x170)) >= rax) {
        goto label_48;
    }
    rax = fcn_004095e0 (0, 3, r13);
    edx = 5;
    *((rsp + 0x28)) = rax;
    rax = dcgettext (0, "%s: file truncated");
    rcx = *((rsp + 0x28));
    eax = 0;
    error (0, 0, rax);
    rcx = r13;
    eax = fcn_00404c20 (ebp, 0, 0);
    *((r14 + 8)) = 0;
    goto label_48;
label_165:
    if (*((rsp + 8)) != 1) {
        goto label_174;
    }
    if (*((rsp + 0x20)) != 0) {
        goto label_174;
    }
    if (*(0x00612383) == 0) {
        goto label_49;
    }
label_51:
    eax = 0;
    ecx = 0x10;
    *((rsp + 0xa8)) = 0;
    rdi = rsp + 0x140;
    *((rsp + 0xa0)) = 0;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    eax = select (2, rsp + 0x140, 0, 0, rsp + 0xa0);
    eax--;
    if (eax == 0) {
        goto label_175;
    }
label_50:
    if (*((rsp + 8)) != 0) {
        goto label_49;
    }
    if (*((rsp + 0x34)) != 0) {
        goto label_33;
    }
    edi = imp.__libc_start_main;
    if (edi != 0) {
        goto label_176;
    }
label_53:
    xmm0 = *((rsp + 0x38));
    eax = fcn_0040a160 ();
    if (eax == 0) {
        goto label_49;
    }
    edx = 5;
    rax = dcgettext (0, "cannot read realtime clock");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_167:
    *((r14 + 0x38)) = 0xffffffff;
    rax = errno_location ();
    r12 = rax;
    eax = *(rax);
    *((r14 + 0x3c)) = eax;
    rax = fcn_004095e0 (0, 3, r13);
    rcx = rax;
    eax = 0;
    error (0, *(r12), 0x40d7fc);
    close (ebp);
    goto label_47;
label_174:
    rdi = stdout;
    eax = fflush_unlocked ();
    if (eax != 0) {
        goto label_177;
    }
    if (*(0x00612383) == 0) {
        goto label_50;
    }
    goto label_51;
label_173:
    rcx = *((rsp + 0x170));
    if (*((r14 + 8)) == rcx) {
        goto label_52;
    }
    rcx = *((rsp + 0x1a0));
    goto label_46;
label_176:
    eax = kill (rdi, 0);
    if (eax == 0) {
        goto label_53;
    }
    rax = errno_location ();
    if (*(rax) == 1) {
        goto label_53;
    }
    eax = *((rsp + 0x40));
    *((rsp + 0x34)) = al;
    goto label_49;
label_175:
    rax = raise (0xd);
    goto label_50;
label_145:
    *((rsp + 0x20)) = rax;
    r14 = *((rsp + 0x10));
    rbx = rbp;
    free (rbx);
    rax = *((rsp + 0x20));
    rdx = *((rsp + 0x28));
    rax++;
    if (rax != 0) {
        goto label_178;
    }
    goto label_179;
    do {
        rbx = *((rbx + 0x2008));
        r12 = rax;
label_178:
        rsi = *((rbx + 0x2000));
        rax = r12;
        rax -= rsi;
    } while (rdx < rax);
    rcx = *((rsp + 0x28));
    eax = 0;
    if (rcx < r12) {
        rax = r12;
        rax -= rcx;
    }
    rsi -= rax;
    if (rsi == 0) {
        goto label_54;
    }
    fcn_004048a0 (rbx + rax);
    do {
label_54:
        rbx = *((rbx + 0x2008));
        if (rbx == 0) {
            goto label_180;
        }
        rsi = *((rbx + 0x2000));
    } while (rsi == 0);
    fcn_004048a0 (rbx);
    goto label_54;
label_180:
    *((rsp + 0x18)) = 1;
    rdi = rbp;
    while (rdi != 0) {
        rbx = *((rdi + 0x2008));
        free (rdi);
        rdi = rbx;
INVALID_JUMP;
    }
    goto label_18;
label_148:
    rcx = *((rsp + 0x40));
    rax = fcn_00404c20 (*((rsp + 8)), 0, 1);
    rbx = rax;
    goto label_55;
label_141:
    rax = fcn_00409510 (4, *((rsp + 0x40)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "error reading %s");
    r12 = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), r12);
    goto label_56;
label_137:
    rcx = *((rsp + 0x40));
    rax = fcn_00404c20 (*((rsp + 8)), *((rsp + 0x28)), 1);
    if (rax >= 0) {
        goto label_57;
    }
    goto label_58;
label_149:
    rbx = rbp;
    rcx = *((rsp + 0x40));
    rbx -= *((rsp + 0x28));
    fcn_00404c20 (*((rsp + 8)), rbx, 0);
    goto label_59;
label_155:
    rcx = *((rsp + 0x40));
    fcn_00404c20 (*((rsp + 8)), rbx, 0);
    goto label_32;
label_112:
    edx = 5;
    esi = "warning: --retry only effective for the initial open";
    goto label_60;
label_95:
    edx = 5;
    rax = dcgettext (0, "option used in invalid context -- %c");
    ecx = r14d;
    eax = 0;
    error (1, 0, rax);
label_92:
    fcn_00405d10 (1);
label_179:
    rax = fcn_00409510 (4, *((rsp + 0x40)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "error reading %s");
    r12 = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), r12);
    rdi = rbp;
    goto label_61;
label_160:
    rax = *((rsp + 0x50));
    if (*((rax + 0x38)) == 0xffffffff) {
        goto label_62;
    }
    eax = *((rax + 0x30));
    r15d = 0;
    *((rsp + 8)) = eax;
    eax &= 0xf000;
    r15b = (eax != 0x8000) ? 1 : 0;
    goto label_63;
label_172:
    *(rsp) = rax;
    rax = fcn_004095e0 (0, 3, r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: cannot change nonblocking mode");
    r9 = *(rsp);
    rcx = rbx;
    eax = 0;
    error (1, *(r9), rax);
label_159:
    *((rsp + 0x10)) = cl;
    rbx = *((rsp + 0x50));
    r15 = rsp + 0x140;
label_65:
    rsi = *(rbx);
    rdx = r15;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_181;
    }
    eax = *((rsp + 0x158));
    eax &= 0xf000;
    if (eax == 0xa000) {
        goto label_64;
    }
label_181:
    rbx += 0x60;
    if (*((rsp + 0x48)) != rbx) {
        goto label_65;
    }
    rcx = *((rsp + 0x50));
    eax = 0;
label_66:
    if (*((rcx + rax + 0x38)) < 0) {
        goto label_182;
    }
    edx = *((rcx + rax + 0x30));
    edx &= 0xf000;
    if (edx == 0x8000) {
        goto label_182;
    }
    if (edx != 0x1000) {
        goto label_64;
    }
label_182:
    rax += 0x60;
    if (*((rsp + 0x68)) != rax) {
        goto label_66;
    }
    if (*((rsp + 0x8b)) != 0) {
        goto label_183;
    }
    if (*(0x006122a8) == 2) {
        goto label_64;
    }
label_183:
    eax = inotify_init ();
    r13d = eax;
    if (eax >= 0) {
        rdi = stdout;
        eax = fflush_unlocked ();
        if (eax != 0) {
            goto label_184;
        }
        rax = fcn_00407060 (*(rsp), 0, 0x4047c0, 0x4047d0, 0);
        *((rsp + 0x18)) = rax;
        if (rax == 0) {
            goto label_185;
        }
        edx = 2;
        eax = 0xc06;
        r14 = *((rsp + 0x50));
        if (*(0x006122a8) != 1) {
            eax = edx;
        }
        *((rsp + 8)) = 0;
        r12d = 0;
        ebp = 0;
        *((rsp + 0x28)) = r15;
        rbx = r14;
        *((rsp + 0x34)) = eax;
label_67:
        if (*((rbx + 0x34)) != 0) {
            goto label_69;
        }
        r15 = *(rbx);
        eax = 0;
        rcx |= 0xffffffffffffffff;
        rdi = r15;
        __asm ("repne scasb al, byte [rdi]");
        *((rbx + 0x44)) = 0xffffffff;
        rax = rcx;
        rax = ~rax;
        rax--;
        if (rbp < rax) {
        }
        if (*(0x006122a8) == 1) {
            rax = fcn_00406630 (r15);
            rsi = r15 + rax;
            r14 = rax;
            eax = *(rsi);
            *((rsp + 0x58)) = rsi;
            *((rsp + 0x20)) = al;
            rax = fcn_004066f0 (r15);
            rsi = *((rsp + 0x58));
            rax -= r15;
            *((rbx + 0x50)) = rax;
            *(rsi) = 0;
            esi = 0x40c387;
            if (r14 != 0) {
                rsi = *(rbx);
            }
            edx = 0x784;
            edi = r13d;
            eax = inotify_add_watch ();
            esi = *((rsp + 0x20));
            *((rbx + 0x48)) = eax;
            rax = *(rbx);
            *((rax + r14)) = sil;
            if (*((rbx + 0x48)) < 0) {
                goto label_186;
            }
        }
        edx = *((rsp + 0x34));
        rsi = *(rbx);
        edi = r13d;
        eax = inotify_add_watch ();
        *((rbx + 0x44)) = eax;
        if (eax >= 0) {
            goto label_187;
        }
        eax = *((rsp + 0x40));
        if (*((rbx + 0x38)) != 0xffffffff) {
            r12d = eax;
        }
        rax = errno_location ();
        r14 = rax;
        eax = *(rax);
        edx = *(rax);
        edx &= 0xffffffef;
        if (edx != 0xc) {
            goto label_188;
        }
label_78:
        edx = 5;
        rax = dcgettext (0, "inotify resources exhausted");
        eax = 0;
        error (0, 0, rax);
label_72:
        fcn_004072a0 (*((rsp + 0x18)));
        errno_location ();
        *(rax) = 0;
    }
    edx = 5;
    rax = dcgettext (0, "inotify cannot be used, reverting to polling");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (0, *(rax), rbx);
    rbx = *((rsp + 0x50));
    rbp = *((rsp + 0x48));
    do {
        esi = *((rbx + 0x44));
        if (esi != 0xffffffff) {
            edi = r13d;
            inotify_rm_watch ();
        }
        esi = *((rbx + 0x48));
        if (esi != 0xffffffff) {
            edi = r13d;
            inotify_rm_watch ();
        }
        rbx += 0x60;
    } while (rbp != rbx);
    goto label_64;
label_116:
    rax = fcn_00409510 (4, 0x40c38a);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "cannot follow %s by name");
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
label_152:
    assert_fail (0x40c4a7, "src/tail.c", 0x2c9, "pipe_lines");
label_158:
    edx = 5;
    rax = dcgettext (0, "standard output");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_177:
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_171:
    rcx = 0xfffffffffffffffe;
    goto label_43;
label_109:
    rax = fcn_00409760 (*((rbx + 8)));
    edx = 5;
    rax = dcgettext (0, "invalid number");
    rbx = rax;
    rax = errno_location ();
    r8 = rbp;
    rcx = rbx;
    eax = 0;
    error (1, *(rax), "%s: %s");
label_187:
    rsi = rbx;
    rax = fcn_00407800 (*((rsp + 0x18)));
    if (rax == 0) {
        goto label_185;
    }
    eax = *((rsp + 0x40));
    *((rsp + 8)) = al;
label_69:
    rbx += 0x60;
    if (*((rsp + 0x48)) != rbx) {
        goto label_67;
    }
    r15 = *((rsp + 0x28));
    if (*(0x006122a8) == 2) {
        goto label_189;
    }
label_73:
    rbx = *((rsp + 0x50));
    rax = *((rsp + 0x68));
    r12 = *((rsp + 0x48));
    rax = rbx + rax - 0x60;
    *((rsp + 0x98)) = rax;
    goto label_190;
label_68:
    rbx += 0x60;
    if (r12 == rbx) {
invalid_funccall(); //        void (*0x404012)() ();
    }
label_190:
    if (*((rbx + 0x34)) != 0) {
        goto label_68;
    }
    if (*(0x006122a8) != 1) {
invalid_funccall(); //        void (*0x403f5b)() ();
    }
label_188:
    if (eax == *((rbx + 0x3c))) {
        goto label_69;
    }
    rax = fcn_00409510 (4, *(rbx));
    edx = 5;
    *((rsp + 0x20)) = rax;
    rax = dcgettext (0, "cannot watch %s");
    rcx = *((rsp + 0x20));
    eax = 0;
    error (0, *(r14), rax);
    goto label_69;
label_70:
    if (*(0x006122a8) == 1) {
        goto label_191;
    }
label_71:
    if (rbp < r14) {
        goto label_192;
    }
    edi = imp.__libc_start_main;
    if (edi == 0) {
invalid_funccall(); //        void (*0x4040b4)() ();
    }
label_192:
    rax = *((rsp + 0x20));
    rbx = rax + rbp;
    edx = *((rbx + 0xc));
    r9d = *((rbx + 4));
    *((rsp + 0x60)) = rbx;
    ebx = *(rbx);
    rbp = rbp + rdx + 0x10;
    if ((r9d & 0x400) == 0) {
invalid_funccall(); //        void (*0x404298)() ();
    }
label_77:
    if (rbx == 0) {
        goto label_70;
    }
label_76:
    rax = *((rsp + 0x60));
    eax = *((rax + 4));
    if ((eax & 0xe04) == 0) {
        goto label_193;
    }
    if ((ah & 4) != 0) {
        goto label_194;
    }
label_75:
    fcn_004056e0 (rbx, 0, rdx);
    goto label_70;
label_191:
    if (*(0x00612386) != 0) {
        goto label_71;
    }
    rax = fcn_00406bd0 (*((rsp + 0x18)));
    if (rax != 0) {
        goto label_71;
    }
    edx = 5;
    rax = dcgettext (0, "no files remaining");
    eax = 0;
    error (0, 0, rax);
label_74:
    eax = 1;
    goto label_31;
label_193:
    fcn_00404f00 (rbx, rsp + 0x98);
    goto label_70;
label_189:
    if (r12b != 0) {
        goto label_72;
    }
    if (*((rsp + 8)) != 0) {
        goto label_73;
    }
    goto label_74;
label_194:
    esi = *((rbx + 0x44));
    edi = r13d;
    inotify_rm_watch ();
    rsi = rbx;
    fcn_00407840 (*((rsp + 0x18)));
    goto label_75;
label_79:
    *((rdx + 0x44)) = 0xffffffff;
    rdi = *(rdx);
    *((rsp + 0x70)) = rdx;
    rax = fcn_004047e0 (*(rdi));
    rdx = *((rsp + 0x70));
    fcn_00404820 (*((rdx + 0x38)), rax);
    rsi = rbx;
    rax = fcn_00407800 (*((rsp + 0x18)));
    if (rax == 0) {
        goto label_185;
    }
    if (*(0x006122a8) != 1) {
        goto label_76;
    }
    fcn_004056e0 (rbx, 0, rdx);
    goto label_77;
label_185:
    fcn_0040a020 ();
label_186:
    rax = errno_location ();
    r14 = rbx;
    rbx = rax;
    if (*(rax) == 0x1c) {
        goto label_78;
    }
    rax = fcn_00409510 (4, *(r14));
    edx = 5;
    rax = dcgettext (0, "cannot watch parent directory of %s");
    rcx = rbp;
    eax = 0;
    error (0, *(rbx), rax);
    goto label_72;
label_184:
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    rax = error (1, *(rax), rbx);
    rdi = rax;
    *((rsp + 0x70)) = rax;
    fcn_004056e0 (rdi, 0, rdx);
    rdx = *((rsp + 0x70));
    goto label_79;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40470b */
#include <stdint.h>
 
int32_t fcn_0040470b (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404761 */
#include <stdint.h>
 
int64_t fcn_00404761 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x00612368) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x611e48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00612370) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_0040470b ();
    *(0x00612368) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4047b8 */
#include <stdint.h>
 
int64_t fcn_004047b8 (void) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4047e0 */
#include <stdint.h>
 
int64_t fcn_004047e0 (uint32_t arg1) {
    rdi = arg1;
    rax = rdi;
    ecx = 2;
    edi = 0x40c38a;
    rsi = rax;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    dl = (unknown > unknown) ? 1 : 0;
    if (dl != 0) {
        return rax;
    }
    edx = 5;
    esi = "standard input";
    edi = 0;
    return dcgettext ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404820 */
#include <stdint.h>
 
uint64_t fcn_00404820 (int32_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    eax = rdi + 1;
    if (eax <= 1) {
        return eax;
    }
    ebx = edi;
    eax = close (rdi);
    if (eax == 0) {
        return eax;
    }
    rax = fcn_00409510 (4, rbp);
    edx = 5;
    r12 = rax;
    rax = dcgettext (0, "closing %s (fd=%d)");
    rax = errno_location ();
    r8d = ebx;
    rcx = r12;
    esi = *(rax);
    rdx = rbp;
    edi = 0;
    eax = 0;
    return error ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4048a0 */
#include <stdint.h>
 
uint64_t fcn_004048a0 (int64_t arg2) {
    rsi = arg2;
    rdx = rsi;
    rbx = rsi;
    esi = 1;
    rcx = stdout;
    rax = fwrite_unlocked ();
    if (rbx <= rax) {
        return rax;
    }
    rdi = stdout;
    clearerr_unlocked ();
    rax = fcn_00409510 (4, "standard output");
    edx = 5;
    rax = dcgettext (0, "error writing %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (1, *(rax), rbx);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404920 */
#include <stdint.h>
 
uint64_t fcn_00404920 (int64_t arg1, int32_t arg2, int32_t arg3, int64_t arg4) {
    int64_t var_ch;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    eax = 0;
    if (rdx == 0) {
        goto label_2;
    }
    r15 = rdi;
    r14d = esi;
    r13 = rcx;
    rbx = rdx;
    do {
        rax = fcn_00409780 (r14d, rsp + 0x10, 0x2000);
        if (rax == 0) {
            goto label_3;
        }
        if (rax == -1) {
            goto label_4;
        }
        *(r13) += rax;
        rcx = rsp + 0x10;
        r12d = *(0x00612380);
        rbp = rcx + rax;
label_0:
        rdx -= rdi;
        rax = fcn_0040b730 (rcx, r12d, rbp);
    } while (rax == 0);
    rdi = rax + 1;
    rbx--;
    if (rbx != 0) {
        goto label_0;
    }
    eax = 0;
    if (rbp <= rdi) {
        goto label_1;
    }
    rbp -= rdi;
    if (rbp == 0) {
        goto label_1;
    }
    rsi = rbp;
    *((rsp + 0xc)) = eax;
    fcn_004048a0 (rdi);
    eax = *((rsp + 0xc));
    do {
label_1:
        return rax;
label_2:
        return rax;
label_3:
        eax = 0xffffffff;
    } while (1);
label_4:
    rax = fcn_00409510 (4, r15);
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), rbx);
    eax = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404a20 */
#include <stdint.h>
 
uint64_t fcn_00404a20 (int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
    int32_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15d = edx;
    r13 = rcx;
    r12d = 0;
    rbx = rcx;
    *((rsp + 8)) = rsi;
    do {
        edx = 0x2000;
        rsi = rsp + 0x10;
        edi = r15d;
        if (rbx <= 0x2000) {
            rdx = rbx;
        }
        rax = fcn_00409780 (rdi, rsi, rdx);
        r14 = rax;
        if (rax == -1) {
            goto label_0;
        }
        if (rax == 0) {
            goto label_1;
        }
        if (bpl != 0) {
            eax = 0x40ee9b;
            edx = 0x40ee9c;
            rcx = *((rsp + 8));
            if (*(0x00612290) == 0) {
                rdx = rax;
            }
            esi = "%s==> %s <==\n";
            edi = 1;
            eax = 0;
            printf_chk ();
            *(0x00612290) = 0;
        }
        rsi = r14;
        r12 += r14;
        fcn_004048a0 (rsp + 0x10);
        if (r13 != -1) {
            rbx -= r14;
            if (rbx == 0) {
                goto label_1;
            }
            if (r13 == 0xfffffffffffffffe) {
                goto label_1;
            }
        }
        ebp = 0;
    } while (1);
label_0:
    rax = errno_location ();
    rbx = rax;
    if (*(rax) == 0xb) {
label_1:
        rax = r12;
        return rax;
    }
    rax = fcn_00409510 (4, *((rsp + 8)));
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rcx = rbp;
    eax = 0;
    error (1, *(rbx), rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404b40 */
#include <stdint.h>
 
uint64_t fcn_00404b40 (int64_t arg1, int32_t arg2, int32_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    if (rdx == 0) {
        goto label_0;
    }
    r13 = rdi;
    r12d = esi;
    rbx = rdx;
    while (rax != 0) {
        if (rax == -1) {
            goto label_1;
        }
        *(rbp) += rax;
        if (rax > rbx) {
            goto label_2;
        }
        rbx -= rax;
        if (rbx == 0) {
            goto label_3;
        }
        rax = fcn_00409780 (r12d, rsp, 0x2000);
    }
    eax = 0xffffffff;
    return rax;
label_2:
    rax -= rbx;
    rsi = rax;
    eax = fcn_004048a0 (rsp + rbx);
label_3:
    eax = 0;
    return rax;
label_1:
    rax = fcn_00409510 (4, r13);
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), rbx);
    eax = 1;
    return rax;
label_0:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404c20 */
#include <stdint.h>
 
uint64_t fcn_00404c20 (int32_t arg2, int64_t arg3, int64_t arg4) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r12 = rcx;
    ebx = edx;
    rax = lseek ();
    if (rax >= 0) {
        return rax;
    }
    rax = fcn_00407a20 (rbp, rsp, rdx);
    r13 = rax;
    rax = errno_location ();
    rdx = r12;
    esi = 3;
    edi = 0;
    if (ebx == 1) {
        goto label_0;
    }
    rax = fcn_004095e0 (rdi, rsi, rdx);
    edx = 5;
    rbx = rax;
    do {
        rax = dcgettext (0, "%s: cannot seek to offset %s");
        r8 = r13;
        rcx = rbx;
        eax = 0;
        error (0, *(rbp), rax);
        exit (1);
label_0:
        rax = fcn_004095e0 (rdi, rsi, rdx);
        edx = 5;
        esi = "%s: cannot seek to relative offset %s";
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404cd0 */
#include <stdint.h>
 
int64_t fcn_00404cd0 (int64_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    uint32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    *(rsp) = rdi;
    *((rsp + 0x10)) = rcx;
    *((rsp + 0x18)) = r8;
    *((rsp + 8)) = r9;
    if (rdx == 0) {
        goto label_4;
    }
    rdi = *((rsp + 0x18));
    r14d = esi;
    rcx = *(rsp);
    r15 = rdx;
    rbx = rsp + 0x20;
    rbp -= *((rsp + 0x10));
    rax = rbp;
    rax >>= 0x3f;
    rax >>= 0x33;
    rbp += rax;
    ebp &= 0x1fff;
    rbp -= rax;
    eax = 0x2000;
    if (rbp == 0) {
    }
    rdi -= rbp;
    rsi = rdi;
    r13 = rdi;
    fcn_00404c20 (r14d, rsi, 0);
    rax = fcn_00409780 (r14d, rbx, rbp);
    r12 = rax;
    if (rax == -1) {
        goto label_5;
    }
    rsi = *((rsp + 8));
    rax = r13 + rax;
    *(rsi) = rax;
    if (r12 != 0) {
        goto label_6;
    }
    do {
label_0:
        if (r13 == *((rsp + 0x10))) {
            goto label_7;
        }
        rcx = *(rsp);
        r13 -= 0x2000;
        fcn_00404c20 (r14d, r13, 0);
        rax = fcn_00409780 (r14d, rbx, 0x2000);
        r12 = rax;
        if (rax == -1) {
            goto label_5;
        }
        rsi = *((rsp + 8));
        rax = r13 + rax;
        *(rsi) = rax;
        if (r12 == 0) {
            goto label_4;
        }
label_2:
        ebp = *(0x00612380);
        rdx = r12;
        goto label_8;
label_1:
        r15 = rcx;
    } while (rdx == 0);
label_8:
    esi = ebp;
    rdi = rbx;
    rax = memrchr ();
    if (rax == 0) {
        goto label_0;
    }
    rdx = rax;
    rcx = r15 - 1;
    rdx -= rbx;
    if (r15 != 0) {
        goto label_1;
    }
    rsi = r12 - 1;
    if (rsi != rdx) {
        rsi -= rdx;
        fcn_004048a0 (rax + 1);
    }
    rcx -= r12;
    rcx -= r13;
    rax = fcn_00404a20 (0, *(rsp), r14d, *((rsp + 0x18)));
    rdi = *((rsp + 8));
    *(rdi) += rax;
    eax = 1;
    do {
label_3:
        return rax;
label_6:
        eax = *(0x00612380);
        al = (*((rsp + r12 + 0x1f)) != al) ? 1 : 0;
        eax = (int32_t) al;
        r15 -= rax;
        goto label_2;
label_7:
        rbx = *(rsp);
        rcx = rbx;
        fcn_00404c20 (r14d, r13, 0);
        rax = fcn_00404a20 (0, rbx, r14d, *((rsp + 0x18)));
        r13 += rax;
        rax = *((rsp + 8));
        *(rax) = r13;
label_4:
        eax = 1;
    } while (1);
label_5:
    rax = fcn_00409510 (4, *(rsp));
    edx = 5;
    rax = dcgettext (0, "error reading %s");
    rbx = rax;
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    eax = error (0, *(rax), rbx);
    eax = 0;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x404f00 */
#include <stdint.h>
 
uint64_t fcn_00404f00 (uint32_t arg1, int64_t arg2) {
    int64_t var_30h;
    int64_t var_58h;
    int64_t var_60h;
    rdi = arg1;
    rsi = arg2;
    if (*((rdi + 0x38)) == 0xffffffff) {
        goto label_2;
    }
    r12 = rsi;
    rbx = rdi;
    rax = fcn_004047e0 (*(rdi));
    esi = *((rbx + 0x38));
    rdx = rsp;
    edi = 1;
    r13 = rax;
    eax = fxstat ();
    if (eax != 0) {
        goto label_3;
    }
    eax = *((rbx + 0x30));
    eax &= 0xf000;
    while (*((rsp + 0x30)) != rax) {
label_0:
        if (*(0x00612381) != 0) {
            ebp = 0;
            bpl = (*(r12) != rbx) ? 1 : 0;
        }
        rax = fcn_00404a20 (ebp, r13, *((rbx + 0x38)), 0xffffffffffffffff);
        *((rbx + 8)) += rax;
        if (rax != 0) {
            goto label_4;
        }
label_1:
        return rax;
label_2:
        return rax;
        rax = *((rbx + 8));
        if (*((rsp + 0x30)) < rax) {
            goto label_5;
        }
    }
    rax = *((rsp + 0x60));
    rcx = *((rsp + 0x58));
    if (*((rbx + 0x10)) != rcx) {
        goto label_0;
    }
    if (*((rbx + 0x18)) != eax) {
        goto label_0;
    }
    goto label_1;
label_4:
    *(r12) = rbx;
    rdi = stdout;
    eax = fflush_unlocked ();
    if (eax == 0) {
        goto label_1;
    }
    edx = 5;
    rax = dcgettext (0, "write error");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_3:
    rax = errno_location ();
    eax = *(rax);
    *((rbx + 0x3c)) = eax;
    fcn_00404820 (*((rbx + 0x38)), r13);
    *((rbx + 0x38)) = 0xffffffff;
    return rax;
label_5:
    rax = fcn_004095e0 (0, 3, r13);
    edx = 5;
    r14 = rax;
    rax = dcgettext (0, "%s: file truncated");
    rcx = r14;
    eax = 0;
    error (0, 0, rax);
    rcx = r13;
    fcn_00404c20 (*((rbx + 0x38)), 0, 0);
    *((rbx + 8)) = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x405090 */
#include <stdint.h>
 
uint64_t fcn_00405090 (int64_t arg2) {
    rsi = arg2;
    r12 = rsi;
    rsi = rsp;
    eax = fstatfs ();
    if (eax == 0) {
        goto label_1;
    }
    rax = errno_location ();
    ebx = 1;
    while (1) {
label_0:
        eax = ebx;
        return rax;
        rax = fcn_00409510 (4, r12);
        edx = 5;
        r12 = rax;
        rax = dcgettext (0, "cannot determine location of %s. reverting to polling");
        rcx = r12;
        eax = 0;
        error (0, *(rbp), rax);
        eax = ebx;
        return rax;
label_1:
        rax = *(rsp);
        if (rax == 0x15013346) {
            goto label_2;
        }
        if (rax <= 0x15013346) {
            if (rax == 0x72b6) {
                goto label_2;
            }
            if (rax > 0x72b6) {
                goto label_3;
            }
            if (rax == 0x3434) {
                goto label_2;
            }
            if (rax > 0x3434) {
                goto label_4;
            }
            if (rax == 0x137d) {
                goto label_2;
            }
            if (rax > 0x137d) {
                goto label_5;
            }
            if (rax == 0x187) {
                goto label_2;
            }
            if (rax > 0x187) {
                goto label_6;
            }
            bl = (rax != 0x2f) ? 1 : 0;
            eax = ebx;
            return rax;
        }
        if (rax == 0x62646576) {
            goto label_2;
        }
        if (rax > 0x62646576) {
            goto label_7;
        }
        if (rax == 0x453dcd28) {
            goto label_2;
        }
        if (rax > 0x453dcd28) {
            goto label_8;
        }
        if (rax == 0x2bad1dea) {
            goto label_2;
        }
        if (rax > 0x2bad1dea) {
            goto label_9;
        }
        if (rax == 0x1badface) {
            goto label_2;
        }
        if (rax > 0x1badface) {
            goto label_10;
        }
        bl = (rax != 0x19800202) ? 1 : 0;
        eax = ebx;
        return rax;
label_6:
        if (rax == 0x7c0) {
            goto label_2;
        }
        bl = (rax != 0x1373) ? 1 : 0;
    }
label_5:
    if (rax != 0x1cd1) {
        if (rax <= 0x1cd1) {
            if (rax == 0x137f) {
                goto label_2;
            }
            bl = (rax != 0x138f) ? 1 : 0;
            goto label_0;
label_4:
            if (rax == 0x482b) {
                goto label_2;
            }
            if (rax > 0x482b) {
                goto label_11;
            }
            if (rax == 0x4004) {
                goto label_2;
            }
            if (rax > 0x4004) {
                goto label_12;
            }
            bl = (rax != 0x4000) ? 1 : 0;
            goto label_0;
label_3:
            if (rax == 0x414a53) {
                goto label_2;
            }
            if (rax > 0x414a53) {
                goto label_13;
            }
            if (rax == 0xadff) {
                goto label_2;
            }
            if (rax > 0xadff) {
                goto label_14;
            }
            if (rax > 0x9fa2) {
                goto label_15;
            }
            if (rax >= 0x9fa0) {
                goto label_2;
            }
            bl = (rax != 0x9660) ? 1 : 0;
            goto label_0;
        }
        if (rax == 0x2468) {
            goto label_2;
        }
        bl = (rax != 0x2478) ? 1 : 0;
        goto label_0;
label_12:
        if (rax == 0x4006) {
            goto label_2;
        }
        bl = (rax != 0x4244) ? 1 : 0;
        goto label_0;
label_11:
        if (rax == 0x4d5a) {
            goto label_2;
        }
        if (rax <= 0x4d5a) {
            if (rax == 0x4858) {
                goto label_2;
            }
            bl = (rax != 0x4d44) ? 1 : 0;
            goto label_0;
label_10:
            if (rax == 0x24051905) {
                goto label_2;
            }
            bl = (rax != 0x28cd3d45) ? 1 : 0;
            goto label_0;
label_15:
            bl = (rax != 0xadf5) ? 1 : 0;
            goto label_0;
label_14:
            if (rax == 0xf15f) {
                goto label_2;
            }
            if (rax <= 0xf15f) {
                if (rax == 0xef51) {
                    goto label_2;
                }
                bl = (rax != 0xef53) ? 1 : 0;
                goto label_0;
label_13:
                if (rax > 0x12ff7b7) {
                    goto label_16;
                }
                if (rax >= 0x12ff7b4) {
                    goto label_2;
                }
                if (rax == 0x1021994) {
                    goto label_2;
                }
                if (rax > 0x1021994) {
                    goto label_17;
                }
                bl = (rax != 0xc0ffee) ? 1 : 0;
                goto label_0;
            }
            if (rax == 0x11954) {
                goto label_2;
            }
            bl = (rax != 0x27e0eb) ? 1 : 0;
            goto label_0;
label_17:
            if (rax == 0x1021997) {
                goto label_2;
            }
            bl = (rax != 0x12fd16d) ? 1 : 0;
            goto label_0;
label_16:
            if (rax == 0xbad1dea) {
                goto label_2;
            }
            if (rax > 0xbad1dea) {
                goto label_18;
            }
            if (rax == 0x7655821) {
                goto label_2;
            }
            bl = (rax != 0x9041934) ? 1 : 0;
            goto label_0;
label_8:
            if (rax == 0x54190100) {
                goto label_2;
            }
            if (rax > 0x54190100) {
                goto label_19;
            }
            if (rax == 0x53464846) {
                goto label_2;
            }
            if (rax > 0x53464846) {
                goto label_20;
            }
            if (rax == 0x52654973) {
                goto label_2;
            }
            bl = (rax != 0x5346314d) ? 1 : 0;
            goto label_0;
label_9:
            if (rax == 0x42465331) {
                goto label_2;
            }
            if (rax > 0x42465331) {
                goto label_21;
            }
            if (rax == 0x2fc12fc1) {
                goto label_2;
            }
            bl = (rax != 0x3153464a) ? 1 : 0;
            goto label_0;
        }
        if (rax == 0x5df5) {
            goto label_2;
        }
        bl = (rax != 0x7275) ? 1 : 0;
        goto label_0;
label_21:
        if (rax == 0x42494e4d) {
            goto label_2;
        }
        bl = (rax != 0x43415d53) ? 1 : 0;
        goto label_0;
label_7:
        if (rax == 0x73727279) {
            goto label_2;
        }
        if (rax <= 0x73727279) {
            if (rax == 0x64646178) {
                goto label_2;
            }
            if (rax <= 0x64646178) {
                if (rax == 0x62656572) {
                    goto label_2;
                }
                if (rax <= 0x62656572) {
                    bl = (rax != 0x62656570) ? 1 : 0;
                    goto label_0;
label_18:
                    if (rax == 0x11307854) {
                        goto label_2;
                    }
                    bl = (rax != 0x13661366) ? 1 : 0;
                    goto label_0;
label_20:
                    if (rax == 0x5346544e) {
                        goto label_2;
                    }
                    bl = (rax != 0x534f434b) ? 1 : 0;
                    goto label_0;
label_19:
                    if (rax == 0x58465342) {
                        goto label_2;
                    }
                    if (rax > 0x58465342) {
                        goto label_22;
                    }
                    if (rax == 0x565a4653) {
                        goto label_2;
                    }
                    bl = (rax != 0x58295829) ? 1 : 0;
                    goto label_0;
                }
                if (rax == 0x63677270) {
                    goto label_2;
                }
                bl = (rax != 0x64626720) ? 1 : 0;
                goto label_0;
            }
            if (rax == 0x6e736673) {
                goto label_2;
            }
            if (rax > 0x6e736673) {
                goto label_23;
            }
            if (rax == 0x67596969) {
                goto label_2;
            }
            bl = (rax != 0x68191122) ? 1 : 0;
            goto label_0;
        }
        edx = 0xc97e8168;
        if (rax == rdx) {
            goto label_2;
        }
        if (rax <= rdx) {
            rdx -= 0x385b192a;
            if (rax == rdx) {
                goto label_2;
            }
            if (rax <= rdx) {
                if (rax == 0x74726163) {
                    goto label_2;
                }
                rdx -= 0xb9f0f48;
                bl = (rax != rdx) ? 1 : 0;
                goto label_0;
label_23:
                if (rax == 0x73636673) {
                    goto label_2;
                }
                bl = (rax != 0x73717368) ? 1 : 0;
                goto label_0;
            }
            edx = 0x958458f6;
            if (rax == rdx) {
                goto label_2;
            }
            rdx += 0x1635c07e;
            bl = (rax != rdx) ? 1 : 0;
            goto label_0;
        }
        edx = 0xf2f52010;
        if (rax == rdx) {
            goto label_2;
        }
        if (rax <= rdx) {
            rdx -= 0x27f6d5ff;
            if (rax == rdx) {
                goto label_2;
            }
            rdx += 0x136037d3;
            bl = (rax != rdx) ? 1 : 0;
            goto label_0;
label_22:
            if (rax == 0x5a3c69f0) {
                goto label_2;
            }
            bl = (rax != 0x6165676c) ? 1 : 0;
            goto label_0;
        }
        edx = 0xf97cff8c;
        if (rax == rdx) {
            goto label_2;
        }
        rdx += 0x18e8bd;
        bl = (rax != rdx) ? 1 : 0;
        goto label_0;
    }
label_2:
    ebx = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4056e0 */
#include <stdint.h>
 
int64_t fcn_004056e0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    uint32_t var_7h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_28h;
    int64_t var_68h;
    int64_t var_70h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = 2;
    r13d = esi;
    rbx = rdi;
    rax = *(rdi);
    edi = 0x40c38a;
    r14d = *((rbx + 0x3c));
    rsi = rax;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    ecx = *((rbx + 0x36));
    *((rsp + 7)) = cl;
    bpl = (unknown > unknown) ? 1 : 0;
    ebp = (int32_t) bpl;
    if (ebp == 0) {
        goto label_8;
    }
    sil = (r13b == 0) ? 1 : 0;
    eax = 0;
    esi <<= 0xb;
    eax = fcn_00406780 (rax, 0, rdx, rcx);
    r12d = eax;
    eax = *((rbx + 0x3c));
    do {
        dl = (*((rbx + 0x38)) == 0xffffffff) ? 1 : 0;
        al = (eax == 0) ? 1 : 0;
        if (dl == al) {
            goto label_9;
        }
        r15d = *(0x00612386);
        eax = *(0x00612378);
        if (r15b != 0) {
            goto label_10;
        }
        *((rbx + 0x36)) = 1;
        if (al == 0) {
            goto label_11;
        }
label_3:
        if (r12d != 0xffffffff) {
            goto label_12;
        }
label_0:
        rax = errno_location ();
        r15d = *((rbx + 0x36));
        rbp = *(rbx);
        r13 = rax;
        eax = *(rax);
        *((rbx + 0x3c)) = eax;
        if (r15b == 0) {
            goto label_13;
        }
        if (eax != r14d) {
            goto label_14;
        }
label_2:
        rax = fcn_004047e0 (rbp);
        fcn_00404820 (r12d, rax);
        rax = fcn_004047e0 (*(rbx));
        fcn_00404820 (*((rbx + 0x38)), rax);
        *((rbx + 0x38)) = 0xffffffff;
label_1:
        return rax;
label_8:
        eax = r14d;
        r12d = 0;
    } while (1);
label_10:
    if (r12d == 0xffffffff) {
        goto label_15;
    }
    *((rbx + 0x36)) = 1;
    r8 = rsp + 0x10;
    if (al == 0) {
        goto label_16;
    }
label_4:
    rdx = r8;
    esi = r12d;
    edi = 1;
    eax = fxstat ();
    if (eax < 0) {
        goto label_0;
    }
    edx = *((rsp + 0x28));
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    eax -= 0x1000;
    if ((eax & 0xffffe000) != 0) {
        edx &= 0xb000;
        if (edx != 0x8000) {
            goto label_17;
        }
    }
    rax = fcn_004047e0 (*(rbx));
    rsi = rax;
    al = fcn_00405090 (r12d);
    *((rbx + 0x35)) = al;
    if (al != 0) {
        if (*(0x00612378) == 0) {
            goto label_18;
        }
    }
    r14d &= 0xfffffffd;
    *((rbx + 0x3c)) = 0;
    eax = *((rbx + 0x38));
    if (r14d == 0) {
        goto label_19;
    }
    if (eax != 0xffffffff) {
        goto label_20;
    }
    rax = fcn_004047e0 (*(rbx));
    rax = fcn_00409510 (4, rax);
    edx = 5;
    r14 = rax;
label_6:
    rax = dcgettext (0, "%s has become accessible");
    rcx = r14;
    eax = 0;
    error (0, 0, rax);
label_5:
    eax = 0xffffffff;
    r13d = (int32_t) r13b;
    *((rbx + 0x38)) = r12d;
    if (ebp == 0) {
        r13d = eax;
    }
    rax = *((rsp + 0x68));
    *((rbx + 0x34)) = 0;
    *((rbx + 8)) = 0;
    *((rbx + 0x10)) = rax;
    rax = *((rsp + 0x70));
    *((rbx + 0x40)) = r13d;
    *((rbx + 0x18)) = rax;
    rax = *((rsp + 0x10));
    *((rbx + 0x58)) = 0;
    *((rbx + 0x20)) = rax;
    rax = *((rsp + 0x18));
    *((rbx + 0x28)) = rax;
    eax = *((rsp + 0x28));
    *((rbx + 0x30)) = eax;
    rax = fcn_004047e0 (*(rbx));
    rcx = rax;
    al = fcn_00404c20 (r12d, 0, 0);
    goto label_1;
label_15:
    *((rbx + 0x36)) = 0;
    rbp = *(rbx);
    if (al == 0) {
        goto label_21;
    }
    rax = errno_location ();
    eax = *(rax);
    *((rbx + 0x3c)) = eax;
label_13:
    if (*((rsp + 7)) == 0) {
        goto label_2;
    }
    rax = fcn_004047e0 (rbp);
    rax = fcn_00409510 (4, rax);
    edx = 5;
    rax = dcgettext (0, "%s has become inaccessible");
    rcx = rbp;
    eax = 0;
    error (0, *((rbx + 0x3c)), rax);
    rbp = *(rbx);
    goto label_2;
label_14:
    rax = fcn_004047e0 (rbp);
    rax = fcn_004095e0 (0, 3, rax);
    rcx = rax;
    eax = 0;
    error (0, *(r13), 0x40d7fc);
    rbp = *(rbx);
    goto label_2;
label_11:
    r8 = rsp + 0x10;
    rsi = *(rbx);
    edi = 1;
    rdx = r8;
    eax = lxstat ();
    if (eax != 0) {
        goto label_3;
    }
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_3;
    }
    goto label_22;
label_12:
    r8 = rsp + 0x10;
    goto label_4;
label_16:
    rsi = *(rbx);
    rdx = r8;
    edi = 1;
    *((rsp + 8)) = r8;
    eax = lxstat ();
    r8 = *((rsp + 8));
    if (eax != 0) {
        goto label_4;
    }
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_4;
    }
    goto label_22;
label_19:
    rdi = *(rbx);
    if (eax == 0xffffffff) {
        goto label_23;
    }
    rax = *((rsp + 0x18));
    if (*((rbx + 0x28)) == rax) {
        rax = *((rsp + 0x10));
        if (*((rbx + 0x20)) != rax) {
            goto label_24;
        }
        rax = fcn_004047e0 (rdi);
        fcn_00404820 (r12d, rax);
        goto label_1;
    }
label_24:
    rax = fcn_004047e0 (rdi);
    rax = fcn_00409510 (4, rax);
    edx = 5;
    r14 = rax;
    rax = dcgettext (0, "%s has been replaced;  following new file");
    rcx = r14;
    eax = 0;
    error (0, 0, rax);
    rax = fcn_004047e0 (*(rbx));
    fcn_00404820 (*((rbx + 0x38)), rax);
    goto label_5;
label_17:
    *((rbx + 0x3c)) = 0xffffffff;
    *((rbx + 0x36)) = 0;
    if (r15b != 0) {
        if (*(0x006122a8) == 1) {
            rbp = *(rbx);
            *((rbx + 0x34)) = 0;
            if (*((rsp + 7)) == 0) {
                goto label_25;
            }
            r13d = 0x40ee9c;
        }
    } else {
        *((rbx + 0x34)) = 1;
        if (*((rsp + 7)) == 0) {
            if (r14d == 0xffffffff) {
                goto label_26;
            }
        }
        edx = 5;
        rax = dcgettext (0, "; giving up on this name");
        rbp = *(rbx);
        r13 = rax;
    }
label_7:
    rax = fcn_004047e0 (rbp);
    rax = fcn_00409510 (4, rax);
    edx = 5;
    rax = dcgettext (0, "%s has been replaced with an untailable file%s");
    r8 = r13;
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
label_26:
    rbp = *(rbx);
    goto label_2;
label_21:
    rdx = rsp + 0x10;
    rsi = rbp;
    edi = 1;
    eax = lxstat ();
    if (eax != 0) {
        goto label_0;
    }
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    if (eax != 0xa000) {
        goto label_0;
    }
label_22:
    *((rbx + 0x3c)) = 0xffffffff;
    *((rbx + 0x34)) = 1;
    rax = fcn_004047e0 (*(rbx));
    rax = fcn_00409510 (4, rax);
    edx = 5;
    rax = dcgettext (0, "%s has been replaced with an untailable symbolic link");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    rbp = *(rbx);
    goto label_2;
label_18:
    *((rbx + 0x3c)) = 0xffffffff;
    rax = fcn_004047e0 (*(rbx));
    rax = fcn_00409510 (4, rax);
    edx = 5;
    rax = dcgettext (0, "%s has been replaced with an untailable remote file");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    eax = 0x101;
    rbp = *(rbx);
    *((rbx + 0x34)) = ax;
    goto label_2;
label_23:
    rax = fcn_004047e0 (rdi);
    rax = fcn_00409510 (4, rax);
    edx = 5;
    esi = "%s has appeared;  following new file";
    r14 = rax;
    goto label_6;
label_9:
    assert_fail ("valid_file_spec (f)", "src/tail.c", 0x3c7, "recheck");
label_20:
    assert_fail ("f->fd == -1", "src/tail.c", 0x414, "recheck");
label_25:
    r14d++;
    r13d = 0x40ee9c;
    if (r14d != 0) {
        goto label_7;
    }
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x405d10 */
#include <stdint.h>
 
uint64_t fcn_00405d10 (int64_t arg1) {
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
    edx = 5;
    rax = dcgettext (0, "Print the last %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n");
    edx = 0xa;
    edi = 1;
    rsi = rax;
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
    rax = dcgettext (0, "\nMandatory arguments to long options are mandatory for short options too.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -c, --bytes=[+]NUM       output the last NUM bytes; or use -c +NUM to\n                             output starting with byte NUM of each file\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -f, --follow[={name|descriptor}]\n                           output appended data as the file grows;\n                             an absent option argument means 'descriptor'\n  -F                       same as --follow=name --retry\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "  -n, --lines=[+]NUM       output the last NUM lines, instead of the last %d;\n                             or use -n +NUM to output starting with line NUM\n      --max-unchanged-stats=N\n                           with --follow=name, reopen a FILE which has not\n                             changed size after N (default %d) iterations\n                             to see if it has been unlinked or renamed\n                             (this is the usual case of rotated log files);\n                             with inotify, this option is rarely useful\n");
    ecx = 5;
    edx = 0xa;
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --pid=PID            with -f, terminate after process ID, PID dies\n  -q, --quiet, --silent    never output headers giving file names\n      --retry              keep trying to open a file if it is inaccessible\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n                             (default 1.0) between iterations;\n                             with inotify and --pid=P, check process P at\n                             least once every N seconds\n  -v, --verbose            always output headers giving file names\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -z, --zero-terminated    line delimiter is NUL, not newline\n");
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
    rax = dcgettext (0, "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "With --follow (-f), tail defaults to following the file descriptor, which\nmeans that even if a tail'ed file is renamed, tail will continue to track\nits end.  This default behavior is not desirable when you really want to\ntrack the actual name of the file, not the file descriptor (e.g., log\nrotation).  Use --follow=name in that case.  That causes tail to track the\nnamed file in a way that accommodates renaming, removal and creation.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    *(rsp) = 0x40c2ff;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x40c379;
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
        esi = "tail";
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
        eax = strncmp (rax, 0x40c383, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x40c31b;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "tail";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40ee9c;
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
            eax = strncmp (rax, 0x40c383, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "tail";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x40c31b;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "tail";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406180 */
#include <stdint.h>
 
uint64_t fcn_00406180 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4062a0 */
#include <stdint.h>
 
uint64_t fcn_004062a0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
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
        rax = fcn_00409740 (1, rbp);
        rax = fcn_00409430 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x401d40)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406320 */
#include <stdint.h>
 
uint64_t fcn_00406320 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rax = fcn_00409760 (r12);
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
    rax = fcn_00409760 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406440 */
#include <stdint.h>
 
uint64_t fcn_00406440 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
    rax = fcn_00406180 (r12, rbx, rbp, r8);
    while (1) {
        return rax;
        fcn_004062a0 (r14, r12, rax);
        fcn_00406320 (rbx, rbp, r15);
invalid_funccall(); //        void (*r13)() ();
        rax = 0xffffffffffffffff;
    }
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406630 */
#include <stdint.h>
 
uint64_t fcn_00406630 (uint32_t arg1) {
    rdi = arg1;
    ebp = 0;
    rbx = rdi;
    bpl = (*(rdi) == 0x2f) ? 1 : 0;
    rax = fcn_004066f0 (rdi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4066f0 */
#include <stdint.h>
 
int64_t fcn_004066f0 (int64_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406780 */
#include <stdint.h>
 
uint64_t fcn_00406780 (int64_t arg_60h, int64_t arg3, int32_t oflag, const char * path) {
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
        fcn_004097e0 (eax);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4067d0 */
#include <stdint.h>
 
int64_t fcn_004067d0 (uint32_t arg1, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406890 */
#include <stdint.h>
 
uint64_t fcn_00406890 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    do {
        /* [13] -r-x section size 41880 named .text */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4068c0 */
#include <stdint.h>
 
uint64_t fcn_004068c0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rdx;
    r13d = ecx;
    r12 = rdi;
    rax = fcn_00406890 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4069e0 */
#include <stdint.h>
 
int64_t fcn_004069e0 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    if (rax != 0x40d880) {
        xmm0 = *((rax + 8));
        __asm ("comiss xmm0, dword [0x0040d894]");
        if (rax > 0x40d880) {
            xmm1 = *(0x0040d898);
            __asm ("comiss xmm1, xmm0");
            if (rax <= 0x40d880) {
                goto label_0;
            }
            xmm1 = *((rax + 0xc));
            __asm ("comiss xmm1, dword [0x0040d89c]");
            if (rax <= 0x40d880) {
                goto label_0;
            }
            xmm1 = *(rax);
            __asm ("comiss xmm1, dword [0x0040d8a0]");
            if (rax < 0x40d880) {
                goto label_0;
            }
            __asm ("addss xmm1, dword [0x0040d894]");
            xmm2 = *((rax + 4));
            __asm ("comiss xmm2, xmm1");
            if (rax <= 0x40d880) {
                goto label_0;
            }
            xmm3 = *(0x0040d8a4);
            __asm ("comiss xmm3, xmm2");
            if (rax < 0x40d880) {
                goto label_0;
            }
            __asm ("comiss xmm0, xmm1");
            eax = 1;
            if (rax > 0x40d880) {
                goto label_1;
            }
        }
label_0:
        *(rdi) = 0x40d880;
        eax = 0;
        return rax;
    }
    eax = 1;
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406a60 */
#include <stdint.h>
 
uint64_t fcn_00406a60 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
        rax = fcn_00406890 (rbp, r15);
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
    rax = fcn_00406890 (rbp, r15);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406bd0 */
#include <stdint.h>
 
int64_t fcn_00406bd0 (uint32_t arg1) {
    rdi = arg1;
    rax = *((rdi + 0x20));
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x406df0 */
#include <stdint.h>
 
uint64_t fcn_00406df0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r12 = rdi;
    rax = fcn_00406890 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407060 */
#include <stdint.h>
 
uint64_t fcn_00407060 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    eax = 0x406870;
    r15 = rsi;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    edi = 0x50;
    if (rdx == 0) {
        r12 = rax;
    }
    eax = 0x406880;
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
    al = fcn_004069e0 (rdi);
    if (al == 0) {
        goto label_0;
    }
    if (*((r15 + 0x10)) == 0) {
        goto label_6;
    }
label_1:
    rax = fcn_004067d0 (rbp, rsi);
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
        *((rax + 0x28)) = 0x40d880;
        al = fcn_004069e0 (rdi);
        xmm1 = *(0x0040d8a8);
    }
    if (rbp < 0) {
        goto label_7;
    }
label_2:
    xmm0 = 0;
    __asm ("cvtsi2ss xmm0, rbp");
label_3:
    __asm ("divss xmm0, xmm1");
    __asm ("comiss xmm0, dword [0x0040d8ac]");
    if (rbp >= 0) {
        goto label_0;
    }
    __asm ("comiss xmm0, dword [0x0040d8b0]");
    if (rbp < 0) {
        goto label_8;
    }
    __asm ("subss xmm0, dword [0x0040d8b0]");
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4072a0 */
#include <stdint.h>
 
int64_t fcn_004072a0 (uint32_t arg1) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407380 */
#include <stdint.h>
 
uint64_t fcn_00407380 (int64_t arg1, uint32_t arg2) {
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
            __asm ("comiss xmm0, dword [0x0040d8ac]");
            if (rsi >= 0) {
                goto label_4;
            }
            __asm ("comiss xmm0, dword [0x0040d8b0]");
            if (rsi < 0) {
                goto label_5;
            }
            __asm ("subss xmm0, dword [0x0040d8b0]");
            __asm ("cvttss2si rsi, xmm0");
            __asm ("btc rsi, 0x3f");
        }
label_2:
        rax = fcn_004067d0 (rsi, rsi);
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
        eax = fcn_00406a60 (rsp, rbp, 0);
        ebx = eax;
        if (al != 0) {
            goto label_7;
        }
        rax = *((rsp + 0x48));
        *((rbp + 0x48)) = rax;
        al = fcn_00406a60 (rbp, rsp, 1);
    } while (al == 0);
    al = fcn_00406a60 (rbp, rsp, 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407580 */
#include <stdint.h>
 
uint64_t fcn_00407580 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
    rax = fcn_004068c0 (rdi, rsi, rsp + 8, 0);
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
    fcn_004069e0 (rbx + 0x28);
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
    __asm ("comiss xmm0, dword [0x0040d8ac]");
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
    __asm ("comiss xmm0, dword [0x0040d8b0]");
    if (rcx >= 0) {
        goto label_17;
    }
    __asm ("cvttss2si rsi, xmm0");
label_7:
    al = fcn_00407380 (rbx, rsi);
    if (al == 0) {
        goto label_5;
    }
    rax = fcn_004068c0 (rbx, rbp, rsp + 8, 0);
    if (rax == 0) {
        goto label_0;
    }
    goto label_6;
label_17:
    __asm ("subss xmm0, dword [0x0040d8b0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_7;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407800 */
#include <stdint.h>
 
uint64_t fcn_00407800 (int64_t arg2) {
    int64_t var_8h;
    rsi = arg2;
    rbx = rsi;
    eax = fcn_00407580 (rdi, rsi, rsp + 8);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407840 */
#include <stdint.h>
 
uint64_t fcn_00407840 (uint32_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    rax = fcn_004068c0 (rdi, rsi, rsp + 8, 1);
    if (rax == 0) {
invalid_funccall(); //        void (*0x407872)() ();
    }
    rax = *((rsp + 8));
    *((rbx + 0x20))--;
    if (*(rax) != 0) {
    }
    rax = *((rbx + 0x18));
    rax--;
    *((rbx + 0x18)) = rax;
    if (rax < 0) {
        goto label_2;
    }
    xmm0 = 0;
    rdx = *((rbx + 0x28));
    __asm ("cvtsi2ss xmm0, rax");
    rax = *((rbx + 0x10));
    if (rax < 0) {
        goto label_3;
    }
label_0:
    xmm1 = 0;
    __asm ("cvtsi2ss xmm1, rax");
label_1:
    __asm ("mulss xmm1, dword [rdx]");
    __asm ("comiss xmm1, xmm0");
    if (rax <= 0) {
invalid_funccall(); //        void (*0x407872)() ();
    }
label_2:
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
        goto label_0;
    }
label_3:
    rcx = rax;
    eax &= 1;
    xmm1 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm1, rcx");
    __asm ("addss xmm1, xmm1");
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4078be */
#include <stdint.h>
 
int64_t fcn_004078be (void) {
    do {
label_0:
        rax = rbp;
        return rax;
        fcn_004069e0 (rbx + 0x28);
        rax = *((rbx + 0x10));
        rdx = *((rbx + 0x28));
        if (rax < 0) {
            goto label_4;
        }
        xmm0 = 0;
        __asm ("cvtsi2ss xmm0, rax");
label_2:
        rax = *((rbx + 0x18));
        if (rax < 0) {
            goto label_5;
        }
        xmm1 = 0;
        __asm ("cvtsi2ss xmm1, rax");
label_1:
        xmm2 = *(rdx);
        __asm ("mulss xmm2, xmm0");
        __asm ("comiss xmm2, xmm1");
    } while (rax <= 0);
    __asm ("mulss xmm0, dword [rdx + 4]");
    if (*((rdx + 0x10)) == 0) {
        __asm ("mulss xmm0, dword [rdx + 8]");
    }
    __asm ("comiss xmm0, dword [0x0040d8b0]");
    if (*((rdx + 0x10)) >= 0) {
        goto label_6;
    }
    __asm ("cvttss2si rsi, xmm0");
label_3:
    al = fcn_00407380 (rbx, rsi);
    if (al != 0) {
        goto label_0;
    }
    rdi = *((rbx + 0x48));
    if (rdi == 0) {
        goto label_7;
    }
    do {
        r12 = *((rdi + 8));
        rax = free (rdi);
        rdi = r12;
    } while (r12 != 0);
label_7:
    *((rbx + 0x48)) = 0;
    goto label_0;
label_5:
    rcx = rax;
    eax &= 1;
    xmm1 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm1, rcx");
    __asm ("addss xmm1, xmm1");
    goto label_1;
label_4:
    rcx = rax;
    eax &= 1;
    xmm0 = 0;
    rcx >>= 1;
    rcx |= rax;
    __asm ("cvtsi2ss xmm0, rcx");
    __asm ("addss xmm0, xmm0");
    goto label_2;
label_6:
    __asm ("subss xmm0, dword [0x0040d8b0]");
    __asm ("cvttss2si rsi, xmm0");
    __asm ("btc rsi, 0x3f");
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407a20 */
#include <stdint.h>
 
int64_t fcn_00407a20 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
        rdx_rax = rax * rsi;
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
        rdx_rax = rax * r9;
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407ac0 */
#include <stdint.h>
 
uint64_t fcn_00407ac0 (void) {
    char * * endptr;
    ebx = 0x31069;
    rax = getenv (0x40d8c0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407b40 */
#include <stdint.h>
 
uint64_t fcn_00407b40 (char ** arg1) {
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
            edi = 0x40d910;
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
        *(0x006123a0) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407be0 */
#include <stdint.h>
 
uint64_t fcn_00407be0 (int64_t arg1, int64_t arg2) {
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
        rax = fcn_0040ba70 ();
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
        eax = 0x40d916;
        ebx = 0x40d921;
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
        eax = 0x40d91a;
        ebx = 0x40d91d;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40ee6f;
    ebx = 0x40d914;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x407ce0 */
#include <stdint.h>
 
uint64_t fcn_00407ce0 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
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
    /* switch table (11 cases) at 0x40d980 */
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
    *((rsp + 0x50)) = 0x40ee6f;
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
        /* switch table (127 cases) at 0x40d9d8 */
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
    rax = fcn_00407ce0 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
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
    /* switch table (127 cases) at 0x40ddd0 */
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
    /* switch table (127 cases) at 0x40e1c8 */
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
    *((rsp + 0x50)) = 0x40ee6f;
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
        rax = fcn_0040b6b0 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
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
        *((rsp + 0x50)) = 0x40ee6f;
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
        *((rsp + 0x50)) = 0x40d914;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00407be0 (0x40d925, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00407be0 (0x40ee6f, r13d);
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
        *((rsp + 0x50)) = 0x40d914;
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
        *((rsp + 0x50)) = 0x40ee6f;
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
    *((rsp + 0x50)) = 0x40d914;
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
    rax = fcn_00407ce0 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
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
    *((rsp + 0x50)) = 0x40ee6f;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x408f10 */
#include <stdint.h>
 
uint64_t fcn_00408f10 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
        rbx = *(0x00612318);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x00612330) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x612320) {
        goto label_2;
    }
    rax = fcn_00409e30 (rbx, rsi);
    *(0x00612318) = rax;
    rbx = rax;
    do {
        rdi = *(0x00612330);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x00612330) = r12d;
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
        rax = fcn_00407ce0 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x6123c0) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_00409dd0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00407ce0 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00409e30 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x00612320]");
        rbx = rax;
        *(0x00612318) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_0040a020 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409430 */
#include <stdint.h>
 
int64_t fcn_00409430 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00408f10 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409510 */
#include <stdint.h>
 
void fcn_00409510 (int64_t arg1, int32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdx = rsi;
    esi = edi;
    edi = 0;
invalid_funccall(); //    return void (*0x409430)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4095b0 */
#include <stdint.h>
 
int64_t fcn_004095b0 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
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
        __asm ("movdqa xmm0, xmmword [0x006124c0]");
        __asm ("movdqa xmm1, xmmword [0x006124d0]");
        __asm ("movdqa xmm2, xmmword [0x006124e0]");
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
        fcn_00408f10 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4095e0 */
#include <stdint.h>
 
int64_t fcn_004095e0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
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
    fcn_00408f10 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409740 */
#include <stdint.h>
 
void fcn_00409740 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x6122e0;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x408f10)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409760 */
#include <stdint.h>
 
void fcn_00409760 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x6122e0;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x408f10)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409780 */
#include <stdint.h>
 
uint64_t fcn_00409780 (int64_t arg1, int64_t arg2, int64_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x4097e0 */
#include <stdint.h>
 
uint64_t fcn_004097e0 (uint32_t arg1) {
    rdi = arg1;
    ebx = edi;
    if (edi > 2) {
        eax = ebx;
        return eax;
    }
    eax = fcn_0040bfe0 (rdi, rsi);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409830 */
#include <stdint.h>
 
void fcn_00409830 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
        rax = dcgettext (0, 0x40e66b);
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
        /* switch table (10 cases) at 0x40e958 */
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
invalid_funccall(); //    void (*0x401dc0)() ();
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
invalid_funccall(); //    void (*0x401dc0)() ();
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
invalid_funccall(); //    void (*0x401dc0)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409c90 */
#include <stdint.h>
 
uint64_t fcn_00409c90 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
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
    fcn_00409830 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409dd0 */
#include <stdint.h>
 
uint64_t fcn_00409dd0 (int64_t arg1) {
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
    return fcn_0040a020 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409e30 */
#include <stdint.h>
 
uint64_t fcn_00409e30 (int64_t arg1, int64_t arg2) {
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
    return fcn_0040a020 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x409fd0 */
#include <stdint.h>
 
uint64_t fcn_00409fd0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_00409dd0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a020 */
#include <stdint.h>
 
uint64_t fcn_0040a020 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x006122c0), 0, 0x40d7fc);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a060 */
#include <stdint.h>
 
uint64_t fcn_0040a060 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
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
    eax = fcn_0040a260 (rdi, 0, edx, rsp + 8, r8);
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
        rax = fcn_00409760 (r12);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a130 */
#include <stdint.h>
 
void fcn_0040a130 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    fcn_0040a060 (rdi, 0xa, rsi, rdx, rcx, r8);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a160 */
#include <stdint.h>
 
uint64_t fcn_0040a160 (void) {
    int64_t var_8h;
    rax = fcn_0040b950 (rdi);
    *(rsp) = rax;
    *((rsp + 8)) = rdx;
    rax = errno_location ();
    rbx = rax;
    while (eax != 0) {
        if ((*(rbx) & 0xfffffffb) != 0) {
            goto label_0;
        }
        *(rbx) = 0;
        eax = fcn_0040b840 (rsp, 0);
    }
    return rax;
label_0:
    eax = 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a1c0 */
#include <stdint.h>
 
uint64_t fcn_0040a1c0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = rcx;
    r13 = rdx;
    rbx = rdi;
    rax = errno_location ();
    rsi = rsp + 8;
    rdi = rbx;
    r12 = rax;
    *(rax) = 0;
invalid_funccall(); //    void (*r14)() ();
    rcx = *((rsp + 8));
    if (rcx == rbx) {
        goto label_3;
    }
    if (rbp == 0) {
        goto label_4;
    }
    __asm ("ucomisd xmm0, qword [0x0040d790]");
    if (rbp != 0) {
        eax = 1;
        if (rbp == 0) {
            goto label_5;
        }
    }
label_0:
    al = (*(r12) != 0x22) ? 1 : 0;
label_2:
    if (rbp == 0) {
        goto label_1;
    }
label_5:
    *(rbp) = rcx;
    do {
label_1:
        *(r13) = xmm0;
        return rax;
label_4:
        eax = 0;
    } while (*(rcx) != 0);
    __asm ("ucomisd xmm0, qword [0x0040d790]");
    if (*(rcx) == 0) {
        goto label_0;
    }
    if (*(rcx) != 0) {
        goto label_0;
    }
    eax = 1;
    goto label_1;
label_3:
    eax = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a260 */
#include <stdint.h>
 
uint64_t fcn_0040a260 (int64_t arg1, int64_t arg2, uint32_t arg3, char ** arg4, int64_t arg5) {
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
        /* switch table (67 cases) at 0x40ea38 */
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
    /* switch table (54 cases) at 0x40ebb8 */
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a6a0 */
#include <stdint.h>
 
uint64_t fcn_0040a6a0 (int64_t arg_70h, int64_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4) {
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
            *(0x006124f8) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
        eax = fcn_0040a6a0 (rdi, 0, rdx, rcx, r8);
    } while (1);
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x006124f8) != 0xffffffff) {
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
    eax = fcn_0040a6a0 (ebp, 0, r12d, rcx, r8);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x006124f8) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a7e0 */
#include <stdint.h>
 
uint64_t fcn_0040a7e0 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40a8c0 */
#include <stdint.h>
 
int64_t fcn_0040a8c0 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40aee0 */
#include <stdint.h>
 
uint64_t fcn_0040aee0 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
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
        edi = 0x40c389;
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
            fcn_0040a7e0 (r12, rbx);
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
        fcn_0040a7e0 (r12, rbx);
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
    eax = fcn_0040a8c0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
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
    eax = fcn_0040a8c0 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b4b0 */
#include <stdint.h>
 
int32_t fcn_0040b4b0 (int64_t arg_10h) {
    eax = *(0x0061233c);
    *(0x00612500) = eax;
    eax = *(0x00612338);
    *(0x00612504) = eax;
    eax = *((rsp + 0x10));
    fcn_0040aee0 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0061233c) = edx;
    rdx = imp.__libc_start_main;
    *(0x00612540) = rdx;
    edx = imp.__libc_start_main;
    *(0x00612334) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b530 */
#include <stdint.h>
 
void fcn_0040b530 (void) {
    r9d = 0;
    fcn_0040b4b0 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b5b0 */
#include <stdint.h>
 
uint64_t fcn_0040b5b0 (int64_t arg1) {
    int64_t fildes;
    int64_t var_ch;
    int64_t var_10h;
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_b8h;
    rdi = arg1;
    esi = edi;
    edi = 1;
    rdx = rsp + 0x10;
    eax = fxstat ();
    ebx = eax;
    if (eax != 0) {
        goto label_0;
    }
    eax = *((rsp + 0x28));
    eax &= 0xf000;
    bl = (eax == 0x1000) ? 1 : 0;
    al = (eax == 0xc000) ? 1 : 0;
    bl |= al;
    if (bl != 0) {
        goto label_2;
    }
label_1:
    ebx = (int32_t) bl;
    do {
label_0:
        eax = ebx;
        return eax;
label_2:
        rdi = rsp + 8;
        eax = pipe ();
        ebx = eax;
    } while (eax != 0);
    esi = *((rsp + 8));
    rdx = rsp + 0xa0;
    edi = 1;
    eax = fxstat ();
    ebx = eax;
    rax = errno_location ();
    r12d = *(rax);
    close (*((rsp + 8)));
    close (*((rsp + 0xc)));
    if (ebx != 0) {
        goto label_3;
    }
    eax = *((rsp + 0xb8));
    rcx = *((rsp + 0xb0));
    if (*((rsp + 0x20)) > rcx) {
        goto label_0;
    }
    edx = *((rsp + 0x28));
    ebx = 0;
    eax &= 0xf000;
    edx &= 0xf000;
    bl = (edx == 0x1000) ? 1 : 0;
    if (eax == 0x1000) {
        goto label_0;
    }
    bl = (edx == 0xc000) ? 1 : 0;
    goto label_1;
label_3:
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b6b0 */
#include <stdint.h>
 
uint64_t fcn_0040b6b0 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
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
    al = fcn_0040ba10 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b730 */
#include <stdint.h>
 
int64_t fcn_0040b730 (uint32_t arg1, int64_t arg2, uint32_t arg3) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b840 */
#include <stdint.h>
 
int64_t fcn_0040b840 (int64_t arg1, int64_t arg2) {
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b8f0 */
#include <stdint.h>
 
uint64_t fcn_0040b8f0 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_0040bff0 (rbp);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40b950 */
#include <stdint.h>
 
int64_t fcn_0040b950 (int64_t arg3) {
    rdx = arg3;
    __asm ("comisd xmm0, xmmword [0x0040eea8]");
    if (unknown > unknown) {
        xmm1 = *(0x0040eeb0);
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
        __asm ("mulsd xmm0, qword [0x0040eeb8]");
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40ba10 */
#include <stdint.h>
 
uint64_t fcn_0040ba10 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40d7ff;
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
    edi = 0x40eec0;
    ecx = 6;
    rsi = rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (cl > 0) ? 1 : 0;
    al = (al != 0) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40ba70 */
#include <stdint.h>
 
uint64_t fcn_0040ba70 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40ee9c;
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
        r15d = 0x40ee9c;
label_2:
        *(0x00612538) = r15;
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
        r15d = 0x40ee9c;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x40c39b;
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
    fcn_0040bff0 (rbx);
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
        r15d = 0x40ee9c;
        rbx = rax;
        free (r15);
        fcn_0040bff0 (r13);
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40bfe0 */
#include <stdint.h>
 
int32_t fcn_0040bfe0 (int64_t arg1, int64_t arg4) {
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
invalid_funccall(); //    return void (*0x40a6a0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40bff0 */
#include <stdint.h>
 
uint64_t fcn_0040bff0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_0040c070 (rbx);
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
invalid_funccall(); //    void (*0x401a60)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40c070 */
#include <stdint.h>
 
uint32_t fcn_0040c070 (int64_t arg1) {
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
invalid_funccall(); //    void (*0x401c90)() ();
label_1:
    fcn_0040c0b0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40c0b0 */
#include <stdint.h>
 
int64_t fcn_0040c0b0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401d70)() ();
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
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40c180 */
#include <stdint.h>
 
int64_t fcn_0040c180 (void) {
    rax = 0x612288;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_tail.elf @ 0x40c198 */
#include <stdint.h>
 
void fcn_0040c198 (int64_t arg3) {
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
