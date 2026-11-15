extern void func_001c0150(void);
extern void func_001c24b0(void);
extern void func_001c8570(void);
extern void func_001ccf20(void);
extern void func_001e9a60(void);
asm void func_001e80e0(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808e28
    jal func_001e9a60
    .word 0x70a08628
    addiu a1,zero,7
L1e8100:
    .word 0x8c440000
    .word 0x8c430004
    addiu a1,a1,-1
    .word 0xae240000
    .word 0xae230004
    addiu v0,v0,8
    bgtz a1,L1e8100
    addiu s1,s1,8
    addiu a0,zero,92
    addiu a1,zero,1036
    .word 0x70003628
    .word 0x70003e28
    .word 0x70004628
    jal func_001c8570
    .word 0xaf90879c
    addiu v1,gp,-30852
    .word 0xac620000
    .word 0x8c620000
    slt v0,v0,zero
    xori v0,v0,0x1
    beqz v0,L1e81e8
    addiu a0,zero,216
    addiu a1,zero,1036
    .word 0x70003628
    .word 0x70003e28
    jal func_001c24b0
    .word 0x70004628
    addiu v1,gp,-30856
    .word 0xac620000
    .word 0x8c620000
    slt v0,v0,zero
    xori v0,v0,0x1
    beqz v0,L1e81e8
    .word 0x70002628
    addiu a1,zero,272
    .word 0x70003628
    .word 0x70003e28
    jal func_001ccf20
    .word 0x70004628
    addiu s0,gp,-30860
    .word 0xae020000
    .word 0x8e020000
    slt v0,v0,zero
    xori v0,v0,0x1
    beqz v0,L1e81e8
    nop
    .word 0x3c02001e
    addiu a1,v0,3296
    .word 0x3c02001e
    addiu a2,v0,3424
    .word 0x3c02001e
    addiu a0,zero,272
    jal func_001c0150
    addiu a3,v0,3520
    .word 0xae020000
    .word 0x8e020000
    slt v0,v0,zero
    xori v0,v0,0x1
L1e81e8:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
