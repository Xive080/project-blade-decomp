extern s32 f1(s32, f32);
void func(s32 *p) {
    f32 t = *(f32 *)0x70003FA8;
    s32 i;
    for (i = 0; i < 16; i++, p++) {
        if (*p) {
            if (f1(*p, t) == 0) *p = 0;
        }
    }
}
