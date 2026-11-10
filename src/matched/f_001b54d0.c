struct unk_327CA0 {
    s32 field_0;
    f32 field_4;
    s32 field_8;
    s32 field_C;
    f32 field_10;
    u8 field_15;
    u16 field_16;
    char pad_18[0x2C];
    s32 field_44;
};

extern struct unk_327CA0 unk_327CA0;

s32 func(void) {
    return (s32)&unk_327CA0;
}
