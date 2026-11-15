asm int f(int *d, int *s, unsigned n) {
    .set noreorder
    srl a2,a2,2
    beqz a2,L2
    daddu a3,zero,zero
    nop
L1:
    lw v1,0(a1)
    addiu a3,a3,1
    addiu a1,a1,4
    sltu v0,a3,a2
    sw v1,0(a0)
    addiu a0,a0,4
    bnez v0,L1
    nop
L2:
    jr ra
    daddu v0,zero,zero
}
