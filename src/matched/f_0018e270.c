struct V { f32 x, y, z; };
struct E { char p[0x30]; f32 x, y, z; };
struct O { char p0[0x20]; f32 f20; char p1[0xc]; s32 i30; char p2[0x3e0]; struct E *e; char p3[0x1b8]; s32 i5d0; };
struct P2 { s32 a, b; };
struct M { s32 w[16]; };
extern s32 sub1(s32);
extern struct P2 *sub2(s32);
extern void sub3(struct P2 *, struct P2 *, s32);
extern s32 sub4(s32, struct O *, struct V *, struct V *, s32, f32 *, struct V *, s32, s32, s32);
extern s32 D_70003FD8;
void func(struct O *o) {
    struct P2 buf[8];
    struct V tmp;
    f32 r[4];
    struct V q;
    struct V pos;
    f32 g = *(f32 *)0x70003FA8;
    s32 h;
    struct P2 *s;
    o->e->y -= 2.0f * g;
    q.x = o->f20;
    q.y = o->f20;
    q.z = o->f20;
    pos = *(struct V *)&o->e->x;
    if (o->i5d0 != 0) {
        h = sub1(o->i30);
        s = sub2(o->i5d0);
        *(struct M *)buf = *(struct M *)s;
        sub3(buf, sub2(h), 2);
        pos = *(struct V *)&buf[6];
        pos.y = o->e->y;
    }
    pos.y += o->f20 - 0.09f;
    if (sub4(D_70003FD8, o, &pos, &q, 1, r, &tmp, 0, 0, 0) != 0) {
        o->e->x = o->e->x + r[0];
        o->e->y = o->e->y + r[1];
        o->e->z = o->e->z + r[2];
    }
}
