struct unk_2E43B0 {
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

extern struct unk_2E43B0 unk_2E43B0;

s32 func(void) {
    return (s32)&unk_2E43B0;
}
