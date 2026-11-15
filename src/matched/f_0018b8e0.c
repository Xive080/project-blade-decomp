struct N { struct N *a; struct N *b; };
void f(struct N *p) {
    struct N *q = p->b;
    if (q != 0) {
        struct N *r = q->b;
        if (r != 0) {
            do {
                q = r;
                r = r->b;
            } while (r != 0);
        }
        q->b = p->a->a;
        p->a->a = p->b;
        p->b = 0;
    }
}
