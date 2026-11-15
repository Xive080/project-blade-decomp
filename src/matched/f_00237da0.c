struct S { char pad[24]; int *arr; int q; unsigned short n; };
struct O { char pad0[24]; unsigned fl; char p1[16]; unsigned f44; int idx; char p2[132]; float f184[4]; float f200; float f204; char p3[12]; float f220; int f224; int f228; int f232; };
extern struct S *g_s;
void f(struct O *o) {
    o->f184[0]=0; o->f184[1]=0; o->f184[2]=0; o->f184[3]=0;
    o->f200 = -0.875f; o->f204 = 0;
    o->f224 = 0; o->f228 = 0;
    o->f220 = 1.0f;
    if (o->f44 & 2) {
        struct S *s = g_s;
        unsigned i = o->idx;
        int v;
        if (i < s->n) v = s->arr[i]; else v = 0;
        o->f232 = v;
        o->fl &= ~0x2000;
    } else {
        o->f232 = 0;
        o->fl |= 0x2000;
    }
}
