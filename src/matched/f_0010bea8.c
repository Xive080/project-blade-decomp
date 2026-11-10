
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
s32 func(void)
{
  int new_var;
  s32 t = 0x2F0000;
  new_var = (t = t + 14680);
  return new_var;
}
