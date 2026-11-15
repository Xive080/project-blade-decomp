asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    .word 0x3c020033
    sq s1,16(sp)
    sq s0,0(sp)
    addiu v0,v0,-23008
    addiu s1,v0,12
    lhu v1,60(a0)
    lhu v0,12(v0)
    beq v1,v0,L21f228
    .word 0x70808628
    lbu v0,2(s0)
    andi v0,v0,0x1
    beqz v0,L21f220
    nop
    lw a2,0(a1)
    lwc1 f12,80(a1)
    lw v0,84(a1)
    jalr ra,v0
    addiu a1,a1,16
L21f220:
    lhu v0,0(s1)
    sh v0,60(s0)
L21f228:
    .word 0x72001628
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
