struct S { int a; int b; int c; };
struct T { int pad[5]; struct S *s; };
extern char sym[];
int func(struct T *t){
    struct S *s = t->s;
    s->a = 0;
    s->b = (int)sym;
    s->c = 0;
    return 1;
}
