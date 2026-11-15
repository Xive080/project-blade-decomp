asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c02002f
    .word 0x8ca3aa78
    .word 0x8c442188
    addiu a0,a0,-1
    slt v1,v1,a0
    beqz v1,L107584
    .word 0x3c08002f
    .word 0x3c021000
    .word 0x8d062184
    ori v0,v0,0xb010
    ori a0,zero,65472
    .word 0x3c03000f
    .word 0xac460000
    addiu a3,zero,256
    .word 0x3c011001
    .word 0xac24b020
    .word 0x3c051000
    .word 0x3c047000
    ori v1,v1,0xfc00
    .word 0x3c020fff
    addu a2,a2,v1
    .word 0x3c011001
    .word 0xac27b000
    ori a1,a1,0x2000
    ori a0,a0,0x3ff
    ori v0,v0,0xffff
    .word 0xaca40000
    and a2,a2,v0
    b L1075e8
    .word 0xad062184
L107584:
    .word 0x8ca2aa78
    bne v0,a0,L1075e8
    .word 0x3c03002f
    .word 0x8ca5aa78
    .word 0x3c06002f
    .word 0x8cc42180
    sll v0,a1,0xa
    .word 0x8c672184
    subu v0,v0,a1
    .word 0x3c031000
    subu a0,a0,v0
    ori v1,v1,0xb010
    .word 0xacc42180
    sll a1,a0,0x6
    .word 0xac670000
    addiu a2,zero,256
    .word 0x3c011001
    .word 0xac25b020
    .word 0x3c021000
    .word 0x3c037000
    .word 0x3c011001
    .word 0xac26b000
    or a0,a0,v1
    ori v0,v0,0x2000
    .word 0xac440000
L1075e8:
    sync
    ei
    jr ra
    .word 0x0000102d
}
