struct S { char pad[8]; f32 x, y, z; };
void func(struct S *p, struct S *q) {
    p->x = p->x - q->x;
    p->y = p->y - q->y;
    p->z = p->z - q->z;
}
