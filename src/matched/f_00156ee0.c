struct E { f32 f0; f32 f4; f32 f8; f32 fc; f32 f10; s32 next; f32 f18; f32 f1c; f32 f20; f32 f24; char pad[20]; };
struct W { char pad[0x1dc4]; struct E e[1]; };
struct V { void (*pad[3])(void); void (*f3)(void *); char p2[0x1c]; void (*f11)(void *, void *, void *, void *, s32); };
struct P { char pad[12]; struct V *v; };
struct O {
    s32 w0; struct P *owner; s32 mode; s32 cur; f32 t10; f32 t14;
    char pad18[0x24]; f32 f3c; char pad40[0xc]; f32 f4c; char pad50[4]; f32 f54; s32 w58;
    char pad5c[0xfc]; f32 f158; f32 f15c; s32 w160; char pad164[0x10]; s32 w174;
};
extern void f15c4f0(struct W *, struct O *, s32);
extern s32 f1f79f0();
extern s32 f15bc10(struct E *, struct O *);
extern void f158530(struct W *, struct O *, struct E *, f32 *, f32 *);
extern void f1572f0(struct W *, struct O *, struct E *);
void func(struct W *w, struct O *o) {
    s32 cur = o->cur;
    s32 mode = o->mode;
    struct P *own = o->owner;
    struct E *e = &w->e[cur];
    f32 spa; f32 spb; f32 lim;
    if (mode == 3) { f15c4f0(w, o, 0); return; }
    if (mode == 4) { f15c4f0(w, o, 0); o->w0 = 3; return; }
    if (!(o->t10 <= 0.0f)) {
        f32 t = o->t10 - *(f32 *)0x70003FA8;
        o->t10 = t;
        if (t <= 0.0f) {
            o->cur = e->next;
            e = &w->e[o->cur];
            if (o->w0 == 1) {
                f32 a = e->f4;
                f32 b = *(f32 *)((char *)w + 0x1dc8 + e->next * 60);
                if (!(b <= a)) a = b;
                { f32 r = (f32)(u32)(f1f79f0() & 0x7fff) / 32768.0f; f32 z = a - a; o->f54 = a + r * z; }
                o->w58 = 1;
            }
            o->t10 = e->f10;
            o->w160 = f15bc10(e, o);
            if (o->w160 == 0 && o->f4c == o->f3c && !(e->fc <= 0.0f)) {
                f32 r; f32 x; s32 v;
                r = (f32)(u32)(f1f79f0() & 0x7fff) / 32768.0f;
                x = e->f18;
                o->f15c = x + r * (e->f1c - x);
                v = f1f79f0() & 0x7fff;
                x = e->f20;
                r = (f32)(u32)v / 32768.0f;
                o->f158 = x + r * (e->f24 - x);
            }
            e = &w->e[o->cur];
        }
    }
    if (o->cur > 0 && o->cur != 3 && o->t14 < 0.9f * w->e[0].f4) o->w174 = 1;
    if (o->mode != 2 && o->mode != 4) {
        f158530(w, o, e, &spa, &spb);
        { f32 d = *(f32 *)0x70003FA8; o->t14 = o->t14 + spa * d; }
        if (!(spa <= 0.0f) && !(o->t14 <= spb)) {
            o->t14 = spb;
        } else if (spa < 0.0f) {
            if (o->t14 < (lim = spb)) {
                o->t14 = lim;
                if (lim == 0.0f) o->mode = 0;
            }
        }
        f1572f0(w, o, e);
        o->owner->v->f11(o->owner, (char *)o + 24, (char *)o + 36, (char *)o + 48, 0);
    }
    own->v->f3(own);
}
