struct A { s32 fl; s16 pad; s16 n; };
struct N { f32 x, y, z, d; };
extern s32 G;
s32 func_00145f50(struct A *, struct N *, f32);
void func_001463d0(struct A *, struct N *);
void func_00146b50(struct A *, struct N *, f32);
s32 func_00147490(void);
struct N *func_00147b70(struct A *, struct N *);
struct N *func_00147e20(void);
f32 func_001ce240(f32 *);

s32 func(struct A *a, f32 f, s32 b) {
    struct N *s0, *s1, *s2;
    f32 f20;
    f32 v[3];
    if (a == 0 || a->n < 2) return 0;
    if (a->fl & 1) {
        if (b != 0) return func_00147490();
        goto ok;
    }
    if (a->fl & 6) {
        if (a->fl & 8) return 0;
        f20 = 0.0f;
        s0 = func_00147e20();
        if (s0 != 0) {
            do {
                s1 = func_00147b70(a, s0);
                if (s1 == 0) break;
                G = 0;
                if (!(a->fl & 8) && func_00145f50(a, s0, f) == 0) {
                    func_001463d0(a, s0);
                    s2 = func_00147b70(a, s0);
                    if (s2 != 0) {
                        G += 1;
                        func_00146b50(a, s0, f);
                        func_00146b50(a, s2, f);
                        G -= 1;
                    }
                }
                if (b != 0) {
                    if (s0 != s1) {
                        do {
                            s0->d = f20;
                            s2 = func_00147b70(a, s0);
                            v[0] = s2->x - s0->x;
                            v[1] = s2->y - s0->y;
                            v[2] = s2->z - s0->z;
                            f20 += func_001ce240(v);
                            s0 = s2;
                        } while (s2 != s1);
                    }
                    s0->d = f20;
                } else {
                    s0 = s1;
                }
            } while (s0 != 0);
        }
    }
ok:
    return 1;
}
