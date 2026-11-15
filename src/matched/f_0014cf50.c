asm void f(void) {
    .set noreorder
    .set noat
    bnez a1,L14cf68
    addiu v0,zero,1
    lw v0,1252(a0)
    b L14cf84
    addiu v0,v0,80
    addiu v0,zero,1
L14cf68:
    bne a1,v0,L14cf7c
    nop
    lw v0,1256(a0)
    b L14cf84
    addiu v0,v0,80
L14cf7c:
    lw v0,1276(a0)
    addiu v0,v0,80
L14cf84:
    jr ra
    nop
}
