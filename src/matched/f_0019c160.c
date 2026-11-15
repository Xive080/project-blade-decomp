typedef unsigned __int128 Q;
typedef int s32; typedef unsigned int u32;
struct E { s32 type; s32 a; s32 b; s32 c; s32 d; char *p1; s32 *p2; };
struct EL { struct E e[10]; };
struct A { s32 n; struct E *e; };
struct B { char c; char *p; };
extern s32 G_8328;
extern s32 G_84F0;
extern char *G_851C;
extern long long G_84D8;
extern struct EL D_002E2CB0;
extern char D_00315DC0[];
extern char D_00316900[];
extern struct DD { s32 a[3]; s32 c; s32 pad[60]; } D_00332C40;
extern char *func_0013b550(s32, s32);
extern s32 func_00121b70(char *);
extern void func_001214b8(char *, char *, s32, s32);
extern void func_001956b0(char *, s32, s32);
extern s32 func_001a3ac0(void *, s32, s32);
extern s32 func_001b6240(void);
extern s32 func_0016b090(void);
extern void func_0024b540(s32, s32, void *);
extern void func_0024b4b0(s32, s32);
s32 func(char *a0, s32 a1, s32 a2) {
    switch (a1) {
    case 0:
        *(char **)(a0+8) = func_0013b550(G_8328, 0);
        *(s32*)(a0+12) = 0;
        *(char **)(a0+20) = D_00315DC0;
        *(s32*)(a0+16) = 1;
        *(s32*)(a0+24) = 0;
        *(s32*)(a0+4) = 0;
        func_001956b0(D_00315DC0, 13, 1);
        *(s32*)(a0+4) |= 10;
        break;
    case 2:
        if (D_00332C40.c == 3) func_001956b0(D_00315DC0, 13, 3);
        else func_001956b0(D_00315DC0, 13, 1);
        break;
    case 9:
        if (func_001b6240() == 0) return 1;
        if (func_0016b090() != 0) return 1;
        break;
    case 18:
        if (G_84F0 == 0 && func_0016b090() == 0) {
            struct B b;
            b.c = *func_0013b550(G_8328, 270);
            b.p = func_0013b550(G_8328, 195);
            func_0024b540(5, 1, &b);
            G_84F0 = 1;
        }
        break;
    case 3: {
        struct EL ent;
        s32 *p;
        struct E *q;
        u32 j;
        char *t;
        u32 i;
        s32 s0;
        s32 s4;
        s32 s1;
        s32 s8;
        s32 sp1DC;
        s1 = 2;
        sp1DC = 0;
        s0 = 0;
        s4 = 0;
        ent = D_002E2CB0;
        {
            s32 x = D_00332C40.a[0];
            G_851C = 0;
            t = func_0013b550(G_8328, 319);
            if (G_851C != 0) G_851C = G_851C + (func_00121b70(G_851C) + 1);
            else G_851C = D_00316900;
            func_001214b8(G_851C, t, x, 0);
        }
        ent.e[0].p1 = G_851C;
        p = (s32*)&D_00332C40;
        for (i = 0; i < 8; i++, p += 2) {
            switch (p[5]) {
            case 2:
                if (sp1DC == 0) {
                    t = func_0013b550(G_8328, 321);
                    if (G_851C != 0) G_851C = G_851C + (func_00121b70(G_851C) + 1);
                    else G_851C = D_00316900;
                    func_001214b8(G_851C, t, i + 1, 0);
                    ent.e[1].p1 = G_851C;
                } else {
                    t = func_0013b550(G_8328, 321);
                    if (G_851C != 0) G_851C = G_851C + (func_00121b70(G_851C) + 1);
                    else G_851C = D_00316900;
                    func_001214b8(G_851C, t, i + 1, 0);
                }
                sp1DC++;
                break;
            case 1:
                s4++;
                s8 = i + 1;
                break;
            }
        }
        if (s4 == 1) {
            sp1DC = 1;
            t = func_0013b550(G_8328, 322);
            if (G_851C != 0) G_851C = G_851C + (func_00121b70(G_851C) + 1);
            else G_851C = D_00316900;
            func_001214b8(G_851C, t, s8, 0);
            ent.e[1].p1 = G_851C;
        }
        p = (s32*)&D_00332C40;
        q = &ent.e[2];
        for (j = 0; ; ) {
            switch (p[5]) {
            case 3:
                q->type = 6;
                t = func_0013b550(G_8328, 304);
                if (G_851C != 0) G_851C = G_851C + (func_00121b70(G_851C) + 1);
                else G_851C = D_00316900;
                func_001214b8(G_851C, t, j + 1, 0);
                q->p1 = G_851C;
                break;
            case 2:
                q->type = 5;
            case 1:
                t = func_0013b550(G_8328, 304);
                if (G_851C != 0) G_851C = G_851C + (func_00121b70(G_851C) + 1);
                else G_851C = D_00316900;
                func_001214b8(G_851C, t, j + 1, 0);
                q->p1 = G_851C;
                q->p2 = p + 4;
                break;
            default:
                s0 = 1;
                break;
            }
            if (s0 == 0) {
                j++; q++; s1++; p += 2;
                if (j < 8) continue;
            }
            break;
        }
        if (sp1DC != 0) ent.e[1].c = ent.e[s1 - 1].c + 3;
        ent.e[1].p2 = &sp1DC;
        {
            struct A arg;
            *(long long *)&arg = G_84D8;
            arg.n = s1;
            arg.e = ent.e;
            func_0024b540(10, 0, &arg);
        }
        G_84F0 = 0;
        func_0024b4b0(5, 0);
        break;
    }
    }
    return func_001a3ac0(a0, a1, a2);
}
