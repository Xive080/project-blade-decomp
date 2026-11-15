asm void f(void) {
    .set noreorder
    .set noat
    bnez a0,L12bcd0
    .word 0x70004e28
    b L12be1c
    .word 0x70001628
L12bcd0:
    bnez a2,L12bcdc
    nop
    addiu a2,zero,-1
L12bcdc:
    .word 0x8c88003c
    addiu v1,zero,1
    beql t0,v1,L12bd28
    addiu t1,zero,2
    addiu v0,zero,4
    beql t0,v0,L12bd1c
    .word 0x70604e28
    addiu v0,zero,2
    beql t0,v0,L12bd10
    .word 0x70004e28
    b L12bd2c
    addiu v0,zero,428
    .word 0x70004e28
L12bd10:
    b L12bd28
    nop
    .word 0x70604e28
L12bd1c:
    b L12bd28
    nop
    addiu t1,zero,2
L12bd28:
    addiu v0,zero,428
L12bd2c:
    .word 0x8c8a00cc
    .word 0x01225818
    addu t0,t2,t3
    addiu v1,t0,368
L12bd3c:
    beqz t2,L12bd84
    nop
    bnezl a1,L12bd58
    addiu a1,a1,36
    b L12bd68
    addiu a1,t0,80
    addiu a1,a1,36
L12bd58:
    sltu v0,a1,v1
    bnez v0,L12bd68
    nop
    .word 0x70002e28
L12bd68:
    beqz a1,L12bdb0
    nop
    .word 0x8ca20000
    bnez v0,L12bdb0
    nop
    b L12bdb0
    .word 0x70002e28
L12bd84:
    bnez a1,L12bd94
    nop
    b L12bdb0
    .word 0x8c8503d8
L12bd94:
    .word 0x8c8203d8
    bne a1,v0,L12bdac
    .word 0x70002e28
    b L12bdb0
    .word 0x8c8503dc
    .word 0x70002e28
L12bdac:
    nop
L12bdb0:
    beqz a1,L12bdc8
    nop
    .word 0x8ca2000c
    and v0,v0,a2
    beqz v0,L12bd3c
    nop
L12bdc8:
    beqz a1,L12be1c
    .word 0x70a01628
    beqz a3,L12be18
    nop
    addu v0,t2,t3
    addiu v0,v0,80
    .word 0x3c0338e3
    subu a2,a1,v0
    ori v1,v1,0x8e39
    .word 0x00660018
    sll v0,t1,0x5
    addu v0,v0,a0
    mfhi v1
    srl a0,a2,0x1f
    sra v1,v1,0x3
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v1,v0
    .word 0x8c420378
    .word 0xace20000
L12be18:
    .word 0x70a01628
L12be1c:
    jr ra
    nop
}
