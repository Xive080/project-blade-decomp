extern char base[];
extern void sub(int a, char *s);
s32 func(int a) { sub(a, base); return 1; }
