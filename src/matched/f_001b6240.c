extern struct { int v; char p[12]; } g_;
int f(void){ return !(g_.v == 1); }
