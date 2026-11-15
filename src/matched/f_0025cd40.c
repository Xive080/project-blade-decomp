struct VT { int pad; float *(*f)(void *, void *, float); };
struct Obj { struct VT *vt; };
struct Node { struct Node *next; int pad; struct Obj *o; };
struct Ent { int pad; void (*fn)(void *, u32, int, float *); void *arg; u32 n; struct Node *head; };
struct S { s32 n; float t; int pad; struct Ent e[1]; };

void f(struct S *p, float t) {
    s32 i;
    struct Ent *e;
    p->t = t;
    e = p->e;
    for (i = 0; i < p->n; e++, i++) {
        u32 j;
        struct Node *q;
        {
            struct Node *h = e->head;
            float *r = h->o->vt->f(h->o, h, p->t);
            q = h->next;
            if (*r <= 0.0f) continue;
        }
        for (j = 0; j < e->n; j++, q = q->next) {
            if (q->o) {
                e->fn(e->arg, j, *(int *)((char *)q->o + 4), q->o->vt->f(q->o, q, p->t));
            }
        }
    }
}
