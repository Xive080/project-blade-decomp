
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
volatile unsigned int func(void *p)
{
  return (((*((u16 *) (((char *) p) + 0xc))) & 0xFFFFFFFF) >> 5) & 1;
}
