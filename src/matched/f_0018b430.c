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
typedef struct 
{
  f32 unk0;
  f32 unk4;
  f32 unk8;
  f32 unkC;
  f32 unk10;
  f32 unk14;
  f32 unk18;
  f32 unk1C;
  f32 unk20;
  f32 unk24;
} Struct_0018B430;
s32 func(f32 *arg0, Struct_0018B430 *arg1, s32 *arg2, f32 fparg0)
{
  arg1->unk24 = arg1->unk24 * (1.0f + ((*arg0 - 1.0f) * fparg0));
  *arg2 |= 8;
  return 1;
}
