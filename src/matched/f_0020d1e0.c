extern void func_001d5cd0(void);
extern void func_001d5ee0(void);
extern void func_0020a0e0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c020033
    addiu s0,v0,-6624
    .word 0x8E030000
    addiu v0,zero,3
    addiu a0,v1,20
    lw v1,20(v1)
    bnel v1,v0, L20d228
    .word 0x70002628
    addiu v0,zero,2
    sw v0,0(a0)
    lw v0,0(s0)
    lw a0,24(v0)
    nop
L20d228:
    lw v1,8(a0)
    addiu v0,zero,-1
    lw v1,0(v1)
    bne v1,v0, L20d244
    sll v0,v1,0x3
    b L20d274
    .word 0x70001628
L20d244:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,a0
    lw v0,24(v1)
    sw v0,28(v1)
    lw v0,8(a0)
    lw v1,0(v0)
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,a0,v0
    addiu v0,v0,20
L20d274:
    lw v0,8(v0)
    lw s2,164(v0)
    beqz s2, L20d2ec
    nop
    lw v0,8(s0)
    beqz v0, L20d2c8
    nop
    lw a0,0(s0)
    .word 0x72402e28
    jal func_001d5cd0
    .word 0x70808e28
    sw s2,0(s0)
    lw a0,8(s2)
    lw v0,0(a0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s0,16
    bnez v0, L20d2c4
    nop
    sw v0,8(s0)
L20d2c4:
    sw s1,0(s0)
L20d2c8:
    lw v0,20(s2)
    slti at,v0,2
    bnez at, L20d358
    addiu v0,zero,2
    sw v0,20(s2)
    jal func_001d5ee0
    lw a0,24(s2)
    b L20d35c
    .word 0x7bbf0030
L20d2ec:
    jal func_0020a0e0
    nop
    .word 0x70408e28
    lw v0,8(s0)
    beqz v0, L20d33c
    nop
    lw a0,0(s0)
    .word 0x72202e28
    jal func_001d5cd0
    .word 0x70809628
    sw s1,0(s0)
    lw a0,8(s1)
    lw v0,0(a0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s0,16
    bnez v0, L20d338
    nop
    sw v0,8(s0)
L20d338:
    sw s2,0(s0)
L20d33c:
    lw v0,20(s1)
    slti at,v0,2
    bnez at, L20d358
    addiu v0,zero,2
    sw v0,20(s1)
    jal func_001d5ee0
    lw a0,24(s1)
L20d358:
    .word 0x7bbf0030
L20d35c:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}
