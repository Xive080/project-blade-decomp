struct O { char pad[20]; int r; };
struct T { int z; unsigned a; unsigned n; int **arr; };
extern char D[];
extern struct O *g(void);
int f(struct T *p, int key) {
    struct O *s0;
    unsigned i;
    int off;
    if (p == 0) p = (struct T*)D;
    if (p == 0) p = (struct T*)D;
    if (p->a < p->n) {
        for (i = 0, off = 0; i < p->n; off += 4, i++) {
            int *e = *(int**)((char*)p->arr + off);
            if (e != 0 && key == *e) {
                s0 = (struct O*)p->arr[i];
                goto done;
            }
        }
    }
    s0 = g();
done:
    g();
    return s0->r;
}
