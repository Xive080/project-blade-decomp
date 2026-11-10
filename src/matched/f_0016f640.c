extern char tbl[];
s32 func(s32 a, s32 b) {
    return *(s32 *)(a * 4 + (tbl + b * 12));
}
