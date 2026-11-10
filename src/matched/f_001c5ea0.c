struct S{char p[28]; float v;}; extern char b[]; float f(void){ struct S *s=(struct S*)b; return s->v; }
