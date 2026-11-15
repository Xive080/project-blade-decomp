asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c02b000
    ori v0,v0,0x1820
    sw a0,0(v0)
    sync 
    .word 0x3c02b000
    addiu v1,zero,1411
    ori v0,v0,0x1810
    jr ra
    sw v1,0(v0)
}
