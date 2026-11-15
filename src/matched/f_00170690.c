struct E { int a; int b; int c; };
extern struct E T[];
void f(int n, int a, int b, int c) {
    int i = 0;
    if (n != 1) {
        do { n >>= 1; i++; } while (n != 1);
    }
    T[i].a = a;
    T[i].b = b;
    T[i].c = c;
}
