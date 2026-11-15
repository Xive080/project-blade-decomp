extern int G_84B8;
extern char D_002EB340[];
struct A;
struct B { char pad[0x56c]; int cnt; };
struct A {
    char p0[8];
    int (*get)(struct A *, struct B *, char *, int, int, int);
    char p1[12];
    void (*put)(struct A *, struct B *, int, int, int);
    char p2[0x1e4 - 0x1c];
    int on;
};

char *func(struct A *a, struct B *b, char *s, int len) {
    int n;
    char *p;
    int i;
    *s = 0;
    if (b != 0) {
        if (G_84B8 == 0 || a->on == 0 || b->cnt > 0) return 0;
        n = a->get(a, b, s, 1, len, 1);
        if (n != 0) {
            s[n] = 32;
            p = s;
            for (i = 0; i < len; i++, p++) {
                if (D_002EB340[*p + 1] & 8) {
                    *p = 0;
                    break;
                }
            }
            if (i + 1 < n) a->put(a, b, i - n + 1, 2, 1);
        }
    }
    return s;
}
