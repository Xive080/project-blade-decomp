extern void sub(unsigned char *, unsigned char *);
void func(unsigned char *a, unsigned char *b) {
unsigned i,j; unsigned char *p,*r; unsigned char *B=b; unsigned char *A=a;
for (i=0;i<7;i++){ r=A+76; for(j=0,p=B;j<8;j++){ unsigned char *q=p+76; int z;
if(p[97]==0 && q[22]==0 && q[23]==0 && q[25]==0 && q[26]==0 && q[27]==0) z=1; else z=0;
if(z==0) sub(r,q); p+=28;} B+=224; A+=224;}}
