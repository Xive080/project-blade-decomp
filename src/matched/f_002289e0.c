struct T { int a, x, b, c; };
struct O { char pad[192]; struct T t[4]; char pad2[52]; int n; volatile int cur; };
extern int func_00234ff0();
int func(struct O *o) {
    int idx = o->cur;
    int a = o->t[idx].a / 4;
    int s;
    if (a <= 0) a = 1;
    if (idx < o->n - 1) {
        if (o->t[idx].b > a || o->t[idx].c > a) {
            int t = o->cur + 1;
            o->cur = t;
            return t;
        }
    }
    s = idx * 5 * 2 + 50;
    if (s >= 100) s = 95;
    if (func_00234ff0() % 100 < s) return o->cur;
    if (o->cur > 1) return func_00234ff0() % (o->cur - 1);
    return 0;
}
