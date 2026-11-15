extern int D_gp;
extern char D_00316580[], D_003165a0[], D_003165c0[], D_003165e0[], D_00316600[], D_00316620[], D_00316640[], D_00316660[];
extern int func_0013b550(int, int);
extern void func_001956b0(void *, int, int);
extern void func_001a3ac0(void *, int, void *);

struct E { int a0, a4, a8, a12, a16, a20, a24; };
struct T { int *p0; int a4, a8, a12; int a16; };
struct M { char pad[12]; int f12; char pad2[16]; };
struct C { char pad[20]; struct M *tbl; int idx; };

void func(struct E *self, int ev, struct T *t) {
    switch (ev) {
    case 0:
        self->a8 = func_0013b550(D_gp, 14);
        self->a12 = func_0013b550(D_gp, 181);
        self->a20 = (int)D_00316580;
        self->a16 = 8;
        self->a24 = 0;
        self->a4 = 0;
        func_001956b0(D_00316580, 182, 0);
        func_001956b0(D_003165a0, 183, 0);
        func_001956b0(D_003165c0, 184, 0);
        func_001956b0(D_003165e0, 185, 0);
        func_001956b0(D_00316600, 186, 0);
        func_001956b0(D_00316620, 187, 0);
        func_001956b0(D_00316640, 188, 0);
        func_001956b0(D_00316660, 189, 0);
        break;
    case 2: {
        struct C *c = (struct C *)t->p0;
        struct M *m = &c->tbl[c->idx];
        if (m->f12 == 6) {
            self->a16 = 8;
        } else {
            self->a16 = 7;
            if (self->a24 == 7) self->a24 = 0;
        }
        break;
    }
    case 12:
        *(int *)t = 0;
        switch (self->a24) {
        case 0: t->a16 = 1; break;
        case 1: t->a16 = 2; break;
        case 2: t->a16 = 3; break;
        case 3: t->a16 = 4; break;
        case 4: t->a16 = 5; break;
        case 5: t->a16 = 6; break;
        case 6: t->a16 = 7; break;
        case 7:
            t->a16 = 3;
            func_001a3ac0(self, ev, t);
            ((char *)t)[15] = 8;
            return;
        }
        break;
    }
    func_001a3ac0(self, ev, t);
}
