struct S{char pad[0x40]; int v;};
int func(struct S *p){ return p->v + 0xb4; }
