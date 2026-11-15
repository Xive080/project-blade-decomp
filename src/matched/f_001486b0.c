extern int func_00191b90(int, int);
struct L { int flags; short n; short cnt; int p; int q; int r; int pad; int *h; int *t; int buf; };
int func(struct L *l, int flags, int x, int n) {
    int *e;
    if (l == 0) return 0;
    if (n > 0) {
        if (flags & 1) l->buf = func_00191b90(24, n);
        else if (flags & 6) l->buf = func_00191b90(48, n);
        else l->buf = 0;
    } else l->buf = 0;
    l->flags = flags;
    l->cnt = 0;
    l->n = n;
    l->p = 0;
    e = (int*)((char*)l + 24);
    l->q = x;
    l->h = e;
    l->t = e;
    return 1;
}
