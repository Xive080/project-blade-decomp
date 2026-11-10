struct B{char p[8]; int v;};
int f(int a, struct B **b){ return (*b)->v; }
