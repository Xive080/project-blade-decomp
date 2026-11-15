struct S { float p[8]; float t; };
void f(struct S *a, float *b) { float t = a->t; float x=b[0]*t; float y=b[1]*t; float z=b[2]*t; a->p[1] = x + a->p[1]; a->p[2] = y + a->p[2]; a->p[3] = z + a->p[3]; }
