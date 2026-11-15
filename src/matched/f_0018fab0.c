struct O { char p0[16]; int fl; char p1[40]; int k; char p2[920]; int c; char p3[56]; int d; char p4[488]; int e; };
extern void f179e70(struct O *, int);
extern void f12b7e0(int, struct O *, int);
extern int D312790[];
extern int D70000000[];

int func(struct O *o)
{
    int *p;
    switch (o->k) {
    case 2:
        f179e70(o, 1);
        break;
    case 4:
        o->fl = o->fl & ~0x20;
        f179e70(o, 3);
        break;
    case 0x100:
        p = (int *)0x70000000;
    case 0:
        p = (int *)0x70000000;
        f12b7e0(p[4086], o, o->d);
        if (o->c == 0) D312790[0]++;
        break;
    case 0x40:
    case 0x80:
        f179e70(o, 1);
        break;
    case 0x4000:
    case 0x8000:
        o->e = 0;
        break;
    }
    return 1;
}
