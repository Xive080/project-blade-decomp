
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
} Struct_0018B3A0;
s32 func(Struct_0018B3A0 *arg0, Struct_0018B3A0 *arg1, s32 *arg2, f32 fparg0)
{
  f32 temp_f2;
  float new_var;
  f32 temp_f1;
  temp_f2 = ((arg0->unk8 - 1.0f) * fparg0) + 1.0f;
  new_var = (arg0->unkC - 1.0f) * fparg0;
  arg1->unk8 = arg1->unk8 * temp_f2;
  arg1->unkC = arg1->unkC * temp_f2;
  temp_f1 = new_var + 1.0f;
  arg1->unk10 = arg1->unk10 * temp_f1;
  arg1->unk14 = arg1->unk14 * temp_f1;
  arg1->unk24 = arg1->unk24 * (((arg0->unk10 - 1.0f) * fparg0) + 1.0f);
  *arg2 |= 0xA;
  return 1;
}
