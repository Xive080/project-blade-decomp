asm void f(void) {
    .set noreorder
    lui v0,0x2e
    addiu a1,zero,2
    lw v1,-21868(v0)
    lw a0,64(v1)
    lw v0,8(a0)
    beq v0,a1,L1
    lui v0,0x2e
    lw v1,-21564(v0)
    sw a1,8(a0)
    sw v1,172(a0)
L1:
    lui v1,0x2e
    addiu v0,zero,1
    jr ra
    sw v0,-19648(v1)
}
