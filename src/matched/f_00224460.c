struct Q { float x, y, z, w; };
struct O { char pad[8]; struct Q q; };
void func_00224460(struct O *o, struct O *p) {
    struct Q i;
    struct Q t;
    float n = p->q.x * p->q.x + p->q.y * p->q.y + p->q.z * p->q.z + p->q.w * p->q.w;
    if (n > 0.0f) {
        n = 1.0f / n;
        i.w = p->q.w * n;
        i.x = p->q.x * -n;
        i.y = p->q.y * -n;
        i.z = p->q.z * -n;
    }
    t = o->q;
    o->q.w = i.w * t.w - (i.x * t.x + i.y * t.y + i.z * t.z);
    o->q.x = i.y * t.z - i.z * t.y;
    o->q.y = i.z * t.x - i.x * t.z;
    o->q.z = i.x * t.y - i.y * t.x;
    o->q.x += t.x * i.w;
    o->q.y += t.y * i.w;
    o->q.z += t.z * i.w;
    o->q.x += i.x * t.w;
    o->q.y += i.y * t.w;
    o->q.z += i.z * t.w;
}
