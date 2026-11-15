extern char D_002FAA88[];
extern char D_00302090[];
extern void func_001ca2d0(int, char*, int);
int func(int a, int n) {
    char *s;
    char *d;
    int c;
    s = (char*)((int)D_002FAA88);
    func_001ca2d0(a, s, n);
    s[n] = 0;
    d = D_00302090;
    c = 0;
    while (*s != 0) {
        if (c != 0) {
            if (*s == 10) c = 0;
        } else if (*s == 59) {
            c = 1;
        } else {
            *d = *s;
            d++;
        }
        s++;
    }
    *d = 0;
    return 1;
}
