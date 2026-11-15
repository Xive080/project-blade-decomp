struct G4 { float a, b, c, d; };
struct O { int pad0; int s4; int pad8[2]; int s16; int s20; int pad24[2]; int st; struct G4 c; };
struct V { void (*f[4])(struct O *); };
struct W { struct V *v; };
extern char Gb[];
extern int F16b090(void);
extern struct W **F133100(int);
extern void F1312f0(int);
extern void F131540(int, void *);
extern void F25f710(void);
extern void F178800(void);
extern void F1b6c40(void);
int func(struct O *o) {
    struct W **p;
    float t, w, x, y, z;
    struct G4 *q;
    switch (o->st) {
    case 1:
        if (F16b090() == 0) {
            p = F133100(4);
            o->s16 = 7;
            o->s20 = -1;
            o->s4 = 3;
            (**(void (***)(struct O *))p)(o);
            F1312f0(0);
            F131540(0, F1b6c40);
            q = (struct G4 *)Gb; *q = o->c;
            o->st = 2;
        }
        break;
    case 2:
        p = F133100(4);
        t = 255.0f * *(float *)0x70003fa8; t = o->c.d - t;
        o->c.d = t;
        if (t < 0.0f) o->c.d = 0.0f;
        else if (!(t <= 255.0f)) o->c.d = 255.0f;
        q = (struct G4 *)Gb; *q = o->c;
        (*(void (**)(struct O *))(*(char **)p + 8))(o);
        break;
    }
    F25f710();
    F178800();
    return 1;
}
