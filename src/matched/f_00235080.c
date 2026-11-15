extern int func_0013b550(int, int);
extern void func_00235480(void *, int, int);
extern int G_8328;
struct P { int f0; int f4; char pad[0x5c]; int f100; int f104; };
struct A { char pad[0x50]; struct P *p50; char pad2[0x40]; float f94; int f98; };
struct B { float f0; struct P *p4; struct P *p8; };
struct C { float f0; int f4; };

void func(struct A *a, int b, struct B *c) {
    switch (b) {
    case 6: {
        struct B *q = (struct B *)((int)c + 0);
        int t;
        if (q->p4 == 0) {
            t = q->p8->f104;
            if (t != 0 && t != func_0013b550(G_8328, 0)) {
                func_00235480(a, q->p8->f104, 1);
            }
        } else {
            t = q->p4->f100;
            if (t != 0 && t != func_0013b550(G_8328, 0)) {
                if (q->p8 == 0) {
                    func_00235480(a, q->p4->f100, 1);
                } else {
                    func_00235480(a, q->p4->f100, 1);
                    a->f98 = q->p8->f104;
                }
            } else if (q->p8 != 0) {
                t = q->p8->f104;
                if (t != 0 && t != func_0013b550(G_8328, 0)) {
                    func_00235480(a, q->p4->f100, 1);
                }
            }
        }
        break; }
    case 8:
        func_00235480(a, (int)c, 1);
        break;
    case 9:
        if (a->p50 == 0) {
            func_00235480(a, (int)c, 1);
        } else {
            a->f98 = (int)c;
        }
        break;
    case 7:
        ((struct C *)c)->f0 = *(float *)0x70003FB0 - a->f94;
        if (a->p50 != 0) {
            ((struct C *)c)->f4 = *(int *)((char *)a->p50 + 0x3c);
        } else {
            ((struct C *)c)->f4 = a->f98;
        }
        break;
    }
}
