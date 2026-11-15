extern int func_00142860(void *, int);
extern int func_001c3490(void *);
extern void func_001c3b00(void *);
extern void func_001c3d30(void *);
struct N { char p0[3]; unsigned char fl; struct N *par; char p8[0x88]; int *l90; int **l94; int pa[2]; struct N *kids; struct N *next; int tag; };
struct N *func(struct N *a, struct N *b, struct N *c) {
    char *q; struct N *s2; int t; struct N *s4;
    if (func_001c3490(b) != 0) func_001c3d30(b);
    if (c != 0) { b->next = c->next; c->next = b; }
    else { b->next = a->kids; a->kids = b; }
    b->par = a;
    q = (char*)&b->fl;
    if (b->fl & 3) {
        *b->l94 = (int*)b->l90;
        ((struct N*)b->l90)->par = (struct N*)b->l94;
        *q = *q & 0x10;
    }
    t = a->tag;
    b->tag = t;
    s2 = b->kids;
    if (s2 != 0) {
        do {
            s2->tag = t;
            s4 = s2->kids;
            if (s4 != 0) {
                do { func_00142860(s4, t); s4 = s4->next; } while (s4 != 0);
            }
            s2 = s2->next;
        } while (s2 != 0);
    }
    func_001c3b00(b);
    return a;
}
