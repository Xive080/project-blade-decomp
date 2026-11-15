struct M { int w[16]; };
struct H { int a; int h; };
struct O {
    char pad0[0x30];
    struct H *p30;
    char pad1[0x8];
    int mode;
    char pad2[0x74];
    struct H *pb4;
    struct H *pb8;
    char pad3[0x334];
    struct M mat;
};
extern char D_002EBFE8[];
extern int D_70003FD8;
extern void *func_001c3b70(int);
extern void func_001c3b00(int);
extern void func_001c3b80(int);
extern void func_0012b7e0(int, void *, void *);
extern void func_00179e70(void *, int);
extern void func_001be3a0(void *, void *);
int f(struct O *o)
{
    switch (o->mode) {
    case 0: {
        struct M *m = func_001c3b70(o->p30->h);
        *m = o->mat;
        func_001c3b00(o->p30->h);
        func_001c3b80(o->p30->h);
        if (o->pb4 != 0) {
            struct M *r = func_001c3b70(o->pb4->h);
            *r = *m;
            func_001c3b00(o->pb4->h);
            func_001c3b80(o->pb4->h);
        }
        if (o->pb8 != 0) {
            struct M *r = func_001c3b70(o->pb8->h);
            *r = *m;
            func_001c3b00(o->pb8->h);
            func_001c3b80(o->pb8->h);
        }
        func_0012b7e0(*(int *)0x70003FD8, o, m);
        break;
    }
    case 2:
        func_001be3a0(o->p30, D_002EBFE8);
        func_00179e70(o, 1);
        break;
    case 4:
        if (o->pb4 != 0) func_001be3a0(o->pb4, D_002EBFE8);
        break;
    case 1:
        func_00179e70(o, 3);
        break;
    }
    return 1;
}
