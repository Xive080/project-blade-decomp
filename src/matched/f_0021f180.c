asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    lbu v0,2(a0)
    andi v0,v0,0x1
    beqz v0,L21f1b0
    .word 0x70808628
    lw a2,0(a1)
    lwc1 f12,80(a1)
    lw v0,84(a1)
    jalr ra,v0
    addiu a1,a1,16
L21f1b0:
    .word 0x72001628
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
