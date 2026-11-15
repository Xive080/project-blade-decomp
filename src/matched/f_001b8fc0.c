struct E { char p0[4]; int busy; char p1[4]; int w[5]; unsigned cnt; char p2[76]; };
struct K { char p[4]; int v; };
int f_1b8fc0(struct E *o, struct K *k)
{
    unsigned i; struct E *e; int r,f;
    if (o == 0) return 0;
    r = 0;
    e = o;
    for (i = 0; i < *(unsigned char *)((char *)o + 3592); i++) {
        f = 0;
        if (e) {
            if (e->busy != 0) goto z0;
            { unsigned j; for (j = 0; j < e->cnt; j++) {
                if (k->v == e->w[j]) { f = 1; goto d0; }
            } }
        }
        z0:
        f = 0;
        d0:
        if (f) { e++; r |= 1; break; }
        e++;
    }
    for (i = 0; i < *(unsigned char *)((char *)o + 3593); i++) {
        f = 0;
        if (e) {
            if (e->busy != 0) goto z1;
            { unsigned j; for (j = 0; j < e->cnt; j++) {
                if (k->v == e->w[j]) { f = 1; goto d1; }
            } }
        }
        z1:
        f = 0;
        d1:
        if (f) { e++; r |= 2; break; }
        e++;
    }
    for (i = 0; i < *(unsigned char *)((char *)o + 3594); i++) {
        f = 0;
        if (e) {
            if (e->busy != 0) goto z2;
            { unsigned j; for (j = 0; j < e->cnt; j++) {
                if (k->v == e->w[j]) { f = 1; goto d2; }
            } }
        }
        z2:
        f = 0;
        d2:
        if (f) { e++; r |= 4; break; }
        e++;
    }
    for (i = 0; i < *(unsigned char *)((char *)o + 3595); i++) {
        f = 0;
        if (e) {
            if (e->busy != 0) goto z3;
            { unsigned j; for (j = 0; j < e->cnt; j++) {
                if (k->v == e->w[j]) { f = 1; goto d3; }
            } }
        }
        z3:
        f = 0;
        d3:
        if (f) { r |= 8; break; }
        e++;
    }
    return r;
}
