struct Ent { char p0[0x24]; int n; char p1[0x4]; int *vals; int *keys; char p2[0xc]; };
struct Tbl { char p0[0x2c]; int n; char p1[0x1c]; struct Ent *ents; int cnt; };
struct Tbl *f(struct Tbl *t, int i, int key, int val) {
    if (t->n > 1) {
    if (i < t->cnt) {
        struct Ent *e = (struct Ent *)((int)t->ents + (i << 6));
        int k;
        for (k = 0; k < e->n; k++) {
            if (e->keys[k] == key) {
                e->vals[k] = val;
                return t;
            }
        }
    }
    }
    return 0;
}
