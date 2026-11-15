struct V { void (**vt)(void *); };
struct E { struct V *o; int a; float t; };
struct Q { char pad[12]; unsigned short i; unsigned short n; };
struct T { struct E *e[3]; unsigned short i; unsigned short n; };
struct Z { char pad[12]; unsigned short i; unsigned short n; struct E *e[1]; };
extern char D[];
extern float F;
void g(int, int);
void f(int a) {
    struct T *q;
    struct E *e;
    q = (struct T *)(D + a * 16);
    if (q->n > 0) {
        e = q->e[q->i];
        g(8, 0);
        e->t = F;
        ((void (*)(void *))(*(int *)((char *)e->o + 72)))(e->o);
        g(8, 1);
        g(11, 6);
        if (q->i == 2) {
            q->i = 0;
            return;
        }
        q->i = q->i + 1;
    }
}
