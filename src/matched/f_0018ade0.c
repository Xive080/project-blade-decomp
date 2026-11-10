
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
} Struct_0018ADE0;
s32 func(f32 *arg0, Struct_0018ADE0 *arg1, f32 fparg0)
{
  f32 *new_var;
  new_var = arg0;
  arg1->unk24 += (*new_var) * fparg0;
  return 1;
}
