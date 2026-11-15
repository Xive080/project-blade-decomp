struct S { char pad[0x3c]; s32 m; char pad2[0x3dc - 0x40]; s32 q; };
extern void f179();
extern s32 f1c3(s32, s32);
extern void f12b(s32, struct S *, s32);
extern s32 D;
s32 func(struct S *a) {
    switch (a->m) {
    case 0: f12b(D, a, f1c3(a->q, 1)); break;
    case 2: f179(a); break;
    case 4: break;
    case 1: f179(a, 3); break;
    }
    return 1;
}
