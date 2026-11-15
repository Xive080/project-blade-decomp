struct S { char pad[60]; int mode; char pad2[148]; float v; };
int f(struct S *s) {
    float t;
    if (s->mode == 1) {
        t = *(float*)0x70003fb0;
        s->v = t + 1.0f;
    }
    return 1;
}
