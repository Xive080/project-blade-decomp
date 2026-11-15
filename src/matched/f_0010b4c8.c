asm char f(char c) {
    .set noreorder
    lui v1,0x1000
    ori v1,v1,0xf130
L1:
    lw v0,0(v1)
    andi v0,v0,0x8000
    nop
    nop
    nop
    bnez v0,L1
    nop
    lui v1,0x1000
    daddu v0,a0,zero
    ori v1,v1,0xf180
    jr ra
    sb a0,0(v1)
}
