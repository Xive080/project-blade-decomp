struct V { float x, y, z; };
struct Obj {
    char pad0[4];
    int f4;
    char pad1[4];
    int f12;
    struct V dir;
    struct V *p28;
    char pad3[12];
    struct V *p44;
    int *p48;
    int *p52;
    int n;
};
struct Y {
    char pad[12];
    struct V v;
    struct V w;
};

extern int func_001ce3f0(struct V *, struct V *, int, int);
extern int func_0017bb00(int, int, struct V *, struct V *, int, struct V *, struct V *, int, int);
extern void func_0017ee60(struct Y *);
struct Obj *f(int a, struct Obj *o, struct Y *y) {
    int i;
    int voff;
    int off;
    i = 0;
    voff = 0;
    off = 0;
    for (; i < o->n; voff += 12, off += 4, i++) {
        struct V a1, a4, a3, a2;
        a1 = *(struct V *)((char *)o->p28 + voff);
        func_001ce3f0(&a1, &a1, 1, *(int *)((char *)o->p48 + off));
        a2 = *(struct V *)((char *)o->p44 + voff);
        if (func_0017bb00(*(int *)0x70003fd8, a, &a1, &a2, *(int *)((char *)o->p52 + off), &a3, &a4, 0, o->f4)) {
            float t;
            y->w.x = y->w.x + a3.x;
            y->w.y = y->w.y + a3.y;
            y->w.z = y->w.z + a3.z;
            a3.x = a4.x * (a4.x * y->v.x + a4.y * y->v.y + a4.z * y->v.z);
            a3.y = a4.y * (a4.x * y->v.x + a4.y * y->v.y + a4.z * y->v.z);
            a3.z = a4.z * (a4.x * y->v.x + a4.y * y->v.y + a4.z * y->v.z);
            y->v.x = y->v.x - a3.x;
            y->v.y = y->v.y - a3.y;
            y->v.z = y->v.z - a3.z;
            func_0017ee60(y);
            o->f12 = 1;
            o->dir = a4;
        }
    }
    return o;
}
