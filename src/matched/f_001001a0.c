asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c021000
    addiu a3,zero,1
    ori v0,v0,0x3c10
    .word 0x3c031000
    .word 0xac470000
    ori v1,v1,0x3c20
    addiu v0,zero,2
    .word 0x0000202d
    .word 0xac620000
    sync
    cfc2 a0,$vi28
    ori a0,a0,0x200
    ctc2 a0,$vi28
    sync.p
    .word 0x3c05002e
    .word 0x3c061000
    addiu a1,a1,-22368
    ori a2,a2,0x5000
    .word 0x78a40000
    .word 0x3c031000
    ori v1,v1,0x3000
    .word 0x7cc40000
    .word 0x78a20010
    .word 0x7cc20000
    jr ra
    .word 0xac670000
}
