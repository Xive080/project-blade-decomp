struct L { int n; int last; };
int f(int a, int b, int c, struct L *l) {
    if (l->last != a) {
        l->n++;
        l->last = a;
    }
    return a;
}
