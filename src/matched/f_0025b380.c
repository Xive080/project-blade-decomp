struct G { char pad[192]; int f; };
struct O { char pad[12]; unsigned t; int k; };
struct R { int v[14]; };
extern struct G *g;
extern struct R D_00333494[];

void func(struct O *o, s32 m)
{
    int b, a = 0;
    unsigned t = o->t;
    int *p;
    if (t < 14) {
        if (g->f != 0) {
            if (o->k == 0) a = 1;
        } else {
            if (o->k == 1) a = 1;
        }
        switch (m) {
        case 0:
            if (a == 1) b = 11; else b = 10;
            break;
        case 1:
            if (a == 1) b = 13; else b = 12;
            break;
        case 2:
            b = 9;
            break;
        case 3:
            if (a == 1) a = 0; else a = 1;
            b = 0;
            break;
        default:
            b = 14;
            break;
        }
        p = &D_00333494[a].v[t];
        if (b < *p) *p = b;
    }
}
