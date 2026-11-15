struct V { float x, y, z; };
struct Ent { char p0[0x18]; struct V pos; char p1[0x14]; int tag; char p2[0x4]; };
struct Tbl { char p0[0x2c]; int n; char p1[0x1c]; struct Ent *ents; int cnt; };
extern void func_0017f820(struct Ent *, int);
struct Ent *f(struct Tbl *t, int i, struct V *pos, int a, int tag) {
    if (t->n > 1) {
        if (i < t->cnt) {
            t->ents[i].pos = *pos;
            t->ents[i].tag = tag;
            func_0017f820(&t->ents[i], a);
            return t->ents;
        }
    }
    return 0;
}
