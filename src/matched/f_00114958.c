asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c022000
    or a0,a0,v0
    .word 0x8c820000
    beqzl v0,L1149a4
    .word 0x8c820004
    .word 0x8c860008
    blez v0,L1149a0
    .word 0x0000282d
    addiu a3,a0,16
    nop
L114980:
    addu v0,a3,a1
    .word 0x90430000
    addiu a1,a1,1
    .word 0xa0c30000
    .word 0x8c820000
    slt v0,a1,v0
    bnez v0,L114980
    addiu a2,a2,1
L1149a0:
    .word 0x8c820004
L1149a4:
    beqz v0,L1149e0
    nop
    .word 0x8c86000c
    blez v0,L1149e0
    .word 0x0000282d
    addiu a3,a0,80
    nop
L1149c0:
    addu v0,a3,a1
    .word 0x90430000
    addiu a1,a1,1
    .word 0xa0c30000
    .word 0x8c820004
    slt v0,a1,v0
    bnez v0,L1149c0
    addiu a2,a2,1
L1149e0:
    jr ra
    nop
}
