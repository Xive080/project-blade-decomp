extern int f1a8010(int);
struct G { char pad[32072]; float v; };
extern struct G g;
int f(float x) { if (f1a8010(1)) { g.v = x; return 1; } return 0; }
