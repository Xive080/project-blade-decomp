asm void f(void *s) {
    .set noreorder
    daddu a1,a0,zero
    lw v0,4(a1)
    lw a0,12(a1)
    lw v1,0(a1)
    addiu v0,v0,1
    addiu a0,a0,1
    sw v0,4(a1)
    addiu v1,v1,16
    addu v1,a1,v1
    bne a0,v1,L1
    sw a0,12(a1)
    addiu v0,a1,16
    sw v0,12(a1)
L1:
    jr ra
    nop
}
