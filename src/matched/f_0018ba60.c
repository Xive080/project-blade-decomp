struct N { struct N *p; struct N *n; };
struct Q { struct N **h; struct N *t; };
struct N *f(struct Q *q, struct N *a) {
    struct N *v = *q->h;
    if (v == 0) return 0;
    *q->h = v->n;
    if (*q->h != 0) (*q->h)->p = 0;
    v->n = a;
    v->p = a->p;
    a->p = v;
    if (v->p == 0) q->t = v;
    else v->p->n = v;
    return v;
}
