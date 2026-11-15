struct E { char p0[0x28]; void *a28; void *a2c; void *a30; void *a34; char p38[8]; };
struct O { char p[0x2c]; s32 n; char q[0x1c]; struct E *arr; s32 cnt; };
extern char D_0032A620[];
struct A { char p[0x134]; void (*fr)(void *); };
#define FR (((struct A *)D_0032A620)->fr)
void func(struct O *o) {
    s32 i;
    struct E *e;
    s32 off;
    if (o != 0) {
        if (o->n > 1) {
            i = 0;
            off = 0;
            for (; i < o->cnt; i++) {
                e = (struct E *)((char *)o->arr + off);
                FR(e->a2c);
                e->a2c = 0;
                FR(e->a30);
                e->a30 = 0;
                FR(e->a28);
                e->a28 = 0;
                FR(e->a34);
                off += 64;
                e->a34 = 0;
            }
            if (o->arr != 0) {
                FR(o->arr);
                o->arr = 0;
            }
        }
        FR(o);
    }
}
