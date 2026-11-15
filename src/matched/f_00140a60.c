struct VT { char pad[16]; void (*fn)(void *, int, void *); };
struct VT2 { char pad[16]; void (*fn)(void *, void *, int, void *); };
struct P { struct VT2 *vt; };
struct E { char p0[8]; int f8; char p1[76]; float f88; char p2[4]; float f96; char p3[236]; float f336; float f340; unsigned f344; float f348; char p4[8]; int f360; char p5[4]; float f368; float f372; int f376; float f380; char p6[196]; unsigned f580; };
struct L { int a; float b; };
extern struct VT *G;
extern struct P *volatile D[];
extern char str[];
extern float tbl[];
extern int f_00256438(float);
extern void f_00140f10(struct E *, float, int, char *);
extern void f_00149e70(int, int);
extern void f_00141750(struct E *);
int f_00140a60(struct E *o) {
    int n;
    float t, a;
    struct L l;
    o->f340 = (float)(unsigned)f_00256438(0.5f + o->f340);
    if ((o->f96 > 0.0f && o->f372 > 30.0f && o->f372 < 180.0f) ||
        (o->f96 > 0.0f && o->f372 > -150.0f && o->f372 < -30.0f) ||
        (o->f96 < 0.0f && o->f372 < -30.0f && o->f372 > -180.0f) ||
        (o->f96 < 0.0f && o->f372 < 150.0f && o->f372 > 30.0f)) {
        if (o->f360 == 4096) f_00140f10(o, 0.0f, 8192, str);
        o->f376 = o->f376 + 1;
        n = o->f376;
        n = n < 6 ? n : 6;
        t = tbl[n];
        o->f368 += t * o->f380;
        o->f340 += t * o->f380;
        o->f348 = o->f348 + 0.001f * t;
        if (G) G->fn(G, 1, o);
    }
    o->f372 = 0.0f;
    if (o->f344 == 0) return 0;
    if (o->f344 >= 10) f_00149e70(o->f8, 6);
    t = o->f340 * (float)o->f344;
    if (t > 0.0f) {
        struct P *d;
        o->f336 = o->f336 + t;
        d = D[0];
        l.a = *(volatile unsigned *)&o->f344;
        l.b = t;
        d->vt->fn(d, o, 1, &l);
    }
    if (G) G->fn(G, 2, o);
    if (o->f580 < o->f344) o->f580 = o->f344;
    a = o->f348;
    a = o->f88 + a;
    o->f88 = a;
    if (a < 0.0f) o->f88 = 0.0f;
    else if (a > 1.0f) o->f88 = 1.0f;
    f_00141750(o);
    return 1;
}
