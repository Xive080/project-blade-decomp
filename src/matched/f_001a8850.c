struct O { int pad0[4]; int k; int pad1[2]; int w; char pad2[60]; unsigned n; unsigned c; float r; };
extern int Dq[];
extern int G806C;
extern void f109d20(int);
extern void f109d00(int);
extern void f1aa5a0(int, void *, int);
int func(struct O *o, float s) {
    float t;
    int c;
    int k;
    k = o->k;
    if (k != 1) { return 0; }
        t = s * (float)o->n;
        asm { cvt.w.s t,t }
        asm { mfc1 c,t }
        if (k == 1) {
            if (o->c != c) {
                o->c = c;
                o->r = (float)o->c / (float)o->n;
                f109d20(G806C);
                Dq[0] = o->w;
                Dq[1] = c;
                f1aa5a0(0x800f, Dq, 8);
                f109d00(G806C);
            }
        }
    return 1;
}
