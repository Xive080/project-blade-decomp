struct H { void (*f)(int, int); };
extern char DA[];extern char DB[];extern char DC[];extern char DD[];
extern char GG[];
int func(int a, int b)
{
    int *r;
    struct H *h;
    int *base;
    int i;
    int *q;
    int n;
    int k;
    k = a * 12;
    h = *(struct H **)(DA + k);
    r = 0;
    i = 0;
    base = *(int **)(DB + a * 4);
    n = *(unsigned short *)(DC + a * 2 + 652);
    q = base;
    goto cond;
body:
    if (*q == 0) { r = base + i; goto out; }
    q++; i++;
cond:
    if (i < n) goto body;
out:
    if (r == 0) return 0;
    {char *g = (char *)((int)GG);
    i = (*(int (**)(int))(g + 304))(*(int *)(DD + k));}
    *r = i;
    h->f(i, b);
    return i;
}
