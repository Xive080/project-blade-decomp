typedef struct N { int flags; } N;
extern int depth;
extern int func_00145f50(N *a, int b, float t);
extern void func_001463d0(N *a, int b);
extern int func_00147b70(N *a, int b);
int func(N *a, int b, float t) {
    int c, d, e;
    if (!(a->flags & 8) && depth < 20 && !func_00145f50(a, b, t)) {
        func_001463d0(a, b);
        c = func_00147b70(a, b);
        if (!c) return 0;
        depth++;
        if (!(a->flags & 8) && depth < 20 && !func_00145f50(a, b, t)) {
            func_001463d0(a, b);
            d = func_00147b70(a, b);
            if (d) {
                depth++;
                func(a, b, t);
                func(a, d, t);
                depth--;
            }
        }
        if (!(a->flags & 8) && depth < 20 && !func_00145f50(a, c, t)) {
            func_001463d0(a, c);
            e = func_00147b70(a, c);
            if (e) {
                depth++;
                func(a, c, t);
                func(a, e, t);
                depth--;
            }
        }
        depth--;
    }
    return 1;
}
