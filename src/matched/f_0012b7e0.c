extern int func_00256438(float);
extern void func_0013bf20(void *, float *);
struct T { int x; };
extern struct T func_0012b980;
extern void func_001297c0(void *, char *, struct T *, char *);
struct L { struct L *next; int pad; struct L *prev; };
struct B { char pad[0x24]; struct L *begin; struct L *end; int key; };
struct A { char pad[0x6c]; float sx; char pad2[4]; float sz; };
void func(struct A *a, struct B *b) {
    unsigned sp;
    float v[15];
    struct L *p;
    float fx, fz;
    int k;
    func_0013bf20(b, v);
    fx = a->sx;
    fz = a->sz;
    k = (((((func_00256438(v[3] * fx) << 8) + func_00256438(v[5] * fz)) << 8) + func_00256438(v[0] * fx)) << 8) + func_00256438(v[2] * fz);
    if (b->key != k) {
        for (p = b->begin; p < b->end; p++) {
            if (p->next) p->next->prev = p->prev;
            if (p->prev) p->prev->next = p->next;
            p->next = 0;
            p->prev = 0;
        }
        b->key = -1;
        sp = (unsigned)b->begin;
        func_001297c0(a, (char *)&v[0], &func_0012b980, (char *)&sp);
        b->key = k;
    }
}
