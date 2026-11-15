struct O { void (*f)(struct O *, int, void *); };
struct G { struct O *cur; int flag; struct O *next; int x; int pad[16]; };
extern struct G g;
extern char D_00197FD0[];
extern void func_0011ec80(void *, int, int);
extern void func_0024bc60(int, int *);
extern void func_0024bd70(struct O *, int);

void func(void) {
    int a;
    int b[3];
    if (g.flag != 0) {
        g.flag = 0;
        if (g.cur != 0) {
            g.cur->f(g.cur, 4, 0);
            b[0] = (int)D_00197FD0;
            b[1] = (int)g.next;
            b[2] = g.x;
            func_0024bc60(1, b);
            g.cur = 0;
            g.next = 0;
        } else {
            func_0011ec80(&a, 0, 4);
            a = 0;
            g.cur = g.next;
            g.next = 0;
            g.cur->f(g.cur, 2, &a);
            func_0024bd70(g.cur, 1);
            g.cur->f(g.cur, 3, 0);
        }
    }
    if (g.flag == 0 && g.cur != 0) {
        g.cur->f(g.cur, 18, 0);
    }
}
