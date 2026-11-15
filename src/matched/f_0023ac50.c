extern void func_001214b8(void *, void *, void *, int);
extern void func_00121a58(void *);
extern void *func_00238f10(int, void *);
extern void func_00238fd0(void *);
extern int func_002390e0(void);
extern int *func_00239bf0(void);
extern int func_0023a220(void);
extern int func_0023aa20(int, void *, void *, int, int, int, int);
extern char str[];
struct B { int a; char d[16]; int *p; int w0; int w1; int *q; int n; void *tbl[16]; int vals[16]; };
struct A { int zero; char d[16]; int *p; int w[3]; char pad[932]; int k[2]; int tail[1]; };
struct In { int n; int *p; };
int f(int arg0, int arg1, struct In *arg2, int arg3, int arg4, struct B *arg5, char *arg6, int arg7, int arg8) {
    int i;
    int *r;
    i = 0;
    func_00121a58(arg5->d);
    arg5->a = 0;
    arg5->p = (int *)((char *)arg5 + 24);
    r = func_00239bf0();
    arg5->w0 = r[0];
    arg5->w1 = r[1];
    arg5->q = (int *)((char *)arg5 + 36);
    while ((unsigned)i < (unsigned)arg2->n) {
        char *s4 = arg6 + 36;
        int *s5 = (int *)(arg6 + 968);
        int *s6 = (int *)arg2->p;
        void *v;
        int r2;
        s5[0] = 19;
        s5[1] = func_002390e0();
        r2 = func_0023aa20(arg0, s4, s5, s6[0], s6[1], arg7, arg8);
        arg0 = r2;
        if (r2 == 0) continue;
        *(int *)arg6 = 0;
        {
            int *s = (int *)(arg6 + 24);
            func_001214b8(arg6 + 4, str, &arg5->d[0], i);
            *(int **)(arg6 + 20) = s;
            s[0] = func_0023a220();
            s[1] = (int)s5;
            s[2] = (int)s4;
            func_00238fd0(arg6 + 976);
        }
        v = func_00238f10(0, arg6);
        if (v == 0) break;
        arg5->tbl[i] = v;
        arg5->vals[i] = arg4;
        arg4 += 2472;
        arg6 += 1128;
        i++;
    }
    arg5->n = i;
    return i != 0;
}
