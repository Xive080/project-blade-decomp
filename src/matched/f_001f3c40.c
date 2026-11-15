asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x3c03002e
    .word 0x7fb00000
    addiu a2,v1,20416
    .word 0x8f85877c
    .word 0x8cc30024
    beq a0,v1,L1f3cf4
    addu s0,a0,a1
    .word 0x90830020
    andi v1,v1,0x80
    bnez v1,L1f3cf4
    nop
    .word 0x8e030058
    bnez v1,L1f3cf4
    nop
    .word 0x8cc20020
    jalr ra,v0
    addiu a1,zero,1
    .word 0x8e030058
    beqz v1,L1f3cf4
    nop
    .word 0x8e050008
    .word 0x8c660004
    addiu a0,zero,-16384
    and a0,a1,a0
    .word 0xae040008
    .word 0x8e040008
    srl a2,a2,0x6
    andi a1,a2,0x3fff
    .word 0x3c03fff8
    ori v1,v1,0x1f
    or a0,a0,a1
    .word 0xae040008
    .word 0x8e04000c
    .word 0x8e050010
    and v1,a0,v1
    addu a2,a2,a1
    .word 0xae03000c
    andi v1,a2,0x3fff
    andi v1,v1,0x3fff
    sll a0,v1,0x5
    .word 0x8e03000c
    or v1,v1,a0
    .word 0xae03000c
L1f3cf4:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
