extern void f10c588(int);
extern void f113c60(int);
extern void f1214b8(char *, char *, char *);
extern int f111960(char *);
extern int f111928(void);
extern void f110bf0(void);
extern void f10dcc0(void);
extern void f114138(int);
extern void f113f40(int);
extern void f121a58(char *, char *);
extern void f1334b0(int, int);
extern void f132d10(void);
extern void f1332e0(void);
extern char D1[];
extern char D2[];
extern char D3[];
extern char D4[];
extern char D5[];
extern char D6[];

int func(int a, int b)
{
    char buf[256];
    f10c588(0);
    f113c60(0);
    f1214b8(buf, D1, D2);
    do {
    } while (f111960(buf) == 0);
    do {
    } while (f111928() == 0);
    f10c588(0);
    f110bf0();
    f113c60(0);
    f10dcc0();
    f114138(2);
    f113f40(0);
    f121a58(D3, D5);
    f121a58(D4, D6);
    f1334b0(a, b);
    f132d10();
    f1332e0();
    return 0;
}
