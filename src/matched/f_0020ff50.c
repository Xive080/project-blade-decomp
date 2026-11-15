asm void f(void) {
    .set noreorder
    .set noat
    bnez a0,L20ff60
    .word 0x70001628
    b L20ff7c
    nop
L20ff60:
    lw v0,20(a0)
    bnez v0,L20ff74
    nop
    b L20ff7c
    .word 0x70001628
L20ff74:
    sw a1,792(v0)
    .word 0x70801628
L20ff7c:
    jr ra
    nop
}
