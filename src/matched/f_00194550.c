asm void func(void) {
    .set noreorder
    .set noat
    lw v0,-31560(gp)
    beqz v0,L1
    .word 0x70001628
    lw v0,484(a0)
    bnez v0,L2
    nop
    .word 0x70001628
L1:
    b L4
    nop
L2:
    beqz a1,L4
    .word 0x70001628
    b L4
    lw v0,1400(a1)
    .word 0x70001628
L4:
    jr ra
    nop
}
