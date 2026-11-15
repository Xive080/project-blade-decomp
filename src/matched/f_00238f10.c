extern char D[];
struct T { int id; unsigned n; unsigned cap; int **s; };
int f(struct T *t, int *e) {
    unsigned i;
    if (t == 0) t = (struct T *)D;
    if (t->n < t->cap) {
        for (i = 0; i < t->cap; i++) {
            if (t->s[i] == 0) {
                if (*e == 0) {
                    *e = t->id + 1;
                    t->id = t->id + 1;
                }
                t->s[i] = e;
                t->n = t->n + 1;
                return *e;
            }
        }
    }
    return 1;
}
