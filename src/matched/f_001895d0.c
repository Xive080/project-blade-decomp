extern int sub(void *, void *, int, void (*)(void *, int), int, void *);
int f(char *a, int b, void (*cb)(void *, int), int d) {
    int r = sub(a, a + 16, b, cb, d, a + 12);
    if (r == 0) {
        if (cb != 0) cb(a, d);
    }
    return r;
}
