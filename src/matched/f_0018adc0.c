
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
s32 func(f32 *arg0, void *arg1, f32 fparg0)
{
  float new_var;
  f32 *new_var2;
  new_var = (*arg0) * fparg0;
  new_var = (*((f32 *) (((char *) arg1) + 0x38))) + new_var;
  *(new_var2 = (f32 *) (((char *) arg1) + 0x38)) = new_var;
  return 1;
}
