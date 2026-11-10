
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
void func(void *dst, void *src)
{
  char *new_var2;
  char *new_var;
  new_var = (char *) dst;
  new_var2 = (char *) dst;
  *((f32 *) (new_var + 8)) = (*((f32 *) (new_var2 + 8))) - (*((f32 *) (((char *) src) + 8)));
  *((f32 *) (new_var2 + 0xc)) = (*((f32 *) (((char *) dst) + 0xc))) - (*((f32 *) (((char *) src) + 0xc)));
  *((f32 *) (new_var2 + 0x10)) = (*((f32 *) (new_var2 + 0x10))) - (*((f32 *) (((char *) src) + 0x10)));
  if (1)
  {
  }
}
