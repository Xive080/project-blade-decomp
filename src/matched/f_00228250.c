struct A { char pad[12]; unsigned int flags; };
struct B { char pad[328]; int x; int y; };
struct A *f(struct A *a, struct B *b) {
    if (a->flags & 4) b->x = 1;
    if (a->flags & 2) b->y = 1;
    if (b->x != 0 && b->y != 0) return 0;
    return a;
}
