asm void f(void) {
    .set noreorder
    .set noat
    sltiu v0,a0,10
    .word 0x10400006
    .word 0x3c02002e
    sll v1,a0,2
    .word 0x2442a8d0
    addu v1,v1,v0
    jr ra
    lw v0,0(v1)
}
