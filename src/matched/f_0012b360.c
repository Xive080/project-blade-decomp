int f(unsigned *p, int flags) {
    if (p == 0) return 0;
    if (flags & 0x400) {
        *p |= 0x400;
    } else if (flags & 0x800) {
        *p |= 0x800;
    } else if (flags & 0x1000) {
        *p |= 0x1000;
    } else if (flags & 0x2000) {
        *p |= 0x2000;
    } else if (flags & 0x4000) {
        *p |= 0x4000;
    } else if (flags & 0x8000) {
        *p |= 0x8000;
    } else if (flags & 0x10000) {
        *p |= 0x10000;
    } else if (flags & 0x20000) {
        *p |= 0x20000;
    } else if (flags & 0x40000) {
        *p |= 0x40000;
    } else if (flags & 0x80000) {
        *p |= 0x80000;
    } else if (flags & 0x100000) {
        *p |= 0x100000;
    } else if (flags & 0x200000) {
        *p |= 0x200000;
    } else if (flags & 0x400000) {
        *p |= 0x400000;
    }
    return 1;
}
