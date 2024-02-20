#include "decompile_retdec.h"
// Address range: 0x810 - 0x9b4
int64_t entry_point(int64_t stream, int64_t str) {
    char v1 = str;
    int32_t mode = 2; // 0x825
    int32_t size = 0; // 0x825
    int64_t buf = 0; // 0x825
    if (v1 != 48) {
        // 0x82b
        mode = 1;
        size = 0;
        buf = 0;
        if (v1 != 76) {
            int32_t str_as_ul = strtoul((char *)str, NULL, 10); // 0x85d
            if (str_as_ul == 0) {
                // 0x938
                fileno((struct _IO_FILE *)stream);
                char * v2 = dcgettext(NULL, "invalid buffering mode %s for %s\n", 5); // 0x973
                return __fprintf_chk((struct _IO_FILE *)*(int64_t *)g4, 1, v2);
            }
            int64_t * mem = malloc(str_as_ul); // 0x871
            mode = 0;
            size = str_as_ul;
            buf = (int64_t)mem;
            if (mem == NULL) {
                char * v3 = dcgettext(NULL, "failed to allocate a %lu byte stdio buffer\n", 5); // 0x88e
                return __fprintf_chk((struct _IO_FILE *)*(int64_t *)g4, 1, v3);
            }
        }
    }
    struct _IO_FILE * stream2 = (struct _IO_FILE *)stream; // 0x842
    if (setvbuf(stream2, (char *)buf, mode, size) == 0) {
        // 0x84b
        int64_t result; // 0x810
        return result;
    }
    // 0x8b7
    fileno(stream2);
    char * v4 = dcgettext(NULL, "could not set buffering of %s to mode %s\n", 5); // 0x8f6
    __fprintf_chk((struct _IO_FILE *)*(int64_t *)g4, 1, v4);
    free((int64_t *)buf);
    return &g7;
}
// Address range: 0x9c0 - 0xa3f
int64_t function_9c0(void) {
    char * env_val = getenv("_STDBUF_E"); // 0x9cb
    char * env_val2 = getenv("_STDBUF_I"); // 0x9da
    char * env_val3 = getenv("_STDBUF_O"); // 0x9e9
    int64_t v1 = (int64_t)env_val3; // 0x9e9
    int64_t v2 = v1; // 0x9f4
    if (env_val != NULL) {
        // 0x9f6
        v2 = entry_point(*(int64_t *)g4, (int64_t)env_val);
    }
    int64_t result = v2; // 0xa0b
    if (env_val2 != NULL) {
        // 0xa0d
        result = entry_point(*(int64_t *)*(int64_t *)0x200fd8, (int64_t)env_val2);
    }
    if (env_val3 == NULL) {
        // 0xa3a
        return result;
    }
    // 0xa24
    return entry_point(*(int64_t *)*(int64_t *)0x200fd0, v1);
}
// Address range: 0xa3f - 0xa61
int64_t function_a3f(void) {
    // 0xa3f
    return &g5;
}
// Address range: 0xa61 - 0xa9a
int64_t function_a61(void) {
    // 0xa61
    return 0;
}
// Address range: 0xa9a - 0xb09
int64_t function_a9a(void) {
    // 0xa9a
    if (*(char *)&g5 != 0) {
        // 0xb08
        int64_t result; // 0xa9a
        return result;
    }
    // 0xaa3
    if (*(int64_t *)0x200ff0 != 0) {
        // 0xab4
        __cxa_finalize((int64_t *)*(int64_t *)0x201058);
    }
    int64_t v1 = g6; // 0xae5
    int64_t result2; // 0xaf7
    if (g6 >= ((int64_t)&g3 - (int64_t)&g2 >> 3) - 1) {
        // 0xaf7
        result2 = function_a3f();
        *(char *)&g5 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g3 - (int64_t)&g2 >> 3) - 1) {
        // 0xae7
        v1++;
    }
    // 0xadb
    g6 = v1;
    // 0xaf7
    result2 = function_a3f();
    *(char *)&g5 = 1;
    return result2;
}
// Address range: 0xb09 - 0xb0e
int64_t function_b09(void) {
    // 0xb09
    return function_a61();
}
// Address range: 0xb0e - 0xb30
int64_t function_b0e(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g1; // 0xb1a
    while (*(int64_t *)v1 != -1) {
        // 0xb1b
        v1 -= 8;
    }
    // 0xb2c
    return result;
}
