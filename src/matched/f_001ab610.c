struct S { int p; unsigned f; };
extern struct S *g_s;
int f_001ab610(unsigned a)
{
    if (a & 4) return 0;
    if (a & 2) return 0;
    return (g_s->f & 0x1000) != 0;
}
