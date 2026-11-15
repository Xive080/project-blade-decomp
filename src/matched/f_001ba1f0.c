extern void func_0015c4f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    beqz a1,L1ba250
    paddub s0,a0,zero
    .word 0x8ca20004
    bnez v0,L1ba254
    paddub v0,zero,zero
    .word 0x8ca60020
    b L1ba240
    paddub a0,zero,zero
L1ba220:
    .word 0x8e030004
    .word 0x8ca2000c
    bnel v1,v0,L1ba23c
    addiu a1,a1,4
    b L1ba254
    addiu v0,zero,1
    addiu a1,a1,4
L1ba23c:
    addiu a0,a0,1
L1ba240:
    sltu v0,a0,a2
    bnez v0,L1ba220
    nop
    nop
L1ba250:
    paddub v0,zero,zero
L1ba254:
    beqz v0,L1ba33c
    nop
    .word 0x8e030000
    .word 0x3c020004
    bne v1,v0,L1ba2e8
    nop
    .word 0x8e0503dc
    beqz a1,L1ba28c
    nop
    paddub a0,zero,zero
    jal func_0015c4f0
    paddub a2,zero,zero
    b L1ba340
    .word 0x7bbf0020
L1ba28c:
    .word 0x8e02003c
    beqz v0,L1ba33c
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L1ba33c
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    paddub a1,zero,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L1ba33c
    nop
    .word 0x8e220000
    paddub a0,s0,zero
    paddub a1,zero,zero
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
    b L1ba33c
    nop
L1ba2e8:
    .word 0x8e02003c
    addiu a1,zero,1
    beq v0,a1,L1ba33c
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L1ba33c
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L1ba33c
    nop
    .word 0x8e220000
    addiu a1,zero,1
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
L1ba33c:
    .word 0x7bbf0020
L1ba340:
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
