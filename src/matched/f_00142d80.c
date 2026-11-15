extern char *f1c3b70(int);
extern void f1c3b00(int);
extern void f1c3b80(int);
extern int f1c3bc0(int);
extern void f1c7710(void *, void *);
extern void f143260(void *, void *, void *, void *);

struct N { int pad0; int ent; int link; };
struct M { int w[16]; };
struct E { char p[2]; unsigned char fl; char p2[61]; int next; };
#define NX(v,o) (((v) == (int)&(((struct N * volatile)(o))->link)) ? 0 : (struct E *)((v) - 64))

int func(struct N *o, float *d, int b) {
    struct M cur;
    struct M saved;
    struct E *e;
    int v;
    int *q;
    int *t;
    struct M *p;
    if (o == 0 || d == 0) { *(int*)d = 0; return 0; }
    *d = 3.4028235e38f;
    q = &o->ent;
    p = (struct M *)f1c3b70(o->ent);
    saved = *p;
    p->w[10] = 0x3f800000; p->w[5] = 0x3f800000; p->w[0] = 0x3f800000;
    ((int*)p)[4] = 0; ((int*)p)[2] = 0; ((int*)p)[1] = 0;
    ((int*)p)[9] = 0; ((int*)p)[8] = 0; ((int*)p)[6] = 0;
    ((int*)p)[14] = 0; ((int*)p)[13] = 0; ((int*)p)[12] = 0;
    ((int*)p)[3] |= 0x20003;
    f1c3b00(*q);
    f1c3b80(*q);
    cur.w[10] = 0x3f800000; cur.w[5] = 0x3f800000; cur.w[0] = 0x3f800000;
    cur.w[4] = 0; cur.w[2] = 0; cur.w[1] = 0;
    cur.w[9] = 0; cur.w[8] = 0; cur.w[6] = 0;
    cur.w[14] = 0; cur.w[13] = 0; cur.w[12] = 0;
    t = (int*)(int)&cur.w[3];
    *t |= 0x20003;
    f1c7710(&cur, f1c3b70(f1c3bc0(*q)));
    v = o->link;
    e = NX(v, o);
    if (e != 0) {
        do {
            if (b == 0 || (e->fl & 4)) f143260(o, e, &cur, d);
            v = e->next;
            if (v == (int)&(((struct N * volatile)(o))->link)) e = 0; else e = (struct E *)(v - 64);
        } while (e != 0);
    }
    if (*d == 3.4028235e38f) *d = 0.0f;
    p = (struct M *)f1c3b70(*q);
    *p = saved;
    f1c3b00(*q);
    f1c3b80(*q);
    return 1;
}
