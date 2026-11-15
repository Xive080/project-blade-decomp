asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c021000
    .word 0x3c03ffff
    .word 0x3442e060
    .word 0x3463ffff
    beq a0,v1,L101f10
    lw v0,0(v0)
    .word 0x3c011001
    .word 0xac24e060
L101f10:
    jr ra
    nop
}
