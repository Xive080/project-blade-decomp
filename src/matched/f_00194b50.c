extern int func_001149e8();
extern int func_00114cf8();
extern int gflag;
extern int gcnt;
extern void *gcur;
struct Obj { char pad[484]; int f484; };
struct Tgt { int h; char pad[1384]; int n; char pad2[8]; int f1400; };
int func_00194b50(struct Obj *o, struct Tgt *t, int p, unsigned c, int sz, int mode) {
    int a;
    int b;
    a = -1;
    b = -1;
    if (c == 0) return 0;
    if (t != 0) {
        if (gflag == 0 || o->f484 == 0 || t->n > 0) return 0;
        if (func_001149e8(t->h, p, c * sz) == 0) {
            if (mode != 0) {
                if (func_00114cf8(0, &a, &b) > 0 && a == 5) {
                    if (b >= 0) {
                        t->h = -1;
                        gcnt--;
                    } else {
                        t->f1400 += b;
                        return (unsigned)b / c;
                    }
                }
            } else {
                t->n = 1;
                gcur = t;
                return sz;
            }
        }
    }
    return 0;
}
