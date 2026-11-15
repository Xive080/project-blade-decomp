extern void func_00186290(void *);
struct M { float f[12]; };
struct V { char pad[136]; void (*fn)(void *, void *, void *); };
struct P { char pad[60]; };
struct R { struct V *o; float a; };
struct S { char pad[8]; float x; float y; char pad2[28]; unsigned n; };
void f(struct S *s, struct M *m, struct R *r) {
    struct M l;
    unsigned n;
    l = *m;
    n = s->n;
    if (n != 0) {
        do {
            float t = (float)n;
            float dx = s->x * t;
            float dy = s->y * t;
            l.f[0] = m->f[0] + dx;
            l.f[1] = m->f[1] + dy;
            l.f[6] = m->f[6] + dx;
            l.f[7] = m->f[7] + dy;
            if (r->o == 0) func_00186290(&l);
            else r->o->fn((char *)r->o + 60, &l, &r->a);
            n--;
        } while (n != 0);
    }
    if (r->o == 0) func_00186290(&l);
    else r->o->fn((char *)r->o + 60, &l, &r->a);
}
