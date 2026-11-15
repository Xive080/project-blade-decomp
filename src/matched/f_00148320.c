struct S {s32 f0; s32 f4; s32 f8; u32 f12;};
typedef struct {f32 x,y,z;} V;
extern void f_1ca2d0(void *, void *, s32);
extern s32 f_1486b0(void *, s32, s32, s32);
extern char *f_148000(void *, void *, s32, s32, f32);
extern char *f_147e20(void *);
extern char *f_147d50(void *);
extern void f_147490(void *);

s32 func(void *a, struct S *b) {
    char buf[12];
    char v1[12];
    char v2[12];
    s32 fl;
    s32 sp98;
    u8 sp9C[2];
    u8 sp9F;
    s32 s0, n, i, r;
    char *t;
    if (a == 0 || b == 0) return 0;
    f_1ca2d0(a, &sp98, 2);
    f_1ca2d0(a, &sp9F, 1);
    if (sp9F & 0x80) {
        f_1ca2d0(a, &fl, 4);
    } else {
        fl = sp9F & 0xff;
    }
    s0 = 0;
    if (fl & 1) s0 |= 4;
    if (fl & 2) s0 |= 2;
    if (fl & 4) s0 |= 1;
    if (fl & 0x20) s0 |= 0x10;
    if (fl & 8) s0 |= 0x80000000;
    if (fl & 0x40) s0 |= 0x20;
    f_1ca2d0(a, sp9C, 2);
    n = sp9C[0] + (sp9C[1] << 8);
    if ((fl & 0x10) && !(fl & 0x27)) {
        r = f_1486b0(b, 2, s0, n);
    } else {
        r = f_1486b0(b, 1, s0, n);
    }
    if (r == 0) return 0;
    for (i = 0; i < n; i++) {
        f_1ca2d0(a, buf, 12);
        t = f_148000(b, buf, 0, 4, (f32)i);
        if (fl & 0x10) {
            f_1ca2d0(a, v1, 12);
            f_1ca2d0(a, v2, 12);
            if ((b->f0 & 2) && b != 0 && t != 0) {
                *(V*)(t+0x10) = *(V*)v1;
                *(V*)(t+0x1c) = *(V*)v2;
            }
        }
    }
    if (!(b->f12 & 0x80000000)) {
        f32 *p = (f32*)f_147e20(b);
        f32 *q = (f32*)f_147d50(b);
        if (p && q && p[0] == q[0] && p[1] == q[1] && p[2] == q[2])
            b->f12 |= 0x80000000;
    }
    f_147490(b);
    return 1;
}
