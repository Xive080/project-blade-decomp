extern void func_00186970(void *);
struct Ent { char pad[128]; void (*fn)(void *, void *, void *); };
struct Obj { struct Ent *ent; int q[1]; };
extern struct { char pad[9432]; struct Obj *o; } g;
struct V2 { float x, y; };
struct V { float x, y, z, w; };
void f(float *a) {
    struct E { float a[2]; struct V r; float pad[2]; };
    struct { int flag; struct E e[4]; } L;
    L.flag = 0;
    *(struct V2 *)L.e[0].a = *(struct V2 *)a;
    L.e[1].a[0] = a[0] + a[2];
    L.e[1].a[1] = a[1] + a[3];
    L.e[2].a[0] = L.e[1].a[0] + a[4];
    L.e[2].a[1] = L.e[1].a[1] + a[5];
    L.e[3].a[0] = a[0] + a[4];
    L.e[3].a[1] = a[1] + a[5];
    L.e[0].r = *(struct V *)(a + 6);
    L.e[1].r = *(struct V *)(a + 6);
    L.e[2].r = *(struct V *)(a + 6);
    L.e[3].r = *(struct V *)(a + 6);
    {
        struct Obj *o = g.o;
        if (o == 0) func_00186970(&L);
        else if (o->ent == 0) func_00186970(&L);
        else o->ent->fn((char *)o->ent + 60, &L, o->q);
    }
}
