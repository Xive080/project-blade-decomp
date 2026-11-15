void f84a0(s32);
void f85a0(s32);
struct S { char pad[8]; s32 fl; s32 x; };
s32 f(struct S *a, s32 b) {
    switch (b) {
    case 6:
        if (!(a->fl & 1)) {
            f84a0(a->x);
            f85a0(0);
        }
        break;
    }
    return 1;
}
