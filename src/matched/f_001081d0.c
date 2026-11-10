
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
s32 func(void *p)
{
  s32 v0 = *((s32 *) (((char *) p) + 0));
  s32 new_var;
  s32 a1 = *((s32 *) (((char *) p) + 8));
  s32 v1 = *((s32 *) (((char *) p) + 4));
 do { new_var = v0; } while (0); if (((!a1) && (!a1)) && (!(*((s32 *) (((char *) p) + 8))))) { }
  return (new_var + v1) - (*((s32 *) (((char *) p) + 8)));
}
