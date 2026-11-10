
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
} Struct_0018B240;
inline float inline_fn(f32 arg0, f32 arg1)
{
  return arg0 * arg1;
}

s32 func(Struct_0018B240 *arg0, Struct_0018B240 *arg1, s32 *arg2, f32 fparg0)
{
  Struct_0018B240 *new_var;
  arg1->unk0 = arg1->unk0 + inline_fn(fparg0, arg0->unk0);
  arg1->unk4 = arg1->unk4 + inline_fn(fparg0, arg0->unk4);
  arg1->unk18 = arg1->unk18 * (1.0f + ((arg0->unk8 - 1.0f) * fparg0));
  arg1->unk1C = arg1->unk1C * (1.0f + ((arg0->unkC - 1.0f) * fparg0));
  new_var = arg1;
  arg1->unk20 = new_var->unk20 * (1.0f + ((arg0->unk10 - 1.0f) * fparg0));
  arg1->unk24 = arg1->unk24 * (1.0f + ((arg0->unk14 - 1.0f) * fparg0));
  *arg2 |= 9;
  return 1;
}
