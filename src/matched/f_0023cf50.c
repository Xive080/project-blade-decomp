asm void f(void) {
    .set noreorder
    .set noat
    lw v0,-30320(gp)
    .word 0x70002e28
    addiu v1,zero,4
    addu v0,a0,v0
    lw a0,0(v0)
    b L23cf90
    .word 0x70803628
L23cf6c:
    lw v0,48(a2)
    bne v0,v1,L23cf88
    addiu v0,a1,1
    andi v0,a1,0xff
    sll v0,v0,0x6
    b L23cfa0
    addu v0,a0,v0
L23cf88:
    addiu a2,a2,64
    andi a1,v0,0xff
L23cf90:
    andi v0,a1,0xff
    slti v0,v0,2
    bnez v0,L23cf6c
    .word 0x70001628
L23cfa0:
    jr ra
    lw v0,0(v0)
}
