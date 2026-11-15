asm void f(void) {
    .set noreorder
    .set noat
    lw v0,-30320(gp)
    .word 0x70003e28
    addiu v1,zero,4
    addu v0,a0,v0
    lw t0,0(v0)
    b La
    .word 0x71004e28
Lb:
    lw v0,48(t1)
    bne v0,v1,Lc
    addiu v0,a3,1
    andi v0,a3,0xff
    sll v0,v0,0x6
    b Ld
    addu a3,t0,v0
Lc:
    addiu t1,t1,64
    andi a3,v0,0xff
La:
    andi v0,a3,0xff
    slti v0,v0,2
    bnez v0,Lb
    nop
    .word 0x70003e28
Ld:
    lw v1,4(a3)
    .word 0x70801628
    sw v1,0(a1)
    lw v1,8(a3)
    jr ra
    sw v1,0(a2)
}
