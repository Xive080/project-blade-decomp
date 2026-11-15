extern int func_001c3b80(int);
extern void func_001ce410(float *, float *, int, int);
struct T { char p[0x4c]; float x, y, z; };
struct M { char p[0x38]; struct T *t; };
struct B { float x, y, z; char p0[0x20]; int cnt; float a, b, c; char p1[0xc]; int r; struct M *m; };
struct B *f(struct B *o, float *pos, float *d) {
    if (o->cnt > 1 && pos) {
        float v[3];
        float t1, t2, t3, t4;
        v[0] = o->m->t->x - pos[0];
        v[1] = o->m->t->y - pos[1];
        v[2] = o->m->t->z - pos[2];
        if (v[0]*v[0] + v[1]*v[1] + v[2]*v[2]) {
            func_001ce410(v, v, 1, func_001c3b80(o->r));
            t2 = d[2]*v[0] - d[0]*v[2];
            t3 = d[0]*v[1] - d[1]*v[0];
            t1 = d[1]*v[2] - d[2]*v[1];
            o->a += t1;
            o->b += t2;
            o->c += t3;
        }
    }
    o->x += d[0];
    o->y = o->y + d[1];
    o->z = o->z + d[2];
    return o;
}
