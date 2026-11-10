
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
void func(void *arg0, void *arg1, void *arg2, f32 fparg0)
{
  f32 temp_f1;
  float new_var;
  f32 temp_f2;
  f32 temp_f2_2;
  f32 temp_f3;
  f32 temp_f4;
  temp_f3 = *((f32 *) (((char *) arg1) + 4));
  new_var = (*((f32 *) (((char *) arg2) + 4))) - temp_f3;
  *((f32 *) (((char *) arg0) + 4)) = fparg0;
  temp_f4 = *((f32 *) (((char *) arg1) + 8));
  temp_f1 = (fparg0 - temp_f3) / new_var;
  *((f32 *) (((char *) arg0) + 8)) = temp_f4 + (temp_f1 * ((*((f32 *) (((char *) arg2) + 8))) - temp_f4));
  temp_f2 = *((f32 *) (((char *) arg1) + 0xc));
  *((f32 *) (((char *) arg0) + 0xc)) = temp_f2 + (temp_f1 * ((*((f32 *) (((char *) arg2) + 0xc))) - temp_f2));
  temp_f2_2 = *((f32 *) (((char *) arg1) + 0x10));
  *((f32 *) (((char *) arg0) + 0x10)) = temp_f2_2 + (temp_f1 * ((*((f32 *) (((char *) arg2) + 0x10))) - temp_f2_2));
}
