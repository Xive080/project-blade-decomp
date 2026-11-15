asm void func(void) {
    .set noreorder
    .set noat
    lw v0,-31560(gp)
    beqz v0,L1
    .word 0x70001628
    lw v0,484(a0)
    bnez v0,L2
    .word 0x70001628
    .word 0x70001628
L1:
    b L2
    nop
    .word 0x70001628
L2:
    jr ra
    nop
}
