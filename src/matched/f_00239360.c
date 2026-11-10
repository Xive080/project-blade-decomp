
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
void func(void *p)
{
  int *v1 = *((int **) (((char *) p) + 8));
  char *new_var2;
  int new_var3;
  char *new_var;
  int a1 = *((int *) (((char *) p) + 4));
  char *new_var4;
  new_var4 = (char *) p;
  new_var = new_var4;
  new_var2 = new_var4;
  *v1 = a1;
  new_var3 = 8;
  a1 = *((int *) (new_var2 + new_var3));
  v1 = *((int **) (new_var + 4));
  *((int *) (((char *) v1) + 4)) = a1;
}
