struct S{char pad[24]; float f;};
extern char base[];
float f(void){ struct S*p=(struct S*)base; return p->f; }
