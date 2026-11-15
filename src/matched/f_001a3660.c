typedef unsigned __int128 Q;
struct E { s32 p[5]; };
struct O { char pad[0xc]; u32 c; struct E e[3]; };
struct SRC { Q a; Q b; Q c; s64 d; };
extern char D_002E16C0[];
struct L { char p0[20]; char *x84; char p1[24]; char *xa0; };
struct A { char pad[4]; s32 f4; s32 f8; s32 fc; s32 f10; void *f14; s32 f18; };
struct G1 { char p[8]; s32 f; };
extern s32 G_8328; extern s64 G_84D8;
extern char D_002F0000[]; extern char D_002F0010[]; extern char D_002F0018[];
extern char D_00316800[]; extern s32 D_00316808[]; extern char D_00316820[]; extern char D_00316840[];
extern char D_00316900[]; extern char D_00316BE0[];
extern volatile s32 D_00317404[]; extern void * volatile D_00317408[]; extern void * volatile D_0031740C[];
extern s32 f13b550(s32, s32); extern void f195a30(void*, s32, s32);
extern struct O *f1b54e0(void); extern s32 f1b5470(Q, Q, void*);
extern void f1214b8(); extern s32 f121b70(void*);
extern s32 f1a3ac0(void*, s32, s32); extern void f24b540(s32, s32, void*);
s32 func(struct A *a, s32 b, s32 c) {
    switch (b) {
    case 0:
        a->f8 = f13b550(G_8328, 31);
        a->fc = f13b550(G_8328, 32);
        a->f14 = D_00316800; a->f10 = 3; a->f18 = 0; a->f4 = 0;
        f195a30(D_00316800, 33, 7); f195a30(D_00316820, 34, 4); f195a30(D_00316840, 35, 6);
        break;
    case 2:
        if (f1b54e0()) { D_00316808[0] &= ~1; a->f18 = 0; }
        else { D_00316808[0] |= 1; a->f18 = 1; }
        break;
    case 14:
        D_00317404[0] = 1; D_00317408[0] = D_00316BE0; D_0031740C[0] = a;
        return 1;
    case 3: {
        s32 o = (s32)f1b54e0();
        if (o) {
            struct L l;
            struct { s32 t; void *p; } sp;
            s32 r, k, g; u32 t;
            struct SRC *d = (struct SRC*)D_002E16C0;
            Q q0 = d->a, q1 = d->b, q2 = d->c;
            s64 q3 = d->d;
            *(Q*)&l = q0; *(Q*)((char*)&l+16) = q1; *(Q*)((char*)&l+32) = q2; *(s64*)((char*)&l+48) = q3;
            r = f1b5470(q1, q0, &l);
            t = ((struct O*)o)->c;
            if (t < 3U) f1214b8(D_00316900, D_002F0000, f13b550(G_8328, 36), t + 1, &((struct O*)o)->e[t]);
            else { o = f13b550(G_8328, 36); f1214b8(D_00316900, D_002F0010, o, f13b550(G_8328, 145)); }
            l.x84 = D_00316900;
            l.xa0 = D_00316900 + (f121b70(D_00316900) + 1);
            k = f13b550(G_8328, 37);
            g = G_8328;
            f1214b8(l.xa0, D_002F0018, k, f13b550(g, r >= 0 ? r + 101 : 38));
            *(s64*)&sp = G_84D8; sp.t = 2; sp.p = &l;
            f24b540(10, 0, &sp);
        }
        break; }
    }
    return f1a3ac0(a, b, c);
}
