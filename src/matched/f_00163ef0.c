struct S { char pad[0x10]; void (*fn)(struct S *); };
struct S *func(struct S *p) { p->fn(p); return p; }
