struct T { s32 a, b, c, d, e; };
extern void func_00170700(s32);
extern void func_00178ee0(s32, s32, s32);
extern struct T D[];
extern s32 D6094;
void func(s32 i, s32 flag) {
    struct T *t = (struct T *)((char *)&D[i] + 0x1a8);
    if (flag != 0) {
        func_00178ee0(t->a, t->b, t->b);
        if (t->e == 1) func_00170700(i);
        t->d = i * 1000;
    } else {
        func_00178ee0(t->c, t->b - (t->c - t->a), t->b);
    }
    D6094 = i;
}
