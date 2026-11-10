extern int flag;
extern char base[];
extern void sub(char *s);
void func(void) { if (flag == 0) sub(base); }
