extern int sub(void *, void *, int, void (*)(void *, int), int, int);
int f(char *a, int b, void (*cb)(void *, int), int d) {
    int r = sub(a, a + 24, b, cb, d, 0);
    if (r == 0) {
        if (cb != 0) cb(a, d);
    }
    return r;
}
