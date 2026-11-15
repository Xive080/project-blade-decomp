struct I { char p[4]; struct I *next; };
struct H { char p[4]; struct H *next; char a[8]; int cnt; char q[88]; struct I *items; };
struct O { char p[8]; int cnt; char q[88]; struct H *head; struct O *own; };
extern void g1(char *);
extern void g2(char *);
extern void g3(char *, char *);
void func(struct O *o) {
    struct H *h;
    struct I *i;
    char *s;
    h = o->head;
    if (h) {
        do {
            i = h->items;
            s = (char *)h + 8;
            if (i) {
                do {
                    g1((char *)i + 8);
                    i = i->next;
                } while (i);
            }
            g2(s + 96);
            g2(s);
            *(int *)(s + 8) = *(int *)(s + 8) + 1;
            h = h->next;
        } while (h);
    }
    g2((char *)o + 96);
    g2((char *)o);
    o->cnt = o->cnt + 1;
    g3((char *)o->own + 96, (char *)o - 8);
}
