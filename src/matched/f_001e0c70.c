asm void f(void) {
    .set noreorder
    .set noat
    lw v0,-30816(gp)
    bnez v0,LEND
    .word 0x70001628
    beqz a0,L24
    addiu v0,zero,16
    addiu v0,zero,32
    sw v0,-32432(gp)
    .word 0x3c024b7f
    ori v1,v0,0xffff
    .word 0x3c020033
    addiu v0,v0,-23008
    b L4c
    sw v1,24(v0)
L24:
    sw v0,-32432(gp)
    .word 0x3c02477f
    ori v1,v0,0xff00
    .word 0x3c020033
    addiu v0,v0,-23008
    sw v1,24(v0)
L4c:
    addiu v0,zero,1
LEND:
    jr ra
    nop
}
