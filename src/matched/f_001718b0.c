struct S { char pad[0x3a8c3c]; int v; };
extern struct S *g;
int f_001718b0(void) {
    return g->v;
}
