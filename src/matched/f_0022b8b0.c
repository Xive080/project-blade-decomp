struct T { s32 w0; s32 a; s32 b; s32 c; void *d; s32 e; s32 pad[6]; };
extern s32 G[2];
s32 s1(s32);
s32 s2(void);
void s3(s32, s32);
s32 s4(void *);
void s5(s32, s32);
void f(s32 a, s32 b, s32 c) {
    struct T t;
    s32 x;
    x = s1(0x10000);
    s3(s2(), 3);
    t.a = a;
    t.b = x;
    t.c = 0x10000;
    t.e = b;
    t.d = G;
    s5(s4(&t), c);
}
