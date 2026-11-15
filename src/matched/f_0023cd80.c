asm void f(void) {
    .set noreorder
    .set noat
    lw v0,-30320(gp)
    .word 0x70002e28
    addiu v1,zero,2
    addu v0,a0,v0
    lw a0,0(v0)
    b L23cdc0
    .word 0x70803628
L23cd9c:
    lw v0,48(a2)
    bne v0,v1,L23cdb8
    addiu v0,a1,1
    andi v0,a1,0xff
    sll v0,v0,0x6
    b L23cdd0
    addu v0,a0,v0
L23cdb8:
    addiu a2,a2,64
    andi a1,v0,0xff
L23cdc0:
    andi v0,a1,0xff
    slti v0,v0,2
    bnez v0,L23cd9c
    .word 0x70001628
L23cdd0:
    jr ra
    lwc1 f0,8(v0)
}
