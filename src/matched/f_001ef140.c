extern void func_001eef60();
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0x7fbf0000
    lbu v0,-30772(gp)
    andi v0,v0,0x1
    beqz v0,L1
    .word 0x3c02002f
    .word 0x3c02002f
    b L2
    addiu v1,v0,2080
L1:
    addiu v1,v0,2064
L2:
    sll v0,a2,0x6
    addu a2,a0,v0
    sll v0,a3,0x6
    addu a3,a0,v0
    .word 0x70602628
    jal func_001eef60
    .word 0x70002e28
    .word 0x7bbf0000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,16
}
