struct G { int a; char pad[72]; int (*fn)(int, int, int); };
extern char D[];
extern int func_0016b090(void);
extern void func_001cafe0(void);
int f(int a) {
    struct G *g = (struct G *)D;
    g->a = a;
    if (func_0016b090() == 0) func_001cafe0();
    g = (struct G *)D;
    if (g->fn(0, a, 0) != 0) return a;
    return 0;
}
