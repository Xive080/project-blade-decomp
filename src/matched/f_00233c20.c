struct T { char pad[0x44]; int a[1]; int n[1]; int m; char e[8][72]; };
extern void f2338c0(void *, void *, int, float);
void f(struct T *o) {
    int *a = o->a;
    if (o->a[0] == 0) {
        int *n = o->n;
        if (o->n[0] > 0) {
            
            int i = (o->m - o->n[0] + 8) % 8;
            f2338c0(o, o->e[i], *(int *)(o->e[i] + 0x40), *(float *)(o->e[i] + 0x44));
            *a = 1;
            *n = *n - 1;
        }
    }
}
