struct S { int a, b, c, d; };
extern void func_0017bdd0(int, struct S *, int);
extern void func_0017cf70(struct S *, int);
struct S *f(int a0, struct S *a1, int a2) {
    a1->d = 0;
    func_0017bdd0(a0, a1, a2);
    func_0017cf70(a1, a2);
    return a1;
}
