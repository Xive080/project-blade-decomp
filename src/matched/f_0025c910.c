struct VT { int (*mk)(struct VT *, int); int p4; int p8; };
struct Obj { struct VT *vt; int kind; int f8; };
struct It { int next; int pad4; struct Obj *w; int pad[2]; };
struct Ent { int pad[3]; int cnt; struct It *items; };
struct Hdr { int n; int pad[2]; struct Ent e[1]; };
struct G { char pad[304]; struct Hdr *(*get)(int); };
extern char D_0032A620[];
extern char D_002E9200[];
extern void func_001ca2d0(int, struct Hdr *, int);

struct Hdr *func(int a0, unsigned a1) {
int i;
int j;
struct It *it;
int c;
struct VT *v;
struct Hdr *h;
int k;
struct Ent *e;
    h = ((struct G *)D_0032A620)->get(a1);
    func_001ca2d0(a0, h, a1);
    e = h->e;
    it = (struct It *)((char *)e + h->n * 20);
    for (i = 0; i < h->n; i++) {
    c = e->cnt + 1;
    e->items = it;
        for (j = 0; j < c; j++) {
            int idx;
            k = (int)it->w >> 16;
            idx = (int)it->w & 0xffff;
            if (idx > 0) {
                int t;
                v = (struct VT *)(D_002E9200 + (idx - 1) * 12);
                it->w = (struct Obj *)v->mk(v, k);
                it->w->vt = v;
                it->w->kind = k;
                switch (k) {
                case 0: t = 4; break;
                case 1: t = 4; break;
                case 2: t = 12; break;
                default: t = 0; break;
                }
                it->w->f8 = t;
            } else {
                it->w = 0;
            }
            it->next += (int)h;
            it = (struct It *)it->next;
        }
    e++;
    }
    return h;
}
