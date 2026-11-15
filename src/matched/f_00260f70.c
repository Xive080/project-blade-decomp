struct E { s32 fl; char pad[16]; };
struct R { char pad[0x84]; struct E *tbl; };
extern struct R **G;
struct P { char pad[0x2c]; s32 idx; char pad2[0xac]; s16 b; s16 a; };
void sub1(struct P *, s32, f32, f32);
void sub2(struct P *, f32);
void f(struct P *p) {
    sub1(p, 1, 0.0f, 0.0f);
    (*G)->tbl[p->idx].fl |= 2;
    p->a = 0;
    p->b = 0;
    sub2(p, 0.0f);
}
