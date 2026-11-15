asm void f(void) {
    .set noreorder
    .set noat
    lui v0,0x31
    addiu v0,v0,30080
    sll v1,a0,0x2
    addu v1,v0,v1
    lui v0,0x2000
    or v0,v1,v0
    lw v1,0(v0)
    addiu v0,zero,4
    beq v1,v0,L3c
    nop
    addiu v0,zero,3
    beq v1,v0,L3c
    nop
    b LEND
    addiu v0,zero,1
L3c:
    lui v0,0x31
    addiu v0,v0,30016
    sll v1,a0,0x3
    addu v0,v0,v1
    b LEND
    lw v0,0(v0)
    addiu v0,zero,1
LEND:
    jr ra
    nop
}
