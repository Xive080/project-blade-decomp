asm void f(void) {
    .set noreorder
    .set noat
    lw v1,48(a0)
    lw v0,44(a0)
    addiu sp,sp,-16
    lw v1,0(v1)
    lw v0,4(v0)
    addiu a1,v1,24
    sw v0,12(sp)
    lw v0,12(a0)
    lw v1,0(v0)
    andi v0,v1,0x2
    beqz v0,L21e8b8
    addiu a2,sp,12
    lw v0,0(a2)
    addiu v1,v0,-2
    sll v0,v1,0x1
    addu v0,v0,v1
    b L21e8d4
    sw v0,0(a2)
L21e8b8:
    andi v0,v1,0x8
    beqz v0,L21e8d4
    nop
    lw v0,0(a2)
    addiu v0,v0,-1
    sll v0,v0,0x1
    sw v0,0(a2)
L21e8d4:
    lw v0,12(a1)
    lw v1,12(sp)
    beq v1,v0,L21e8f0
    nop
    lw v0,52(a0)
    ori v0,v0,0x8
    sw v0,52(a0)
L21e8f0:
    lw v0,52(a0)
    andi v0,v0,0x8
    beqz v0,L21e908
    addiu v0,zero,1
    b L21e940
    addiu sp,sp,16
L21e908:
    lw v1,48(a0)
    lw v0,12(a0)
    lw v1,0(v1)
    lw v0,0(v0)
    sw v0,56(a0)
    lw v0,44(v1)
    lw v1,56(a0)
    beq v1,v0,L21e93c
    addiu v0,zero,1
    lw v0,52(a0)
    ori v0,v0,0x8
    sw v0,52(a0)
    addiu v0,zero,1
L21e93c:
    addiu sp,sp,16
L21e940:
    jr ra
    nop
}
