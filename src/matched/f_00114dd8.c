asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c02002f
    .word 0x3c032000
    .word 0x8c457028
    beqz a1,L114df4
    or a0,a0,v1
    .word 0x8c820000
    .word 0xaca20000
L114df4:
    .word 0x3c02002f
    .word 0x8c43702c
    beqz v1,L114e10
    .word 0x3c02002f
    .word 0x8c820004
    .word 0xac620000
    .word 0x3c02002f
L114e10:
    .word 0x8c437030
    beqz v1,L114e24
    nop
    .word 0x8c820090
    .word 0xac620000
L114e24:
    jr ra
    nop
}
