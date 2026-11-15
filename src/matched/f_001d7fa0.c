asm void f(void) {
    .set noreorder
    .set noat
    lui v0,0x33
    addiu a1,v0,-6624
    .word 0x8ca20000
    addiu v1,zero,2
    sw v1,20(v0)
    .word 0x8ca20000
    lw v1,24(a0)
    lw v0,24(v0)
    sw v1,8(v0)
    lw v1,16(a0)
    sw v1,12(v0)
    lw v1,12(a0)
    jr ra
    sw v1,16(v0)
}
