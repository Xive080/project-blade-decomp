struct S { char p[16]; u8 a, b, c, d; };
void func(struct S *s, u8 v) {
    s->d = v;
    if (s->d == s->b) {
        if (s->b == s->c - 1) {
            s->b = 0;
        } else {
            s->b = s->b + 1;
        }
    }
    s->a = s->b;
}
