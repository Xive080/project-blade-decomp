extern struct { s32 v; char pad[12]; } mode_;
extern struct { s32 ***v; char pad[12]; } obj_;
#define mode (mode_.v)
#define obj (obj_.v)
extern s32 g1;
extern s32 g2;
s32 func(s32 a) {
    g2 = a;
    switch (mode) {
    case 4:
    case 3:
    case 7: {
        s32 (*fn)(void) = (s32 (*)(void))(*obj)[9];
        if (fn) g1 = fn();
        break;
    }
    default:
        break;
    }
    return 1;
}
