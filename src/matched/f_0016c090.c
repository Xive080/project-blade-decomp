struct V4 { float a, b, c, d; };
extern void func_001bf040(struct V4 *v, int n);
extern int func_001ca470(int a, struct V4 *v, int n);
int f(int a, int b, int c) {
    extern int g; struct V4 v; v = *(struct V4 *)(c + g);
    func_001bf040(&v, 4);
    return func_001ca470(a, &v, 4) ? a : 0;
}
