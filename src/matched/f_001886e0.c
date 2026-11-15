struct P { char pad[80]; float c[4]; };
struct A { char pad0[20]; struct P *p; char pad1[92]; float v[4]; int w; };
extern void func_00185d80(void *, float *, int);
void f(struct A *a, void *b) {
    float c[4];
    int *q = (int *)a->v;
    c[0] = a->v[0] * a->p->c[0];
    c[1] = a->v[1] * a->p->c[1];
    c[2] = a->v[2] * a->p->c[2];
    c[3] = a->v[3] * a->p->c[3];
    if (!(c[0] <= 255.0f)) c[0] = 255.0f;
    if (!(c[1] <= 255.0f)) c[1] = 255.0f;
    if (!(c[2] <= 255.0f)) c[2] = 255.0f;
    if (!(c[3] <= 255.0f)) c[3] = 255.0f;
    func_00185d80(b, c, q[4]);
}
