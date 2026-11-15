extern void F1c5eb0(void);
extern void F1c5f30(void);
extern void F1c5f50(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    .word 0x3C010031
    lw a1,-24960(at)
    .word 0x70808628
    addiu a0,zero,1
    beq a1,a0,L18635c
    nop
    .word 0x3C030031
    addiu v1,v1,-24960
    ori a2,zero,0x8010
    addu v1,v1,a2
    lw v1,0(v1)
    blez v1,L186350
    addiu v1,zero,1
    bnez a1,L186314
    nop
    .word 0x3C010031
    jal F1c5eb0
    lw a1,-24956(at)
    .word 0x3C010031
    lw a2,7824(at)
    .word 0x3C020031
    addiu a1,v0,-24944
    .word 0x3C020031
    addiu a0,zero,3
    .word 0x3C010031
    lw t0,9364(at)
    jal F1c5f50
    addiu a3,v0,7828
    b L18633c
    nop
L186314:
    bne a1,a0,L18633c
    nop
    jal F1c5eb0
    .word 0x70002E28
    .word 0x3C010031
    lw a2,7824(at)
    .word 0x3C020031
    addiu a0,zero,1
    jal F1c5f30
    addiu a1,v0,-24944
L18633c:
    .word 0x3C010031
    sw zero,7824(at)
    .word 0x3C010031
    sw zero,9364(at)
    addiu v1,zero,1
L186350:
    .word 0x3C010031
    b L186400
    sw v1,-24960(at)
L18635c:
    .word 0x3C030031
    addiu v1,v1,-24960
    ori a2,zero,0x8010
    addu v1,v1,a2
    lw v1,0(v1)
    slti at,v1,511
    bnez at,L186400
    nop
    blez v1,L186400
    nop
    bnez a1,L1863c8
    nop
    .word 0x3C010031
    jal F1c5eb0
    lw a1,-24956(at)
    .word 0x3C010031
    lw a2,7824(at)
    .word 0x3C020031
    addiu a1,v0,-24944
    .word 0x3C020031
    addiu a0,zero,3
    .word 0x3C010031
    lw t0,9364(at)
    jal F1c5f50
    addiu a3,v0,7828
    b L1863f0
    nop
L1863c8:
    bne a1,a0,L1863f0
    nop
    jal F1c5eb0
    .word 0x70002E28
    .word 0x3C010031
    lw a2,7824(at)
    .word 0x3C020031
    addiu a0,zero,1
    jal F1c5f30
    addiu a1,v0,-24944
L1863f0:
    .word 0x3C010031
    sw zero,7824(at)
    .word 0x3C010031
    sw zero,9364(at)
L186400:
    .word 0x3C030031
    addiu a0,v1,-24960
    ori a1,zero,0x8010
    .word 0x3C010031
    lw v1,7824(at)
    addu a0,a0,a1
    lw a1,0(a0)
    addiu v1,v1,2
    .word 0x3C010031
    sw v1,7824(at)
    .word 0x3C040031
    .word 0xC6000000
    addiu a0,a0,-24960
    sll v1,a1,0x6
    addu v1,a0,v1
    .word 0xE4600010
    .word 0xC6000004
    .word 0xE4600014
    .word 0xC6000008
    .word 0xE4600030
    .word 0xC600000C
    .word 0xE4600034
    .word 0xC6000010
    .word 0xE4600038
    .word 0xC6000014
    .word 0xE460003C
    .word 0xC6000018
    .word 0xE4600050
    .word 0xC600001C
    .word 0xE4600054
    .word 0xC6000020
    .word 0xE4600070
    .word 0xC6000024
    .word 0xE4600074
    .word 0xC6000028
    .word 0xE4600078
    .word 0xC600002C
    .word 0xE460007C
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
