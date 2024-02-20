#include "decompile_radare2_obfuscated.h"
/* r2dec pseudo code output */
/* nostrip @ 0x402300 */
#include <stdint.h>
 
void dl_relocate_static_pie (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x4023c0 */
#include <stdint.h>
 
uint64_t dbg_usage (int64_t arg1, char const * lc_messages, infomap const * map_prog, char const * node) {
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_18h;
    char * s2;
    char * s1;
    int32_t status;
    uint32_t var_38h;
    int64_t var_40h;
    rdi = arg1;
    rax = lc_messages;
    r13 = map_prog;
    r12 = node;
    /* void usage(int status); */
    *((rsp + 0x34)) = edi;
    eax = 0x3f8fa8fe;
    r14d = 0xb1f2bff3;
    if (edi != 0) {
        r14d = eax;
    }
    eax = 0x6423f425;
    goto label_9;
label_7:
    eax = 0x88caaa24;
label_9:
    r15d = 0x82f0957d;
    if (eax <= 0x3f8fa8fd) {
        goto label_0;
    }
    goto label_3;
label_1:
    rbx = stderr;
    edx = 5;
    rax = dcgettext (0, "Try '%s --help' for more information.\n");
    rdx = rax;
    rcx = program_name;
    esi = 1;
    eax = 0;
    rdi = rbx;
    fprintf_chk ();
    eax = 0xe9adce5a;
label_2:
    if (eax > 0x3f8fa8fd) {
        goto label_3;
    }
    do {
label_0:
        if (eax <= 0xb1f2bff2) {
            goto label_10;
        }
        if (eax == 0xb1f2bff3) {
            goto label_11;
        }
        if (eax != 0xe9adce5a) {
            goto label_12;
        }
        rbx = stderr;
        edx = 5;
        rax = dcgettext (0, "Try '%s --help' for more information.\n");
        rdx = rax;
        rcx = program_name;
        esi = 1;
        eax = 0;
        rdi = rbx;
        fprintf_chk ();
        eax = x;
        ecx = y;
        edx = rax - 1;
        edx *= eax;
        edx = ~edx;
        edx |= 0xfffffffe;
        al = (edx == 0xffffffff) ? 1 : 0;
        bl = (ecx < 0xa) ? 1 : 0;
        bl ^= al;
        esi = 0x48d103bc;
        if (ecx != 0xa) {
            esi = r15d;
        }
        eax = esi;
        if (edx == 0xffffffff) {
            eax = r15d;
        }
        if (ecx >= 0xa) {
            eax = esi;
        }
    } while (eax <= 0x3f8fa8fd);
    goto label_3;
label_10:
    if (eax != 0x82f0957d) {
        goto label_13;
    }
    eax = 0x88caaa24;
    if (eax <= 0x3f8fa8fd) {
        goto label_0;
    }
label_3:
    if (eax == 0x3f8fa8fe) {
        goto label_14;
    }
    if (eax == 0x48d103bc) {
        goto label_1;
    }
    eax = r14d;
    if (eax == 0x6423f425) {
        goto label_2;
    }
    goto label_12;
label_14:
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x48d103bc;
    if (ecx != 0xa) {
        edx = ebp;
    }
    eax = edx;
    if (eax == 0) {
        eax = ebp;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax <= 0x3f8fa8fd) {
        goto label_0;
    }
    goto label_3;
label_11:
    edx = 5;
    rax = dcgettext (0, "Usage: %s [OPTION]..\n");
    rcx = rax;
    rdx = program_name;
    edi = 1;
    eax = 0;
    rsi = rcx;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n");
    rsi = stdout;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "      --help     display this help and exit\n");
    rsi = stdout;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "      --version  output version information and exit\n");
    rsi = stdout;
    rdi = rax;
    fputs_unlocked ();
    eax = x_28;
    ecx = y_29;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    *(rsp + 0xa) = ((eax & edx) == 0) ? 1 : 0;
    *(rsp + 0xb) = (ecx < 0xa) ? 1 : 0;
    eax = 0x4605a73b;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
    if (eax >= 0xbe773e5) {
label_4:
        eax = edi;
    }
    dl ^= cl;
    if (eax != 0xbe773e5) {
        eax = esi;
    }
    do {
label_5:
        if (eax > 0xbe773e5) {
            goto label_8;
        }
label_6:
        if (eax > 0xb150a786) {
            goto label_15;
        }
        if (eax <= 0x976d8555) {
            goto label_16;
        }
        if (eax <= 0xa2fab0b4) {
            goto label_17;
        }
        if (eax == 0xa2fab0b5) {
            goto label_18;
        }
        if (eax == 0xa9e931d6) {
            goto label_19;
        }
    } while (eax != 0xaccf628f);
    eax = r15d;
    al &= 1;
    *((rsp + 0xf)) = al;
    eax = x_28;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0xb45a55e9;
    esi = 0x65ce8cb7;
    if (eax == 0) {
        eax = esi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    edi = 0xb45a55e9;
    goto label_4;
label_15:
    if (eax <= 0xd6bc5c51) {
        goto label_20;
    }
    if (eax <= 0xe84ccd15) {
        goto label_21;
    }
    if (eax == 0xe84ccd16) {
        goto label_22;
    }
    if (eax == 0xeb8d3910) {
        goto label_23;
    }
    if (eax != 0x37db858) {
        goto label_5;
    }
    edx = 5;
    rax = dcgettext (0, "Report any translation bugs to <https://translationproject.org/team/>\n");
    rsi = stdout;
    rdi = rax;
    fputs_unlocked ();
    eax = x_28;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x976d8556;
    esi = 0x5d50ab1d;
    if (eax == 0) {
        eax = esi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    edi = 0x976d8556;
    goto label_4;
label_16:
    if (eax > 0x965bac4b) {
        goto label_24;
    }
    if (eax == 0x91c35b21) {
        goto label_25;
    }
    if (eax != 0x93af4a2f) {
        goto label_5;
    }
    eax = x_28;
    ecx = x_28;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xeb8d3910;
    esi = 0x965bac4c;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    edi = 0xeb8d3910;
    goto label_4;
label_20:
    if (eax > 0xb6934070) {
        goto label_26;
    }
    if (eax == 0xb150a787) {
        goto label_27;
    }
    if (eax != 0xb45a55e9) {
        goto label_5;
    }
    eax = 0x65ce8cb7;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_17:
    if (eax == 0x976d8556) {
        goto label_28;
    }
    if (eax != 0x99008aa5) {
        goto label_5;
    }
    eax = 0x91c35b21;
    r13 = *((rsp + 0x40));
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_21:
    if (eax == 0xd6bc5c52) {
        goto label_29;
    }
    if (eax != 0xe787759e) {
        goto label_5;
    }
    rax = *((rsp + 0x28));
    eax = 0xd6bc5c52;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_24:
    if (eax == 0x965bac4c) {
        goto label_30;
    }
    if (eax != 0x96e2b2e1) {
        goto label_5;
    }
    eax = *((rsp + 0xe));
    eax = 0x93af4a2f;
    ecx = 0x4e91cc84;
    goto label_31;
label_26:
    if (eax == 0xb6934071) {
        goto label_32;
    }
    if (eax != 0xc7cc5185) {
        goto label_5;
    }
    eax = x_28;
    ecx = x_28;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0xe787759e;
    esi = 0xd6bc5c52;
    if (eax == 0) {
        eax = esi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    edi = 0xe787759e;
    goto label_4;
label_18:
    eax = strcmp ("whoami", *((rsp + 0x20)));
    *(rsp + 0xc) = (eax != 0) ? 1 : 0;
    eax = x_28;
    ecx = y_29;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x1c3f06af;
    esi = 0x7a7109d8;
    goto label_33;
label_19:
    eax = *((rsp + 0xf));
    eax = 0x7d49cde4;
    ecx = 0x594e312c;
    goto label_31;
label_22:
    r12 = *((rsp + 0x38));
    eax = 0xf46b0d8;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_23:
    edx = 5;
    rax = dcgettext (0, "Full documentation <%s%s>\n");
    rsi = rax;
    edi = 1;
    edx = "https://www.gnu.org/software/coreutils/";
    ecx = "whoami";
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
    rsi = rax;
    rax = *((rsp + 0x18));
    ecx = "whoami";
    ecx = 0x419096;
    eax = 0x4191b0;
    if (rax == rcx) {
        rcx = rax;
    }
    rdx = *((rsp + 0x18));
    edi = 1;
    eax = 0;
    printf_chk ();
    eax = 0x965bac4c;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_25:
    *((rsp + 0x10)) = r13;
    rax = *((rsp + 0x10));
    rax = *(rax);
    *((rsp + 0x20)) = rax;
    eax = 0xaccf628f;
    ecx = 0x6525b2a8;
    if (*((rsp + 0x20)) != 0) {
        eax = ecx;
    }
    r15d = 0;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_27:
    eax = *((rsp + 0xd));
    eax = 0x93af4a2f;
    ecx = 0xc7cc5185;
    if (al != 0) {
label_31:
        eax = ecx;
    }
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_28:
    edx = 5;
    rax = dcgettext (0, "Report any translation bugs to <https://translationproject.org/team/>\n");
    rsi = stdout;
    rdi = rax;
    fputs_unlocked ();
    eax = 0x37db858;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_29:
    eax = strncmp (*((rsp + 0x28)), 0x419232, 3);
    *(rsp + 0xe) = (eax != 0) ? 1 : 0;
    eax = x_28;
    ecx = y_29;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xe787759e;
    esi = 0x96e2b2e1;
    goto label_33;
label_30:
    edx = 5;
    rax = dcgettext (0, "Full documentation <%s%s>\n");
    rsi = rax;
    edi = 1;
    edx = "https://www.gnu.org/software/coreutils/";
    ecx = "whoami";
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
    rsi = rax;
    rax = *((rsp + 0x18));
    ecx = "whoami";
    ecx = 0x419096;
    eax = 0x4191b0;
    if (rax == rcx) {
        rcx = rax;
    }
    rdx = *((rsp + 0x18));
    edi = 1;
    eax = 0;
    printf_chk ();
    eax = x_28;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xeb8d3910;
    edi = 0x70fe7311;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    esi = 0xeb8d3910;
    goto label_34;
label_32:
    eax = 0x91c35b21;
    r13d = emit_ancillary_info.infomap;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
label_8:
    if (eax > 0x594e312b) {
        goto label_35;
    }
    if (eax <= 0x1c3f06ae) {
        goto label_36;
    }
    if (eax <= 0x4605a73a) {
        goto label_37;
    }
    if (eax == 0x4605a73b) {
        goto label_38;
    }
    if (eax == 0x49f0d145) {
        goto label_39;
    }
    if (eax != 0x4e91cc84) {
        goto label_5;
    }
    eax = x_28;
    ecx = x_28;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x976d8556;
    edi = 0x37db858;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    esi = 0x976d8556;
    goto label_34;
label_35:
    if (eax <= 0x70fe7310) {
        goto label_40;
    }
    if (eax > 0x7a7109d7) {
        goto label_41;
    }
    if (eax == 0x70fe7311) {
        goto label_7;
    }
    if (eax != 0x790b9f27) {
        goto label_5;
    }
    edx = 5;
    rax = dcgettext (0, "\n%s online help: <%s>\n");
    rsi = rax;
    edi = 1;
    edx = "GNU coreutils";
    ecx = "https://www.gnu.org/software/coreutils/";
    eax = 0;
    printf_chk ();
    rax = setlocale (5, 0);
    *((rsp + 0x28)) = rax;
    *(rsp + 0xd) = (*((rsp + 0x28)) != 0) ? 1 : 0;
    eax = x_28;
    ecx = y_29;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xbe773e6;
    edi = 0xb150a787;
    goto label_42;
label_36:
    if (eax > 0x13ccad5f) {
        goto label_43;
    }
    if (eax == 0xbe773e6) {
        goto label_44;
    }
    if (eax != 0xf46b0d8) {
        goto label_5;
    }
    *((rsp + 0x18)) = r12;
    eax = x_28;
    ecx = y_29;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xbe773e6;
    edi = 0x790b9f27;
    if (ecx != 0xa) {
label_42:
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_40:
    if (eax > 0x6525b2a7) {
        goto label_45;
    }
    if (eax == 0x594e312c) {
        goto label_46;
    }
    if (eax != 0x5d50ab1d) {
        goto label_5;
    }
    eax = 0x93af4a2f;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_37:
    if (eax == 0x1c3f06af) {
        goto label_47;
    }
    if (eax != 0x261dbb24) {
        goto label_5;
    }
    eax = x_28;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x49f0d145;
    esi = 0xb6934071;
    if (eax == 0) {
        eax = esi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    edi = 0x49f0d145;
    goto label_4;
label_41:
    if (eax == 0x7a7109d8) {
        goto label_48;
    }
    if (eax != 0x7d49cde4) {
        goto label_5;
    }
    rax = *((rsp + 0x10));
    rax = *((rax + 8));
    *((rsp + 0x38)) = rax;
    eax = 0xf46b0d8;
    ecx = 0xe84ccd16;
    if (*((rsp + 0x38)) != 0) {
        eax = ecx;
    }
    r12d = "whoami";
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_43:
    if (eax == 0x13ccad60) {
        goto label_49;
    }
    if (eax != 0x189eaf52) {
        goto label_5;
    }
    rax = *((rsp + 0x10));
    eax = 0x13ccad60;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_45:
    if (eax == 0x6525b2a8) {
        goto label_50;
    }
    if (eax != 0x65ce8cb7) {
        goto label_5;
    }
    eax = x_28;
    ecx = y_29;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xb45a55e9;
    esi = 0xa9e931d6;
    goto label_33;
label_38:
    ecx = *((rsp + 0xa));
    eax = *((rsp + 0xb));
    edx = ecx;
    dl ^= al;
    edx = 0x49f0d145;
    esi = 0x261dbb24;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (al != 0) {
        eax = esi;
    }
    if (cl == 0) {
        eax = edx;
    }
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_39:
    eax = 0x261dbb24;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_44:
    edx = 5;
    rax = dcgettext (0, "\n%s online help: <%s>\n");
    rsi = rax;
    edi = 1;
    edx = "GNU coreutils";
    ecx = "https://www.gnu.org/software/coreutils/";
    eax = 0;
    printf_chk ();
    setlocale (5, 0);
    eax = 0x790b9f27;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_46:
    eax = x_28;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x189eaf52;
    edi = 0x13ccad60;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    esi = 0x189eaf52;
    goto label_34;
label_47:
    rax = *((rsp + 0x20));
    eax = 0xa2fab0b5;
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_48:
    eax = 0xaccf628f;
    r15b = *((rsp + 0xc));
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_49:
    rax = *((rsp + 0x10));
    rax += 0x10;
    *((rsp + 0x40)) = rax;
    eax = x_28;
    ecx = y_29;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x189eaf52;
    esi = 0x99008aa5;
    if (ecx != 0xa) {
label_33:
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_50:
    eax = x_28;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x1c3f06af;
    edi = 0xa2fab0b5;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj_y_29) < 0xa) ? 1 : 0;
    esi = 0x1c3f06af;
    if (*(obj_y_29) >= 0xa) {
label_34:
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_29) != 0xa) {
        eax = edi;
    }
    if (eax <= 0xbe773e5) {
        goto label_6;
    }
    goto label_8;
label_13:
    if (eax != 0x88caaa24) {
INVALID_JUMP;
    }
    return exit (*((rsp + 0x34)));
}
/* r2dec pseudo code output */
/* nostrip @ 0x403030 */
#include <stdint.h>
 
int64_t dbg_main (int32_t argc, char ** argv, passwd * pw, uid_t uid) {
    int64_t var_3h;
    uid_t var_4h;
    int64_t var_8h;
    int64_t var_14h;
    char ** s;
    int64_t var_20h;
    rdi = argc;
    rsi = argv;
    r12 = pw;
    rax = uid;
    /* int main(int argc,char ** argv); */
    r14 = rsi;
    set_program_name (*(r14));
    setlocale (6, 0x419096);
    bindtextdomain (0x419147, "/home/yujeong/binary_gen/coreutils-8.31/tmp/_install/share/locale");
    textdomain (0x419147, rsi);
    edi = close_stdout;
    atexit ();
    eax = 0;
    parse_gnu_standard_options_only (ebp, r14, "whoami", "GNU coreutils", *(obj.Version), 1);
    eax = optind;
    *((rsp + 0x14)) = eax;
    eax = 0x3fca0bbe;
    r13d = 0xd3f54a99;
    r15d = 0xcc6465b4;
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_1:
    if (ecx >= 0xa) {
        eax = edx;
    }
    do {
label_0:
        if (eax <= 0xf1aac591) {
            goto label_3;
        }
label_2:
        if (eax > 0x261171bb) {
            goto label_5;
        }
        if (eax <= 0x134b4154) {
            goto label_6;
        }
        if (eax == 0x134b4155) {
            goto label_7;
        }
        if (eax == 0x24124a74) {
            goto label_8;
        }
    } while (1);
label_5:
    if (eax > 0x4013ab1e) {
        goto label_9;
    }
    if (eax == 0x261171bc) {
        goto label_10;
    }
    if (eax != 0x3fca0bbe) {
        goto label_0;
    }
    eax = *((rsp + 0x14));
    eax = 0x261171bc;
    ecx = 0x4013ab1f;
    goto label_4;
label_6:
    if (eax != 0xf1aac592) {
        goto label_11;
    }
    rax = *((rsp + 8));
    *(rsp + 3) = (*(rax) != 0) ? 1 : 0;
    eax = x_30;
    ecx = y_31;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x70249cd3;
    if (ecx != 0xa) {
        edx = r13d;
    }
    eax = edx;
    if (eax == 0) {
        eax = r13d;
    }
    goto label_1;
label_9:
    if (eax != 0x70249cd3) {
        goto label_12;
    }
    rax = *((rsp + 8));
    eax = 0xf1aac592;
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_7:
    edi = *((rsp + 4));
    rax = getpwuid ();
    *((rsp + 0x20)) = rax;
    eax = x_30;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xbea5c6e3;
    if (ecx == 0xffffffff) {
        eax = r15d;
    }
    dl = (*(obj_y_31) < 0xa) ? 1 : 0;
    esi = 0xbea5c6e3;
    if (*(obj_y_31) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_31) != 0xa) {
        eax = r15d;
    }
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_10:
    rax = errno_location ();
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    *(rax) = 0;
    eax = geteuid ();
    *((rsp + 4)) = eax;
    eax = *((rsp + 4));
    eax = 0xede910c2;
    ecx = 0xd7278333;
    if (eax == 0xffffffff) {
        eax = ecx;
    }
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_11:
    if (eax != 0x3dae373) {
        goto label_0;
    }
    goto label_13;
label_12:
    if (eax != 0x4013ab1f) {
        goto label_0;
    }
    goto label_14;
    if (eax != 0x4013ab1f) {
label_4:
        eax = ecx;
    }
    if (eax > 0xf1aac591) {
        goto label_2;
    }
label_3:
    if (eax > 0xd3f54a98) {
        goto label_15;
    }
    if (eax == 0xb78ce31b) {
        goto label_16;
    }
    if (eax == 0xbea5c6e3) {
        goto label_17;
    }
    if (eax != 0xcc6465b4) {
        goto label_0;
    }
    eax = 0xb78ce31b;
    r12 = *((rsp + 0x20));
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_15:
    if (eax == 0xd3f54a99) {
        goto label_18;
    }
    if (eax == 0xd7278333) {
        goto label_19;
    }
    if (eax != 0xede910c2) {
        goto label_0;
    }
    eax = x_30;
    ecx = y_31;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xbea5c6e3;
    esi = 0x134b4155;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    goto label_1;
label_16:
    *((rsp + 0x18)) = r12;
    eax = 0x3dae373;
    ecx = 0x24124a74;
    goto label_4;
label_17:
    edi = *((rsp + 4));
    getpwuid ();
    eax = 0x134b4155;
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_18:
    eax = *((rsp + 3));
    eax = 0xede910c2;
    ecx = 0xb78ce31b;
    if (al != 0) {
        eax = ecx;
    }
    r12d = 0;
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_19:
    eax = x_30;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x70249cd3;
    esi = 0xf1aac592;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj_y_31) < 0xa) ? 1 : 0;
    edi = 0x70249cd3;
    if (*(obj_y_31) >= 0xa) {
        eax = edi;
    }
    dl ^= cl;
    if (*(obj_y_31) != 0xa) {
        eax = esi;
    }
    if (eax > 0xf1aac591) {
        goto label_2;
    }
    goto label_3;
label_8:
    rax = *((rsp + 0x18));
    eax = puts (*(rax));
    eax = 0;
    return rax;
label_13:
    rax = *((rsp + 8));
    ebx = *(rax);
    edx = 5;
    rax = dcgettext (0, "cannot find name for user ID %lu");
    ecx = *((rsp + 4));
    eax = 0;
    error (1, ebx, rax);
label_14:
    edx = 5;
    rax = dcgettext (0, "extra operand %s");
    rax = *(obj.optind);
    rax = quote (*((r14 + rax*8)));
    rcx = rax;
    eax = 0;
    error (0, 0, rbp);
    dbg_usage (1);
}
/* r2dec pseudo code output */
/* nostrip @ 0x403480 */
#include <stdint.h>
 
void dbg_close_stdout_set_file_name (char const * file) {
    rdi = file;
    /* void close_stdout_set_file_name(char const * file); */
    *(obj.file_name) = rdi;
}
/* r2dec pseudo code output */
/* nostrip @ 0x403490 */
#include <stdint.h>
 
int32_t dbg_close_stdout_set_ignore_EPIPE (void) {
    /* void close_stdout_set_ignore_EPIPE(_Bool ignore); */
    eax = x_3;
    r8d = y_4;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    cl = (r8d < 0xa) ? 1 : 0;
    cl ^= al;
    esi = 0xcda20b5d;
    ecx = 0xa1c10fd0;
    if (r8d != 0xa) {
        ecx = esi;
    }
    *(rsp - 2) = (edx == 0xffffffff) ? 1 : 0;
    if (edx != 0xffffffff) {
        esi = ecx;
    }
    *(rsp - 1) = (r8d < 0xa) ? 1 : 0;
    if (r8d >= 0xa) {
        esi = ecx;
    }
    edx = 0x18960322;
    r8d = 0xe6c50566;
    if (edx > 0xe6c50565) {
        goto label_1;
    }
    while (edx == 0xa1c10fd0) {
        *(obj.ignore_EPIPE) = dil;
        edx = 0xe6c50566;
        if (edx > 0xe6c50565) {
            goto label_1;
        }
INVALID_JUMP;
    }
    goto label_2;
    do {
label_1:
        if (edx == 0xe6c50566) {
            goto label_3;
        }
        if (edx != 0x18960322) {
            goto label_4;
        }
        eax = *((rsp - 2));
        edx = *((rsp - 1));
        ecx = eax;
        cl ^= dl;
        ecx = 0xa1c10fd0;
        if (edx != 0x18960322) {
            ecx = r8d;
        }
        edx = ecx;
        if (dl != 0) {
            edx = r8d;
        }
        if (al == 0) {
            edx = ecx;
        }
    } while (edx > 0xe6c50565);
    goto label_0;
label_3:
    *(obj.ignore_EPIPE) = dil;
    edx = esi;
    if (edx > 0xe6c50565) {
        goto label_1;
    }
    goto label_0;
label_2:
    if (edx == 0xcda20b5d) {
        return eax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x403590 */
#include <stdint.h>
 
uint64_t dbg_close_stdout (char const * write_error) {
    int64_t var_1h;
    int64_t var_2h;
    int64_t var_3h;
    int64_t errname;
    int64_t var_8h;
    uint32_t var_10h;
    rax = write_error;
    /* void close_stdout(); */
    eax = x_5;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    rsp = ((eax & ecx) == 0) ? 1 : 0;
    eax = y_6;
    *(rsp + 1) = (eax < 0xa) ? 1 : 0;
    r12d = 0xbe1291d8;
    r13d = 0x10f61754;
    r14d = 0xbce3467d;
    r15d = 0x1ab3cb76;
    if (r12d > 0x1ab3cb75) {
        goto label_4;
    }
    goto label_0;
label_2:
    if (ecx >= 0xa) {
        r12d = edx;
    }
    do {
label_1:
        if (r12d > 0x1ab3cb75) {
            goto label_4;
        }
label_0:
        if (r12d <= 0xe80cbd4d) {
            goto label_5;
        }
        if (r12d > 0xcb28fb0) {
            goto label_6;
        }
        if (r12d == 0xe80cbd4e) {
            goto label_7;
        }
    } while (r12d != 0xf9da853f);
    r12d = 0x1ab3cb76;
    if (r12d <= 0x1ab3cb75) {
        goto label_0;
    }
    goto label_4;
label_5:
    if (r12d <= 0xbce3467c) {
        goto label_8;
    }
    if (r12d == 0xbce3467d) {
        goto label_9;
    }
    if (r12d != 0xbe1291d8) {
        goto label_1;
    }
    eax = *(rsp);
    ecx = *((rsp + 1));
    edx = eax;
    dl ^= cl;
    r12d = 0x4fb049f0;
    if (cl != 0) {
        r12d = r13d;
    }
    eax = 0x4fb049f0;
    if (al == 0) {
        r12d = eax;
    }
    if (dl != 0) {
        r12d = r13d;
    }
    if (r12d <= 0x1ab3cb75) {
        goto label_0;
    }
    goto label_4;
label_6:
    if (r12d == 0xcb28fb1) {
        goto label_10;
    }
    if (r12d != 0x10f61754) {
        goto label_1;
    }
    eax = close_stream (*(obj.stdout));
    *(rsp + 2) = (eax != 0) ? 1 : 0;
    eax = x_5;
    ecx = y_6;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4fb049f0;
    if (ecx != 0xa) {
        edx = ebp;
    }
    r12d = edx;
    if (eax == 0) {
        r12d = ebp;
    }
    goto label_2;
label_8:
    if (r12d != 0x8bd0148e) {
        goto label_11;
    }
    r12d = 0x4671751a;
    eax = 0x459dbd79;
    goto label_3;
label_7:
    rax = quotearg_colon (*((rsp + 0x10)));
    rcx = rax;
    r8 = *((rsp + 8));
    eax = 0;
    error (0, *((rsp + 4)), "%s: %s");
    goto label_12;
label_9:
    al = *((rsp + 3));
    r12d = 0x4671751a;
    eax = 0x2f11209d;
    goto label_3;
label_10:
    rcx = *((rsp + 8));
    eax = 0;
    eax = error (0, *((rsp + 4)), 0x419355);
label_12:
    r12d = 0x8e42070a;
    if (r12d <= 0x1ab3cb75) {
        goto label_0;
    }
    goto label_4;
label_11:
    if (r12d != 0x8e42070a) {
        goto label_1;
    }
    goto label_13;
    if (r12d != 0x8e42070a) {
label_3:
        r12d = eax;
    }
    if (r12d <= 0x1ab3cb75) {
        goto label_0;
    }
label_4:
    if (r12d <= 0x46717519) {
        goto label_14;
    }
    if (r12d > 0x4fb049ef) {
        goto label_15;
    }
    if (r12d == 0x4671751a) {
        goto label_16;
    }
    if (r12d != 0x4938c210) {
        goto label_1;
    }
    al = *((rsp + 2));
    r12d = 0x2f11209d;
    eax = 0x8bd0148e;
    goto label_3;
label_14:
    if (r12d <= 0x2f11209c) {
        goto label_17;
    }
    if (r12d == 0x2f11209d) {
        goto label_18;
    }
    if (r12d != 0x459dbd79) {
        goto label_1;
    }
    eax = x_5;
    ecx = y_6;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xf9da853f;
    if (ecx != 0xa) {
        edx = r15d;
    }
    r12d = edx;
    if (eax == 0) {
        r12d = r15d;
    }
    goto label_2;
label_15:
    if (r12d == 0x4fb049f0) {
        goto label_19;
    }
    if (r12d == 0x670b89cb) {
        goto label_20;
    }
    goto label_1;
label_17:
    if (r12d != 0x1ab3cb76) {
        goto label_21;
    }
    rax = errno_location ();
    *(rsp + 3) = (*(rax) == 0x20) ? 1 : 0;
    eax = x_5;
    ecx = y_6;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    eax = 0xf9da853f;
    if (ecx != 0xa) {
        eax = r14d;
    }
    r12d = eax;
    if (edx == 0xffffffff) {
        r12d = r14d;
    }
    if (ecx >= 0xa) {
        r12d = eax;
    }
    if (r12d <= 0x1ab3cb75) {
        goto label_0;
    }
    goto label_4;
label_16:
    edx = 5;
    rax = dcgettext (0, "write error");
    *((rsp + 8)) = rax;
    rax = file_name;
    *((rsp + 0x10)) = rax;
    r12d = 0xcb28fb1;
    eax = 0xe80cbd4e;
    if (*((rsp + 0x10)) != 0) {
        r12d = eax;
    }
    rax = errno_location ();
    eax = *(rax);
    *((rsp + 4)) = eax;
    if (r12d <= 0x1ab3cb75) {
        goto label_0;
    }
    goto label_4;
label_18:
    eax = close_stream (*(obj.stderr));
    r12d = 0x670b89cb;
    eax = 0x27d72348;
    goto label_3;
label_19:
    close_stream (*(obj.stdout));
    r12d = 0x10f61754;
    if (r12d <= 0x1ab3cb75) {
        goto label_0;
    }
    goto label_4;
label_21:
    if (r12d != 0x27d72348) {
        goto label_1;
    }
    exit (*(obj.exit_failure));
label_20:
    return rax;
label_13:
    return exit (*(obj.exit_failure));
}
/* r2dec pseudo code output */
/* nostrip @ 0x4039d0 */
#include <stdint.h>
 
uint64_t dbg_parse_long_options (int64_t arg_130h, int64_t arg1, int64_t arg10, int64_t arg11, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, char ** argv, int32_t c, void (*usage_func)()) {
    int32_t argc;
    int64_t var_4h;
    char const * command_name;
    char const * package;
    char const * version;
    va_list authors;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
    int64_t var_e0h;
    rdi = arg1;
    xmm3 = arg10;
    xmm4 = arg11;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    r12 = argv;
    rax = c;
    r13 = usage_func;
    /* void parse_long_options(int argc,char ** argv,char const * command_name,char const * package,char const * version,void (*usage_func)(),va_args ..); */
    r13 = r9;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rcx;
    *((rsp + 8)) = rdx;
    r12 = rsi;
    if (al != 0) {
        *((rsp + 0x70)) = xmm0;
        *((rsp + 0x80)) = xmm1;
        *((rsp + 0x90)) = xmm2;
        *((rsp + 0xa0)) = xmm3;
        *((rsp + 0xb0)) = xmm4;
        *((rsp + 0xc0)) = xmm5;
        *((rsp + 0xd0)) = xmm6;
        *((rsp + 0xe0)) = xmm7;
    }
    eax = opterr;
    *((rsp + 4)) = eax;
    *(obj.opterr) = 0;
    r14d = 0x499e8f4e;
    eax = 0xa692d4c8;
    if (ebp != 2) {
        r14d = eax;
    }
    eax = 0x6e4a73ca;
    ebx = 0x487a1618;
    r15d = 0xd71caf36;
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_2:
    eax = 0xa692d4c8;
    do {
label_1:
        if (eax <= 0xe50b8656) {
            goto label_3;
        }
label_0:
        if (eax <= 0x487a1617) {
            goto label_4;
        }
        if (eax <= 0x6e4a73c9) {
            goto label_5;
        }
        if (eax == 0x7d71aa34) {
            goto label_6;
        }
    } while (eax != 0x6e4a73ca);
    eax = r14d;
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_4:
    if (eax == 0xe50b8657) {
        goto label_7;
    }
    if (eax == 0x402dd83) {
        goto label_8;
    }
    if (eax != 0x39fe9022) {
        goto label_1;
    }
    eax = *(rsp);
    eax = 0x9f218b2b;
    ecx = 0xb4bcbba4;
    if (eax < 0x76) {
        eax = ecx;
    }
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_5:
    if (eax != 0x499e8f4e) {
        goto label_9;
    }
    edx = 0x419358;
    ecx = long_options;
    r8d = 0;
    edi = ebp;
    rsi = r12;
    eax = getopt_long ();
    *(rsp) = eax;
    eax = *(rsp);
    eax = 0xa692d4c8;
    ecx = 0x7d71aa34;
    if (eax != 0xffffffff) {
        eax = ecx;
    }
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_6:
    eax = 0x39fe9022;
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_7:
    eax = *((rsp + 4));
    *(obj.opterr) = eax;
    *(obj.optind) = 0;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    ebx = 0x487a1618;
    esi = 0xaca34a68;
    if (ecx != 0xa) {
        esi = r15d;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = r15d;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_8:
    edi = 0;
invalid_funccall(); //    eax = void (*r13)() ();
    goto label_2;
label_9:
    if (eax != 0x487a1618) {
        goto label_1;
    }
    goto label_10;
label_3:
    if (eax > 0xb4bcbba3) {
        goto label_11;
    }
    if (eax == 0x9f218b2b) {
        goto label_12;
    }
    if (eax == 0xa692d4c8) {
        goto label_13;
    }
    if (eax != 0xaca34a68) {
        goto label_1;
    }
    eax = *((rsp + 4));
    *(obj.opterr) = eax;
    *(obj.optind) = 0;
    eax = 0xe50b8657;
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_11:
    if (eax == 0xb4bcbba4) {
        goto label_14;
    }
    if (eax == 0xc95b8527) {
        goto label_2;
    }
    if (eax == 0xd71caf36) {
        goto label_15;
    }
    goto label_1;
label_12:
    eax = *(rsp);
    eax = 0xc95b8527;
    if (eax == 0x76) {
        eax = ebx;
    }
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_13:
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xaca34a68;
    esi = 0xe50b8657;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    edi = 0xaca34a68;
    if (*(obj.y) >= 0xa) {
        eax = edi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = esi;
    }
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_14:
    eax = *(rsp);
    eax = 0xc95b8527;
    ecx = 0x402dd83;
    if (eax == 0x68) {
        eax = ecx;
    }
    if (eax > 0xe50b8656) {
        goto label_0;
    }
    goto label_3;
label_15:
    return eax;
label_10:
    rax = rsp + 0x40;
    *((rsp + 0x30)) = rax;
    rax = rsp + 0x130;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x24)) = 0x30;
    *((rsp + 0x20)) = 0x30;
    r8 = rsp + 0x20;
    version_etc_va (*(obj.stdout), *((rsp + 8)), *((rsp + 0x10)), *((rsp + 0x18)));
    return exit (0);
}
/* r2dec pseudo code output */
/* nostrip @ 0x403d50 */
#include <stdint.h>
 
uint64_t dbg_parse_gnu_standard_options_only (int64_t arg_130h, int64_t arg_138h, int64_t arg10, int64_t arg11, int64_t arg4, int64_t arg5, int64_t arg7, int64_t arg8, int64_t arg9, int32_t argc, char ** argv, int32_t c, char const * optstring, _Bool scan_all, void (*usage_func)()) {
    int64_t var_4h;
    char const * command_name;
    char const * package;
    char const * version;
    va_list authors;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_90h;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
    int64_t var_e0h;
    xmm3 = arg10;
    xmm4 = arg11;
    rcx = arg4;
    r8 = arg5;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    rdi = argc;
    rsi = argv;
    rax = c;
    rdx = optstring;
    r9 = scan_all;
    r14 = usage_func;
    /* void parse_gnu_standard_options_only(int argc,char ** argv,char const * command_name,char const * package,char const * version,_Bool scan_all,void (*usage_func)(),va_args ..); */
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rcx;
    *((rsp + 8)) = rdx;
    if (al != 0) {
        *((rsp + 0x70)) = xmm0;
        *((rsp + 0x80)) = xmm1;
        *((rsp + 0x90)) = xmm2;
        *((rsp + 0xa0)) = xmm3;
        *((rsp + 0xb0)) = xmm4;
        *((rsp + 0xc0)) = xmm5;
        *((rsp + 0xd0)) = xmm6;
        *((rsp + 0xe0)) = xmm7;
    }
    r14 = *((rsp + 0x130));
    eax = opterr;
    *((rsp + 4)) = eax;
    *(obj.opterr) = 1;
    eax = 0x419096;
    edx = 0x419358;
    if (r9b != 0) {
        rdx = rax;
    }
    ecx = long_options;
    r8d = 0;
    eax = getopt_long ();
    *(rsp) = eax;
    eax = 0x8173f217;
    ebx = 0xa98eba6a;
    r15d = 0xc3074dd4;
    r12d = 0x31da8ef7;
    r13d = 0xe3e8d7d2;
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_2:
    edi = *(obj.exit_failure);
invalid_funccall(); //    void (*r14)() ();
    eax = 0x2d901418;
    do {
label_0:
        if (eax > 0x2062e28e) {
            goto label_3;
        }
label_1:
        if (eax <= 0xafaf7b8e) {
            goto label_4;
        }
        if (eax > 0xd03ffbd1) {
            goto label_5;
        }
        if (eax == 0xafaf7b8f) {
            goto label_6;
        }
        if (eax == 0xc3074dd4) {
            goto label_7;
        }
    } while (1);
label_4:
    if (eax == 0x8173f217) {
        goto label_8;
    }
    if (eax == 0xa98eba6a) {
        goto label_9;
    }
    if (eax != 0xada5c449) {
        goto label_0;
    }
    eax = *(rsp);
    eax = 0xafaf7b8f;
    ecx = 0x35676d02;
    if (eax < 0x76) {
        eax = ecx;
    }
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_5:
    if (eax != 0xe3e8d7d2) {
        goto label_10;
    }
    edi = 0;
invalid_funccall(); //    void (*r14)() ();
label_7:
    eax = 0x6aeca50b;
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_6:
    eax = *(rsp);
    eax = 0x2062e28f;
    ecx = 0xd03ffbd2;
    if (eax == 0x76) {
        eax = ecx;
    }
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_8:
    eax = *(rsp);
    eax = 0x6aeca50b;
    if (eax != 0xffffffff) {
        eax = ebx;
    }
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_9:
    eax = 0xada5c449;
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_10:
    if (eax != 0xd03ffbd2) {
        goto label_0;
    }
    goto label_11;
label_3:
    if (eax > 0x35676d01) {
        goto label_12;
    }
    if (eax == 0x2062e28f) {
        goto label_13;
    }
    if (eax == 0x2d901418) {
        goto label_14;
    }
    if (eax == 0x31da8ef7) {
        goto label_2;
    }
    goto label_0;
label_12:
    if (eax == 0x35676d02) {
        goto label_15;
    }
    if (eax == 0x6aeca50b) {
        goto label_16;
    }
    if (eax != 0x725a14ec) {
        goto label_0;
    }
    eax = x_4;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x31da8ef7;
    if (ecx == 0xffffffff) {
        eax = ebp;
    }
    dl = (*(obj_y_5) < 0xa) ? 1 : 0;
    if (*(obj_y_5) >= 0xa) {
        eax = r12d;
    }
    dl ^= cl;
    if (*(obj_y_5) != 0xa) {
        eax = ebp;
    }
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_13:
    eax = 0x725a14ec;
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_14:
    edi = *(obj.exit_failure);
invalid_funccall(); //    void (*r14)() ();
    eax = x_4;
    ecx = y_5;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    ebx = 0xa98eba6a;
    esi = 0x31da8ef7;
    if (ecx != 0xa) {
        esi = r15d;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = r15d;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_15:
    eax = *(rsp);
    eax = 0x2062e28f;
    if (eax == 0x68) {
        eax = r13d;
    }
    if (eax <= 0x2062e28e) {
        goto label_1;
    }
    goto label_3;
label_16:
    eax = *((rsp + 4));
    *(obj.opterr) = eax;
    return eax;
label_11:
    rax = rsp + 0x40;
    *((rsp + 0x30)) = rax;
    rax = rsp + 0x138;
    *((rsp + 0x28)) = rax;
    *((rsp + 0x24)) = 0x30;
    *((rsp + 0x20)) = 0x30;
    r8 = rsp + 0x20;
    version_etc_va (*(obj.stdout), *((rsp + 8)), *((rsp + 0x10)), *((rsp + 0x18)));
    return exit (0);
}
/* r2dec pseudo code output */
/* nostrip @ 0x4040a0 */
#include <stdint.h>
 
uint64_t dbg_set_program_name (char ** arg1, char const * argv0, char const * base) {
    int64_t var_6h;
    int64_t var_7h;
    char * s1;
    int64_t var_10h;
    rdi = arg1;
    r14 = argv0;
    rax = base;
    /* void set_program_name(char const * argv0); */
    r14 = rdi;
    eax = 0xd8a6aa45;
    if (r14 == 0) {
    }
    eax = 0xa8634a64;
    ebx = 0xc1d633c3;
    r13d = 0xbe5d7652;
    r15d = 0x9e18b984;
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
    if (eax >= 0xedc1ef50) {
label_2:
        eax = edi;
    }
    dl ^= cl;
    if (eax != 0xedc1ef50) {
        eax = esi;
    }
    do {
label_1:
        if (eax <= 0xedc1ef50) {
            goto label_3;
        }
label_0:
        if (eax > 0xf6e6e11) {
            goto label_4;
        }
        if (eax > 0x6aca80a) {
            goto label_5;
        }
        if (eax == 0xedc1ef51) {
            goto label_6;
        }
    } while (eax != 0xff6436c7);
    eax = *((rsp + 7));
    eax = 0x73b89ac;
    ecx = 0x67cd3273;
    if (al != 0) {
        eax = ecx;
    }
    r12 = *((rsp + 8));
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_4:
    if (eax > 0x569aa6ed) {
        goto label_7;
    }
    if (eax == 0xf6e6e12) {
        goto label_8;
    }
    if (eax != 0x4128bae1) {
        goto label_1;
    }
    rax = strrchr (r14, 0x2f);
    rax = rax + 1;
    if (rax == 0) {
        rax = r14;
    }
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    rcx = 0x629d2043f6d6ec11;
    rax -= rcx;
    rax -= r14;
    rax += rcx;
    *(rsp + 6) = (rax > 6) ? 1 : 0;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x9e9b56b2;
    if (eax == 0) {
        eax = r13d;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0x9e9b56b2;
    if (*(obj.y) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = r13d;
    }
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_5:
    if (eax == 0x6aca80b) {
        goto label_9;
    }
    if (eax == 0x73b89ac) {
        goto label_10;
    }
    goto label_1;
label_7:
    if (eax == 0x569aa6ee) {
        goto label_11;
    }
    if (eax != 0x67cd3273) {
        goto label_1;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x569aa6ee;
    if (eax == 0) {
        eax = r15d;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0x569aa6ee;
    if (*(obj.y) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = r15d;
    }
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_6:
    rax = *((rsp + 8));
    eax = 0xd426f1cb;
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_8:
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x9e9b56b2;
    esi = 0x4128bae1;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    edi = 0x9e9b56b2;
    goto label_2;
label_9:
    eax = 0x73b89ac;
    r12 = *((rsp + 0x10));
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_11:
    rax = *((rsp + 8));
    rax += 3;
    *(obj.__progname) = rax;
    eax = 0x9e18b984;
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
label_3:
    if (eax > 0xbe5d7651) {
        goto label_12;
    }
    if (eax > 0x9e9b56b1) {
        goto label_13;
    }
    if (eax == 0x8abeba77) {
        goto label_14;
    }
    if (eax != 0x9e18b984) {
        goto label_1;
    }
    rax = *((rsp + 8));
    rax += 3;
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x10));
    *(obj.__progname) = rax;
    eax = x;
    ecx = x;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x569aa6ee;
    esi = 0x6aca80b;
    if (eax == 0) {
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    edi = 0x569aa6ee;
    goto label_2;
label_12:
    if (eax > 0xd426f1ca) {
        goto label_15;
    }
    if (eax == 0xbe5d7652) {
        goto label_16;
    }
    if (eax != 0xc1d633c3) {
        goto label_1;
    }
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    ebx = 0xc1d633c3;
    edx = 0xedc1ef51;
    esi = 0xd426f1cb;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_13:
    if (eax == 0x9e9b56b2) {
        goto label_17;
    }
    if (eax != 0xa8634a64) {
        goto label_1;
    }
    eax = ebp;
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_15:
    if (eax != 0xd426f1cb) {
        goto label_18;
    }
    eax = strncmp (*((rsp + 8)), 0x419410, 3);
    *(rsp + 7) = (eax == 0) ? 1 : 0;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xedc1ef51;
    edi = 0xff6436c7;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0xedc1ef51;
    if (*(obj.y) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = edi;
    }
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_14:
    rdi += 0xfffffffffffffff9;
    eax = strncmp (*((rsp + 8)), "/.libs/", 7);
    eax = 0x73b89ac;
    if (eax == 0) {
        eax = ebx;
    }
    goto label_19;
label_16:
    eax = *((rsp + 6));
    eax = 0x73b89ac;
    ecx = 0x8abeba77;
    if (al != 0) {
        eax = ecx;
    }
label_19:
    r12 = r14;
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_17:
    eax = 0x4128bae1;
    if (eax > 0xedc1ef50) {
        goto label_0;
    }
    goto label_3;
label_18:
    if (eax != 0xd8a6aa45) {
        goto label_1;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 0x37, 1, *(obj.stderr));
    abort ();
label_10:
    *(obj.program_name) = r12;
    *(obj.program_invocation_name) = r12;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404540 */
#include <stdint.h>
 
uint64_t dbg_clone_quoting_options (int64_t arg1, quoting_options * o, quoting_options * p) {
    int32_t e;
    rdi = arg1;
    rbx = o;
    rax = p;
    /* quoting_options * clone_quoting_options(quoting_options * o); */
    rbx = rdi;
    rax = errno_location ();
    r14 = rax;
    ebp = *(r14);
    eax = default_quoting_options;
    if (rbx == 0) {
        rbx = rax;
    }
    esi = 0x38;
    rdi = rbx;
    xmemdup ();
    *(r14) = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404580 */
#include <stdint.h>
 
int32_t dbg_get_quoting_style (quoting_options const * o) {
    rdi = o;
    /* quoting_style get_quoting_style(quoting_options const * o); */
    eax = x_19;
    esi = y_20;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    r10d = default_quoting_options;
    if (rdi != 0) {
        r10 = rdi;
    }
    r9b = (ecx == 0xffffffff) ? 1 : 0;
    *(rsp - 6) = (ecx == 0xffffffff) ? 1 : 0;
    edi = 0x350f6805;
    r8d = 0xdd59351b;
    r11d = 0xdd59351b;
    if (ecx == 0xffffffff) {
        r11d = edi;
    }
    dl = (esi < 0xa) ? 1 : 0;
    *(rsp - 5) = (esi < 0xa) ? 1 : 0;
    if (esi >= 0xa) {
        r11d = r8d;
    }
    dl ^= r9b;
    if (esi != 0xa) {
        r11d = edi;
    }
    esi = 0xb1ddcc00;
    r8d = 0x795e1364;
    goto label_0;
label_1:
    eax = *(r10);
    *((rsp - 4)) = eax;
    esi = r11d;
    do {
label_0:
        edi = r11d;
        if (edi > 0x350f6804) {
            goto label_2;
        }
        esi = 0x795e1364;
    } while (edi == 0xdd59351b);
    if (edi != 0xb1ddcc00) {
        goto label_3;
    }
    ecx = *((rsp - 6));
    edx = *((rsp - 5));
    eax = ecx;
    al ^= dl;
    eax = 0xdd59351b;
    if (edi != 0xb1ddcc00) {
        eax = r8d;
    }
    esi = eax;
    if (dl != 0) {
        esi = r8d;
    }
    if (cl == 0) {
        esi = eax;
    }
    goto label_0;
label_2:
    if (edi == 0x795e1364) {
        goto label_1;
    }
    if (edi == 0x350f6805) {
        eax = *((rsp - 4));
        return eax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404670 */
#include <stdint.h>
 
int64_t dbg_set_quoting_style (quoting_options * o, enum quoting_style s) {
    rdi = o;
    rsi = s;
    /* void set_quoting_style(quoting_options * o,quoting_style s); */
    eax = default_quoting_options;
    if (rdi != 0) {
        rax = rdi;
    }
    *(rax) = esi;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404680 */
#include <stdint.h>
 
int32_t set_char_quoting (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = esi;
    eax = x_23;
    r8d = y_24;
    esi = rax - 1;
    esi *= eax;
    r10d = esi;
    r10d ^= 0xfffffffe;
    r10d &= esi;
    *(rsp - 6) = (r10d == 0) ? 1 : 0;
    sil = (r10d == 0) ? 1 : 0;
    al = (r8d < 0xa) ? 1 : 0;
    al ^= sil;
    r9d = 0xf47800fc;
    eax = 0x1d52adf;
    if (r8d != 0xa) {
        eax = r9d;
    }
    if (r10d != 0) {
        r9d = eax;
    }
    *(rsp - 5) = (r8d < 0xa) ? 1 : 0;
    r8d = 0x1d52adf;
    if (r8d >= 0xa) {
        r9d = eax;
    }
    r15d = default_quoting_options;
    if (rdi != 0) {
        r15 = rdi;
    }
    eax = ecx;
    al >>= 5;
    r14d = (int32_t) al;
    ecx &= 0x1f;
    r11d = edx;
    r11d ^= 0xfffffffe;
    r11d &= edx;
    eax = 0x67317ce9;
    r10d = 0xcaade9d0;
    if (eax > 0x1d52ade) {
        goto label_1;
    }
    goto label_2;
label_0:
    eax = *((r15 + r14*4 + 8));
    esi = *((r15 + r14*4 + 8));
    esi >>= cl;
    edi = edx;
    edi = ~edi;
    edi &= esi;
    esi = ~esi;
    esi &= edx;
    edi |= esi;
    edi &= 1;
    edi <<= cl;
    esi = edi;
    esi = ~esi;
    esi &= eax;
    eax = ~eax;
    eax &= edi;
    eax |= esi;
    *((r15 + r14*4 + 8)) = eax;
    eax = 0xcaade9d0;
    if (eax > 0x1d52ade) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0xcaade9d0) {
            goto label_3;
        }
        eax = *((r15 + r14*4 + 8));
        ebx = *((r15 + r14*4 + 8));
        ebx >>= cl;
        ebp ^= 0xfffffffe;
        ebp &= ebx;
        *((rsp - 4)) = ebp;
        ebx = *((rsp - 4));
        ebp = ~ebp;
        ebp &= 0x6afb6163;
        ebx &= 0x95049e9c;
        edi = r11d;
        edi = ~edi;
        edi &= 0x6afb6163;
        esi = r11d;
        esi &= 0x95049e9c;
        ebx |= ebp;
        esi |= edi;
        esi ^= ebx;
        esi <<= cl;
        edi = esi;
        edi = ~edi;
        edi &= eax;
        eax = ~eax;
        eax &= esi;
        eax |= edi;
        *((r15 + r14*4 + 8)) = eax;
        eax = r9d;
    } while (eax <= 0x1d52ade);
label_1:
    if (eax == 0x1d52adf) {
        goto label_0;
    }
    if (eax != 0x67317ce9) {
        goto label_4;
    }
    ebp = *((rsp - 6));
    eax = *((rsp - 5));
    ebx = ebp;
    bl ^= al;
    eax = 0x1d52adf;
    if (al != 0) {
        eax = r10d;
    }
    if (bpl == 0) {
        eax = r8d;
    }
    if (bl != 0) {
        eax = r10d;
    }
    if (eax > 0x1d52ade) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0xf47800fc) {
        eax = *((rsp - 4));
        return eax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404830 */
#include <stdint.h>
 
int32_t dbg_set_quoting_flags (int32_t i, quoting_options * o, int32_t r) {
    rsi = i;
    rdi = o;
    rax = r;
    /* int set_quoting_flags(quoting_options * o,int i); */
    eax = 0x914ef4ec;
    r9d = 0xcf8412b5;
    if (rdi != 0) {
        r9d = eax;
    }
    eax = x_25;
    ecx = y_26;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    r8b = (eax != 0) ? 1 : 0;
    al = (eax == 0) ? 1 : 0;
    dl = (ecx < 0xa) ? 1 : 0;
    cl = (ecx > 9) ? 1 : 0;
    dl ^= al;
    cl |= r8b;
    cl ^= 1;
    cl |= dl;
    r10d = 0x98723d32;
    eax = 0xb139e5bd;
    if (cl == 0) {
        r10d = eax;
    }
    edx = 0xe03229c3;
    if (cl == 0) {
        edx = eax;
    }
    eax = 0x62f6421;
    goto label_3;
label_2:
    eax = 0x914ef4ec;
    r11d = default_quoting_options;
    do {
label_3:
        ecx = eax;
        r8 = r11;
        r11 = rdi;
        eax = r9d;
    } while (ecx == 0x62f6421);
    goto label_0;
label_1:
    ecx = 0x98723d32;
    do {
label_0:
        eax = 0x98723d32;
        if (eax <= 0xcf8412b4) {
            goto label_4;
        }
        ecx = r10d;
    } while (eax == 0xcf8412b5);
    goto label_5;
label_4:
    ecx = edx;
    if (eax == 0x98723d32) {
        goto label_0;
    }
    if (eax == 0xb139e5bd) {
        goto label_1;
    }
    goto label_6;
label_5:
    if (eax == 0xe03229c3) {
        goto label_2;
    }
    goto label_7;
label_6:
    if (eax == 0x914ef4ec) {
        eax = *((r8 + 4));
        *((r8 + 4)) = esi;
        return eax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404940 */
#include <stdint.h>
 
int64_t set_custom_quoting (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = 0x781e475b;
    eax = 0xa9d90147;
    if (rdi != 0) {
        eax = ecx;
    }
    cl = (rdx != 0) ? 1 : 0;
    bl = (rsi != 0) ? 1 : 0;
    r14d = 0xcfdf3cb5;
    if (rsi == 0) {
        r14d = ebp;
    }
    bl ^= cl;
    if (rsi != 0) {
        r14d = ebp;
    }
    r8d = 0x583a6c17;
    r9d = 0xe1660462;
    r10d = 0xd87b1762;
    goto label_2;
label_1:
    ecx = default_quoting_options;
    do {
label_2:
        ebx = ebp;
        r11 = rcx;
        rcx = rdi;
    } while (ebx == 0x67e980e3);
    while (ebp == 0x781e475b) {
        *(rsp) = r11;
        rcx = *(rsp);
        *(rcx) = 0xa;
        ebx = r14d;
label_0:
        if (ebp <= 0xe1660461) {
            goto label_3;
        }
        if (ebp <= 0x583a6c16) {
            goto label_4;
        }
        if (ebp == 0x583a6c17) {
            goto label_5;
        }
    }
    goto label_6;
label_3:
    if (ebp != 0xa9d90147) {
        goto label_7;
    }
    ecx = x_27;
    ebp = y_28;
    ebx = rcx - 1;
    ebx *= ecx;
    ebx = ~ebx;
    ebx |= 0xfffffffe;
    r15b = (ebx == 0xffffffff) ? 1 : 0;
    cl = (ebp < 0xa) ? 1 : 0;
    cl ^= r15b;
    ecx = 0xe1660462;
    if (ebp != 0xa) {
        ecx = r8d;
    }
    ebx = ecx;
    if (ebx == 0xffffffff) {
        ebx = r8d;
    }
    if (ebp >= 0xa) {
        ebx = ecx;
    }
    goto label_0;
label_4:
    ebx = 0x583a6c17;
    if (ebp == 0xe1660462) {
        goto label_0;
    }
    goto label_8;
label_5:
    ecx = x_27;
    ebx = x_27;
    ebx = -ebx;
    ebx = ~ebx;
    ebx *= ecx;
    ecx = ebx;
    ecx ^= 0xfffffffe;
    ecx &= ebx;
    bpl = (ecx == 0) ? 1 : 0;
    ebx = 0xe1660462;
    if (ecx == 0) {
        ebx = r10d;
    }
    cl = (*(obj_y_28) < 0xa) ? 1 : 0;
    if (*(obj_y_28) >= 0xa) {
        ebx = r9d;
    }
    cl ^= bpl;
    if (*(obj_y_28) != 0xa) {
        ebx = r10d;
    }
    goto label_0;
label_7:
    if (ebp == 0xcfdf3cb5) {
        goto label_9;
    }
    if (ebp == 0xd87b1762) {
        goto label_1;
    }
    goto label_6;
label_9:
    rax = *(rsp);
    *((rax + 0x28)) = rsi;
    rax = *(rsp);
    *((rax + 0x30)) = rdx;
    return rax;
label_8:
    if (ebp != 0xe794be26) {
INVALID_JUMP;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x404af0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_buffer (int64_t arg_4h, int64_t arg_8h, int64_t arg_28h, int64_t arg_30h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char * buffer, size_t buffersize, int32_t e, quoting_options const * o, size_t r) {
    quoting_options const * p;
    char const * arg;
    size_t argsize;
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r13 = buffer;
    r12 = buffersize;
    r15 = e;
    r8 = o;
    rax = r;
    /* size_t quotearg_buffer(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_options const * o); */
    *((rsp + 0x18)) = rcx;
    *((rsp + 0x10)) = rdx;
    r12 = rsi;
    r13 = rdi;
    eax = x_29;
    ecx = x_29;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    *(rsp + 0xe) = (ecx == 0xffffffff) ? 1 : 0;
    eax = y_30;
    *(rsp + 0xf) = (eax < 0xa) ? 1 : 0;
    if (r8 != 0) {
    }
    r14 = rbp + 8;
    eax = 0x19b10572;
    while (eax == 0x4eca8f4) {
        rax = errno_location ();
        rbx = rax;
        r15d = *(rbx);
        quotearg_buffer_restyled (r13, r12, *((rsp + 0x18)), *((rsp + 0x20)), *(rbp), *((rbp + 4)));
        *(rbx) = r15d;
        eax = 0x1b56d58a;
label_0:
        eax &= 0xfffffff;
        if (eax > 0xb56d589) {
            goto label_1;
        }
    }
    if (eax == 0x9b10572) {
        ecx = *((rsp + 0xe));
        eax = *((rsp + 0xf));
        edx = ecx;
        dl ^= al;
        eax = 0x14eca8f4;
        esi = 0x1b56d58a;
        if (al != 0) {
            eax = esi;
        }
        ecx = 0x14eca8f4;
        if (cl == 0) {
            eax = ecx;
        }
        if (dl != 0) {
            eax = esi;
        }
        goto label_0;
label_1:
        if (eax == 0xb56d58a) {
            rax = errno_location ();
            rbx = rax;
            r15d = *(rbx);
            rax = quotearg_buffer_restyled (r13, r12, *((rsp + 0x18)), *((rsp + 0x20)), *(rbp), *((rbp + 4)));
            *((rsp + 0x20)) = rax;
            *(rbx) = r15d;
            eax = x_29;
            ecx = y_30;
            edx = rax - 1;
            edx *= eax;
            edx = ~edx;
            edx |= 0xfffffffe;
            al = (edx == 0xffffffff) ? 1 : 0;
            bl = (ecx < 0xa) ? 1 : 0;
            bl ^= al;
            esi = 0x14eca8f4;
            edi = 0x1dfce399;
            if (ecx != 0xa) {
                esi = edi;
            }
            eax = esi;
            if (edx == 0xffffffff) {
                eax = edi;
            }
            if (ecx >= 0xa) {
                eax = esi;
            }
            goto label_0;
        }
        if (eax != 0xdfce399) {
            goto label_2;
        }
        rax = *((rsp + 0x20));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x404ca0 */
#include <stdint.h>
 
 
int64_t dbg_quotearg_buffer_restyled (int64_t arg_768h, uint32_t arg_750h, int64_t arg_758h, int64_t arg_760h, void * arg1, size_t arg2, char ** arg3, int64_t arg4, int64_t arg5, int64_t arg6, char * buffer, size_t bytes) {
    unsigned char esc;
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    func var_9h;
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    uint32_t var_10h;
    int64_t var_17h;
    func var_18h;
    int64_t var_27h;
    int64_t var_28h;
    int64_t var_29h;
    int64_t var_2ah;
    int64_t var_2bh;
    int64_t var_2ch;
    int64_t var_2dh;
    int64_t var_2eh;
    int64_t var_2fh;
    func var_30h;
    void * s1;
    int64_t var_46h;
    int64_t var_47h;
    int64_t var_48h;
    uint32_t var_4ch;
    uint32_t var_50h;
    int64_t var_5bh;
    int64_t var_5ch;
    int64_t var_5dh;
    int64_t var_5eh;
    int64_t var_5fh;
    int64_t var_60h;
    int64_t var_61h;
    int64_t var_62h;
    int64_t var_63h;
    int64_t var_64h;
    int64_t var_65h;
    int64_t var_66h;
    int64_t var_67h;
    int64_t var_68h;
    int64_t var_69h;
    int64_t var_6ah;
    int64_t var_6bh;
    int64_t var_6ch;
    int64_t var_6dh;
    int64_t var_6eh;
    int64_t var_6fh;
    func var_70h;
    uint32_t var_78h;
    int64_t var_7fh;
    int64_t var_80h;
    _Bool elide_outer_quotes;
    int64_t var_82h;
    int64_t var_83h;
    int64_t var_84h;
    int64_t var_85h;
    int64_t var_86h;
    int64_t var_87h;
    int64_t var_88h;
    int64_t var_89h;
    int64_t var_8ah;
    int64_t var_8bh;
    int64_t var_8ch;
    int64_t var_8dh;
    int64_t var_8eh;
    int64_t var_8fh;
    int64_t var_90h;
    int64_t var_91h;
    int64_t var_92h;
    int64_t var_93h;
    int64_t var_94h;
    int64_t var_95h;
    int64_t var_96h;
    int64_t var_97h;
    uint32_t var_98h;
    int64_t var_9ch;
    int64_t var_a0h;
    int64_t var_a1h;
    int64_t var_a2h;
    uint32_t var_a3h;
    int64_t var_a4h;
    int64_t var_a5h;
    int64_t var_a6h;
    int64_t var_a7h;
    int64_t var_a8h;
    uint32_t var_a9h;
    int64_t var_aah;
    int64_t var_abh;
    int64_t var_ach;
    int64_t var_adh;
    int64_t var_aeh;
    int64_t var_afh;
    int64_t var_b0h;
    int64_t var_b1h;
    int64_t var_b2h;
    int64_t var_b3h;
    int64_t var_b4h;
    int64_t var_b5h;
    int64_t var_b6h;
    uint32_t var_b7h;
    char const * arg;
    func var_c0h;
    void * var_c8h;
    int64_t var_d4h;
    char ** ubp_av;
    int64_t var_e4h;
    int64_t var_e9h;
    int64_t var_eah;
    int64_t var_ebh;
    int64_t var_ech;
    int64_t var_edh;
    int64_t var_eeh;
    int64_t var_efh;
    int64_t var_f0h;
    int64_t var_f1h;
    int64_t var_f2h;
    int64_t var_f3h;
    int64_t var_f4h;
    int64_t var_f5h;
    int64_t var_f6h;
    int64_t var_f7h;
    int64_t var_f8h;
    int64_t var_f9h;
    int64_t var_fah;
    int64_t var_fbh;
    int64_t var_fch;
    int64_t var_fdh;
    int64_t var_feh;
    int64_t var_ffh;
    int64_t var_100h;
    int64_t var_101h;
    int64_t var_102h;
    int64_t var_103h;
    int64_t var_104h;
    int64_t var_105h;
    int64_t var_106h;
    int64_t var_107h;
    int64_t var_108h;
    int64_t var_109h;
    int64_t var_10ah;
    int64_t var_10bh;
    int64_t var_10ch;
    int64_t var_10dh;
    int64_t var_10eh;
    int64_t var_10fh;
    int64_t var_110h;
    int64_t var_111h;
    int64_t var_112h;
    int64_t var_113h;
    int64_t var_114h;
    int64_t var_115h;
    int64_t var_116h;
    int64_t var_117h;
    int64_t var_118h;
    int64_t var_119h;
    int64_t var_11ah;
    int64_t var_11bh;
    int64_t var_11ch;
    int64_t var_11dh;
    int64_t var_11eh;
    int64_t var_11fh;
    int64_t var_120h;
    int64_t var_121h;
    int64_t var_122h;
    int64_t var_123h;
    int64_t var_124h;
    int64_t var_125h;
    int64_t var_126h;
    int64_t var_127h;
    func var_128h;
    uint32_t var_130h;
    func var_138h;
    func var_140h;
    void * var_148h;
    uint32_t var_150h;
    func var_158h;
    int64_t var_164h;
    int64_t var_168h;
    int64_t var_16ch;
    int64_t var_170h;
    uint32_t var_174h;
    uint32_t var_178h;
    int64_t var_184h;
    int64_t var_188h;
    func var_190h;
    int64_t var_198h;
    int64_t var_1a0h;
    int64_t var_1a8h;
    func var_1b0h;
    int64_t var_1bch;
    int64_t var_1c0h;
    int64_t var_1c4h;
    int64_t var_1c8h;
    int64_t var_1cch;
    int64_t var_1d0h;
    int64_t var_1d4h;
    func fini;
    uint32_t var_1dch;
    uint32_t var_1e0h;
    uint32_t var_1e4h;
    int64_t var_1e8h;
    int64_t var_1f0h;
    uint32_t var_1f8h;
    uint32_t var_200h;
    uint32_t var_208h;
    int64_t var_20ch;
    int64_t var_210h;
    int64_t var_214h;
    int64_t var_218h;
    int64_t var_21ch;
    int64_t var_220h;
    int64_t var_224h;
    int64_t var_228h;
    char * var_230h;
    size_t var_238h;
    func var_240h;
    int64_t var_248h;
    func var_250h;
    char * var_258h;
    int64_t var_260h;
    uint32_t var_268h;
    func var_270h;
    func var_278h;
    uint32_t var_280h;
    int64_t var_288h;
    int64_t var_290h;
    uint32_t var_298h;
    size_t n;
    char * s2;
    func var_2b0h;
    int64_t var_2b8h;
    uint32_t var_2c0h;
    uint32_t var_2c8h;
    int64_t var_2d0h;
    int64_t var_2d8h;
    size_t var_2e0h;
    int64_t var_2e8h;
    int64_t var_2f0h;
    size_t var_2f8h;
    uint32_t var_300h;
    func var_308h;
    uint32_t var_310h;
    int64_t var_31ch;
    int64_t var_320h;
    func var_328h;
    func var_330h;
    func var_338h;
    size_t var_340h;
    uint32_t var_348h;
    uint32_t var_350h;
    func var_358h;
    uint32_t var_360h;
    uint32_t var_368h;
    int64_t var_370h;
    size_t var_378h;
    int64_t var_380h;
    uint32_t var_388h;
    int64_t var_390h;
    int64_t var_398h;
    func var_3a0h;
    int64_t var_3a8h;
    uint32_t var_3b0h;
    int64_t var_3b8h;
    int64_t var_3c0h;
    int64_t var_3c8h;
    int64_t var_3d0h;
    func var_3d8h;
    uint32_t var_3e0h;
    uint32_t var_3e8h;
    int64_t var_3f0h;
    int64_t var_3f8h;
    int64_t var_400h;
    int64_t var_408h;
    uint32_t var_410h;
    int64_t var_418h;
    int64_t var_420h;
    func var_428h;
    int64_t var_430h;
    int64_t var_438h;
    int64_t var_440h;
    uint32_t var_448h;
    int64_t var_450h;
    uint32_t var_458h;
    int64_t var_460h;
    uint32_t var_468h;
    func var_470h;
    size_t var_478h;
    size_t var_480h;
    int64_t var_488h;
    uint32_t var_490h;
    uint32_t var_498h;
    uint32_t var_4a0h;
    uint32_t var_4a8h;
    char * var_4b0h;
    int64_t var_4b8h;
    func var_4c0h;
    mbstate_t * ps;
    int64_t var_4d0h;
    int64_t var_4d8h;
    int64_t var_4e0h;
    int64_t var_4e8h;
    int64_t var_4f0h;
    int64_t var_4f8h;
    int64_t var_500h;
    int64_t var_508h;
    int64_t var_510h;
    int64_t var_518h;
    int64_t var_520h;
    char * s;
    char * var_530h;
    int64_t var_538h;
    int64_t var_540h;
    int64_t var_548h;
    uint32_t var_550h;
    uint32_t var_558h;
    int64_t var_560h;
    uint32_t var_568h;
    uint32_t var_570h;
    int64_t var_578h;
    int32_t flags;
    wchar_t w;
    func rtld_fini;
    int64_t var_598h;
    int64_t var_59ch;
    char ** var_5a0h;
    int64_t var_5a4h;
    wint_t wc;
    uint32_t var_5ach;
    int64_t var_5b0h;
    char const * quote_string;
    uint32_t var_5c0h;
    size_t argsize;
    char const * left_quote;
    char const * right_quote;
    size_t var_5e0h;
    int64_t var_5e8h;
    int64_t var_5f0h;
    int64_t var_5f8h;
    int64_t var_600h;
    int64_t var_608h;
    int64_t var_610h;
    int64_t var_618h;
    uint32_t var_620h;
    uint32_t var_628h;
    uint32_t var_630h;
    int64_t var_638h;
    int64_t var_640h;
    int64_t var_648h;
    int64_t var_650h;
    int64_t var_658h;
    uint32_t var_660h;
    uint32_t var_668h;
    uint32_t var_670h;
    uint32_t var_678h;
    uint32_t var_680h;
    int64_t var_688h;
    int64_t var_690h;
    int64_t var_698h;
    int64_t var_6a0h;
    int64_t var_6a8h;
    int64_t var_6b0h;
    int64_t var_6b8h;
    int64_t var_6c0h;
    uint32_t var_6c8h;
    int64_t var_6d0h;
    uint32_t var_6d8h;
    uint32_t var_6e0h;
    uint32_t var_6e8h;
    uint32_t var_6f0h;
    uint32_t var_6f8h;
    uint32_t var_700h;
    uint32_t argc;
    func init;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    r12 = buffer;
    rax = bytes;
    /* size_t quotearg_buffer_restyled(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_style quoting_style,int flags,unsigned int const * quote_these_too,char const * left_quote,char const * right_quote); */
label_1:
    ebx = r9d;
    *((rsp + 0x31c)) = r8d;
    *((rsp + 0x5e8)) = rcx;
    *((rsp + 0xd8)) = rdx;
    *((rsp + 0x5e0)) = rsi;
    r12 = rdi;
    rax = *((rsp + 0x760));
    *((rsp + 0x5f8)) = rax;
    rax = *((rsp + 0x758));
    *((rsp + 0x5f0)) = rax;
    rax = ctype_get_mb_cur_max ();
    *(rsp + 0xa2) = (rax == 1) ? 1 : 0;
    al = *((rsp + 0xa2));
    eax = ebx;
    al >>= 1;
    al &= 1;
    *((rsp + 0xa1)) = al;
    eax = ebx;
    eax = ~eax;
    ecx = eax;
    ecx |= 0xfffffffe;
    ecx = 0xcd200855;
    edx = 0x8c24a5da;
    if (ecx == 0xffffffff) {
        ecx = edx;
    }
    *((rsp + 0x59c)) = ecx;
    eax |= 0xfffffffb;
    eax = 0x72fbfc44;
    if (eax == 0xffffffff) {
        eax = edx;
    }
    *((rsp + 0x598)) = eax;
    eax = 0x814bd11f;
    ecx = 0x3c7a6eac;
    if (*((rsp + 0x750)) != 0) {
        ecx = eax;
    }
    *((rsp + 0x5a4)) = ecx;
    *((rsp + 0x5a0)) = ebx;
    ebx &= 0xfffffffd;
    *((rsp + 0x594)) = ebx;
    *((rsp + 0xa0)) = 1;
    *((rsp + 0xd)) = al;
    *((rsp + 0xe)) = al;
    *((rsp + 0xf)) = al;
    *((rsp + 0x2d)) = al;
    *((rsp + 0x2b)) = al;
    *((rsp + 0x2c)) = al;
    *((rsp + 0x69)) = al;
    *((rsp + 0x66)) = al;
    *((rsp + 0x67)) = al;
    *((rsp + 0x68)) = al;
    *((rsp + 0xa)) = al;
    *((rsp + 0xb)) = al;
    *((rsp + 9)) = al;
    *((rsp + 0x63)) = al;
    *((rsp + 0x65)) = al;
    *((rsp + 0x64)) = al;
    ebx = 0xf47da62d;
    ecx = 0;
    *((rsp + 0x5d8)) = rcx;
    *((rsp + 0x2d8)) = rcx;
    *((rsp + 0x1d8)) = ecx;
    *((rsp + 0x4a8)) = rcx;
    *((rsp + 0x4b8)) = rcx;
    *((rsp + 0x3a0)) = rcx;
    *((rsp + 0x4b0)) = rcx;
    *((rsp + 0x4c0)) = rcx;
    *((rsp + 0x128)) = rax;
    *((rsp + 0x98)) = eax;
    *((rsp + 0x130)) = rax;
    *((rsp + 0x138)) = rcx;
    *((rsp + 0x140)) = rcx;
    *((rsp + 0x148)) = rcx;
    *((rsp + 0x220)) = ecx;
    *((rsp + 0x1d4)) = ecx;
    *((rsp + 0x398)) = rcx;
    *((rsp + 0x240)) = rax;
    *((rsp + 0x170)) = eax;
    *((rsp + 0x16c)) = eax;
    *((rsp + 0x268)) = rax;
    *((rsp + 0x270)) = rax;
    *((rsp + 0x278)) = rax;
    *((rsp + 0x280)) = rax;
    *((rsp + 0x390)) = rcx;
    *((rsp + 0x330)) = rax;
    *((rsp + 0x1c4)) = eax;
    *((rsp + 0x348)) = rcx;
    *((rsp + 0x350)) = rcx;
    *((rsp + 0x358)) = rcx;
    *((rsp + 0x368)) = rcx;
    *((rsp + 0x48)) = eax;
    *((rsp + 0xb8)) = rax;
    *((rsp + 0xc0)) = rax;
    *((rsp + 0xc8)) = rax;
    *((rsp + 0x1c0)) = eax;
    *((rsp + 0x1d0)) = ecx;
    *((rsp + 0x1bc)) = eax;
    *((rsp + 0x378)) = rcx;
    *((rsp + 0x328)) = rax;
    *((rsp + 0x388)) = rcx;
    *((rsp + 0x21c)) = ecx;
    *((rsp + 0x4a0)) = rcx;
    *((rsp + 0x1cc)) = ecx;
    *((rsp + 0x370)) = rcx;
    *((rsp + 0x1c8)) = eax;
    *((rsp + 0x380)) = rcx;
    *((rsp + 0x360)) = rcx;
    *((rsp + 0x210)) = ecx;
    *((rsp + 0x490)) = rcx;
    *((rsp + 0x498)) = rcx;
    *((rsp + 0x438)) = rax;
    *((rsp + 0x480)) = rcx;
    *((rsp + 0x218)) = ecx;
    *((rsp + 0x164)) = eax;
    *((rsp + 0x288)) = rcx;
    *((rsp + 0x168)) = eax;
    *((rsp + 0x20c)) = ecx;
    *((rsp + 0x214)) = ecx;
    *((rsp + 0x430)) = rax;
    *((rsp + 0x488)) = rcx;
    *((rsp + 0x320)) = rax;
    *((rsp + 0x340)) = rax;
    *((rsp + 0x428)) = rax;
    *((rsp + 0x470)) = rax;
    *((rsp + 0x9c)) = eax;
    *((rsp + 0x250)) = rax;
    *((rsp + 0x338)) = rax;
    *((rsp + 0x184)) = eax;
    *((rsp + 0x2d0)) = rax;
    *((rsp + 0x478)) = rax;
    *((rsp + 0x420)) = rax;
    *((rsp + 0x448)) = rax;
    *((rsp + 0x458)) = rax;
    *((rsp + 0x468)) = rax;
    *((rsp + 0x410)) = rax;
    *((rsp + 0x418)) = rax;
    *((rsp + 0x248)) = rax;
    *((rsp + 0x238)) = rax;
    *((rsp + 0x230)) = rax;
    *((rsp + 0x228)) = rax;
    *((rsp + 0x258)) = rax;
    *((rsp + 0x260)) = rax;
    *((rsp + 0x174)) = eax;
    *((rsp + 0x3f8)) = rax;
    *((rsp + 0x400)) = rax;
    *((rsp + 0x460)) = rax;
    *((rsp + 0x408)) = rax;
    *((rsp + 0x440)) = rax;
    *((rsp + 0x450)) = rax;
    *((rsp + 0x3f0)) = rax;
    *((rsp + 0x208)) = eax;
    eax = 0;
    *((rsp + 0x5b0)) = rax;
    eax = 0;
    *((rsp + 0x5b8)) = rax;
    eax = 0;
    *((rsp + 0x5c0)) = rax;
    eax = 0;
    *((rsp + 0x5c8)) = rax;
    eax = 0;
    *((rsp + 0x5d0)) = rax;
    *((rsp + 0x89)) = al;
    *((rsp + 0x8c)) = al;
    *((rsp + 0x8d)) = al;
    *((rsp + 0x8e)) = al;
    *((rsp + 0x5c)) = al;
    *((rsp + 0x62)) = al;
    *((rsp + 0x60)) = al;
    *((rsp + 0x61)) = al;
    *((rsp + 0x85)) = al;
    *((rsp + 0x8b)) = al;
    *((rsp + 0x87)) = al;
    *((rsp + 0x88)) = al;
    *((rsp + 0x5e)) = al;
    *((rsp + 0x27)) = al;
    *((rsp + 0x2a)) = al;
    *((rsp + 0x5d)) = al;
    *((rsp + 0x8a)) = al;
    *((rsp + 0x80)) = al;
    *((rsp + 0x81)) = al;
    *((rsp + 0x82)) = al;
    *((rsp + 0x29)) = al;
    *((rsp + 0x5f)) = al;
    *((rsp + 0x5b)) = al;
    *((rsp + 0x84)) = al;
    *((rsp + 0x7f)) = al;
    *((rsp + 0x86)) = al;
    *((rsp + 0x83)) = al;
    goto label_0;
label_2:
    ebx = 0x8d21fc49;
    do {
label_0:
        ecx = ebx;
        if (ecx > 0x1c79e09) {
            goto label_3;
        }
        if (ecx > 0xc6411053) {
            goto label_4;
        }
        if (ecx <= 0xa1a3fefc) {
            goto label_5;
        }
        if (ecx > 0xb3f09f6f) {
            goto label_6;
        }
        if (ecx <= 0xaa1d3986) {
            goto label_7;
        }
        if (ecx > 0xad09af21) {
            goto label_8;
        }
        if (ecx <= 0xab29d9fd) {
            goto label_9;
        }
        if (ecx <= 0xac1b200b) {
            goto label_10;
        }
        if (ecx == 0xac1b200c) {
            goto label_11;
        }
        if (ecx == 0xac807295) {
            goto label_12;
        }
        ebx = ecx;
    } while (ecx != 0xac96c107);
    eax = *((rsp + 0x10));
    ebx = 0x6c16832d;
    ecx = 0xf16893a9;
    if (eax < 0x5b) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_3:
    if (ecx > 0x3f943255) {
        goto label_13;
    }
    if (ecx <= 0x21476487) {
        goto label_14;
    }
    if (ecx > 0x321c8b70) {
        goto label_15;
    }
    if (ecx <= 0x29e753b4) {
        goto label_16;
    }
    if (ecx > 0x2ea4b4ae) {
        goto label_17;
    }
    if (ecx <= 0x2daf1d95) {
        goto label_18;
    }
    if (ecx <= 0x2e58c624) {
        goto label_19;
    }
    if (ecx == 0x2e58c625) {
        goto label_20;
    }
    if (ecx == 0x2e8b27f4) {
        goto label_21;
    }
    ebx = ecx;
    if (ecx != 0x2ea1cc92) {
        goto label_0;
    }
    eax = *((rsp + 0x6b));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0x14c48a52;
    ecx = 0x4d7cac31;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x158));
    *((rsp + 0x380)) = rcx;
    eax = *((rsp + 0x2f));
    *((rsp + 0x60)) = al;
    eax = *((rsp + 0x28));
    *((rsp + 0x62)) = al;
    al = *((rsp + 0x6b));
    *((rsp + 0x1c8)) = eax;
    eax = *((rsp + 0x93));
    *((rsp + 0x5c)) = al;
    goto label_0;
label_4:
    if (ecx <= 0xe505cd46) {
        goto label_22;
    }
    if (ecx > 0xf4a38eb4) {
        goto label_23;
    }
    if (ecx <= 0xec168e7d) {
        goto label_24;
    }
    if (ecx > 0xf1800c4d) {
        goto label_25;
    }
    if (ecx <= 0xef34cea8) {
        goto label_26;
    }
    if (ecx <= 0xf01d5f67) {
        goto label_27;
    }
    if (ecx == 0xf01d5f68) {
        goto label_28;
    }
    if (ecx == 0xf0414557) {
        goto label_29;
    }
    ebx = ecx;
    if (ecx != 0xf16893a9) {
        goto label_0;
    }
    eax = *((rsp + 7));
    *((rsp + 0xb)) = al;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    ebx = 0x8c24a5da;
    r13b = 1;
    r14d = 0;
    rbp = *((rsp + 0x18));
    goto label_0;
label_13:
    if (ecx <= 0x5d214146) {
        goto label_30;
    }
    if (ecx > 0x6e96e096) {
        goto label_31;
    }
    if (ecx <= 0x685bcbd8) {
        goto label_32;
    }
    if (ecx > 0x6c237bea) {
        goto label_33;
    }
    if (ecx <= 0x6a95c23b) {
        goto label_34;
    }
    if (ecx <= 0x6ac819e0) {
        goto label_35;
    }
    if (ecx == 0x6ac819e1) {
        goto label_36;
    }
    if (ecx == 0x6ac8cb42) {
        goto label_37;
    }
    ebx = ecx;
    if (ecx != 0x6c16832d) {
        goto label_0;
    }
    eax = *((rsp + 0x9c));
    *((rsp + 0xad)) = al;
    eax = *((rsp + 0x4c));
    ebx = 0x8c24a5da;
    ecx = 0xcae8c16d;
    if (eax == 2) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13b = *((rsp + 0xad));
    r14d = 0;
    rbp = *((rsp + 0x18));
    goto label_0;
label_5:
    if (ecx <= 0x8db5617d) {
        goto label_38;
    }
    if (ecx <= 0x93869500) {
        goto label_39;
    }
    if (ecx > 0x99e104eb) {
        goto label_40;
    }
    if (ecx <= 0x987bad62) {
        goto label_41;
    }
    if (ecx <= 0x99c3d826) {
        goto label_42;
    }
    if (ecx == 0x99c3d827) {
        goto label_43;
    }
    if (ecx == 0x99c8445f) {
        goto label_44;
    }
    ebx = ecx;
    if (ecx != 0x99d99f42) {
        goto label_0;
    }
    rax = *((rsp + 0x1f8));
    ecx = *((rsp + 0xb0));
    *((r12 + rax)) = cl;
    ebx = 0xbfe9c25a;
    goto label_0;
label_14:
    if (ecx <= 0x12f3fb18) {
        goto label_45;
    }
    if (ecx <= 0x1b13f9e4) {
        goto label_46;
    }
    if (ecx > 0x1e4b1910) {
        goto label_47;
    }
    if (ecx <= 0x1c0f0a65) {
        goto label_48;
    }
    if (ecx <= 0x1c797df3) {
        goto label_49;
    }
    if (ecx == 0x1c797df4) {
        goto label_50;
    }
    if (ecx == 0x1d3202c3) {
        goto label_51;
    }
    ebx = ecx;
    if (ecx != 0x1dd6a4d9) {
        goto label_0;
    }
    eax = *((rsp + 0x6d));
    al = ~al;
    al |= 0xfe;
    ebx = 0x26f56da0;
    ecx = 0xfffb48cc;
    if (al != 0xff) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x2c0));
    *((rsp + 0x370)) = rcx;
    cl = *((rsp + 0x6d));
    *((rsp + 0x1cc)) = ecx;
    goto label_0;
label_22:
    if (ecx <= 0xd5848bbd) {
        goto label_52;
    }
    if (ecx <= 0xdbe658c1) {
        goto label_53;
    }
    if (ecx > 0xe0439c1b) {
        goto label_54;
    }
    if (ecx <= 0xde160a9c) {
        goto label_55;
    }
    if (ecx <= 0xdea3302c) {
        goto label_56;
    }
    if (ecx == 0xdea3302d) {
        goto label_57;
    }
    if (ecx == 0xdf39561e) {
        goto label_58;
    }
    ebx = ecx;
    if (ecx != 0xdfca699e) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xc90721ad;
    esi = 0x12f3fb19;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xc90721ad;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_30:
    if (ecx <= 0x4d1daa77) {
        goto label_59;
    }
    if (ecx <= 0x542e2d8d) {
        goto label_60;
    }
    if (ecx > 0x588a7748) {
        goto label_61;
    }
    if (ecx <= 0x56424cea) {
        goto label_62;
    }
    if (ecx <= 0x569c45e3) {
        goto label_63;
    }
    if (ecx == 0x569c45e4) {
        goto label_64;
    }
    if (ecx == 0x56b5c23f) {
        goto label_65;
    }
    ebx = ecx;
    if (ecx != 0x585d4b17) {
        goto label_0;
    }
    eax = *((rsp + 0x28));
    al >>= 3;
    al |= 0x30;
    al &= 0x37;
    rcx = *((rsp + 0x520));
    *((r12 + rcx)) = al;
    ebx = 0x74e37602;
    goto label_0;
label_6:
    if (ecx <= 0xbde04a41) {
        goto label_66;
    }
    if (ecx > 0xc0e38213) {
        goto label_67;
    }
    if (ecx <= 0xbf09e2aa) {
        goto label_68;
    }
    if (ecx <= 0xbfce0402) {
        goto label_69;
    }
    if (ecx == 0xbfce0403) {
        goto label_70;
    }
    if (ecx == 0xbfe9c25a) {
        goto label_71;
    }
    ebx = ecx;
    if (ecx != 0xc06cebc3) {
        goto label_0;
    }
    ebx = 0xb6f0d4c4;
    goto label_0;
label_15:
    if (ecx <= 0x3744cf8a) {
        goto label_72;
    }
    if (ecx > 0x3d53049f) {
        goto label_73;
    }
    if (ecx <= 0x3b302744) {
        goto label_74;
    }
    if (ecx <= 0x3c7a6eab) {
        goto label_75;
    }
    if (ecx == 0x3c7a6eac) {
        goto label_76;
    }
    if (ecx == 0x3ce7153d) {
        goto label_77;
    }
    ebx = ecx;
    if (ecx != 0x3d3fd41d) {
        goto label_0;
    }
    eax = *((rsp + 0x114));
    ebx = 0x65b5f4e9;
    ecx = 0x5048d76b;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x310));
    *((rsp + 0x3a0)) = rcx;
    goto label_0;
label_23:
    if (ecx <= 0xfcb04b0c) {
        goto label_78;
    }
    if (ecx > 0xffd4cc3a) {
        goto label_79;
    }
    if (ecx <= 0xfe601b69) {
        goto label_80;
    }
    if (ecx <= 0xfee3a20e) {
        goto label_81;
    }
    if (ecx == 0xfee3a20f) {
        goto label_82;
    }
    if (ecx == 0xff29cad6) {
        goto label_83;
    }
    ebx = ecx;
    if (ecx != 0xff8bdf28) {
        goto label_0;
    }
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    rax = *((rsp + 0x150));
    ebx = 0x854f827b;
    goto label_0;
label_31:
    if (ecx <= 0x74e37601) {
        goto label_84;
    }
    if (ecx <= 0x79db7107) {
        goto label_85;
    }
    if (ecx <= 0x7d77e7f9) {
        goto label_86;
    }
    if (ecx <= 0x7f2c6d42) {
        goto label_87;
    }
    if (ecx == 0x7f2c6d43) {
        goto label_88;
    }
    if (ecx == 0x7f671093) {
        goto label_89;
    }
    ebx = ecx;
    if (ecx != 0x7fb2b8c5) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0xbf98188a;
    ecx = 0xac807295;
    if (eax < 0x60) {
        ebx = ecx;
    }
    goto label_0;
label_38:
    if (ecx > 0x86fba255) {
        goto label_90;
    }
    if (ecx <= 0x845ebdba) {
        goto label_91;
    }
    if (ecx <= 0x8541207b) {
        goto label_92;
    }
    if (ecx <= 0x85ab3af2) {
        goto label_93;
    }
    if (ecx == 0x85ab3af3) {
        goto label_94;
    }
    if (ecx == 0x86c00ce5) {
        goto label_95;
    }
    ebx = ecx;
    if (ecx != 0x86ca0291) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x9369e14c;
    esi = 0x542e2d8e;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_45:
    if (ecx > 0x84d9d9a) {
        goto label_96;
    }
    if (ecx <= 0x3f6bc38) {
        goto label_97;
    }
    if (ecx <= 0x4bb9204) {
        goto label_98;
    }
    if (ecx <= 0x5a0d48a) {
        goto label_99;
    }
    if (ecx == 0x5a0d48b) {
        goto label_100;
    }
    if (ecx == 0x72b18ba) {
        goto label_101;
    }
    ebx = ecx;
    if (ecx != 0x827152f) {
        goto label_0;
    }
    al = (*((rsp + 0x30)) == 0) ? 1 : 0;
    ecx = *((rsp + 0x4c));
    *(rsp + 0xa8) = (ecx == 2) ? 1 : 0;
    ecx = *((rsp + 0xa8));
    cl ^= al;
    cl = ~cl;
    cl &= al;
    *((rsp + 0x10e)) = cl;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x85ab3af3;
    edi = 0xe7eb55e8;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_52:
    if (ecx > 0xd0528e2a) {
        goto label_102;
    }
    if (ecx <= 0xcbf6e2e3) {
        goto label_103;
    }
    if (ecx <= 0xcd81ccbf) {
        goto label_104;
    }
    if (ecx <= 0xcf3454b4) {
        goto label_105;
    }
    if (ecx == 0xcf3454b5) {
        goto label_106;
    }
    if (ecx == 0xcf3ff6fb) {
        goto label_107;
    }
    ebx = ecx;
    if (ecx != 0xd03f7463) {
        goto label_0;
    }
    rax = *((rsp + 0x3e8));
    eax = *(rax);
    *((rsp + 0xa9)) = al;
    *(rsp + 0x114) = (*((rsp + 0xa9)) != 0) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xfac72058;
    esi = 0x3d3fd41d;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xfac72058;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_59:
    if (ecx > 0x463fd647) {
        goto label_108;
    }
    if (ecx <= 0x444683a4) {
        goto label_109;
    }
    if (ecx <= 0x450db679) {
        goto label_110;
    }
    if (ecx <= 0x458068a9) {
        goto label_111;
    }
    if (ecx == 0x458068aa) {
        goto label_112;
    }
    if (ecx == 0x45bf62f2) {
        goto label_113;
    }
    ebx = ecx;
    if (ecx != 0x463aaca9) {
        goto label_0;
    }
    eax = *((rsp + 0x105));
    ebx = 0x3c7a6eac;
    ecx = 0x814bd11f;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_7:
    if (ecx <= 0xa39834be) {
        goto label_114;
    }
    if (ecx <= 0xa6259561) {
        goto label_115;
    }
    if (ecx <= 0xa8aa827d) {
        goto label_116;
    }
    if (ecx == 0xa8aa827e) {
        goto label_117;
    }
    if (ecx == 0xa8f3007c) {
        goto label_118;
    }
    ebx = ecx;
    if (ecx != 0xa9cfed3b) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    rax += 2;
    *((rsp + 0x4e0)) = rax;
    rax = *((rsp + 0x4e0));
    al = (rax < *((rsp + 0x50))) ? 1 : 0;
    *((rsp + 0xf1)) = al;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xde480b4b;
    esi = 0xd6ed6019;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_16:
    if (ecx <= 0x2404026b) {
        goto label_119;
    }
    if (ecx <= 0x254b4436) {
        goto label_120;
    }
    if (ecx <= 0x27b0e69f) {
        goto label_121;
    }
    if (ecx == 0x27b0e6a0) {
        goto label_122;
    }
    if (ecx == 0x28151f7c) {
        goto label_123;
    }
    ebx = ecx;
    if (ecx != 0x2991b969) {
        goto label_0;
    }
    eax = *((rsp + 0x4c));
    ebx = 0xd78107b6;
    ecx = 0x1152b13b;
    if (eax == 2) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x190));
    *((rsp + 0x390)) = rcx;
    ecx = *((rsp + 0x47));
    *((rsp + 0x69)) = cl;
    goto label_0;
label_24:
    if (ecx <= 0xe93955bc) {
        goto label_124;
    }
    if (ecx <= 0xead3b09a) {
        goto label_125;
    }
    if (ecx <= 0xebbcaa8e) {
        goto label_126;
    }
    if (ecx == 0xebbcaa8f) {
        goto label_127;
    }
    if (ecx == 0xebed9e7a) {
        goto label_128;
    }
    ebx = ecx;
    if (ecx != 0xec128de1) {
        goto label_0;
    }
    ebx = 0x1c448620;
    ecx = 0xf3936389;
    if (*((rsp + 0x78)) == 0) {
        ebx = ecx;
    }
    goto label_0;
label_32:
    if (ecx <= 0x6421dcc9) {
        goto label_129;
    }
    if (ecx <= 0x6669c209) {
        goto label_130;
    }
    if (ecx <= 0x679fd97a) {
        goto label_131;
    }
    if (ecx == 0x679fd97b) {
        goto label_132;
    }
    if (ecx == 0x67b2453b) {
        goto label_133;
    }
    ebx = ecx;
    if (ecx != 0x684f642f) {
        goto label_0;
    }
    ebx = 0xe6eea5ff;
    goto label_0;
label_39:
    if (ecx <= 0x907a2781) {
        goto label_134;
    }
    if (ecx <= 0x921578f3) {
        goto label_135;
    }
    if (ecx <= 0x931315d8) {
        goto label_136;
    }
    if (ecx == 0x931315d9) {
        goto label_137;
    }
    if (ecx == 0x9369e14c) {
        goto label_138;
    }
    ebx = ecx;
    if (ecx != 0x937d3aa9) {
        goto label_0;
    }
    eax = *((rsp + 0x6c));
    ebx = 0x44c60ebb;
    goto label_0;
label_46:
    if (ecx <= 0x17fa7819) {
        goto label_139;
    }
    if (ecx <= 0x19599460) {
        goto label_140;
    }
    if (ecx <= 0x1985a805) {
        goto label_141;
    }
    if (ecx == 0x1985a806) {
        goto label_142;
    }
    if (ecx == 0x1aa1bd92) {
        goto label_143;
    }
    ebx = ecx;
    if (ecx != 0x1afa8b6d) {
        goto label_0;
    }
    rax = *((rsp + 0x190));
    *((r12 + rax)) = 0x27;
    ebx = 0xe505cd47;
    goto label_0;
label_53:
    if (ecx <= 0xd7d7ff06) {
        goto label_144;
    }
    if (ecx <= 0xd9d8a038) {
        goto label_145;
    }
    if (ecx <= 0xdb0e22e2) {
        goto label_146;
    }
    if (ecx == 0xdb0e22e3) {
        goto label_147;
    }
    if (ecx == 0xdb2e6465) {
        goto label_148;
    }
    ebx = ecx;
    if (ecx != 0xdbe04246) {
        goto label_0;
    }
    eax = *((rsp + 0x1dc));
    ebx = 0xab0db9ed;
    ecx = 0x899fb6e9;
    if (eax < 0x34) {
        ebx = ecx;
    }
    goto label_0;
label_60:
    if (ecx <= 0x502275ef) {
        goto label_149;
    }
    if (ecx <= 0x517d8b89) {
        goto label_150;
    }
    if (ecx <= 0x51ea4f00) {
        goto label_151;
    }
    if (ecx == 0x51ea4f01) {
        goto label_152;
    }
    if (ecx == 0x52189ca8) {
        goto label_153;
    }
    ebx = ecx;
    if (ecx != 0x53b9bd27) {
        goto label_0;
    }
    rax = *((rsp + 0x3c0));
    *((r12 + rax)) = 0x27;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x99627dfc;
    edi = 0x684f642f;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_66:
    if (ecx <= 0xb7473952) {
        goto label_154;
    }
    if (ecx <= 0xbbe78ec1) {
        goto label_155;
    }
    if (ecx <= 0xbca46d4e) {
        goto label_156;
    }
    if (ecx == 0xbca46d4f) {
        goto label_157;
    }
    if (ecx == 0xbce22603) {
        goto label_158;
    }
    ebx = ecx;
    if (ecx != 0xbd33038b) {
        goto label_0;
    }
    rax = *((rsp + 0x1f0));
    *((r12 + rax)) = 0x27;
    ebx = 0x4c8f7fc6;
    goto label_0;
label_72:
    if (ecx <= 0x345eb3fd) {
        goto label_159;
    }
    if (ecx <= 0x35f93fce) {
        goto label_160;
    }
    if (ecx <= 0x36284b82) {
        goto label_161;
    }
    if (ecx == 0x36284b83) {
        goto label_162;
    }
    if (ecx == 0x36f1445a) {
        goto label_163;
    }
    ebx = ecx;
    if (ecx != 0x372a8493) {
        goto label_0;
    }
    rax = *((rsp + 0x438));
    *((rsp + 0x650)) = rax;
    rax = *((rsp + 0x480));
    *((rsp + 0x658)) = rax;
    eax = *((rsp + 0x88));
    al = ~al;
    al |= 0xfe;
    *(rsp + 0x8f) = (al != 0xff) ? 1 : 0;
    eax = *((rsp + 0x8f));
    *((rsp + 0xa7)) = al;
    rax = *((rsp + 0x650));
    ebx = 0x852bf69e;
    ecx = 0xa8240c7f;
    if (rax > 1) {
        ebx = ecx;
    }
    goto label_0;
label_78:
    if (ecx <= 0xf80fe661) {
        goto label_164;
    }
    if (ecx <= 0xfae5bf0e) {
        goto label_165;
    }
    if (ecx <= 0xfc1c9282) {
        goto label_166;
    }
    if (ecx == 0xfc1c9283) {
        goto label_167;
    }
    if (ecx == 0xfc6c814e) {
        goto label_168;
    }
    ebx = ecx;
    if (ecx != 0xfc7b61ca) {
        goto label_0;
    }
    rax = *((rsp + 0x50));
    al = (rax == 1) ? 1 : 0;
    cl = (*((rsp + 0x38)) == 0) ? 1 : 0;
    edx = eax;
    dl ^= cl;
    al |= cl;
    al = ~al;
    al |= dl;
    al &= 1;
    *((rsp + 0xf6)) = al;
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x242cefe0;
    esi = 0xea242090;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x242cefe0;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_84:
    if (ecx <= 0x71f04ea6) {
        goto label_169;
    }
    if (ecx <= 0x72fbfc43) {
        goto label_170;
    }
    if (ecx <= 0x730f87b3) {
        goto label_171;
    }
    if (ecx == 0x730f87b4) {
        goto label_172;
    }
    if (ecx == 0x73122a89) {
        goto label_173;
    }
    ebx = ecx;
    if (ecx != 0x744a9018) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ebx = 0xe3a5abb;
    goto label_0;
label_90:
    if (ecx <= 0x8c24a5d9) {
        goto label_174;
    }
    if (ecx <= 0x8ca3c1b4) {
        goto label_175;
    }
    if (ecx <= 0x8d21fc48) {
        goto label_176;
    }
    if (ecx == 0x8d21fc49) {
        goto label_177;
    }
    if (ecx == 0x8d221414) {
        goto label_178;
    }
    ebx = ecx;
    if (ecx != 0x8d875b87) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xb08aa57a;
    esi = 0xa1a3fefd;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xb08aa57a;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_96:
    if (ecx <= 0xe3a5aba) {
        goto label_179;
    }
    if (ecx <= 0x1152b13a) {
        goto label_180;
    }
    if (ecx <= 0x11f5c38f) {
        goto label_181;
    }
    if (ecx == 0x11f5c390) {
        goto label_182;
    }
    if (ecx == 0x123b74cc) {
        goto label_183;
    }
    ebx = ecx;
    if (ecx != 0x12402855) {
        goto label_0;
    }
    eax = *((rsp + 0x107));
    ebx = 0x7f671093;
    ecx = 0xd78107b6;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x190));
    *((rsp + 0x390)) = rcx;
    ecx = *((rsp + 0x47));
    *((rsp + 0x69)) = cl;
    goto label_0;
label_102:
    if (ecx <= 0xd269f6ed) {
        goto label_184;
    }
    if (ecx <= 0xd361cdb3) {
        goto label_185;
    }
    if (ecx <= 0xd48c0abd) {
        goto label_186;
    }
    if (ecx == 0xd48c0abe) {
        goto label_187;
    }
    if (ecx == 0xd54aab09) {
        goto label_188;
    }
    ebx = ecx;
    if (ecx != 0xd57d627a) {
        goto label_0;
    }
    eax = *((rsp + 0x4c));
    ebx = 0xa274c3d7;
    ecx = 0x3b302745;
    if (eax == 2) {
        ebx = ecx;
    }
    goto label_0;
label_108:
    if (ecx <= 0x493c3b75) {
        goto label_189;
    }
    if (ecx <= 0x4b200e3c) {
        goto label_190;
    }
    if (ecx <= 0x4bfc67b2) {
        goto label_191;
    }
    if (ecx == 0x4bfc67b3) {
        goto label_192;
    }
    if (ecx == 0x4c2360a1) {
        goto label_193;
    }
    ebx = ecx;
    if (ecx != 0x4c8f7fc6) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xaf8ea2be;
    edi = 0xc8f4dd2f;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xaf8ea2be;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_8:
    if (ecx <= 0xaf8ea2bd) {
        goto label_194;
    }
    if (ecx <= 0xb1216b7e) {
        goto label_195;
    }
    if (ecx == 0xb1216b7f) {
        goto label_196;
    }
    if (ecx == 0xb1f1cc67) {
        goto label_197;
    }
    ebx = ecx;
    if (ecx != 0xb277a733) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xe0439c1c;
    esi = 0x493c3b76;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_17:
    if (ecx <= 0x2ffa8169) {
        goto label_198;
    }
    if (ecx <= 0x310fd56e) {
        goto label_199;
    }
    if (ecx == 0x310fd56f) {
        goto label_200;
    }
    if (ecx == 0x3191bb07) {
        goto label_201;
    }
    ebx = ecx;
    if (ecx != 0x31fbbca6) {
        goto label_0;
    }
    ebx = 0x64b0ec15;
    eax = 1;
    *((rsp + 0x430)) = rax;
    goto label_0;
label_25:
    if (ecx <= 0xf3936388) {
        goto label_202;
    }
    if (ecx <= 0xf4573b19) {
        goto label_203;
    }
    if (ecx == 0xf4573b1a) {
        goto label_204;
    }
    if (ecx == 0xf47da62d) {
        goto label_205;
    }
    ebx = ecx;
    if (ecx != 0xf489befe) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xd9461648;
    edi = 0xa017fab5;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xd9461648;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_33:
    if (ecx <= 0x6d17396d) {
        goto label_206;
    }
    if (ecx <= 0x6db0c13a) {
        goto label_207;
    }
    if (ecx == 0x6db0c13b) {
        goto label_208;
    }
    if (ecx == 0x6e2b8d00) {
        goto label_209;
    }
    ebx = ecx;
    if (ecx != 0x6e4dbecd) {
        goto label_0;
    }
    eax = *((rsp + 0x1e4));
    ebx = 0x35df7d5b;
    ecx = 0x321c8b71;
    if (eax == 0x10) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x680));
    *((rsp + 0x4b8)) = rcx;
    rcx = *((rsp + 0x678));
    *((rsp + 0x4a8)) = rcx;
    goto label_0;
label_40:
    if (ecx <= 0x9baa4477) {
        goto label_210;
    }
    if (ecx <= 0xa006a67f) {
        goto label_211;
    }
    if (ecx == 0xa006a680) {
        goto label_212;
    }
    if (ecx == 0xa017fab5) {
        goto label_213;
    }
    ebx = ecx;
    if (ecx != 0xa05e7ea0) {
        goto label_0;
    }
    rax = *((rsp + 0x3a8));
    *((r12 + rax)) = 0x24;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x254b4437;
    esi = 0x8496b3ac;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x254b4437;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_47:
    if (ecx <= 0x205ca628) {
        goto label_214;
    }
    if (ecx <= 0x20ba029e) {
        goto label_215;
    }
    if (ecx == 0x20ba029f) {
        goto label_216;
    }
    if (ecx == 0x210997ff) {
        goto label_217;
    }
    ebx = ecx;
    if (ecx != 0x21424190) {
        goto label_0;
    }
    rax = *((rsp + 0x448));
    *((rsp + 0x18)) = rax;
    eax = *((rsp + 0x80));
    *((rsp + 0xc)) = al;
    eax = *((rsp + 0x81));
    *((rsp + 5)) = al;
    eax = *((rsp + 0x82));
    *((rsp + 4)) = al;
    rax = *((rsp + 0x458));
    *((rsp + 0x1a8)) = rax;
    rax = *((rsp + 0x468));
    *((rsp + 0x70)) = rax;
    rax = *((rsp + 0x410));
    *((rsp + 0x30)) = rax;
    rax = *((rsp + 0x418));
    *((rsp + 0x38)) = rax;
    rax = *((rsp + 0x1a8));
    *(rsp + 0xa4) = (rax == -1) ? 1 : 0;
    eax = *((rsp + 0xa4));
    ebx = 0xd5c8378c;
    ecx = 0x6f44b991;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_54:
    if (ecx <= 0xe1ef74eb) {
        goto label_218;
    }
    if (ecx <= 0xe2c581f3) {
        goto label_219;
    }
    if (ecx == 0xe2c581f4) {
        goto label_220;
    }
    if (ecx == 0xe2d7d137) {
        goto label_221;
    }
    ebx = ecx;
    if (ecx != 0xe2f70d41) {
        goto label_0;
    }
    rax = *((rsp + 0x310));
    rcx = 0xc32bd0c0123bd022;
    rax = rax + rcx + 1;
    rax -= rcx;
    *((rsp + 0x6b0)) = rax;
    rax = *((rsp + 0x3e8));
    rax++;
    *((rsp + 0x6b8)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x9a5f25dc;
    esi = 0xf80fe662;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_61:
    if (ecx <= 0x5a9a35fe) {
        goto label_222;
    }
    if (ecx <= 0x5c0a0c02) {
        goto label_223;
    }
    if (ecx == 0x5c0a0c03) {
        goto label_224;
    }
    if (ecx == 0x5c8a7b73) {
        goto label_225;
    }
    ebx = ecx;
    if (ecx != 0x5cf05290) {
        goto label_0;
    }
    rax = *((rsp + 0x158));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x1a0)) = rax;
    rax = *((rsp + 0x1a0));
    al = (rax < *((rsp + 0x18))) ? 1 : 0;
    *((rsp + 0xfe)) = al;
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x8aa96e41;
    edi = 0xe71170cb;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x8aa96e41;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_67:
    if (ecx <= 0xc404781b) {
        goto label_226;
    }
    if (ecx <= 0xc439ab5c) {
        goto label_227;
    }
    if (ecx == 0xc439ab5d) {
        goto label_228;
    }
    if (ecx == 0xc545ec4b) {
        goto label_229;
    }
    ebx = ecx;
    if (ecx != 0xc57b60ec) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x58ac1529;
    ecx = 0x6c16832d;
    if (eax < 0x27) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_73:
    if (ecx <= 0x3df33048) {
        goto label_230;
    }
    if (ecx <= 0x3e57c130) {
        goto label_231;
    }
    if (ecx == 0x3e57c131) {
        goto label_232;
    }
    if (ecx == 0x3ef24c87) {
        goto label_233;
    }
    ebx = ecx;
    if (ecx != 0x3f3d25b2) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xfa753fa7;
    edi = 0xe2c581f4;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xfa753fa7;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_79:
    if (ecx <= 0xedc93c) {
        goto label_234;
    }
    if (ecx <= 0x188444a) {
        goto label_235;
    }
    if (ecx == 0x188444b) {
        goto label_236;
    }
    if (ecx == 0x1afdfff) {
        goto label_237;
    }
    ebx = ecx;
    if (ecx != 0x1bc8327) {
        goto label_0;
    }
    eax = *((rsp + 0x224));
    *(rsp + 0xef) = (eax < 0x3a) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x3e57c131;
    edi = 0x56b5c23f;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_85:
    if (ecx <= 0x769e673f) {
        goto label_238;
    }
    if (ecx <= 0x772f9d15) {
        goto label_239;
    }
    if (ecx == 0x772f9d16) {
        goto label_240;
    }
    if (ecx != 0x78b9d2e1) {
        goto label_241;
    }
    eax = *((rsp + 0x100));
    ebx = 0x86c00ce5;
    ecx = 0x606406ce;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_91:
    if (ecx > 0x818fdbff) {
        goto label_242;
    }
    if (ecx > 0x80e58adc) {
        goto label_243;
    }
    if (ecx == 0x801589f1) {
        goto label_244;
    }
    ebx = ecx;
    if (ecx != 0x80b76c8a) {
        goto label_0;
    }
    rax = *((rsp + 0x1a0));
    *((r12 + rax)) = 0x24;
    ebx = 0xb277a733;
    goto label_0;
label_97:
    if (ecx > 0x358e05c) {
        goto label_245;
    }
    if (ecx > 0x2c436e5) {
        goto label_246;
    }
    if (ecx == 0x1c79e0a) {
        goto label_247;
    }
    ebx = ecx;
    if (ecx != 0x291f31e) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x8308565b;
    ecx = 0x3d7ac913;
    if (eax < 0xb) {
        ebx = ecx;
    }
    goto label_0;
label_103:
    if (ecx > 0xc9b259e7) {
        goto label_248;
    }
    if (ecx > 0xc8f4dd2e) {
        goto label_249;
    }
    if (ecx == 0xc6411054) {
        goto label_250;
    }
    ebx = ecx;
    if (ecx != 0xc7af6577) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x33771324;
    ecx = 0x40705f4a;
    if (eax == 0x7e) {
        ebx = ecx;
    }
    goto label_0;
label_109:
    if (ecx > 0x413c0436) {
        goto label_251;
    }
    if (ecx > 0x4058aea0) {
        goto label_252;
    }
    if (ecx == 0x3f943256) {
        goto label_253;
    }
    ebx = ecx;
    if (ecx != 0x3f977c09) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x1c0f0a66;
    ecx = 0xa42b64e2;
    if (eax < 0x41) {
        ebx = ecx;
    }
    goto label_0;
label_114:
    if (ecx > 0xa291b1f1) {
        goto label_254;
    }
    if (ecx > 0xa2479081) {
        goto label_255;
    }
    if (ecx == 0xa1a3fefd) {
        goto label_256;
    }
    ebx = ecx;
    if (ecx != 0xa1e0ddb4) {
        goto label_0;
    }
    ebx = 0xefd68aa;
    *((rsp + 0x1d8)) = 4;
    goto label_0;
label_119:
    if (ecx > 0x22dbccd8) {
        goto label_257;
    }
    if (ecx > 0x2239dda1) {
        goto label_258;
    }
    if (ecx == 0x21476488) {
        goto label_259;
    }
    ebx = ecx;
    if (ecx != 0x215dcaa8) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x5f151cc0;
    esi = 0xbf09e2ab;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_124:
    if (ecx > 0xe71170ca) {
        goto label_260;
    }
    if (ecx > 0xe6c063fa) {
        goto label_261;
    }
    if (ecx == 0xe505cd47) {
        goto label_262;
    }
    ebx = ecx;
    if (ecx != 0xe5df4bb9) {
        goto label_0;
    }
    ebx = 0xfa2d359e;
    goto label_0;
label_129:
    if (ecx > 0x5f64e88e) {
        goto label_263;
    }
    if (ecx > 0x5e224bf4) {
        goto label_264;
    }
    if (ecx == 0x5d214147) {
        goto label_265;
    }
    ebx = ecx;
    if (ecx != 0x5d449d83) {
        goto label_0;
    }
    eax = *((rsp + 0xe4));
    ebx = 0x21476488;
    ecx = 0x4d94d578;
    if (eax < 0x5e) {
        ebx = ecx;
    }
    goto label_0;
label_134:
    if (ecx > 0x8fed880a) {
        goto label_266;
    }
    if (ecx > 0x8e6b27d6) {
        goto label_267;
    }
    if (ecx == 0x8db5617e) {
        goto label_268;
    }
    ebx = ecx;
    if (ecx != 0x8e5e5716) {
        goto label_0;
    }
    rax = *((rsp + 0x158));
    *((r12 + rax)) = 0x27;
    ebx = 0x1aa1bd92;
    goto label_0;
label_139:
    if (ecx > 0x15c13be1) {
        goto label_269;
    }
    if (ecx > 0x14c48a51) {
        goto label_270;
    }
    if (ecx == 0x12f3fb19) {
        goto label_271;
    }
    ebx = ecx;
    if (ecx != 0x13b677a8) {
        goto label_0;
    }
    rax = *((rsp + 0x618));
    rcx = *((rsp + 0xd8));
    ebx = 0x343bc9c0;
    ecx = 0x29e753b5;
    if (*((rcx + rax)) != 0) {
        ebx = ecx;
    }
    goto label_0;
label_144:
    if (ecx > 0xd6ed6018) {
        goto label_272;
    }
    if (ecx > 0xd5e42f13) {
        goto label_273;
    }
    if (ecx == 0xd5848bbe) {
        goto label_274;
    }
    ebx = ecx;
    if (ecx != 0xd5c8378c) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x76e66f88;
    esi = 0x247907a4;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_149:
    if (ecx > 0x4e08c937) {
        goto label_275;
    }
    if (ecx > 0x4d7cac30) {
        goto label_276;
    }
    if (ecx == 0x4d1daa78) {
        goto label_277;
    }
    ebx = ecx;
    if (ecx != 0x4d744617) {
        goto label_0;
    }
    ebx = 0x210997ff;
    eax = 1;
    *((rsp + 0x3f8)) = rax;
    goto label_0;
label_154:
    if (ecx > 0xb54886f4) {
        goto label_278;
    }
    if (ecx > 0xb50dada9) {
        goto label_279;
    }
    if (ecx == 0xb3f09f70) {
        goto label_280;
    }
    ebx = ecx;
    if (ecx != 0xb503f324) {
        goto label_0;
    }
    ebx = 0x474684ba;
    goto label_0;
label_159:
    if (ecx > 0x3305a3e7) {
        goto label_281;
    }
    if (ecx > 0x32ccdb66) {
        goto label_282;
    }
    if (ecx == 0x321c8b71) {
        goto label_283;
    }
    ebx = ecx;
    if (ecx != 0x328792a5) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xe93955bd;
    edi = 0xec168e7e;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xe93955bd;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_164:
    if (ecx > 0xf62b4408) {
        goto label_284;
    }
    if (ecx > 0xf5b76fcb) {
        goto label_285;
    }
    if (ecx == 0xf4a38eb5) {
        goto label_286;
    }
    ebx = ecx;
    if (ecx != 0xf4f60a1a) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x87247107;
    esi = 0xf2918a42;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_169:
    if (ecx > 0x7055f514) {
        goto label_287;
    }
    if (ecx > 0x6fa87211) {
        goto label_288;
    }
    if (ecx == 0x6e96e097) {
        goto label_289;
    }
    ebx = ecx;
    if (ecx != 0x6f44b991) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    rcx = *((rsp + 0xd8));
    *(rsp + 0x8a) = (*((rcx + rax)) == 0) ? 1 : 0;
    ebx = 0x3191bb07;
    goto label_0;
label_174:
    if (ecx > 0x899fb6e8) {
        goto label_290;
    }
    if (ecx > 0x8806c1f1) {
        goto label_291;
    }
    if (ecx == 0x86fba256) {
        goto label_292;
    }
    ebx = ecx;
    if (ecx != 0x87247107) {
        goto label_0;
    }
    ebx = 0xf4f60a1a;
    goto label_0;
label_179:
    if (ecx > 0xc450dd2) {
        goto label_293;
    }
    if (ecx > 0x90a751b) {
        goto label_294;
    }
    if (ecx == 0x84d9d9b) {
        goto label_295;
    }
    ebx = ecx;
    if (ecx != 0x84ecec6) {
        goto label_0;
    }
    rax = *((rsp + 0x488));
    *((rsp + 0x540)) = rax;
    rax = *((rsp + 0x38));
    ecx = 0;
    rcx -= rax;
    rcx -= *((rsp + 0x540));
    rcx = -rcx;
    *((rsp + 0x618)) = rcx;
    rax = *((rsp + 0x618));
    ebx = 0x343bc9c0;
    ecx = 0x13b677a8;
    if (rax < *((rsp + 0x2f8))) {
        ebx = ecx;
    }
    goto label_0;
label_184:
    if (ecx > 0xd0f74825) {
        goto label_296;
    }
    if (ecx > 0xd0a893c4) {
        goto label_297;
    }
    if (ecx == 0xd0528e2b) {
        goto label_298;
    }
    ebx = ecx;
    if (ecx != 0xd0a0c908) {
        goto label_0;
    }
    rax = *((rsp + 0x3b8));
    *((r12 + rax)) = 0x27;
    ebx = 0xedc93d;
    goto label_0;
label_189:
    if (ecx > 0x488e9f10) {
        goto label_299;
    }
    if (ecx > 0x474684b9) {
        goto label_300;
    }
    if (ecx == 0x463fd648) {
        goto label_301;
    }
    ebx = ecx;
    if (ecx != 0x469e1938) {
        goto label_0;
    }
    ebx = 0xebbcaa8f;
    goto label_0;
label_9:
    if (ecx > 0xab089048) {
        goto label_302;
    }
    if (ecx == 0xaa1d3987) {
        goto label_303;
    }
    ebx = ecx;
    if (ecx != 0xaa2d5e0d) {
        goto label_0;
    }
    eax = *((rsp + 7));
    *((rsp + 0xb)) = al;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    ebx = *((rsp + 0x598));
    goto label_0;
label_18:
    if (ecx > 0x2c4fc4b0) {
        goto label_304;
    }
    if (ecx == 0x29e753b5) {
        goto label_305;
    }
    ebx = ecx;
    if (ecx != 0x2a23f664) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x69b721b1;
    ecx = 0x3305a3e8;
    if (eax < 0x28) {
        ebx = ecx;
    }
    goto label_0;
label_26:
    if (ecx > 0xed16d497) {
        goto label_306;
    }
    if (ecx == 0xec168e7e) {
        goto label_307;
    }
    ebx = ecx;
    if (ecx != 0xece043a0) {
        goto label_0;
    }
    eax = *((rsp + 6));
    al = ~al;
    al |= 0xfe;
    ecx = *((rsp + 0x17));
    cl = ~cl;
    al = (al == 0xff) ? 1 : 0;
    al |= cl;
    al = ~al;
    al &= 1;
    *((rsp + 0xf3)) = al;
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x8cbdbf8e;
    esi = 0xc404781c;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x8cbdbf8e;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_34:
    if (ecx > 0x69b721b0) {
        goto label_308;
    }
    if (ecx == 0x685bcbd9) {
        goto label_309;
    }
    ebx = ecx;
    if (ecx != 0x68bd2e82) {
        goto label_0;
    }
    rax = *((rsp + 0x298));
    ebx = 0xd0b839b1;
    goto label_0;
label_41:
    if (ecx > 0x979250c9) {
        goto label_310;
    }
    if (ecx == 0x93869501) {
        goto label_311;
    }
    ebx = ecx;
    if (ecx != 0x95424a00) {
        goto label_0;
    }
    eax = *((rsp + 0x103));
    ebx = 0xf40318e7;
    ecx = 0x26f56da0;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x2c0));
    *((rsp + 0x370)) = rcx;
    cl = *((rsp + 0x6d));
    *((rsp + 0x1cc)) = ecx;
    goto label_0;
label_48:
    if (ecx > 0x1b6d1f7b) {
        goto label_312;
    }
    if (ecx == 0x1b13f9e5) {
        goto label_313;
    }
    ebx = ecx;
    if (ecx != 0x1b5b8cf5) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x79db7108;
    esi = 0xc545ec4b;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_55:
    if (ecx > 0xdd619990) {
        goto label_314;
    }
    if (ecx == 0xdbe658c2) {
        goto label_315;
    }
    ebx = ecx;
    if (ecx != 0xdd2c4116) {
        goto label_0;
    }
    eax = *((rsp + 0x10a));
    ebx = 0x6421dcca;
    ecx = 0x4e08c938;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_62:
    if (ecx > 0x5560227e) {
        goto label_316;
    }
    if (ecx == 0x542e2d8e) {
        goto label_317;
    }
    ebx = ecx;
    if (ecx != 0x5520d9ca) {
        goto label_0;
    }
    rax = *((rsp + 0x608));
    eax = *(rax);
    *((rsp + 0xf2)) = al;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x30));
    ebx = 0xdf39561e;
    ecx = 0x2e8b27f4;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_68:
    if (ecx > 0xbe87eca3) {
        goto label_318;
    }
    if (ecx == 0xbde04a42) {
        goto label_319;
    }
    ebx = ecx;
    if (ecx != 0xbdf24246) {
        goto label_0;
    }
    eax = 0;
    eax -= *((rsp + 0x78));
    ecx = 0xfffffff8;
    ecx -= eax;
    ebx = 0x1c448620;
    ecx = 0x517d8b8a;
    if (ecx < 3) {
        ebx = ecx;
    }
    goto label_0;
label_74:
    if (ecx > 0x3a1a9302) {
        goto label_320;
    }
    if (ecx == 0x3744cf8b) {
        goto label_321;
    }
    ebx = ecx;
    if (ecx != 0x37af597d) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0x106) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xe071787;
    esi = 0x801589f1;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_80:
    if (ecx > 0xfde961bf) {
        goto label_322;
    }
    if (ecx == 0xfcb04b0d) {
        goto label_323;
    }
    ebx = ecx;
    if (ecx != 0xfcce513b) {
        goto label_0;
    }
    eax = *((rsp + 5));
    ebx = 0xa4de526f;
    goto label_0;
label_86:
    if (ecx > 0x7ab5ed0b) {
        goto label_324;
    }
    if (ecx == 0x79db7108) {
        goto label_325;
    }
    ebx = ecx;
    if (ecx != 0x7a0a6a7e) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x96d0c29;
    esi = 0x5a0d48b;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_92:
    if (ecx > 0x8496b3ab) {
        goto label_326;
    }
    if (ecx == 0x845ebdbb) {
        goto label_327;
    }
    ebx = ecx;
    if (ecx != 0x84780ea9) {
        goto label_0;
    }
    rax = *((rsp + 0x2e0));
    rcx = *((rsp + 0x3c8));
    ebx = 0x11f5c390;
    ecx = 0x6a381ace;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_98:
    if (ecx > 0x41ebdd7) {
        goto label_328;
    }
    if (ecx == 0x3f6bc39) {
        goto label_329;
    }
    ebx = ecx;
    if (ecx != 0x40e3265) {
        goto label_0;
    }
    rax = *((rsp + 0x158));
    rax++;
    *((rsp + 0x380)) = rax;
    eax = *((rsp + 0x2f));
    *((rsp + 0x60)) = al;
    eax = *((rsp + 0x28));
    *((rsp + 0x62)) = al;
    ebx = 0x14c48a52;
    *((rsp + 0x1c8)) = 0;
    eax = *((rsp + 0x93));
    *((rsp + 0x5c)) = al;
    goto label_0;
label_104:
    if (ecx > 0xcd00382e) {
        goto label_330;
    }
    if (ecx == 0xcbf6e2e4) {
        goto label_331;
    }
    ebx = ecx;
    if (ecx != 0xcca04bce) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x3d0));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_110:
    if (ecx > 0x44c60eba) {
        goto label_332;
    }
    if (ecx == 0x444683a5) {
        goto label_333;
    }
    ebx = ecx;
    if (ecx != 0x44684037) {
        goto label_0;
    }
    rax = *((rsp + 0x1a8));
    *((rsp + 0x420)) = rax;
    ebx = 0x36180665;
    rax = *((rsp + 0x1a8));
    *((rsp + 0x478)) = rax;
    goto label_0;
label_115:
    if (ecx > 0xa4de526e) {
        goto label_334;
    }
    if (ecx == 0xa39834bf) {
        goto label_335;
    }
    ebx = ecx;
    if (ecx != 0xa42b64e2) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x41ebdd8;
    ecx = 0xbde04a42;
    if (eax < 0x3b) {
        ebx = ecx;
    }
    goto label_0;
label_120:
    if (ecx > 0x247907a3) {
        goto label_336;
    }
    if (ecx == 0x2404026c) {
        goto label_337;
    }
    ebx = ecx;
    if (ecx != 0x242cefe0) {
        goto label_0;
    }
    rax = *((rsp + 0x50));
    rax = *((rsp + 0x38));
    ebx = 0xfc7b61ca;
    goto label_0;
label_125:
    if (ecx > 0xe9b8578b) {
        goto label_338;
    }
    if (ecx == 0xe93955bd) {
        goto label_339;
    }
    ebx = ecx;
    if (ecx != 0xe97182ad) {
        goto label_0;
    }
    rax = *((rsp + 0x200));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x6a8)) = rax;
    eax = *((rsp + 0xb5));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0x10d) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xa29281fc;
    esi = 0xcf3ff6fb;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xa29281fc;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_130:
    if (ecx > 0x64b0ec14) {
        goto label_340;
    }
    if (ecx == 0x6421dcca) {
        goto label_341;
    }
    ebx = ecx;
    if (ecx != 0x64684bc8) {
        goto label_0;
    }
    ebx = 0xa5fa0793;
    goto label_0;
label_135:
    if (ecx > 0x9197529f) {
        goto label_342;
    }
    if (ecx == 0x907a2782) {
        goto label_343;
    }
    ebx = ecx;
    if (ecx != 0x909a9cb0) {
        goto label_0;
    }
    eax = *((rsp + 0x1e0));
    ebx = 0x6d17396e;
    ecx = 0x4f33571;
    if (eax < 0x2c) {
        ebx = ecx;
    }
    goto label_0;
label_140:
    if (ecx > 0x189b8cb1) {
        goto label_344;
    }
    if (ecx == 0x17fa781a) {
        goto label_345;
    }
    ebx = ecx;
    if (ecx != 0x186520f8) {
        goto label_0;
    }
    rax = *((rsp + 0x4e8));
    rax++;
    *((rsp + 0x4f0)) = rax;
    rax = *((rsp + 0x4f0));
    ebx = 0x56424ceb;
    ecx = 0x1772b798;
    if (rax < *((rsp + 0x18))) {
        ebx = ecx;
    }
    goto label_0;
label_145:
    if (ecx > 0xd94b94da) {
        goto label_346;
    }
    if (ecx == 0xd7d7ff07) {
        goto label_347;
    }
    ebx = ecx;
    if (ecx != 0xd9461648) {
        goto label_0;
    }
    rax = *((rsp + 0x188));
    *((r12 + rax)) = 0x24;
    ebx = 0xa017fab5;
    goto label_0;
label_150:
    if (ecx > 0x50f404a5) {
        goto label_348;
    }
    if (ecx == 0x502275f0) {
        goto label_349;
    }
    ebx = ecx;
    if (ecx != 0x5048d76b) {
        goto label_0;
    }
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x310));
    ebx = 0x28151f7c;
    ecx = 0x3d5dd622;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_155:
    if (ecx > 0xb99c55e6) {
        goto label_350;
    }
    if (ecx == 0xb7473953) {
        goto label_351;
    }
    ebx = ecx;
    if (ecx != 0xb938e9b6) {
        goto label_0;
    }
    rax = *((rsp + 0x460));
    *((rsp + 0x640)) = rax;
    rax = *((rsp + 0x408));
    *((rsp + 0x3c8)) = rax;
    rax = *((rsp + 0x640));
    eax = *(rax);
    *((rsp + 0xa3)) = al;
    ebx = 0x2ed29363;
    ecx = 0x84780ea9;
    if (*((rsp + 0xa3)) != 0) {
        ebx = ecx;
    }
    rax = *((rsp + 0x3c8));
    *((rsp + 0x400)) = rax;
    goto label_0;
label_160:
    if (ecx > 0x35bf9725) {
        goto label_352;
    }
    if (ecx == 0x345eb3fe) {
        goto label_353;
    }
    ebx = ecx;
    if (ecx != 0x34932270) {
        goto label_0;
    }
    rax = *((rsp + 0x500));
    *((r12 + rax)) = 0x27;
    ebx = 0x769e6740;
    goto label_0;
label_165:
    if (ecx > 0xfa753fa6) {
        goto label_354;
    }
    if (ecx == 0xf80fe662) {
        goto label_355;
    }
    ebx = ecx;
    if (ecx != 0xfa2d359e) {
        goto label_0;
    }
    rax = *((rsp + 0x2c8));
    rax++;
    *((rsp + 0x1f0)) = rax;
    rax = *((rsp + 0x1f0));
    ebx = 0x4c8f7fc6;
    ecx = 0xbd33038b;
    if (rax < *((rsp + 0x3e0))) {
        ebx = ecx;
    }
    goto label_0;
label_170:
    if (ecx > 0x72942127) {
        goto label_356;
    }
    if (ecx == 0x71f04ea7) {
        goto label_357;
    }
    ebx = ecx;
    if (ecx != 0x72679875) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    rax = *((rsp + 0x2a0));
    rax = *((rsp + 0x2a8));
    ebx = 0x1f57633a;
    goto label_0;
label_175:
    if (ecx > 0x8c7dc8fa) {
        goto label_358;
    }
    if (ecx == 0x8c24a5da) {
        goto label_359;
    }
    ebx = ecx;
    if (ecx != 0x8c5bb48a) {
        goto label_0;
    }
    ebx = 0x7556a2ef;
    eax = 1;
    *((rsp + 0x3f0)) = rax;
    goto label_0;
label_180:
    if (ecx > 0xf141f5e) {
        goto label_360;
    }
    if (ecx == 0xe3a5abb) {
        goto label_361;
    }
    ebx = ecx;
    if (ecx != 0xefd68aa) {
        goto label_0;
    }
    rax = quotearg_buffer_restyled (r12, *((rsp + 0x708)), *((rsp + 0xe0)), *((rsp + 0x710)), *((rsp + 0x1e0)), *((rsp + 0x59c)));
    goto label_1;
    *((rsp + 0x2d8)) = rax;
    ebx = 0xe0fa9a92;
    goto label_0;
label_185:
    if (ecx > 0xd2afb2fc) {
        goto label_362;
    }
    if (ecx == 0xd269f6ee) {
        goto label_363;
    }
    ebx = ecx;
    if (ecx != 0xd28c3766) {
        goto label_0;
    }
    rax = *((rsp + 0x200));
    ecx = *((rsp + 0xb7));
    *((r12 + rax)) = cl;
    ebx = 0x907a2782;
    goto label_0;
label_190:
    if (ecx > 0x4abf0361) {
        goto label_364;
    }
    if (ecx == 0x493c3b76) {
        goto label_365;
    }
    ebx = ecx;
    if (ecx != 0x4a4d6bfa) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ebx = 0xf1bf8bce;
    goto label_0;
label_194:
    if (ecx > 0xad922185) {
        goto label_366;
    }
    if (ecx == 0xad09af22) {
        goto label_367;
    }
    ebx = ecx;
    if (ecx != 0xad334f92) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x254b4437;
    edi = 0xa05e7ea0;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x254b4437;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_198:
    if (ecx > 0x2fc4f9be) {
        goto label_368;
    }
    if (ecx == 0x2ea4b4af) {
        goto label_369;
    }
    ebx = ecx;
    if (ecx != 0x2ed29363) {
        goto label_0;
    }
    rax = strlen (*((rsp + 0x528)));
    *((rsp + 0x238)) = rax;
    eax = *((rsp + 0x78));
    *((rsp + 0x174)) = eax;
    rax = *((rsp + 0x638));
    *((rsp + 0x260)) = rax;
    rax = *((rsp + 0x528));
    *((rsp + 0x258)) = rax;
    rax = *((rsp + 0x528));
    *((rsp + 0x230)) = rax;
    ebx = 0xbce22603;
    *((rsp + 0x29)) = 1;
    al = *((rsp + 0x46));
    *((rsp + 0x248)) = rax;
    rax = *((rsp + 0x400));
    *((rsp + 0x228)) = rax;
    goto label_0;
label_202:
    if (ecx > 0xf2918a41) {
        goto label_370;
    }
    if (ecx == 0xf1800c4e) {
        goto label_371;
    }
    ebx = ecx;
    if (ecx != 0xf1bf8bce) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0x113) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x4a4d6bfa;
    edi = 0xd76bead3;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_206:
    if (ecx > 0x6c9365dd) {
        goto label_372;
    }
    if (ecx == 0x6c237beb) {
        goto label_373;
    }
    ebx = ecx;
    if (ecx != 0x6c517cf1) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xd2afb2fd;
    edi = 0x6c237beb;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_210:
    if (ecx > 0x9a5f25db) {
        goto label_374;
    }
    if (ecx == 0x99e104ec) {
        goto label_375;
    }
    ebx = ecx;
    if (ecx != 0x9a5b5d54) {
        goto label_0;
    }
    eax = *((rsp + 0xf0));
    ebx = 0x478c0b56;
    ecx = 0x86ca0291;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_214:
    if (ecx > 0x1f576339) {
        goto label_376;
    }
    if (ecx == 0x1e4b1911) {
        goto label_377;
    }
    ebx = ecx;
    if (ecx != 0x1e50de9e) {
        goto label_0;
    }
    eax = *((rsp + 0xb6));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0x10c) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x685bcbd9;
    esi = 0xca9cf90b;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_218:
    if (ecx > 0xe115bb2e) {
        goto label_378;
    }
    if (ecx == 0xe0439c1c) {
        goto label_379;
    }
    ebx = ecx;
    if (ecx == 0xe0fa9a92) {
        goto label_380;
    }
    goto label_0;
label_222:
    if (ecx > 0x5928f61d) {
        goto label_381;
    }
    if (ecx == 0x588a7749) {
        goto label_382;
    }
    ebx = ecx;
    if (ecx != 0x58ac1529) {
        goto label_0;
    }
    eax = *((rsp + 0x4c));
    ebx = 0x8c24a5da;
    ecx = 0x3ef24c87;
    if (eax == 2) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13b = 1;
    r14d = 0;
    rbp = *((rsp + 0x18));
    *((rsp + 9)) = 1;
    goto label_0;
label_226:
    if (ecx > 0xc2c487cc) {
        goto label_383;
    }
    if (ecx == 0xc0e38214) {
        goto label_384;
    }
    ebx = ecx;
    if (ecx != 0xc15e8dcc) {
        goto label_0;
    }
    rax = *((rsp + 0x290));
    rcx = 0x95855e3b8b8bd1eb;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x500)) = rax;
    rax = *((rsp + 0x500));
    al = (rax < *((rsp + 0x2b0))) ? 1 : 0;
    *((rsp + 0xf8)) = al;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xfe601b6a;
    esi = 0x1afdfff;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xfe601b6a;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_230:
    if (ecx > 0x3d7ac912) {
        goto label_385;
    }
    ebx = *((rsp + 0x5a4));
    if (ecx == 0x3d5304a0) {
        goto label_0;
    }
    ebx = ecx;
    if (ecx != 0x3d5dd622) {
        goto label_0;
    }
    rax = *((rsp + 0x310));
    ecx = *((rsp + 0xa9));
    *((r12 + rax)) = cl;
    ebx = 0x28151f7c;
    goto label_0;
label_234:
    if (ecx > 0x4eecdf) {
        goto label_386;
    }
    if (ecx == 0xffd4cc3b) {
        goto label_387;
    }
    ebx = ecx;
    if (ecx != 0xfffb48cc) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x937d3aa9;
    esi = 0x44c60ebb;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_238:
    if (ecx > 0x7556a2ee) {
        goto label_388;
    }
    if (ecx == 0x74e37602) {
        goto label_389;
    }
    ebx = ecx;
    if (ecx != 0x74f15e6e) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_242:
    if (ecx > 0x8308565a) {
        goto label_390;
    }
    if (ecx == 0x818fdc00) {
        goto label_391;
    }
    ebx = ecx;
    if (ecx != 0x82741e22) {
        goto label_0;
    }
    rax = *((rsp + 0x428));
    *((rsp + 0x2b0)) = rax;
    rax = *((rsp + 0x470));
    *((rsp + 0x6d0)) = rax;
    rax = *((rsp + 0x30));
    ebx = 0x1b5b8cf5;
    ecx = 0x9f790679;
    if (rax < *((rsp + 0x2b0))) {
        ebx = ecx;
    }
    goto label_0;
label_245:
    if (ecx > 0x36b7740) {
        goto label_392;
    }
    if (ecx == 0x358e05d) {
        goto label_393;
    }
    ebx = ecx;
    if (ecx != 0x3604764) {
        goto label_0;
    }
    rax = *((rsp + 0x2b8));
    *((rsp + 0x288)) = rax;
    ebx = 0x718a964e;
    *((rsp + 0x168)) = 0x34;
    al = *((rsp + 0x92));
    *((rsp + 0x164)) = eax;
    goto label_0;
label_248:
    if (ecx > 0xcae6db4e) {
        goto label_394;
    }
    if (ecx == 0xc9b259e8) {
        goto label_395;
    }
    ebx = ecx;
    if (ecx != 0xca9cf90b) {
        goto label_0;
    }
    eax = *((rsp + 0x10c));
    ebx = 0x9baa4478;
    ecx = 0xf0414557;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x2c8));
    *((rsp + 0x398)) = rcx;
    cl = *((rsp + 0x6f));
    *((rsp + 0x1d4)) = ecx;
    goto label_0;
label_251:
    if (ecx > 0x430014e7) {
        goto label_396;
    }
    if (ecx == 0x413c0437) {
        goto label_397;
    }
    ebx = ecx;
    if (ecx != 0x41a64a7c) {
        goto label_0;
    }
    eax = *((rsp + 0xc));
    al = ~al;
    al |= 0xfe;
    *(rsp + 0x111) = (al != 0xff) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xd85bd8;
    edi = 0xb3f09f70;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xd85bd8;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_254:
    if (ecx > 0xa32c858f) {
        goto label_398;
    }
    if (ecx == 0xa291b1f2) {
        goto label_399;
    }
    ebx = ecx;
    if (ecx != 0xa29281fc) {
        goto label_0;
    }
    rax = *((rsp + 0x200));
    rax = *((rsp + 0x200));
    rax = *((rsp + 0x200));
    eax = *((rsp + 0xb5));
    ebx = 0xe97182ad;
    goto label_0;
label_257:
    if (ecx > 0x237828bf) {
        goto label_400;
    }
    if (ecx == 0x22dbccd9) {
        goto label_401;
    }
    ebx = ecx;
    if (ecx != 0x23258f82) {
        goto label_0;
    }
    rax = *((rsp + 0x298));
    ebx = 0x9b2e8bdd;
    ecx = 0xfc1c9283;
    if (rax == 0xfffffffffffffffe) {
        ebx = ecx;
    }
    goto label_0;
label_260:
    if (ecx > 0xe7eb55e7) {
        goto label_402;
    }
    if (ecx == 0xe71170cb) {
        goto label_403;
    }
    ebx = ecx;
    if (ecx != 0xe79bc0fc) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x64684bc8;
    edi = 0xa5fa0793;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x64684bc8;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_263:
    if (ecx > 0x61f04be6) {
        goto label_404;
    }
    if (ecx == 0x5f64e88f) {
        goto label_405;
    }
    ebx = ecx;
    if (ecx != 0x606406ce) {
        goto label_0;
    }
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xe183be88;
    esi = 0x7055f515;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xe183be88;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_266:
    if (ecx > 0x904950ee) {
        goto label_406;
    }
    if (ecx == 0x8fed880b) {
        goto label_407;
    }
    ebx = ecx;
    if (ecx != 0x9013d1b8) {
        goto label_0;
    }
    ebx = 0xe0fa9a92;
    rcx = *((rsp + 0x588));
    *((rsp + 0x2d8)) = rcx;
    goto label_0;
label_269:
    if (ecx > 0x168fb00e) {
        goto label_408;
    }
    if (ecx == 0x15c13be2) {
        goto label_409;
    }
    ebx = ecx;
    if (ecx != 0x166eec79) {
        goto label_0;
    }
    rax = *((rsp + 0x1f8));
    rax = *((rsp + 0x1f8));
    rax = *((rsp + 0x1f8));
    rax = *((rsp + 0x1f8));
    rax = *((rsp + 0x3b0));
    ebx = 0x845ebdbb;
    goto label_0;
label_272:
    if (ecx > 0xd76bead2) {
        goto label_410;
    }
    if (ecx == 0xd6ed6019) {
        goto label_411;
    }
    ebx = ecx;
    if (ecx != 0xd7484011) {
        goto label_0;
    }
    eax = *((rsp + 0x2f));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0xcae6db4f;
    ecx = 0xef5f2398;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x158));
    *((rsp + 0x360)) = rcx;
    eax = *((rsp + 0x2f));
    *((rsp + 0x61)) = al;
    goto label_0;
label_275:
    if (ecx > 0x4f1e95e8) {
        goto label_412;
    }
    if (ecx == 0x4e08c938) {
        goto label_413;
    }
    ebx = ecx;
    if (ecx != 0x4f015bee) {
        goto label_0;
    }
    rax = *((rsp + 0x2a8));
    ebx = 0xcd00382f;
    goto label_0;
label_278:
    if (ecx > 0xb5e3f2fb) {
        goto label_414;
    }
    if (ecx == 0xb54886f5) {
        goto label_415;
    }
    ebx = ecx;
    if (ecx != 0xb5b02117) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_281:
    if (ecx > 0x34266f97) {
        goto label_416;
    }
    if (ecx == 0x3305a3e8) {
        goto label_417;
    }
    ebx = ecx;
    if (ecx != 0x33771324) {
        goto label_0;
    }
    ebx = 0x2fc4f9bf;
    goto label_0;
label_284:
    if (ecx > 0xf6f2acdb) {
        goto label_418;
    }
    if (ecx == 0xf62b4409) {
        goto label_419;
    }
    ebx = ecx;
    if (ecx != 0xf6aa0458) {
        goto label_0;
    }
    rax = *((rsp + 0x198));
    al = (rax < *((rsp + 0x18))) ? 1 : 0;
    *((rsp + 0xf0)) = al;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x2c436e6;
    esi = 0x9a5b5d54;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x2c436e6;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_287:
    if (ecx > 0x716251e3) {
        goto label_420;
    }
    if (ecx == 0x7055f515) {
        goto label_421;
    }
    ebx = ecx;
    if (ecx != 0x70f864ef) {
        goto label_0;
    }
    eax = *((rsp + 0x4c));
    ebx = 0x6a95c23c;
    ecx = 0xd57d627a;
    if (eax < 5) {
        ebx = ecx;
    }
    goto label_0;
label_290:
    if (ecx > 0x8c0dae30) {
        goto label_422;
    }
    if (ecx == 0x899fb6e9) {
        goto label_423;
    }
    ebx = ecx;
    if (ecx != 0x8aa96e41) {
        goto label_0;
    }
    rax = *((rsp + 0x158));
    rax = *((rsp + 0x158));
    rax = *((rsp + 0x158));
    rax = *((rsp + 0x18));
    ebx = 0x5cf05290;
    goto label_0;
label_293:
    if (ecx > 0xd95f3fa) {
        goto label_424;
    }
    if (ecx == 0xc450dd3) {
        goto label_425;
    }
    ebx = ecx;
    if (ecx != 0xd70e8cd) {
        goto label_0;
    }
    eax = *((rsp + 0x4c));
    *((rsp + 0x31c)) = eax;
    rax = *((rsp + 0x538));
    *((rsp + 0x5f0)) = rax;
    rax = *((rsp + 0x530));
    *((rsp + 0x5f8)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x5d0)) = rax;
    rax = *((rsp + 0x2a8));
    *((rsp + 0x5c8)) = rax;
    rax = *((rsp + 0x2a0));
    *((rsp + 0x5c0)) = rax;
    al = *((rsp + 0x91));
    *((rsp + 0x5b8)) = rax;
    rax = *((rsp + 0x1a8));
    *((rsp + 0x5e8)) = rax;
    eax = *((rsp + 6));
    *((rsp + 0xa1)) = al;
    al = *((rsp + 4));
    *((rsp + 0x5b0)) = rax;
    al = *((rsp + 5));
    *((rsp + 0x5d8)) = rax;
    eax = *((rsp + 0xc));
    *((rsp + 0xa0)) = al;
    rax = *((rsp + 0x70));
    *((rsp + 0x5e0)) = rax;
    ebx = 0xf47da62d;
    goto label_0;
label_296:
    if (ecx > 0xd12115a2) {
        goto label_426;
    }
    if (ecx == 0xd0f74826) {
        goto label_427;
    }
    ebx = ecx;
    if (ecx != 0xd10a6d5f) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x1985a806;
    esi = 0x517301d7;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_299:
    if (ecx > 0x48cf4544) {
        goto label_428;
    }
    if (ecx == 0x488e9f11) {
        goto label_429;
    }
    ebx = ecx;
    if (ecx != 0x48b31e8b) {
        goto label_0;
    }
    ebx = 0xead3b09b;
    goto label_0;
label_10:
    if (ecx == 0xab29d9fe) {
        goto label_430;
    }
    ebx = ecx;
    if (ecx != 0xab421706) {
        goto label_0;
    }
    rax = strlen (*((rsp + 0xd8)));
    *((rsp + 0x340)) = rax;
    ebx = 0xd656cbfc;
    *((rsp + 0x5e)) = 1;
    eax = 0;
    *((rsp + 0x320)) = rax;
    goto label_0;
label_19:
    if (ecx == 0x2daf1d96) {
        goto label_431;
    }
    ebx = ecx;
    if (ecx != 0x2e34a855) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4f015bee;
    esi = 0xcd00382f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_27:
    if (ecx == 0xef34cea9) {
        goto label_432;
    }
    ebx = ecx;
    if (ecx != 0xef5f2398) {
        goto label_0;
    }
    eax = *((rsp + 0x61));
    *((rsp + 0x11b)) = al;
    rax = *((rsp + 0x360));
    *((rsp + 0x308)) = rax;
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x6d04cff4;
    edi = 0xed16d498;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x6d04cff4;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_35:
    if (ecx == 0x6a95c23c) {
        goto label_433;
    }
    ebx = ecx;
    if (ecx != 0x6abfbb66) {
        goto label_0;
    }
    eax = *((rsp + 0x108));
    ebx = 0xa8aa827e;
    ecx = 0xf489befe;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_42:
    if (ecx == 0x987bad63) {
        goto label_434;
    }
    ebx = ecx;
    if (ecx != 0x99627dfc) {
        goto label_0;
    }
    rax = *((rsp + 0x3c0));
    *((r12 + rax)) = 0x27;
    ebx = 0x53b9bd27;
    goto label_0;
label_49:
    if (ecx == 0x1c0f0a66) {
        goto label_435;
    }
    ebx = ecx;
    if (ecx != 0x1c448620) {
        goto label_0;
    }
    ebx = 0x776ebbec;
    goto label_0;
label_56:
    if (ecx == 0xde160a9d) {
        goto label_436;
    }
    ebx = ecx;
    if (ecx != 0xde480b4b) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    rax = *((rsp + 0x38));
    rax = *((rsp + 0x50));
    ebx = 0xa9cfed3b;
    goto label_0;
label_63:
    if (ecx == 0x56424ceb) {
        goto label_437;
    }
    ebx = ecx;
    if (ecx != 0x567ae8df) {
        goto label_0;
    }
    eax = *((rsp + 0x101));
    ebx = 0x74e37602;
    ecx = 0x585d4b17;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_69:
    if (ecx == 0xbf09e2ab) {
        goto label_438;
    }
    ebx = ecx;
    if (ecx != 0xbf98188a) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0xf16893a9;
    ecx = 0x6c16832d;
    if (eax < 0x61) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_75:
    if (ecx == 0x3b302745) {
        goto label_439;
    }
    ebx = ecx;
    if (ecx != 0x3b69b7c5) {
        goto label_0;
    }
    rax = rsp + 0x4c8;
    *((rsp + 0x508)) = rax;
    rax = *((rsp + 0x508));
    rax = *((rsp + 0x508));
    *(rax) = 0;
    rax = *((rsp + 0x50));
    *(rsp + 0xfa) = (rax == -1) ? 1 : 0;
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x20ad9820;
    edi = 0xd5e42f14;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x20ad9820;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_81:
    if (ecx == 0xfe601b6a) {
        goto label_440;
    }
    ebx = ecx;
    if (ecx != 0xfec3243c) {
        goto label_0;
    }
    rax = *((rsp + 0x4d8));
    *((r12 + rax)) = 0x30;
    ebx = 0x488e9f11;
    goto label_0;
label_87:
    if (ecx == 0x7d77e7fa) {
        goto label_441;
    }
    ebx = ecx;
    if (ecx != 0x7f1f0cde) {
        goto label_0;
    }
    eax = *((rsp + 0x8f));
    ebx = 0xa8240c7f;
    ecx = 0x4bc7d91d;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_93:
    if (ecx == 0x8541207c) {
        goto label_442;
    }
    ebx = ecx;
    if (ecx != 0x854f827b) {
        goto label_0;
    }
    rax = *((rsp + 0x150));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x690)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xff8bdf28;
    esi = 0x413c0437;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_99:
    if (ecx == 0x4bb9205) {
        goto label_443;
    }
    ebx = ecx;
    if (ecx != 0x4f33571) {
        goto label_0;
    }
    ebx = 0x904950ef;
    ecx = 0x8c24a5da;
    if (*((rsp + 0x1e0)) == 0) {
        ebx = ecx;
    }
    rax = *((rsp + 0x558));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x550));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x548));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 0x94));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 0xb3));
    *((rsp + 0xb)) = cl;
    ecx = *((rsp + 0x11d));
    *((rsp + 0xa)) = cl;
    r14b = *((rsp + 0xb2));
    r13b = *((rsp + 0xb1));
    rbp = *((rsp + 0x18));
    goto label_0;
label_105:
    if (ecx == 0xcd81ccc0) {
        goto label_444;
    }
    ebx = ecx;
    if (ecx != 0xce6d1c0c) {
        goto label_0;
    }
    eax = *((rsp + 0x4c));
    ebx = 0x51dccb19;
    goto label_0;
label_111:
    if (ecx == 0x450db67a) {
        goto label_445;
    }
    ebx = ecx;
    if (ecx != 0x45525a8e) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ebx = 0xcd81ccc0;
    goto label_0;
label_116:
    if (ecx == 0xa6259562) {
        goto label_446;
    }
    ebx = ecx;
    if (ecx != 0xa8240c7f) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    rax += *((rsp + 0x650));
    *((rsp + 0x620)) = rax;
    eax = *((rsp + 7));
    *((rsp + 0x8b)) = al;
    rax = *((rsp + 0x38));
    *((rsp + 0x498)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x490)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0x87)) = al;
    ebx = 0x2fd2fe70;
    *((rsp + 0x210)) = 0;
    eax = *((rsp + 8));
    *((rsp + 0x85)) = al;
    goto label_0;
label_121:
    if (ecx == 0x254b4437) {
        goto label_447;
    }
    ebx = ecx;
    if (ecx != 0x26f56da0) {
        goto label_0;
    }
    eax = *((rsp + 0x1cc));
    *((rsp + 0x11c)) = al;
    rax = *((rsp + 0x370));
    *((rsp + 0x1f8)) = rax;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x1f8));
    ebx = 0xbfe9c25a;
    ecx = 0x99d99f42;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_126:
    if (ecx == 0xead3b09b) {
        goto label_448;
    }
    ebx = ecx;
    if (ecx != 0xeb7760c8) {
        goto label_0;
    }
    eax = *((rsp + 0x91));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0x2e) = ((cl & al) != 0) ? 1 : 0;
    eax = *((rsp + 0x4c));
    *(rsp + 0xa5) = (eax != 2) ? 1 : 0;
    eax = *((rsp + 0x2e));
    ecx = *((rsp + 0xa5));
    al = ~al;
    cl = ~cl;
    cl |= al;
    cl = ~cl;
    cl &= 1;
    *((rsp + 0xa6)) = cl;
    *(rsp + 0x17) = (*((rsp + 0x2a0)) != 0) ? 1 : 0;
    eax = *((rsp + 0xa6));
    ecx = *((rsp + 0x17));
    cl ^= al;
    ebx = 0x168fb00f;
    edx = 0x73122a89;
    if (al != 0) {
        ebx = edx;
    }
    ecx = 0x168fb00f;
    if ((cl & 1) != 0) {
        ebx = ecx;
    }
    *((rsp + 0x184)) = 0;
    rax = *((rsp + 0x1a8));
    *((rsp + 0x2d0)) = rax;
    goto label_0;
label_131:
    if (ecx == 0x6669c20a) {
        goto label_449;
    }
    ebx = ecx;
    if (ecx != 0x673363b1) {
        goto label_0;
    }
    rax = *((rsp + 0x670));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x190));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x668));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x660));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 0x47));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 0xb4));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x1b0));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_136:
    if (ecx == 0x921578f4) {
        goto label_450;
    }
    ebx = ecx;
    if (ecx != 0x924e7bcf) {
        goto label_0;
    }
    eax = *((rsp + 0xa8));
    ebx = 0x2e34a855;
    ecx = 0x32e7a8e9;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_141:
    if (ecx == 0x19599461) {
        goto label_451;
    }
    ebx = ecx;
    if (ecx != 0x19738bca) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xd85bd8;
    edi = 0x41a64a7c;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_146:
    if (ecx == 0xd9d8a039) {
        goto label_452;
    }
    ebx = ecx;
    if (ecx != 0xda9fc772) {
        goto label_0;
    }
    rax = *((rsp + 0x2c8));
    *((r12 + rax)) = 0x27;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x818fdc00;
    esi = 0xe5df4bb9;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_151:
    if (ecx == 0x517d8b8a) {
        goto label_453;
    }
    ebx = ecx;
    if (ecx != 0x51dccb19) {
        goto label_0;
    }
    eax = *((rsp + 0x4c));
    *(rsp + 0xfd) = (eax == 2) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xce6d1c0c;
    edi = 0x8e6b27d7;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xce6d1c0c;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_156:
    if (ecx == 0xbbe78ec2) {
        goto label_454;
    }
    ebx = ecx;
    if (ecx != 0xbbfd043b) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0x1bdbbe1f;
    ecx = 0x887e3825;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0x2d)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0x280)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x278)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x270)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x268)) = rax;
    ecx = *((rsp + 4));
    *((rsp + 0x2c)) = cl;
    ecx = *((rsp + 5));
    *((rsp + 0x2b)) = cl;
    *((rsp + 0x170)) = 0;
    rax = *((rsp + 0x18));
    *((rsp + 0x240)) = rax;
    *((rsp + 0x16c)) = 0;
    goto label_0;
label_161:
    if (ecx == 0x35f93fcf) {
        goto label_455;
    }
    ebx = ecx;
    if (ecx != 0x36180665) {
        goto label_0;
    }
    rax = *((rsp + 0x420));
    *((rsp + 0x3d0)) = rax;
    rax = *((rsp + 0x688));
    ebx = 0x168fb00f;
    ecx = 0x93869501;
    if (rax <= *((rsp + 0x478))) {
        ebx = ecx;
    }
    *((rsp + 0x184)) = 0;
    rax = *((rsp + 0x3d0));
    *((rsp + 0x2d0)) = rax;
    goto label_0;
label_166:
    if (ecx == 0xfae5bf0f) {
        goto label_456;
    }
    ebx = ecx;
    if (ecx != 0xfc047c01) {
        goto label_0;
    }
    rax = *((rsp + 0x128));
    *((rsp + 0x678)) = rax;
    eax = *((rsp + 0x98));
    *((rsp + 0x1e4)) = eax;
    eax = *((rsp + 0xd));
    *((rsp + 0x125)) = al;
    eax = *((rsp + 0xe));
    *((rsp + 0x126)) = al;
    eax = *((rsp + 0xf));
    *((rsp + 0x127)) = al;
    rax = *((rsp + 0x130));
    *((rsp + 0x680)) = rax;
    rax = *((rsp + 0x138));
    *((rsp + 0x6f0)) = rax;
    rax = *((rsp + 0x140));
    *((rsp + 0x6f8)) = rax;
    rax = *((rsp + 0x148));
    *((rsp + 0x700)) = rax;
    ebx = 0xf629c21a;
    goto label_0;
label_171:
    if (ecx == 0x72fbfc44) {
        goto label_457;
    }
    ebx = ecx;
    if (ecx != 0x72ff24b8) {
        goto label_0;
    }
    ebx = 0x72f1432c;
    goto label_0;
label_176:
    if (ecx == 0x8ca3c1b5) {
        goto label_458;
    }
    ebx = ecx;
    if (ecx != 0x8cbdbf8e) {
        goto label_0;
    }
    eax = *((rsp + 6));
    eax = *((rsp + 0x17));
    eax = *((rsp + 0x17));
    eax = *((rsp + 0x17));
    eax = *((rsp + 0x17));
    eax = *((rsp + 0x17));
    eax = *((rsp + 0x17));
    ebx = 0xece043a0;
    goto label_0;
label_181:
    if (ecx == 0x1152b13b) {
        goto label_459;
    }
    ebx = ecx;
    if (ecx != 0x1152fe9f) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x68bd2e82;
    edi = 0xd0b839b1;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x68bd2e82;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_186:
    if (ecx == 0xd361cdb4) {
        goto label_460;
    }
    ebx = ecx;
    if (ecx != 0xd37781ff) {
        goto label_0;
    }
    rax = *((rsp + 0x510));
    rax += *((rsp + 0x150));
    rcx = *((rsp + 0xd8));
    eax = *((rcx + rax));
    *((rsp + 0xe4)) = eax;
    ebx = 0xd5848bbe;
    goto label_0;
label_191:
    if (ecx == 0x4b200e3d) {
        goto label_461;
    }
    ebx = ecx;
    if (ecx != 0x4bc7d91d) {
        goto label_0;
    }
    eax = *((rsp + 7));
    *((rsp + 0x65)) = al;
    al = *((rsp + 0xa7));
    *((rsp + 0x1d0)) = eax;
    rax = *((rsp + 0x38));
    *((rsp + 0x388)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x328)) = rax;
    rax = *((rsp + 0x658));
    *((rsp + 0x378)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0x64)) = al;
    ebx = 0xc6411054;
    *((rsp + 0x1c0)) = 0;
    ecx = *((rsp + 8));
    *((rsp + 0x63)) = cl;
    *((rsp + 0x1bc)) = 0;
    goto label_0;
label_195:
    if (ecx == 0xaf8ea2be) {
        goto label_462;
    }
    ebx = ecx;
    if (ecx != 0xb08aa57a) {
        goto label_0;
    }
    rax = *((rsp + 0x18));
    rax = *((rsp + 0x30));
    ebx = 0xa1a3fefd;
    goto label_0;
label_199:
    if (ecx == 0x2ffa816a) {
        goto label_463;
    }
    ebx = ecx;
    if (ecx != 0x3049bebf) {
        goto label_0;
    }
    eax = *((rsp + 0x10b));
    ebx = 0xf0414557;
    ecx = 0xb1f1cc67;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x2c8));
    *((rsp + 0x398)) = rcx;
    cl = *((rsp + 0x6f));
    *((rsp + 0x1d4)) = ecx;
    goto label_0;
label_203:
    if (ecx == 0xf3936389) {
        goto label_464;
    }
    ebx = ecx;
    if (ecx != 0xf40318e7) {
        goto label_0;
    }
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x2c0));
    ebx = 0x99c3d827;
    ecx = 0x8db5617e;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_207:
    if (ecx == 0x6d17396e) {
        goto label_465;
    }
    ebx = ecx;
    if (ecx != 0x6d8d4b69) {
        goto label_0;
    }
    ebx = 0xba232e25;
    goto label_0;
label_211:
    if (ecx == 0x9baa4478) {
        goto label_466;
    }
    ebx = ecx;
    if (ecx != 0x9f790679) {
        goto label_0;
    }
    rax = *((rsp + 0x30));
    *((r12 + rax)) = 0x27;
    ebx = 0x1b5b8cf5;
    goto label_0;
label_215:
    if (ecx == 0x205ca629) {
        goto label_467;
    }
    ebx = ecx;
    if (ecx != 0x20ad9820) {
        goto label_0;
    }
    *((rsp + 0x4c8)) = 0;
    rax = *((rsp + 0x50));
    ebx = 0x3b69b7c5;
    goto label_0;
label_219:
    if (ecx == 0xe1ef74ec) {
        goto label_468;
    }
    ebx = ecx;
    if (ecx != 0xe21f50c8) {
        goto label_0;
    }
    rax = quotearg_buffer_restyled (r12, *((rsp + 0x70)), *((rsp + 0xe0)), *((rsp + 0x1a8)), 5, *((rsp + 0x5a8)));
    goto label_1;
    *((rsp + 0x2d8)) = rax;
    ebx = 0xe0fa9a92;
    goto label_0;
label_223:
    if (ecx == 0x5a9a35ff) {
        goto label_469;
    }
    ebx = ecx;
    if (ecx != 0x5bbf59fc) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0xc7af6577;
    ecx = 0xdfca699e;
    if (eax < 0x7e) {
        ebx = ecx;
    }
    goto label_0;
label_227:
    if (ecx == 0xc404781c) {
        goto label_470;
    }
    ebx = ecx;
    if (ecx != 0xc40518d4) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x85ab3af3;
    esi = 0x827152f;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x85ab3af3;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_231:
    if (ecx == 0x3df33049) {
        goto label_471;
    }
    ebx = ecx;
    if (ecx != 0x3e183d64) {
        goto label_0;
    }
    r15 = *((rsp + 0x4f8));
    r15++;
    rax = *((rsp + 0x4e0));
    *((rsp + 0xc8)) = rax;
    eax = *((rsp + 0xf2));
    *((rsp + 0xb)) = al;
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    ebx = 0x8c24a5da;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_235:
    if (ecx == 0xedc93d) {
        goto label_472;
    }
    ebx = ecx;
    if (ecx != 0x11d40d5) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xc06cebc3;
    edi = 0xb6f0d4c4;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xc06cebc3;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_239:
    if (ecx == 0x769e6740) {
        goto label_473;
    }
    ebx = ecx;
    if (ecx != 0x76e66f88) {
        goto label_0;
    }
    rax = *((rsp + 0x1a8));
    rax = *((rsp + 0x38));
    ebx = 0x247907a4;
    goto label_0;
label_243:
    if (ecx == 0x80e58add) {
        goto label_474;
    }
    ebx = ecx;
    if (ecx != 0x814bd11f) {
        goto label_0;
    }
    ecx = *((rsp + 0x6e));
    eax = ecx;
    al >>= 5;
    eax = (int32_t) al;
    rdx = *((rsp + 0x750));
    eax = *((rdx + rax*4));
    edx = 0xfffffffe;
    edx = rotate_left32 (edx, cl);
    eax = ~eax;
    eax |= edx;
    ebx = 0x3c7a6eac;
    ecx = 0xc0e38214;
    if (eax != 0xffffffff) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x580));
    *((rsp + 0x368)) = rcx;
    rcx = *((rsp + 0x578));
    *((rsp + 0x358)) = rcx;
    rcx = *((rsp + 0x570));
    *((rsp + 0x350)) = rcx;
    rcx = *((rsp + 0x568));
    *((rsp + 0x348)) = rcx;
    ecx = *((rsp + 0x97));
    *((rsp + 0x68)) = cl;
    ecx = *((rsp + 0x96));
    *((rsp + 0x67)) = cl;
    ecx = *((rsp + 0x6e));
    *((rsp + 0x66)) = cl;
    al = *((rsp + 0x95));
    *((rsp + 0x1c4)) = eax;
    rax = *((rsp + 0x560));
    *((rsp + 0x330)) = rax;
    goto label_0;
label_246:
    if (ecx == 0x2c436e6) {
        goto label_475;
    }
    ebx = ecx;
    if (ecx != 0x30e4c46) {
        goto label_0;
    }
    eax = iswprint (*((rsp + 0x5a8)));
    ebx = 0x11d40d5;
    ecx = 0xf6f2acdc;
    if (eax != 0) {
        ebx = ecx;
    }
    cl = *((rsp + 0x92));
    *((rsp + 0x20c)) = ecx;
    goto label_0;
label_249:
    if (ecx == 0xc8f4dd2f) {
        goto label_476;
    }
    ebx = ecx;
    if (ecx != 0xc90721ad) {
        goto label_0;
    }
    rax = *((rsp + 0x50));
    ebx = 0x12f3fb19;
    goto label_0;
label_252:
    if (ecx == 0x4058aea1) {
        goto label_477;
    }
    ebx = ecx;
    if (ecx != 0x40705f4a) {
        goto label_0;
    }
    ebx = 0xb50dadaa;
    ecx = 0x8c24a5da;
    if (*((rsp + 0x38)) != 0) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_255:
    if (ecx == 0xa2479082) {
        goto label_478;
    }
    ebx = ecx;
    if (ecx != 0xa274c3d7) {
        goto label_0;
    }
    eax = *((rsp + 7));
    *((rsp + 0xb)) = al;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    ebx = 0x8c24a5da;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_258:
    if (ecx == 0x2239dda2) {
        goto label_479;
    }
    ebx = ecx;
    if (ecx != 0x2272a057) {
        goto label_0;
    }
    ebx = 0xa8aa827e;
    goto label_0;
label_261:
    if (ecx == 0xe6c063fb) {
        goto label_480;
    }
    ebx = ecx;
    if (ecx != 0xe6eea5ff) {
        goto label_0;
    }
    rax = *((rsp + 0x3c0));
    rcx = 0xa854942f3fde69f6;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x390)) = rax;
    ebx = 0xd78107b6;
    *((rsp + 0x69)) = 1;
    goto label_0;
label_264:
    if (ecx == 0x5e224bf5) {
        goto label_481;
    }
    ebx = ecx;
    if (ecx != 0x5f151cc0) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ebx = 0xbf09e2ab;
    goto label_0;
label_267:
    if (ecx == 0x8e6b27d7) {
        goto label_482;
    }
    ebx = ecx;
    if (ecx != 0x8ea31f68) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xd28c3766;
    esi = 0x907a2782;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xd28c3766;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_270:
    if (ecx == 0x14c48a52) {
        goto label_483;
    }
    ebx = ecx;
    if (ecx != 0x14e6b6a7) {
        goto label_0;
    }
    eax = *((rsp + 0x28));
    al >>= 6;
    al |= 0x30;
    rcx = *((rsp + 0x1e8));
    *((r12 + rcx)) = al;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x52189ca8;
    esi = 0xdb0e22e3;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_273:
    if (ecx == 0xd5e42f14) {
        goto label_484;
    }
    ebx = ecx;
    if (ecx != 0xd656cbfc) {
        goto label_0;
    }
    eax = *((rsp + 0x5e));
    *((rsp + 0x92)) = al;
    rax = *((rsp + 0x320));
    *((rsp + 0x2b8)) = rax;
    rax = *((rsp + 0x340));
    *((rsp + 0x2f8)) = rax;
    *((rsp + 0x610)) = rdi;
    rax = *((rsp + 0x610));
    rax = *((rsp + 0x38));
    ecx = 0;
    rcx -= rax;
    rcx -= *((rsp + 0x2b8));
    rcx = -rcx;
    *((rsp + 0x510)) = rcx;
    rsi = *((rsp + 0x510));
    rsi += *((rsp + 0xd8));
    rax = *((rsp + 0x510));
    rcx = 0x755d4414387dfe31;
    rdx += rcx;
    rdx -= rax;
    rdx -= rcx;
    rax = rpl_mbrtowc (rsp + 0x5a8, *(rsi), *((rsp + 0x2f8)), rsp + 0x4c8);
    *((rsp + 0x298)) = rax;
    ebx = 0x1152fe9f;
    ecx = 0x3604764;
    if (*((rsp + 0x298)) == 0) {
        ebx = ecx;
    }
    goto label_0;
label_276:
    if (ecx == 0x4d7cac31) {
        goto label_485;
    }
    ebx = ecx;
    if (ecx != 0x4d94d578) {
        goto label_0;
    }
    eax = *((rsp + 0xe4));
    eax += 0xffffffa5;
    ebx = 0x4bfc67b3;
    ecx = 0x2ffa816a;
    if (eax < 2) {
        ebx = ecx;
    }
    goto label_0;
label_279:
    if (ecx == 0xb50dadaa) {
        goto label_486;
    }
    ebx = ecx;
    if (ecx != 0xb51aa1e0) {
        goto label_0;
    }
    eax = *((rsp + 0xd4));
    ebx = 0x6ac8cb42;
    ecx = 0x8d221414;
    if (eax == 0x2f) {
        ebx = ecx;
    }
    goto label_0;
label_282:
    if (ecx == 0x32ccdb67) {
        goto label_487;
    }
    ebx = ecx;
    if (ecx != 0x32e7a8e9) {
        goto label_0;
    }
    eax = *((rsp + 6));
    al = ~al;
    al |= 0xfe;
    ebx = 0x921578f4;
    ecx = 0x2e34a855;
    if (al != 0xff) {
        ebx = ecx;
    }
    goto label_0;
label_285:
    if (ecx == 0xf5b76fcc) {
        goto label_488;
    }
    ebx = ecx;
    if (ecx != 0xf629c21a) {
        goto label_0;
    }
    eax = *((rsp + 0x1e4));
    ebx = 0xa006a680;
    ecx = 0x27b0e6a0;
    if (eax < 0xf) {
        ebx = ecx;
    }
    goto label_0;
label_288:
    if (ecx == 0x6fa87212) {
        goto label_489;
    }
    ebx = ecx;
    if (ecx != 0x6ff040c5) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0xfcb04b0d;
    ecx = 0xcca04bce;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    goto label_0;
label_291:
    if (ecx == 0x8806c1f2) {
        goto label_490;
    }
    ebx = ecx;
    if (ecx != 0x887e3825) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_294:
    if (ecx == 0x90a751c) {
        goto label_491;
    }
    ebx = ecx;
    if (ecx != 0x96d0c29) {
        goto label_0;
    }
    ebx = 0x5a0d48b;
    goto label_0;
label_297:
    if (ecx == 0xd0a893c5) {
        goto label_492;
    }
    ebx = ecx;
    if (ecx != 0xd0b839b1) {
        goto label_0;
    }
    rax = *((rsp + 0x298));
    *(rsp + 0xfb) = (rax == -1) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x68bd2e82;
    esi = 0x4d1daa78;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_300:
    if (ecx == 0x474684ba) {
        goto label_493;
    }
    ebx = ecx;
    if (ecx != 0x478c0b56) {
        goto label_0;
    }
    rax = *((rsp + 0x198));
    rcx = 0xb9ad4f989f629c18;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x4d8)) = rax;
    rax = *((rsp + 0x4d8));
    ebx = 0x488e9f11;
    ecx = 0xfec3243c;
    if (rax < *((rsp + 0x18))) {
        ebx = ecx;
    }
    goto label_0;
label_302:
    if (ecx == 0xab089049) {
        goto label_494;
    }
    ebx = ecx;
    if (ecx != 0xab0db9ed) {
        goto label_0;
    }
    eax = *((rsp + 0x1dc));
    ebx = 0xffd4cc3b;
    ecx = 0x1c797df4;
    if (eax == 0x34) {
        ebx = ecx;
    }
    goto label_0;
label_304:
    if (ecx == 0x2c4fc4b1) {
        goto label_495;
    }
    ebx = ecx;
    if (ecx != 0x2cead78a) {
        goto label_0;
    }
    eax = *((rsp + 0xd4));
    ebx = 0x6ac8cb42;
    ecx = 0x8d221414;
    if (eax == 0x2d) {
        ebx = ecx;
    }
    goto label_0;
label_306:
    if (ecx == 0xed16d498) {
        goto label_496;
    }
    ebx = ecx;
    if (ecx != 0xef2e7778) {
        goto label_0;
    }
    eax = *((rsp + 0x78));
    ebx = 0xf4573b1a;
    ecx = 0xbfce0403;
    if (eax < 3) {
        ebx = ecx;
    }
    eax = *((rsp + 0x6a));
    *((rsp + 0x5b)) = al;
    eax = *((rsp + 0x46));
    *((rsp + 0x5f)) = al;
    goto label_0;
label_308:
    if (ecx == 0x69b721b1) {
        goto label_497;
    }
    ebx = ecx;
    if (ecx != 0x6a381ace) {
        goto label_0;
    }
    rax = *((rsp + 0x3c8));
    ecx = *((rsp + 0xa3));
    *((r12 + rax)) = cl;
    ebx = 0x11f5c390;
    goto label_0;
label_310:
    if (ecx == 0x979250ca) {
        goto label_498;
    }
    ebx = ecx;
    if (ecx != 0x979d5f2a) {
        goto label_0;
    }
    eax = *((rsp + 0xa2));
    ebx = 0xd7d7ff07;
    ecx = 0x3f3d25b2;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_312:
    if (ecx == 0x1b6d1f7c) {
        goto label_499;
    }
    ebx = ecx;
    if (ecx != 0x1bdbbe1f) {
        goto label_0;
    }
    rax = *((rsp + 0x240));
    *((rsp + 0x3e0)) = rax;
    eax = *((rsp + 0x170));
    *((rsp + 0xb5)) = al;
    eax = *((rsp + 0x16c));
    *((rsp + 0xb6)) = al;
    eax = *((rsp + 0x2d));
    *((rsp + 0xb7)) = al;
    eax = *((rsp + 0x2b));
    *((rsp + 0x123)) = al;
    eax = *((rsp + 0x2c));
    *((rsp + 0x6f)) = al;
    rax = *((rsp + 0x268));
    *((rsp + 0x6d8)) = rax;
    rax = *((rsp + 0x270));
    *((rsp + 0x6e0)) = rax;
    rax = *((rsp + 0x278));
    *((rsp + 0x2c8)) = rax;
    rax = *((rsp + 0x280));
    *((rsp + 0x6e8)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x15c13be2;
    esi = 0xc450dd3;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_314:
    if (ecx == 0xdd619991) {
        goto label_500;
    }
    ebx = ecx;
    if (ecx != 0xddee8aa6) {
        goto label_0;
    }
    ebx = 0x19599461;
    *((rsp + 0x214)) = 0;
    goto label_0;
label_316:
    if (ecx == 0x5560227f) {
        goto label_501;
    }
    ebx = ecx;
    if (ecx != 0x55ebe1ed) {
        goto label_0;
    }
    eax = *((rsp + 0xec));
    ebx = 0x6c9365de;
    ecx = 0xfae5bf0f;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_318:
    if (ecx == 0xbe87eca4) {
        goto label_502;
    }
    ebx = ecx;
    if (ecx != 0xbe928c44) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x6e2b8d00;
    esi = 0xa39834bf;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_320:
    if (ecx == 0x3a1a9303) {
        goto label_503;
    }
    ebx = ecx;
    if (ecx != 0x3a48834c) {
        goto label_0;
    }
    rax = strlen (*((rsp + 0xd8)));
    ebx = 0x36180665;
    *((rsp + 0x478)) = rax;
    *((rsp + 0x420)) = rax;
    goto label_0;
label_322:
    if (ecx == 0xfde961c0) {
        goto label_504;
    }
    ebx = ecx;
    if (ecx != 0xfe21887d) {
        goto label_0;
    }
    rax = *((rsp + 0x518));
    *((r12 + rax)) = 0x27;
    ebx = 0x123b74cc;
    goto label_0;
label_324:
    if (ecx == 0x7ab5ed0c) {
        goto label_505;
    }
    ebx = ecx;
    if (ecx != 0x7d5dfac9) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0x1e4b1911;
    ecx = 0x463fd648;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    goto label_0;
label_326:
    if (ecx == 0x8496b3ac) {
        goto label_506;
    }
    ebx = ecx;
    if (ecx != 0x852bf69e) {
        goto label_0;
    }
    eax = *((rsp + 0x2e));
    ebx = 0x4bc7d91d;
    ecx = 0x7f1f0cde;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_328:
    if (ecx == 0x41ebdd8) {
        goto label_507;
    }
    ebx = ecx;
    if (ecx != 0x4b3ab74) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_330:
    if (ecx == 0xcd00382f) {
        goto label_508;
    }
    ebx = ecx;
    if (ecx != 0xcd200855) {
        goto label_0;
    }
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0xf;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_332:
    if (ecx == 0x44c60ebb) {
        goto label_509;
    }
    ebx = ecx;
    if (ecx != 0x44f55ca5) {
        goto label_0;
    }
    eax = mbsinit (rsp + 0x4c8);
    ebx = 0x1c797df4;
    ecx = 0xd656cbfc;
    if (eax == 0) {
        ebx = ecx;
    }
    rax = *((rsp + 0x2f8));
    *((rsp + 0x340)) = rax;
    rax = *((rsp + 0x648));
    *((rsp + 0x320)) = rax;
    eax = *((rsp + 0xae));
    *((rsp + 0x5e)) = al;
    goto label_0;
label_334:
    if (ecx == 0xa4de526f) {
        goto label_510;
    }
    ebx = ecx;
    if (ecx != 0xa5fa0793) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x64684bc8;
    edi = 0xff29cad6;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_336:
    if (ecx == 0x247907a4) {
        goto label_511;
    }
    ebx = ecx;
    if (ecx != 0x24b142c5) {
        goto label_0;
    }
    ebx = 0x86c00ce5;
    goto label_0;
label_338:
    if (ecx == 0xe9b8578c) {
        goto label_512;
    }
    ebx = ecx;
    if (ecx != 0xea242090) {
        goto label_0;
    }
    eax = *((rsp + 0xf6));
    ebx = 0xb50dadaa;
    ecx = 0x8c24a5da;
    if (al != 0) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_340:
    if (ecx == 0x64b0ec15) {
        goto label_513;
    }
    ebx = ecx;
    if (ecx != 0x65b5f4e9) {
        goto label_0;
    }
    rax = *((rsp + 0x3a0));
    *((rsp + 0x588)) = rax;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x588));
    ebx = 0xd2b1e792;
    ecx = 0x8541207c;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_342:
    if (ecx == 0x919752a0) {
        goto label_514;
    }
    ebx = ecx;
    if (ecx != 0x919e8acd) {
        goto label_0;
    }
    eax = *((rsp + 0x10f));
    ebx = 0x924e7bcf;
    ecx = 0x321c8b71;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x1a8));
    *((rsp + 0x4b8)) = rcx;
    rcx = *((rsp + 0x18));
    *((rsp + 0x4a8)) = rcx;
    goto label_0;
label_344:
    if (ecx == 0x189b8cb2) {
        goto label_515;
    }
    ebx = ecx;
    if (ecx != 0x19053d64) {
        goto label_0;
    }
    rax = *((rsp + 0x3a8));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x4d0)) = rax;
    rax = *((rsp + 0x4d0));
    ebx = 0x1b6d1f7c;
    ecx = 0x6ac819e1;
    if (rax < *((rsp + 0x18))) {
        ebx = ecx;
    }
    goto label_0;
label_346:
    if (ecx == 0xd94b94db) {
        goto label_516;
    }
    ebx = ecx;
    if (ecx != 0xd9ca87f2) {
        goto label_0;
    }
    rax = gettext_quote (0x419464, *((rsp + 0x78)));
    *((rsp + 0x450)) = rax;
    rax = gettext_quote (0x419466, *((rsp + 0x78)));
    *((rsp + 0x440)) = rax;
    ebx = 0xf01d5f68;
    goto label_0;
label_348:
    if (ecx == 0x50f404a6) {
        goto label_517;
    }
    ebx = ecx;
    if (ecx != 0x517301d7) {
        goto label_0;
    }
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x1985a806;
    edi = 0xcf3454b5;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x1985a806;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_350:
    if (ecx == 0xb99c55e7) {
        goto label_518;
    }
    ebx = ecx;
    if (ecx != 0xba232e25) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x6d8d4b69;
    esi = 0x72942128;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x6d8d4b69;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_352:
    if (ecx == 0x35bf9726) {
        goto label_519;
    }
    ebx = ecx;
    if (ecx != 0x35df7d5b) {
        goto label_0;
    }
    ebx = 0xe0fa9a92;
    *((rsp + 0x2d8)) = rcx;
    goto label_0;
label_354:
    if (ecx == 0xfa753fa7) {
        goto label_520;
    }
    ebx = ecx;
    if (ecx != 0xfac72058) {
        goto label_0;
    }
    rax = *((rsp + 0x3e8));
    ebx = 0xd03f7463;
    goto label_0;
label_356:
    if (ecx == 0x72942128) {
        goto label_521;
    }
    ebx = ecx;
    if (ecx != 0x72f1432c) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x72ff24b8;
    edi = 0xaa1d3987;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_358:
    if (ecx == 0x8c7dc8fb) {
        goto label_522;
    }
    ebx = ecx;
    if (ecx != 0x8c9e3ac8) {
        goto label_0;
    }
    ebx = 0x82741e22;
    rax = *((rsp + 0x18));
    *((rsp + 0x470)) = rax;
    eax = 0;
    *((rsp + 0x428)) = rax;
    goto label_0;
label_360:
    if (ecx == 0xf141f5f) {
        goto label_523;
    }
    ebx = ecx;
    if (ecx != 0xf672297) {
        goto label_0;
    }
    eax = *((rsp + 0xee));
    ebx = 0x19053d64;
    ecx = 0xad334f92;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_362:
    if (ecx == 0xd2afb2fd) {
        goto label_524;
    }
    ebx = ecx;
    if (ecx != 0xd2b1e792) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x588a7749;
    esi = 0xf5b76fcc;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_364:
    if (ecx == 0x4abf0362) {
        goto label_525;
    }
    ebx = ecx;
    if (ecx != 0x4ac008a5) {
        goto label_0;
    }
    rax = *((rsp + 0x2e0));
    ebx = 0x4c2360a1;
    goto label_0;
label_366:
    if (ecx == 0xad922186) {
        goto label_526;
    }
    ebx = ecx;
    if (ecx != 0xadf05288) {
        goto label_0;
    }
    eax = *((rsp + 0x5d));
    *((rsp + 0x119)) = al;
    rax = *((rsp + 0x338));
    *((rsp + 0x178)) = rax;
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x178));
    ebx = 0x328792a5;
    ecx = 0x32ccdb67;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_368:
    if (ecx == 0x2fc4f9bf) {
        goto label_527;
    }
    ebx = ecx;
    if (ecx != 0x2fd2fe70) {
        goto label_0;
    }
    eax = *((rsp + 0x210));
    *((rsp + 0x93)) = al;
    eax = *((rsp + 0x85));
    *((rsp + 0x6b)) = al;
    eax = *((rsp + 0x8b));
    *((rsp + 0x28)) = al;
    eax = *((rsp + 0x87));
    *((rsp + 0x2f)) = al;
    rax = *((rsp + 0x490));
    *((rsp + 0x158)) = rax;
    rax = *((rsp + 0x498));
    *((rsp + 0x300)) = rax;
    eax = *((rsp + 0x2e));
    ebx = 0x2ea1cc92;
    ecx = 0x5928f61e;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_370:
    if (ecx == 0xf2918a42) {
        goto label_528;
    }
    ebx = ecx;
    if (ecx != 0xf3877854) {
        goto label_0;
    }
    eax = *((rsp + 0xd4));
    ebx = 0xd0f74826;
    ecx = 0x2ea4b4af;
    if (eax < 0x27) {
        ebx = ecx;
    }
    goto label_0;
label_372:
    if (ecx == 0x6c9365de) {
        goto label_529;
    }
    ebx = ecx;
    if (ecx != 0x6d04cff4) {
        goto label_0;
    }
    rax = *((rsp + 0x18));
    rax = *((rsp + 0x308));
    ebx = 0xed16d498;
    goto label_0;
label_374:
    if (ecx == 0x9a5f25dc) {
        goto label_530;
    }
    ebx = ecx;
    if (ecx != 0x9b2e8bdd) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xf4a38eb5;
    edi = 0x35f93fcf;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_376:
    if (ecx == 0x1f57633a) {
        goto label_531;
    }
    ebx = ecx;
    if (ecx == 0x2016e3e6) {
        goto label_2;
    }
    goto label_0;
label_378:
    if (ecx == 0xe115bb2f) {
        goto label_532;
    }
    ebx = ecx;
    if (ecx != 0xe183be88) {
        goto label_0;
    }
    rax = *((rsp + 0x308));
    *((r12 + rax)) = 0x5c;
    ebx = 0x7055f515;
    goto label_0;
label_381:
    if (ecx == 0x5928f61e) {
        goto label_533;
    }
    ebx = ecx;
    if (ecx != 0x5a0c6bc4) {
        goto label_0;
    }
    ebx = 0x1c79e0a;
    *((rsp + 0x84)) = 1;
    eax = *((rsp + 0x86));
    *((rsp + 0x7f)) = al;
    goto label_0;
label_383:
    if (ecx == 0xc2c487cd) {
        goto label_534;
    }
    ebx = ecx;
    if (ecx != 0xc3b8ff87) {
        goto label_0;
    }
    ebx = 0x8c0dae31;
    *((rsp + 0x27)) = 0x66;
    goto label_0;
label_385:
    if (ecx == 0x3d7ac913) {
        goto label_535;
    }
    ebx = ecx;
    if (ecx != 0x3da24cba) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x818fdc00;
    edi = 0xda9fc772;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x818fdc00;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_386:
    if (ecx == 0x4eece0) {
        goto label_536;
    }
    ebx = ecx;
    if (ecx != 0xd85bd8) {
        goto label_0;
    }
    eax = *((rsp + 0xc));
    ebx = 0x41a64a7c;
    goto label_0;
label_388:
    if (ecx == 0x7556a2ef) {
        goto label_537;
    }
    ebx = ecx;
    if (ecx != 0x763bb334) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x8ca3c1b5;
    ecx = 0xa32c8590;
    if (eax < 0x21) {
        ebx = ecx;
    }
    goto label_0;
label_390:
    if (ecx == 0x8308565b) {
        goto label_538;
    }
    ebx = ecx;
    if (ecx != 0x83bf188e) {
        goto label_0;
    }
    ebx = 0x7ab5ed0c;
    goto label_0;
label_392:
    if (ecx == 0x36b7741) {
        goto label_539;
    }
    ebx = ecx;
    if (ecx != 0x3d81ec5) {
        goto label_0;
    }
    eax = *((rsp + 0x78));
    ebx = 0xbdf24246;
    ecx = 0x4abf0362;
    if (eax < 8) {
        ebx = ecx;
    }
    goto label_0;
label_394:
    if (ecx == 0xcae6db4f) {
        goto label_540;
    }
    ebx = ecx;
    if (ecx != 0xcae8c16d) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0x8c24a5da;
    ecx = 0x7a0a6a7e;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13b = *((rsp + 0xad));
    r14d = 0;
    rbp = *((rsp + 0x18));
    goto label_0;
label_396:
    if (ecx == 0x430014e8) {
        goto label_541;
    }
    ebx = ecx;
    if (ecx != 0x43c9a383) {
        goto label_0;
    }
    eax = *((rsp + 0xf4));
    ebx = 0x8c0dae31;
    ecx = 0xb5e3f2fc;
    if (al != 0) {
        ebx = ecx;
    }
    eax = *((rsp + 0xac));
    *((rsp + 0x27)) = al;
    goto label_0;
label_398:
    if (ecx == 0xa32c8590) {
        goto label_542;
    }
    ebx = ecx;
    if (ecx != 0xa345d757) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    ebx = 0x33771324;
    ecx = 0x2c4fc4b1;
    if (eax == 0xd) {
        ebx = ecx;
    }
    goto label_0;
label_400:
    if (ecx == 0x237828c0) {
        goto label_543;
    }
    ebx = ecx;
    if (ecx != 0x237f6b20) {
        goto label_0;
    }
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x83bf188e;
    esi = 0x7ab5ed0c;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x83bf188e;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_402:
    if (ecx == 0xe7eb55e8) {
        goto label_544;
    }
    ebx = ecx;
    if (ecx != 0xe932044e) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x4eece0;
    edi = 0x5a9a35ff;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_404:
    if (ecx == 0x61f04be7) {
        goto label_545;
    }
    ebx = ecx;
    if (ecx != 0x62009500) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xa29281fc;
    edi = 0xe97182ad;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xa29281fc;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_406:
    if (ecx == 0x904950ef) {
        goto label_546;
    }
    ebx = ecx;
    if (ecx != 0x905483de) {
        goto label_0;
    }
    eax = *((rsp + 0x112));
    ebx = 0x65b5f4e9;
    ecx = 0x17fa781a;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x30));
    *((rsp + 0x3a0)) = rcx;
    goto label_0;
label_408:
    if (ecx == 0x168fb00f) {
        goto label_547;
    }
    ebx = ecx;
    if (ecx != 0x1772b798) {
        goto label_0;
    }
    rax = *((rsp + 0x4f0));
    *((r12 + rax)) = 0x22;
    ebx = 0x56424ceb;
    goto label_0;
label_410:
    if (ecx == 0xd76bead3) {
        goto label_548;
    }
    ebx = ecx;
    if (ecx != 0xd78107b6) {
        goto label_0;
    }
    eax = *((rsp + 0x69));
    *((rsp + 0x122)) = al;
    rax = *((rsp + 0x390));
    *((rsp + 0x3d8)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x61f04be7;
    esi = 0x444683a5;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_412:
    if (ecx == 0x4f1e95e9) {
        goto label_549;
    }
    ebx = ecx;
    if (ecx != 0x4f82916d) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x987bad63;
    esi = 0x979d5f2a;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_414:
    if (ecx == 0xb5e3f2fc) {
        goto label_550;
    }
    ebx = ecx;
    if (ecx != 0xb6f0d4c4) {
        goto label_0;
    }
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xc06cebc3;
    esi = 0x358e05d;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_416:
    if (ecx == 0x34266f98) {
        goto label_551;
    }
    ebx = ecx;
    if (ecx != 0x343bc9c0) {
        goto label_0;
    }
    ebx = 0x718a964e;
    *((rsp + 0x168)) = 0x34;
    rcx = *((rsp + 0x540));
    *((rsp + 0x288)) = rcx;
    *((rsp + 0x164)) = 0;
    goto label_0;
label_418:
    if (ecx == 0xf6f2acdc) {
        goto label_552;
    }
    ebx = ecx;
    if (ecx != 0xf7047695) {
        goto label_0;
    }
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xfe601b6a;
    edi = 0xc15e8dcc;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xfe601b6a;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_420:
    if (ecx == 0x716251e4) {
        goto label_553;
    }
    ebx = ecx;
    if (ecx != 0x718a964e) {
        goto label_0;
    }
    eax = *((rsp + 0x164));
    *((rsp + 0xae)) = al;
    rax = *((rsp + 0x288));
    *((rsp + 0x648)) = rax;
    eax = *((rsp + 0x168));
    *((rsp + 0x1dc)) = eax;
    rax = *((rsp + 0x610));
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x469e1938;
    esi = 0xebbcaa8f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_422:
    if (ecx == 0x8c0dae31) {
        goto label_554;
    }
    ebx = ecx;
    if (ecx != 0x8c248cb7) {
        goto label_0;
    }
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xab29d9fe;
    esi = 0x51ea4f01;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xab29d9fe;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_424:
    if (ecx == 0xd95f3fb) {
        goto label_555;
    }
    ebx = ecx;
    if (ecx != 0xe071787) {
        goto label_0;
    }
    eax = *((rsp + 6));
    ebx = 0x37af597d;
    goto label_0;
label_426:
    if (ecx == 0xd12115a3) {
        goto label_556;
    }
    ebx = ecx;
    if (ecx != 0xd1331ebe) {
        goto label_0;
    }
    eax = *((rsp + 0xd4));
    ebx = 0x502275f0;
    ecx = 0xf3877854;
    if (eax < 0x2d) {
        ebx = ecx;
    }
    goto label_0;
label_428:
    if (ecx == 0x48cf4545) {
        goto label_557;
    }
    ebx = ecx;
    if (ecx != 0x4907bff3) {
        goto label_0;
    }
    rax = *((rsp + 0x4b0));
    *((rsp + 0x3e8)) = rax;
    rax = *((rsp + 0x4c0));
    *((rsp + 0x310)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xfac72058;
    edi = 0xd03f7463;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_11:
    eax = *((rsp + 0x78));
    ebx = 0x3d81ec5;
    ecx = 0x80e58add;
    if (eax < 7) {
        ebx = ecx;
    }
    goto label_0;
label_12:
    eax = *((rsp + 0x10));
    ebx = 0xf16893a9;
    ecx = 0x6c16832d;
    if (eax < 0x5f) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_20:
    rax = *((rsp + 0x4e8));
    *((r12 + rax)) = 0x22;
    ebx = 0x186520f8;
    goto label_0;
label_21:
    rax = *((rsp + 0x30));
    *((r12 + rax)) = 0x3f;
    ebx = 0xdf39561e;
    goto label_0;
label_28:
    rax = *((rsp + 0x440));
    *((rsp + 0x528)) = rax;
    rax = *((rsp + 0x450));
    *((rsp + 0x638)) = rax;
    eax = *((rsp + 0x46));
    al = ~al;
    al |= 0xfe;
    ebx = 0x5e224bf5;
    ecx = 0x2ed29363;
    if (al != 0xff) {
        ebx = ecx;
    }
    eax = 0;
    *((rsp + 0x400)) = rax;
    goto label_0;
label_29:
    eax = *((rsp + 0x1d4));
    *((rsp + 0x124)) = al;
    rax = *((rsp + 0x398));
    *((rsp + 0x200)) = rax;
    rax = *((rsp + 0x3e0));
    rcx = *((rsp + 0x200));
    ebx = 0x62009500;
    ecx = 0x8ea31f68;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_36:
    rax = *((rsp + 0x4d0));
    *((r12 + rax)) = 0x27;
    ebx = 0x1b6d1f7c;
    goto label_0;
label_37:
    eax = *((rsp + 7));
    *((rsp + 0xb)) = al;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    ebx = 0x8c24a5da;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_43:
    rax = *((rsp + 0x2c0));
    rcx = 0x8eaad9cd1f150c5;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x3b8)) = rax;
    rax = *((rsp + 0x3b8));
    ebx = 0x474684ba;
    ecx = 0x2404026c;
    if (rax < *((rsp + 0x18))) {
        ebx = ecx;
    }
    goto label_0;
label_44:
    rax = *((rsp + 0x3b0));
    *((rsp + 0x498)) = rax;
    rax = *((rsp + 0x698));
    *((rsp + 0x490)) = rax;
    eax = *((rsp + 0x104));
    *((rsp + 0x8b)) = al;
    eax = *((rsp + 0x11c));
    *((rsp + 0x87)) = al;
    eax = *((rsp + 0xaf));
    *((rsp + 0x85)) = al;
    ebx = 0x2fd2fe70;
    cl = *((rsp + 0x6c));
    *((rsp + 0x210)) = ecx;
    goto label_0;
label_50:
    ebx = 0x2239dda2;
    *((rsp + 0x218)) = 0;
    goto label_0;
label_51:
    ebx = 0x5a0c6bc4;
    ecx = 0xec128de1;
    if (*((rsp + 0x78)) <= 0) {
        ebx = ecx;
    }
    eax = *((rsp + 0x6a));
    *((rsp + 0x86)) = al;
    goto label_0;
label_57:
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0xe)) = 1;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_58:
    rax = *((rsp + 0x30));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x4e8)) = rax;
    rax = *((rsp + 0x4e8));
    ebx = 0x186520f8;
    ecx = 0x2e58c625;
    if (rax < *((rsp + 0x18))) {
        ebx = ecx;
    }
    goto label_0;
label_64:
    ebx = 0x70f864ef;
    goto label_0;
label_65:
    eax = *((rsp + 0xef));
    ebx = 0xab089049;
    ecx = 0x6fa87212;
    if (al != 0) {
        ebx = ecx;
    }
    rax = *((rsp + 0x198));
    *((rsp + 0x250)) = rax;
    goto label_0;
label_70:
    eax = *((rsp + 0x5f));
    *((rsp + 0xab)) = al;
    eax = *((rsp + 0x5b));
    *((rsp + 0x118)) = al;
    eax = *((rsp + 0xab));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0x50f404a6;
    ecx = 0x210997ff;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    eax = 0;
    *((rsp + 0x3f8)) = rax;
    goto label_0;
label_71:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x166eec79;
    edi = 0x845ebdbb;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x166eec79;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_76:
    eax = *((rsp + 0x11f));
    al = ~al;
    al |= 0xfe;
    ebx = 0x1bdbbe1f;
    ecx = 0xc0e38214;
    if (al != 0xff) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x580));
    *((rsp + 0x368)) = rcx;
    rcx = *((rsp + 0x578));
    *((rsp + 0x358)) = rcx;
    rcx = *((rsp + 0x570));
    *((rsp + 0x350)) = rcx;
    rcx = *((rsp + 0x568));
    *((rsp + 0x348)) = rcx;
    ecx = *((rsp + 0x97));
    *((rsp + 0x68)) = cl;
    ecx = *((rsp + 0x96));
    *((rsp + 0x67)) = cl;
    ecx = *((rsp + 0x6e));
    *((rsp + 0x66)) = cl;
    al = *((rsp + 0x95));
    *((rsp + 0x1c4)) = eax;
    rax = *((rsp + 0x560));
    *((rsp + 0x330)) = rax;
    rax = *((rsp + 0x580));
    *((rsp + 0x280)) = rax;
    rax = *((rsp + 0x578));
    *((rsp + 0x278)) = rax;
    rax = *((rsp + 0x570));
    *((rsp + 0x270)) = rax;
    rax = *((rsp + 0x568));
    *((rsp + 0x268)) = rax;
    ecx = *((rsp + 0x97));
    *((rsp + 0x2c)) = cl;
    ecx = *((rsp + 0x96));
    *((rsp + 0x2b)) = cl;
    ecx = *((rsp + 0x6e));
    *((rsp + 0x2d)) = cl;
    al = *((rsp + 0x11e));
    *((rsp + 0x16c)) = eax;
    al = *((rsp + 0x95));
    *((rsp + 0x170)) = eax;
    rax = *((rsp + 0x560));
    *((rsp + 0x240)) = rax;
    goto label_0;
label_77:
    eax = *((rsp + 0x109));
    ebx = 0xe6eea5ff;
    ecx = 0xe6c063fb;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_82:
    eax = *((rsp + 0xd4));
    ebx = 0xa2479082;
    ecx = 0xb51aa1e0;
    if (eax < 0x3c) {
        ebx = ecx;
    }
    goto label_0;
label_83:
    ebx = 0x99e104ec;
    *((rsp + 0x2a)) = 0x6e;
    goto label_0;
label_88:
    rax = *((rsp + 0x158));
    *((r12 + rax)) = 0x5c;
    ebx = 0x40e3265;
    goto label_0;
label_89:
    rax = *((rsp + 0x1b0));
    rcx = *((rsp + 0x190));
    ebx = 0xe505cd47;
    ecx = 0x1afa8b6d;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_94:
    rax = *((rsp + 0x30));
    eax = *((rsp + 0x4c));
    ebx = 0x827152f;
    goto label_0;
label_95:
    rax = *((rsp + 0x308));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x1e8)) = rax;
    rax = *((rsp + 0x1e8));
    ebx = 0xbe928c44;
    ecx = 0x4bb9205;
    if (rax < *((rsp + 0x18))) {
        ebx = ecx;
    }
    goto label_0;
label_100:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x96d0c29;
    edi = 0x74f15e6e;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_101:
    ebx = 0xbfce0403;
    *((rsp + 0x5b)) = 1;
    eax = *((rsp + 0x90));
    *((rsp + 0x5f)) = al;
    goto label_0;
label_106:
    ebx = 0x8c0dae31;
    *((rsp + 0x27)) = 0x76;
    goto label_0;
label_107:
    eax = *((rsp + 0x10d));
    ebx = 0xe9b8578c;
    ecx = 0x7d77e7fa;
    if (al != 0) {
        ebx = ecx;
    }
    cl = *((rsp + 0xc));
    *((rsp + 0x220)) = ecx;
    goto label_0;
label_112:
    rax = *((rsp + 0x4f8));
    *((r12 + rax)) = 0x3f;
    ebx = 0x3e183d64;
    goto label_0;
label_113:
    *(r12) = 0x27;
    ebx = 0x4d744617;
    goto label_0;
label_117:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xa6259562;
    esi = 0xe115bb2f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_118:
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x48b31e8b;
    esi = 0xead3b09b;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x48b31e8b;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_122:
    ebx = 0x35df7d5b;
    ecx = 0x5c0a0c03;
    if (*((rsp + 0x1e4)) == 0) {
        ebx = ecx;
    }
    goto label_0;
label_123:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x9a5f25dc;
    edi = 0xe2f70d41;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_127:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x469e1938;
    edi = 0x4b200e3d;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_128:
    eax = *((rsp + 0xe4));
    ebx = 0x4bfc67b3;
    ecx = 0x2ffa816a;
    if (eax == 0x7c) {
        ebx = ecx;
    }
    goto label_0;
label_132:
    ebx = 0x19599461;
    *((rsp + 0x214)) = 0x10;
    goto label_0;
label_133:
    eax = *((rsp + 7));
    *((rsp + 0xb)) = al;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    ebx = *((rsp + 0x59c));
    goto label_0;
label_137:
    ebx = 0xb1216b7f;
    goto label_0;
label_138:
    rax = *((rsp + 0x198));
    *((r12 + rax)) = 0x30;
    ebx = 0x542e2d8e;
    goto label_0;
label_142:
    ebx = 0x517301d7;
    goto label_0;
label_143:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x8aa96e41;
    edi = 0x5cf05290;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x8aa96e41;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_147:
    ebx = 0xbe928c44;
    goto label_0;
label_148:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xf141f5f;
    esi = 0xd9d8a039;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_152:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xab29d9fe;
    esi = 0xd94b94db;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_153:
    eax = *((rsp + 0x28));
    al >>= 6;
    al = ~al;
    al &= 0xe3;
    al ^= 0xd3;
    rcx = *((rsp + 0x1e8));
    *((r12 + rcx)) = al;
    ebx = 0x14e6b6a7;
    goto label_0;
label_157:
    eax = *((rsp + 0xff));
    ebx = 0x123b74cc;
    ecx = 0xfe21887d;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_158:
    rax = *((rsp + 0x248));
    *((rsp + 6)) = al;
    eax = *((rsp + 0x29));
    *((rsp + 0x91)) = al;
    rax = *((rsp + 0x238));
    *((rsp + 0x2a0)) = rax;
    rax = *((rsp + 0x230));
    *((rsp + 0x2a8)) = rax;
    rax = *((rsp + 0x258));
    *((rsp + 0x530)) = rax;
    rax = *((rsp + 0x260));
    *((rsp + 0x538)) = rax;
    eax = *((rsp + 0x174));
    *((rsp + 0x4c)) = eax;
    rax = *((rsp + 0x6c8));
    *((rsp + 0x468)) = rax;
    rax = *((rsp + 0x6c0));
    *((rsp + 0x458)) = rax;
    eax = *((rsp + 0x117));
    *((rsp + 0x82)) = al;
    eax = *((rsp + 0x116));
    *((rsp + 0x81)) = al;
    eax = *((rsp + 0x115));
    *((rsp + 0x80)) = al;
    ebx = 0x21424190;
    rax = *((rsp + 0x2e0));
    *((rsp + 0x448)) = rax;
    rax = *((rsp + 0x228));
    *((rsp + 0x410)) = rax;
    eax = 0;
    *((rsp + 0x418)) = rax;
    goto label_0;
label_162:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x72ff24b8;
    edi = 0x72f1432c;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_163:
    eax = *((rsp + 0x2e));
    ebx = 0x99e104ec;
    ecx = 0x772f9d16;
    if (al != 0) {
        ebx = ecx;
    }
    eax = *((rsp + 7));
    *((rsp + 0x2a)) = al;
    goto label_0;
label_167:
    ebx = 0x84ecec6;
    rcx = *((rsp + 0x2b8));
    *((rsp + 0x488)) = rcx;
    goto label_0;
label_168:
    eax = *((rsp + 0x10));
    ebx = 0x5bbf59fc;
    ecx = 0xad922186;
    if (eax < 0x7d) {
        ebx = ecx;
    }
    goto label_0;
label_172:
    eax = *((rsp + 0x10));
    ebx = 0xf16893a9;
    ecx = 0x6c16832d;
    if (eax < 0x25) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_173:
    rax = *((rsp + 0x2a0));
    ecx = 0;
    rcx -= rax;
    rcx -= *((rsp + 0x38));
    rcx = -rcx;
    *((rsp + 0x688)) = rcx;
    rax = *((rsp + 0x2a0));
    ecx = *((rsp + 0xa4));
    ebx = 0x44684037;
    edx = 0x3a48834c;
    if (rax > 1) {
        ebx = edx;
    }
    ecx = 0x44684037;
    if (cl == 0) {
        ebx = ecx;
    }
    goto label_0;
label_177:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x2016e3e6;
    esi = 0xa1e0ddb4;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_178:
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0x5520d9ca;
    ecx = 0xb5b02117;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    goto label_0;
label_182:
    rax = *((rsp + 0x3c8));
    rcx = 0x99f2bedf083e5efc;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x408)) = rax;
    rax = *((rsp + 0x640));
    rax++;
    *((rsp + 0x460)) = rax;
    ebx = 0xb938e9b6;
    goto label_0;
label_183:
    rax = *((rsp + 0x518));
    rcx = 0xf32e0b82394b0be;
    rax = rax + rcx + 1;
    rax -= rcx;
    *((rsp + 0x360)) = rax;
    ebx = 0xef5f2398;
    *((rsp + 0x61)) = 1;
    goto label_0;
label_187:
    eax = *((rsp + 0x91));
    al = ~al;
    al |= 0xfe;
    ebx = 0xefd68aa;
    ecx = 0xef34cea9;
    if (al != 0xff) {
        ebx = ecx;
    }
    ecx = *((rsp + 0x4c));
    *((rsp + 0x1d8)) = ecx;
    goto label_0;
label_188:
    rcx = *((rsp + 0x18));
    ebx = 0x2e34a855;
    edx = 0xd70e8cd;
    if (*((rsp + 0x70)) != 0) {
        ebx = edx;
    }
    ecx = 0x2e34a855;
    if (rcx != 0) {
        ebx = ecx;
    }
    goto label_0;
label_192:
    ebx = 0x345eb3fe;
    goto label_0;
label_193:
    *(rsp + 0xe9) = (*((rsp + 0x2e0)) != 0) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4ac008a5;
    esi = 0x48cf4545;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_196:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x931315d9;
    esi = 0xf62b4409;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x931315d9;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_197:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x685bcbd9;
    esi = 0x1e50de9e;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_200:
    ebx = 0xf0414557;
    rcx = *((rsp + 0x6a0));
    *((rsp + 0x398)) = rcx;
    *((rsp + 0x1d4)) = 0;
    goto label_0;
label_201:
    ebx = 0xeb7760c8;
    ecx = 0xc40518d4;
    if ((*((rsp + 0x8a)) & 1) != 0) {
        ebx = ecx;
    }
    goto label_0;
label_204:
    ebx = 0x5a0c6bc4;
    *((rsp + 0x86)) = 1;
    goto label_0;
label_205:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x4eece0;
    edi = 0xe932044e;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x4eece0;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    rcx = *((rsp + 0x5e0));
    *((rsp + 0x2e0)) = rcx;
    ecx = *((rsp + 0xa0));
    *((rsp + 0x115)) = cl;
    rcx = *((rsp + 0x5d8));
    *((rsp + 0x116)) = cl;
    rax = *((rsp + 0x5b0));
    *((rsp + 0x117)) = al;
    ecx = *((rsp + 0xa1));
    *((rsp + 0x46)) = cl;
    rcx = *((rsp + 0x5e8));
    *((rsp + 0x6c0)) = rcx;
    rax = *((rsp + 0x5b8));
    *((rsp + 0x6a)) = al;
    rax = *((rsp + 0x5c0));
    *((rsp + 0x628)) = rax;
    rax = *((rsp + 0x5c8));
    *((rsp + 0x630)) = rax;
    rax = *((rsp + 0x5d0));
    *((rsp + 0x6c8)) = rax;
    rcx = *((rsp + 0x5f8));
    *((rsp + 0x2e8)) = rcx;
    rcx = *((rsp + 0x5f0));
    *((rsp + 0x2f0)) = rcx;
    ecx = *((rsp + 0x31c));
    *((rsp + 0x78)) = ecx;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_208:
    eax = *((rsp + 0x10));
    ebx = 0x291f31e;
    ecx = 0x5d214147;
    if (eax < 9) {
        ebx = ecx;
    }
    goto label_0;
label_209:
    rax = *((rsp + 0x1e8));
    rax = *((rsp + 0x1e8));
    rax = *((rsp + 0x1e8));
    rax = *((rsp + 0x18));
    ebx = 0xa39834bf;
    goto label_0;
label_212:
    eax = *((rsp + 0x1e4));
    ebx = 0x6e4dbecd;
    ecx = 0x5c0a0c03;
    if (eax < 0x10) {
        ebx = ecx;
    }
    goto label_0;
label_213:
    rax = *((rsp + 0x188));
    *((r12 + rax)) = 0x24;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xd9461648;
    esi = 0x2272a057;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xd9461648;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_216:
    eax = *((rsp + 0x10));
    ebx = 0xfc6c814e;
    ecx = 0x7fb2b8c5;
    if (eax < 0x7b) {
        ebx = ecx;
    }
    goto label_0;
label_217:
    rax = *((rsp + 0x2f0));
    *((rsp + 0x260)) = rax;
    rax = *((rsp + 0x2e8));
    *((rsp + 0x258)) = rax;
    eax = *((rsp + 0x118));
    *((rsp + 0x29)) = al;
    ebx = 0xbce22603;
    *((rsp + 0x174)) = 2;
    al = *((rsp + 0xab));
    *((rsp + 0x248)) = rax;
    eax = 1;
    *((rsp + 0x238)) = rax;
    eax = 0x419466;
    *((rsp + 0x230)) = rax;
    rax = *((rsp + 0x3f8));
    *((rsp + 0x228)) = rax;
    goto label_0;
label_220:
    rax = ctype_b_loc ();
    rax = *(rax);
    rcx = *((rsp + 0x10));
    eax = *((rax + rcx*2));
    eax >>= 0xe;
    al &= 1;
    *((rsp + 0xf9)) = al;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xfa753fa7;
    esi = 0x237828c0;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xfa753fa7;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_221:
    ebx = 0x84d9d9b;
    goto label_0;
label_224:
    rax = *((rsp + 0x700));
    rax = -rax;
    ecx = 1;
    rcx -= rax;
    *((rsp + 0x418)) = rcx;
    rax = *((rsp + 0x6f8));
    *((rsp + 0x410)) = rax;
    rax = *((rsp + 0x6f0));
    *((rsp + 0x468)) = rax;
    rax = *((rsp + 0x680));
    *((rsp + 0x458)) = rax;
    eax = *((rsp + 0x127));
    *((rsp + 0x82)) = al;
    eax = *((rsp + 0x126));
    *((rsp + 0x81)) = al;
    eax = *((rsp + 0x125));
    *((rsp + 0x80)) = al;
    ebx = 0x21424190;
    rax = *((rsp + 0x678));
    *((rsp + 0x448)) = rax;
    goto label_0;
label_225:
    ebx = 0x478c0b56;
    goto label_0;
label_228:
    eax = *((rsp + 0xf7));
    ebx = 0xf7047695;
    ecx = 0x3744cf8b;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_229:
    rax = *((rsp + 0x30));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x290)) = rax;
    rax = *((rsp + 0x290));
    al = (rax < *((rsp + 0x2b0))) ? 1 : 0;
    *((rsp + 0xf7)) = al;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x79db7108;
    esi = 0xc439ab5d;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_232:
    eax = *((rsp + 0x224));
    ebx = 0x1bc8327;
    goto label_0;
label_233:
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0xd95f3fb;
    ecx = 0xdea3302d;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    goto label_0;
label_236:
    ebx = 0x35bf9726;
    goto label_0;
label_237:
    eax = *((rsp + 0xf8));
    ebx = 0x769e6740;
    ecx = 0x34932270;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_240:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x8cbdbf8e;
    edi = 0xece043a0;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_244:
    eax = *((rsp + 0x106));
    ebx = 0x2991b969;
    ecx = 0x673363b1;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_247:
    eax = *((rsp + 0x84));
    *((rsp + 0x90)) = al;
    eax = *((rsp + 0x90));
    ecx = eax;
    cl ^= 0xfe;
    ebx = 0x72b18ba;
    ecx = 0xbfce0403;
    if ((cl & al) != 0) {
        ebx = ecx;
    }
    eax = *((rsp + 0x90));
    *((rsp + 0x5f)) = al;
    eax = *((rsp + 0x7f));
    *((rsp + 0x5b)) = al;
    goto label_0;
label_250:
    eax = *((rsp + 0x1c0));
    *((rsp + 0x1e0)) = eax;
    eax = *((rsp + 0x1d0));
    *((rsp + 0xb1)) = al;
    eax = *((rsp + 0x1bc));
    *((rsp + 0xb2)) = al;
    eax = *((rsp + 0x63));
    *((rsp + 0x11d)) = al;
    eax = *((rsp + 0x65));
    *((rsp + 0xb3)) = al;
    eax = *((rsp + 0x64));
    *((rsp + 0x94)) = al;
    rax = *((rsp + 0x378));
    *((rsp + 0x548)) = rax;
    rax = *((rsp + 0x328));
    *((rsp + 0x550)) = rax;
    rax = *((rsp + 0x388));
    *((rsp + 0x558)) = rax;
    ebx = 0x909a9cb0;
    goto label_0;
label_253:
    rax = *((rsp + 0x190));
    rax = *((rsp + 0x190));
    rax = *((rsp + 0x190));
    rax = *((rsp + 0x190));
    rax = *((rsp + 0x1b0));
    ebx = 0x3df33049;
    goto label_0;
label_256:
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x30));
    al = (rcx < rax) ? 1 : 0;
    *((rsp + 0xed)) = al;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xb08aa57a;
    edi = 0x8fed880b;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_259:
    eax = *((rsp + 0xe4));
    ebx = 0x4bfc67b3;
    ecx = 0x2ffa816a;
    if (eax == 0x5e) {
        ebx = ecx;
    }
    goto label_0;
label_262:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x3f943256;
    edi = 0x3df33049;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_265:
    eax = *((rsp + 0x10));
    ebx = 0xde160a9d;
    ecx = 0x3f6bc39;
    if (eax < 7) {
        ebx = ecx;
    }
    goto label_0;
label_268:
    rax = *((rsp + 0x2c0));
    *((r12 + rax)) = 0x27;
    ebx = 0x99c3d827;
    goto label_0;
label_271:
    rax = *((rsp + 0x50));
    *(rsp + 0xf5) = (rax == -1) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xc90721ad;
    esi = 0x430014e8;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_274:
    eax = *((rsp + 0xe4));
    ebx = 0x8806c1f2;
    ecx = 0x5d449d83;
    if (eax < 0x60) {
        ebx = ecx;
    }
    goto label_0;
label_277:
    eax = *((rsp + 0xfb));
    ebx = 0x23258f82;
    ecx = 0x36284b83;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_280:
    eax = *((rsp + 0x111));
    ebx = 0xd54aab09;
    ecx = 0xe21f50c8;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_283:
    rax = *((rsp + 0x4a8));
    *((rsp + 0x708)) = rax;
    rax = *((rsp + 0x4b8));
    *((rsp + 0x710)) = rax;
    eax = *((rsp + 0x4c));
    ebx = 0xefd68aa;
    ecx = 0xd48c0abe;
    if (eax == 2) {
        ebx = ecx;
    }
    ecx = *((rsp + 0x4c));
    *((rsp + 0x1d8)) = ecx;
    goto label_0;
label_286:
    eax = *((rsp + 6));
    eax = *((rsp + 0x4c));
    ebx = 0x35f93fcf;
    goto label_0;
label_289:
    eax = *((rsp + 0x10));
    ebx = 0x86fba256;
    ecx = 0x763bb334;
    if (eax < 0x24) {
        ebx = ecx;
    }
    goto label_0;
label_292:
    eax = *((rsp + 0x10));
    ebx = 0xc57b60ec;
    ecx = 0x730f87b4;
    if (eax < 0x26) {
        ebx = ecx;
    }
    goto label_0;
label_295:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xe2d7d137;
    edi = 0x22dbccd9;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xe2d7d137;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_298:
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x45525a8e;
    edi = 0xcd81ccc0;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x45525a8e;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_301:
    rax = *((rsp + 0x158));
    *((rsp + 0x4a0)) = rax;
    eax = *((rsp + 0x2f));
    *((rsp + 0x8e)) = al;
    eax = *((rsp + 0x28));
    *((rsp + 0x8d)) = al;
    eax = *((rsp + 0x6b));
    *((rsp + 0x8c)) = al;
    ebx = 0xc2c487cd;
    *((rsp + 0x21c)) = 0x10;
    eax = *((rsp + 0x93));
    *((rsp + 0x89)) = al;
    goto label_0;
label_303:
    ebx = 0x718a964e;
    *((rsp + 0x168)) = 0x34;
    rcx = *((rsp + 0x2b8));
    *((rsp + 0x288)) = rcx;
    *((rsp + 0x164)) = 0;
    goto label_0;
label_305:
    rax = *((rsp + 0x540));
    rax++;
    *((rsp + 0x488)) = rax;
    ebx = 0x84ecec6;
    goto label_0;
label_307:
    rax = *((rsp + 0x178));
    rcx = 0xead6b09cb27fec64;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x198)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xe93955bd;
    esi = 0x979250ca;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_309:
    eax = *((rsp + 0xb6));
    ebx = 0x1e50de9e;
    goto label_0;
label_311:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x72679875;
    edi = 0x1f57633a;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_313:
    ebx = 0x8c0dae31;
    *((rsp + 0x27)) = 0x62;
    goto label_0;
label_315:
    rax = *((rsp + 0x4e0));
    rax += *((rsp + 0xd8));
    *((rsp + 0x608)) = rax;
    rax = *((rsp + 0x608));
    eax = *(rax);
    *((rsp + 0xd4)) = eax;
    ebx = 0xd1331ebe;
    goto label_0;
label_317:
    rax = *((rsp + 0x198));
    *((r12 + rax)) = 0x30;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x9369e14c;
    edi = 0x5c8a7b73;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x9369e14c;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_319:
    eax = *((rsp + 0x10));
    ebx = 0xf16893a9;
    ecx = 0x6c16832d;
    if (eax < 0x2b) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_321:
    rax = *((rsp + 0x290));
    *((r12 + rax)) = 0x5c;
    ebx = 0xf7047695;
    goto label_0;
label_323:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xe2d7d137;
    edi = 0x84d9d9b;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_325:
    rax = *((rsp + 0x30));
    rax = *((rsp + 0x30));
    rax = *((rsp + 0x30));
    rax = *((rsp + 0x2b0));
    ebx = 0xc545ec4b;
    goto label_0;
label_327:
    rax = *((rsp + 0x1f8));
    rcx = 0x64406c0f52c10a5b;
    rax = rax + rcx + 1;
    rax -= rcx;
    *((rsp + 0x698)) = rax;
    rax = *((rsp + 0x3b0));
    rcx = *((rsp + 0xd8));
    eax = *((rcx + rax));
    *((rsp + 0x104)) = al;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x166eec79;
    esi = 0x99c8445f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_329:
    ebx = 0x33771324;
    ecx = 0xa8f3007c;
    if (*((rsp + 0x10)) == 0) {
        ebx = ecx;
    }
    goto label_0;
label_331:
    rax = *((rsp + 0x38));
    *((rsp + 0x368)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x358)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x350)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x348)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0x68)) = al;
    eax = *((rsp + 5));
    *((rsp + 0x67)) = al;
    eax = *((rsp + 0x11a));
    *((rsp + 0x66)) = al;
    ebx = 0xc0e38214;
    *((rsp + 0x1c4)) = 0;
    rax = *((rsp + 0x18));
    *((rsp + 0x330)) = rax;
    goto label_0;
label_333:
    rax = *((rsp + 0x1b0));
    rcx = *((rsp + 0x3d8));
    al = (rcx < rax) ? 1 : 0;
    *((rsp + 0x10a)) = al;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x61f04be7;
    esi = 0xdd2c4116;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_335:
    rax = *((rsp + 0x1e8));
    rcx = 0xd0251e2e27951d1e;
    rax = rax + rcx + 1;
    rax -= rcx;
    *((rsp + 0x520)) = rax;
    rax = *((rsp + 0x520));
    al = (rax < *((rsp + 0x18))) ? 1 : 0;
    *((rsp + 0x101)) = al;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x6e2b8d00;
    esi = 0x567ae8df;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x6e2b8d00;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_337:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xd0a0c908;
    edi = 0xedc93d;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xd0a0c908;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_339:
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    rax = *((rsp + 0x178));
    ebx = 0xec168e7e;
    goto label_0;
label_341:
    rax = *((rsp + 0x3d8));
    rcx = 0xb8a273b66d9ba10;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x278)) = rax;
    rax = *((rsp + 0x670));
    *((rsp + 0x280)) = rax;
    rax = *((rsp + 0x668));
    *((rsp + 0x270)) = rax;
    rax = *((rsp + 0x660));
    *((rsp + 0x268)) = rax;
    eax = *((rsp + 0x122));
    *((rsp + 0x2c)) = al;
    eax = *((rsp + 0xb4));
    *((rsp + 0x2b)) = al;
    eax = *((rsp + 0x121));
    *((rsp + 0x2d)) = al;
    al = *((rsp + 0x120));
    *((rsp + 0x170)) = eax;
    ebx = 0x1bdbbe1f;
    al = 1;
    *((rsp + 0x16c)) = eax;
    rax = *((rsp + 0x1b0));
    *((rsp + 0x240)) = rax;
    goto label_0;
label_343:
    rax = *((rsp + 0x200));
    ecx = *((rsp + 0xb7));
    *((r12 + rax)) = cl;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xd28c3766;
    edi = 0xe1ef74ec;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_345:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4a4d6bfa;
    esi = 0xf1bf8bce;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_347:
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x20ad9820;
    esi = 0x3b69b7c5;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x20ad9820;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_349:
    eax = *((rsp + 0xd4));
    ebx = 0xfee3a20f;
    ecx = 0x2cead78a;
    if (eax < 0x2f) {
        ebx = ecx;
    }
    goto label_0;
label_351:
    eax = *((rsp + 0x78));
    ebx = 0xac1b200c;
    ecx = 0x716251e4;
    if (eax < 6) {
        ebx = ecx;
    }
    goto label_0;
label_353:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xff8bdf28;
    esi = 0x854f827b;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_355:
    rax = *((rsp + 0x6b0));
    *((rsp + 0x4c0)) = rax;
    ebx = 0x4907bff3;
    rcx = *((rsp + 0x6b8));
    *((rsp + 0x4b0)) = rcx;
    goto label_0;
label_357:
    eax = *((rsp + 0x2e));
    ebx = 0x67b2453b;
    ecx = 0x215dcaa8;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_359:
    *((rsp + 0x560)) = rbp;
    *((rsp + 0x95)) = r13b;
    *((rsp + 0x11e)) = r14b;
    eax = *((rsp + 0xa));
    *((rsp + 0x11f)) = al;
    eax = *((rsp + 0xb));
    *((rsp + 0x6e)) = al;
    eax = *((rsp + 9));
    *((rsp + 0x96)) = al;
    eax = *((rsp + 0x48));
    *((rsp + 0x97)) = al;
    rax = *((rsp + 0xb8));
    *((rsp + 0x568)) = rax;
    rax = *((rsp + 0xc0));
    *((rsp + 0x570)) = rax;
    *((rsp + 0x578)) = r15;
    rax = *((rsp + 0xc8));
    *((rsp + 0x580)) = rax;
    eax = *((rsp + 0xa6));
    ebx = 0xd0528e2b;
    ecx = 0x3d5304a0;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_361:
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0xf4) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x744a9018;
    edi = 0x43c9a383;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x744a9018;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_363:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x744a9018;
    esi = 0xe3a5abb;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x744a9018;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_365:
    rax = *((rsp + 0x1a0));
    rcx = 0x467494e83e9061d2;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x518)) = rax;
    rax = *((rsp + 0x518));
    al = (rax < *((rsp + 0x18))) ? 1 : 0;
    *((rsp + 0xff)) = al;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xe0439c1c;
    esi = 0xbca46d4f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_367:
    rax = *((rsp + 0x38));
    rcx = 0xa3cd60a1bc748b99;
    rax = rax + rcx + 1;
    rax -= rcx;
    *((rsp + 0x600)) = rax;
    rax = *((rsp + 0x600));
    ebx = 0xab089049;
    ecx = 0xbbe78ec2;
    if (rax < *((rsp + 0x50))) {
        ebx = ecx;
    }
    rax = *((rsp + 0x198));
    *((rsp + 0x250)) = rax;
    goto label_0;
label_369:
    eax = *((rsp + 0xd4));
    ebx = 0x6ac8cb42;
    ecx = 0x8d221414;
    if (eax == 0x21) {
        ebx = ecx;
    }
    goto label_0;
label_371:
    eax = *((rsp + 0x4c));
    ebx = 0x36f1445a;
    ecx = 0xbbfd043b;
    if (eax == 2) {
        ebx = ecx;
    }
    goto label_0;
label_373:
    eax = *((rsp + 6));
    al = ~al;
    al |= 0xfe;
    *(rsp + 0x10f) = (al != 0xff) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xd2afb2fd;
    edi = 0x919e8acd;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_375:
    eax = *((rsp + 0x2a));
    *((rsp + 0xac)) = al;
    eax = *((rsp + 0x4c));
    ebx = 0x8c0dae31;
    ecx = 0xd269f6ee;
    if (eax == 2) {
        ebx = ecx;
    }
    eax = *((rsp + 0xac));
    *((rsp + 0x27)) = al;
    goto label_0;
label_377:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xce6d1c0c;
    esi = 0x51dccb19;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xce6d1c0c;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_379:
    rax = *((rsp + 0x1a0));
    rax = *((rsp + 0x1a0));
    rax = *((rsp + 0x1a0));
    rax = *((rsp + 0x1a0));
    rax = *((rsp + 0x1a0));
    rax = *((rsp + 0x1a0));
    rax = *((rsp + 0x18));
    ebx = 0x493c3b76;
    goto label_0;
label_382:
    ebx = 0xf5b76fcc;
    goto label_0;
label_384:
    rax = *((rsp + 0x330));
    *((rsp + 0x1b0)) = rax;
    eax = *((rsp + 0x1c4));
    *((rsp + 0x120)) = al;
    eax = *((rsp + 0x66));
    *((rsp + 0x121)) = al;
    eax = *((rsp + 0x67));
    *((rsp + 0xb4)) = al;
    eax = *((rsp + 0x68));
    *((rsp + 0x47)) = al;
    rax = *((rsp + 0x348));
    *((rsp + 0x660)) = rax;
    rax = *((rsp + 0x350));
    *((rsp + 0x668)) = rax;
    rax = *((rsp + 0x358));
    *((rsp + 0x190)) = rax;
    rax = *((rsp + 0x368));
    *((rsp + 0x670)) = rax;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xe071787;
    esi = 0x37af597d;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0xe071787;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_387:
    ebx = 0x2239dda2;
    ecx = *((rsp + 0x1dc));
    *((rsp + 0x218)) = ecx;
    goto label_0;
label_389:
    rax = *((rsp + 0x520));
    rax++;
    *((rsp + 0x380)) = rax;
    eax = *((rsp + 0x28));
    al |= 0x30;
    al &= 0x37;
    *((rsp + 0x62)) = al;
    eax = *((rsp + 0x11b));
    *((rsp + 0x60)) = al;
    ebx = 0x14c48a52;
    *((rsp + 0x5c)) = 1;
    al = *((rsp + 0x6b));
    *((rsp + 0x1c8)) = eax;
    goto label_0;
label_391:
    rax = *((rsp + 0x2c8));
    *((r12 + rax)) = 0x27;
    ebx = 0xda9fc772;
    goto label_0;
label_393:
    ebx = 0xf6f2acdc;
    *((rsp + 0x20c)) = 0;
    goto label_0;
label_395:
    rax = *((rsp + 0x300));
    rax++;
    *((rsp + 0x3b0)) = rax;
    rax = *((rsp + 0x620));
    *(rsp + 0x102) = (rax <= *((rsp + 0x3b0))) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4f1e95e9;
    esi = 0x919752a0;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_397:
    ebx = 0x64b0ec15;
    rax = *((rsp + 0x690));
    *((rsp + 0x430)) = rax;
    goto label_0;
label_399:
    ebx = 0x3191bb07;
    eax = *((rsp + 0xea));
    *((rsp + 0x8a)) = al;
    goto label_0;
label_401:
    ebx = 0x168fb00f;
    al = 1;
    *((rsp + 0x184)) = eax;
    rax = *((rsp + 0x3d0));
    *((rsp + 0x2d0)) = rax;
    goto label_0;
label_403:
    eax = *((rsp + 0xfe));
    ebx = 0xb277a733;
    ecx = 0x80b76c8a;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_405:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x3e57c131;
    edi = 0x1bc8327;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x3e57c131;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_407:
    eax = *((rsp + 0xed));
    ebx = 0xdb2e6465;
    ecx = 0x36b7741;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_409:
    eax = *((rsp + 0x6f));
    ebx = 0xc450dd3;
    goto label_0;
label_411:
    eax = *((rsp + 0xf1));
    ebx = 0x8c24a5da;
    ecx = 0xbe87eca4;
    if (al != 0) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_413:
    rax = *((rsp + 0x3d8));
    *((r12 + rax)) = 0x5c;
    ebx = 0x6421dcca;
    goto label_0;
label_415:
    eax = *((rsp + 4));
    al = ~al;
    al |= 0xfe;
    ebx = 0x8d875b87;
    ecx = 0xadf05288;
    if (al != 0xff) {
        ebx = ecx;
    }
    rax = *((rsp + 0x30));
    *((rsp + 0x338)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0x5d)) = al;
    goto label_0;
label_417:
    eax = *((rsp + 0x10));
    ebx = 0x6e96e097;
    ecx = 0x6db0c13b;
    if (eax < 0xd) {
        ebx = ecx;
    }
    goto label_0;
label_419:
    eax = *((rsp + 0x78));
    *((rsp + 0x174)) = eax;
    rax = *((rsp + 0x2f0));
    *((rsp + 0x260)) = rax;
    rax = *((rsp + 0x2e8));
    *((rsp + 0x258)) = rax;
    rax = *((rsp + 0x630));
    *((rsp + 0x230)) = rax;
    ebx = 0xbce22603;
    *((rsp + 0x29)) = 1;
    eax = 0;
    *((rsp + 0x248)) = rax;
    rax = *((rsp + 0x628));
    *((rsp + 0x238)) = rax;
    eax = 0;
    *((rsp + 0x228)) = rax;
    goto label_0;
label_421:
    rax = *((rsp + 0x308));
    *((r12 + rax)) = 0x5c;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xe183be88;
    esi = 0x24b142c5;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_423:
    ebx = 0xffd4cc3b;
    ecx = 0x44f55ca5;
    if (*((rsp + 0x1dc)) == 0) {
        ebx = ecx;
    }
    goto label_0;
label_425:
    eax = *((rsp + 0x6f));
    al = ~al;
    al |= 0xfe;
    *(rsp + 0x10b) = (al != 0xff) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x15c13be2;
    edi = 0x3049bebf;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_427:
    eax = *((rsp + 0xd4));
    eax += 0xffffffd9;
    ebx = 0x6ac8cb42;
    ecx = 0x8d221414;
    if (eax < 3) {
        ebx = ecx;
    }
    goto label_0;
label_429:
    rax = *((rsp + 0x4d8));
    rcx = 0x1ac1ac068e88aaee;
    rax -= rcx;
    rax = rax + rcx + 1;
    *((rsp + 0x250)) = rax;
    ebx = 0xab089049;
    goto label_0;
label_430:
    ebx = 0x51ea4f01;
    goto label_0;
label_431:
    cl = (*((rsp + 0x38)) != 0) ? 1 : 0;
    ebx = 0xb50dadaa;
    esi = 0x8c24a5da;
    if (*((rsp + 0x38)) != 0) {
        ebx = esi;
    }
    rdx = *((rsp + 0xd8));
    dl = (*((rdx + 1)) != 0) ? 1 : 0;
    edi = 0xb50dadaa;
    if (*((rdx + 1)) == 0) {
        ebx = edi;
    }
    dl ^= cl;
    if (*((rdx + 1)) != 0) {
        ebx = esi;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_432:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x2016e3e6;
    edi = 0x8d21fc49;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_433:
    eax = *((rsp + 0x4c));
    ebx = 0xa274c3d7;
    ecx = 0xaa2d5e0d;
    if (eax == 5) {
        ebx = ecx;
    }
    goto label_0;
label_434:
    ebx = 0x4f82916d;
    goto label_0;
label_435:
    eax = *((rsp + 0x10));
    ebx = 0x450db67a;
    ecx = 0xac96c107;
    if (eax < 0x5c) {
        ebx = ecx;
    }
    goto label_0;
label_436:
    eax = *((rsp + 0x10));
    ebx = 0x1b13f9e5;
    ecx = 0x6669c20a;
    if (eax < 8) {
        ebx = ecx;
    }
    goto label_0;
label_437:
    rax = *((rsp + 0x4f0));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x4f8)) = rax;
    rax = *((rsp + 0x4f8));
    ebx = 0x3e183d64;
    ecx = 0x458068aa;
    if (rax < *((rsp + 0x18))) {
        ebx = ecx;
    }
    goto label_0;
label_438:
    eax = *((rsp + 6));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0xec) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x5f151cc0;
    edi = 0x55ebe1ed;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_439:
    eax = *((rsp + 6));
    al = ~al;
    al |= 0xfe;
    ebx = 0x8c24a5da;
    ecx = 0x4b3ab74;
    if (al != 0xff) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_440:
    rax = *((rsp + 0x290));
    rax = *((rsp + 0x290));
    rax = *((rsp + 0x290));
    rax = *((rsp + 0x2b0));
    ebx = 0xc15e8dcc;
    goto label_0;
label_441:
    rax = *((rsp + 0x6a8));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x6e8));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x6e0));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x6d8));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 0x124));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 0x123));
    *((rsp + 0xe)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0;
    rax = *((rsp + 0x3e0));
    *((rsp + 0x128)) = rax;
    ecx = *((rsp + 0x220));
    *((rsp + 0xd)) = cl;
    goto label_0;
label_442:
    rax = *((rsp + 0x588));
    *((r12 + rax)) = 0;
    ebx = 0xd2b1e792;
    goto label_0;
label_443:
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x52189ca8;
    edi = 0x14e6b6a7;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x52189ca8;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_444:
    al = (*((rsp + 0x750)) != 0) ? 1 : 0;
    ecx = *((rsp + 6));
    cl = ~cl;
    cl |= 0xfe;
    cl = (cl != 0xff) ? 1 : 0;
    cl ^= al;
    cl = ~cl;
    cl &= al;
    *((rsp + 0x105)) = cl;
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x45525a8e;
    esi = 0x463aaca9;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x45525a8e;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_445:
    eax = *((rsp + 0x10));
    ebx = 0xf16893a9;
    ecx = 0xf1800c4e;
    if (eax < 0x5d) {
        ebx = ecx;
    }
    goto label_0;
label_446:
    rax = *((rsp + 0x188));
    rax = *((rsp + 0x188));
    rax = *((rsp + 0x188));
    rax = *((rsp + 0x188));
    rax = *((rsp + 0x188));
    rax = *((rsp + 0x188));
    rax = *((rsp + 0x1b0));
    ebx = 0xe115bb2f;
    goto label_0;
label_447:
    rax = *((rsp + 0x3a8));
    *((r12 + rax)) = 0x24;
    ebx = 0xa05e7ea0;
    goto label_0;
label_448:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x48b31e8b;
    edi = 0x71f04ea7;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x48b31e8b;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_449:
    ebx = 0x8c0dae31;
    *((rsp + 0x27)) = 0x61;
    goto label_0;
label_450:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xfcce513b;
    esi = 0xa4de526f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_451:
    edx = *((rsp + 0x214));
    ebx = 0x718a964e;
    ecx = 0x30e4c46;
    if (edx == 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x2b8));
    *((rsp + 0x288)) = rcx;
    al = *((rsp + 0x92));
    *((rsp + 0x164)) = eax;
    *((rsp + 0x168)) = edx;
    goto label_0;
label_452:
    rax = *((rsp + 0x30));
    rax++;
    *((rsp + 0x3a8)) = rax;
    rax = *((rsp + 0x3a8));
    al = (rax < *((rsp + 0x18))) ? 1 : 0;
    *((rsp + 0xee)) = al;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xf141f5f;
    esi = 0xf672297;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_453:
    eax = *((rsp + 0x78));
    ebx = 0xf01d5f68;
    ecx = 0xd9ca87f2;
    if (eax != 0xa) {
        ebx = ecx;
    }
    rax = *((rsp + 0x2f0));
    *((rsp + 0x450)) = rax;
    rax = *((rsp + 0x2e8));
    *((rsp + 0x440)) = rax;
    goto label_0;
label_454:
    rax = *((rsp + 0x600));
    rcx = *((rsp + 0xd8));
    eax = *((rcx + rax));
    *((rsp + 0x224)) = eax;
    eax = *((rsp + 0x224));
    ebx = 0xab089049;
    ecx = 0x5f64e88f;
    if (eax > 0x2f) {
        ebx = ecx;
    }
    rax = *((rsp + 0x198));
    *((rsp + 0x250)) = rax;
    goto label_0;
label_455:
    eax = *((rsp + 6));
    al = ~al;
    al |= 0xfe;
    ecx = *((rsp + 0x4c));
    al = (al == 0xff) ? 1 : 0;
    cl = (ecx != 2) ? 1 : 0;
    cl |= al;
    cl ^= 1;
    *((rsp + 0xfc)) = cl;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xf4a38eb5;
    edi = 0x34266f98;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_456:
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_457:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0xde480b4b;
    edi = 0xa9cfed3b;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xde480b4b;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_458:
    eax = *((rsp + 0x10));
    ebx = 0x40705f4a;
    ecx = 0x6c16832d;
    if (eax < 0x23) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_459:
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x8c7dc8fb;
    edi = 0xb99c55e7;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x8c7dc8fb;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_460:
    eax = *((rsp + 0x110));
    ebx = 0x2e34a855;
    ecx = 0x19738bca;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_461:
    ebx = 0xdbe04246;
    goto label_0;
label_462:
    rax = *((rsp + 0x1f0));
    rax = *((rsp + 0x1f0));
    rax = *((rsp + 0x1f0));
    rax = *((rsp + 0x1f0));
    ebx = 0xc8f4dd2f;
    goto label_0;
label_463:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x188444b;
    esi = 0x35bf9726;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x188444b;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_464:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x6d8d4b69;
    edi = 0xba232e25;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_465:
    eax = *((rsp + 0x1e0));
    ebx = 0x904950ef;
    ecx = 0x1bdbbe1f;
    if (eax == 0x2c) {
        ebx = ecx;
    }
    rax = *((rsp + 0x558));
    *((rsp + 0x280)) = rax;
    rax = *((rsp + 0x550));
    *((rsp + 0x278)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x270)) = rax;
    rax = *((rsp + 0x548));
    *((rsp + 0x268)) = rax;
    ecx = *((rsp + 0x94));
    *((rsp + 0x2c)) = cl;
    ecx = *((rsp + 5));
    *((rsp + 0x2b)) = cl;
    ecx = *((rsp + 0xb3));
    *((rsp + 0x2d)) = cl;
    al = *((rsp + 0xb2));
    *((rsp + 0x16c)) = eax;
    al = *((rsp + 0xb1));
    *((rsp + 0x170)) = eax;
    rax = *((rsp + 0x18));
    *((rsp + 0x240)) = rax;
    goto label_0;
label_466:
    rax = *((rsp + 0x3e0));
    rcx = *((rsp + 0x2c8));
    ebx = 0xfa2d359e;
    ecx = 0x3da24cba;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_467:
    *(r12) = 0x22;
    ebx = 0x8c5bb48a;
    goto label_0;
label_468:
    ebx = 0x62009500;
    goto label_0;
label_469:
    ebx = 0x90a751c;
    goto label_0;
label_470:
    eax = *((rsp + 0xf3));
    ebx = 0x99e104ec;
    ecx = 0x1bdbbe1f;
    if (al != 0) {
        ebx = ecx;
    }
    eax = *((rsp + 7));
    *((rsp + 0x2a)) = al;
    ecx = *((rsp + 7));
    *((rsp + 0x2d)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0x280)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x278)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x270)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x268)) = rax;
    ecx = *((rsp + 4));
    *((rsp + 0x2c)) = cl;
    ecx = *((rsp + 5));
    *((rsp + 0x2b)) = cl;
    *((rsp + 0x170)) = 0;
    rax = *((rsp + 0x18));
    *((rsp + 0x240)) = rax;
    *((rsp + 0x16c)) = 0;
    goto label_0;
label_471:
    rax = *((rsp + 0x190));
    rax++;
    *((rsp + 0x188)) = rax;
    rax = *((rsp + 0x188));
    al = (rax < *((rsp + 0x1b0))) ? 1 : 0;
    *((rsp + 0x108)) = al;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x3f943256;
    edi = 0x6abfbb66;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x3f943256;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_472:
    rax = *((rsp + 0x3b8));
    *((r12 + rax)) = 0x27;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xd0a0c908;
    esi = 0xb503f324;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_473:
    r15 = *((rsp + 0x500));
    r15++;
    eax = *((rsp + 7));
    *((rsp + 0xb)) = al;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    rax = *((rsp + 0x6d0));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    ebx = 0x8c24a5da;
    r13b = 1;
    r14d = 0;
    rbp = *((rsp + 0x2b0));
    *((rsp + 9)) = 1;
    *((rsp + 0x48)) = 0;
    goto label_0;
label_474:
    ebx = 0xd12115a3;
    *((rsp + 0x208)) = 5;
    *((rsp + 0x83)) = 1;
    goto label_0;
label_475:
    rax = *((rsp + 0x198));
    rax = *((rsp + 0x18));
    ebx = 0xf6aa0458;
    goto label_0;
label_476:
    rax = *((rsp + 0x1f0));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x6a0)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xaf8ea2be;
    esi = 0x310fd56f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_477:
    eax = *((rsp + 0xe4));
    ebx = 0x4bfc67b3;
    ecx = 0x2ffa816a;
    if (eax == 0x60) {
        ebx = ecx;
    }
    goto label_0;
label_478:
    eax = *((rsp + 0xd4));
    eax += 0xffffffc4;
    ebx = 0x6ac8cb42;
    ecx = 0x8d221414;
    if (eax < 3) {
        ebx = ecx;
    }
    goto label_0;
label_479:
    rax = *((rsp + 0x508));
    edx = *((rsp + 0x218));
    ebx = 0xc6411054;
    ecx = 0x372a8493;
    if (edx == 0) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0x65)) = cl;
    rcx = *((rsp + 0x2f8));
    *((rsp + 0x480)) = rcx;
    rax = *((rsp + 0x648));
    *((rsp + 0x438)) = rax;
    eax = *((rsp + 0xae));
    *((rsp + 0x88)) = al;
    rcx = *((rsp + 0x38));
    *((rsp + 0x388)) = rcx;
    rax = *((rsp + 0x30));
    *((rsp + 0x328)) = rax;
    rcx = *((rsp + 0x2f8));
    *((rsp + 0x378)) = rcx;
    ecx = *((rsp + 4));
    *((rsp + 0x64)) = cl;
    *((rsp + 0x1d0)) = 0;
    ecx = *((rsp + 8));
    *((rsp + 0x63)) = cl;
    *((rsp + 0x1c0)) = edx;
    *((rsp + 0x1bc)) = 0;
    goto label_0;
label_480:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x99627dfc;
    esi = 0x53b9bd27;
    if (ecx == 0xffffffff) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x99627dfc;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_481:
    ebx = 0xb938e9b6;
    rax = *((rsp + 0x638));
    *((rsp + 0x460)) = rax;
    eax = 0;
    *((rsp + 0x408)) = rax;
    goto label_0;
label_482:
    eax = *((rsp + 0xfd));
    ebx = 0xef5f2398;
    ecx = 0xd7484011;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x158));
    *((rsp + 0x360)) = rcx;
    eax = *((rsp + 0x2f));
    *((rsp + 0x61)) = al;
    goto label_0;
label_483:
    eax = *((rsp + 0x5c));
    *((rsp + 0x6c)) = al;
    eax = *((rsp + 0x1c8));
    *((rsp + 0xaf)) = al;
    eax = *((rsp + 0x62));
    *((rsp + 0xb0)) = al;
    eax = *((rsp + 0x60));
    *((rsp + 0x6d)) = al;
    rax = *((rsp + 0x380));
    *((rsp + 0x2c0)) = rax;
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x4f1e95e9;
    edi = 0xc9b259e8;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_484:
    eax = *((rsp + 0xfa));
    ebx = 0xd656cbfc;
    ecx = 0xab421706;
    if (al != 0) {
        ebx = ecx;
    }
    *((rsp + 0x5e)) = 1;
    rax = *((rsp + 0x50));
    *((rsp + 0x340)) = rax;
    eax = 0;
    *((rsp + 0x320)) = rax;
    goto label_0;
label_485:
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x158));
    ebx = 0x40e3265;
    ecx = 0x7f2c6d43;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_486:
    ebx = 0x6c16832d;
    al = 1;
    *((rsp + 0x9c)) = eax;
    goto label_0;
label_487:
    rax = *((rsp + 0x178));
    *((r12 + rax)) = 0x5c;
    ebx = 0x328792a5;
    goto label_0;
label_488:
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x588a7749;
    edi = 0x9013d1b8;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x588a7749;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_489:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x2c436e6;
    edi = 0xf6aa0458;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x2c436e6;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_490:
    eax = *((rsp + 0xe4));
    ebx = 0xebed9e7a;
    ecx = 0x4058aea1;
    if (eax < 0x7c) {
        ebx = ecx;
    }
    goto label_0;
label_491:
    eax = *((rsp + 0x78));
    ebx = 0xb7473953;
    ecx = 0xd0a893c5;
    if (eax < 4) {
        ebx = ecx;
    }
    goto label_0;
label_492:
    eax = *((rsp + 0x78));
    ebx = 0xef2e7778;
    ecx = 0x1d3202c3;
    if (eax < 2) {
        ebx = ecx;
    }
    goto label_0;
label_493:
    rax = *((rsp + 0x3b8));
    rax++;
    *((rsp + 0x370)) = rax;
    ebx = 0x26f56da0;
    *((rsp + 0x1cc)) = 0;
    goto label_0;
label_494:
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 0x119));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    eax = *((rsp + 8));
    *((rsp + 0xa)) = al;
    ebx = 0x8c24a5da;
    *((rsp + 0xb)) = 0x30;
    r14b = 1;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r15 = *((rsp + 0x250));
    goto label_0;
label_495:
    ebx = 0x99e104ec;
    *((rsp + 0x2a)) = 0x72;
    goto label_0;
label_496:
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x308));
    al = (rcx < rax) ? 1 : 0;
    *((rsp + 0x100)) = al;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x6d04cff4;
    esi = 0x78b9d2e1;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_497:
    eax = *((rsp + 0x10));
    ebx = 0x20ba029f;
    ecx = 0x3f977c09;
    if (eax < 0x5e) {
        ebx = ecx;
    }
    goto label_0;
label_498:
    eax = *((rsp + 0xa5));
    ebx = 0xab089049;
    ecx = 0xad09af22;
    if (al != 0) {
        ebx = ecx;
    }
    rax = *((rsp + 0x198));
    *((rsp + 0x250)) = rax;
    goto label_0;
label_499:
    rax = *((rsp + 0x4d0));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x338)) = rax;
    ebx = 0xadf05288;
    *((rsp + 0x5d)) = 1;
    goto label_0;
label_500:
    eax = *((rsp + 0xeb));
    ebx = 0x168fb00f;
    ecx = 0x6ff040c5;
    if (al != 0) {
        ebx = ecx;
    }
    *((rsp + 0x184)) = 0;
    rax = *((rsp + 0x3d0));
    *((rsp + 0x2d0)) = rax;
    goto label_0;
label_501:
    eax = *((rsp + 0x10));
    ebx = 0x33771324;
    ecx = 0x569c45e4;
    if (eax == 0x3f) {
        ebx = ecx;
    }
    goto label_0;
label_502:
    rax = *((rsp + 0x38));
    rcx = 0x2e02bf03e27b5134;
    rax -= rcx;
    rax += *((rsp + 0xd8));
    ebx = 0x8c24a5da;
    ecx = 0xdbe658c2;
    if (*((rcx + rax + 1)) == 0x3f) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_503:
    eax = x_31;
    ecx = x_31;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x242cefe0;
    edi = 0xfc7b61ca;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x242cefe0;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_504:
    rax = *((rsp + 0x2c0));
    *((rsp + 0x4a0)) = rax;
    eax = *((rsp + 0x6d));
    *((rsp + 0x8e)) = al;
    eax = *((rsp + 0xb0));
    *((rsp + 0x8d)) = al;
    eax = *((rsp + 0xaf));
    *((rsp + 0x8c)) = al;
    ebx = 0xc2c487cd;
    *((rsp + 0x21c)) = 0x2c;
    eax = *((rsp + 0x6c));
    *((rsp + 0x89)) = al;
    goto label_0;
label_505:
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x83bf188e;
    edi = 0xc3b8ff87;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_506:
    ebx = 0x19053d64;
    goto label_0;
label_507:
    eax = *((rsp + 0x10));
    ebx = 0x5560227f;
    ecx = 0x6c16832d;
    if (eax < 0x3f) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_508:
    *(rsp + 0x112) = (*((rsp + 0x2a8)) != 0) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x4f015bee;
    esi = 0x905483de;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x4f015bee;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_509:
    eax = *((rsp + 0x6c));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0x103) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x937d3aa9;
    edi = 0x95424a00;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x937d3aa9;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_510:
    eax = *((rsp + 5));
    al = ~al;
    al |= 0xfe;
    *(rsp + 0x110) = (al != 0xff) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xfcce513b;
    edi = 0xd361cdb4;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xfcce513b;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_511:
    rax = *((rsp + 0x1a8));
    rcx = *((rsp + 0x38));
    *(rsp + 0xea) = (rcx == rax) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x76e66f88;
    edi = 0xa291b1f2;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_512:
    ebx = 0x7d77e7fa;
    *((rsp + 0x220)) = 0;
    goto label_0;
label_513:
    rax = *((rsp + 0x430));
    *((rsp + 0x150)) = rax;
    rax = *((rsp + 0x298));
    rcx = *((rsp + 0x150));
    ebx = 0xddee8aa6;
    ecx = 0xd37781ff;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_514:
    eax = *((rsp + 0x102));
    ebx = 0x1dd6a4d9;
    ecx = 0xfde961c0;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_515:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4ac008a5;
    esi = 0x4c2360a1;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_516:
    ebx = 0x99e104ec;
    *((rsp + 0x2a)) = 0x74;
    goto label_0;
label_517:
    ebx = 0x4d744617;
    ecx = 0x45bf62f2;
    if (*((rsp + 0x2e0)) != 0) {
        ebx = ecx;
    }
    goto label_0;
label_518:
    eax = *((rsp + 0x47));
    ecx = eax;
    cl ^= 0xfe;
    *(rsp + 0x107) = ((cl & al) != 0) ? 1 : 0;
    eax = x_31;
    ecx = y_32;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x8c7dc8fb;
    edi = 0x12402855;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_519:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x188444b;
    edi = 0x679fd97b;
    if (ecx != 0xa) {
        esi = edi;
    }
    ebx = esi;
    if (edx == 0xffffffff) {
        ebx = edi;
    }
    if (ecx >= 0xa) {
        ebx = esi;
    }
    goto label_0;
label_520:
    eax = *((rsp + 0x10));
    ebx = 0xe2c581f4;
    goto label_0;
label_521:
    eax = *((rsp + 0x78));
    *((rsp + 0x174)) = eax;
    rax = *((rsp + 0x2f0));
    *((rsp + 0x260)) = rax;
    rax = *((rsp + 0x2e8));
    *((rsp + 0x258)) = rax;
    rax = *((rsp + 0x630));
    *((rsp + 0x230)) = rax;
    rax = *((rsp + 0x628));
    *((rsp + 0x238)) = rax;
    ebx = 0xbce22603;
    eax = 0;
    *((rsp + 0x248)) = rax;
    eax = *((rsp + 0x6a));
    *((rsp + 0x29)) = al;
    eax = 0;
    *((rsp + 0x228)) = rax;
    goto label_0;
label_522:
    eax = *((rsp + 0x47));
    ebx = 0xb99c55e7;
    goto label_0;
label_523:
    rax = *((rsp + 0x30));
    rax = *((rsp + 0x30));
    rax = *((rsp + 0x30));
    rax = *((rsp + 0x30));
    rax = *((rsp + 0x18));
    ebx = 0xd9d8a039;
    goto label_0;
label_524:
    eax = *((rsp + 6));
    ebx = 0x6c237beb;
    goto label_0;
label_525:
    eax = x_31;
    ecx = y_32;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x931315d9;
    esi = 0xb1216b7f;
    if (ecx != 0xa) {
        edx = esi;
    }
    ebx = edx;
    if (eax == 0) {
        ebx = esi;
    }
    if (ecx >= 0xa) {
        ebx = edx;
    }
    goto label_0;
label_526:
    eax = *((rsp + 0x10));
    ebx = 0x6c16832d;
    ecx = 0xdfca699e;
    if (eax < 0x7c) {
        ebx = ecx;
    }
    *((rsp + 0x9c)) = 0;
    goto label_0;
label_527:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0x987bad63;
    esi = 0x4f82916d;
    if (eax == 0) {
        ebx = esi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    edi = 0x987bad63;
    if (*(obj_y_32) >= 0xa) {
        ebx = edi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = esi;
    }
    goto label_0;
label_528:
    eax = *((rsp + 0x8f));
    ebx = 0x7d5dfac9;
    ecx = 0x2ea1cc92;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_529:
    eax = *((rsp + 0x4c));
    ebx = 0xadf05288;
    ecx = 0xb54886f5;
    if (eax == 2) {
        ebx = ecx;
    }
    rax = *((rsp + 0x30));
    *((rsp + 0x338)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0x5d)) = al;
    goto label_0;
label_530:
    rax = *((rsp + 0x310));
    rax = *((rsp + 0x3e8));
    ebx = 0xe2f70d41;
    goto label_0;
label_531:
    rdi += *((rsp + 0xd8));
    eax = memcmp (*((rsp + 0x38)), *((rsp + 0x2a8)), *((rsp + 0x2a0)));
    *(rsp + 0xeb) = (eax == 0) ? 1 : 0;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x72679875;
    edi = 0xdd619991;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x72679875;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_532:
    rax = *((rsp + 0x188));
    ecx = 0;
    rcx -= rax;
    eax = 1;
    rax -= rcx;
    *((rsp + 0x3c0)) = rax;
    rax = *((rsp + 0x3c0));
    al = (rax < *((rsp + 0x1b0))) ? 1 : 0;
    *((rsp + 0x109)) = al;
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    ebx = 0xa6259562;
    edi = 0x3ce7153d;
    if (eax == 0) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0xa6259562;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_533:
    eax = x_31;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    ebx = 0x87247107;
    edi = 0xf4f60a1a;
    if (ecx == 0xffffffff) {
        ebx = edi;
    }
    dl = (*(obj_y_32) < 0xa) ? 1 : 0;
    esi = 0x87247107;
    if (*(obj_y_32) >= 0xa) {
        ebx = esi;
    }
    dl ^= cl;
    if (*(obj_y_32) != 0xa) {
        ebx = edi;
    }
    goto label_0;
label_534:
    al = *((rsp + 0xa7));
    *((rsp + 0x1d0)) = eax;
    rax = *((rsp + 0x300));
    *((rsp + 0x388)) = rax;
    ebx = 0xc6411054;
    rcx = *((rsp + 0x658));
    *((rsp + 0x378)) = rcx;
    eax = *((rsp + 0x21c));
    *((rsp + 0x1c0)) = eax;
    eax = *((rsp + 0x89));
    *((rsp + 0x1bc)) = eax;
    eax = *((rsp + 0x8c));
    *((rsp + 0x63)) = al;
    eax = *((rsp + 0x8d));
    *((rsp + 0x65)) = al;
    eax = *((rsp + 0x8e));
    *((rsp + 0x64)) = al;
    rax = *((rsp + 0x4a0));
    *((rsp + 0x328)) = rax;
    goto label_0;
label_535:
    eax = *((rsp + 0x10));
    ebx = 0xe79bc0fc;
    ecx = 0x8c248cb7;
    if (eax < 0xa) {
        ebx = ecx;
    }
    goto label_0;
label_536:
    ebx = 0xe932044e;
    goto label_0;
label_537:
    eax = *((rsp + 0x5ac));
    *((rsp + 0x174)) = eax;
    rax = *((rsp + 0x2f0));
    *((rsp + 0x260)) = rax;
    rax = *((rsp + 0x2e8));
    *((rsp + 0x258)) = rax;
    ebx = 0xbce22603;
    *((rsp + 0x29)) = 1;
    al = *((rsp + 0xaa));
    *((rsp + 0x248)) = rax;
    eax = 1;
    *((rsp + 0x238)) = rax;
    eax = 0x419462;
    *((rsp + 0x230)) = rax;
    rax = *((rsp + 0x3f0));
    *((rsp + 0x228)) = rax;
    goto label_0;
label_538:
    eax = *((rsp + 0x10));
    ebx = 0x237f6b20;
    ecx = 0xd10a6d5f;
    if (eax < 0xc) {
        ebx = ecx;
    }
    goto label_0;
label_539:
    rax = *((rsp + 0x30));
    *((r12 + rax)) = 0x27;
    ebx = 0xdb2e6465;
    goto label_0;
label_540:
    rax = *((rsp + 0x18));
    rcx = *((rsp + 0x158));
    ebx = 0x1aa1bd92;
    ecx = 0x8e5e5716;
    if (rcx < rax) {
        ebx = ecx;
    }
    goto label_0;
label_541:
    eax = *((rsp + 0xf5));
    ebx = 0x3a1a9303;
    ecx = 0x2daf1d96;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_542:
    eax = *((rsp + 0x10));
    ebx = 0xb50dadaa;
    ecx = 0xa345d757;
    if (eax < 0x20) {
        ebx = ecx;
    }
    goto label_0;
label_543:
    eax = *((rsp + 0xf9));
    *((rsp + 0x88)) = al;
    ebx = 0x372a8493;
    rcx = *((rsp + 0x50));
    *((rsp + 0x480)) = rcx;
    eax = 1;
    *((rsp + 0x438)) = rax;
    goto label_0;
label_544:
    eax = *((rsp + 0x10e));
    ebx = 0x924e7bcf;
    ecx = 0x6c517cf1;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_545:
    rax = *((rsp + 0x1b0));
    rax = *((rsp + 0x3d8));
    ebx = 0x444683a5;
    goto label_0;
label_546:
    rax = *((rsp + 0x558));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x550));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x548));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 0x94));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    eax = *((rsp + 0x1e0));
    *((rsp + 0x98)) = eax;
    ebx = 0xfc047c01;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_547:
    eax = *((rsp + 0x184));
    *((rsp + 8)) = al;
    rax = *((rsp + 0x2d0));
    *((rsp + 0x50)) = rax;
    rax = *((rsp + 0x38));
    rcx = *((rsp + 0xd8));
    eax = *((rcx + rax));
    *((rsp + 7)) = al;
    eax = *((rsp + 7));
    *((rsp + 0x10)) = eax;
    ebx = 0x2a23f664;
    goto label_0;
label_548:
    eax = *((rsp + 0x113));
    ebx = 0x4907bff3;
    ecx = 0x65b5f4e9;
    if (al != 0) {
        ebx = ecx;
    }
    rcx = *((rsp + 0x30));
    *((rsp + 0x4c0)) = rcx;
    rcx = *((rsp + 0x2a8));
    *((rsp + 0x4b0)) = rcx;
    rcx = *((rsp + 0x30));
    *((rsp + 0x3a0)) = rcx;
    goto label_0;
label_549:
    rax = *((rsp + 0x300));
    rax = *((rsp + 0x300));
    rax = *((rsp + 0x300));
    rax = *((rsp + 0x620));
    ebx = 0xc9b259e8;
    goto label_0;
label_550:
    rax = *((rsp + 0x38));
    *((rsp + 0x148)) = rax;
    rax = *((rsp + 0x30));
    *((rsp + 0x140)) = rax;
    rax = *((rsp + 0x70));
    *((rsp + 0x138)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0x130)) = rax;
    eax = *((rsp + 4));
    *((rsp + 0xf)) = al;
    eax = *((rsp + 5));
    *((rsp + 0xe)) = al;
    eax = *((rsp + 0xc));
    *((rsp + 0xd)) = al;
    ebx = 0xfc047c01;
    *((rsp + 0x98)) = 0x10;
    rax = *((rsp + 0x18));
    *((rsp + 0x128)) = rax;
    goto label_0;
label_551:
    eax = *((rsp + 0xfc));
    ebx = 0x30e4c46;
    ecx = 0x31fbbca6;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_552:
    rax = *((rsp + 0x298));
    rax += *((rsp + 0x2b8));
    *((rsp + 0x288)) = rax;
    ebx = 0x718a964e;
    *((rsp + 0x168)) = 0;
    ecx = *((rsp + 0x20c));
    *((rsp + 0x164)) = ecx;
    goto label_0;
label_553:
    eax = *((rsp + 0x78));
    ebx = 0xd12115a3;
    ecx = 0x1c79e0a;
    if (eax < 5) {
        ebx = ecx;
    }
    eax = *((rsp + 0x78));
    *((rsp + 0x208)) = eax;
    eax = *((rsp + 0x46));
    *((rsp + 0x83)) = al;
    eax = *((rsp + 0x6a));
    *((rsp + 0x7f)) = al;
    eax = *((rsp + 0x46));
    *((rsp + 0x84)) = al;
    goto label_0;
label_554:
    eax = *((rsp + 0x27));
    *((rsp + 0x11a)) = al;
    eax = *((rsp + 0x2e));
    ebx = 0x8c24a5da;
    ecx = 0xcbf6e2e4;
    if (al != 0) {
        ebx = ecx;
    }
    ecx = *((rsp + 7));
    *((rsp + 0xb)) = cl;
    rax = *((rsp + 0x38));
    *((rsp + 0xc8)) = rax;
    r15 = *((rsp + 0x30));
    rax = *((rsp + 0x70));
    *((rsp + 0xc0)) = rax;
    rax = *((rsp + 0x50));
    *((rsp + 0xb8)) = rax;
    al = *((rsp + 4));
    *((rsp + 0x48)) = eax;
    eax = *((rsp + 5));
    *((rsp + 9)) = al;
    ecx = *((rsp + 8));
    *((rsp + 0xa)) = cl;
    r13d = 0;
    rbp = *((rsp + 0x18));
    r14d = 0;
    goto label_0;
label_555:
    rcx = *((rsp + 0x18));
    dl = (*((rsp + 0x70)) != 0) ? 1 : 0;
    ebx = 0x8c9e3ac8;
    edi = 0x82741e22;
    if (*((rsp + 0x70)) != 0) {
        ebx = edi;
    }
    cl = (rcx == 0) ? 1 : 0;
    esi = 0x8c9e3ac8;
    if (rcx != 0) {
        ebx = esi;
    }
    cl ^= dl;
    if (rcx != 0) {
        ebx = edi;
    }
    rax = *((rsp + 0x70));
    *((rsp + 0x470)) = rax;
    rax = *((rsp + 0x18));
    *((rsp + 0x428)) = rax;
    goto label_0;
label_556:
    eax = *((rsp + 0x83));
    *((rsp + 0xaa)) = al;
    eax = *((rsp + 0x208));
    *((rsp + 0x5ac)) = eax;
    eax = *((rsp + 0xaa));
    al = ~al;
    al |= 0xfe;
    ebx = 0x189b8cb2;
    ecx = 0x7556a2ef;
    if (al != 0xff) {
        ebx = ecx;
    }
    eax = 0;
    *((rsp + 0x3f0)) = rax;
    goto label_0;
label_557:
    eax = *((rsp + 0xe9));
    ebx = 0x8c5bb48a;
    ecx = 0x205ca629;
    if (al != 0) {
        ebx = ecx;
    }
    goto label_0;
label_241:
    ebx = ecx;
    if (ecx != 0x776ebbec) {
        goto label_0;
    }
    abort ();
label_380:
    rax = *((rsp + 0x2d8));
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40f4d0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_alloc (char const * arg, int64_t arg1, int64_t arg2, int64_t arg3, size_t argsize, quoting_options const * o) {
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    r12 = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = argsize;
    r14 = o;
    /* char * quotearg_alloc(char const * arg,size_t argsize,quoting_options const * o); */
    r14 = rdx;
    r15 = rsi;
    r12 = rdi;
    eax = x_33;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    *(rsp + 0xe) = ((eax & ecx) == 0) ? 1 : 0;
    eax = y_34;
    *(rsp + 0xf) = (eax < 0xa) ? 1 : 0;
    eax = 0x37594397;
    r13d = 0x517bb02e;
    if (eax > 0x37594396) {
        goto label_1;
    }
    while (eax == 0x238f757e) {
        rcx = r14;
        quotearg_alloc_mem (r12, r15, 0);
        eax = 0x517bb02e;
        if (eax > 0x37594396) {
            goto label_1;
        }
INVALID_JUMP;
    }
    goto label_2;
    do {
label_1:
        if (eax == 0x37594397) {
            goto label_3;
        }
        if (eax != 0x517bb02e) {
            goto label_4;
        }
        rcx = r14;
        rax = quotearg_alloc_mem (r12, r15, 0);
        *((rsp + 0x10)) = rax;
        eax = x_33;
        ecx = y_34;
        edx = rax - 1;
        edx *= eax;
        edx = ~edx;
        edx |= 0xfffffffe;
        al = (edx == 0xffffffff) ? 1 : 0;
        bl = (ecx < 0xa) ? 1 : 0;
        bl ^= al;
        esi = 0x238f757e;
        if (ecx != 0xa) {
            esi = ebp;
        }
        eax = esi;
        if (edx == 0xffffffff) {
            eax = ebp;
        }
        if (ecx >= 0xa) {
            eax = esi;
        }
    } while (eax > 0x37594396);
    goto label_0;
label_3:
    ecx = *((rsp + 0xe));
    eax = *((rsp + 0xf));
    edx = ecx;
    dl ^= al;
    eax = 0x238f757e;
    if (al != 0) {
        eax = r13d;
    }
    ecx = 0x238f757e;
    if (cl == 0) {
        eax = ecx;
    }
    if (dl != 0) {
        eax = r13d;
    }
    if (eax > 0x37594396) {
        goto label_1;
    }
    goto label_0;
label_2:
    if (eax == 0x88d44550) {
        rax = *((rsp + 0x10));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40f640 */
#include <stdint.h>
 
uint64_t dbg_quotearg_alloc_mem (int64_t arg1, int64_t arg2, int64_t arg3, size_t argsize, char * buf, size_t n, quoting_options const * o, quoting_options const * p, size_t * size) {
    int32_t flags;
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    size_t var_10h;
    void * var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = argsize;
    rax = buf;
    rbx = n;
    rcx = o;
    r13 = p;
    r12 = size;
    /* char * quotearg_alloc_mem(char const * arg,size_t argsize,size_t * size,quoting_options const * o); */
    r12 = rdx;
    r15 = rsi;
    rbx = rdi;
    *((rsp + 0x20)) = rbx;
    r13d = default_quoting_options;
    if (rcx != 0) {
        r13 = rcx;
    }
    rax = errno_location ();
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    eax = *(rax);
    *((rsp + 4)) = eax;
    eax = *((r13 + 4));
    *(rsp + 3) = (r12 != 0) ? 1 : 0;
    ebp = *((rsp + 3));
    ebp |= 0xfffffffe;
    ecx = eax;
    ecx = ~ecx;
    edx = ebp;
    edx &= 0x4d9e41cb;
    ebp |= ecx;
    ecx &= 0x4d9e41cb;
    eax &= 0xb261be34;
    eax |= ecx;
    eax ^= edx;
    ebp = ~ebp;
    ebp |= eax;
    r14 = r13 + 8;
    rax = quotearg_buffer_restyled (0, 0, rbx, r15, *(r13), ebp);
    *((rsp + 0x10)) = rax;
    rax = *((rsp + 0x10));
    rcx = 0x79d2ac5c1294f9d0;
    rbx = rax + rcx + 1;
    rbx -= rcx;
    rax = xmalloc (rbx);
    *((rsp + 0x18)) = rax;
    quotearg_buffer_restyled (*((rsp + 0x18)), rbx, *((rsp + 0x28)), r15, *(r13), ebp);
    ecx = 0x996a7c64;
    eax = 0x4baf6204;
    if (ecx != 0x996a7c64) {
        goto label_1;
    }
    goto label_2;
label_0:
    rcx = *((rsp + 0x10));
    *(r12) = rcx;
    ecx = 0xa2a051f8;
    if (ecx != 0x996a7c64) {
        goto label_1;
    }
    do {
label_2:
        rcx = *((rsp + 8));
        edx = *((rsp + 4));
        *(rcx) = edx;
        ecx = *((rsp + 3));
        ecx = 0xa2a051f8;
        if (cl != 0) {
            ecx = eax;
        }
    } while (ecx == 0x996a7c64);
label_1:
    if (ecx == 0x4baf6204) {
        goto label_0;
    }
    if (ecx == 0xa2a051f8) {
        rax = *((rsp + 0x18));
        return rax;
    }
}
/* r2dec pseudo code output */
/* nostrip @ 0x40f7c0 */
#include <stdint.h>
 
int64_t dbg_quotearg_free (void) {
    int64_t var_8h;
    int64_t var_fh;
    void * var_10h;
    void * ptr;
    int64_t var_24h;
    /* void quotearg_free(); */
    rax = slotvec;
    *((rsp + 0x10)) = rax;
    eax = 0x9a2be18b;
    r13d = 0x68731d03;
    r12d = 0x827b8a33;
    r15d = 0x8f7806d;
    r14d = 0xa2073b4;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
    do {
        if (eax >= 0x8f7806c) {
label_5:
            eax = edi;
        }
        dl ^= cl;
        if (eax != 0x8f7806c) {
            eax = esi;
        }
        if (eax > 0x8f7806c) {
            goto label_0;
        }
        goto label_2;
label_4:
        rax = *((rsp + 0x10));
        ecx = slotvec0;
        *(rsp + 0xf) = (rax != rcx) ? 1 : 0;
        eax = x_37;
        ecx = rax - 1;
        ecx *= eax;
        ecx = ~ecx;
        ecx |= 0xfffffffe;
        cl = (ecx == 0xffffffff) ? 1 : 0;
        eax = 0x749d7259;
        esi = 0x2c5dd40c;
        if (ecx == 0xffffffff) {
            eax = esi;
        }
        dl = (*(obj_y_38) < 0xa) ? 1 : 0;
        edi = 0x749d7259;
    } while (1);
    do {
label_1:
        if (eax <= 0x8f7806c) {
            goto label_2;
        }
label_0:
        if (eax <= 0x5b82dbd4) {
            goto label_6;
        }
        if (eax <= 0x68731d02) {
            goto label_7;
        }
        if (eax == 0x68731d03) {
            goto label_8;
        }
        if (eax == 0x749d7259) {
            goto label_9;
        }
    } while (eax != 0x7b33f46b);
    eax = x_37;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x5d2106b7;
    if (eax == 0) {
        eax = r14d;
    }
    dl = (*(obj_y_38) < 0xa) ? 1 : 0;
    esi = 0x5d2106b7;
    if (*(obj_y_38) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_38) != 0xa) {
        eax = r14d;
    }
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_6:
    if (eax <= 0x1d72a271) {
        goto label_10;
    }
    if (eax == 0x1d72a272) {
        goto label_11;
    }
    if (eax == 0x2c5dd40c) {
        goto label_12;
    }
    if (eax != 0x284bfa9a) {
        goto label_1;
    }
    goto label_13;
label_7:
    if (eax == 0x5b82dbd5) {
        goto label_14;
    }
    if (eax != 0x5d2106b7) {
        goto label_1;
    }
    free (*((rsp + 0x18)));
    *(obj.slotvec0) = 0x100;
    *(obj.slot0) = 0x41c290;
    eax = 0xa2073b4;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_10:
    if (eax == 0x8f7806d) {
        goto label_15;
    }
    if (eax != 0xa2073b4) {
        goto label_1;
    }
    free (*((rsp + 0x18)));
    *(obj.slotvec0) = 0x100;
    *(obj.slot0) = 0x41c290;
    eax = x_37;
    ecx = y_38;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x5d2106b7;
    edi = 0x75d863a;
    goto label_16;
label_8:
    free (*((rsp + 0x10)));
    *(obj.slotvec) = 0x41c198;
    eax = x_37;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x827b8a33;
    if (eax == 0) {
        eax = r15d;
    }
    dl = (*(obj_y_38) < 0xa) ? 1 : 0;
    if (*(obj_y_38) >= 0xa) {
        eax = r12d;
    }
    dl ^= cl;
    if (*(obj_y_38) != 0xa) {
        eax = r15d;
    }
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_9:
    rax = *((rsp + 0x10));
    eax = 0xa1064613;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_11:
    eax = x_37;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x827b8a33;
    if (ecx == 0xffffffff) {
        eax = r13d;
    }
    dl = (*(obj_y_38) < 0xa) ? 1 : 0;
    if (*(obj_y_38) >= 0xa) {
        eax = r12d;
    }
    dl ^= cl;
    if (*(obj_y_38) != 0xa) {
        eax = r13d;
    }
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_12:
    al = *((rsp + 0xf));
    eax = 0x284bfa9a;
    ecx = 0x1d72a272;
    goto label_3;
label_14:
    ebp = *((rsp + 0x24));
    eax = 0x9a2be18b;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_15:
    eax = 0x284bfa9a;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
    if (eax != 0x8f7806c) {
label_3:
        eax = ecx;
    }
    if (eax > 0x8f7806c) {
        goto label_0;
    }
label_2:
    if (eax <= 0xc5e11b0d) {
        goto label_17;
    }
    if (eax <= 0xecb79b15) {
        goto label_18;
    }
    if (eax == 0xecb79b16) {
        goto label_19;
    }
    if (eax == 0x745e84) {
        goto label_20;
    }
    if (eax != 0x75d863a) {
        goto label_1;
    }
    eax = 0x745e84;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_17:
    if (eax > 0xa1064612) {
        goto label_21;
    }
    if (eax == 0x827b8a33) {
        goto label_22;
    }
    if (eax != 0x9a2be18b) {
        goto label_1;
    }
    *((rsp + 8)) = ebp;
    eax = *((rsp + 8));
    eax = 0xdd6eebf6;
    ecx = 0xb7322b89;
    if (eax < *(obj.nslots)) {
        eax = ecx;
    }
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_18:
    if (eax == 0xc5e11b0e) {
        goto label_23;
    }
    if (eax != 0xdd6eebf6) {
        goto label_1;
    }
    rax = *((rsp + 0x10));
    rax = *((rax + 8));
    *((rsp + 0x18)) = rax;
    rax = *((rsp + 0x18));
    ecx = slot0;
    eax = 0x745e84;
    ecx = 0x7b33f46b;
    goto label_3;
label_21:
    if (eax == 0xa1064613) {
        goto label_4;
    }
    if (eax != 0xb7322b89) {
        goto label_1;
    }
    eax = x_37;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xecb79b16;
    esi = 0xc5e11b0e;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj_y_38) < 0xa) ? 1 : 0;
    edi = 0xecb79b16;
    goto label_5;
label_19:
    rax = *((rsp + 8));
    rcx = *((rsp + 0x10));
    rax <<= 4;
    free (*((rcx + rax + 8)));
    eax = *((rsp + 8));
    eax = *((rsp + 8));
    eax = *((rsp + 8));
    eax = *((rsp + 8));
    eax = *((rsp + 8));
    eax = *((rsp + 8));
    eax = 0xc5e11b0e;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_20:
    eax = x_37;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x749d7259;
    edi = 0xa1064613;
    if (eax == 0) {
        eax = edi;
    }
    dl = (*(obj_y_38) < 0xa) ? 1 : 0;
    esi = 0x749d7259;
    if (*(obj_y_38) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_38) != 0xa) {
        eax = edi;
    }
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_22:
    free (*((rsp + 0x10)));
    *(obj.slotvec) = 0x41c198;
    eax = 0x68731d03;
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_23:
    rax = *((rsp + 8));
    rcx = *((rsp + 0x10));
    rax <<= 4;
    free (*((rcx + rax + 8)));
    eax = *((rsp + 8));
    eax++;
    *((rsp + 0x24)) = eax;
    eax = x_37;
    ecx = y_38;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xecb79b16;
    edi = 0x5b82dbd5;
    if (ecx != 0xa) {
label_16:
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax > 0x8f7806c) {
        goto label_0;
    }
    goto label_2;
label_13:
    *(obj.nslots) = 1;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40fd50 */
#include <stdint.h>
 
uint64_t quotearg_n (int64_t arg1, int64_t arg2) {
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    r13 = rsi;
    eax = x_39;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    *(rsp + 0xe) = (ecx == 0xffffffff) ? 1 : 0;
    eax = y_40;
    *(rsp + 0xf) = (eax < 0xa) ? 1 : 0;
    eax = 0x242d7769;
    r14d = 0x83c99b71;
    r15d = 0xc2d7e77e;
    r12d = 0x99152d1e;
    if (eax > 0xc2d7e77d) {
        goto label_1;
    }
    goto label_2;
label_0:
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
    rsi = r13;
    quotearg_n_options (ebp);
    eax = 0x99152d1e;
    if (eax > 0xc2d7e77d) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0x99152d1e) {
            goto label_3;
        }
        rdx = 0xffffffffffffffff;
        ecx = default_quoting_options;
        rsi = r13;
        rax = quotearg_n_options (ebp);
        *((rsp + 0x10)) = rax;
        eax = x_39;
        ecx = y_40;
        edx = rax - 1;
        edx *= eax;
        edx = ~edx;
        edx |= 0xfffffffe;
        al = (edx == 0xffffffff) ? 1 : 0;
        bl = (ecx < 0xa) ? 1 : 0;
        bl ^= al;
        esi = 0xc2d7e77e;
        if (ecx != 0xa) {
            esi = r14d;
        }
        eax = esi;
        if (edx == 0xffffffff) {
            eax = r14d;
        }
        if (ecx >= 0xa) {
            eax = esi;
        }
    } while (eax <= 0xc2d7e77d);
label_1:
    if (eax == 0xc2d7e77e) {
        goto label_0;
    }
    if (eax != 0x242d7769) {
        goto label_4;
    }
    ecx = *((rsp + 0xe));
    eax = *((rsp + 0xf));
    edx = ecx;
    dl ^= al;
    eax = 0xc2d7e77e;
    if (al != 0) {
        eax = r12d;
    }
    if (cl == 0) {
        eax = r15d;
    }
    if (dl != 0) {
        eax = r12d;
    }
    if (eax > 0xc2d7e77d) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0x83c99b71) {
        rax = *((rsp + 0x10));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x40feb0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_n_options (char const * arg, int64_t arg4, size_t argsize, size_t n, quoting_options const * options, size_t qsize, char * val) {
    slotvec * sv;
    int64_t var_1h;
    int64_t var_2h;
    int64_t var_3h;
    int64_t var_4h;
    void * ptr;
    uint32_t var_10h;
    int64_t var_1ch;
    void * var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    void * s;
    int64_t var_50h;
    size_t size;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_6ch;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    void ** var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    void * var_b0h;
    int64_t var_b8h;
    int64_t var_c0h;
    rsi = arg;
    rcx = arg4;
    rdx = argsize;
    rdi = n;
    r15 = options;
    rax = qsize;
    r13 = val;
    /* char * quotearg_n_options(int n,char const * arg,size_t argsize,quoting_options const * options); */
    r15 = rcx;
    *((rsp + 0x30)) = rdx;
    *((rsp + 0x28)) = rsi;
    r12d = edi;
    rax = errno_location ();
    *((rsp + 0x80)) = rax;
    rax = *((rsp + 0x80));
    eax = *(rax);
    *((rsp + 0x6c)) = eax;
    rax = slotvec;
    *((rsp + 0x38)) = rax;
    r14d = r12d;
    r14d >>= 0x1f;
    r14d &= 0x18a67d0d;
    r14d += 0x6c2ca53;
    eax = 0x74f2c863;
    ecx = 0x3281f2cd;
    if (r12d == 0x7fffffff) {
        ecx = eax;
    }
    *((rsp + 0x68)) = ecx;
    eax = r12 + 1;
    *((rsp + 0x64)) = eax;
    rax = (int64_t) r12d;
    *((rsp + 0x78)) = rax;
    rax = r15 + 8;
    *((rsp + 0x70)) = rax;
    rax = r15 + 0x28;
    *((rsp + 0xc0)) = rax;
    rax = r15 + 0x30;
    *((rsp + 0xb8)) = rax;
    eax = 0x18290e84;
    goto label_6;
label_2:
    rax = *(obj.nslots);
    rdi <<= 4;
    rdi += *((rsp + 0x48));
    ecx = *((rsp + 4));
    ecx += edx;
    ecx -= eax;
    ecx += 0x8c6bab80;
    rdx = (int64_t) ecx;
    rdx <<= 4;
    memset (rax, 0, 0x73945480);
    eax = *((rsp + 4));
    *(obj.nslots) = eax;
    eax = 0x11de9ffc;
    rcx = *((rsp + 0x48));
label_6:
    *((rsp + 0x20)) = rcx;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
    if (eax != 0x11309f8b) {
label_3:
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    do {
label_1:
        if (eax > 0x11309f8b) {
            goto label_4;
        }
label_0:
        if (eax > 0xcb9c8274) {
            goto label_7;
        }
        if (eax > 0xa44946a4) {
            goto label_8;
        }
        if (eax == 0x86a10d03) {
            goto label_9;
        }
        if (eax == 0x89efb96b) {
            goto label_10;
        }
    } while (eax != 0x9fbd962f);
    eax = 0xb8b04139;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_7:
    if (eax > 0xf19ce8d5) {
        goto label_11;
    }
    if (eax == 0xcb9c8275) {
        goto label_12;
    }
    if (eax == 0xe6ef908b) {
        goto label_13;
    }
    if (eax != 0xe92d6661) {
        goto label_1;
    }
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    rax++;
    rcx = *((rsp + 0x50));
    *(rcx) = rax;
    rax = *((rsp + 8));
    eax = 0x2a1a3235;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_8:
    if (eax == 0xa44946a5) {
        goto label_14;
    }
    if (eax == 0xb8b04139) {
        goto label_2;
    }
    if (eax == 0xbabaf12e) {
        goto label_15;
    }
    goto label_1;
label_11:
    if (eax == 0xf19ce8d6) {
        goto label_16;
    }
    if (eax == 0x3d17e4d) {
        goto label_17;
    }
    if (eax == 0x6c2ca53) {
        goto label_18;
    }
    goto label_1;
label_9:
    eax = *((rsp + 2));
    eax = 0xbabaf12e;
    ecx = 0x7428e3ec;
    if (al != 0) {
        eax = ecx;
    }
    r13 = *((rsp + 8));
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_10:
    rax = *((rsp + 0xb0));
    rcx = *((rsp + 0x78));
    rcx <<= 4;
    r9d = *((r15 + 4));
    eax = *((r15 + 4));
    eax &= 1;
    r9d |= eax;
    quotearg_buffer_restyled (*((rax + rcx + 8)), *((rax + rcx)), *((rsp + 0x30)), *((rsp + 0x38)), *(r15), 1);
    eax = 0xa44946a5;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_12:
    eax = 0x39b4c174;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_13:
    rax = *((rsp + 0x40));
    __asm ("movups xmm0, xmmword [obj.slotvec0]");
    __asm ("movups xmmword [rax], xmm0");
    eax = 0x5be90cc2;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_14:
    rax = *((rsp + 0xb0));
    rcx = *((rsp + 0x78));
    rcx <<= 4;
    rdx = rax + rcx;
    *((rsp + 0x50)) = rdx;
    rdx = *((rsp + 0x50));
    rbp = *(rdx);
    rax = rax + rcx + 8;
    *((rsp + 0x88)) = rax;
    rax = *((rsp + 0x88));
    rax = *(rax);
    *((rsp + 8)) = rax;
    eax = *((r15 + 4));
    ecx = *((r15 + 4));
    ecx &= 1;
    eax ^= 1;
    eax |= ecx;
    *((rsp + 0x1c)) = eax;
    *((rsp + 0x90)) = r15;
    rax = *((rsp + 0x90));
    r8d = *(rax);
    rax = *((rsp + 0x70));
    *((rsp + 0x98)) = rax;
    rax = *((rsp + 0xc0));
    *((rsp + 0xa0)) = rax;
    rax = *((rsp + 0xa0));
    rax = *(rax);
    rcx = *((rsp + 0xb8));
    *((rsp + 0xa8)) = rcx;
    rbx = *((rsp + 0xa8));
    rax = quotearg_buffer_restyled (*((rsp + 8)), rbp, *((rsp + 0x30)), *((rsp + 0x38)), *(r8d), *((rsp + 0x1c)));
    *((rsp + 0x10)) = rax;
    *(rsp + 2) = (rbp <= *((rsp + 0x10))) ? 1 : 0;
    eax = x_41;
    ecx = x_41;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x89efb96b;
    esi = 0x86a10d03;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj_y_42) < 0xa) ? 1 : 0;
    edi = 0x89efb96b;
    goto label_19;
label_16:
    free (*((rsp + 8)));
    eax = 0x58654e46;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_17:
    rax = *((rsp + 0x38));
    ecx = slotvec0;
    *(rsp + 1) = (rax == rcx) ? 1 : 0;
    eax = *((rsp + 1));
    eax = *((rsp + 0x68));
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_5:
    eax = x_41;
    ecx = y_42;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xe6ef908b;
    edi = 0x5be90cc2;
    goto label_3;
label_4:
    if (eax <= 0x3281f2cc) {
        goto label_20;
    }
    if (eax <= 0x5a781281) {
        goto label_21;
    }
    if (eax > 0x7428e3eb) {
        goto label_22;
    }
    if (eax == 0x5a781282) {
        goto label_23;
    }
    if (eax != 0x5be90cc2) {
        goto label_1;
    }
    rax = *((rsp + 0x40));
    __asm ("movups xmm0, xmmword [obj.slotvec0]");
    __asm ("movups xmmword [rax], xmm0");
    eax = x_41;
    ecx = y_42;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xe6ef908b;
    edi = 0x9fbd962f;
    goto label_3;
label_20:
    if (eax > 0x1f69475f) {
        goto label_24;
    }
    if (eax == 0x11309f8c) {
        goto label_25;
    }
    if (eax == 0x11de9ffc) {
        goto label_26;
    }
    if (eax != 0x18290e84) {
        goto label_1;
    }
    eax = r14d;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_21:
    if (eax == 0x3281f2cd) {
        goto label_27;
    }
    if (eax == 0x39b4c174) {
        goto label_28;
    }
    if (eax != 0x58654e46) {
        goto label_1;
    }
    free (*((rsp + 8)));
    eax = x_41;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0xf19ce8d6;
    edi = 0xcb9c8275;
    if (eax == 0) {
        eax = edi;
    }
    dl = (*(obj_y_42) < 0xa) ? 1 : 0;
    esi = 0xf19ce8d6;
    if (*(obj_y_42) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_42) != 0xa) {
        eax = edi;
    }
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_24:
    if (eax == 0x22364933) {
        goto label_5;
    }
    if (eax != 0x2a1a3235) {
        goto label_29;
    }
    rax = *((rsp + 0x10));
    rcx = 0x7979afbc9af5e2ed;
    rax = rax + rcx + 1;
    rax -= rcx;
    *((rsp + 0x58)) = rax;
    rax = *((rsp + 0x50));
    rcx = *((rsp + 0x58));
    *(rax) = rcx;
    rax = *((rsp + 8));
    ecx = slot0;
    *(rsp + 3) = (rax != rcx) ? 1 : 0;
    eax = x_41;
    ecx = y_42;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xe92d6661;
    edi = 0x5a781282;
    goto label_3;
label_22:
    if (eax != 0x7428e3ec) {
        goto label_30;
    }
    eax = x_41;
    ecx = y_42;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xe92d6661;
    edi = 0x2a1a3235;
    goto label_3;
label_23:
    eax = *((rsp + 3));
    eax = 0x39b4c174;
    ecx = 0x11309f8c;
    goto label_31;
label_25:
    eax = x_41;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0xf19ce8d6;
    esi = 0x58654e46;
    if (eax == 0) {
        eax = esi;
    }
    dl = (*(obj_y_42) < 0xa) ? 1 : 0;
    edi = 0xf19ce8d6;
    if (*(obj_y_42) >= 0xa) {
label_19:
        eax = edi;
    }
    dl ^= cl;
    if (*(obj_y_42) != 0xa) {
        eax = esi;
    }
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_26:
    rax = *((rsp + 0x20));
    *((rsp + 0xb0)) = rax;
    eax = x_41;
    ecx = y_42;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x89efb96b;
    esi = 0xa44946a5;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_27:
    rax = *((rsp + 0x38));
    ecx = *((rsp + 1));
    edi = 0;
    if (cl == 0) {
        rdi = rax;
    }
    eax = *((rsp + 0x64));
    *((rsp + 4)) = eax;
    rsi = *((rsp + 4));
    rsi <<= 4;
    rax = xrealloc (rdi, rsi, rdx, rcx, r8, r9);
    *((rsp + 0x40)) = rax;
    rax = *((rsp + 0x40));
    *((rsp + 0x48)) = rax;
    rax = *((rsp + 0x48));
    *(obj.slotvec) = rax;
    eax = *((rsp + 1));
    eax = 0xb8b04139;
    ecx = 0x22364933;
    if (al != 0) {
label_31:
        eax = ecx;
    }
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_28:
    rax = xmalloc (*((rsp + 0x58)));
    r13 = rax;
    rax = *((rsp + 0x88));
    *(rax) = r13;
    rax = *((rsp + 0x90));
    rax = *((rsp + 0xa0));
    rbp = *((rsp + 0xa8));
    quotearg_buffer_restyled (r13, *((rsp + 0x58)), *((rsp + 0x30)), *((rsp + 0x38)), *(rax), *((rsp + 0x1c)));
    eax = 0xbabaf12e;
    if (eax <= 0x11309f8b) {
        goto label_0;
    }
    goto label_4;
label_29:
    if (eax != 0x1f694760) {
        goto label_1;
    }
    goto label_32;
label_30:
    if (eax != 0x74f2c863) {
        goto label_1;
    }
    goto label_33;
label_18:
    eax = 0x11de9ffc;
    ecx = 0x3d17e4d;
    if (*(obj.nslots) <= r12d) {
        eax = ecx;
    }
    rcx = *((rsp + 0x38));
    goto label_6;
label_15:
    rax = *((rsp + 0x80));
    ecx = *((rsp + 0x6c));
    *(rax) = ecx;
    rax = r13;
    return rax;
label_32:
    abort ();
label_33:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x410740 */
#include <stdint.h>
 
void quotearg_n_mem (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_1h;
    int64_t var_2h;
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_6ch;
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
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = default_quoting_options;
invalid_funccall(); //    return void (*0x40feb0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x410750 */
#include <stdint.h>
 
uint64_t dbg_quotearg (char const * arg, int64_t arg1) {
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_10h;
    r12 = arg;
    rdi = arg1;
    /* char * quotearg(char const * arg); */
    eax = x_45;
    ecx = x_45;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    *(rsp + 6) = ((eax & ecx) == 0) ? 1 : 0;
    eax = y_46;
    *(rsp + 7) = (eax < 0xa) ? 1 : 0;
    r12 = rdi;
    eax = 0xc1fd4a33;
    r13d = 0x83c99b71;
    r14d = 0xc2d7e77e;
    r15d = 0xa2f5d0f2;
    if (eax <= 0xeb7e9a33) {
        goto label_3;
    }
    goto label_7;
    do {
        cl = *((rsp + 6));
        al = *((rsp + 7));
        edx = ecx;
        dl ^= al;
        eax = 0xeb7e9a34;
        if (al != 0) {
            eax = r15d;
        }
        ecx = 0xeb7e9a34;
        if (cl == 0) {
            eax = ecx;
        }
        if (dl != 0) {
            eax = r15d;
        }
        if (eax > 0xeb7e9a33) {
            goto label_7;
        }
label_3:
        if (eax == 0xa2f5d0f2) {
            goto label_8;
        }
    } while (eax == 0xc1fd4a33);
    goto label_9;
label_8:
    eax = x_39;
    ecx = y_40;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    *(rsp + 4) = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 5) = (ecx < 0xa) ? 1 : 0;
    eax = 0x242d7769;
    if (eax > 0xc2d7e77d) {
        goto label_1;
    }
    goto label_2;
label_0:
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
    rsi = r12;
    quotearg_n_options (0);
    eax = 0x99152d1e;
    if (eax > 0xc2d7e77d) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0x99152d1e) {
            goto label_10;
        }
        rdx = 0xffffffffffffffff;
        ecx = default_quoting_options;
        rsi = r12;
        rax = quotearg_n_options (0);
        *((rsp + 8)) = rax;
        eax = x_39;
        ecx = y_40;
        edx = eax;
        edx = -edx;
        edx = ~edx;
        edx *= eax;
        edx = ~edx;
        edx |= 0xfffffffe;
        al = (edx == 0xffffffff) ? 1 : 0;
        bl = (ecx < 0xa) ? 1 : 0;
        bl ^= al;
        esi = 0xc2d7e77e;
        if (ecx != 0xa) {
            esi = r13d;
        }
        eax = esi;
        if (edx == 0xffffffff) {
            eax = r13d;
        }
        if (ecx >= 0xa) {
            eax = esi;
        }
    } while (eax <= 0xc2d7e77d);
label_1:
    if (eax == 0xc2d7e77e) {
        goto label_0;
    }
    if (eax != 0x242d7769) {
        goto label_11;
    }
    ecx = *((rsp + 4));
    eax = *((rsp + 5));
    edx = ecx;
    dl ^= al;
    edx = 0xc2d7e77e;
    if (eax != 0x242d7769) {
        edx = ebp;
    }
    eax = edx;
    if (al != 0) {
        eax = ebp;
    }
    if (cl == 0) {
        eax = edx;
    }
    if (eax > 0xc2d7e77d) {
        goto label_1;
    }
    goto label_2;
label_10:
    if (eax != 0x83c99b71) {
        goto label_11;
    }
    rax = *((rsp + 8));
    *((rsp + 0x10)) = rax;
    eax = x_45;
    ecx = y_46;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xeb7e9a34;
    edi = 0x633f2803;
    if (ecx != 0xa) {
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0xeb7e9a33) {
        goto label_3;
    }
label_7:
    if (eax != 0xeb7e9a34) {
        goto label_12;
    }
    eax = x_39;
    ecx = y_40;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    *(rsp + 4) = ((eax & edx) == 0) ? 1 : 0;
    *(rsp + 5) = (ecx < 0xa) ? 1 : 0;
    eax = 0x242d7769;
    if (eax > 0xc2d7e77d) {
        goto label_5;
    }
    goto label_6;
label_4:
    rdx = 0xffffffffffffffff;
    ecx = default_quoting_options;
    rsi = r12;
    quotearg_n_options (0);
    eax = 0x99152d1e;
    if (eax > 0xc2d7e77d) {
        goto label_5;
    }
    do {
label_6:
        if (eax != 0x99152d1e) {
            goto label_13;
        }
        rdx = 0xffffffffffffffff;
        ecx = default_quoting_options;
        rsi = r12;
        rax = quotearg_n_options (0);
        *((rsp + 8)) = rax;
        eax = x_39;
        ecx = rax - 1;
        ecx *= eax;
        eax = ecx;
        eax ^= 0xfffffffe;
        eax &= ecx;
        cl = (eax == 0) ? 1 : 0;
        eax = 0xc2d7e77e;
        if (eax == 0) {
            eax = r13d;
        }
        dl = (*(obj_y_40) < 0xa) ? 1 : 0;
        if (*(obj_y_40) >= 0xa) {
            eax = r14d;
        }
        dl ^= cl;
        if (*(obj_y_40) != 0xa) {
            eax = r13d;
        }
    } while (eax <= 0xc2d7e77d);
label_5:
    if (eax == 0xc2d7e77e) {
        goto label_4;
    }
    if (eax != 0x242d7769) {
        goto label_14;
    }
    ecx = *((rsp + 4));
    eax = *((rsp + 5));
    edx = ecx;
    dl ^= al;
    edx = 0xc2d7e77e;
    if (eax != 0x242d7769) {
        edx = ebp;
    }
    eax = edx;
    if (al != 0) {
        eax = ebp;
    }
    if (cl == 0) {
        eax = edx;
    }
    if (eax > 0xc2d7e77d) {
        goto label_5;
    }
    goto label_6;
label_13:
    if (eax != 0x83c99b71) {
        goto label_14;
    }
    rax = *((rsp + 8));
    eax = 0xa2f5d0f2;
    if (eax <= 0xeb7e9a33) {
        goto label_3;
    }
    goto label_7;
label_11:
label_14:
label_12:
    if (eax == 0x633f2803) {
        rax = *((rsp + 0x10));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x410b20 */
#include <stdint.h>
 
uint64_t dbg_quotearg_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    rbx = arg;
    rdi = arg1;
    rsi = arg2;
    r14 = argsize;
    /* char * quotearg_mem(char const * arg,size_t argsize); */
    r14 = rsi;
    rbx = rdi;
    eax = x_47;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    *(rsp + 6) = ((eax & ecx) == 0) ? 1 : 0;
    eax = y_48;
    *(rsp + 7) = (eax < 0xa) ? 1 : 0;
    eax = 0xbd8f82d5;
    r12d = 0xa5c944ee;
    r15d = 0x93d52ab1;
    goto label_1;
label_0:
    ecx = default_quoting_options;
    rsi = rbx;
    rdx = r14;
    quotearg_n_options (0);
    eax = 0xb2c76ea1;
    do {
label_1:
        eax &= 0x3fffffff;
        if (eax <= 0x32c76ea0) {
            goto label_2;
        }
        if (eax == 0x32c76ea1) {
            goto label_3;
        }
        if (eax != 0x3d8f82d5) {
            goto label_4;
        }
        ecx = *((rsp + 6));
        eax = *((rsp + 7));
        edx = ecx;
        dl ^= al;
        edx = 0x93d52ab1;
        if (eax != 0x3d8f82d5) {
            edx = ebp;
        }
        eax = edx;
        if (al != 0) {
            eax = ebp;
        }
        if (cl == 0) {
            eax = edx;
        }
    } while (1);
label_2:
    if (eax == 0x13d52ab1) {
        goto label_0;
    }
    goto label_5;
label_3:
    ecx = default_quoting_options;
    rsi = rbx;
    rdx = r14;
    rax = quotearg_n_options (0);
    *((rsp + 8)) = rax;
    eax = x_47;
    ecx = x_47;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x93d52ab1;
    if (ecx == 0xffffffff) {
        eax = r12d;
    }
    dl = (*(obj_y_48) < 0xa) ? 1 : 0;
    if (*(obj_y_48) >= 0xa) {
        eax = r15d;
    }
    dl ^= cl;
    if (*(obj_y_48) != 0xa) {
        eax = r12d;
    }
    goto label_1;
label_5:
    if (eax == 0x25c944ee) {
        rax = *((rsp + 8));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x410c60 */
#include <stdint.h>
 
void quotearg_n_style (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rbx = rdx;
    r14 = rsp + 8;
    rdi = r14;
    quoting_options_from_style ();
    rdx = 0xffffffffffffffff;
    rsi = rbx;
    rcx = r14;
    quotearg_n_options (ebp);
}
/* r2dec pseudo code output */
/* nostrip @ 0x410ca0 */
#include <stdint.h>
 
int64_t dbg_quoting_options_from_style (quoting_options o) {
    int64_t var_10h;
    int64_t var_3h;
    int64_t var_2h;
    int64_t var_1h;
    rsi = o;
    /* quoting_options quoting_options_from_style(enum quoting_style style); */
    eax = x_51;
    ecx = y_52;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    *(rbp - 1) = (edx == 0xffffffff) ? 1 : 0;
    *(rbp - 2) = (ecx < 0xa) ? 1 : 0;
    ecx = 0xf1e93ec1;
    __asm ("xorps xmm0, xmm0");
    r9d = 0xc8214813;
    r10d = 0x4885f045;
    r8d = 0x595ec9d4;
    r11d = 0xbc987c7a;
    while (eax == 0xc8214813) {
        eax = *((rbp - 3));
        ecx = 0xfa593095;
        if (al != 0) {
            ecx = r8d;
        }
label_0:
        eax = ecx;
        if (eax > 0xfa593094) {
            goto label_1;
        }
        if (eax == 0xbc987c7a) {
            goto label_2;
        }
    }
    if (eax != 0xf1e93ec1) {
        goto label_3;
    }
    edx = *((rbp - 1));
    ecx = *((rbp - 2));
    eax = edx;
    al ^= cl;
    ecx = 0x4885f045;
    if (cl != 0) {
        ecx = r11d;
    }
    if (dl == 0) {
        ecx = r10d;
    }
    if (al != 0) {
        ecx = r11d;
    }
    goto label_0;
label_1:
    if (eax == 0xfa593095) {
        goto label_4;
    }
    ecx = 0xbc987c7a;
    if (eax == 0x4885f045) {
        goto label_0;
    }
    goto label_5;
label_2:
    rax = rsp;
    rax += 0xffffffffffffffc0;
    *((rbp - 0x10)) = rax;
    rax = *((rbp - 0x10));
    rax = *((rbp - 0x10));
    __asm ("movups xmmword [rax + 0x20], xmm0");
    __asm ("movups xmmword [rax + 0x10], xmm0");
    __asm ("movups xmmword [rax], xmm0");
    *((rax + 0x30)) = 0;
    *(rbp - 3) = (esi == 0xa) ? 1 : 0;
    eax = x_51;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    dl = (eax == 0) ? 1 : 0;
    ecx = 0x4885f045;
    if (eax == 0) {
        ecx = r9d;
    }
    al = (*(obj_y_52) < 0xa) ? 1 : 0;
    if (*(obj_y_52) >= 0xa) {
        ecx = r10d;
    }
    al ^= dl;
    if (*(obj_y_52) != 0xa) {
        ecx = r9d;
    }
    goto label_0;
label_4:
    *(rdi) = esi;
    rax = *((rbp - 0x10));
    ecx = *((rax + 0x30));
    *((rdi + 0x34)) = ecx;
    __asm ("movups xmm0, xmmword [rax]");
    __asm ("movups xmm1, xmmword [rax + 0x10]");
    __asm ("movups xmm2, xmmword [rax + 0x20]");
    __asm ("movups xmmword [rdi + 0x24], xmm2");
    __asm ("movups xmmword [rdi + 0x14], xmm1");
    __asm ("movups xmmword [rdi + 4], xmm0");
    rax = *((rbp - 0x10));
    rax = rdi;
    return rax;
label_5:
    if (eax != 0x595ec9d4) {
INVALID_JUMP;
    }
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x410e20 */
#include <stdint.h>
 
uint64_t dbg_quotearg_n_style_mem (char const * arg, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, size_t argsize, int32_t n, quoting_options const o, enum quoting_style s) {
    int64_t var_38h;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    r15 = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r14 = argsize;
    r13 = n;
    rbx = o;
    r12 = s;
    /* char * quotearg_n_style_mem(int n,quoting_style s,char const * arg,size_t argsize); */
    eax = x_53;
    ebx = x_53;
    ebx = -ebx;
    ebx = ~ebx;
    ebx *= eax;
    eax = ebx;
    eax ^= 0xfffffffe;
    *(rbp - 0x29) = ((eax & ebx) == 0) ? 1 : 0;
    eax = y_54;
    *(rbp - 0x2a) = (eax < 0xa) ? 1 : 0;
    r14 = rcx;
    r15 = rdx;
    r12d = esi;
    r13d = edi;
    eax = 0x6c2178a9;
    while (eax == 0x780a2119) {
        rbx = rsp;
        rbx += 0xffffffffffffffc0;
        rdi = rbx;
        esi = r12d;
        quoting_options_from_style ();
        rsi = r15;
        rdx = r14;
        rcx = rbx;
        quotearg_n_options (r13d);
        eax = 0x38d0242;
label_0:
        eax &= 0x7fffffff;
        if (eax <= 0x6c2178a8) {
            goto label_1;
        }
        if (eax == 0x6c2178a9) {
            goto label_2;
        }
    }
    goto label_3;
label_1:
    if (eax == 0x38d0242) {
        rbx = rsp;
        rbx += 0xffffffffffffffc0;
        rdi = rbx;
        esi = r12d;
        quoting_options_from_style ();
        rsi = r15;
        rdx = r14;
        rcx = rbx;
        rax = quotearg_n_options (r13d);
        *((rbp - 0x38)) = rax;
        eax = x_53;
        ecx = y_54;
        edx = eax;
        edx = -edx;
        edx = ~edx;
        edx *= eax;
        edx = ~edx;
        edx |= 0xfffffffe;
        al = (edx == 0xffffffff) ? 1 : 0;
        bl = (ecx < 0xa) ? 1 : 0;
        bl ^= al;
        esi = 0x780a2119;
        edi = 0x154ec28d;
        if (ecx != 0xa) {
            esi = edi;
        }
        eax = esi;
        if (edx == 0xffffffff) {
            eax = edi;
        }
        if (ecx >= 0xa) {
            eax = esi;
        }
        goto label_0;
label_2:
        ecx = *((rbp - 0x29));
        eax = *((rbp - 0x2a));
        edx = ecx;
        dl ^= al;
        edx = 0x780a2119;
        esi = 0x38d0242;
        if (ecx != 0xa) {
            edx = esi;
        }
        eax = edx;
        if (al != 0) {
            eax = esi;
        }
        if (cl == 0) {
            eax = edx;
        }
        goto label_0;
    }
    if (eax == 0x154ec28d) {
        rax = *((rbp - 0x38));
        rsp = rbp - 0x28;
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x410fa0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_style (char const * arg, int64_t arg1, int64_t arg2) {
    enum quoting_style s;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    quoting_options const o;
    r14 = arg;
    rdi = arg1;
    rsi = arg2;
    /* char * quotearg_style(enum quoting_style s,char const * arg); */
    r14 = rsi;
    eax = x_55;
    ecx = y_56;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    *(rsp + 6) = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 7) = (ecx < 0xa) ? 1 : 0;
    eax = 0x5782bb06;
    rbx = rsp + 0x10;
    r15d = 0x7c7cbb9f;
    r12d = 0x1c2e67e7;
    r13d = 0xefcd9528;
    if (eax > 0x5782bb05) {
        goto label_1;
    }
    while (eax == 0x1c2e67e7) {
        rdi = rbx;
        esi = ebp;
        quoting_options_from_style ();
        rdx = 0xffffffffffffffff;
        rsi = r14;
        rcx = rbx;
        quotearg_n_options (0);
        eax = 0x7c7cbb9f;
        if (eax > 0x5782bb05) {
            goto label_1;
        }
INVALID_JUMP;
    }
    goto label_2;
    do {
label_1:
        if (eax == 0x5782bb06) {
            goto label_3;
        }
        if (eax != 0x7c7cbb9f) {
            goto label_4;
        }
        rdi = rbx;
        esi = ebp;
        quoting_options_from_style ();
        rdx = 0xffffffffffffffff;
        rsi = r14;
        rcx = rbx;
        rax = quotearg_n_options (0);
        *((rsp + 8)) = rax;
        eax = x_55;
        ecx = x_55;
        ecx = -ecx;
        ecx = ~ecx;
        ecx *= eax;
        ecx = ~ecx;
        ecx |= 0xfffffffe;
        cl = (ecx == 0xffffffff) ? 1 : 0;
        eax = 0x1c2e67e7;
        if (ecx == 0xffffffff) {
            eax = r13d;
        }
        dl = (*(obj_y_56) < 0xa) ? 1 : 0;
        if (*(obj_y_56) >= 0xa) {
            eax = r12d;
        }
        dl ^= cl;
        if (*(obj_y_56) != 0xa) {
            eax = r13d;
        }
    } while (eax > 0x5782bb05);
    goto label_0;
label_3:
    ecx = *((rsp + 6));
    eax = *((rsp + 7));
    edx = ecx;
    dl ^= al;
    eax = 0x1c2e67e7;
    if (al != 0) {
        eax = r15d;
    }
    if (cl == 0) {
        eax = r12d;
    }
    if (dl != 0) {
        eax = r15d;
    }
    if (eax > 0x5782bb05) {
        goto label_1;
    }
    goto label_0;
label_2:
    if (eax == 0xefcd9528) {
        rax = *((rsp + 8));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x411120 */
#include <stdint.h>
 
uint64_t dbg_quotearg_style_mem (char const * arg, int64_t arg1, int64_t arg2, int64_t arg3, size_t argsize) {
    enum quoting_style s;
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    r12 = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = argsize;
    /* char * quotearg_style_mem(enum quoting_style s,char const * arg,size_t argsize); */
    r14 = rdx;
    r12 = rsi;
    eax = x_57;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    *(rsp + 0xe) = ((eax & ecx) == 0) ? 1 : 0;
    eax = y_58;
    *(rsp + 0xf) = (eax < 0xa) ? 1 : 0;
    eax = 0xc5354ecc;
    r15d = 0x1b94982e;
    r13d = 0xe74294f1;
    if (eax > 0x1b94982d) {
        goto label_1;
    }
    goto label_2;
label_0:
    quotearg_n_style_mem (0, ebp, r12, r14);
    eax = 0x1b94982e;
    if (eax > 0x1b94982d) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0xc5354ecc) {
            goto label_3;
        }
        ecx = *((rsp + 0xe));
        eax = *((rsp + 0xf));
        edx = ecx;
        dl ^= al;
        eax = 0x5e495b4b;
        if (al != 0) {
            eax = r15d;
        }
        ecx = 0x5e495b4b;
        if (cl == 0) {
            eax = ecx;
        }
        if (dl != 0) {
            eax = r15d;
        }
    } while (eax <= 0x1b94982d);
label_1:
    if (eax == 0x1b94982e) {
        goto label_4;
    }
    if (eax == 0x5e495b4b) {
        goto label_0;
    }
    goto label_5;
label_4:
    rax = quotearg_n_style_mem (0, ebp, r12, r14);
    *((rsp + 0x10)) = rax;
    eax = x_57;
    ecx = y_58;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x5e495b4b;
    if (ecx != 0xa) {
        edx = r13d;
    }
    eax = edx;
    if (eax == 0) {
        eax = r13d;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax > 0x1b94982d) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0xe74294f1) {
        rax = *((rsp + 0x10));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x411280 */
#include <stdint.h>
 
uint64_t dbg_quotearg_char_mem (char const * arg, int64_t arg1, int64_t arg2, int64_t arg3, size_t argsize, quoting_options * o, int32_t r) {
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_2ch;
    int64_t var_2bh;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    r9 = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r8 = argsize;
    rax = o;
    rcx = r;
    /* char * quotearg_char_mem(char const * arg,size_t argsize,char ch); */
    eax = x_59;
    ecx = x_59;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    *(rbp - 0x2b) = (ecx == 0xffffffff) ? 1 : 0;
    eax = y_60;
    *(rbp - 0x2c) = (eax < 0xa) ? 1 : 0;
    r8 = rsi;
    r9 = rdi;
    r13d = edx;
    r13b ^= 0xe0;
    r13b &= dl;
    eax = edx;
    al >>= 5;
    r12d = (int32_t) al;
    eax = 0x48e60ea5;
    r10d = 0xf47800fc;
    r11d = 0x1d52adf;
    r15d = 0xcaade9d0;
    edi = 0x8530198d;
    esi = 0xab0f5d11;
    if (eax > 0x48e60ea4) {
        goto label_8;
label_7:
        ecx = *((rbp - 0x2b));
        eax = *((rbp - 0x2c));
        edx = ecx;
        dl ^= al;
        eax = 0x8530198d;
        if (al != 0) {
            eax = esi;
        }
        if (cl == 0) {
            eax = edi;
        }
        if (dl != 0) {
            eax = esi;
        }
        if (eax > 0x48e60ea4) {
            goto label_8;
        }
    }
label_6:
    if (eax == 0x8530198d) {
        goto label_9;
    }
    if (eax != 0xab0f5d11) {
        goto label_10;
    }
    rcx = rsp;
    rax = rcx - 0x40;
    rdx = comment;
    *((rcx - 0x10)) = rdx;
    __asm ("movups xmm0, xmmword [0x0041c270]");
    __asm ("movups xmmword [rcx - 0x20], xmm0");
    __asm ("movups xmm0, xmmword [0x0041c260]");
    __asm ("movups xmmword [rcx - 0x30], xmm0");
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    __asm ("movups xmmword [rcx - 0x40], xmm0");
    ecx = x_23;
    esi = y_24;
    edx = ecx;
    edx = -edx;
    edx = ~edx;
    edx *= ecx;
    edx = ~edx;
    edx |= 0xfffffffe;
    dl = (edx == 0xffffffff) ? 1 : 0;
    *(rbp - 0x29) = (edx == 0xffffffff) ? 1 : 0;
    edi = 0x1d52adf;
    if (edx == 0xffffffff) {
        edi = r10d;
    }
    cl = (esi < 0xa) ? 1 : 0;
    *(rbp - 0x2a) = (esi < 0xa) ? 1 : 0;
    if (esi >= 0xa) {
        edi = r11d;
    }
    cl ^= dl;
    if (esi != 0xa) {
        edi = r10d;
    }
    ecx = 0x67317ce9;
    if (ecx > 0x1d52ade) {
        goto label_1;
    }
    goto label_2;
label_0:
    ebx = *((rax + r12*4 + 8));
    esi = *((rax + r12*4 + 8));
    ecx = r13d;
    esi >>= cl;
    edx = esi;
    edx ^= 0xfffffffe;
    edx &= esi;
    ecx = edx;
    ecx = ~ecx;
    ecx &= 1;
    edx &= 0xfffffffe;
    edx |= ecx;
    ecx = r13d;
    edx <<= cl;
    ecx = edx;
    ecx = ~ecx;
    ecx &= 0x740c5f67;
    edx &= 0x8bf3a098;
    esi = ebx;
    esi = ~esi;
    esi &= 0x740c5f67;
    ebx &= 0x8bf3a098;
    edx |= ecx;
    ebx |= esi;
    ebx ^= edx;
    *((rax + r12*4 + 8)) = ebx;
    ecx = 0xcaade9d0;
    if (ecx > 0x1d52ade) {
        goto label_1;
    }
    do {
label_2:
        if (ecx != 0xcaade9d0) {
            goto label_11;
        }
        edx = *((rax + r12*4 + 8));
        esi = *((rax + r12*4 + 8));
        ecx = r13d;
        esi >>= cl;
        esi &= 1;
        *((rbp - 0x30)) = esi;
        esi = *((rbp - 0x30));
        ecx = *((rbp - 0x30));
        ecx = ~ecx;
        ecx &= 0x6ce689e4;
        esi &= 0x9319761b;
        esi |= ecx;
        esi ^= 0x6ce689e5;
        ecx = r13d;
        esi <<= cl;
        ecx = esi;
        ecx = ~ecx;
        ecx &= edx;
        edx = ~edx;
        edx &= esi;
        edx |= ecx;
        *((rax + r12*4 + 8)) = edx;
        ecx = edi;
    } while (ecx <= 0x1d52ade);
label_1:
    if (ecx == 0x1d52adf) {
        goto label_0;
    }
    if (ecx != 0x67317ce9) {
        goto label_12;
    }
    ebx = *((rbp - 0x29));
    ecx = *((rbp - 0x2a));
    edx = ebx;
    dl ^= cl;
    edx = 0x1d52adf;
    if (ecx != 0x67317ce9) {
        edx = r15d;
    }
    ecx = edx;
    if (cl != 0) {
        ecx = r15d;
    }
    if (bl == 0) {
        ecx = edx;
    }
    if (ecx > 0x1d52ade) {
        goto label_1;
    }
    goto label_2;
label_9:
    rcx = rsp;
    rax = rcx - 0x40;
    rdx = comment;
    *((rcx - 0x10)) = rdx;
    __asm ("movups xmm0, xmmword [0x0041c270]");
    __asm ("movups xmmword [rcx - 0x20], xmm0");
    __asm ("movups xmm0, xmmword [0x0041c260]");
    __asm ("movups xmmword [rcx - 0x30], xmm0");
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    __asm ("movups xmmword [rcx - 0x40], xmm0");
    ecx = x_23;
    esi = y_24;
    edx = rcx - 1;
    edx *= ecx;
    edx = ~edx;
    edx |= 0xfffffffe;
    cl = (edx == 0xffffffff) ? 1 : 0;
    bl = (esi < 0xa) ? 1 : 0;
    bl ^= cl;
    ecx = 0x1d52adf;
    if (esi != 0xa) {
        ecx = r10d;
    }
    *(rbp - 0x29) = (edx == 0xffffffff) ? 1 : 0;
    edi = ecx;
    if (edx == 0xffffffff) {
        edi = r10d;
    }
    *(rbp - 0x2a) = (esi < 0xa) ? 1 : 0;
    if (esi >= 0xa) {
        edi = ecx;
    }
    ecx = 0x67317ce9;
    if (ecx > 0x1d52ade) {
        goto label_4;
    }
    goto label_5;
label_3:
    edx = *((rax + r12*4 + 8));
    esi = *((rax + r12*4 + 8));
    ecx = r13d;
    esi >>= cl;
    esi = ~esi;
    esi &= 1;
    esi <<= cl;
    ecx = esi;
    ecx = ~ecx;
    ecx &= edx;
    edx = ~edx;
    edx &= esi;
    edx |= ecx;
    *((rax + r12*4 + 8)) = edx;
    ecx = 0xcaade9d0;
    if (ecx > 0x1d52ade) {
        goto label_4;
    }
    do {
label_5:
        if (ecx != 0xcaade9d0) {
            goto label_13;
        }
        edx = *((rax + r12*4 + 8));
        esi = *((rax + r12*4 + 8));
        ecx = r13d;
        esi >>= cl;
        ecx = esi;
        ecx ^= 0xfffffffe;
        ecx &= esi;
        *((rbp - 0x30)) = ecx;
        esi = *((rbp - 0x30));
        ecx = *((rbp - 0x30));
        ecx = ~ecx;
        ecx &= 1;
        esi &= 0xfffffffe;
        esi |= ecx;
        ecx = r13d;
        esi <<= cl;
        ecx = esi;
        ecx = ~ecx;
        ecx &= edx;
        edx = ~edx;
        edx &= esi;
        edx |= ecx;
        *((rax + r12*4 + 8)) = edx;
        ecx = edi;
    } while (ecx <= 0x1d52ade);
label_4:
    if (ecx == 0x1d52adf) {
        goto label_3;
    }
    if (ecx != 0x67317ce9) {
        goto label_14;
    }
    edx = *((rbp - 0x29));
    ecx = *((rbp - 0x2a));
    ebx = edx;
    bl ^= cl;
    ecx = 0x1d52adf;
    if (cl != 0) {
        ecx = r15d;
    }
    if (dl == 0) {
        ecx = r11d;
    }
    if (bl != 0) {
        ecx = r15d;
    }
    if (ecx > 0x1d52ade) {
        goto label_4;
    }
    goto label_5;
label_11:
    if (ecx != 0xf47800fc) {
        goto label_12;
    }
    ecx = *((rbp - 0x30));
    rsi = r9;
    rdx = r8;
    rcx = rax;
    rbx = r8;
    r14 = r9;
    rax = quotearg_n_options (0);
    r11d = 0x1d52adf;
    r10d = 0xf47800fc;
    r9 = r14;
    esi = 0xab0f5d11;
    edi = 0x8530198d;
    r8 = rbx;
    *((rbp - 0x38)) = rax;
    eax = x_59;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x8530198d;
    ebx = 0x5c9bfb1f;
    if (eax == 0) {
        eax = ebx;
    }
    dl = (*(obj_y_60) < 0xa) ? 1 : 0;
    if (*(obj_y_60) >= 0xa) {
        eax = edi;
    }
    dl ^= cl;
    if (*(obj_y_60) != 0xa) {
        eax = ebx;
    }
    if (eax <= 0x48e60ea4) {
        goto label_6;
    }
    goto label_8;
label_13:
    if (ecx != 0xf47800fc) {
        goto label_14;
    }
    ecx = *((rbp - 0x30));
    rsi = r9;
    rdx = r8;
    rcx = rax;
    r14 = r8;
    rbx = r9;
    quotearg_n_options (0);
    r11d = 0x1d52adf;
    r10d = 0xf47800fc;
    r9 = rbx;
    r8 = r14;
    esi = 0xab0f5d11;
    edi = 0x8530198d;
    eax = 0xab0f5d11;
    if (eax <= 0x48e60ea4) {
        goto label_6;
    }
label_8:
    if (eax == 0x48e60ea5) {
        goto label_7;
    }
    if (eax == 0x5c9bfb1f) {
        rax = *((rbp - 0x38));
        rsp = rbp - 0x28;
        return rax;
label_12:
INVALID_JUMP;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x411780 */
#include <stdint.h>
 
uint64_t quotearg_char (int64_t arg1) {
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    rdi = arg1;
    rbx = rdi;
    eax = x_61;
    ecx = y_62;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    *(rsp + 6) = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 7) = (ecx < 0xa) ? 1 : 0;
    eax = 0x5082975b;
    ebp = (int32_t) sil;
    r14d = 0xd90cab03;
    r15d = 0x792f1350;
    r12d = 0xb6d198ed;
    if (eax > 0x5082975a) {
        goto label_1;
    }
    goto label_2;
label_0:
    quotearg_char_mem (rbx, 0xffffffffffffffff, ebp);
    eax = 0xb6d198ed;
    if (eax > 0x5082975a) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0xb6d198ed) {
            goto label_3;
        }
        rax = quotearg_char_mem (rbx, 0xffffffffffffffff, ebp);
        *((rsp + 8)) = rax;
        eax = x_61;
        ecx = rax - 1;
        ecx *= eax;
        eax = ecx;
        eax ^= 0xfffffffe;
        eax &= ecx;
        cl = (eax == 0) ? 1 : 0;
        eax = 0x792f1350;
        if (eax == 0) {
            eax = r14d;
        }
        dl = (*(obj_y_62) < 0xa) ? 1 : 0;
        if (*(obj_y_62) >= 0xa) {
            eax = r15d;
        }
        dl ^= cl;
        if (*(obj_y_62) != 0xa) {
            eax = r14d;
        }
    } while (eax <= 0x5082975a);
label_1:
    if (eax == 0x5082975b) {
        goto label_4;
    }
    if (eax == 0x792f1350) {
        goto label_0;
    }
    goto label_5;
label_4:
    ecx = *((rsp + 6));
    eax = *((rsp + 7));
    edx = ecx;
    dl ^= al;
    eax = 0x792f1350;
    if (al != 0) {
        eax = r12d;
    }
    if (cl == 0) {
        eax = r15d;
    }
    if (dl != 0) {
        eax = r12d;
    }
    if (eax > 0x5082975a) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0xd90cab03) {
        rax = *((rsp + 8));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4118d0 */
#include <stdint.h>
 
uint64_t dbg_quotearg_colon (char const * arg, int64_t arg1) {
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    rbx = arg;
    rdi = arg1;
    /* char * quotearg_colon(char const * arg); */
    rbx = rdi;
    eax = x_61;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    *(rsp + 0xe) = ((eax & ecx) == 0) ? 1 : 0;
    eax = y_62;
    *(rsp + 0xf) = (eax < 0xa) ? 1 : 0;
    eax = 0x5082975b;
    r14d = 0xd90cab03;
    r15d = 0x792f1350;
    if (eax > 0x5082975a) {
        goto label_1;
    }
    goto label_2;
label_0:
    quotearg_char_mem (rbx, 0xffffffffffffffff, 0x3a);
    eax = 0xb6d198ed;
    if (eax > 0x5082975a) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0xb6d198ed) {
            goto label_3;
        }
        rax = quotearg_char_mem (rbx, 0xffffffffffffffff, 0x3a);
        *((rsp + 0x10)) = rax;
        eax = x_61;
        ecx = rax - 1;
        ecx *= eax;
        eax = ecx;
        eax ^= 0xfffffffe;
        eax &= ecx;
        cl = (eax == 0) ? 1 : 0;
        eax = 0x792f1350;
        if (eax == 0) {
            eax = r14d;
        }
        dl = (*(obj_y_62) < 0xa) ? 1 : 0;
        if (*(obj_y_62) >= 0xa) {
            eax = r15d;
        }
        dl ^= cl;
        if (*(obj_y_62) != 0xa) {
            eax = r14d;
        }
    } while (eax <= 0x5082975a);
label_1:
    if (eax == 0x5082975b) {
        goto label_4;
    }
    if (eax == 0x792f1350) {
        goto label_0;
    }
    goto label_5;
label_4:
    ecx = *((rsp + 0xe));
    eax = *((rsp + 0xf));
    edx = ecx;
    dl ^= al;
    eax = 0x792f1350;
    if (al != 0) {
        eax = ebp;
    }
    if (cl == 0) {
        eax = r15d;
    }
    if (dl != 0) {
        eax = ebp;
    }
    if (eax > 0x5082975a) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0xd90cab03) {
        rax = *((rsp + 0x10));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x411a30 */
#include <stdint.h>
 
void dbg_quotearg_colon_mem (char const * arg, size_t argsize) {
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_2ch;
    int64_t var_2bh;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    rdi = arg;
    rsi = argsize;
    /* char * quotearg_colon_mem(char const * arg,size_t argsize); */
    edx = 0x3a;
invalid_funccall(); //    return void (*0x411280)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x411a40 */
#include <stdint.h>
 
int32_t dbg_quotearg_n_style_colon (char const * arg, int64_t arg3, int32_t n, quoting_options * o, int32_t r) {
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    quoting_options options;
    int64_t var_1ch;
    r14 = arg;
    rdx = arg3;
    r15 = n;
    rdi = o;
    rsi = r;
    /* char * quotearg_n_style_colon(int n,quoting_style s,char const * arg); */
    r14 = rdx;
    r15d = edi;
    rdi = rsp + 0x10;
    quoting_options_from_style ();
    eax = x_23;
    ecx = y_24;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    eax = 0xf47800fc;
    esi = 0x1d52adf;
    if (ecx != 0xa) {
        esi = eax;
    }
    *(rsp + 0xa) = (edx == 0xffffffff) ? 1 : 0;
    if (edx != 0xffffffff) {
        eax = esi;
    }
    *(rsp + 0xb) = (ecx < 0xa) ? 1 : 0;
    edi = 0x1d52adf;
    if (ecx >= 0xa) {
        eax = esi;
    }
    esi = 0x67317ce9;
    if (esi > 0x1d52ade) {
        goto label_1;
    }
    goto label_2;
label_0:
    ecx = *((rsp + 0x1c));
    edx = *((rsp + 0x1c));
    edx = ~edx;
    edx &= 0x45117802;
    esi = ecx;
    esi &= 0xbaee87fd;
    esi |= edx;
    esi ^= 0x41117802;
    ecx &= 0x4000000;
    ecx |= esi;
    *((rsp + 0x1c)) = ecx;
    esi = 0xcaade9d0;
    if (esi > 0x1d52ade) {
        goto label_1;
    }
    do {
label_2:
        if (esi != 0xcaade9d0) {
            goto label_3;
        }
        ecx = *((rsp + 0x1c));
        edx = *((rsp + 0x1c));
        edx >>= 0x1a;
        esi = edx;
        esi ^= 0x3e;
        esi &= edx;
        *((rsp + 0xc)) = esi;
        edx = *((rsp + 0xc));
        edx <<= 0x1a;
        esi = ecx;
        esi = ~esi;
        esi &= 0xccd634a7;
        ecx &= 0x3329cb58;
        ecx |= esi;
        esi = ecx;
        esi ^= 0xc8d634a7;
        ecx ^= 0x3729cb58;
        ecx &= edx;
        edx = ~edx;
        edx &= esi;
        edx |= ecx;
        *((rsp + 0x1c)) = edx;
        esi = eax;
    } while (esi <= 0x1d52ade);
label_1:
    if (esi == 0x1d52adf) {
        goto label_0;
    }
    if (esi != 0x67317ce9) {
        goto label_4;
    }
    edx = *((rsp + 0xa));
    ecx = *((rsp + 0xb));
    ebx = edx;
    bl ^= cl;
    esi = 0x1d52adf;
    if (cl != 0) {
        esi = ebp;
    }
    if (dl == 0) {
        esi = edi;
    }
    if (bl != 0) {
        esi = ebp;
    }
    if (esi > 0x1d52ade) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (esi == 0xf47800fc) {
        eax = *((rsp + 0xc));
        rcx = rsp + 0x10;
        rdx = 0xffffffffffffffff;
        rsi = r14;
        quotearg_n_options (r15d);
        return eax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x411bf0 */
#include <stdint.h>
 
void quotearg_n_custom (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_3ch;
    int64_t var_38h;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x411c00)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x411c00 */
#include <stdint.h>
 
int64_t dbg_quotearg_n_custom_mem (int64_t arg2, int64_t arg3, size_t argsize, char const * left_quote, int32_t n, quoting_options * o, char const * right_quote) {
    int64_t var_50h;
    char const * arg;
    int64_t var_3ch;
    int64_t var_38h;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    rsi = arg2;
    rdx = arg3;
    r8 = argsize;
    r15 = left_quote;
    rdi = n;
    rcx = o;
    r11 = right_quote;
    /* char * quotearg_n_custom_mem(int n,char const * left_quote,char const * right_quote,char const * arg,size_t argsize); */
    eax = x_71;
    ebx = rax - 1;
    ebx *= eax;
    eax = ebx;
    eax ^= 0xfffffffe;
    *(rbp - 0x29) = ((eax & ebx) == 0) ? 1 : 0;
    eax = y_72;
    *(rbp - 0x2a) = (eax < 0xa) ? 1 : 0;
    *((rbp - 0x48)) = rcx;
    r11 = rdx;
    r15 = rsi;
    al = (r11 != 0) ? 1 : 0;
    cl = (r15 != 0) ? 1 : 0;
    r14d = 0xcfdf3cb5;
    edx = 0xe794be26;
    if (r15 == 0) {
        r14d = edx;
    }
    cl ^= al;
    if (r15 != 0) {
        r14d = edx;
    }
    eax = 0x82da7846;
    r9d = 0x8b6f7467;
    r12d = 0x583a6c17;
    r13d = 0xe1660462;
    *((rbp - 0x3c)) = r14d;
    if (eax <= 0xb0e4a160) {
        goto label_2;
    }
    goto label_5;
    do {
        cl = *((rbp - 0x29));
        al = *((rbp - 0x2a));
        edx = ecx;
        dl ^= al;
        edx = 0x4c6dbf47;
        if (eax != 0xb0e4a160) {
            edx = r9d;
        }
        eax = edx;
        if (al != 0) {
            eax = r9d;
        }
        if (cl == 0) {
            eax = edx;
        }
        if (eax > 0xb0e4a160) {
            goto label_5;
        }
INVALID_JUMP;
    } while (eax == 0x82da7846);
    if (eax != 0x8b6f7467) {
        goto label_6;
    }
    rax = rsp;
    rcx = rax - 0x40;
    rdx = comment;
    *((rax - 0x10)) = rdx;
    __asm ("movups xmm0, xmmword [0x0041c270]");
    __asm ("movups xmmword [rax - 0x20], xmm0");
    __asm ("movups xmm0, xmmword [0x0041c260]");
    __asm ("movups xmmword [rax - 0x30], xmm0");
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    __asm ("movups xmmword [rax - 0x40], xmm0");
    eax = 0x67e980e3;
    goto label_7;
label_1:
    ebx = default_quoting_options;
    do {
label_7:
        esi = eax;
        rdx = rbx;
        eax = 0x781e475b;
        rbx = rcx;
    } while (esi == 0x67e980e3);
    while (ebx == 0x781e475b) {
        *((rbp - 0x38)) = rdx;
        rsi = *((rbp - 0x38));
        *(rsi) = 0xa;
        esi = r14d;
label_0:
        ebx = esi;
        if (ebx <= 0xe1660461) {
            goto label_8;
        }
        if (ebx <= 0x583a6c16) {
            goto label_9;
        }
        if (ebx == 0x583a6c17) {
            goto label_10;
        }
    }
    goto label_11;
label_8:
    if (ebx != 0xa9d90147) {
        goto label_12;
    }
    esi = x_27;
    ebx = rsi - 1;
    ebx *= esi;
    esi = ebx;
    esi ^= 0xfffffffe;
    esi &= ebx;
    r9b = (esi == 0) ? 1 : 0;
    esi = 0xe1660462;
    if (esi == 0) {
        esi = r12d;
    }
    bl = (*(obj_y_28) < 0xa) ? 1 : 0;
    if (*(obj_y_28) >= 0xa) {
        esi = r13d;
    }
    bl ^= r9b;
    if (*(obj_y_28) != 0xa) {
        esi = r12d;
    }
    goto label_0;
label_9:
    esi = 0x583a6c17;
    if (ebx == 0xe1660462) {
        goto label_0;
    }
    goto label_13;
label_10:
    esi = x_27;
    ebx = rsi - 1;
    ebx *= esi;
    esi = ebx;
    esi ^= 0xfffffffe;
    esi &= ebx;
    r9b = (esi == 0) ? 1 : 0;
    esi = 0xe1660462;
    r10d = 0xd87b1762;
    if (esi == 0) {
        esi = r10d;
    }
    bl = (*(obj_y_28) < 0xa) ? 1 : 0;
    if (*(obj_y_28) >= 0xa) {
        esi = r13d;
    }
    bl ^= r9b;
    if (*(obj_y_28) != 0xa) {
        esi = r10d;
    }
    goto label_0;
label_12:
    if (ebx == 0xcfdf3cb5) {
        goto label_14;
    }
    if (ebx == 0xd87b1762) {
        goto label_1;
    }
    goto label_11;
label_14:
    rax = *((rbp - 0x38));
    *((rax + 0x28)) = r15;
    rax = *((rbp - 0x38));
    *((rax + 0x30)) = r11;
    rsi = *((rbp - 0x48));
    rdx = r8;
    rbx = r8;
    r12d = edi;
    r14 = r15;
    r15 = r11;
    rax = quotearg_n_options (rdi);
    r11 = r15;
    r15 = r14;
    r14d = *((rbp - 0x3c));
    edi = r12d;
    r12d = 0x583a6c17;
    r9d = 0x8b6f7467;
    r13d = 0xe1660462;
    r8 = rbx;
    *((rbp - 0x50)) = rax;
    eax = x_71;
    ecx = y_72;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x4c6dbf47;
    ebx = 0xb0e4a161;
    if (ecx != 0xa) {
        esi = ebx;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = ebx;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0xb0e4a160) {
        goto label_2;
    }
label_5:
    if (eax != 0x4c6dbf47) {
        goto label_15;
    }
    rax = rsp;
    rcx = rax - 0x40;
    rdx = comment;
    *((rax - 0x10)) = rdx;
    __asm ("movups xmm0, xmmword [0x0041c270]");
    __asm ("movups xmmword [rax - 0x20], xmm0");
    __asm ("movups xmm0, xmmword [0x0041c260]");
    __asm ("movups xmmword [rax - 0x30], xmm0");
    __asm ("movups xmm0, xmmword [obj.default_quoting_options]");
    __asm ("movups xmmword [rax - 0x40], xmm0");
    eax = 0x67e980e3;
    goto label_16;
label_4:
    edx = default_quoting_options;
    do {
label_16:
        esi = eax;
        r9 = rdx;
        eax = 0x781e475b;
        rdx = rcx;
    } while (esi == 0x67e980e3);
    while (edx == 0x781e475b) {
        *((rbp - 0x38)) = r9;
        rdx = *((rbp - 0x38));
        *(rdx) = 0xa;
        esi = r14d;
label_3:
        edx = esi;
        if (edx <= 0xe1660461) {
            goto label_17;
        }
        if (edx <= 0x583a6c16) {
            goto label_18;
        }
        if (edx == 0x583a6c17) {
            goto label_19;
        }
    }
    goto label_20;
label_17:
    if (edx != 0xa9d90147) {
        goto label_21;
    }
    esi = x_27;
    edx = x_27;
    edx = -edx;
    edx = ~edx;
    edx *= esi;
    edx = ~edx;
    edx |= 0xfffffffe;
    bl = (edx == 0xffffffff) ? 1 : 0;
    esi = 0xe1660462;
    if (edx == 0xffffffff) {
        esi = r12d;
    }
    dl = (*(obj_y_28) < 0xa) ? 1 : 0;
    if (*(obj_y_28) >= 0xa) {
        esi = r13d;
    }
    dl ^= bl;
    if (*(obj_y_28) != 0xa) {
        esi = r12d;
    }
    goto label_3;
label_18:
    esi = 0x583a6c17;
    if (edx == 0xe1660462) {
        goto label_3;
    }
    goto label_22;
label_19:
    edx = x_27;
    esi = rdx - 1;
    esi *= edx;
    edx = esi;
    edx ^= 0xfffffffe;
    edx &= esi;
    bl = (edx == 0) ? 1 : 0;
    esi = 0xe1660462;
    r10d = 0xd87b1762;
    if (edx == 0) {
        esi = r10d;
    }
    dl = (*(obj_y_28) < 0xa) ? 1 : 0;
    if (*(obj_y_28) >= 0xa) {
        esi = r13d;
    }
    dl ^= bl;
    if (*(obj_y_28) != 0xa) {
        esi = r10d;
    }
    goto label_3;
label_21:
    if (edx == 0xcfdf3cb5) {
        goto label_23;
    }
    if (edx == 0xd87b1762) {
        goto label_4;
    }
    goto label_20;
label_23:
    rax = *((rbp - 0x38));
    *((rax + 0x28)) = r15;
    rax = *((rbp - 0x38));
    *((rax + 0x30)) = r11;
    rsi = *((rbp - 0x48));
    rdx = r8;
    r13 = r8;
    r12d = edi;
    r14 = r15;
    r15 = r11;
    quotearg_n_options (rdi);
    r11 = r15;
    r15 = r14;
    r14d = *((rbp - 0x3c));
    edi = r12d;
    r12d = 0x583a6c17;
    r9d = 0x8b6f7467;
    r8 = r13;
    r13d = 0xe1660462;
    eax = 0x8b6f7467;
    if (eax <= 0xb0e4a160) {
        goto label_2;
    }
    goto label_5;
label_13:
    if (ebx != 0xe794be26) {
label_11:
label_22:
        if (edx == 0xe794be26) {
            goto label_24;
        }
label_20:
label_15:
        if (eax == 0xb0e4a161) {
            rax = *((rbp - 0x50));
            rsp = rbp - 0x28;
            return rax;
        }
INVALID_JUMP;
    }
    abort ();
label_24:
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4120f0 */
#include <stdint.h>
 
int64_t dbg_quotearg_custom (char const * arg, int64_t arg1, int64_t arg2, char const * left_quote, char const * right_quote) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_3ch;
    int64_t var_38h;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    rax = arg;
    rdi = arg1;
    rsi = arg2;
    rdx = left_quote;
    rcx = right_quote;
    /* char * quotearg_custom(char const * left_quote,char const * right_quote,char const * arg); */
    rax = rdx;
    rcx = rsi;
    rdx = rdi;
    edi = 0;
    r8 = 0xffffffffffffffff;
    rsi = rdx;
    rdx = rcx;
    rcx = rax;
invalid_funccall(); //    return void (*0x411c00)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x412110 */
#include <stdint.h>
 
int64_t dbg_quotearg_custom_mem (char const * arg, int64_t arg2, size_t argsize, char const * left_quote, char const * right_quote) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_3ch;
    int64_t var_38h;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    rcx = arg;
    rsi = arg2;
    rax = argsize;
    rdi = left_quote;
    rdx = right_quote;
    /* char * quotearg_custom_mem(char const * left_quote,char const * right_quote,char const * arg,size_t argsize); */
    rax = rcx;
    rcx = rdx;
    rdx = rsi;
    rsi = rdi;
    edi = 0;
    r8 = rax;
invalid_funccall(); //    return void (*0x411c00)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x412130 */
#include <stdint.h>
 
void quote_n_mem (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_1h;
    int64_t var_2h;
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_6ch;
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
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x40feb0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x412140 */
#include <stdint.h>
 
int64_t dbg_quote_mem (char const * arg, int64_t arg1, int64_t arg2, size_t argsize) {
    int64_t var_1h;
    int64_t var_2h;
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_6ch;
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
    rdx = arg;
    rdi = arg1;
    rsi = arg2;
    rax = argsize;
    /* char const * quote_mem(char const * arg,size_t argsize); */
    rax = rsi;
    rdx = rdi;
    edi = 0;
    ecx = quote_quoting_options;
    rsi = rdx;
    rdx = rax;
invalid_funccall(); //    return void (*0x40feb0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x412160 */
#include <stdint.h>
 
void quote_n (int64_t arg1, int64_t arg2) {
    int64_t var_1h;
    int64_t var_2h;
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_64h;
    int64_t var_68h;
    int64_t var_6ch;
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
    rdi = arg1;
    rsi = arg2;
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
invalid_funccall(); //    return void (*0x40feb0)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x412180 */
#include <stdint.h>
 
uint64_t dbg_quote (int64_t arg1) {
    char const * arg;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    rdi = arg1;
    /* char const * quote(char const * arg); */
    eax = x_83;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    *(rsp + 6) = (ecx == 0xffffffff) ? 1 : 0;
    eax = y_84;
    *(rsp + 7) = (eax < 0xa) ? 1 : 0;
    eax = 0xadedabd;
    r15d = 0xa592e039;
    r14d = 0x72c81c9c;
    r12d = 0x989c5b90;
    if (eax > 0xadedabc) {
        goto label_1;
    }
    goto label_2;
label_0:
    rdx = 0xffffffffffffffff;
    ecx = quote_quoting_options;
    rsi = rbp;
    quotearg_n_options (0);
    eax = 0x989c5b90;
    if (eax > 0xadedabc) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0x989c5b90) {
            goto label_3;
        }
        rdx = 0xffffffffffffffff;
        ecx = quote_quoting_options;
        rsi = rbp;
        rax = quotearg_n_options (0);
        *((rsp + 8)) = rax;
        eax = x_83;
        ecx = y_84;
        edx = eax;
        edx = -edx;
        edx = ~edx;
        edx *= eax;
        eax = edx;
        eax ^= 0xfffffffe;
        eax &= edx;
        dl = (eax == 0) ? 1 : 0;
        bl = (ecx < 0xa) ? 1 : 0;
        bl ^= dl;
        edx = 0x72c81c9c;
        if (ecx != 0xa) {
            edx = r15d;
        }
        eax = edx;
        if (eax == 0) {
            eax = r15d;
        }
        if (ecx >= 0xa) {
            eax = edx;
        }
    } while (eax <= 0xadedabc);
label_1:
    if (eax == 0xadedabd) {
        goto label_4;
    }
    if (eax == 0x72c81c9c) {
        goto label_0;
    }
    goto label_5;
label_4:
    ecx = *((rsp + 6));
    eax = *((rsp + 7));
    edx = ecx;
    dl ^= al;
    eax = 0x72c81c9c;
    if (al != 0) {
        eax = r12d;
    }
    if (cl == 0) {
        eax = r14d;
    }
    if (dl != 0) {
        eax = r12d;
    }
    if (eax > 0xadedabc) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0xa592e039) {
        rax = *((rsp + 8));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4122f0 */
#include <stdint.h>
 
uint64_t dbg_gettext_quote (int64_t arg1, uint32_t arg2, char const * locale_code, char const * msgid) {
    enum quoting_style s;
    int64_t var_8h;
    func main;
    int64_t var_18h;
    int64_t var_20h;
    rdi = arg1;
    rsi = arg2;
    rax = locale_code;
    r13 = msgid;
    /* char const * gettext_quote(char const * msgid,quoting_style s); */
    r13 = rdi;
    edx = 5;
    rax = dcgettext (0, r13);
    *((rsp + 8)) = rax;
    eax = 0x419462;
    if (ebp == 9) {
    }
    eax = 0xbe6c9f36;
    r12d = 0xe607aa5;
    r15d = 0x30860f98;
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
    if (eax == 0xe607aa4) {
label_2:
        r14 = rax;
    }
    eax = 0x7a3afcb8;
    do {
label_0:
        if (eax > 0xe607aa4) {
            goto label_3;
        }
label_1:
        if (eax <= 0xccba1637) {
            goto label_4;
        }
        if (eax > 0xe0fbac7f) {
            goto label_5;
        }
        if (eax == 0xccba1638) {
            goto label_6;
        }
    } while (eax != 0xd7a6aebc);
    eax = strcaseeq0 (*((rsp + 0x10)), "GB18030", 0x47, 0x42, 0x31, 0x38);
    eax = 0x7353a422;
    ecx = 0xfa24d54d;
    goto label_7;
label_4:
    if (eax == 0x86ac76b4) {
        goto label_8;
    }
    if (eax == 0xbe6c9f36) {
        goto label_9;
    }
    if (eax != 0xc051645f) {
        goto label_0;
    }
    eax = 0x7a3afcb8;
    r14 = *((rsp + 0x18));
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
label_5:
    if (eax == 0xe0fbac80) {
        goto label_10;
    }
    if (eax != 0xfa24d54d) {
        goto label_0;
    }
    r14d = 0x419482;
    eax = 0x41947e;
    goto label_2;
label_6:
    rax = locale_charset ();
    *((rsp + 0x10)) = rax;
    eax = strcaseeq0 (*((rsp + 0x10)), 0x419468, 0x55, 0x54, 0x46, 0x2d);
    eax = 0xd7a6aebc;
    ecx = 0x2c217786;
    goto label_7;
label_8:
    eax = 0x7a3afcb8;
    r14 = *((rsp + 8));
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
label_9:
    rax = *((rsp + 8));
    eax = 0xccba1638;
    ecx = 0x86ac76b4;
    if (rax != r13) {
label_7:
        eax = ecx;
    }
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
label_10:
    eax = 0x30860f98;
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
label_3:
    if (eax <= 0x30860f97) {
        goto label_11;
    }
    if (eax <= 0x7353a421) {
        goto label_12;
    }
    if (eax == 0x7353a422) {
        goto label_13;
    }
    if (eax != 0x7a3afcb8) {
        goto label_0;
    }
    *((rsp + 0x20)) = r14;
    eax = x_85;
    ecx = x_85;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0xe0fbac80;
    if (eax == 0) {
        eax = r15d;
    }
    dl = (*(obj_y_86) < 0xa) ? 1 : 0;
    esi = 0xe0fbac80;
    if (*(obj_y_86) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_86) != 0xa) {
        eax = r15d;
    }
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
label_11:
    if (eax == 0xe607aa5) {
        goto label_14;
    }
    if (eax == 0x18d75b3e) {
        goto label_15;
    }
    if (eax != 0x2c217786) {
        goto label_0;
    }
    r14d = 0x419472;
    eax = 0x41946e;
    goto label_2;
label_12:
    if (eax == 0x30860f98) {
        goto label_16;
    }
    if (eax != 0x3cb18c9e) {
        goto label_0;
    }
    goto label_17;
label_13:
    eax = x_85;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x18d75b3e;
    if (eax == 0) {
        eax = r12d;
    }
    dl = (*(obj_y_86) < 0xa) ? 1 : 0;
    esi = 0x18d75b3e;
    if (*(obj_y_86) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_86) != 0xa) {
        eax = r12d;
    }
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
label_14:
    *((rsp + 0x18)) = rbp;
    eax = x_85;
    ecx = y_86;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x18d75b3e;
    edi = 0xc051645f;
    goto label_18;
label_15:
    eax = 0xe607aa5;
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
label_16:
    eax = x_85;
    ecx = y_86;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xe0fbac80;
    edi = 0x3cb18c9e;
    if (ecx != 0xa) {
label_18:
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0xe607aa4) {
        goto label_1;
    }
    goto label_3;
label_17:
    rax = *((rsp + 0x20));
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4126a0 */
#include <stdint.h>
 
int32_t dbg_strcaseeq0 (int64_t arg_60h, int64_t arg_68h, int64_t arg_70h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_11h;
    int64_t var_12h;
    int64_t var_13h;
    uint32_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_24h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    /* int strcaseeq0(char const * s1,char const * s2,char s20,char s21,char s22,char s23,char s24,char s25,char s26,char s27,char s28); */
    *((rsp + 0x18)) = r9d;
    r12d = r8d;
    r13d = ecx;
    *((rsp + 0x20)) = edx;
    r14 = rdi;
    eax = x_87;
    ecx = y_88;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    *(rsp + 0x11) = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 0x12) = (ecx < 0xa) ? 1 : 0;
    eax = 0x89398aa1;
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_0:
    eax = 0x24605fc8;
    ecx = 0xe3c1e076;
    if (eax == 0xf4d73983) {
        eax = ecx;
    }
    do {
label_1:
        if (eax > 0xf4d73983) {
            goto label_3;
        }
label_2:
        if (eax <= 0xb19b80d7) {
            goto label_4;
        }
        if (eax > 0xe3c1e075) {
            goto label_5;
        }
        if (eax == 0xb19b80d8) {
            goto label_6;
        }
    } while (eax != 0xd8ade902);
    eax = *((rsp + 0x14));
    ecx = *((rsp + 0x1c));
    goto label_0;
label_4:
    if (eax == 0x847111c7) {
        goto label_7;
    }
    if (eax == 0x89398aa1) {
        goto label_8;
    }
    if (eax != 0xa725bc4b) {
        goto label_1;
    }
    eax = *((rsp + 0x70));
    *((rsp + 8)) = eax;
    eax = *((rsp + 0x68));
    *(rsp) = eax;
    edx = (int32_t) r13b;
    ecx = (int32_t) r12b;
    r8d = *((rsp + 0x18));
    r9d = *((rsp + 0x60));
    strcaseeq1 (r14, rbp, rdx, rcx, r8, r9);
    eax = 0xb19b80d8;
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_5:
    if (eax == 0xe3c1e076) {
        goto label_9;
    }
    if (eax != 0xf10ca257) {
        goto label_1;
    }
    eax = *((rsp + 0x20));
    *((rsp + 0x14)) = eax;
    eax = 0;
    eax -= *((rsp + 0x14));
    ecx = 0xffffffbf;
    ecx -= eax;
    al = (ecx < 0x1a) ? 1 : 0;
    *((rsp + 0x13)) = al;
    eax = *(r14);
    *((rsp + 0x1c)) = eax;
    eax = x_87;
    ecx = y_88;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x18b616c3;
    edi = 0x847111c7;
    if (ecx != 0xa) {
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_6:
    eax = *((rsp + 0x70));
    *((rsp + 8)) = eax;
    eax = *((rsp + 0x68));
    *(rsp) = eax;
    edx = (int32_t) r13b;
    ecx = (int32_t) r12b;
    r8d = *((rsp + 0x18));
    r9d = *((rsp + 0x60));
    eax = strcaseeq1 (r14, rbp, rdx, rcx, r8, r9);
    *((rsp + 0x24)) = eax;
    eax = x_87;
    ecx = y_88;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xa725bc4b;
    esi = 0x1d6f6e31;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_7:
    eax = *((rsp + 0x13));
    eax = 0xd8ade902;
    ecx = 0x6307c42f;
    if (al != 0) {
        eax = ecx;
    }
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_8:
    ecx = *((rsp + 0x11));
    eax = *((rsp + 0x12));
    edx = ecx;
    dl ^= al;
    edx = 0x18b616c3;
    esi = 0xf10ca257;
    if (eax != 0xf4d73983) {
        edx = esi;
    }
    eax = edx;
    if (al != 0) {
        eax = esi;
    }
    if (cl == 0) {
        eax = edx;
    }
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_9:
    eax = 0xf083ba6;
    ecx = 0xf4d73984;
    if (*((rsp + 0x14)) == 0) {
        eax = ecx;
    }
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
label_3:
    if (eax <= 0x1d6f6e30) {
        goto label_10;
    }
    if (eax > 0x2941364d) {
        goto label_11;
    }
    if (eax == 0x1d6f6e31) {
        goto label_12;
    }
    if (eax != 0x24605fc8) {
        goto label_1;
    }
    eax = 0x2941364e;
    r15d = 0;
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_10:
    if (eax == 0xf4d73984) {
        goto label_13;
    }
    if (eax == 0xf083ba6) {
        goto label_14;
    }
    if (eax != 0x18b616c3) {
        goto label_1;
    }
    eax = 0xf10ca257;
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_11:
    if (eax == 0x6307c42f) {
        goto label_15;
    }
    if (eax != 0x2941364e) {
        goto label_1;
    }
    goto label_16;
label_12:
    eax = 0x2941364e;
    r15d = *((rsp + 0x24));
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_13:
    eax = 0x2941364e;
    r15d = 1;
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_14:
    eax = x_87;
    ecx = x_87;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xa725bc4b;
    edi = 0xb19b80d8;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj_y_88) < 0xa) ? 1 : 0;
    esi = 0xa725bc4b;
    if (*(obj_y_88) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_88) != 0xa) {
        eax = edi;
    }
    if (eax <= 0xf4d73983) {
        goto label_2;
    }
    goto label_3;
label_15:
    eax = *((rsp + 0x1c));
    ecx = *((rsp + 0x1c));
    ecx ^= 0x20;
    ecx &= eax;
    goto label_0;
label_16:
    eax = r15d;
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x412a70 */
#include <stdint.h>
 
int32_t dbg_strcaseeq1 (int64_t arg_80h, int64_t arg_88h, int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int32_t c) {
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_9h;
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    uint32_t var_10h;
    uint32_t var_14h;
    uint32_t var_18h;
    uint32_t var_1ch;
    int64_t var_20h;
    uint32_t var_24h;
    uint32_t var_28h;
    uint32_t var_2ch;
    int64_t var_30h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_44h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = c;
    /* int strcaseeq1(char const * s1,char const * s2,char s21,char s22,char s23,char s24,char s25,char s26,char s27,char s28); */
    *((rsp + 0x38)) = r9d;
    *((rsp + 0x34)) = r8d;
    *((rsp + 0x30)) = ecx;
    r12 = rsi;
    r14 = rdi;
    *((rsp + 0x14)) = edx;
    eax = 0;
    eax -= *((rsp + 0x14));
    ecx = 0xffffffbf;
    ecx -= eax;
    al = (ecx < 0x1a) ? 1 : 0;
    *((rsp + 6)) = al;
    al = *((r14 + 1));
    *((rsp + 7)) = al;
    ecx = 0xfc475e8e;
    r15d = 0xd0f30e7e;
    r8d = 0x8b33e984;
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
    do {
label_18:
        ecx = 0xb758e844;
        edx = 0x3658f17e;
        if (ecx == 0x3108797) {
            ecx = edx;
        }
        if (ecx > 0x3108797) {
            goto label_16;
        }
        goto label_17;
label_0:
        ecx = *((rsp + 0x24));
        ecx &= 0xffffffdf;
    } while (1);
    do {
label_1:
        if (ecx <= 0x3108797) {
            goto label_17;
        }
label_16:
        if (ecx <= 0x3658f17d) {
            goto label_19;
        }
        if (ecx == 0x3658f17e) {
            goto label_20;
        }
        if (ecx == 0x45001bcc) {
            goto label_21;
        }
    } while (ecx != 0x51cdbc9b);
    eax = *((rsp + 0x30));
    *((rsp + 0x10)) = eax;
    eax = 0;
    eax -= *((rsp + 0x10));
    ecx = 0xffffffbf;
    ecx -= eax;
    al = (ecx < 0x1a) ? 1 : 0;
    *((rsp + 8)) = al;
    al = *((r14 + 2));
    *((rsp + 9)) = al;
    ecx = 0xf45a315f;
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_19:
    if (ecx == 0x3108798) {
        goto label_22;
    }
    if (ecx == 0x29b3d8d0) {
        goto label_0;
    }
    if (ecx != 0x2af4ec4f) {
        goto label_1;
    }
    goto label_23;
label_4:
    ecx = 0xcd4254f0;
    do {
label_3:
        if (ecx > 0xf45a315e) {
            goto label_15;
        }
label_2:
        if (ecx <= 0x9b9dbfd5) {
            goto label_24;
        }
        if (ecx > 0xa915fa25) {
            goto label_25;
        }
        if (ecx == 0x9b9dbfd6) {
            goto label_26;
        }
    } while (ecx != 0x9c82b31f);
    ecx = 0x803cb6e0;
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_24:
    if (ecx == 0x803cb6e0) {
        goto label_27;
    }
    if (ecx == 0x86efb1b8) {
        goto label_28;
    }
    if (ecx != 0x88595d7e) {
        goto label_3;
    }
    ecx = *((rsp + 0x10));
    edx = *((rsp + 0x20));
    *(rsp + 0xa) = (edx == ecx) ? 1 : 0;
    ecx = x_91;
    edx = y_92;
    esi = rcx - 1;
    esi *= ecx;
    esi = ~esi;
    esi |= 0xfffffffe;
    cl = (esi == 0xffffffff) ? 1 : 0;
    bl = (edx < 0xa) ? 1 : 0;
    bl ^= cl;
    edi = 0x86efb1b8;
    eax = 0x2565439d;
    if (edx != 0xa) {
        edi = eax;
    }
    ecx = edi;
    if (esi == 0xffffffff) {
        ecx = eax;
    }
    if (edx >= 0xa) {
        ecx = edi;
    }
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_25:
    if (ecx == 0xa915fa26) {
        goto label_4;
    }
    if (ecx != 0xcd4254f0) {
        goto label_3;
    }
    eax = x_91;
    ecx = x_91;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    al = (ecx == 0xffffffff) ? 1 : 0;
    ecx = 0xa915fa26;
    edi = 0x4cb68644;
    if (ecx == 0xffffffff) {
        ecx = edi;
    }
    dl = (*(obj_y_92) < 0xa) ? 1 : 0;
    esi = 0xa915fa26;
    if (*(obj_y_92) >= 0xa) {
        ecx = esi;
    }
    dl ^= al;
    if (*(obj_y_92) != 0xa) {
        ecx = edi;
    }
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_26:
    eax = *((rsp + 0x34));
    *((rsp + 0x18)) = eax;
    eax = *((rsp + 0x18));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0xb)) = al;
    al = *((r14 + 3));
    *((rsp + 0xc)) = al;
    ecx = 0x57b40ed9;
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
    do {
label_8:
        ecx = 0xa21b81cf;
        if (ecx == 0xd44b5506) {
            ecx = r8d;
        }
        if (ecx > 0xd44b5506) {
            goto label_7;
        }
        goto label_9;
label_5:
        ecx = *((rsp + 0x28));
        edx = *((rsp + 0x28));
        edx ^= 0x20;
        edx &= ecx;
    } while (1);
label_6:
    if (ecx <= 0xd44b5506) {
        goto label_9;
    }
label_7:
    if (ecx <= 0x76ccf3f) {
        goto label_29;
    }
    if (ecx == 0x76ccf40) {
        goto label_5;
    }
    if (ecx == 0x3a588f7a) {
        goto label_30;
    }
    if (ecx != 0x57b40ed9) {
        goto label_6;
    }
    ecx = *((rsp + 0xc));
    *((rsp + 0x28)) = ecx;
    ecx = *((rsp + 0xb));
    ecx = 0x3a588f7a;
    eax = 0x76ccf40;
    if (cl != 0) {
        ecx = eax;
    }
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
label_29:
    if (ecx == 0xd44b5507) {
        goto label_31;
    }
    if (ecx == 0xfa29911d) {
        goto label_32;
    }
    if (ecx != 0xff600bbf) {
        goto label_6;
    }
    goto label_33;
label_30:
    ecx = *((rsp + 0x18));
    edx = *((rsp + 0x28));
    goto label_8;
label_31:
    ecx = 0xff600bbf;
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
label_32:
    ecx = 0xff600bbf;
    ebp = 0;
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
label_9:
    if (ecx <= 0x8e27f83f) {
        goto label_34;
    }
    if (ecx == 0x8e27f840) {
        goto label_35;
    }
    if (ecx == 0x9c41ac5d) {
        goto label_36;
    }
    if (ecx != 0xa21b81cf) {
        goto label_6;
    }
    ecx = x_93;
    edx = y_94;
    esi = ecx;
    esi = -esi;
    esi = ~esi;
    esi *= ecx;
    ecx = esi;
    ecx ^= 0xfffffffe;
    ecx &= esi;
    bl = (ecx == 0) ? 1 : 0;
    al = (edx < 0xa) ? 1 : 0;
    al ^= bl;
    eax = 0x8c998e82;
    esi = 0x9c41ac5d;
    if (edx != 0xa) {
        eax = esi;
    }
    ecx = eax;
    if (ecx == 0) {
        ecx = esi;
    }
    if (edx >= 0xa) {
        ecx = eax;
    }
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
label_34:
    if (ecx == 0x8b33e984) {
        goto label_37;
    }
    if (ecx != 0x8c998e82) {
        goto label_6;
    }
    ecx = 0x9c41ac5d;
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
label_35:
    eax = x_95;
    ecx = y_96;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    *(rsp + 0xd) = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 0xe) = (ecx < 0xa) ? 1 : 0;
    eax = 0x83d50589;
    bpl = *((rsp + 0x88));
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
    do {
        if (eax >= 0xde8c8096) {
label_13:
            eax = esi;
        }
        dl ^= cl;
        if (eax != 0xde8c8096) {
            eax = edi;
        }
        if (eax > 0xde8c8096) {
            goto label_11;
        }
        goto label_14;
label_12:
        *((rsp + 0x44)) = r13d;
        eax = x_95;
        ecx = rax - 1;
        ecx *= eax;
        eax = ecx;
        eax ^= 0xfffffffe;
        eax &= ecx;
        cl = (eax == 0) ? 1 : 0;
        eax = 0x81383e4a;
        edi = 0xd1e4cca1;
        if (eax == 0) {
            eax = edi;
        }
        dl = (*(obj_y_96) < 0xa) ? 1 : 0;
        esi = 0x81383e4a;
    } while (1);
    do {
label_10:
        if (eax <= 0xde8c8096) {
            goto label_14;
        }
label_11:
        if (eax <= 0x2043e76c) {
            goto label_38;
        }
        if (eax > 0x7c5809ee) {
            goto label_39;
        }
        if (eax == 0x21a396c2) {
            goto label_40;
        }
        if (eax == 0x71233dc3) {
            goto label_41;
        }
    } while (eax != 0x2043e76d);
    goto label_42;
label_38:
    if (eax > 0x3a3b2ed) {
        goto label_43;
    }
    if (eax == 0xde8c8097) {
        goto label_44;
    }
    if (eax != 0xed16f8fd) {
        goto label_10;
    }
    eax = 0x3a3b2ee;
    r13d = 0;
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_39:
    if (eax == 0x7c5809ef) {
        goto label_45;
    }
    if (eax != 0x7eb778ef) {
        goto label_10;
    }
    edx = *((rsp + 0x80));
    ecx = (int32_t) bpl;
    strcaseeq5 (r14, r12, rdx, rcx, r8, r9);
    eax = 0xd0f30e7e;
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_43:
    if (eax == 0x3a3b2ee) {
        goto label_12;
    }
    if (eax != 0x12df74f5) {
        goto label_10;
    }
    eax = *((rsp + 0x38));
    *((rsp + 0x1c)) = eax;
    eax = *((rsp + 0x1c));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0xf)) = al;
    eax = *((r14 + 4));
    *((rsp + 0x2c)) = eax;
    eax = x_95;
    ecx = x_95;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x9002466a;
    edi = 0xcb80e32b;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj_y_96) < 0xa) ? 1 : 0;
    esi = 0x9002466a;
    goto label_13;
label_40:
    eax = 0x71233dc3;
    ecx = 0xce1492e9;
    goto label_46;
label_41:
    eax = x_95;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x7eb778ef;
    if (ecx == 0xffffffff) {
        eax = r15d;
    }
    dl = (*(obj_y_96) < 0xa) ? 1 : 0;
    esi = 0x7eb778ef;
    if (*(obj_y_96) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_96) != 0xa) {
        eax = r15d;
    }
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_44:
    eax = *((rsp + 0x2c));
    ecx = *((rsp + 0x2c));
    ecx ^= 0x20;
    ecx &= eax;
    goto label_47;
label_45:
    eax = *((rsp + 0x1c));
    ecx = *((rsp + 0x2c));
label_47:
    eax = 0xed16f8fd;
    ecx = 0x21a396c2;
    if (ecx == eax) {
label_46:
        eax = ecx;
    }
    if (eax > 0xde8c8096) {
        goto label_11;
    }
label_14:
    if (eax > 0xcb80e32a) {
        goto label_48;
    }
    if (eax > 0x90024669) {
        goto label_49;
    }
    if (eax == 0x81383e4a) {
        goto label_50;
    }
    if (eax != 0x83d50589) {
        goto label_10;
    }
    ecx = *((rsp + 0xd));
    eax = *((rsp + 0xe));
    edx = ecx;
    dl ^= al;
    eax = 0x9002466a;
    esi = 0x12df74f5;
    if (al != 0) {
        eax = esi;
    }
    ecx = 0x9002466a;
    if (cl == 0) {
        eax = ecx;
    }
    goto label_51;
label_48:
    if (eax > 0xd0f30e7d) {
        goto label_52;
    }
    if (eax == 0xcb80e32b) {
        goto label_53;
    }
    if (eax != 0xce1492e9) {
        goto label_10;
    }
    eax = 0x3a3b2ee;
    r13d = 1;
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_49:
    if (eax == 0x9002466a) {
        goto label_54;
    }
    if (eax != 0xa862ac00) {
        goto label_10;
    }
    eax = 0x3a3b2ee;
    r13d = *((rsp + 0x40));
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_52:
    if (eax == 0xd0f30e7e) {
        goto label_55;
    }
    if (eax != 0xd1e4cca1) {
        goto label_10;
    }
    eax = x_95;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x81383e4a;
    esi = 0x2043e76d;
    if (eax == 0) {
        eax = esi;
    }
    dl = (*(obj_y_96) < 0xa) ? 1 : 0;
    edi = 0x81383e4a;
    if (*(obj_y_96) >= 0xa) {
        eax = edi;
    }
    dl ^= cl;
    if (*(obj_y_96) != 0xa) {
label_51:
        eax = esi;
    }
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_50:
    eax = 0xd1e4cca1;
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_53:
    eax = *((rsp + 0xf));
    eax = 0x7c5809ef;
    ecx = 0xde8c8097;
    if (al != 0) {
        eax = ecx;
    }
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_54:
    eax = 0x12df74f5;
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_55:
    edx = *((rsp + 0x80));
    ecx = (int32_t) bpl;
    eax = strcaseeq5 (r14, r12, rdx, rcx, r8, r9);
    *((rsp + 0x40)) = eax;
    eax = x_95;
    ecx = y_96;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x7eb778ef;
    edi = 0xa862ac00;
    if (ecx != 0xa) {
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax > 0xde8c8096) {
        goto label_11;
    }
    goto label_14;
label_36:
    eax = x_93;
    edx = y_94;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    bl = (edx < 0xa) ? 1 : 0;
    bl ^= cl;
    esi = 0x8c998e82;
    edi = 0xfa29911d;
    if (edx != 0xa) {
        esi = edi;
    }
    ecx = esi;
    if (eax == 0) {
        ecx = edi;
    }
    if (edx >= 0xa) {
        ecx = esi;
    }
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
label_37:
    ecx = 0x8e27f840;
    eax = 0xd44b5507;
    if (*((rsp + 0x18)) == 0) {
        ecx = eax;
    }
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
label_42:
    ebp = *((rsp + 0x44));
    ecx = 0xff600bbf;
    r8d = 0x8b33e984;
    if (ecx > 0xd44b5506) {
        goto label_7;
    }
    goto label_9;
label_27:
    *((rsp + 0x3c)) = ebp;
    eax = x_91;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    dl = (eax == 0) ? 1 : 0;
    ecx = 0xa915fa26;
    esi = 0xcd4254f0;
    if (eax == 0) {
        ecx = esi;
    }
    al = (*(obj_y_92) < 0xa) ? 1 : 0;
    edi = 0xa915fa26;
    if (*(obj_y_92) >= 0xa) {
        ecx = edi;
    }
    al ^= dl;
    goto label_56;
label_28:
    eax = *((rsp + 0x10));
    eax = *((rsp + 0x20));
    ecx = 0x88595d7e;
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_33:
    ecx = 0x803cb6e0;
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
label_15:
    if (ecx <= 0x38a3ad73) {
        goto label_57;
    }
    if (ecx > 0x4af20082) {
        goto label_58;
    }
    if (ecx == 0x38a3ad74) {
        goto label_59;
    }
    if (ecx != 0x4666ae97) {
        goto label_3;
    }
    ecx = 0x803cb6e0;
    ebp = 0;
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_57:
    if (ecx == 0xf45a315f) {
        goto label_60;
    }
    if (ecx == 0x2565439d) {
        goto label_61;
    }
    if (ecx != 0x306f1e2d) {
        goto label_3;
    }
    ecx = x_91;
    edx = x_91;
    edx = -edx;
    edx = ~edx;
    edx *= ecx;
    edx = ~edx;
    edx |= 0xfffffffe;
    dl = (edx == 0xffffffff) ? 1 : 0;
    ecx = 0x86efb1b8;
    esi = 0x88595d7e;
    if (edx == 0xffffffff) {
        ecx = esi;
    }
    bl = (*(obj_y_92) < 0xa) ? 1 : 0;
    eax = 0x86efb1b8;
    if (*(obj_y_92) >= 0xa) {
        ecx = eax;
    }
    bl ^= dl;
    if (*(obj_y_92) != 0xa) {
label_56:
        ecx = esi;
    }
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_58:
    if (ecx == 0x4af20083) {
        goto label_62;
    }
    if (ecx != 0x4cb68644) {
        goto label_3;
    }
    goto label_63;
label_59:
    ecx = 0x9b9dbfd6;
    eax = 0x9c82b31f;
    goto label_64;
label_60:
    ecx = *((rsp + 9));
    *((rsp + 0x20)) = ecx;
    ecx = *((rsp + 8));
    ecx = 0x306f1e2d;
    eax = 0x4af20083;
    goto label_65;
label_61:
    ecx = *((rsp + 0xa));
    ecx = 0x4666ae97;
    eax = 0x38a3ad74;
    if (cl != 0) {
label_65:
        ecx = eax;
    }
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_62:
    ecx = *((rsp + 0x20));
    ecx &= 0xffffffdf;
    ecx = 0x4666ae97;
    eax = 0x38a3ad74;
    if (ecx == *((rsp + 0x10))) {
label_64:
        ecx = eax;
    }
    if (ecx <= 0xf45a315e) {
        goto label_2;
    }
    goto label_15;
label_20:
    ecx = 0x51cdbc9b;
    edx = 0x45001bcc;
    if (*((rsp + 0x14)) == 0) {
        ecx = edx;
    }
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
label_21:
    ecx = 0x2af4ec4f;
    eax = 1;
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
label_22:
    ecx = 0x8c6070f8;
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
label_63:
    eax = *((rsp + 0x3c));
    ecx = 0x2af4ec4f;
    if (ecx > 0x3108797) {
        goto label_16;
    }
label_17:
    if (ecx <= 0x9aacf65f) {
        goto label_66;
    }
    if (ecx == 0x9aacf660) {
        goto label_67;
    }
    if (ecx == 0xb758e844) {
        goto label_68;
    }
    if (ecx != 0xfc475e8e) {
        goto label_1;
    }
    ecx = *((rsp + 7));
    *((rsp + 0x24)) = ecx;
    ecx = *((rsp + 6));
    ecx = 0x9aacf660;
    edx = 0x29b3d8d0;
    if (cl != 0) {
        ecx = edx;
    }
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
label_66:
    if (ecx == 0x8a90e0b4) {
        goto label_69;
    }
    if (ecx != 0x8c6070f8) {
        goto label_1;
    }
    ecx = x_89;
    edx = y_90;
    esi = rcx - 1;
    esi *= ecx;
    esi = ~esi;
    esi |= 0xfffffffe;
    cl = (esi == 0xffffffff) ? 1 : 0;
    bl = (edx < 0xa) ? 1 : 0;
    bl ^= cl;
    edi = 0x3108798;
    if (edx != 0xa) {
        edi = ebp;
    }
    ecx = edi;
    if (esi == 0xffffffff) {
        ecx = ebp;
    }
    if (edx >= 0xa) {
        ecx = edi;
    }
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
label_67:
    ecx = *((rsp + 0x14));
    edx = *((rsp + 0x24));
    goto label_18;
label_68:
    ecx = x_89;
    edx = rcx - 1;
    edx *= ecx;
    edx = ~edx;
    edx |= 0xfffffffe;
    dl = (edx == 0xffffffff) ? 1 : 0;
    ecx = 0x3108798;
    edi = 0x8c6070f8;
    if (edx == 0xffffffff) {
        ecx = edi;
    }
    bl = (*(obj_y_90) < 0xa) ? 1 : 0;
    esi = 0x3108798;
    if (*(obj_y_90) >= 0xa) {
        ecx = esi;
    }
    bl ^= dl;
    if (*(obj_y_90) != 0xa) {
        ecx = edi;
    }
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
label_69:
    ecx = 0x2af4ec4f;
    eax = 0;
    if (ecx > 0x3108797) {
        goto label_16;
    }
    goto label_17;
label_23:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4136f0 */
#include <stdint.h>
 
int32_t dbg_strcaseeq5 (int64_t arg_5h, int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, int64_t arg_9h, int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int32_t c) {
    char const * s1;
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_9h;
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    uint32_t var_10h;
    uint32_t var_14h;
    uint32_t var_18h;
    uint32_t var_1ch;
    uint32_t var_20h;
    uint32_t var_24h;
    uint32_t var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_34h;
    int64_t var_38h;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_44h;
    int64_t var_48h;
    int64_t var_4ch;
    int64_t var_50h;
    uint32_t var_54h;
    uint32_t var_58h;
    int64_t var_5ch;
    int64_t var_60h;
    int64_t var_64h;
    uint32_t var_68h;
    uint32_t var_6ch;
    int64_t var_70h;
    int64_t var_74h;
    int64_t var_78h;
    int64_t var_7ch;
    int64_t var_80h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = c;
    /* int strcaseeq5(char const * s1,char const * s2,char s25,char s26,char s27,char s28); */
    *((rsp + 0x44)) = ecx;
    *((rsp + 0x10)) = edx;
    eax = *((rsp + 0x10));
    eax += 0xffffffbf;
    r10b = (eax < 0x1a) ? 1 : 0;
    eax = x_97;
    ecx = y_98;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (ecx < 0xa) ? 1 : 0;
    bl = (ecx > 9) ? 1 : 0;
    r8b = (edx == 0xffffffff) ? 1 : 0;
    dl = (edx != 0xffffffff) ? 1 : 0;
    r8b ^= al;
    dl |= bl;
    dl ^= 1;
    eax = x_99;
    edi = y_100;
    ebx = rax - 1;
    ebx *= eax;
    eax = ebx;
    eax ^= 0xfffffffe;
    eax &= ebx;
    cl = (eax != 0) ? 1 : 0;
    bl = (eax == 0) ? 1 : 0;
    r9b = (edi < 0xa) ? 1 : 0;
    al = (edi > 9) ? 1 : 0;
    r9b ^= bl;
    al |= cl;
    al ^= 1;
    ecx = x_101;
    ebx = y_102;
    edi = ecx;
    edi = -edi;
    edi = ~edi;
    edi *= ecx;
    ecx = edi;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    edi &= 1;
    *((rsp + 0x54)) = edi;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    r14d = 0x74e42cb2;
    r11d = 0xfd17274c;
    edi = 0xfd17274c;
    if (ecx == 0xffffffff) {
        edi = r14d;
    }
    *((rsp + 0x58)) = ebx;
    bl = (ebx < 0xa) ? 1 : 0;
    if (ebx >= 0xa) {
        edi = r11d;
    }
    bl ^= cl;
    if (ebx != 0xa) {
        edi = r14d;
    }
    *((rsp + 0x70)) = edi;
    ecx = x_103;
    ebx = y_104;
    edi = ecx;
    edi = -edi;
    edi = ~edi;
    edi *= ecx;
    ecx = edi;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    edi &= 1;
    *((rsp + 0x68)) = edi;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    edi = 0xe63bb239;
    r11d = 0x413e1600;
    r12d = 0x413e1600;
    if (ecx == 0xffffffff) {
        r12d = edi;
    }
    *((rsp + 0x6c)) = ebx;
    bl = (ebx < 0xa) ? 1 : 0;
    if (ebx >= 0xa) {
        r12d = r11d;
    }
    bl ^= cl;
    if (ebx != 0xa) {
        r12d = edi;
    }
    rsi += 9;
    *((rsp + 0x80)) = rsi;
    al |= r9b;
    ecx = 0xb99757b;
    eax = 0xd7fb4baa;
    if (al == 0) {
        ecx = eax;
    }
    *((rsp + 0x50)) = ecx;
    ecx = 0xd3d6b866;
    if (al == 0) {
        ecx = eax;
    }
    *((rsp + 0x74)) = ecx;
    ecx = 0x1257af84;
    eax = 0xf8dd75b6;
    if (al == 0) {
        ecx = eax;
    }
    *((rsp + 0x4c)) = ecx;
    ecx = 0x2029ff06;
    if (al == 0) {
        ecx = eax;
    }
    *((rsp + 0x48)) = ecx;
    dl |= r8b;
    ecx = 0xc78c0e8a;
    eax = 0x8fe4e08d;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x60)) = ecx;
    ecx = 0x83a26efa;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x40)) = ecx;
    ecx = 0xaf63271e;
    eax = 0x4772904e;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x3c)) = ecx;
    ecx = 0xdfa67dbd;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x38)) = ecx;
    ecx = 0xec4380e1;
    eax = 0xfec8d354;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x64)) = ecx;
    ecx = 0x83abc1f7;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x5c)) = ecx;
    ecx = 0x6258c05a;
    eax = 0x8e1ddd7c;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x34)) = ecx;
    ecx = 0xcbb664fc;
    if (dl == 0) {
        ecx = eax;
    }
    *((rsp + 0x30)) = ecx;
    *((rsp + 4)) = r10b;
    al = *((rbp + 5));
    *((rsp + 5)) = al;
    r15 = rbp + 9;
    ecx = 0x1c7aa952;
    r13d = 0xcaae42a0;
    r14d = 0x1c41ec73;
    goto label_0;
    do {
label_2:
        ecx = 0x4a2da3db;
        edx = 0x2d0e6415;
        if (cl != 0) {
            ecx = edx;
        }
        goto label_0;
label_1:
        cl = *((rsp + 7));
    } while (1);
    do {
label_0:
        edx = ecx;
        if (edx <= 0xec4380e0) {
            goto label_18;
        }
        if (edx > 0x2f8eb965) {
            goto label_19;
        }
        if (edx <= 0x178a7b6d) {
            goto label_20;
        }
        ecx = *((rsp + 0x64));
    } while (edx == 0x178a7b6e);
    if (edx == 0x1c7aa952) {
        goto label_21;
    }
    ecx = edx;
    if (edx != 0x2d0e6415) {
        goto label_0;
    }
    ecx = 0xacd2ce38;
    edx = 0x178a7b6e;
    if (*((rsp + 0x10)) == 0) {
        ecx = edx;
    }
    goto label_0;
label_18:
    if (edx > 0xacd2ce37) {
        goto label_22;
    }
    if (edx <= 0x8e1ddd7b) {
        goto label_23;
    }
    if (edx == 0x8e1ddd7c) {
        goto label_24;
    }
    if (edx == 0x8fe4e08d) {
        goto label_25;
    }
    ecx = edx;
    if (edx != 0x96bde2ff) {
        goto label_0;
    }
    ecx = *((rsp + 0x3c));
    goto label_0;
label_19:
    if (edx <= 0x4772904d) {
        goto label_26;
    }
    if (edx == 0x4772904e) {
        goto label_27;
    }
    if (edx == 0x4a2da3db) {
        goto label_28;
    }
    ecx = edx;
    if (edx != 0x6258c05a) {
        goto label_0;
    }
    ecx = *((rsp + 0x30));
    goto label_0;
label_22:
    if (edx <= 0xc78c0e89) {
        goto label_29;
    }
    if (edx == 0xc78c0e8a) {
        goto label_30;
    }
    if (edx == 0xdfa67dbd) {
        goto label_1;
    }
    ecx = edx;
    if (edx != 0xcbb664fc) {
        goto label_0;
    }
    goto label_31;
label_20:
    ecx = *((rsp + 0x5c));
    if (edx == 0xec4380e1) {
        goto label_0;
    }
    ecx = edx;
    if (edx != 0xfec8d354) {
        goto label_0;
    }
    ecx = 0xec4380e1;
    goto label_0;
label_23:
    if (edx == 0x83a26efa) {
        goto label_32;
    }
    ecx = edx;
    if (edx != 0x83abc1f7) {
        goto label_0;
    }
    ecx = 0x315fe0e3;
    eax = 1;
    goto label_0;
label_26:
    ecx = *((rsp + 0x60));
    if (edx == 0x2f8eb966) {
        goto label_0;
    }
    ecx = edx;
    if (edx != 0x315fe0e3) {
        goto label_0;
    }
    *((rsp + 0x78)) = eax;
    ecx = *((rsp + 0x34));
    goto label_0;
label_29:
    if (edx == 0xacd2ce38) {
        goto label_33;
    }
    ecx = edx;
    if (edx != 0xaf63271e) {
        goto label_0;
    }
    ecx = *((rsp + 0x10));
    edx = *((rsp + 0x14));
    *(rsp + 7) = (edx == ecx) ? 1 : 0;
    ecx = *((rsp + 0x38));
    goto label_0;
label_21:
    ecx = *((rsp + 5));
    *((rsp + 0x14)) = ecx;
    cl = *((rsp + 4));
    ecx = 0x96bde2ff;
    edx = 0x2f8eb966;
    if (cl != 0) {
        ecx = edx;
    }
    goto label_0;
label_24:
    ecx = 0x6258c05a;
    goto label_0;
label_25:
    ecx = *((rsp + 0x14));
    ecx = *((rsp + 0x14));
    ecx = *((rsp + 0x10));
    ecx = 0xc78c0e8a;
    goto label_0;
label_27:
    ecx = *((rsp + 0x10));
    ecx = *((rsp + 0x14));
    ecx = 0xaf63271e;
    goto label_0;
label_28:
    ecx = 0x315fe0e3;
    eax = 0;
    goto label_0;
label_30:
    ecx = *((rsp + 0x14));
    ecx &= 0xffffffdf;
    *(rsp + 6) = (ecx == *((rsp + 0x10))) ? 1 : 0;
    ecx = *((rsp + 0x40));
    goto label_0;
label_32:
    cl = *((rsp + 6));
    goto label_2;
label_33:
    eax = *((rsp + 0x44));
    *((rsp + 0x18)) = eax;
    eax = *((rsp + 0x18));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 8)) = al;
    al = *((rbp + 6));
    *((rsp + 9)) = al;
    edx = 0x8c4bbe99;
    goto label_3;
    do {
label_17:
        edx = 0x62750ee6;
        eax = 0x8b43a8de;
        if (eax == 0x1a) {
            edx = eax;
        }
        goto label_3;
label_4:
        eax = *((rsp + 0x24));
        edx = *((rsp + 0x24));
        edx ^= 0x20;
        edx &= eax;
    } while (1);
    do {
label_3:
        eax = edx;
        if (eax > 0xf8dd75b5) {
            goto label_34;
        }
        if (eax <= 0xd3d6b865) {
            goto label_35;
        }
        if (eax > 0xd7fb4ba9) {
            goto label_36;
        }
        if (eax == 0xd3d6b866) {
            goto label_37;
        }
        edx = eax;
    } while (eax != 0xd6d7e5bc);
    edx = *((rsp + 0x50));
    goto label_3;
label_34:
    if (eax <= 0x1b9c52ca) {
        goto label_38;
    }
    if (eax <= 0x61890af5) {
        goto label_39;
    }
    if (eax == 0x61890af6) {
        goto label_4;
    }
    edx = eax;
    if (eax != 0x62750ee6) {
        goto label_3;
    }
    edx = 0xdd5ed59b;
    ecx = 0;
    goto label_3;
label_35:
    if (eax == 0x8b43a8de) {
        goto label_40;
    }
    if (eax == 0x8c4bbe99) {
        goto label_41;
    }
    edx = eax;
    if (eax != 0x9e3a3f0b) {
        goto label_3;
    }
    *(rsp + 0xa) = (*((rsp + 0x54)) == 0) ? 1 : 0;
    *(rsp + 0xb) = (*((rsp + 0x58)) < 0xa) ? 1 : 0;
    eax = 0xb3f299e4;
    if (eax > 0x4baa6193) {
        goto label_13;
    }
    goto label_15;
label_38:
    if (eax == 0xf8dd75b6) {
        goto label_42;
    }
    edx = *((rsp + 0x74));
    if (eax == 0xb99757b) {
        goto label_3;
    }
    edx = eax;
    if (eax != 0x1257af84) {
        goto label_3;
    }
    edx = *((rsp + 0x48));
    goto label_3;
    do {
label_14:
        eax = 0xe3afd757;
        edx = 0x4baa6194;
        if (eax == 0x1257af84) {
            eax = edx;
        }
        if (eax > 0x4baa6193) {
            goto label_13;
        }
        goto label_15;
label_5:
        eax = *((rsp + 0x28));
        eax &= 0xffffffdf;
    } while (1);
label_6:
    if (eax <= 0x4baa6193) {
        goto label_15;
    }
label_13:
    if (eax > 0x74e42cb1) {
        goto label_43;
    }
    if (eax == 0x4baa6194) {
        goto label_44;
    }
    if (eax == 0x695c7331) {
        goto label_5;
    }
    if (eax != 0x6e999087) {
        goto label_6;
    }
    *(rsp + 0xd) = (*((rsp + 0x68)) == 0) ? 1 : 0;
    *(rsp + 0xe) = (*((rsp + 0x6c)) < 0xa) ? 1 : 0;
    eax = 0xadc3fe73;
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
    goto label_10;
    do {
label_11:
        eax = 0xf9d5fcce;
        if (eax == 0x3ab3cf2) {
            eax = r14d;
        }
        if (eax > 0x3ab3cf2) {
            goto label_9;
        }
        goto label_10;
label_7:
        eax = *((rsp + 0x20));
        edx = *((rsp + 0x2c));
    } while (1);
label_8:
    if (eax <= 0x3ab3cf2) {
        goto label_10;
    }
label_9:
    if (eax > 0x413e15ff) {
        goto label_45;
    }
    if (eax == 0x3ab3cf3) {
        goto label_7;
    }
    if (eax == 0xab0d727) {
        goto label_46;
    }
    if (eax != 0x1c41ec73) {
        goto label_8;
    }
    eax = 0x5d06fa27;
    edx = 0xab0d727;
    goto label_12;
label_45:
    if (eax == 0x413e1600) {
        goto label_47;
    }
    if (eax == 0x5d06fa27) {
        goto label_48;
    }
    if (eax != 0x4ee34df9) {
        goto label_8;
    }
    goto label_49;
label_46:
    eax = 0x4ee34df9;
    ecx = 1;
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
    goto label_10;
label_47:
    eax = 0xcaae42a0;
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
    goto label_10;
label_48:
    rsi = *((rsp + 0x80));
    eax = c_strcasecmp (r15);
    ecx = 0;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x4ee34df9;
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
    goto label_10;
    if (eax == 0x3ab3cf2) {
label_12:
        eax = edx;
    }
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
label_10:
    if (eax <= 0xcaae429f) {
        goto label_50;
    }
    if (eax == 0xcaae42a0) {
        goto label_51;
    }
    if (eax == 0xe63bb239) {
        goto label_52;
    }
    if (eax != 0xf9d5fcce) {
        goto label_8;
    }
    eax = 0x4ee34df9;
    ecx = 0;
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
    goto label_10;
label_50:
    if (eax == 0xadc3fe73) {
        goto label_53;
    }
    if (eax != 0xb3381029) {
        goto label_8;
    }
    eax = *((rsp + 0x2c));
    edx = *((rsp + 0x2c));
    edx ^= 0x20;
    edx &= eax;
    goto label_11;
label_51:
    *((rsp + 0x20)) = 0;
    eax = *((rsp + 0x20));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0xf)) = al;
    eax = *((rbp + 8));
    *((rsp + 0x2c)) = eax;
    eax = r12d;
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
    goto label_10;
label_52:
    eax = *((rsp + 0xf));
    eax = 0x3ab3cf3;
    edx = 0xb3381029;
    if (al != 0) {
        eax = edx;
    }
    if (eax > 0x3ab3cf2) {
        goto label_9;
    }
    goto label_10;
label_53:
    bl = *((rsp + 0xd));
    al = *((rsp + 0xe));
    edx = ebx;
    dl ^= al;
    edx = 0x413e1600;
    if (eax != 0x3ab3cf2) {
        edx = r13d;
    }
    eax = edx;
    if (al != 0) {
        eax = r13d;
    }
    goto label_12;
label_43:
    if (eax == 0x74e42cb2) {
        goto label_54;
    }
    if (eax == 0x7d5d53a9) {
        goto label_55;
    }
    if (eax != 0x7c64b8fd) {
        goto label_6;
    }
    goto label_56;
label_44:
    eax = 0x6e999087;
    edx = 0xbc08dbbb;
    goto label_16;
label_49:
    eax = 0x7c64b8fd;
    if (eax > 0x4baa6193) {
        goto label_13;
    }
    goto label_15;
label_54:
    al = *((rsp + 0xc));
    eax = 0x21e8c4de;
    edx = 0x695c7331;
    if (al != 0) {
        eax = edx;
    }
    if (eax > 0x4baa6193) {
        goto label_13;
    }
    goto label_15;
label_55:
    *((rsp + 0x1c)) = 0;
    eax = *((rsp + 0x1c));
    eax += 0xffffffbf;
    al = (eax < 0x1a) ? 1 : 0;
    *((rsp + 0xc)) = al;
    eax = *((rbp + 7));
    *((rsp + 0x28)) = eax;
    eax = *((rsp + 0x70));
    if (eax > 0x4baa6193) {
        goto label_13;
    }
    goto label_15;
    if (eax == 0x4baa6193) {
label_16:
        eax = edx;
    }
    if (eax > 0x4baa6193) {
        goto label_13;
    }
label_15:
    if (eax <= 0xe3afd756) {
        goto label_57;
    }
    if (eax == 0xe3afd757) {
        goto label_58;
    }
    if (eax == 0xfd17274c) {
        goto label_59;
    }
    if (eax != 0x21e8c4de) {
        goto label_6;
    }
    eax = *((rsp + 0x1c));
    edx = *((rsp + 0x28));
    goto label_14;
label_57:
    if (eax == 0xb3f299e4) {
        goto label_60;
    }
    if (eax != 0xbc08dbbb) {
        goto label_6;
    }
    eax = 0x7c64b8fd;
    ecx = 1;
    if (eax > 0x4baa6193) {
        goto label_13;
    }
    goto label_15;
label_58:
    eax = 0x7c64b8fd;
    ecx = 0;
    if (eax > 0x4baa6193) {
        goto label_13;
    }
    goto label_15;
label_59:
    eax = 0x7d5d53a9;
    if (eax > 0x4baa6193) {
        goto label_13;
    }
    goto label_15;
label_60:
    bl = *((rsp + 0xa));
    al = *((rsp + 0xb));
    edx = ebx;
    dl ^= al;
    edx = 0xfd17274c;
    esi = 0x7d5d53a9;
    if (eax != 0x4baa6193) {
        edx = esi;
    }
    eax = edx;
    if (al != 0) {
        eax = esi;
    }
    goto label_16;
label_36:
    if (eax == 0xd7fb4baa) {
        goto label_61;
    }
    edx = eax;
    if (eax != 0xdd5ed59b) {
        goto label_3;
    }
    *((rsp + 0x7c)) = ecx;
    edx = *((rsp + 0x4c));
    goto label_3;
label_39:
    if (eax == 0x1b9c52cb) {
        goto label_62;
    }
    edx = eax;
    if (eax != 0x2029ff06) {
        goto label_3;
    }
    goto label_63;
label_37:
    edx = 0xdd5ed59b;
    ecx = 1;
    goto label_3;
label_40:
    edx = 0x9e3a3f0b;
    eax = 0xd6d7e5bc;
    if (*((rsp + 0x18)) == 0) {
        edx = eax;
    }
    goto label_3;
label_41:
    eax = *((rsp + 9));
    *((rsp + 0x24)) = eax;
    al = *((rsp + 8));
    edx = 0x1b9c52cb;
    eax = 0x61890af6;
    if (al != 0) {
        edx = eax;
    }
    goto label_3;
label_42:
    edx = 0x1257af84;
    goto label_3;
label_56:
    edx = 0xdd5ed59b;
    goto label_3;
label_61:
    edx = 0xb99757b;
    goto label_3;
label_62:
    eax = *((rsp + 0x18));
    edx = *((rsp + 0x24));
    goto label_17;
label_63:
    eax = *((rsp + 0x7c));
    ecx = 0x315fe0e3;
    goto label_0;
label_31:
    eax = *((rsp + 0x78));
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x414150 */
#include <stdint.h>
 
uint64_t dbg_version_etc_arn (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char const * const * authors, size_t n_authors, FILE * stream) {
    char const * package;
    char const * version;
    char const * command_name;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    rbx = authors;
    r9 = n_authors;
    r13 = stream;
    /* void version_etc_arn(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors,size_t n_authors); */
    rbx = r8;
    *((rsp + 0x28)) = rcx;
    *((rsp + 0x20)) = rdx;
    r13 = rdi;
    *((rsp + 0x30)) = rsi;
    eax = 0x94b0b8c;
    ecx = 0x1165e6c;
    if (rsi != 0) {
        ecx = eax;
    }
    *((rsp + 0x18)) = ecx;
    eax = 0xa41681f5;
    ecx = 0xc8996853;
    if (r9 < 5) {
        ecx = eax;
    }
    *((rsp + 0x14)) = ecx;
    eax = 0xc068ba3d;
    ecx = 0x13f808e0;
    if (r9 < 7) {
        ecx = eax;
    }
    *((rsp + 0x10)) = ecx;
    eax = 0xc0455eee;
    ecx = 0x2d06bd90;
    if (r9 < 8) {
        ecx = eax;
    }
    *((rsp + 0xc)) = ecx;
    eax = 0x62f0e1cd;
    ecx = 0x5868a430;
    if (r9 < 9) {
        ecx = eax;
    }
    *((rsp + 8)) = ecx;
    ecx = 0x38c22b71;
    eax = 0xa3d1e448;
    if (r9 != 9) {
        ecx = eax;
    }
    *((rsp + 0x1c)) = ecx;
    ecx = 0x9ae876b9;
    r15d = 0x22ae0b69;
    if (r9 < 6) {
        r15d = ecx;
    }
    ecx = 0xb17d104a;
    r12d = 0x6f78279d;
    if (r9 < 2) {
        r12d = ecx;
    }
    ecx = 0xcaf0e44e;
    if (r9 < 3) {
    }
    ecx = 0x1f3b7ce4;
    r14d = 0xb3218421;
    if (r9 < 4) {
        r14d = ecx;
    }
    ecx = 0xcc428de1;
    edx = 0xaf3c56cc;
    if (r9 <= 0) {
        edx = ecx;
    }
    *((rsp + 4)) = edx;
    ecx = 0x67d26383;
    if (r9 != 0) {
        ecx = eax;
    }
    *(rsp) = ecx;
    eax = 0x47b925bf;
    goto label_0;
label_1:
    if (esi >= 0xa) {
        eax = ecx;
    }
    do {
label_0:
        ecx = eax;
        if (ecx > 0x12bb474b) {
            goto label_2;
        }
        if (ecx <= 0xc068ba3c) {
            goto label_3;
        }
        if (ecx <= 0xf703ce91) {
            goto label_4;
        }
        if (ecx <= 0x42b64ee) {
            goto label_5;
        }
        if (ecx == 0x42b64ef) {
            goto label_6;
        }
        if (ecx == 0x94b0b8c) {
            goto label_7;
        }
        eax = ecx;
    } while (ecx != 0xbcbd65a);
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0xaab88854;
    goto label_0;
label_2:
    if (ecx <= 0x433eba16) {
        goto label_8;
    }
    if (ecx <= 0x67d26382) {
        goto label_9;
    }
    if (ecx > 0x6f78279c) {
        goto label_10;
    }
    if (ecx == 0x67d26383) {
        goto label_11;
    }
    eax = ecx;
    if (ecx != 0x6de12eb1) {
        goto label_0;
    }
    eax = 0x67d26383;
    goto label_0;
label_3:
    if (ecx > 0xaf3c56cb) {
        goto label_12;
    }
    if (ecx > 0xa41681f4) {
        goto label_13;
    }
    if (ecx == 0x9ae876b9) {
        goto label_14;
    }
    eax = ecx;
    if (ecx != 0xa3d1e448) {
        goto label_0;
    }
    eax = 0x73c7fac3;
    goto label_0;
label_8:
    if (ecx > 0x22ae0b68) {
        goto label_15;
    }
    if (ecx > 0x1a4d87fb) {
        goto label_16;
    }
    if (ecx == 0x12bb474c) {
        goto label_17;
    }
    eax = ecx;
    if (ecx != 0x13f808e0) {
        goto label_0;
    }
    eax = *((rsp + 0xc));
    goto label_0;
label_4:
    if (ecx > 0xcaf0e44d) {
        goto label_18;
    }
    eax = r15d;
    if (ecx == 0xc068ba3d) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0xc8996853) {
        goto label_0;
    }
    eax = *((rsp + 0x10));
    goto label_0;
label_9:
    if (ecx > 0x5868a42f) {
        goto label_19;
    }
    if (ecx == 0x433eba17) {
        goto label_20;
    }
    eax = ecx;
    if (ecx != 0x47b925bf) {
        goto label_0;
    }
    eax = *((rsp + 0x18));
    goto label_0;
label_12:
    if (ecx > 0xb3218420) {
        goto label_21;
    }
    if (ecx == 0xaf3c56cc) {
        goto label_22;
    }
    eax = ecx;
    if (ecx != 0xb17d104a) {
        goto label_0;
    }
    eax = *((rsp + 4));
    goto label_0;
label_15:
    if (ecx > 0x38c22b70) {
        goto label_23;
    }
    if (ecx == 0x22ae0b69) {
        goto label_24;
    }
    eax = ecx;
    if (ecx != 0x2d06bd90) {
        goto label_0;
    }
    eax = *((rsp + 8));
    goto label_0;
label_5:
    if (ecx == 0xf703ce92) {
        goto label_25;
    }
    eax = ecx;
    if (ecx != 0x1165e6c) {
        goto label_0;
    }
    esi = 1;
    edx = "%s %s\n";
    eax = 0;
    rdi = r13;
    rcx = *((rsp + 0x20));
    r8 = *((rsp + 0x28));
    fprintf_chk ();
    eax = 0xf703ce92;
    goto label_0;
label_10:
    eax = ebp;
    if (ecx == 0x6f78279d) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0x73c7fac3) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_13:
    eax = r12d;
    if (ecx == 0xa41681f5) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0xaab88854) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = x;
    esi = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    cl = (esi < 0xa) ? 1 : 0;
    cl ^= dl;
    ecx = 0xbcbd65a;
    edx = 0x6de12eb1;
    if (esi != 0xa) {
        ecx = edx;
    }
    eax = ecx;
    if (eax == 0) {
        eax = edx;
    }
    goto label_1;
label_16:
    eax = r14d;
    if (ecx == 0x1a4d87fc) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0x1f3b7ce4) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_18:
    if (ecx == 0xcaf0e44e) {
        goto label_26;
    }
    eax = ecx;
    if (ecx != 0xcc428de1) {
        goto label_0;
    }
    eax = *(rsp);
    goto label_0;
label_19:
    eax = *((rsp + 0x1c));
    if (ecx == 0x5868a430) {
        goto label_0;
    }
    eax = ecx;
    if (ecx != 0x62f0e1cd) {
        goto label_0;
    }
    eax = x;
    esi = y;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    cl = (esi < 0xa) ? 1 : 0;
    cl ^= al;
    ecx = 0xbcbd65a;
    edi = 0xaab88854;
    if (esi != 0xa) {
        ecx = edi;
    }
    eax = ecx;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    goto label_1;
label_21:
    if (ecx == 0xb3218421) {
        goto label_27;
    }
    eax = ecx;
    if (ecx != 0xc0455eee) {
        goto label_0;
    }
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_23:
    if (ecx == 0x38c22b71) {
        goto label_28;
    }
    eax = ecx;
    if (ecx != 0x418840dd) {
        goto label_0;
    }
    eax = *((rsp + 0x14));
    goto label_0;
label_6:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x12bb474c;
    goto label_0;
label_7:
    esi = 1;
    edx = 0x419518;
    eax = 0;
    rdi = r13;
    rcx = *((rsp + 0x30));
    r8 = *((rsp + 0x20));
    r9 = *((rsp + 0x28));
    fprintf_chk ();
    eax = 0xf703ce92;
    goto label_0;
label_14:
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x42b64ef;
    esi = 0x12bb474c;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    edi = 0x42b64ef;
    if (*(obj.y) >= 0xa) {
        eax = edi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = esi;
    }
    goto label_0;
label_17:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x42b64ef;
    edi = 0x433eba17;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0x42b64ef;
    if (*(obj.y) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = edi;
    }
    goto label_0;
label_20:
    eax = 0x67d26383;
    goto label_0;
label_22:
    edx = 5;
    rax = dcgettext (0, "Written by %s.\n");
    rdx = rax;
    rcx = *(rbx);
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_24:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_25:
    edx = 5;
    rax = dcgettext (0, 0x41952b);
    rcx = rax;
    esi = 1;
    edx = "Copyright %s %d Free Software Foundation, Inc.";
    r8d = 0x7e3;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    edx = 5;
    rax = dcgettext (0, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
    rdi = rax;
    rsi = r13;
    fputs_unlocked ();
    eax = 0x418840dd;
    goto label_0;
label_26:
    edx = 5;
    rax = dcgettext (0, "Written by %s and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_27:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\nand %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_28:
    edx = 5;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    rdx = rax;
    rcx = *(rbx);
    r8 = *((rbx + 8));
    r9 = *((rbx + 0x10));
    esi = 1;
    eax = 0;
    rdi = r13;
    fprintf_chk ();
    eax = 0x67d26383;
    goto label_0;
label_11:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x414a40 */
#include <stdint.h>
 
int64_t dbg_version_etc_ar (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char const * command_name, char const * package, FILE * stream, char const * version) {
    char const * const * authors;
    int64_t var_8h;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r12 = command_name;
    r15 = package;
    r13 = stream;
    r14 = version;
    /* void version_etc_ar(FILE * stream,char const * command_name,char const * package,char const * version,char const * const * authors); */
    r14 = rcx;
    r15 = rdx;
    r12 = rsi;
    r13 = rdi;
    eax = 0;
    goto label_4;
label_3:
    rax = *((rsp + 8));
    rcx = 0x8196286c2d0e79ad;
    rax = rax + rcx + 1;
    rax -= rcx;
label_4:
    *((rsp + 0x10)) = rax;
    eax = 0xcbfc4abc;
    if (eax > 0xe824bfac) {
        goto label_2;
    }
    goto label_0;
label_1:
    r9 = *((rsp + 8));
    version_etc_arn (r13, r12, r15, r14, rbp);
    eax = 0xae8ea911;
    if (eax > 0xe824bfac) {
        goto label_2;
    }
    do {
label_0:
        if (eax == 0xae8ea911) {
            goto label_5;
        }
        if (eax != 0xcbfc4abc) {
            goto label_6;
        }
        rax = *((rsp + 0x10));
        *((rsp + 8)) = rax;
        rax = *((rsp + 8));
        eax = 0xe824bfad;
        ecx = 0xc4bf300c;
        if (*((rbp + rax*8)) != 0) {
            eax = ecx;
        }
        if (eax > 0xe824bfac) {
            goto label_2;
        }
    } while (1);
label_5:
    r9 = *((rsp + 8));
    version_etc_arn (r13, r12, r15, r14, rbp);
    eax = x_20;
    ecx = y_21;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x5a5083ec;
    edi = 0x692ad7e9;
    if (ecx != 0xa) {
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0xe824bfac) {
        goto label_0;
    }
label_2:
    if (eax == 0xe824bfad) {
        goto label_7;
    }
    if (eax == 0x5a5083ec) {
        goto label_1;
    }
    goto label_8;
label_7:
    eax = x_20;
    ecx = y_21;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x5a5083ec;
    esi = 0xae8ea911;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax > 0xe824bfac) {
        goto label_2;
    }
    goto label_0;
label_6:
    if (eax == 0xc4bf300c) {
        goto label_3;
    }
    goto label_9;
label_8:
    if (eax == 0x692ad7e9) {
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x414c20 */
#include <stdint.h>
 
uint64_t dbg_version_etc_va (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, __va_list_tag * authors) {
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    FILE * stream;
    char const * command_name;
    char const * package;
    char const * version;
    int64_t var_58h;
    char const * authtab[11];
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = authors;
    /* void version_etc_va(FILE * stream,char const * command_name,char const * package,char const * version,__va_list_tag * authors); */
    *((rsp + 0x50)) = rcx;
    *((rsp + 0x48)) = rdx;
    *((rsp + 0x40)) = rsi;
    *((rsp + 0x38)) = rdi;
    rax = rsp + 0x60;
    *((rsp + 0x20)) = rax;
    rax = *((rsp + 0x20));
    r13d = 0xf340d982;
    edi = 0;
    r14d = 0xc50391ce;
    r15d = 0xd98409ac;
    r12d = 0x6c623ff8;
    r9d = 0xc615b890;
    esi = 0x237bd5e9;
    r10d = 0x6b81e749;
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_2:
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    rax = *((rsp + 0x10));
    r13d = 0xeeeec022;
    do {
label_0:
        if (r13d > 0xfdb3228c) {
            goto label_4;
        }
label_1:
        if (r13d > 0xc615b88f) {
            goto label_5;
        }
        if (r13d > 0x8d7e2fb5) {
            goto label_6;
        }
        if (r13d == 0x84c57e7e) {
            goto label_7;
        }
    } while (r13d != 0x86dfa7c9);
    r11 = *((rsp + 0x1c));
    r11 += *((r8 + 0x10));
    ecx = *((rsp + 0x1c));
    ecx += 8;
    rdx = *((rsp + 0x28));
    *(rdx) = ecx;
    goto label_8;
label_5:
    if (r13d > 0xeeeec021) {
        goto label_9;
    }
    if (r13d == 0xc615b890) {
        goto label_10;
    }
    if (r13d != 0xd98409ac) {
        goto label_0;
    }
    rax = *((rsp + 0x10));
    r13d = 0xc615b890;
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_6:
    if (r13d == 0x8d7e2fb6) {
        goto label_11;
    }
    if (r13d != 0xc50391ce) {
        goto label_0;
    }
    cl = *((rsp + 0xe));
    r13d = 0x7cb73e35;
    eax = 0x580b3901;
    goto label_3;
label_9:
    if (r13d == 0xeeeec022) {
        goto label_12;
    }
    if (r13d != 0xf340d982) {
        goto label_0;
    }
    *((rsp + 0x10)) = rdi;
    ecx = x_22;
    ebp = -ebp;
    ebp = ~ebp;
    ebp *= ecx;
    ebp = ~ebp;
    ebp |= 0xfffffffe;
    cl = (ebp == 0xffffffff) ? 1 : 0;
    r13d = 0xd98409ac;
    if (ebp == 0xffffffff) {
        r13d = r9d;
    }
    dl = (*(obj_y_23) < 0xa) ? 1 : 0;
    if (*(obj_y_23) >= 0xa) {
        r13d = r15d;
    }
    dl ^= cl;
    if (*(obj_y_23) != 0xa) {
        r13d = r9d;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_7:
    r11 = *((r8 + 8));
    rcx = r11 + 8;
    *((r8 + 8)) = rcx;
label_8:
    r13d = 0xfdb3228d;
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_10:
    rcx = *((rsp + 0x10));
    cl = (rcx < 0xa) ? 1 : 0;
    *((rsp + 0xe)) = cl;
    ecx = x_22;
    edx = rcx - 1;
    edx *= ecx;
    edx = ~edx;
    edx |= 0xfffffffe;
    cl = (edx == 0xffffffff) ? 1 : 0;
    r13d = 0xd98409ac;
    if (edx == 0xffffffff) {
        r13d = r14d;
    }
    dl = (*(obj_y_23) < 0xa) ? 1 : 0;
    if (*(obj_y_23) >= 0xa) {
        r13d = r15d;
    }
    dl ^= cl;
    if (*(obj_y_23) != 0xa) {
        r13d = r14d;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_11:
    eax = x_22;
    ecx = x_22;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    al = (ecx == 0xffffffff) ? 1 : 0;
    r13d = 0x13db0ae5;
    edx = 0xeeeec022;
    if (ecx == 0xffffffff) {
        r13d = edx;
    }
    cl = (*(obj_y_23) < 0xa) ? 1 : 0;
    ebx = 0x13db0ae5;
    if (*(obj_y_23) >= 0xa) {
        r13d = ebx;
    }
    cl ^= al;
    if (*(obj_y_23) != 0xa) {
        r13d = edx;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_12:
    rax = *((rsp + 0x10));
    rax++;
    *((rsp + 0x58)) = rax;
    eax = x_22;
    ecx = y_23;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x13db0ae5;
    if (ecx != 0xa) {
        edx = r12d;
    }
    r13d = edx;
    if (eax == 0) {
        r13d = r12d;
    }
    if (ecx >= 0xa) {
        r13d = edx;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
    if (r13d != 0xfdb3228c) {
label_3:
        r13d = eax;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
label_4:
    if (r13d > 0x580b3900) {
        goto label_13;
    }
    if (r13d > 0x1a17eac2) {
        goto label_14;
    }
    if (r13d == 0xfdb3228d) {
        goto label_15;
    }
    if (r13d != 0x13db0ae5) {
        goto label_0;
    }
    goto label_2;
label_13:
    if (r13d > 0x6c623ff7) {
        goto label_16;
    }
    if (r13d == 0x580b3901) {
        goto label_17;
    }
    if (r13d != 0x6b81e749) {
        goto label_0;
    }
    al = *((rsp + 0xf));
    r13d = 0x7cb73e35;
    eax = 0x8d7e2fb6;
    goto label_3;
label_14:
    if (r13d == 0x1a17eac3) {
        goto label_18;
    }
    if (r13d != 0x237bd5e9) {
        goto label_0;
    }
    rax = *((rsp + 0x30));
    rax = *(rax);
    rcx = *((rsp + 0x10));
    *(rsp + 0xf) = (rax != 0) ? 1 : 0;
    *((rsp + rcx*8 + 0x60)) = rax;
    eax = x_22;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    al = (ecx == 0xffffffff) ? 1 : 0;
    r13d = 0x1a17eac3;
    if (ecx == 0xffffffff) {
        r13d = r10d;
    }
    cl = (*(obj_y_23) < 0xa) ? 1 : 0;
    edx = 0x1a17eac3;
    if (*(obj_y_23) >= 0xa) {
        r13d = edx;
    }
    cl ^= al;
    if (*(obj_y_23) != 0xa) {
        r13d = r10d;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_16:
    if (r13d == 0x6c623ff8) {
        goto label_19;
    }
    if (r13d != 0x7cb73e35) {
        goto label_0;
    }
    goto label_20;
label_15:
    *((rsp + 0x30)) = r11;
    ecx = x_22;
    edx = y_23;
    ebp = rcx - 1;
    ebp *= ecx;
    ecx = ebp;
    ecx ^= 0xfffffffe;
    ecx &= ebp;
    bl = (ecx == 0) ? 1 : 0;
    al = (edx < 0xa) ? 1 : 0;
    al ^= bl;
    eax = 0x1a17eac3;
    if (edx != 0xa) {
        eax = esi;
    }
    r13d = eax;
    if (ecx == 0) {
        r13d = esi;
    }
    if (edx >= 0xa) {
        r13d = eax;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_17:
    *((rsp + 0x28)) = r8;
    rcx = *((rsp + 0x28));
    ecx = *(rcx);
    *((rsp + 0x1c)) = ecx;
    ecx = *((rsp + 0x1c));
    r13d = 0x84c57e7e;
    eax = 0x86dfa7c9;
    if (ecx < 0x29) {
        r13d = eax;
    }
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_18:
    rax = *((rsp + 0x30));
    rax = *(rax);
    rcx = *((rsp + 0x10));
    *((rsp + rcx*8 + 0x60)) = rax;
    r13d = 0x237bd5e9;
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_19:
    rdi = *((rsp + 0x58));
    r13d = 0xf340d982;
    if (r13d <= 0xfdb3228c) {
        goto label_1;
    }
    goto label_4;
label_20:
    r9 = *((rsp + 0x10));
    version_etc_arn (*((rsp + 0x38)), *((rsp + 0x40)), *((rsp + 0x48)), *((rsp + 0x50)), rsp + 0x60);
    rax = *((rsp + 0x20));
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x415160 */
#include <stdint.h>
 
int64_t dbg_version_etc (int64_t arg_10h, int64_t arg1, int64_t arg10, int64_t arg11, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6, int64_t arg7, int64_t arg8, int64_t arg9, va_list authors, char const * command_name, char const * package, FILE * stream, char const * version) {
    int64_t var_e0h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_b0h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    rdi = arg1;
    xmm3 = arg10;
    xmm4 = arg11;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    r8 = authors;
    r12 = command_name;
    r15 = package;
    r13 = stream;
    r14 = version;
    /* void version_etc(FILE * stream,char const * command_name,char const * package,char const * version,va_args ..); */
    r14 = rcx;
    r15 = rdx;
    r12 = rsi;
    r13 = rdi;
    if (al != 0) {
        *((rbp - 0xb0)) = xmm0;
        *((rbp - 0xa0)) = xmm1;
        *((rbp - 0x90)) = xmm2;
        *((rbp - 0x80)) = xmm3;
        *((rbp - 0x70)) = xmm4;
        *((rbp - 0x60)) = xmm5;
        *((rbp - 0x50)) = xmm6;
        *((rbp - 0x40)) = xmm7;
    }
    *((rbp - 0xb8)) = r9;
    *((rbp - 0xc0)) = r8;
    eax = x_24;
    ecx = y_25;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    *(rbp - 0x29) = ((eax & edx) == 0) ? 1 : 0;
    *(rbp - 0x2a) = (ecx < 0xa) ? 1 : 0;
    eax = 0xbd262645;
    rbx = rbp - 0xe0;
    if (eax > 0x57e6ba73) {
        goto label_1;
    }
    goto label_2;
label_0:
    rax = rsp;
    r8 = rax - 0x20;
    *((rax - 0x10)) = rbx;
    rcx = rbp + 0x10;
    *((rax - 0x18)) = rcx;
    *((rax - 0x1c)) = 0x30;
    *((rax - 0x20)) = 0x20;
    version_etc_va (r13, r12, r15, r14);
    eax = 0x58335091;
    if (eax > 0x57e6ba73) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0xbd262645) {
            goto label_3;
        }
        ecx = *((rbp - 0x29));
        eax = *((rbp - 0x2a));
        edx = ecx;
        dl ^= al;
        edx = 0x57e6ba74;
        esi = 0x58335091;
        if (eax != 0xbd262645) {
            edx = esi;
        }
        eax = edx;
        if (al != 0) {
            eax = esi;
        }
        if (cl == 0) {
            eax = edx;
        }
    } while (eax <= 0x57e6ba73);
label_1:
    if (eax == 0x57e6ba74) {
        goto label_0;
    }
    if (eax != 0x58335091) {
        goto label_4;
    }
    rax = rsp;
    r8 = rax - 0x20;
    *((rax - 0x10)) = rbx;
    rcx = rbp + 0x10;
    *((rax - 0x18)) = rcx;
    *((rax - 0x1c)) = 0x30;
    *((rax - 0x20)) = 0x20;
    version_etc_va (r13, r12, r15, r14);
    eax = x_24;
    ecx = y_25;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    rsi = rbx;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    rbx = rsi;
    edx = 0x57e6ba74;
    esi = 0x513deb41;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax > 0x57e6ba73) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0x513deb41) {
        rsp = rbp - 0x28;
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x415340 */
#include <stdint.h>
 
uint64_t dbg_emit_bug_reporting_address (void) {
    int64_t var_eh;
    int64_t var_fh;
    /* void emit_bug_reporting_address(); */
    eax = x_26;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    *(rsp + 0xe) = ((eax & ecx) == 0) ? 1 : 0;
    eax = y_27;
    *(rsp + 0xf) = (eax < 0xa) ? 1 : 0;
    eax = 0x5dd029a2;
    r14d = 0x56697883;
    if (eax <= 0x56697882) {
        goto label_0;
    }
    goto label_1;
    do {
        edx = 5;
        rax = dcgettext (0, "\nReport bugs to: %s\n");
        rcx = rax;
        edi = 1;
        edx = "bug-coreutils@gnu.org";
        eax = 0;
        rsi = rcx;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "%s home page: <%s>\n");
        rsi = rax;
        edi = 1;
        edx = "GNU coreutils";
        ecx = "https://www.gnu.org/software/coreutils/";
        eax = 0;
        printf_chk ();
        edx = 5;
        rax = dcgettext (0, "General help using GNU software: <https://www.gnu.org/gethelp/>\n");
        rsi = stdout;
        rdi = rax;
        fputs_unlocked ();
        eax = 0xfb8a1460;
        if (eax > 0x56697882) {
            goto label_1;
        }
INVALID_JUMP;
    } while (eax == 0xc6b08388);
    if (eax != 0xfb8a1460) {
        goto label_2;
    }
    edx = 5;
    rax = dcgettext (0, "\nReport bugs to: %s\n");
    rcx = rax;
    edi = 1;
    edx = "bug-coreutils@gnu.org";
    eax = 0;
    rsi = rcx;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "%s home page: <%s>\n");
    rsi = rax;
    edi = 1;
    edx = "GNU coreutils";
    ecx = "https://www.gnu.org/software/coreutils/";
    eax = 0;
    printf_chk ();
    edx = 5;
    rax = dcgettext (0, "General help using GNU software: <https://www.gnu.org/gethelp/>\n");
    rsi = stdout;
    rdi = rax;
    fputs_unlocked ();
    eax = x_26;
    ecx = y_27;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0xc6b08388;
    if (ecx != 0xa) {
        edx = r14d;
    }
    eax = edx;
    if (eax == 0) {
        eax = r14d;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax <= 0x56697882) {
        goto label_0;
    }
label_1:
    if (eax != 0x5dd029a2) {
        goto label_3;
    }
    ecx = *((rsp + 0xe));
    eax = *((rsp + 0xf));
    edx = ecx;
    dl ^= al;
    edx = 0xc6b08388;
    if (eax != 0x5dd029a2) {
        edx = ebp;
    }
    eax = edx;
    if (al != 0) {
        eax = ebp;
    }
    if (cl == 0) {
        eax = edx;
    }
    if (eax <= 0x56697882) {
        goto label_0;
    }
    goto label_1;
label_3:
    if (eax == 0x56697883) {
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x415540 */
#include <stdint.h>
 
int64_t dbg_xnmalloc (int64_t arg_5h, int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, uint32_t arg1, int64_t arg2, void * p) {
    size_t n;
    size_t s;
    int64_t var_4h;
    int64_t var_5h_2;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h_2;
    int64_t var_9h;
    int64_t var_ah;
    int64_t var_bh;
    int64_t var_ch;
    void * var_10h;
    size_t size;
    int64_t var_20h;
    int64_t var_6h_3;
    int64_t var_7h_2;
    uint32_t var_28h;
    void * var_30h;
    int64_t var_5h;
    int64_t var_6h_2;
    int64_t var_7h_3;
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rax = p;
    /* void * xnmalloc(size_t n,size_t s); */
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    r8b = ((eax & edx) == 0) ? 1 : 0;
    *(rsp + 9) = ((eax & edx) == 0) ? 1 : 0;
    cl = (ecx < 0xa) ? 1 : 0;
    *(rsp + 0xa) = (ecx < 0xa) ? 1 : 0;
    edx = x_1;
    r10d = y_2;
    ebp = rdx - 1;
    ebp *= edx;
    edx = ebp;
    edx = ~edx;
    edx |= 0xfffffffe;
    bl = (edx == 0xffffffff) ? 1 : 0;
    al = (r10d < 0xa) ? 1 : 0;
    al ^= bl;
    r12d = 0xcc87e77e;
    r9d = 0xb99003e9;
    eax = 0xb99003e9;
    if (r10d != 0xa) {
        eax = r12d;
    }
    if (edx != 0xffffffff) {
        r12d = eax;
    }
    if (r10d >= 0xa) {
        r12d = eax;
    }
    eax = ecx;
    al &= r8b;
    cl ^= r8b;
    *((rsp + 0x20)) = rsi;
    *((rsp + 0x28)) = rdi;
    rsi *= rdi;
    *((rsp + 0x18)) = rsi;
    ebp &= 1;
    cl |= al;
    ebx = 0x99c36c47;
    eax = 0x5abc4ffb;
    if (cl == 0) {
        ebx = eax;
    }
    esi = 0x68ca93e4;
    eax = 0x4b38d38c;
    if (cl == 0) {
        esi = eax;
    }
    edi = 0xb28ac9ac;
    if (cl == 0) {
        edi = eax;
    }
    eax = 0xdcd168d;
    r8d = 0xe5768f03;
    r11d = 0x6fa48656;
    r14d = 0x167eb126;
    r15d = 0xeac824b;
    r13 = 0x7fffffffffffffff;
    goto label_0;
label_1:
    eax = 0x6fa48656;
    do {
label_0:
        ecx = eax;
        if (ecx > 0x4b38d38b) {
            goto label_6;
        }
        if (ecx <= 0xcc59d807) {
            goto label_7;
        }
        eax = esi;
    } while (ecx == 0xcc59d808);
    if (ecx != 0xdcd168d) {
        goto label_8;
    }
    cl = *((rsp + 9));
    al = *((rsp + 0xa));
    edx = ecx;
    dl ^= al;
    edx = 0x5abc4ffb;
    if (ecx != 0xdcd168d) {
        edx = r11d;
    }
    eax = edx;
    if (al != 0) {
        eax = r11d;
    }
    if (cl == 0) {
        eax = edx;
    }
    goto label_0;
label_6:
    if (ecx > 0x68ca93e3) {
        goto label_9;
    }
    if (ecx == 0x4b38d38c) {
        goto label_10;
    }
    eax = ecx;
    if (ecx == 0x5abc4ffb) {
        goto label_1;
    }
    goto label_0;
label_7:
    if (ecx == 0x99c36c47) {
        goto label_11;
    }
    eax = ecx;
    if (ecx == 0xb28ac9ac) {
        goto label_12;
    }
    goto label_0;
label_9:
    if (ecx == 0x68ca93e4) {
        goto label_13;
    }
    eax = ecx;
    if (ecx != 0x6fa48656) {
        goto label_0;
    }
    edx = 0;
    rax = r13;
    rax = *(rdx_rax) / rsp + 0x20;
    rdx = *(rdx_rax) % rsp + 0x20;
    al = (rax < *((rsp + 0x28))) ? 1 : 0;
    *((rsp + 0xb)) = al;
    eax = ebx;
    goto label_0;
label_10:
    *(rsp + 6) = (ebp == 0) ? 1 : 0;
    *(rsp + 7) = (r10d < 0xa) ? 1 : 0;
    ecx = 0x748f5c0c;
    goto label_3;
label_11:
    al = *((rsp + 0xb));
    eax = 0xcc59d808;
    if (al != 0) {
        eax = r8d;
    }
    goto label_0;
label_13:
    *(rsp + 6) = (ebp == 0) ? 1 : 0;
    *(rsp + 7) = (r10d < 0xa) ? 1 : 0;
    ecx = 0x748f5c0c;
    goto label_5;
label_2:
    eax = *((rsp + 8));
    ecx = 0x4288da2f;
    if (al != 0) {
        ecx = r14d;
    }
    do {
label_3:
        eax = ecx;
        if (eax > 0x167eb125) {
            goto label_14;
        }
        ecx = 0xeac824b;
    } while (eax == 0xb99003e9);
    if (eax == 0xcc87e77e) {
        goto label_2;
    }
    if (eax != 0xeac824b) {
        goto label_15;
    }
    r14d = r10d;
    r13 = *((rsp + 0x18));
    *((rsp + 0xc)) = edi;
    r15d = esi;
    rax = malloc (r13);
    r11d = 0x6fa48656;
    r8d = 0xe5768f03;
    esi = r15d;
    r15d = 0xeac824b;
    edi = *((rsp + 0xc));
    r9d = 0xb99003e9;
    r10d = r14d;
    r14d = 0x167eb126;
    *((rsp + 0x10)) = rax;
    r13 = 0x7fffffffffffffff;
    al = (r13 == 0) ? 1 : 0;
    cl = (*((rsp + 0x10)) != 0) ? 1 : 0;
    cl |= al;
    cl ^= 1;
    *((rsp + 8)) = cl;
    ecx = r12d;
    goto label_3;
label_14:
    if (eax == 0x4288da2f) {
        goto label_16;
    }
    if (eax != 0x748f5c0c) {
        goto label_17;
    }
    eax = *((rsp + 6));
    ecx = *((rsp + 7));
    edx = eax;
    dl ^= cl;
    edx = 0xb99003e9;
    if (eax != 0x748f5c0c) {
        edx = r15d;
    }
    ecx = edx;
    if (cl != 0) {
        ecx = r15d;
    }
    if (al == 0) {
        ecx = edx;
    }
    goto label_3;
label_4:
    eax = *((rsp + 8));
    ecx = 0x4288da2f;
    if (al != 0) {
        ecx = r14d;
    }
    do {
label_5:
        eax = ecx;
        if (eax > 0x167eb125) {
            goto label_18;
        }
        ecx = 0xeac824b;
    } while (eax == 0xb99003e9);
    if (eax == 0xcc87e77e) {
        goto label_4;
    }
    if (eax != 0xeac824b) {
        goto label_19;
    }
    *((rsp + 0xc)) = edi;
    r14b = (rdi != 0) ? 1 : 0;
    r13d = r10d;
    r15d = esi;
    rax = malloc (*((rsp + 0x18)));
    r11d = 0x6fa48656;
    r8d = 0xe5768f03;
    esi = r15d;
    r15d = 0xeac824b;
    edi = *((rsp + 0xc));
    r9d = 0xb99003e9;
    r10d = r13d;
    r13 = 0x7fffffffffffffff;
    *((rsp + 0x10)) = rax;
    al = (*((rsp + 0x10)) == 0) ? 1 : 0;
    al ^= r14b;
    al = ~al;
    al &= r14b;
    r14d = 0x167eb126;
    *((rsp + 8)) = al;
    ecx = r12d;
    goto label_5;
label_18:
    if (eax != 0x4288da2f) {
        if (eax != 0x748f5c0c) {
            goto label_20;
        }
        eax = *((rsp + 6));
        ecx = *((rsp + 7));
        edx = eax;
        dl ^= cl;
        ecx = 0xb99003e9;
        if (cl != 0) {
            ecx = r15d;
        }
        if (al == 0) {
            ecx = r9d;
        }
        if (dl != 0) {
            ecx = r15d;
        }
        goto label_5;
label_16:
        rax = *((rsp + 0x10));
        eax = 0x68ca93e4;
        goto label_0;
    }
    rax = *((rsp + 0x10));
    *((rsp + 0x30)) = rax;
    eax = edi;
    goto label_0;
label_8:
    eax = ecx;
    if (ecx != 0xe5768f03) {
        goto label_0;
    }
    xalloc_die ();
label_12:
    rax = *((rsp + 0x30));
    return rax;
label_17:
    if (eax != 0x167eb126) {
label_15:
label_20:
        if (eax == 0x167eb126) {
            goto label_21;
        }
INVALID_JUMP;
    }
    xalloc_die ();
label_21:
    rax = xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4159a0 */
#include <stdint.h>
 
uint64_t xmalloc (int64_t arg_5h, int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, size_t size) {
    int64_t var_4h;
    int64_t var_5h_2;
    int64_t var_6h_3;
    int64_t var_7h_2;
    int64_t var_8h_3;
    int64_t var_10h_2;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_6h_2;
    int64_t var_7h;
    int64_t var_8h_2;
    int64_t var_10h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h_3;
    void * var_8h;
    rdi = size;
    r12 = rdi;
    eax = x_1;
    ecx = y_2;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    eax = 0xb99003e9;
    if (ecx != 0xa) {
        eax = ebp;
    }
    *(rsp + 5) = (edx == 0xffffffff) ? 1 : 0;
    if (edx != 0xffffffff) {
    }
    *(rsp + 6) = (ecx < 0xa) ? 1 : 0;
    if (ecx >= 0xa) {
    }
    ecx = 0x748f5c0c;
    r14d = 0x167eb126;
    r15d = 0xeac824b;
    goto label_1;
label_0:
    eax = *((rsp + 7));
    ecx = 0x4288da2f;
    if (al != 0) {
        ecx = r14d;
    }
    do {
label_1:
        eax = ecx;
        if (eax > 0x167eb125) {
            goto label_2;
        }
        ecx = 0xeac824b;
    } while (eax == 0xb99003e9);
    if (eax == 0xcc87e77e) {
        goto label_0;
    }
    if (eax == 0xeac824b) {
        bl = (r12 != 0) ? 1 : 0;
        rax = malloc (r12);
        *((rsp + 8)) = rax;
        al = (*((rsp + 8)) == 0) ? 1 : 0;
        al ^= bl;
        al = ~al;
        al &= bl;
        *((rsp + 7)) = al;
        ecx = ebp;
        goto label_1;
label_2:
        if (eax != 0x4288da2f) {
            if (eax != 0x748f5c0c) {
                goto label_3;
            }
            eax = *((rsp + 5));
            ecx = *((rsp + 6));
            edx = eax;
            dl ^= cl;
            edx = 0xb99003e9;
            if (eax != 0x748f5c0c) {
                edx = r15d;
            }
            ecx = edx;
            if (cl != 0) {
                ecx = r15d;
            }
            if (al == 0) {
                ecx = edx;
            }
            goto label_1;
        }
        rax = *((rsp + 8));
        return rax;
label_3:
        if (eax == 0x167eb126) {
            goto label_4;
        }
    }
label_4:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x415ad0 */
#include <stdint.h>
 
void dbg_xnrealloc (int64_t arg_5h, int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, int64_t arg3, size_t n, void * p, size_t s) {
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h_3;
    int64_t var_7h_2;
    int64_t var_8h_2;
    int64_t var_10h_2;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_5h_2;
    int64_t var_6h_2;
    rdx = arg3;
    rsi = n;
    rdi = p;
    rcx = s;
    /* void * xnrealloc(void * p,size_t n,size_t s); */
    rcx = rdx;
    rax = 0x7fffffffffffffff;
    edx = 0;
    rax = rdx_rax / rcx;
    rdx = rdx_rax % rcx;
    *(rsp) = rax;
    edx = 0xc5f0cb9d;
    eax = 0xf0be6b5d;
    while (edx == 0x45f0cb9d) {
        rdx = *(rsp);
        edx = 0xb68205c9;
        if (rdx < rsi) {
            edx = eax;
        }
        edx &= 0x7fffffff;
        if (edx == 0x368205c9) {
            goto label_0;
        }
    }
    if (edx != 0x70be6b5d) {
label_0:
        rcx *= rsi;
        rsi = rcx;
invalid_funccall(); //        void (*0x415b50)() ();
    }
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x415b50 */
#include <stdint.h>
 
uint64_t dbg_xrealloc (int64_t arg5, int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, int64_t arg1, int64_t arg2, size_t n, void * p) {
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h_3;
    int64_t var_7h_2;
    int64_t var_8h_2;
    int64_t var_10h_2;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_6h;
    int64_t var_7h;
    void * var_8h;
    int64_t var_10h;
    int64_t var_5h_2;
    int64_t var_6h_2;
    rdi = arg1;
    rsi = arg2;
    r14 = n;
    r13 = p;
    /* void * xrealloc(void * p,size_t n); */
    r14 = rsi;
    *(rsp + 6) = (r14 == 0) ? 1 : 0;
    r13 = rdi;
    *(rsp + 7) = (r13 != 0) ? 1 : 0;
    eax = 0x4871ef24;
    ebx = 0x3841a5af;
    r15d = 0x968c35b2;
    if (eax <= 0x21aa27ed) {
        goto label_1;
    }
    goto label_3;
label_2:
    eax = 0x968c35b2;
label_0:
    if (eax > 0x21aa27ed) {
        goto label_3;
    }
    do {
label_1:
        if (eax > 0xcea08a99) {
            goto label_4;
        }
        if (eax == 0x968c35b2) {
            goto label_5;
        }
        if (eax != 0xc42ab532) {
            goto label_6;
        }
        free (r13);
        eax = 0xf0c42e77;
        r12d = 0;
    } while (eax <= 0x21aa27ed);
    goto label_3;
label_4:
    if (eax == 0xcea08a9a) {
        goto label_7;
    }
    if (eax != 0xf0c42e77) {
        goto label_0;
    }
    *((rsp + 0x10)) = r12;
    eax = x_5;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x3841a5af;
    if (ecx == 0xffffffff) {
        eax = r15d;
    }
    dl = (*(obj_y_6) < 0xa) ? 1 : 0;
    if (*(obj_y_6) >= 0xa) {
        eax = ebx;
    }
    dl ^= cl;
    if (*(obj_y_6) != 0xa) {
        eax = r15d;
    }
    if (eax <= 0x21aa27ed) {
        goto label_1;
    }
    goto label_3;
label_5:
    eax = x_5;
    ecx = y_6;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    ebx = 0x3841a5af;
    esi = 0x3841a5af;
    if (ecx != 0xa) {
        esi = ebp;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = ebp;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0x21aa27ed) {
        goto label_1;
    }
    goto label_3;
label_7:
    rax = realloc (r13, r14);
    *((rsp + 8)) = rax;
    cl = (*((rsp + 8)) == 0) ? 1 : 0;
    dl = (r14 != 0) ? 1 : 0;
    eax = 0x21aa27ee;
    esi = 0xc0526602;
    if (r14 != 0) {
        eax = esi;
    }
    dl ^= cl;
    ecx = 0x21aa27ee;
    if (r14 != 0) {
        eax = ecx;
    }
    if (eax <= 0x21aa27ed) {
        goto label_1;
    }
    goto label_3;
label_6:
    if (eax != 0xc0526602) {
        goto label_0;
    }
    goto label_8;
label_3:
    if (eax > 0x4871ef23) {
        goto label_9;
    }
    if (eax == 0x21aa27ee) {
        goto label_10;
    }
    if (eax == 0x3841a5af) {
        goto label_2;
    }
    goto label_0;
label_9:
    if (eax == 0x612b1057) {
        goto label_11;
    }
    if (eax != 0x4871ef24) {
        goto label_0;
    }
    ecx = *((rsp + 6));
    eax = *((rsp + 7));
    eax = 0xcea08a9a;
    edx = 0xc42ab532;
    if (al != 0) {
        eax = edx;
    }
    ecx = 0xcea08a9a;
    if (cl == 0) {
        eax = ecx;
    }
    if (eax <= 0x21aa27ed) {
        goto label_1;
    }
    goto label_3;
label_10:
    eax = 0xf0c42e77;
    r12 = *((rsp + 8));
    if (eax <= 0x21aa27ed) {
        goto label_1;
    }
    goto label_3;
label_11:
    rax = *((rsp + 0x10));
    return rax;
label_8:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x415d90 */
#include <stdint.h>
 
int64_t dbg_x2nrealloc (int64_t arg_5h, int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, int64_t arg3, size_t n, void * p, size_t * pn, size_t s) {
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h_3;
    int64_t var_7h_2;
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_6h_2;
    int64_t var_7h;
    int64_t var_28h;
    int64_t var_10h_2;
    int64_t var_5h_2;
    int64_t var_6h;
    rdx = arg3;
    r8 = n;
    rdi = p;
    rsi = pn;
    r14 = s;
    /* void * x2nrealloc(void * p,size_t * pn,size_t s); */
    r14 = rdx;
    eax = x_7;
    edx = y_8;
    ebp = -ebp;
    ebp = ~ebp;
    ebp *= eax;
    eax = ebp;
    eax ^= 0xfffffffe;
    al = ((eax & ebp) == 0) ? 1 : 0;
    *(rsp + 4) = ((eax & ebp) == 0) ? 1 : 0;
    dl = (edx < 0xa) ? 1 : 0;
    *(rsp + 5) = (edx < 0xa) ? 1 : 0;
    ebx = edx;
    bl &= al;
    dl ^= al;
    r10d = 0;
    r10b = (r14 > 0x80) ? 1 : 0;
    dl |= bl;
    eax = 0x9915e8d6;
    if (dl == 0) {
    }
    r15d = 0x7031f04e;
    eax = 0x10d6a713;
    if (dl == 0) {
        r15d = eax;
    }
    ebx = 0x9eb83f51;
    if (dl == 0) {
        ebx = eax;
    }
    ecx = 0x321092fe;
    eax = 0xcb41bb7f;
    if (dl == 0) {
        ecx = eax;
    }
    r11d = 0x68204252;
    if (dl == 0) {
        r11d = eax;
    }
    r12d = 0x45175125;
    eax = 0x8f855cab;
    if (dl == 0) {
        r12d = eax;
    }
    r13d = 0xe38571c;
    if (dl == 0) {
        r13d = eax;
    }
    eax = 0x968e43db;
    r9 = 0x5555555555555554;
    r10 = -r10;
    goto label_3;
label_2:
    eax = 0x4e0c8af5;
    rdx = *((rsp + 0x28));
label_3:
    *((rsp + 0x10)) = rdx;
    goto label_0;
label_1:
    rax = *((rsp + 8));
    rax = *((rsp + 8));
    rax = *((rsp + 8));
    eax = 0x45175125;
    do {
label_0:
        edx = eax;
        if (edx <= 0xcb41bb7e) {
            goto label_4;
        }
        if (edx <= 0x4497c0bc) {
            goto label_5;
        }
        if (edx <= 0x534d9cad) {
            goto label_6;
        }
        eax = r15d;
    } while (edx == 0x534d9cae);
    if (edx == 0x68204252) {
        goto label_7;
    }
    eax = edx;
    if (edx != 0x7031f04e) {
        goto label_0;
    }
    eax = 0x80;
    edx = 0;
    rax = rdx_rax / r14;
    rdx = rdx_rax % r14;
    rax -= r10;
    *((rsp + 0x28)) = rax;
    eax = ebx;
    goto label_0;
label_4:
    if (edx <= 0xa2cf4be9) {
        goto label_8;
    }
    if (edx <= 0xb07fbdb5) {
        goto label_9;
    }
    if (edx == 0xb07fbdb6) {
        goto label_10;
    }
    eax = r12d;
    if (edx == 0xbe49256e) {
        goto label_0;
    }
    eax = edx;
    if (edx == 0xc04e6c4d) {
        goto label_11;
    }
    goto label_0;
label_5:
    if (edx <= 0x10d6a712) {
        goto label_12;
    }
    if (edx == 0x10d6a713) {
        goto label_13;
    }
    if (edx == 0x321092fe) {
        goto label_14;
    }
    eax = edx;
    if (edx != 0x34e403c5) {
        goto label_0;
    }
    eax = *((rsp + 6));
    eax = 0xc04e6c4d;
    edx = 0xa2cf4bea;
    if (al != 0) {
        eax = edx;
    }
    goto label_0;
label_8:
    if (edx > 0x9915e8d5) {
        goto label_15;
    }
    if (edx == 0x8f855cab) {
        goto label_1;
    }
    if (edx != 0x968e43db) {
        goto label_16;
    }
    *((rsp + 0x18)) = rdi;
    rdi = rsi;
    *((rsp + 0x20)) = r8;
    esi = r13d;
    r13d = r11d;
    r11d = *((rsp + 4));
    eax = *((rsp + 5));
    edx = r11d;
    dl ^= al;
    edx = 0x9915e8d6;
    r8d = 0xb07fbdb6;
    if (edx != 0x968e43db) {
        edx = r8d;
    }
    r8d = 0xb07fbdb6;
    eax = edx;
    if (al != 0) {
        eax = r8d;
    }
    r11d = r13d;
    r13d = esi;
    r8 = *((rsp + 0x20));
    rsi = rdi;
    rdi = *((rsp + 0x18));
    if (r11b == 0) {
        eax = edx;
    }
    goto label_0;
label_6:
    if (edx == 0x45175125) {
        goto label_17;
    }
    if (edx != 0x4e0c8af5) {
        goto label_18;
    }
    edx = 0;
    rax = 0x7fffffffffffffff;
    rax = rdx_rax / r14;
    rdx = rdx_rax % r14;
    r8 = *((rsp + 0x10));
    eax = 0xab168113;
    edx = 0x8043b150;
    if (rax < r8) {
        eax = edx;
    }
    goto label_0;
label_9:
    eax = ecx;
    if (edx == 0xa2cf4bea) {
        goto label_0;
    }
    eax = edx;
    if (edx == 0xab168113) {
        goto label_19;
    }
    goto label_0;
label_12:
    if (edx == 0xcb41bb7f) {
        goto label_20;
    }
    eax = edx;
    if (edx != 0xe38571c) {
        goto label_0;
    }
    eax = 0xab168113;
    r8 = *((rsp + 0x30));
    goto label_0;
label_15:
    if (edx == 0x9915e8d6) {
        goto label_21;
    }
    eax = edx;
    if (edx == 0x9eb83f51) {
        goto label_2;
    }
    goto label_0;
label_7:
    eax = *((rsp + 7));
    eax = 0xbe49256e;
    edx = 0x4497c0bd;
    if (al != 0) {
        eax = edx;
    }
    goto label_0;
label_10:
    rax = *(rsi);
    *((rsp + 8)) = rax;
    *(rsp + 6) = (rdi != 0) ? 1 : 0;
    eax = ebp;
    goto label_0;
label_13:
    eax = 0x7031f04e;
    goto label_0;
label_14:
    edx = 0;
    rax = r9;
    rax = rdx_rax / r14;
    rdx = rdx_rax % r14;
    *(rsp + 7) = (rax <= *((rsp + 8))) ? 1 : 0;
    eax = r11d;
    goto label_0;
label_17:
    rax = *((rsp + 8));
    rax >>= 1;
    rdx = *((rsp + 8));
    rax = rax + rdx + 1;
    *((rsp + 0x30)) = rax;
    eax = r13d;
    goto label_0;
label_20:
    rax = *((rsp + 8));
    eax = 0x321092fe;
    goto label_0;
label_21:
    eax = 0xb07fbdb6;
    goto label_0;
label_16:
    eax = edx;
    if (edx != 0x8043b150) {
        goto label_0;
    }
    goto label_22;
label_18:
    eax = edx;
    if (edx != 0x4497c0bd) {
        goto label_0;
    }
    goto label_23;
label_11:
    eax = 0x534d9cae;
    edx = 0x4e0c8af5;
    if (*((rsp + 8)) != 0) {
        eax = edx;
    }
    rdx = *((rsp + 8));
    goto label_3;
label_19:
    *(rsi) = r8;
    r14 *= r8;
    rsi = r14;
invalid_funccall(); //    void (*0x415b50)() ();
label_22:
    xalloc_die ();
label_23:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x4161b0 */
#include <stdint.h>
 
uint64_t dbg_xcharalloc (int64_t arg_5h, int64_t arg_6h, int64_t arg_7h, void * arg_8h, int64_t arg1, size_t n, void * p) {
    int64_t var_4h;
    int64_t var_5h_2;
    int64_t var_6h_3;
    int64_t var_7h_2;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_6h_2;
    int64_t var_7h;
    int64_t var_28h;
    int64_t var_10h_2;
    int64_t var_5h;
    int64_t var_6h;
    rdi = arg1;
    rbx = n;
    rax = p;
    /* char * xcharalloc(size_t n); */
    rbx = rdi;
    eax = x_1;
    ecx = y_2;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 5) = (edx == 0xffffffff) ? 1 : 0;
    edx = 0xcc87e77e;
    r14d = 0xb99003e9;
    if (edx == 0xffffffff) {
    }
    cl = (ecx < 0xa) ? 1 : 0;
    *(rsp + 6) = (ecx < 0xa) ? 1 : 0;
    if (ecx >= 0xa) {
    }
    cl ^= al;
    if (ecx != 0xa) {
    }
    eax = 0x748f5c0c;
    r15d = 0x167eb126;
    r12d = 0xeac824b;
    goto label_1;
label_0:
    eax = *((rsp + 7));
    eax = 0x4288da2f;
    if (al != 0) {
        eax = r15d;
    }
    do {
label_1:
        ecx = eax;
        if (ecx > 0x167eb125) {
            goto label_2;
        }
        eax = 0xeac824b;
    } while (ecx == 0xb99003e9);
    if (ecx == 0xcc87e77e) {
        goto label_0;
    }
    if (ecx == 0xeac824b) {
        rax = malloc (rbx);
        *((rsp + 8)) = rax;
        al = (rbx == 0) ? 1 : 0;
        cl = (*((rsp + 8)) != 0) ? 1 : 0;
        cl |= al;
        cl ^= 1;
        *((rsp + 7)) = cl;
        eax = ebp;
        goto label_1;
label_2:
        if (ecx != 0x4288da2f) {
            if (ecx != 0x748f5c0c) {
                goto label_3;
            }
            ecx = *((rsp + 5));
            eax = *((rsp + 6));
            edx = ecx;
            dl ^= al;
            eax = 0xb99003e9;
            if (al != 0) {
                eax = r12d;
            }
            if (cl == 0) {
                eax = r14d;
            }
            if (dl != 0) {
                eax = r12d;
            }
            goto label_1;
        }
        rax = *((rsp + 8));
        return rax;
label_3:
        if (ecx == 0x167eb126) {
            goto label_4;
        }
    }
label_4:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x416300 */
#include <stdint.h>
 
void dbg_x2realloc (int64_t arg_5h, int64_t arg_6h, int64_t arg_7h, int64_t arg_8h, int64_t arg5, void * p, size_t * pn) {
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h_3;
    int64_t var_7h_2;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_6h_2;
    int64_t var_7h;
    int64_t var_28h;
    int64_t var_10h_2;
    int64_t var_5h_2;
    int64_t var_6h;
    r8 = arg5;
    rdi = p;
    rsi = pn;
    /* void * x2realloc(void * p,size_t * pn); */
    edx = 1;
invalid_funccall(); //    return void (*0x415d90)() ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x416310 */
#include <stdint.h>
 
uint64_t dbg_xzalloc (int64_t arg_dh, int64_t arg_eh, int64_t arg_fh, int64_t arg_10h, int64_t arg1, void * p) {
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_dh_2;
    int64_t var_eh_2;
    int64_t var_fh;
    int64_t var_10h_2;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh_2;
    void * s;
    rdi = arg1;
    rax = p;
    /* void * xzalloc(size_t s); */
    r14 = rdi;
    eax = x_1;
    ecx = y_2;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    *(rsp + 0xd) = (eax == 0) ? 1 : 0;
    dl = (eax == 0) ? 1 : 0;
    eax = 0xcc87e77e;
    esi = 0xb99003e9;
    ebx = 0xb99003e9;
    if (eax == 0) {
        ebx = eax;
    }
    cl = (ecx < 0xa) ? 1 : 0;
    *(rsp + 0xe) = (ecx < 0xa) ? 1 : 0;
    if (ecx >= 0xa) {
        ebx = esi;
    }
    cl ^= dl;
    if (ecx != 0xa) {
        ebx = eax;
    }
    ecx = 0x748f5c0c;
    r15d = 0x167eb126;
    goto label_1;
label_0:
    eax = *((rsp + 0xf));
    ecx = 0x4288da2f;
    if (al != 0) {
        ecx = r15d;
    }
    do {
label_1:
        eax = ecx;
        if (eax > 0x167eb125) {
            goto label_2;
        }
        ecx = 0xeac824b;
    } while (eax == 0xb99003e9);
    if (eax == 0xcc87e77e) {
        goto label_0;
    }
    if (eax == 0xeac824b) {
        rax = malloc (r14);
        *((rsp + 0x10)) = rax;
        al = (r14 == 0) ? 1 : 0;
        cl = (*((rsp + 0x10)) != 0) ? 1 : 0;
        cl |= al;
        cl ^= 1;
        *((rsp + 0xf)) = cl;
        ecx = ebx;
        goto label_1;
label_2:
        if (eax != 0x4288da2f) {
            if (eax != 0x748f5c0c) {
                goto label_3;
            }
            eax = *((rsp + 0xd));
            ecx = *((rsp + 0xe));
            edx = eax;
            dl ^= cl;
            edx = 0xb99003e9;
            if (eax != 0x748f5c0c) {
                edx = ebp;
            }
            ecx = edx;
            if (cl != 0) {
                ecx = ebp;
            }
            if (al == 0) {
                ecx = edx;
            }
            goto label_1;
        }
        rbx = *((rsp + 0x10));
        memset (rbx, 0, r14);
        rax = rbx;
        return rax;
label_3:
        if (eax == 0x167eb126) {
            goto label_4;
        }
    }
label_4:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x416450 */
#include <stdint.h>
 
uint64_t dbg_xcalloc (int64_t arg_dh, int64_t arg_eh, int64_t arg_fh, void * arg_10h, int64_t arg1, int64_t arg2, size_t n, void * p, size_t s) {
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    int64_t var_10h;
    rdi = arg1;
    rsi = arg2;
    r12 = n;
    rax = p;
    r14 = s;
    /* void * xcalloc(size_t n,size_t s); */
    r14 = rsi;
    r12 = rdi;
    eax = x_15;
    ecx = y_16;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 0xd) = (edx == 0xffffffff) ? 1 : 0;
    cl = (ecx < 0xa) ? 1 : 0;
    *(rsp + 0xe) = (ecx < 0xa) ? 1 : 0;
    edx = ecx;
    dl &= al;
    cl ^= al;
    cl |= dl;
    eax = 0xc77601a1;
    if (cl == 0) {
    }
    eax = 0x34e098b0;
    ebx = 0x2d3f59e8;
    if (cl != 0) {
        ebx = eax;
    }
    ecx = 0x33f61001;
    esi = 0xd08784a6;
    r15 = 0x7fffffffffffffff;
    r13d = 0xddba4ee9;
    while (eax == 0xc77601a1) {
        ecx = 0xddba4ee9;
label_0:
        eax = ecx;
        if (eax > 0x2d3f59e7) {
            goto label_1;
        }
        if (eax > 0xd08784a5) {
            goto label_2;
        }
        if (eax == 0x8ecc9cf0) {
            goto label_3;
        }
    }
    goto label_4;
label_1:
    if (eax <= 0x501a4daf) {
        goto label_5;
    }
    if (eax == 0x501a4db0) {
        goto label_6;
    }
    if (eax != 0x64abcc2e) {
        goto label_4;
    }
    rax = calloc (r12, r14);
    edx = 0x501a4db0;
    esi = 0xd08784a6;
    *((rsp + 0x10)) = rax;
    ecx = 0xd08784a6;
    if (*((rsp + 0x10)) != 0) {
        ecx = edx;
    }
    goto label_0;
label_2:
    ecx = ebx;
    if (eax == 0xd08784a6) {
        goto label_0;
    }
    if (eax == 0xddba4ee9) {
        edx = 0;
        rax = r15;
        rax = rdx_rax / r14;
        rdx = rdx_rax % r14;
        al = (rax < r12) ? 1 : 0;
        *((rsp + 0xf)) = al;
        ecx = ebp;
        goto label_0;
label_5:
        if (eax == 0x33f61001) {
            eax = *((rsp + 0xd));
            ecx = *((rsp + 0xe));
            edx = eax;
            dl ^= cl;
            edx = 0xc77601a1;
            if (eax != 0x33f61001) {
                edx = r13d;
            }
            ecx = edx;
            if (cl != 0) {
                ecx = r13d;
            }
            if (al == 0) {
                ecx = edx;
            }
            goto label_0;
label_3:
            eax = *((rsp + 0xf));
            ecx = 0x64abcc2e;
            if (al != 0) {
                ecx = esi;
            }
            goto label_0;
label_6:
            rax = *((rsp + 0x10));
            return rax;
        }
        if (eax == 0x2d3f59e8) {
            goto label_7;
        }
        if (eax == 0x34e098b0) {
            goto label_8;
        }
    }
label_4:
label_7:
    xalloc_die ();
label_8:
    rax = xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x416610 */
#include <stdint.h>
 
uint64_t xmemdup (int64_t arg1, int64_t arg2) {
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    void * s1;
    rdi = arg1;
    rsi = arg2;
    r15 = rsi;
    r14 = rdi;
    eax = x_1;
    ecx = y_2;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    *(rsp + 0xd) = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    ebx = 0xcc87e77e;
    r12d = 0xb99003e9;
    edx = 0xb99003e9;
    if (ecx != 0xa) {
        edx = ebx;
    }
    if (eax != 0) {
        ebx = edx;
    }
    *(rsp + 0xe) = (ecx < 0xa) ? 1 : 0;
    if (ecx >= 0xa) {
        ebx = edx;
    }
    eax = 0x748f5c0c;
    r13d = 0x167eb126;
    goto label_1;
label_0:
    eax = *((rsp + 0xf));
    eax = 0x4288da2f;
    if (al != 0) {
        eax = r13d;
    }
    do {
label_1:
        ecx = eax;
        if (ecx > 0x167eb125) {
            goto label_2;
        }
        eax = 0xeac824b;
    } while (ecx == 0xb99003e9);
    if (ecx == 0xcc87e77e) {
        goto label_0;
    }
    if (ecx == 0xeac824b) {
        rax = malloc (r15);
        *((rsp + 0x10)) = rax;
        al = (r15 == 0) ? 1 : 0;
        cl = (*((rsp + 0x10)) != 0) ? 1 : 0;
        cl |= al;
        cl ^= 1;
        *((rsp + 0xf)) = cl;
        eax = ebx;
        goto label_1;
label_2:
        if (ecx != 0x4288da2f) {
            if (ecx != 0x748f5c0c) {
                goto label_3;
            }
            ecx = *((rsp + 0xd));
            eax = *((rsp + 0xe));
            edx = ecx;
            dl ^= al;
            eax = 0xb99003e9;
            if (al != 0) {
                eax = ebp;
            }
            if (cl == 0) {
                eax = r12d;
            }
            if (dl != 0) {
                eax = ebp;
            }
            goto label_1;
        }
        rbx = *((rsp + 0x10));
        memcpy (*((rsp + 0x10)), r14, r15);
        rax = rbx;
        return rax;
label_3:
        if (ecx == 0x167eb126) {
            goto label_4;
        }
    }
label_4:
    xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x416780 */
#include <stdint.h>
 
uint64_t dbg_xstrdup (int64_t arg1, size_t n, void * p, char const * string) {
    int64_t var_3h;
    int64_t var_4h;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    void * s1;
    int64_t var_10h;
    rdi = arg1;
    rbx = n;
    rax = p;
    r14 = string;
    /* char * xstrdup(char const * string); */
    r14 = rdi;
    eax = x_19;
    ecx = y_20;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    *(rsp + 6) = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 7) = (ecx < 0xa) ? 1 : 0;
    eax = 0xf04d59c1;
    r15 = 0x3297321c0736f960;
    r12d = 0xcc87e77e;
    goto label_6;
label_5:
    rbx = *((rsp + 8));
    memcpy (*((rsp + 8)), r14, r15);
    *((rsp + 0x10)) = rbx;
    eax = x_19;
    ecx = x_19;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0xc912b7c4;
    edi = 0xfb27fec;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj_y_20) < 0xa) ? 1 : 0;
    esi = 0xc912b7c4;
    if (*(obj_y_20) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj_y_20) != 0xa) {
        eax = edi;
    }
    r15 = r13;
label_6:
    r13d = 0xb99003e9;
    if (eax <= 0xfb27feb) {
        goto label_2;
    }
    goto label_7;
    do {
        cl = *((rsp + 6));
        al = *((rsp + 7));
        edx = ecx;
        dl ^= al;
        edx = 0xc912b7c4;
        esi = 0x42ff5b85;
        if (eax != 0xfb27feb) {
            edx = esi;
        }
        eax = edx;
        if (al != 0) {
            eax = esi;
        }
        if (cl == 0) {
            eax = edx;
        }
        if (eax > 0xfb27feb) {
            goto label_7;
        }
label_2:
        if (eax == 0xc912b7c4) {
            goto label_8;
        }
    } while (eax == 0xf04d59c1);
    goto label_9;
label_8:
    strlen (r14);
    rbx = rax + r15 + 1;
    rbx -= r15;
    eax = x_1;
    ecx = y_2;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    *(rsp + 3) = (edx == 0xffffffff) ? 1 : 0;
    if (edx == 0xffffffff) {
    }
    cl = (ecx < 0xa) ? 1 : 0;
    *(rsp + 4) = (ecx < 0xa) ? 1 : 0;
    if (ecx >= 0xa) {
    }
    cl ^= al;
    if (ecx != 0xa) {
    }
    ecx = 0x748f5c0c;
    goto label_1;
label_0:
    eax = *((rsp + 5));
    ecx = 0x4288da2f;
    eax = 0x167eb126;
    if (al != 0) {
        ecx = eax;
    }
    do {
label_1:
        eax = ecx;
        if (eax > 0x167eb125) {
            goto label_10;
        }
        ecx = 0xeac824b;
    } while (eax == 0xb99003e9);
    if (eax == 0xcc87e77e) {
        goto label_0;
    }
    if (eax != 0xeac824b) {
        goto label_11;
    }
    rax = malloc (rbx);
    *((rsp + 8)) = rax;
    al = (rbx == 0) ? 1 : 0;
    cl = (*((rsp + 8)) != 0) ? 1 : 0;
    cl |= al;
    cl ^= 1;
    *((rsp + 5)) = cl;
    ecx = ebp;
    goto label_1;
label_10:
    if (eax != 0x4288da2f) {
        if (eax != 0x748f5c0c) {
            goto label_12;
        }
        eax = *((rsp + 3));
        ecx = *((rsp + 4));
        edx = eax;
        dl ^= cl;
        edx = 0xb99003e9;
        esi = 0xeac824b;
        if (eax != 0x748f5c0c) {
            edx = esi;
        }
        ecx = edx;
        if (cl != 0) {
            ecx = esi;
        }
        if (al == 0) {
            ecx = edx;
        }
        goto label_1;
    }
    memcpy (*((rsp + 8)), r14, rbx);
    eax = 0x42ff5b85;
    if (eax <= 0xfb27feb) {
        goto label_2;
    }
label_7:
    if (eax != 0x42ff5b85) {
        goto label_13;
    }
    r13 = r15;
    strlen (r14);
    ecx = x_1;
    edx = y_2;
    esi = rcx - 1;
    esi *= ecx;
    esi = ~esi;
    esi |= 0xfffffffe;
    cl = (esi == 0xffffffff) ? 1 : 0;
    bl = (edx < 0xa) ? 1 : 0;
    bl ^= cl;
    ecx = 0xb99003e9;
    if (edx != 0xa) {
        ecx = r12d;
    }
    *(rsp + 3) = (esi == 0xffffffff) ? 1 : 0;
    ebx = ecx;
    if (esi == 0xffffffff) {
        ebx = r12d;
    }
    *(rsp + 4) = (edx < 0xa) ? 1 : 0;
    rdx = 0x1f4bd1ec07ea3d18;
    r15 = rax + rdx + 1;
    if (edx >= 0xa) {
        ebx = ecx;
    }
    r15 -= rdx;
    ecx = 0x748f5c0c;
    goto label_4;
label_3:
    eax = *((rsp + 5));
    ecx = 0x4288da2f;
    eax = 0x167eb126;
    if (al != 0) {
        ecx = eax;
    }
    do {
label_4:
        eax = ecx;
        if (eax > 0x167eb125) {
            goto label_14;
        }
        ecx = 0xeac824b;
    } while (eax == 0xb99003e9);
    if (eax == 0xcc87e77e) {
        goto label_3;
    }
    if (eax != 0xeac824b) {
        goto label_15;
    }
    bpl = (r15 != 0) ? 1 : 0;
    rax = malloc (r15);
    *((rsp + 8)) = rax;
    al = (*((rsp + 8)) == 0) ? 1 : 0;
    al ^= bpl;
    al = ~al;
    al &= bpl;
    *((rsp + 5)) = al;
    ecx = ebx;
    goto label_4;
label_14:
    if (eax == 0x4288da2f) {
        goto label_5;
    }
    if (eax == 0x748f5c0c) {
        eax = *((rsp + 3));
        ecx = *((rsp + 4));
        edx = eax;
        dl ^= cl;
        ecx = 0xb99003e9;
        esi = 0xeac824b;
        if (cl != 0) {
            ecx = esi;
        }
        eax = 0xb99003e9;
        if (al == 0) {
            ecx = eax;
        }
        if (dl != 0) {
            ecx = esi;
        }
        goto label_4;
label_12:
        if (eax == 0x167eb126) {
            goto label_16;
        }
INVALID_JUMP;
    }
    if (eax != 0x167eb126) {
label_15:
label_13:
        if (eax == 0xfb27fec) {
            rax = *((rsp + 0x10));
            return rax;
        }
INVALID_JUMP;
    }
    xalloc_die ();
label_16:
    rax = xalloc_die ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x416b30 */
#include <stdint.h>
 
uint64_t dbg_xalloc_die (void) {
    /* void xalloc_die(); */
    ebx = *(obj.exit_failure);
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (ebx, 0, 0x419355);
    return abort ();
}
/* r2dec pseudo code output */
/* nostrip @ 0x416b60 */
#include <stdint.h>
 
int64_t dbg_rpl_mbrtowc (wint_t arg1, char ** arg2, size_t arg3, mbstate_t * arg4, size_t ret) {
    mbstate_t * ps;
    size_t n;
    size_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    wchar_t * pwc;
    int64_t var_2bh;
    int64_t var_2ah;
    int64_t var_29h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = ret;
    /* size_t rpl_mbrtowc(wchar_t * pwc,char const * s,size_t n,mbstate_t * ps); */
    *((rbp - 0x60)) = rcx;
    *((rbp - 0x58)) = rdx;
    r15 = rsi;
    r14 = rdi;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    *(rbp - 0x29) = ((eax & edx) == 0) ? 1 : 0;
    *(rbp - 0x2a) = (ecx < 0xa) ? 1 : 0;
    eax = 0x6d5ca63a;
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_2:
    ecx = 0x6401cbef;
    if (eax != 0x4d56130d) {
        eax = ecx;
    }
    do {
label_1:
        if (eax > 0x4d56130d) {
            goto label_3;
        }
label_0:
        if (eax > 0x1e251a2c) {
            goto label_4;
        }
        if (eax > 0xfa6a4c2c) {
            goto label_5;
        }
        if (eax == 0xbc393543) {
            goto label_6;
        }
    } while (eax != 0xe2668029);
    eax = 0xfa6a4c2d;
    r13d = 1;
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_4:
    if (eax == 0x1e251a2d) {
        goto label_7;
    }
    if (eax == 0x367d1905) {
        goto label_8;
    }
    if (eax != 0x4668a530) {
        goto label_1;
    }
    eax = 0x367d1905;
    r12 = *((rbp - 0x40));
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_5:
    if (eax == 0xdf42ca5) {
        goto label_9;
    }
    if (eax != 0xfa6a4c2d) {
        goto label_1;
    }
    goto label_10;
label_6:
    rax = rsp;
    rax += 0xfffffffffffffff0;
    *((rbp - 0x40)) = rax;
    rax = *((rbp - 0x40));
    *((rbp - 0x48)) = rax;
    rax = *((rbp - 0x48));
    *(rbp - 0x2b) = (r14 != 0) ? 1 : 0;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0xdf42ca5;
    edi = 0x6d351bb1;
    if (ecx != 0xa) {
        esi = edi;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = edi;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_7:
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4d56130e;
    esi = 0x596d88bd;
    if (ecx != 0xa) {
        edx = esi;
    }
    eax = edx;
    if (eax == 0) {
        eax = esi;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_8:
    *((rbp - 0x38)) = r12;
    rbx = *((rbp - 0x58));
    rax = mbrtowc (*((rbp - 0x38)), r15, *((rbp - 0x58)), *((rbp - 0x60)));
    *((rbp - 0x50)) = rax;
    rax = *((rbp - 0x50));
    cl = (rax > 0xfffffffffffffffd) ? 1 : 0;
    dl = (rbx != 0) ? 1 : 0;
    eax = 0x6401cbef;
    esi = 0x7a71230b;
    if (rbx != 0) {
        eax = esi;
    }
    dl ^= cl;
    goto label_2;
label_9:
    eax = 0xbc393543;
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
label_3:
    if (eax > 0x6d351bb0) {
        goto label_11;
    }
    if (eax == 0x4d56130e) {
        goto label_12;
    }
    if (eax == 0x596d88bd) {
        goto label_13;
    }
    if (eax != 0x6401cbef) {
        goto label_1;
    }
    eax = 0xfa6a4c2d;
    r13 = *((rbp - 0x50));
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_11:
    if (eax == 0x6d351bb1) {
        goto label_14;
    }
    if (eax == 0x7a71230b) {
        goto label_15;
    }
    if (eax != 0x6d5ca63a) {
        goto label_1;
    }
    ecx = *((rbp - 0x29));
    eax = *((rbp - 0x2a));
    edx = ecx;
    dl ^= al;
    eax = 0xdf42ca5;
    esi = 0xbc393543;
    if (al != 0) {
        eax = esi;
    }
    ecx = 0xdf42ca5;
    if (cl == 0) {
        eax = ecx;
    }
    if (dl != 0) {
        eax = esi;
    }
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_12:
    eax = *(r15);
    rcx = *((rbp - 0x38));
    *(rcx) = eax;
    eax = 0x596d88bd;
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_13:
    eax = *(r15);
    rcx = *((rbp - 0x38));
    *(rcx) = eax;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x4d56130e;
    edi = 0xe2668029;
    if (ecx == 0xffffffff) {
        eax = edi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0x4d56130e;
    if (*(obj.y) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = edi;
    }
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_14:
    eax = *((rbp - 0x2b));
    eax = 0x4668a530;
    ecx = 0x367d1905;
    if (al != 0) {
        eax = ecx;
    }
    r12 = r14;
    if (eax <= 0x4d56130d) {
        goto label_0;
    }
    goto label_3;
label_15:
    al = hard_locale (0);
    eax = 0x1e251a2d;
    goto label_2;
label_10:
    rax = *((rbp - 0x48));
    rax = r13;
    rsp = rbp - 0x28;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x416ec0 */
#include <stdint.h>
 
int32_t dbg_c_strcasecmp (int64_t arg2, int32_t c, unsigned char const * p1, unsigned char const * p2) {
    rsi = arg2;
    rbx = c;
    rdi = p1;
    r15 = p2;
    /* int c_strcasecmp(char const * s1,char const * s2); */
    r15 = rsi;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    bl = (ecx < 0xa) ? 1 : 0;
    r11b = (edx == 0xffffffff) ? 1 : 0;
    r10b = (edx != 0xffffffff) ? 1 : 0;
    eax = ebx;
    al ^= r11b;
    r9d = 0xfcc54c71;
    eax = 0xb978c670;
    if (edx != 0xffffffff) {
        eax = r9d;
    }
    *(rsp - 0x28) = (edx == 0xffffffff) ? 1 : 0;
    if (edx != 0xffffffff) {
        r9d = eax;
    }
    *(rsp - 0x27) = (ecx < 0xa) ? 1 : 0;
    if (ecx >= 0xa) {
        r9d = eax;
    }
    al = (ecx > 9) ? 1 : 0;
    ecx = eax;
    cl |= r10b;
    r12d = 0xcad73c23;
    edx = 0xd0fcde82;
    ecx = 0xd0fcde82;
    if (cl != 0) {
        ecx = r12d;
    }
    if (cl == 0) {
        r12d = ebp;
    }
    bl ^= r11b;
    if (cl != 0) {
        ecx = edx;
    }
    al ^= r10b;
    if (cl != 0) {
        r12d = ebp;
    }
    ebx = 0x81bddf29;
    r10d = 0xe0353429;
    r11d = 0xd474a755;
    goto label_0;
label_1:
    rdx = *((rsp - 0x20));
    rdx = *((rsp - 0x18));
    edx = *((rsp - 0x29));
    edx = *((rsp - 0x24));
    ebx = 0xd0fcde82;
    do {
label_0:
        edx = ebx;
        if (edx > 0xe0353428) {
            goto label_2;
        }
        if (edx > 0xcad73c22) {
            goto label_3;
        }
        if (edx == 0x81bddf29) {
            goto label_4;
        }
        if (edx == 0xb43e5563) {
            goto label_5;
        }
        ebx = edx;
    } while (edx != 0xb978c670);
    ebx = 0xe0353429;
    goto label_0;
label_2:
    if (edx > 0x16881529) {
        goto label_6;
    }
    if (edx == 0xe0353429) {
        goto label_7;
    }
    if (edx == 0xfcc54c71) {
        goto label_8;
    }
    ebx = edx;
    if (edx != 0x155fe585) {
        goto label_0;
    }
    *((rsp - 0x20)) = r13;
    *((rsp - 0x18)) = r14;
    rdx = *((rsp - 0x20));
    ebp = *(rdx);
    ebx = ebp;
    ebx = -ebx;
    esi = 0xffffffbf;
    esi -= ebx;
    edx = 0x20;
    edx -= ebx;
    if (esi >= 0x1a) {
        edx = ebp;
    }
    rsi = *((rsp - 0x18));
    ebx = *(rsi);
    esi = ebx;
    esi += 0xffffffbf;
    if (esi < 0x1a) {
        bl += 0x20;
    }
    *((rsp - 0x29)) = bl;
    edx = (int32_t) dl;
    *((rsp - 0x24)) = edx;
    ebx = 0x1f68d386;
    edx = 0x1688152a;
    if (*((rsp - 0x24)) == 0) {
        ebx = edx;
    }
    goto label_0;
label_3:
    if (edx == 0xcad73c23) {
        goto label_1;
    }
    if (edx == 0xd0fcde82) {
        goto label_9;
    }
    ebx = edx;
    if (edx != 0xd474a755) {
        goto label_0;
    }
    ebx = 0x7ed6ba6d;
    eax = 0;
    goto label_0;
label_6:
    if (edx == 0x1688152a) {
        goto label_10;
    }
    ebx = ecx;
    if (edx == 0x1f68d386) {
        goto label_0;
    }
    ebx = edx;
    if (edx != 0x7ed6ba6d) {
        goto label_0;
    }
    goto label_11;
label_4:
    r8d = *((rsp - 0x28));
    ebx = *((rsp - 0x27));
    edx = r8d;
    dl ^= bl;
    ebx = 0xb978c670;
    if (bl != 0) {
        ebx = r10d;
    }
    esi = 0xb978c670;
    if (r8b == 0) {
        ebx = esi;
    }
    if (dl != 0) {
        ebx = r10d;
    }
    goto label_0;
label_5:
    edx = *((rsp - 0x25));
    ebx = 0x1688152a;
    edx = 0x155fe585;
    if (dl != 0) {
        ebx = edx;
    }
    r13 = *((rsp - 0x10));
    r14 = *((rsp - 8));
    goto label_0;
label_7:
    *(rsp - 0x26) = (rdi == r15) ? 1 : 0;
    ebx = r9d;
    goto label_0;
label_8:
    edx = *((rsp - 0x26));
    ebx = 0x155fe585;
    if (dl != 0) {
        ebx = r11d;
    }
    r13 = rdi;
    r14 = r15;
    goto label_0;
label_9:
    rdx = *((rsp - 0x20));
    rdx++;
    *((rsp - 0x10)) = rdx;
    rdx = *((rsp - 0x18));
    rdx++;
    *((rsp - 8)) = rdx;
    edx = *((rsp - 0x29));
    esi = *((rsp - 0x24));
    *(rsp - 0x25) = (esi == edx) ? 1 : 0;
    ebx = r12d;
    goto label_0;
label_10:
    edx = *((rsp - 0x29));
    eax = *((rsp - 0x24));
    eax -= edx;
    ebx = 0x7ed6ba6d;
    goto label_0;
label_11:
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4171a0 */
#include <stdint.h>
 
uint64_t dbg_close_stream (FILE * __stream, int64_t arg1) {
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    rbx = __stream;
    rdi = arg1;
    /* int close_stream(FILE * stream); */
    rbx = rdi;
    rax = fpending ();
    *(rsp + 6) = (rax != 0) ? 1 : 0;
    al = *((rsp + 6));
    eax = *(rbx);
    eax = ~eax;
    eax |= 0xffffffdf;
    *(rsp + 7) = (eax != 0xffffffff) ? 1 : 0;
    al = *((rsp + 7));
    eax = rpl_fclose (rbx);
    *(rsp + 5) = (eax != 0) ? 1 : 0;
    al = *((rsp + 5));
    eax = 0x81dfa085;
    r15d = 0x39f8b9e9;
    r13d = 0x292a65ff;
    r14d = 0xc239768;
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_3:
    eax = 0x39f8b9e9;
    do {
label_1:
        if (eax > 0x39f8b9e8) {
            goto label_2;
        }
label_0:
        if (eax > 0xd042747b) {
            goto label_4;
        }
        if (eax == 0x81dfa085) {
            goto label_5;
        }
        if (eax == 0xa00cd324) {
            goto label_6;
        }
    } while (eax != 0xb4b53cdf);
    eax = 0x447bd09d;
    r12d = 0;
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_4:
    if (eax == 0xd042747c) {
        goto label_7;
    }
    if (eax == 0xc239768) {
        goto label_8;
    }
    if (eax != 0x292a65ff) {
        goto label_1;
    }
    eax = *((rsp + 6));
    eax = 0xa00cd324;
    goto label_9;
label_5:
    eax = *((rsp + 7));
    eax = 0x7d40287d;
    goto label_9;
label_6:
    rax = errno_location ();
    eax = 0xb4b53cdf;
    if (*(rax) != 9) {
label_9:
        eax = ebp;
    }
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_7:
    eax = *((rsp + 5));
    eax = 0x7dcd1901;
    ecx = 0x5630b2df;
    if (al != 0) {
        eax = ecx;
    }
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_8:
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= dl;
    edx = 0x4bd3c678;
    if (ecx != 0xa) {
        edx = r15d;
    }
    eax = edx;
    if (eax == 0) {
        eax = r15d;
    }
    if (ecx >= 0xa) {
        eax = edx;
    }
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
label_2:
    if (eax <= 0x5630b2de) {
        goto label_10;
    }
    if (eax == 0x5630b2df) {
        goto label_11;
    }
    if (eax == 0x7d40287d) {
        goto label_12;
    }
    if (eax != 0x7dcd1901) {
        goto label_1;
    }
    errno_location ();
    *(rax) = 0;
    eax = 0x5630b2df;
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_10:
    if (eax == 0x39f8b9e9) {
        goto label_13;
    }
    if (eax == 0x4bd3c678) {
        goto label_3;
    }
    if (eax != 0x447bd09d) {
        goto label_1;
    }
    goto label_14;
label_11:
    eax = 0x447bd09d;
    r12d = 0xffffffff;
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_12:
    eax = *((rsp + 5));
    eax = 0xb4b53cdf;
    if (al != 0) {
        eax = r14d;
    }
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_13:
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x4bd3c678;
    if (ecx == 0xffffffff) {
        eax = r13d;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0x4bd3c678;
    if (*(obj.y) >= 0xa) {
        eax = esi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = r13d;
    }
    if (eax <= 0x39f8b9e8) {
        goto label_0;
    }
    goto label_2;
label_14:
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x417420 */
#include <stdint.h>
 
int64_t dbg_hard_locale (int64_t arg1, int32_t category, char const * p) {
    int64_t var_ch;
    int64_t var_dh;
    int64_t var_eh;
    int64_t var_fh;
    char * s1;
    rdi = arg1;
    r12 = category;
    rax = p;
    /* _Bool hard_locale(int category); */
    r12d = edi;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    *(rsp + 0xc) = (ecx == 0xffffffff) ? 1 : 0;
    eax = y;
    *(rsp + 0xd) = (eax < 0xa) ? 1 : 0;
    eax = 0x815a49dd;
    ebx = 0xfdcdbfb5;
    r13d = 0x7a3360af;
    r14d = 0xa6cd31a7;
    r15d = 0x7b90741d;
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_2:
    rax = *((rsp + 0x10));
    eax = 0xa6cd31a7;
    do {
label_1:
        if (eax > 0x466b0ecf) {
            goto label_3;
        }
label_0:
        if (eax <= 0xa6cd31a6) {
            goto label_4;
        }
        if (eax == 0xa6cd31a7) {
            goto label_5;
        }
        if (eax == 0xefa00d1b) {
            goto label_6;
        }
    } while (eax != 0xfdcdbfb5);
    eax = 0xa3397a2f;
    ebp = 0;
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_4:
    if (eax == 0x815a49dd) {
        goto label_7;
    }
    if (eax == 0x92b9c691) {
        goto label_8;
    }
    if (eax != 0xa3397a2f) {
        goto label_1;
    }
    goto label_9;
label_5:
    eax = strcmp (*((rsp + 0x10)), 0x419840);
    *(rsp + 0xf) = (eax == 0) ? 1 : 0;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x7a3360af;
    esi = 0xefa00d1b;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    if (*(obj.y) >= 0xa) {
        eax = r13d;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = esi;
    }
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_6:
    eax = *((rsp + 0xf));
    eax = 0x92b9c691;
    if (al != 0) {
        eax = ebx;
    }
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_7:
    ecx = *((rsp + 0xc));
    eax = *((rsp + 0xd));
    edx = ecx;
    dl ^= al;
    edx = 0x537e2a56;
    esi = 0x7558b799;
    if (eax != 0x466b0ecf) {
        edx = esi;
    }
    eax = edx;
    if (al != 0) {
        eax = esi;
    }
    if (cl == 0) {
        eax = edx;
    }
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_8:
    eax = strcmp (*((rsp + 0x10)), "POSIX");
    eax = 0xa3397a2f;
    if (eax == 0) {
        eax = ebx;
    }
    goto label_10;
label_3:
    if (eax <= 0x7558b798) {
        goto label_11;
    }
    if (eax == 0x7558b799) {
        goto label_12;
    }
    if (eax == 0x7a3360af) {
        goto label_2;
    }
    if (eax != 0x7b90741d) {
        goto label_1;
    }
    al = *((rsp + 0xe));
    eax = 0xa3397a2f;
    ecx = 0x466b0ed0;
    if (al != 0) {
        eax = ecx;
    }
label_10:
    bpl = 1;
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_11:
    if (eax == 0x466b0ed0) {
        goto label_13;
    }
    if (eax != 0x537e2a56) {
        goto label_1;
    }
    setlocale (r12d, 0);
    eax = 0x7558b799;
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_12:
    rax = setlocale (r12d, 0);
    *((rsp + 0x10)) = rax;
    *(rsp + 0xe) = (*((rsp + 0x10)) != 0) ? 1 : 0;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    ebx = 0xfdcdbfb5;
    esi = 0x537e2a56;
    if (ecx != 0xa) {
        esi = r15d;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = r15d;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_13:
    eax = x;
    ecx = x;
    ecx = -ecx;
    ecx = ~ecx;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x7a3360af;
    if (ecx == 0xffffffff) {
        eax = r14d;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    if (*(obj.y) >= 0xa) {
        eax = r13d;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = r14d;
    }
    if (eax <= 0x466b0ecf) {
        goto label_0;
    }
    goto label_3;
label_9:
    bpl &= 1;
    eax = ebp;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x417710 */
#include <stdint.h>
 
uint64_t dbg_locale_charset (char const * codeset) {
    int64_t var_6h;
    int64_t var_7h;
    char * var_8h;
    rax = codeset;
    /* char const * locale_charset(); */
    eax = x;
    ecx = y;
    edx = eax;
    edx = -edx;
    edx = ~edx;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    *(rsp + 6) = ((eax & edx) == 0) ? 1 : 0;
    *(rsp + 7) = (ecx < 0xa) ? 1 : 0;
    eax = 0xa82bd3e;
    r14d = 0x419096;
    r15d = "ASCII";
    r12d = 0xa08a35f1;
    ebx = 0xa37a7cec;
    if (eax > 0xa37a7ceb) {
        goto label_1;
    }
    goto label_2;
label_0:
    nl_langinfo (0xe);
    eax = 0x89267c0c;
    if (eax > 0xa37a7ceb) {
        goto label_1;
    }
    do {
label_2:
        if (eax != 0x89267c0c) {
            goto label_3;
        }
        rax = nl_langinfo (0xe);
        if (rax == 0) {
            rax = r14;
        }
        if (*(rax) == 0) {
            rax = r15;
        }
        *((rsp + 8)) = rax;
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx = ~ecx;
        ecx |= 0xfffffffe;
        cl = (ecx == 0xffffffff) ? 1 : 0;
        eax = 0xa37a7cec;
        if (ecx == 0xffffffff) {
            eax = r12d;
        }
        dl = (*(obj.y) < 0xa) ? 1 : 0;
        if (*(obj.y) >= 0xa) {
            eax = ebx;
        }
        dl ^= cl;
        if (*(obj.y) != 0xa) {
            eax = r12d;
        }
    } while (eax <= 0xa37a7ceb);
label_1:
    if (eax == 0xa37a7cec) {
        goto label_0;
    }
    if (eax != 0xa82bd3e) {
        goto label_4;
    }
    ecx = *((rsp + 6));
    eax = *((rsp + 7));
    edx = ecx;
    dl ^= al;
    eax = 0xa37a7cec;
    if (al != 0) {
        eax = ebp;
    }
    if (cl == 0) {
        eax = ebx;
    }
    if (dl != 0) {
        eax = ebp;
    }
    if (eax > 0xa37a7ceb) {
        goto label_1;
    }
    goto label_2;
label_3:
    if (eax == 0xa08a35f1) {
        rax = *((rsp + 8));
        return rax;
    }
INVALID_JUMP;
}
/* r2dec pseudo code output */
/* nostrip @ 0x417850 */
#include <stdint.h>
 
uint64_t dbg_rpl_fclose (int64_t arg1, int32_t fd, FILE * fp, int32_t result) {
    int64_t var_eh;
    int64_t var_fh;
    uint32_t var_10h;
    int64_t var_14h;
    rdi = arg1;
    rax = fd;
    r13 = fp;
    r15 = result;
    /* int rpl_fclose(FILE * fp); */
    r13 = rdi;
    eax = fileno (rdi);
    *((rsp + 0x14)) = eax;
    eax = 0x4fd7b5fd;
    ebx = 0x9bb2d3f8;
    r15d = 0xa380044b;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_2:
    dl ^= cl;
    if (eax != 0x479d88c) {
        eax = esi;
    }
    do {
label_1:
        if (eax > 0x479d88c) {
            goto label_3;
        }
label_0:
        if (eax > 0xacd3dbb7) {
            goto label_4;
        }
        if (eax > 0xa380044a) {
            goto label_5;
        }
        if (eax == 0x8b76a7ce) {
            goto label_6;
        }
    } while (eax != 0x9bb2d3f8);
    eax = fileno (r13);
    esi = 0;
    edx = 1;
    edi = eax;
    lseek ();
    eax = 0xacd3dbb8;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_4:
    if (eax > 0xb2b24ece) {
        goto label_7;
    }
    if (eax == 0xacd3dbb8) {
        goto label_8;
    }
    if (eax != 0xad65be9d) {
        goto label_1;
    }
    eax = rpl_fflush (r13);
    eax = 0xfd037386;
    ecx = 0xab144d7f;
    goto label_9;
label_5:
    if (eax == 0xa380044b) {
        goto label_10;
    }
    if (eax != 0xab144d7f) {
        goto label_1;
    }
    rax = errno_location ();
    r12d = *(rax);
    eax = 0xfd037386;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_7:
    if (eax == 0xb2b24ecf) {
        goto label_11;
    }
    if (eax != 0xfd037386) {
        goto label_1;
    }
    *((rsp + 0x10)) = r12d;
    eax = fclose (r13);
    eax = 0x5027b5ab;
    ecx = 0xb2b24ecf;
    goto label_12;
label_6:
    eax = fclose (r13);
    r14d = eax;
    eax = 0x479d88d;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_8:
    eax = fileno (r13);
    esi = 0;
    edx = 1;
    edi = eax;
    rax = lseek ();
    *(rsp + 0xf) = (rax != -1) ? 1 : 0;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x9bb2d3f8;
    esi = 0x520f1f8b;
    goto label_13;
label_10:
    eax = *((rsp + 0xe));
    eax = 0xad65be9d;
    ecx = 0x53ca0d44;
    if (al != 0) {
label_12:
        eax = ecx;
    }
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_11:
    errno_location ();
    ecx = *((rsp + 0x10));
    *(rax) = ecx;
    eax = 0x5027b5ab;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
label_3:
    if (eax <= 0x53ca0d43) {
        goto label_14;
    }
    if (eax > 0x5deac401) {
        goto label_15;
    }
    if (eax == 0x53ca0d44) {
        goto label_16;
    }
    if (eax != 0x5c15b693) {
        goto label_1;
    }
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x5deac402;
    esi = 0x5e008e78;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    edi = 0x5deac402;
    if (*(obj.y) >= 0xa) {
        eax = edi;
    }
    goto label_2;
label_14:
    if (eax <= 0x5027b5aa) {
        goto label_17;
    }
    if (eax == 0x5027b5ab) {
        goto label_18;
    }
    if (eax != 0x520f1f8b) {
        goto label_1;
    }
    al = *((rsp + 0xf));
    eax = 0xfd037386;
    ecx = 0xad65be9d;
    if (al != 0) {
label_9:
        eax = ecx;
    }
    r12d = 0;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_15:
    if (eax == 0x5deac402) {
        goto label_19;
    }
    if (eax != 0x5e008e78) {
        goto label_1;
    }
    rdi = r13;
    eax = freading ();
    *(rsp + 0xe) = (eax != 0) ? 1 : 0;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    ebx = 0x9bb2d3f8;
    esi = 0x5deac402;
    if (ecx != 0xa) {
        esi = r15d;
    }
    eax = esi;
    if (edx == 0xffffffff) {
        eax = r15d;
    }
    if (ecx >= 0xa) {
        eax = esi;
    }
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_17:
    if (eax == 0x4fd7b5fd) {
        goto label_20;
    }
    if (eax != 0x479d88d) {
        goto label_1;
    }
    goto label_21;
label_16:
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x9bb2d3f8;
    esi = 0xacd3dbb8;
    if (ecx == 0xffffffff) {
label_13:
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    if (*(obj.y) >= 0xa) {
        eax = ebx;
    }
    goto label_2;
label_18:
    eax = 0x479d88d;
    r14d = ebp;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_19:
    rdi = r13;
    freading ();
    eax = 0x5e008e78;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_20:
    ecx = *((rsp + 0x14));
    ecx >>= 0x1f;
    eax = ecx;
    eax ^= 0xd09f0ec4;
    eax &= ecx;
    eax += 0x5c15b693;
    if (eax <= 0x479d88c) {
        goto label_0;
    }
    goto label_3;
label_21:
    eax = r14d;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x417c30 */
#include <stdint.h>
 
int32_t dbg_rpl_fflush (int64_t arg1, FILE * fp) {
    int64_t var_ch;
    uint32_t var_10h;
    uint32_t var_14h;
    rdi = arg1;
    rbx = fp;
    /* int rpl_fflush(FILE * stream); */
    rbx = rdi;
    eax = 0x536d88b0;
    r12d = 0x34bbb93f;
    if (rbx == 0) {
        r12d = eax;
    }
    eax = 0x8659176f;
    r13d = 0x100;
    r15d = 0x5d93e7cd;
    goto label_0;
label_1:
    eax = 0x46e1f7b6;
    r14d = *((rsp + 0xc));
    do {
label_0:
        ecx = eax;
        if (ecx > 0x46e1f7b5) {
            goto label_4;
        }
        if (ecx > 0x3554f01e) {
            goto label_5;
        }
        eax = r12d;
    } while (ecx == 0x8659176f);
    eax = ecx;
    if (ecx != 0x34bbb93f) {
        goto label_0;
    }
    rdi = rbx;
    eax = freading ();
    eax = 0x536d88b0;
    ecx = 0x76db0e49;
    if (eax != 0) {
        eax = ecx;
    }
    goto label_0;
label_4:
    if (ecx <= 0x5d93e7cc) {
        goto label_6;
    }
    if (ecx == 0x5d93e7cd) {
        goto label_7;
    }
    eax = ecx;
    if (ecx != 0x76db0e49) {
        goto label_0;
    }
    eax = x;
    esi = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    eax &= edx;
    dl = (eax == 0) ? 1 : 0;
    cl = (esi < 0xa) ? 1 : 0;
    cl ^= dl;
    ecx = 0x3b7b3e45;
    if (esi != 0xa) {
        ecx = r15d;
    }
    eax = ecx;
    if (eax == 0) {
        eax = r15d;
    }
    if (esi >= 0xa) {
        eax = ecx;
    }
    goto label_0;
label_5:
    if (ecx == 0x3554f01f) {
        goto label_1;
    }
    eax = ecx;
    if (ecx != 0x3b7b3e45) {
        goto label_0;
    }
    eax = *(rbx);
    ecx = *(rbx);
    ecx ^= 0xfffffeff;
    ecx &= eax;
    *((rsp + 0x14)) = ecx;
    eax = 0x43e8f53d;
    if (eax != 0xe3aa62cb) {
        goto label_8;
    }
    do {
label_2:
        rpl_fseeko (rbx, 0, 1, rcx, r8, r9);
        eax = 0x29b384a0;
    } while (eax == 0xe3aa62cb);
    do {
label_8:
        if (eax != 0x43e8f53d) {
            goto label_9;
        }
        eax = 0x29b384a0;
        if (*((rsp + 0x14)) != 0) {
            eax = ebp;
        }
    } while (eax != 0xe3aa62cb);
    goto label_2;
label_6:
    if (ecx == 0x536d88b0) {
        goto label_10;
    }
    eax = ecx;
    if (ecx != 0x46e1f7b6) {
        goto label_0;
    }
    goto label_11;
label_7:
    eax = *(rbx);
    eax &= r13d;
    *((rsp + 0x10)) = eax;
    eax = 0x43e8f53d;
    if (eax != 0xe3aa62cb) {
        goto label_12;
    }
    do {
label_3:
        rpl_fseeko (rbx, 0, 1, rcx, r8, r9);
        eax = 0x29b384a0;
    } while (eax == 0xe3aa62cb);
    do {
label_12:
        if (eax != 0x43e8f53d) {
            goto label_13;
        }
        eax = 0x29b384a0;
        if (*((rsp + 0x10)) != 0) {
            eax = ebp;
        }
    } while (eax != 0xe3aa62cb);
    goto label_3;
label_9:
    if (eax == 0x29b384a0) {
        fflush (rbx);
        eax = 0x5d93e7cd;
        goto label_0;
label_10:
        eax = fflush (rbx);
        r14d = eax;
        eax = 0x46e1f7b6;
        goto label_0;
label_13:
        if (eax != 0x29b384a0) {
            goto label_14;
        }
        eax = fflush (rbx);
        *((rsp + 0xc)) = eax;
        eax = x;
        ecx = rax - 1;
        ecx *= eax;
        ecx = ~ecx;
        ecx |= 0xfffffffe;
        cl = (ecx == 0xffffffff) ? 1 : 0;
        eax = 0x3b7b3e45;
        esi = 0x3554f01f;
        if (ecx == 0xffffffff) {
            eax = esi;
        }
        dl = (*(obj.y) < 0xa) ? 1 : 0;
        edi = 0x3b7b3e45;
        if (*(obj.y) >= 0xa) {
            eax = edi;
        }
        dl ^= cl;
        if (*(obj.y) != 0xa) {
            eax = esi;
        }
        goto label_0;
    }
label_14:
label_11:
    eax = r14d;
    return eax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x417ee0 */
#include <stdint.h>
 
int64_t dbg_rpl_fseeko (uint32_t arg_8h, int64_t arg_10h, uint32_t arg_20h, int64_t arg_28h, uint32_t arg_48h, int64_t arg_90h, int64_t arg1, int64_t arg2, int64_t arg3, off_t offset, off_t pos, int32_t whence) {
    FILE * fp;
    int64_t var_5h;
    int64_t var_6h;
    int64_t var_7h;
    int64_t var_8h;
    int64_t var_14h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r13 = offset;
    rax = pos;
    r14 = whence;
    /* int rpl_fseeko(FILE * fp,off_t offset,int whence); */
    r14d = edx;
    r13 = rsi;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    eax = edx;
    eax ^= 0xfffffffe;
    *(rsp + 5) = ((eax & edx) == 0) ? 1 : 0;
    *(rsp + 6) = (ecx < 0xa) ? 1 : 0;
    eax = 0x87838f0e;
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
    if (eax != 0xfbe093d5) {
        do {
label_4:
            esi = edi;
        } while (1); BROKEN_DOWHILE;
        eax = esi;
        if (edx == 0xffffffff) {
            eax = edi;
        }
        if (ecx >= 0xa) {
            eax = esi;
        }
        if (eax <= 0xfbe093d5) {
            goto label_2;
        }
        goto label_3;
label_0:
        eax = x;
        ecx = y;
        edx = rax - 1;
        edx *= eax;
        edx = ~edx;
        edx |= 0xfffffffe;
        al = (edx == 0xffffffff) ? 1 : 0;
        bl = (ecx < 0xa) ? 1 : 0;
        bl ^= al;
        esi = 0x8d1c2096;
        edi = 0xa6175a0b;
    }
label_1:
    if (eax > 0xfbe093d5) {
        goto label_3;
    }
label_2:
    if (eax <= 0xaf3a95b1) {
        goto label_5;
    }
    if (eax <= 0xc4d78cb9) {
        goto label_6;
    }
    if (eax == 0xc4d78cba) {
        goto label_7;
    }
    if (eax == 0xc4efb0fb) {
        goto label_0;
    }
    if (eax != 0xe6d6bb8e) {
        goto label_1;
    }
    eax = 0x2c996d22;
    r12d = r15d;
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_5:
    if (eax > 0x9f6d0168) {
        goto label_8;
    }
    if (eax == 0x87838f0e) {
        goto label_9;
    }
    if (eax != 0x8d1c2096) {
        goto label_1;
    }
    *(rbp) &= 0xef;
    rax = *((rsp + 8));
    *((rbp + 0x90)) = rax;
    eax = 0xa6175a0b;
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_6:
    if (eax == 0xaf3a95b2) {
        goto label_10;
    }
    if (eax != 0xb95646f6) {
        goto label_1;
    }
    eax = 0xe6d6bb8e;
    r15d = 0xffffffff;
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_8:
    if (eax == 0x9f6d0169) {
        goto label_11;
    }
    if (eax != 0xa6175a0b) {
        goto label_1;
    }
    *(rbp) &= 0xef;
    rax = *((rsp + 8));
    *((rbp + 0x90)) = rax;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    ecx = ~ecx;
    ecx |= 0xfffffffe;
    cl = (ecx == 0xffffffff) ? 1 : 0;
    eax = 0x8d1c2096;
    esi = 0xbbe0c0a;
    if (ecx == 0xffffffff) {
        eax = esi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    edi = 0x8d1c2096;
    if (*(obj.y) >= 0xa) {
        eax = edi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = esi;
    }
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_7:
    eax = fileno (rbp);
    edi = eax;
    rsi = r13;
    edx = r14d;
    rax = lseek ();
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    eax = 0xc4efb0fb;
    ecx = 0xb95646f6;
    goto label_12;
label_9:
    ecx = *((rsp + 5));
    eax = *((rsp + 6));
    edx = ecx;
    dl ^= al;
    edx = 0x326795a5;
    esi = 0x9f6d0169;
    if (rax != -1) {
        edx = esi;
    }
    eax = edx;
    if (al != 0) {
        eax = esi;
    }
    if (cl == 0) {
        eax = edx;
    }
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_10:
    eax = *((rsp + 7));
    eax = 0x296b122b;
    ecx = 0x69a83c97;
    if (al != 0) {
        eax = ecx;
    }
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_11:
    rax = *((rbp + 0x10));
    *(rsp + 7) = (rax == *((rbp + 8))) ? 1 : 0;
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x326795a5;
    edi = 0xaf3a95b2;
    if (eax == 0) {
        eax = edi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0x326795a5;
    goto label_13;
label_3:
    if (eax <= 0x296b122a) {
        goto label_14;
    }
    if (eax > 0x36ce2e2c) {
        goto label_15;
    }
    if (eax == 0x296b122b) {
        goto label_16;
    }
    if (eax == 0x326795a5) {
        goto label_17;
    }
    if (eax != 0x2c996d22) {
        goto label_1;
    }
    goto label_18;
label_14:
    if (eax > 0x196c6894) {
        goto label_19;
    }
    if (eax == 0xfbe093d6) {
        goto label_20;
    }
    if (eax != 0xbbe0c0a) {
        goto label_1;
    }
    eax = 0xe6d6bb8e;
    r15d = 0;
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_15:
    if (eax == 0x36ce2e2d) {
        goto label_21;
    }
    if (eax != 0x69a83c97) {
        goto label_1;
    }
    rax = *((rbp + 0x28));
    eax = 0x296b122b;
    ecx = 0xfbe093d6;
    goto label_12;
label_19:
    if (eax == 0x196c6895) {
        goto label_22;
    }
    if (eax != 0x1e0000ad) {
        goto label_1;
    }
    rdi = rbp;
    rsi = r13;
    edx = r14d;
    eax = fseeko ();
    *((rsp + 0x14)) = eax;
    eax = x;
    ecx = y;
    edx = rax - 1;
    edx *= eax;
    edx = ~edx;
    edx |= 0xfffffffe;
    al = (edx == 0xffffffff) ? 1 : 0;
    bl = (ecx < 0xa) ? 1 : 0;
    bl ^= al;
    esi = 0x196c6895;
    edi = 0x36ce2e2d;
    goto label_4;
label_16:
    eax = x;
    ecx = rax - 1;
    ecx *= eax;
    eax = ecx;
    eax ^= 0xfffffffe;
    eax &= ecx;
    cl = (eax == 0) ? 1 : 0;
    eax = 0x196c6895;
    edi = 0x1e0000ad;
    if (eax == 0) {
        eax = edi;
    }
    dl = (*(obj.y) < 0xa) ? 1 : 0;
    esi = 0x196c6895;
    if (*(obj.y) >= 0xa) {
label_13:
        eax = esi;
    }
    dl ^= cl;
    if (*(obj.y) != 0xa) {
        eax = edi;
    }
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_17:
    eax = 0x9f6d0169;
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_20:
    eax = 0x296b122b;
    ecx = 0xc4d78cba;
    if (*((rbp + 0x48)) == 0) {
label_12:
        eax = ecx;
    }
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_21:
    eax = 0x2c996d22;
    r12d = *((rsp + 0x14));
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_22:
    rdi = rbp;
    rsi = r13;
    edx = r14d;
    fseeko ();
    eax = 0x1e0000ad;
    if (eax <= 0xfbe093d5) {
        goto label_2;
    }
    goto label_3;
label_18:
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x418350 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = obj___frame_dummy_init_array_entry;
    r14 = rdx;
    r13 = rsi;
    r12d = edi;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r15;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r14;
        rsi = r13;
        edi = r12d;
invalid_funccall(); //        uint64_t (*r15 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* nostrip @ 0x4183c0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* nostrip @ 0x4183d0 */
#include <stdint.h>
 
void atexit (void) {
    rdx = *(obj.__dso_handle);
    esi = 0;
    return cxa_atexit ();
}
