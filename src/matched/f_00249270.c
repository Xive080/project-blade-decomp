extern int tbl[2];
extern void f248640(int, float);
void f(void) { unsigned i; int *p = tbl; for (i = 0; i < 1U; i++, p += 1) f248640(*p, *(float*)0x70003FB0); }
