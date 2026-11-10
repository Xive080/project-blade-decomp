struct E { u16 a[12]; };
extern char tb[];
s32 func(s32 i, s32 j) {
    return *(u16 *)(tb + i * 24) & (1 << j);
}
