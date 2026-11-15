asm void f(void) {
    .set noreorder
    .set noat
    beqz a0,L1095cc
    .word 0x0000182d
    addiu v0,zero,1
    beq a0,v0,L1095fc
    .word 0x0060102d
    b L109610
    nop
L1095cc:
    .word 0x3c031000
    ori v1,v1,0x2010
    nop
L1095d8:
    .word 0x8c620000
    nop
    nop
    nop
    nop
    bltz v0,L1095d8
    nop
    b L10960c
    .word 0x0000182d
L1095fc:
    .word 0x3c021000
    ori v0,v0,0x2010
    .word 0x8c430000
    srl v1,v1,0x1f
L10960c:
    .word 0x0060102d
L109610:
    jr ra
    nop
}
