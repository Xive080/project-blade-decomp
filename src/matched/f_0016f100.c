struct E { s32 n; char pad[16]; };
extern struct E tbl[];
extern s32 idx[];
s32 f(void) { struct E *p = &tbl[idx[0]]; return p->n++; }
