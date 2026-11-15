extern void func_001784a0(int);
extern void func_001785a0(int);
extern void func_00198120(int, int);
extern int func_0024b310(int);
extern void func_0024b470(int, int);
extern void func_0024b4b0(int, int);
extern void func_0024b540(int, int, int);
struct S { char p0[8]; int flags; int f0c; unsigned char cur; unsigned char init; unsigned char cnt; unsigned char skip; int f14; };
int func(struct S *s, int cmd) {
    int v;
    unsigned char old;
    switch (cmd) {
    case 6:
        if (s->flags & 1) {
            func_001785a0(5);
        } else {
            if (s->f14 != 0) func_00198120(s->f14, 1);
            else func_001784a0(0);
            func_001785a0(0);
        }
        break;
    case 0:
        v = func_0024b310(11);
        s->cur = s->init;
        if (s->flags & 1) {
            if ((unsigned)(v - 1) < 2) func_0024b4b0(11, 1);
        } else {
            if (v == 0 || v == 3) func_0024b540(11, 1, 4);
            func_0024b470(11, (s->f0c) | ((unsigned)s->cur << 8));
        }
        break;
    case 4:
    case 5:
        old = s->cur;
        do {
            if (cmd == 4) {
                if (s->cur == 0) s->cur = (signed char)s->cnt - 1;
                else s->cur = s->cur - 1;
            } else {
                if (s->cur == s->cnt - 1) s->cur = 0;
                else s->cur = s->cur + 1;
            }
        } while (s->cur == s->skip);
        if (s->cur == old) func_001785a0(5);
        else {
            func_0024b470(11, (s->cur << 8) | 0xff);
            func_001785a0(2);
        }
        break;
    }
    return 1;
}
