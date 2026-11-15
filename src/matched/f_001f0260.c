asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0x7fbf0000
    lbu v0,-30772(gp)
    .word 0x70801e28
    andi v0,v0,1
    beqz v0,La
    .word 0x70c03e28
    .word 0x3c02002f
    b Lb
    addiu a0,v0,2080
La:
    .word 0x3c02002f
    addiu a0,v0,2064
Lb:
    blez v1,Lc
    sltiu at,v1,6
    beqz at,Lc
    .word 0x3c02002e
    sll v1,v1,2
    addiu v0,v0,20192
    addu v0,v0,v1
    lw v0,0(v0)
    .word 0x70a03628
    jalr ra,v0
    .word 0x70002e28
Lc:
    .word 0x7bbf0000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,16
}
