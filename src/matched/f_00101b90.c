asm void f(void) {
    .set noreorder
    .set noat
    beqz a1,L101bbc
    addiu v0,a1,-1
    addiu v1,zero,-1
    nop
L101ba0:
    .word 0xa0800000
    addiu v0,v0,-1
    addiu a0,a0,1
    nop
    nop
    bne v0,v1,L101ba0
    nop
L101bbc:
    jr ra
    nop
}
