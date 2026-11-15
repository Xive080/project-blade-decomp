asm void f(void) {
    .set noreorder
    addiu v0,zero,2
    beq a1,v0,L84
    addiu v0,zero,12
    addiu v0,zero,1
    beq a1,v0,L78
    addiu v0,zero,4
    beqz a1,L6c
    addiu v0,zero,4
    b L90
    paddub v0,zero,zero
    addiu v0,zero,4
L6c:
    b L94
    addiu a0,v0,12
    addiu v0,zero,4
L78:
    b L90
    nop
    addiu v0,zero,12
L84:
    b L90
    nop
    paddub v0,zero,zero
L90:
    addiu a0,v0,12
L94:
    lui v0,0x33
    addiu v0,v0,-23008
    lw v0,304(v0)
    jr v0
    nop
    nop
    nop
    addiu v0,a1,12
    jr ra
    sw zero,0(a2)
}
