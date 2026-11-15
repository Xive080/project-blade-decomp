extern void func_00121a58(void);
asm void f(void) {
    .set noreorder
    .set noat
    sltiu v0,a0,4
    beqz v0,L112430
    .word 0x3c02002f
    .word 0x3c02002e
    sll v1,a0,0x2
    addiu v0,v0,-17200
    .word 0x00a0202d
    addu v1,v1,v0
    j func_00121a58
    .word 0x8c650000
L112430:
    .word 0x9043a6e0
    jr ra
    .word 0xa0a30000
}
