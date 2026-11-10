typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;
typedef struct 
{
  f32 unk0;
  f32 unk4;
} Struct_0018AD90;
s32 func(Struct_0018AD90 *arg0, Struct_0018AD90 *arg1, f32 fparg0)
{
  arg1->unk0 += fparg0 * arg0->unk0;
  arg1->unk4 += fparg0 * arg0->unk4;
  return 1;
}
