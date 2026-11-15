extern int f202ca0(char *);
extern int f202b70(char *, int);
extern unsigned char *f2042d0(int);
extern void f2047f0(int, void *, unsigned char, unsigned char);

struct N { char pad0[8]; int link; };
struct E { char pad[24]; char *q; char pad2[36]; int next; };

#define NX(v,o) (((v) == (int)&(((struct N * volatile)(o))->link)) ? 0 : (struct E *)((v) - 64))
int func(struct N *o, int b) {
    struct E *e;
    char *q;
    int i;
    int r;
    int v;
    unsigned char *c;
    unsigned char a2, a3, a4, a5;
    struct { unsigned char x[3]; char y; } t;
    volatile unsigned char *tp;
    if (o == 0) return 0;
    v = o->link;
    e = NX(v, o);
    if (e != 0) {
        do {
            q = e->q;
            if (q != 0) {
                i = 0;
                q[2] |= 0x40;
                if (0 < f202ca0(q)) {
                    do {
                        r = f202b70(q, i);
                        if (r != 0) {
                            c = f2042d0(r);
                            a3 = c[0]; a2 = c[1]; a4 = c[2]; a5 = c[3];
                            tp = (volatile unsigned char *)&t; tp[0] = a3; tp[1] = a2; tp[2] = a4; tp[3] = a5;
                            t.y = b;
                            f2047f0(r, (void *)tp, a2, a3);
                        }
                        i++;
                    } while (i < f202ca0(q));
                }
            }
            v = e->next;
            if (v == (int)&(((struct N * volatile)(o))->link)) e = 0; else e = (struct E *)(v - 64);
        } while (e != 0);
    }
    return 1;
}
