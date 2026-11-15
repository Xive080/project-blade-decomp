struct O { char pad[60]; char b[76]; void (*fn)(char *, int, int *); };
extern void func_00186290(int);
void f(int a, int b, int *p) {
    struct O *o = (struct O *)p[0];
    if (o == 0) {
        func_00186290(b);
    } else {
        o->fn((char *)o + 60, b, p + 1);
    }
}
