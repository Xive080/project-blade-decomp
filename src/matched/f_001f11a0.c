asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0x7fbf0000
    lbu v0,-30772(gp)
    .word 0x70801e28
    andi v0,v0,0x1
    beqz v0,L1
    .word 0x70a03628
    .word 0x3c02002f
    b L2
    addiu a0,v0,2080
L1:
    .word 0x3c02002f
    addiu a0,v0,2064
L2:
    blez v1,L3
    sltiu at,v1,6
    beqz at,L3
    .word 0x3c02002e
    sll v1,v1,2
    addiu v0,v0,20224
    addu v0,v0,v1
    lw v0,0(v0)
    jalr ra,v0
    .word 0x70002e28
L3:
    .word 0x7bbf0000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,16
}
