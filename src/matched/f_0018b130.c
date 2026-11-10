
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
} Struct_0018B130;
s32 func(Struct_0018B130 *arg0, Struct_0018B130 *arg1, s32 *arg2, f32 fparg0)
{
  f32 new_var2;
  float new_var;
  float new_var3;
  new_var2 = fparg0;
  new_var = new_var2 * arg0->unk0;
  arg1->unk0 = arg1->unk0 + new_var;
  new_var = ((0, new_var2)) * arg0->unk4;
  arg1->unk4 = arg1->unk4 + new_var;
  new_var = 1.0f + ((arg0->unk8 - 1.0f) * new_var2);
  new_var3 = 1.0f + ((arg0->unkC - 1.0f) * new_var2);
  arg1->unk8 = arg1->unk8 * new_var;
  arg1->unkC = arg1->unkC * new_var;
  new_var = new_var3;
  arg1->unk10 = arg1->unk10 * new_var;
  arg1->unk14 = arg1->unk14 * new_var;
  arg1->unk24 = arg1->unk24 * (1.0f + ((arg0->unk10 - 1.0f) * new_var2));
  *arg2 |= 0xB;
  return 1;
}
