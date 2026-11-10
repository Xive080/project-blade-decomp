struct S { char pad[28]; int f; };
extern char base[];
extern int idx;
s32 func(void) {
    struct S *p = (struct S*)base;
    struct S *q = (struct S*)((char*)p + idx);
    return q->f;
}
