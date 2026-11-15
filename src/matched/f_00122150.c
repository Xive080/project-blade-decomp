asm void f(void) {
    .set noreorder
    .set noat
    lbu v1,0(a0)
    sll a1,a1,0x18
    sra a1,a1,0x18
    .word 0x0000302d
    beqz v1,L188
    .word 0x0060102d
L168:
    sll v0,v0,0x18
    sra v0,v0,0x18
    xor v0,v0,a1
    movz a2,a0,v0
    addiu a0,a0,1
    lbu v1,0(a0)
    bnez v1,L168
    .word 0x0060102d
L188:
    sll v1,v1,0x18
    .word 0x0080102d
    sra v1,v1,0x18
    xor v1,v1,a1
    jr ra
    movn v0,a2,v1
}
