struct G { s32 a; s32 pad[2]; s32 b; s32 c; };
struct R { void *p0; void *p4; void *p8; void *pc; };
extern struct G g;
extern char f0[], f1[], f2[], f3[];
extern struct R *get(void);
void func(s32 x, s32 y) {
    g.b = g.a + x;
    g.c = g.b + y;
    get()->p0 = f0;
    get()->p8 = f1;
    get()->pc = f2;
    get()->p4 = f3;
}
