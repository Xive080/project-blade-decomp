extern int func_00111460();
extern void func_001214b8();
extern char D0[], D1[], D2[], D3[], D4[], D5[], D6[], D7[], D8[];

void func(void) {
    char b[128];
    char a[128];
    func_001214b8(a, D0);
    func_001214b8(b, D1, a, D2);
    while (func_00111460(b, 0, 0) < 0) {}
    func_001214b8(b, D1, a, D3);
    while (func_00111460(b, 0, 0) < 0) {}
    func_001214b8(b, D1, a, D4);
    while (func_00111460(b, 0, 0) < 0) {}
    func_001214b8(b, D1, a, D5);
    while (func_00111460(b, 0, 0) < 0) {}
    func_001214b8(b, D1, a, D6);
    while (func_00111460(b, 0, 0) < 0) {}
    func_001214b8(b, D1, a, D7);
    while (func_00111460(b, 0, 0) < 0) {}
    func_001214b8(b, D1, a, D8);
    while (func_00111460(b, 0, 0) < 0) {}
}
