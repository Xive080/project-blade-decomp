struct G { s32 pad[5]; s32 a; s32 b; };
extern char base[];
s32 func(s32 a, s32 b){ struct G *p = (struct G*)base; s32 old = p->a; p->b = b; p->a = a; return old; }
