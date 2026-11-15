asm void f(void) {
    .set noreorder
    .set noat
    bnez a0,L20ffa0
    .word 0x70001628
    b L20ffbc
    nop
L20ffa0:
    lw v0,20(a0)
    bnez v0,L20ffb4
    nop
    b L20ffbc
    .word 0x70001628
L20ffb4:
    sw a1,796(v0)
    .word 0x70801628
L20ffbc:
    jr ra
    nop
}
