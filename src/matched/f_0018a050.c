struct K { s32 x; struct K *next; char o[1]; };
struct O { char p0[8]; s32 cnt; char p1[0x58]; struct K *kids; };
extern void func_0018b8e0(void *);
void func(struct O *a) {
    struct K *k1;
    struct K *k2;
    struct K *k3;
    k1 = a->kids;
    if (k1 != 0) {
        do {
            struct O *o1 = (struct O *)((char *)k1 + 8);
            k2 = o1->kids;
            if (k2 != 0) {
                do {
                    struct O *o2 = (struct O *)((char *)k2 + 8);
                    k3 = o2->kids;
                    if (k3 != 0) {
                        do {
                            func((struct O *)((char *)k3 + 8));
                            k3 = k3->next;
                        } while (k3 != 0);
                    }
                    func_0018b8e0((char *)o2 + 0x60);
                    func_0018b8e0(o2);
                    o2->cnt = o2->cnt + 1;
                    k2 = k2->next;
                } while (k2 != 0);
            }
            func_0018b8e0((char *)o1 + 0x60);
            func_0018b8e0(o1);
            o1->cnt = o1->cnt + 1;
            k1 = k1->next;
        } while (k1 != 0);
    }
    func_0018b8e0((char *)a + 0x60);
    func_0018b8e0(a);
    a->cnt = a->cnt + 1;
}
