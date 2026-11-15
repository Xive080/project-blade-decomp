struct R { char pad[0x574]; s32 n; };
struct S {
    struct R *(*create)(struct S *, void *, s32);
    void (*destroy)(struct S *, void *);
    s32 (*step)(struct S *, void *, s32, s32, s32, s32);
    void (*put)(struct S *, void *, s32, s32, s32, s32);
    char pad[0x94];
    char name[0x40];
    char pad2[0x100];
    s32 ok;
};
extern s32 G;
extern char D[];
extern char *func_001221a0(char *, char *);
extern s32 func_00121d00(char *, char *, s32);
extern struct S *func_00177b10(char *);
s32 func(struct S *o, void *x, char *str, s32 flag, s32 n) {
    struct S *p;
    struct R *q;
    void *w;
    char *t;
    s32 i = 0;
    if (G == 0 || o->ok == 0) return 0;
    if (flag == 0 || n <= 0) return 0;
    if ((t = func_001221a0(str, D)) != 0) {
        *t = 0;
        if (func_00121d00(str, o->name, t - str) != 0) {
            *t = 58;
            p = func_00177b10(str);
            if (p == 0) return 0;
        } else {
            *t = 58;
            p = o;
        }
    } else
        p = o;
    q = o->create(o, x, 1);
    if (q != 0) {
        w = p->create(p, str, 6);
        if (w != 0) {
            i = 0;
            while (i < q->n) {
                i += o->step(o, q, flag, n, 1, 1);
                p->put(p, w, flag, n, 1, 1);
            }
            i = 1;
            p->destroy(p, w);
        }
        o->destroy(o, q);
    }
    return i;
}
