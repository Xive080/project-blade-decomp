struct V { float x, y, z; };
struct S { float a[3]; int pad; struct V p; int pad2; struct V d; };
extern int g(void *, void *);
int f(struct S *s, struct V *p, struct V *d)
{
    if (s == 0 || d == 0) return 0;
    s->p.x = p->x; s->p.y = p->y; s->p.z = p->z;
    if (d != 0) {
        s->d.x = d->x; s->d.y = d->y; s->d.z = d->z;
    } else if (s->p.y != 0.0f) {
        s->d.x = 0.0f; s->d.y = 0.0f; s->d.z = 1.0f;
    } else {
        s->d.x = 0.0f; s->d.y = 1.0f; s->d.z = 0.0f;
    }
    s->a[0] = s->p.y * s->d.z - s->p.z * s->d.y;
    s->a[1] = s->p.z * s->d.x - s->p.x * s->d.z;
    s->a[2] = s->p.x * s->d.y - s->p.y * s->d.x;
    s->d.x = s->a[1] * s->p.z - s->a[2] * s->p.y;
    s->d.y = s->a[2] * s->p.x - s->a[0] * s->p.z;
    s->d.z = s->a[0] * s->p.y - s->a[1] * s->p.x;
    g(s, s);
    return 1;
}
