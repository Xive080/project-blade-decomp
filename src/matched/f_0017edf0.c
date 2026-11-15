struct S { char pad[0x24]; int n; char pad2[8]; int *keys; int *vals; char pad3[8]; };
struct O { char pad[0x4c]; struct S *s; };
struct O *f(struct O *o, int i, int key, int val) {
    struct S *s = &o->s[i];
    int j;
    for (j = 0; j < s->n; j++) {
        if (s->keys[j] == key) {
            s->vals[j] = val;
            return o;
        }
    }
    return 0;
}
