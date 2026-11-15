struct O { int a; int b; char p0[312]; int c; int d; int e; int st; char p1[80]; f32 v[4]; int pad; int q; int w; };
extern char *Gbase;
extern int Gcnt;
extern int Gstride;
extern int Gmask;
extern int Gtab[2];
extern int Gx;
extern int f1123b8(int, int);
extern int f1122a0(int, int);
extern int f112680(int, int, int, int);
extern int f112440(int, int, int, int);
extern int f112928(int, int, int *);
extern int f1127b8(int, int, int, int);
extern int f112b68(int, int);
extern int f175430(struct O *);
int f(int a0, struct O **out) {
    int s0 = a0 % 2;
    int s1 = a0 / 2;
    struct O *o;
    int s2, r, r2, i;
    if (Gbase != 0) {
        if (a0 >= 0 && a0 < Gcnt) {
            o = (struct O *)(Gbase + a0 * Gstride);
            goto go;
        }
    }
    return -1;
go:
    if (out) *out = o;
    if (s0 < 2) {
    if (o->e == 0) return -1;
    {
    if (s1 >= Gtab[s0]) return 0;
    if (f1123b8(s0, s1) == 2) return 2;
    o->c = s0;
    o->d = s1;
    r = f1122a0(s0, s1);
    switch (r) {
    case 2:
    case 6:
    switch (o->st) {
    case 2:
        r2 = f112680(s0, s1, 1, 0);
        switch (r2) {
        case 0:
            s2 = 0;
            break;
        case 4:
            if (f112680(s0, s1, 2, 0) > 0) {
                if (f112440(s0, s1, -1, 0) == 0) {
                    o->a = 2; o->b = 448;
                } else {
                    s2 = 2; o->st = 6;
                    break;
                }
            } else {
                o->a = 1; o->b = 448;
            }
            if (Gmask & o->a) s2 = 2; else s2 = 3;
            o->st = 1;
            break;
        case 7:
            if (f112440(s0, s1, -1, 0) == 0) {
                s2 = 2; o->a = s2; o->b = 448; o->st = 1;
                if (Gmask & o->a) s2 = 2; else s2 = 3;
            } else {
                o->st = 6;
                s2 = 2;
                s1 = o->d; s0 = o->c;
                if (f112440(s0, s1, -1, 0) >= 2) f112928(s0, s1, &Gx);
            }
            for (i = 0; i < 4; i += 2) { o->v[i] = -1.0f; o->v[i + 1] = -1.0f; }
            break;
        default:
            s2 = 3;
            o->a = 0; o->b = 448; o->st = 1;
            break;
        }
        break;
    case 6:
        s2 = 2;
        if (r == 6) { f1127b8(s0, s1, 1, 0); o->st = 5; }
        break;
    case 5:
        s2 = 2;
        if (r == 6) {
            if (f112b68(s0, s1) != 1) { o->a = 4; o->b = 448; } else { o->a = 8; o->b = 448; }
            o->st = 1;
            for (i = 0; i < 4; i += 2) { o->v[i] = -1.0f; o->v[i + 1] = -1.0f; }
            s1 = o->d; s0 = o->c;
            if (f112440(s0, s1, -1, 0) >= 2) f112928(s0, s1, &Gx);
            if (Gmask & o->a) s2 = 2; else s2 = 3;
        }
        break;
    case 3:
        switch (f1123b8(s0, s1)) {
        case 1:
            if (o->b == 448) { if (o->q == 0) o->w = 0; }
            o->st = 2; o->a = 0;
            break;
        case 0:
            o->st = 2; o->a = 0;
            for (i = 0; i < 4; i += 2) { o->v[i] = -1.0f; o->v[i + 1] = -1.0f; }
            s1 = o->d; s0 = o->c;
            if (f112440(s0, s1, -1, 0) >= 2) f112928(s0, s1, &Gx);
            break;
        default:
            break;
        }
        s2 = 2;
        break;
    case 4:
        switch (f1123b8(s0, s1)) {
        case 1:
            o->st = 2; o->a = 0;
            break;
        case 0:
            o->st = 1;
            s1 = o->d; s0 = o->c;
            if (f112440(s0, s1, -1, 0) >= 2) f112928(s0, s1, &Gx);
            break;
        default:
            break;
        }
        s2 = 2;
        break;
    case 7:
        switch (f1123b8(s0, s1)) {
        case 1:
            o->st = 2; o->a = 0;
            break;
        case 0:
            o->st = 1;
            break;
        default:
            break;
        }
        s2 = 2;
        break;
    case 1:
        s2 = f175430(o);
        break;
    default:
        o->st = 2; s2 = -1; o->a = 0;
        break;
    }
    return s2;
    case 5:
        switch (o->st) {
        case 3:
            switch (f1123b8(s0, s1)) {
            case 1:
                if (o->b == 448) { if (o->q == 0) o->w = 0; }
                o->st = 2; o->a = 0;
                break;
            case 0:
                o->st = 2; o->a = 0;
                for (i = 0; i < 4; i += 2) { o->v[i] = -1.0f; o->v[i + 1] = -1.0f; }
                s1 = o->d; s0 = o->c;
                if (f112440(s0, s1, -1, 0) >= 2) f112928(s0, s1, &Gx);
                break;
            default:
                break;
            }
            break;
        case 4:
            switch (f1123b8(s0, s1)) {
            case 1:
                o->st = 2; o->a = 0;
                break;
            case 0:
                o->st = 1;
                s1 = o->d; s0 = o->c;
                if (f112440(s0, s1, -1, 0) >= 2) f112928(s0, s1, &Gx);
                break;
            default:
                break;
            }
            break;
        case 7:
            switch (f1123b8(s0, s1)) {
            case 1:
                o->st = 2; o->a = 0;
                break;
            case 0:
                o->st = 1;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        return 2;
    default:
        o->a = 0;
        o->st = 2;
        return 0;
    }
    }
    }
    return -1;
}
