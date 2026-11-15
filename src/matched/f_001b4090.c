struct Ent { s64 a; s64 b; int c; int d; };
struct Obj {
    int p0; unsigned *p4; int p8; int n0c; int n10; int n14;
    char pad[0x2c]; int f44; char pad2[0x8]; struct Ent *ents; int nents; int f58; int f5c;
};
extern void func_00111a70(void);
extern void func_00111ab8(void);
int func(struct Obj *o) {
    int i;
    int off;
    o->n0c = 0;
    o->n10 = 0;
    o->n14 = 0;
    o->f44 = 1;
    o->f58 = 0;
    o->f5c = 0;
    for (i = 0; i < o->nents; i++) {
        o->ents[i].a = -1;
        o->ents[i].b = -1;
        o->ents[i].c = 0;
        o->ents[i].d = 0;
    }
    for (i = 0, off = 0; i < o->p8; i++) {
        *(u64 *)(o->p4 + i * 4) = ((u64)((unsigned)(o->p0 + off) & 0x0FFFFFFF) << 32) | 0x30000800;
        off += 0x8000;
    }
    { unsigned t = (unsigned)o->p4; *(u64 *)(t + i * 16) = ((u64)(t & 0x0FFFFFFF) << 32) | 0x20000000; }
    *(int *)0x1000B420 = 0;
    *(int *)0x1000B410 = (unsigned)o->p0 & 0x0FFFFFFF;
    *(int *)0x1000B430 = (unsigned)o->p4 & 0x0FFFFFFF;
    func_00111a70();
    { int *r = (int *)0x1000F520; int *w = (int *)0x1000F590; *w = *r | 0x10000; }
    *(int *)0x1000B400 = 5;
    *(int *)0x1000F590 = *(int *)0x1000F520 & 0xFFFEFFFF;
    func_00111ab8();
    return 1;
}
