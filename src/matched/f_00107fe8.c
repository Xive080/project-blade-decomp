asm void f(void) {
    .set noreorder
    .set noat
    .word 0x8c820040
    sll a1,a1,0x3
    addiu v1,v0,12
    addu v0,v0,a1
    addu v1,v1,a1
    .word 0xac470010
    .word 0x8c620000
    jr ra
    .word 0xac660000
}
