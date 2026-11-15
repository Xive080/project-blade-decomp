struct S { char p0[4]; unsigned fl; float a; char p1[8]; float b; };
extern unsigned char B[];
void f1(struct S *, float *);
void f2(struct S *);
float f3(void);
void f4(float);
void f5(unsigned char);
void f6(int);
void func(struct S *s) {
    float v[3];
    if (s->fl & 2) {
        v[2] = 0; v[1] = 0; v[0] = 0;
    } else {
        v[2] = 255.0f; v[1] = 255.0f; v[0] = 255.0f;
    }
    f1(s, v);
    f2(s);
    s->b = 4.0f;
    s->a = 120.0f;
    f4(f3());
    f5(B[0]);
    f6(2);
}
