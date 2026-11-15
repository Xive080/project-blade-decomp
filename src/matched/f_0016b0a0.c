extern void func_001099c0(void);
extern void func_001099e0(void);
extern void func_00109bd0(void);
extern void func_00109c00(void);
extern void func_00109c10(void);
extern void func_00109c30(void);
extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_001214b8(void);
extern void func_00121a58(void);
extern void func_001bf2b0(void);
extern void func_001ca1f0(void);
extern void func_001ca6a0(void);
extern void func_001ca810(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdfec0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    b L16b0d0
    .word 0x70808628
L16b0b8:
    jal func_00109bd0
    nop
    jal func_00109c30
    .word 0x70402628
    jal func_00109c00
    nop
L16b0d0:
    .word 0x3c010030
    .word 0x8c225f50
    beqz v0, L16b0b8
    nop
    .word 0x2608003c
    .word 0x26040008
    addiu a2,zero,2
    addiu a3,zero,1
    jal func_001ca1f0
    .word 0x70002e28
    bnez v0, L16b130
    nop
    .word 0x3c02002f
    .word 0x27a40040
    .word 0x2445c760
    jal func_001214b8
    .word 0x2606003c
    .word 0x8e060038
    .word 0x8e020034
    .word 0x70002628
    jalr ra,v0
    .word 0x70002e28
    b L16b1c8
    nop
L16b130:
    .word 0x8e060038
    .word 0x8e020034
    .word 0x27a50030
    jalr ra,v0
    .word 0x70002628
    b L16b17c
    .word 0x8e020004
L16b14c:
    .word 0x8e060038
    .word 0x8e020034
    .word 0x26040008
    jalr ra,v0
    .word 0x27a50030
    bnez v0, L16b178
    nop
    .word 0x8fa50034
    jal func_001ca6a0
    .word 0x26040008
    nop
L16b178:
    .word 0x8e020004
L16b17c:
    bnez v0, L16b1a8
    nop
    .word 0x26040008
    jal func_001bf2b0
    .word 0x27a50030
    beqz v0, L16b1a8
    nop
    .word 0x8fa30030
    addiu v0,zero,2344
    bne v1,v0, L16b14c
    nop
L16b1a8:
    .word 0x8e060038
    .word 0x8e020034
    .word 0x26040008
    jalr ra,v0
    .word 0x70002e28
    .word 0x26040008
    jal func_001ca810
    .word 0x70002e28
L16b1c8:
    .word 0x3c010030
    .word 0x8c315f80
    bltz s1, L16b200
    nop
    jal func_00111a70
    nop
    addiu a0,zero,2
    jal func_001099e0
    .word 0x72202e28
    jal func_00111ab8
    nop
    addiu v0,zero,-1
    .word 0x3c010030
    .word 0xac225f80
L16b200:
    .word 0xae000000
    jal func_00109c10
    .word 0x8f84838c
    b L16b0d0
    nop
    nop
    nop
    nop
    .word 0x27bdffd0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x70a08e28
    .word 0x70802e28
    .word 0x3c020030
    .word 0x7fb00000
    .word 0x24445f8c
    jal func_00121a58
    .word 0x70c08628
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac225f50
    .word 0x3c010030
    .word 0xac205f54
    .word 0x3c010030
    .word 0x3c020017
    .word 0xac315f84
    .word 0x3c010030
    addiu a0,zero,2
    .word 0x2445b010
    .word 0x70003628
    jal func_001099c0
    .word 0xac305f88
    .word 0x3c010030
    .word 0xac225f80
    .word 0x3c010030
    jal func_00109c10
    .word 0x8c245f7c
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    .word 0x27bd0030
}
