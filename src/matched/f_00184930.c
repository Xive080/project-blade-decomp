extern void f184c90(void *, char *, void *, int, int, struct B *);
extern void f11eac8(void *, void *, int);
extern void f186570(void *);
extern void f186970(void *);

struct B;
struct B { char pad[192]; int k; int m; };
struct H1 { int h; char d[96]; };
struct H2 { int h; char d[128]; };
struct V { char pad[60]; };
struct O { struct V *vt; int a[1]; };

void func(void *a, int *p, struct O **po) {
    struct B b;
    struct H1 h1;
    struct H2 h2;
    struct O *o;
    f184c90(a, (char *)a + 8, p + 1, 3, *p != 0, &b);
    if (b.m == 0) {
        o = (struct O *)*po;
        if (o == 0) {
            f186570(p);
        } else {
            (*(void (**)(void *, void *, void *))((char *)o + 132))((char *)o + 60, p, (char *)po + 4);
        }
    } else if (b.m == 1) {
        if (b.k == 3) {
            h1.h = *p;
            f11eac8(h1.d, &b, 96);
            o = (struct O *)*po;
            if (o == 0) {
                f186570(&h1);
            } else {
                (*(void (**)(void *, void *, void *))((char *)o + 132))((char *)o + 60, &h1, (char *)po + 4);
            }
        } else {
            h2.h = *p;
            f11eac8(h2.d, &b, 128);
            o = (struct O *)*po;
            if (o == 0) {
                f186970(&h2);
            } else {
                (*(void (**)(void *, void *, void *))((char *)o + 128))((char *)o + 60, &h2, (char *)po + 4);
            }
        }
    }
}
