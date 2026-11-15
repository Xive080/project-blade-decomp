asm void f(void) {
    .set noreorder
    .set noat
    .word 0x80820000
    .word 0x0080302d
    beqz v0,L121cf4
    .word 0x90830000
    .word 0x3c07002f
    nop
L121cc0:
    sll v0,v1,0x18
    .word 0x00022e03
    addiu v1,a3,-19647
    addu v1,a1,v1
    .word 0x90620000
    andi v0,v0,0x1
    beqz v0,L121ce4
    addiu v0,a1,32
    .word 0xa0c20000
L121ce4:
    addiu a2,a2,1
    .word 0x90c20000
    bnez v0,L121cc0
    .word 0x0040182d
L121cf4:
    jr ra
    .word 0x0080102d
}
