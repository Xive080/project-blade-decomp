struct N { char p[12]; int n; float *t; float cur; int idx; };
extern float func_0016b780(void *, int);
float f(struct N *o, float v, int x) {
    if (o == 0) return 0.0f;
    o->cur = v;
    if (v - o->t[1] < o->t[o->n*2-1] - v) o->idx = 0;
    else o->idx = o->n - 1;
    return func_0016b780(o, x);
}