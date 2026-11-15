struct E { int w[9]; };
struct O { char pad[204]; char *base; };
struct E *f(struct O *o, struct E *e, unsigned mask) {
    if (o == 0) return 0;
    if (mask == 0) mask = -1;
    do {
        if (e == 0) {
            e = (struct E *)(o->base + 80);
        } else {
            e++;
            if (!((char *)e < o->base + 368)) e = 0;
        }
        if (e != 0 && e->w[0] == 0) e = 0;
    } while (e != 0 && (e->w[3] & mask) == 0);
    return e;
}
