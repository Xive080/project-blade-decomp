struct O { char pad[0x1c]; char a[1]; char pad2[0x17]; void (*fn)(char*, struct O*); };
extern void s1(char*);
extern void s2(char*, struct O*);
void f(struct O *o) {
    s1(o->a);
    o->fn(o->a, o);
    s2(o->a, o);
}
