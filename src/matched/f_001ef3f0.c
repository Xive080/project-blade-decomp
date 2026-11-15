extern void func_001ef1a0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0x7fbf0000
    lbu v0,-30772(gp)
    andi v0,v0,1
    beqz v0,La
    .word 0x3c02002f
    .word 0x3c02002f
    b Lb
    addiu v1,v0,2080
La:
    addiu v1,v0,2064
Lb:
    sll v0,a2,6
    addu a2,a0,v0
    sll v0,a3,6
    addu a3,a0,v0
    sll v0,t0,6
    addu t0,a0,v0
    .word 0x70602628
    jal func_001ef1a0
    .word 0x70002e28
    .word 0x7bbf0000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,16
}
