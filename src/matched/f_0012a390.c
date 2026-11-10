struct S { s32 a; s32 b[2]; s32 *d; };
struct S *func(struct S *p) { s32 *q = p->b; if (p->d) { *p->d = *q; } return p; }
