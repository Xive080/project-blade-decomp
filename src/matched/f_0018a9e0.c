
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
s32 func(void *arg0, void *arg1, f32 fparg0)
{
  f32 temp_f2;
  float new_var;
  f32 temp_f1;
  f32 temp_f0;
  temp_f2 = 1.0f + (((*((f32 *) (((char *) arg0) + 0x0))) - 1.0f) * fparg0);
  new_var = 1.0f + (((*((f32 *) (((char *) arg0) + 0x4))) - 1.0f) * fparg0);
  *((f32 *) (((char *) arg1) + 0x8)) = (*((f32 *) (((char *) arg1) + 0x8))) * temp_f2;
  *((f32 *) (((char *) arg1) + 0xc)) = (*((f32 *) (((char *) arg1) + 0xc))) * temp_f2;
  temp_f1 = new_var;
  *((f32 *) (((char *) arg1) + 0x10)) = (*((f32 *) (((char *) arg1) + 0x10))) * temp_f1;
  *((f32 *) (((char *) arg1) + 0x14)) = (*((f32 *) (((char *) arg1) + 0x14))) * temp_f1;
  return 1;
}
