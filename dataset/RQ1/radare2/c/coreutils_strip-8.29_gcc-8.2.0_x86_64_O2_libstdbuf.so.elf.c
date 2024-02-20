/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_libstdbuf.so.elf @ 0xa3f */
#include <stdint.h>
 
uint64_t fcn_00000a3f (void) {
    rdi = loc__edata;
    rax = loc__edata;
    if (rax != rdi) {
        rax = *(reloc._ITM_deregisterTMCloneTable);
        if (rax == 0) {
            goto label_0;
        }
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_libstdbuf.so.elf @ 0xa9a */
#include <stdint.h>
 
uint64_t fcn_00000a9a (void) {
    if (*(loc._edata) != 0) {
        goto label_0;
    }
    if (*(reloc.__cxa_finalize) != 0) {
        rdi = *(section..data);
        cxa_finalize ();
    }
    rax = section__dtors;
    rbx = 0x00200e10;
    rbx -= rax;
    r12 = rax;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp._ITM_deregisterTMCloneTable;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x00201068) = rax;
        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00000a3f ();
    *(loc._edata) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_libstdbuf.so.elf @ 0xb09 */
#include <stdint.h>
 
int64_t fcn_00000b09 (void) {
    do {
        rdi = loc__edata;
        rsi = loc__edata;
        ecx = 2;
        rsi -= rdi;
        rsi >>= 3;
        rax = rsi;
        __asm ("cqo");
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        rsi = rax;
        if (rax != 0) {
            rax = *(reloc._ITM_registerTMCloneTable);
            if (rax == 0) {
                goto label_0;
            }
            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ../dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_libstdbuf.so.elf @ 0xb0e */
#include <stdint.h>
 
void fcn_00000b0e (int64_t arg3) {
    rdx = arg3;
    rbx = section__ctors;
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
