typedef struct { s32 w[10]; } M;
struct O {
    s32 pad0[3];
    s32 z;
    M m0;
    M m1;
    s32 pad1[2];
    s32 z68;
    struct O *self;
    s32 a70, a74, a78, a7c;
    u32 n80;
    char *a84;
};
struct G { char pad[0x130]; char *(*fn)(s32); };
extern char g[];
extern M tm;
extern s32 func_0018bc60(s32, s32);
extern s32 func_0018bc00(s32, s32, s32);
extern void func_0018bb30(void *, s32);

struct O *func(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 n)
{
    s32 s7 = func_0018bc60(arg0, 0x70);
    s32 s8 = func_0018bc60(arg1, 0x4c);
    s32 s0 = func_0018bc60(arg2, 0x94);
    s32 v0 = func_0018bc60(arg3, 0x8c);
    struct O *o;
    char *r, *p, *p2, *p3, *p4;
    u32 i;
    r = ((struct G *)g)->fn(n * 20 + (v0 + (s0 + (s7 + 0x88 + s8))));
    p = r + 0x88;
    o = (struct O *)r;
    o->a70 = func_0018bc00((s32)p, arg0, 0x70);
    p2 = p + s7;
    o->a74 = func_0018bc00((s32)p2, arg1, 0x4c);
    p3 = p2 + s8;
    o->a78 = func_0018bc00((s32)p3, arg2, 0x94);
    p4 = p3 + s0;
    o->a7c = func_0018bc00((s32)p4, arg3, 0x8c);
    o->a84 = p4 + v0;
    o->z = 0;
    o->m0 = tm;
    o->m1 = tm;
    o->z68 = 0;
    o->self = o;
    func_0018bb30(o, o->a74);
    func_0018bb30((char *)o + 0x60, o->a70);
    o->n80 = n;
    for (i = 0; i < n; i++) {
        s32 off = i * 20;
        *(s32 *)(o->a84 + off) = 0;
        func_0018bb30(o->a84 + off + 4, o->a78);
        func_0018bb30(o->a84 + off + 12, o->a7c);
    }
    *(s32 *)((char *)o + 0x18) = 0x3f800000;
    *(s32 *)((char *)o + 0x24) = 0x3f924925;
    *(s32 *)((char *)o + 0x40) = 0x3f800000;
    *(s32 *)((char *)o + 0x4c) = 0x3f924925;
    return o;
}
