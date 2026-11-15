extern char D[];
extern void func_00141700(char *p, char *q);
void f(void) {
    int i;
    char *s;
    int q;
    s = D;
    for (i = 0; i < 2; i++, s += 1456) {
        q = i;
        func_00141700(s + 896, (char *)&q);
    }
}
