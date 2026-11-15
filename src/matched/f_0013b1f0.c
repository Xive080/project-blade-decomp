struct N { struct N *next; int p4; int v; };
int f(struct N *a, int n) {
    int i;
    a = *(struct N **)((char *)a + 288);
    for (i = 0; i < n; i++) {
        if (a == 0) return 0;
        a = a->next;
    }
    if (a != 0) return a->v; return 0;
}
