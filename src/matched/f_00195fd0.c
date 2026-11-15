struct O { int a; int b; int flags; int x; int y; };
extern void func_00198070(int, int);
int f(struct O *o, int k) {
    struct O *p = o;
    switch (k) {
    case 6:
        if ((p->flags & 1) == 0) {
            func_00198070(p->x, p->y);
        }
        break;
    }
    return 1;
}
