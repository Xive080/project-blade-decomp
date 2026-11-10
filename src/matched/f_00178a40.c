/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */
#pragma mpwc_relax on
s32 func_001981a0();            /* extern */

s32 func(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0x11:
        /* fallthrough */
    case 0x12:
        func_001981a0(5);
        break;
    case 0x21:
        /* fallthrough */
    case 0x22:
        func_001981a0(6);
        break;
    case 0x41:
        /* fallthrough */
    case 0x42:
        func_001981a0(7);
        break;
    case 0x81:
        /* fallthrough */
    case 0x82:
        func_001981a0(8);
        break;
    case 0x101:
        func_001981a0(9);
        break;
    case 0x201:
        func_001981a0(0xA);
        break;
    case 0x401:
        func_001981a0(0xB);
        break;
    case 0x8:
        func_001981a0(0x11, 0);
        break;
    }
    return 1;
}
