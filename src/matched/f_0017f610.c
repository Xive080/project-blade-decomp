extern char D[];
struct R { char pad[0x2c]; s32 t; };
struct G { char pad[0x13c]; struct R *(*f)(s32, s32); };
struct R *func(s32 a) {
    struct R *r = 0;
    if (a == 1) r = ((struct G *)D)->f(1, 0x30);
    else if (a == 2) r = ((struct G *)D)->f(1, 0x58);
    else if (a == 4) r = ((struct G *)D)->f(1, 0x5c);
    if (r) r->t = a;
    return r;
}
