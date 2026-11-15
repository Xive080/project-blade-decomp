struct V3 { f32 x, y, z; };
struct M { struct V3 a; f32 p0; struct V3 b; f32 p1; struct V3 c; f32 p2; struct V3 d; };
struct S { char pad0[4]; s32 h; char pad1[4]; struct V3 a, b, c, d; f32 f60[4]; f32 f76; f32 f80; };
struct O { char pad0[12]; char *vt; s32 pad4; s32 z[3]; f32 f; char pad1[96]; s32 h; };
extern char D_002FEAC0[];
extern struct V3 *D_002FA528[];
extern s32 **func_0013c300(void);
extern s32 func_00203df0(s32);
extern s32 func_001c35a0(void);
extern void func_00203d40(s32, s32);
extern struct M *func_001c3b70(s32);
extern void func_001c7320(struct M *);
extern void func_001c3b00(s32);
extern void func_00203c80(s32, void *);
extern void func_00203c20(s32, f32);
extern void func_00203ce0(s32, f32);
extern void func_0013be60(void *);
extern void func_0012b750(void *, void *);
s32 func(struct O *o, struct S *s) {
    s32 m;
    struct M *r;
    if ((*(s32 (**)(struct O *, struct S *))func_0013c300())(o, s) == 0) return 0;
    o->vt = D_002FEAC0;
    if (s != 0) {
        o->h = func_00203df0(s->h);
        m = func_001c35a0();
        func_00203d40(o->h, m);
        r = func_001c3b70(m);
        r->a = s->a;
        r->b = s->b;
        r->c = s->c;
        r->d = s->d;
        r->d.x = r->d.x + D_002FA528[0]->x;
        r->d.y = r->d.y + D_002FA528[0]->y;
        r->d.z = r->d.z + D_002FA528[0]->z;
        func_001c7320(r);
        func_001c3b00(m);
        func_00203c80(o->h, (char *)s + 60);
        func_00203c20(o->h, s->f76);
        func_00203ce0(o->h, s->f80);
        o->z[0] = 0;
        o->z[1] = 0;
        o->z[2] = 0;
        o->f = s->f76;
    }
    func_0013be60(o);
    func_0012b750(D_002FA528[0], o);
    return 1;
}
