typedef int s32;
struct T { s32 a[16]; };
struct S { char pad[0x30]; s32 fl; s32 o; s32 p; s32 pad2[2]; s32 x; s32 pad3[5]; s32 y; };
extern void f1(s32, s32, s32);
extern s32 f2(s32, struct T *, char *, struct S *);
extern void f3(struct S *, s32);
extern char cb[];
void func(s32 u, struct S *s) {
    struct T t;
    if (s->o) {
        s->x = 0;
        s->y = 0;
        t.a[8] = 0x3ea8f5c3;
        t.a[9] = 0;
        t.a[10] = 1;
        t.a[11] = 0;
        t.a[12] = 0;
        t.a[0] = 5;
        t.a[1] = 0x38d1b717;
        t.a[7] = 0;
        if (s->p) f1(s->o, s->p, 0);
        s->p = f2(s->o, &t, cb, s);
    }
    if (!(s->fl & 1)) f3(s, 1);
}
