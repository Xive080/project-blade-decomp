extern void func_0018c610(void *);
typedef struct V { float x, y, z; } V;
typedef struct E { char pad[16]; int f16; char pad2[8]; } E;
typedef struct N { struct N *next; struct N *prev; } N;
typedef struct B { char pad[1036]; N *a; N *b; } B;
typedef struct O {
    char pad0[16];
    N *head;
    char pad[8];
    V pos;
    char pad1[8];
    int n48;
    E *arr;
    char pad2[8];
    B *bk[30];
    unsigned n184;
    int i188, i192, i196;
} O;
extern char tbl[];
extern unsigned short cnt;
extern void (*cb)(int, int);
void f(O *o, V *v) {
    int i;
    int k;
    int *t;
    unsigned j;
    for (i = 0; i < o->n48; i++) {
        o->arr[i].f16 = 0;
    }
    t = (int *)tbl;
    for (k = 0; k < cnt; k++) {
        if (t[597] != 0) cb(t[597], 0);
        t++;
    }
    for (j = 0; j < o->n184; j++) {
        o->bk[j]->b->next = o->bk[j]->a;
        o->bk[j]->a->prev = o->bk[j]->b;
    }
    for (j = 0; j < o->n184; j++) {
        o->bk[j]->a = o->head;
        o->bk[j]->b = (N *)&o->head;
        o->head->prev = (N *)&o->bk[j]->a;
        o->head = (N *)&o->bk[j]->a;
    }
    o->i192 = o->n184;
    o->i188 = 0;
    o->pos = *v;
    o->i196 = 0;
    func_0018c610(o);
}
